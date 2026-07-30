/*
    Plugin-SDK source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "CVector.h"

#ifdef HAS_CMATRIX
#include <CMatrix.h>

// assignments
void CVector::FromMultiply(CMatrix const& matrix, CVector const& point) {
    FromMultiply3x3(matrix, point);
    *this += CVector(matrix.tx, matrix.ty, matrix.tz);
}

void CVector::FromMultiply3x3(const CMatrix& matrix, const CVector& vector) {
    Set(
        matrix.xx * vector.x + matrix.xy * vector.y + matrix.xz * vector.z,
        matrix.yx * vector.x + matrix.yy * vector.y + matrix.yz * vector.z,
        matrix.zx * vector.x + matrix.zy * vector.y + matrix.zz * vector.z
    );
}

void CVector::FromMultiply3x3(const CVector& vector, const CMatrix& matrix) {
    Set(
        matrix.xx * vector.x + matrix.yx * vector.y + matrix.zx * vector.z,
        matrix.xy * vector.x + matrix.yy * vector.y + matrix.zy * vector.z,
        matrix.xz * vector.x + matrix.yz * vector.y + matrix.zz * vector.z
    );
}
/*
void CVector::FromMultiply(CMatrix const& matrix, CVector const& point) {
    FromMultiply3x3(matrix, point);
    *this += matrix.pos;
}

void CVector::FromMultiply3x3(const CMatrix& matrix, const CVector& vector) {
    Set(
        matrix.right.x * vector.x + matrix.up.x * vector.y + matrix.at.x * vector.z,
        matrix.right.y * vector.x + matrix.up.y * vector.y + matrix.at.y * vector.z,
        matrix.right.z * vector.x + matrix.up.z * vector.y + matrix.at.z * vector.z
    );
}

void CVector::FromMultiply3x3(const CVector& vector, const CMatrix& matrix) {
    Set(
        matrix.right.x * vector.x + matrix.right.y * vector.y + matrix.right.z * vector.z,
        matrix.up.x * vector.x + matrix.up.y * vector.y + matrix.up.z * vector.z,
        matrix.at.x * vector.x + matrix.at.y * vector.y + matrix.at.z * vector.z
    );
}
*/
// static functions

CVector CVector::Multiply(const CMatrix& matrix, const CVector& point) {
    CVector result;
    result.FromMultiply(matrix, point);
    return result;
}

CVector CVector::Multiply3x3(const CMatrix& matrix, const CVector& vector) {
    CVector result;
    result.FromMultiply3x3(matrix, vector);
    return result;
}

CVector CVector::Multiply3x3(const CVector& vector, const CMatrix& matrix) {
    CVector result;
    result.FromMultiply3x3(vector, matrix);
    return result;
}
#endif
