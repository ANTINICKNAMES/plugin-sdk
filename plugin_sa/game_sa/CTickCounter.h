/*
    Plugin-SDK file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

// TODO (?)

class CTickCounter {
public:
    CTickCounter() : m_iCount(0), m_iPeriod(0) {}

    ~CTickCounter() = default;

    void SetPeriod(const int32_t period) { m_iPeriod = period; }
    int32_t GetPeriod() { return m_iPeriod; }

    bool Tick() {
        bool shouldTrigger = m_iCount == 0;
        m_iCount++;
        if (m_iCount > m_iPeriod) {
            m_iCount = 0;
        }
        return shouldTrigger;
    }

    void SetCount(int32_t count) { m_iCount = count; }

private:
    int m_iCount;
    int m_iPeriod;
};

VALIDATE_SIZE(CTickCounter, 0x8);