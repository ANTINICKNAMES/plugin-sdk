/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "RenderWare.h"

#define DIRECTINPUT_VERSION 0x0800
#include "dinput.h"

enum eWhatThePedIsDoing 
{ 
	NO_STATE_YET = 0, 
	PED_IS_DRIVING = 0, 
	PED_IN_FIRSTPERSON, 
	PED_IN_THIRDPERSON 
};

const int SETTINGS_VERSION_NUM = 8;

enum
{
	CONT_FIRE = 0,
	CONT_FIRE_ALT,
	CONT_NEXT_WEP,
	CONT_PREV_WEP,
	CONT_FORWARD,
	CONT_BACKWARD,
	CONT_LEFT,
	CONT_RIGHT,
	CONT_UP,
	CONT_DOWN,
	CONT_CONVERSATION_YES,
	CONT_CONVERSATION_NO,
	CONT_GROUP_CONTROL_FWD,
	CONT_GROUP_CONTROL_BWD,
	CONT_ZOOM_IN,
	CONT_ZOOM_OUT,
	CONT_VEHICLE_ENTER_EXIT,
	CONT_CHANGE_RADIO_STATION_UP,
	CONT_CHANGE_RADIO_STATION_DN,
	CONT_RADIO_TRACK_SKIP,
	CONT_HORN,
	CONT_SUBMISSIONS,
	CONT_CAMERA,
	CONT_JUMPING,
	CONT_SPRINT,
	CONT_HANDBRAKE,
	CONT_TARGET,
	CONT_DUCK,
	CONT_ANSWER_PHONE,
	CONT_WALK,
	CONT_TURRETLEFT,
	CONT_TURRETRIGHT,
	CONT_TURRETUP,
	CONT_TURRETDOWN,
	CONT_LOOKBEHIND,
	CONT_MOUSELOOK,
	CONT_LOOKLEFT,
	CONT_LOOKRIGHT,
	CONT_1RST_PERSON_LOOK_UP,
	CONT_1RST_PERSON_LOOK_DN,
	CONT_NEXT_TARGET,
	CONT_PREV_TARGET,
	CONT_CAM_CENTRE,
	NUM_OF_CLASSIC_ACTIONS
};

enum PLUGIN_API e_ControllerAction {
	PED_FIREWEAPON = 0,
	PED_FIREWEAPON_ALT,
	PED_CYCLE_WEAPON_RIGHT,
	PED_CYCLE_WEAPON_LEFT,
	GO_FORWARD,
	GO_BACK,
	GO_LEFT,
	GO_RIGHT,
	PED_SNIPER_ZOOM_IN,
	PED_SNIPER_ZOOM_OUT,
	VEHICLE_ENTER_EXIT,
	CAMERA_CHANGE_VIEW_ALL_SITUATIONS,
	PED_JUMPING,
	PED_SPRINT,
	PED_LOOKBEHIND,
	PED_DUCK,
	PED_ANSWER_PHONE,
	PED_WALK,
	VEHICLE_FIREWEAPON,
	VEHICLE_FIREWEAPON_ALT,
	VEHICLE_STEER_LEFT,
	VEHICLE_STEER_RIGHT,
	VEHICLE_STEER_UP,
	VEHICLE_STEER_DOWN,
	VEHICLE_ACCELERATE,
	VEHICLE_BRAKE,
	VEHICLE_RADIO_STATION_UP,
	VEHICLE_RADIO_STATION_DOWN,
	VEHICLE_RADIO_TRACK_SKIP,
	VEHICLE_HORN,
	TOGGLE_SUBMISSIONS,
	VEHICLE_HANDBRAKE,
	PED_1RST_PERSON_LOOK_LEFT,
	PED_1RST_PERSON_LOOK_RIGHT,
	VEHICLE_LOOKLEFT,
	VEHICLE_LOOKRIGHT,
	VEHICLE_LOOKBEHIND,
	VEHICLE_MOUSELOOK,
	VEHICLE_TURRETLEFT,
	VEHICLE_TURRETRIGHT,
	VEHICLE_TURRETUP,
	VEHICLE_TURRETDOWN,
	PED_CYCLE_TARGET_LEFT,
	PED_CYCLE_TARGET_RIGHT,
	PED_CENTER_CAMERA_BEHIND_PLAYER,
	PED_LOCK_TARGET,
	NETWORK_TALK,
	CONVERSATION_YES,
	CONVERSATION_NO,
	GROUP_CONTROL_FWD,
	GROUP_CONTROL_BWD,
	PED_1RST_PERSON_LOOK_UP,
	PED_1RST_PERSON_LOOK_DOWN,
	NUM_OF_1STPERSON_ACTIONS,
	TOGGLE_DPAD,
	SWITCH_DEBUG_CAM_ON,
	TAKE_SCREEN_SHOT,
	SHOW_MOUSE_POINTER_TOGGLE,
	SWITCH_CAM_DEBUG_MENU,
	NUM_OF_CONTROLLER_ACTIONS
};

const int NUM_OR_ORDER_STATES = 5;
const int MAX_NO_POSSIBLE_BUTTON_RESPONSES = 17;

enum eMouseButtons 
{ 
	NO_BUTTON = 0, 
	LEFT_MS_BUTTON, 
	MIDDLE_MS_BUTTON, 
	RIGHT_MS_BUTTON, 
	WHEEL_MS_UP, 
	WHEEL_MS_DOWN, 
	FIRST_MS_X_BUTTON, 
	SECOND_MS_X_BUTTON 
};

const int MAX_WAYS_OF_CONTROL = 4;

enum eControllerType 
{ 
	KEYBOARD = 0, 
	OPTIONAL_EXTRA_KEY, 
	MOUSE, 
	JOY_STICK 
};

enum eContSetOrder 
{ 
	NO_ORDER_SET = 0, 
	FIRST, 
	SECOND, 
	THIRD, 
	FOURTH 
};

enum eJOY_BUTTONS 
{ 
	NO_JOYBUTTONS = 0, 
	JOYBUTTON_ONE, 
	JOYBUTTON_TWO, 
	JOYBUTTON_THREE, 
	JOYBUTTON_FOUR, 
	JOYBUTTON_FIVE, 
	JOYBUTTON_SIX, 
	JOYBUTTON_SEVEN, 
	JOYBUTTON_EIGHT, 
	JOYBUTTON_NINE, 
	JOYBUTTON_TEN, 
	JOYBUTTON_ELEVEN, 
	JOYBUTTON_TWELVE,
	JOYBUTTON_THIRTEEN, 
	JOYBUTTON_FOURTEEN, 
	JOYBUTTON_FIFTHTEEN, 
	JOYBUTTON_SIXTEEN 
};

enum eACTION_TYPE 
{ 
	FIRST_PERSON = 0, 
	THIRD_PERSON, 
	IN_CAR,
	IN_CAR_THIRD_PERSON, 
	COMMON_CONTROLS, 
	FIRST_THIRD_PERSON, 
	NO_ACTION_TYPE 
};

class PLUGIN_API CControllerKey {
public:
    unsigned int keyCode;
    unsigned int priority;
};

class PLUGIN_API CControllerAction {
public:
    CControllerKey keys[4];
};

class PLUGIN_API CControllerConfig
{
public:
	UInt32 m_uiActionInitiator;
	eContSetOrder m_uiSetOrder;


	//CControllerConfig();
};
VALIDATE_SIZE(CControllerConfig, 0x8);


class PLUGIN_API CControllerConfigManager {
public:
    char m_bJoyJustInitialised;

private:
	char field_1[3];

public:
    DIJOYSTATE2       m_OldJoyState;
    DIJOYSTATE2       m_NewJoyState;

    char              m_arrControllerActionName[NUM_OF_CONTROLLER_ACTIONS][40]; // GxtChar

    char field_B5C[17]; // pad button states
    char _pad1[3];

    CControllerAction m_actions[NUM_OF_CONTROLLER_ACTIONS];

    bool m_bStickL_X_Rgh_Lft_MovementBothDown[4];
	bool m_bStickL_Up_Dwn_MovementBothDown[4];

	bool m_bStickR_X_Rgh_Lft_MovementBothDown[4];
	bool m_bStickR_Up_Dwn_MovementBothDown[4];
	bool MouseFoundInitSet;
private:
    char _pad2[3];

public:
	/*
	bool m_bJoyJustInitialised;
	
	int m_OldJoyState;
	int m_NewJoyState;
	
	GxtChar m_arrControllerActionName[182];
	
	bool m_arrJoyButtonState[2];
	CControllerConfig ConfigurationForAction[182];
	
	bool m_bStickL_X_Rgh_Lft_MovementBothDown[4];
	bool m_bStickL_Up_Dwn_MovementBothDown[4];
	
	bool m_bStickR_X_Rgh_Lft_MovementBothDown[4];
	bool m_bStickR_Up_Dwn_MovementBothDown[4];
	bool MouseFoundInitSet;
	*/

    
	CControllerConfigManager();


	eJOY_BUTTONS GetJoyButtonJustUp();
	eJOY_BUTTONS GetJoyButtonJustDown();

	void InitDefaultControlConfiguration();
	void InitDefaultControlConfigMouse(const CMouseControllerState& MouseSetUp, bool bMouseControls);
	void InitDefaultControlConfigJoyPad(UInt32 NumButtons);
	void InitialiseControllerActionNameArray();
	void StoreMouseButtonState(eMouseButtons MouseButton, bool ButtonState);
	void UpdateJoyInConfigMenus_ButtonDown(RwInt32 ButtonPress, int PadNumber);
	void AffectControllerStateOn_ButtonDown(RwInt32 ButtonPress, eControllerType ControllerType);
	void AffectControllerStateOn_ButtonDown_Driving(RwInt32 ButtonPress, eControllerType ControllerType, CControllerState& ControllerToUpdate);
	void AffectControllerStateOn_ButtonDown_FirstPersonOnly(RwInt32 ButtonPress, eControllerType ControllerType, CControllerState& ControllerToUpdate);
	void AffectControllerStateOn_ButtonDown_ThirdPersonOnly(RwInt32 ButtonPress, eControllerType ControllerType, CControllerState& ControllerToUpdate);
	void AffectControllerStateOn_ButtonDown_FirstAndThirdPersonOnly(RwInt32 ButtonPress, eControllerType ControllerType, CControllerState& ControllerToUpdate);
	void AffectControllerStateOn_ButtonDown_VehicleAndThirdPersonOnly(RwInt32 ButtonPress, eControllerType ControllerType, CControllerState& ControllerToUpdate);
	void AffectControllerStateOn_ButtonDown_DebugStuff(RwInt32 ButtonPress, eControllerType ControllerType);

	void AffectControllerStateOn_ButtonDown_AllStates(RwInt32 ButtonPress, eControllerType ControllerType, CControllerState& ControllerToUpdate);
	void ClearSimButtonPressCheckers();
	GxtChar* GetFirstKeyboardControllerText(e_ControllerAction Action);
	eACTION_TYPE GetActionType(e_ControllerAction Action);
	void UpdateJoyInConfigMenus_ButtonUp(RwInt32 ButtonPress, int PadNumber);
	void AffectControllerStateOn_ButtonUp(RwInt32 ButtonPress, eControllerType ControllerType);
	void AffectControllerStateOn_ButtonUp_All_Player_States(RwInt32 ButtonPress, eControllerType ControllerType, CControllerState& ControllerToUpdate);
	void AffectControllerStateOn_ButtonUp_DebugStuff(RwInt32 ButtonPress, eControllerType ControllerType);

	void ClearSettingsAssociatedWithAction(e_ControllerAction Action, eControllerType ArrayToEnter);
	void ClearUniquePcButtons();
	void MakeControllerActionsBlank();
	void ReinitControls();

	bool GetIsActionAButtonCombo(e_ControllerAction Action);
	GxtChar* GetButtonComboText(e_ControllerAction Action);
	GxtChar* GetControllerSettingTextKeyBoard(e_ControllerAction Action, eControllerType ArrayToEnter);
	GxtChar* GetControllerSettingTextMouse(e_ControllerAction Action);
	GxtChar* GetControllerSettingTextJoystick(e_ControllerAction Action);
	void UpdateJoyButtonState(int PadID);
	UInt32 GetNumOfSettingsForAction(e_ControllerAction Action);


	void GetGxtStringOfCommandKeys(UInt16 KeyIndex, GxtChar* pStringToFill, UInt16 MaximumLength);
	GxtChar* GetControllerSettingTextWithOrderNumber(e_ControllerAction Action, eContSetOrder OrderSet);
	void LoadUserControlConfiguration();
	void SaveUserControlConfiguration();
	void SetControllerKeyAssociatedWithAction(e_ControllerAction Action, Int32 RwKeyCode, eControllerType ControllerArraytoEnter);
	Int32 GetControllerKeyAssociatedWithAction(e_ControllerAction Action, eControllerType ControllerArraytoEnter);
	void SetMouseButtonAssociatedWithAction(e_ControllerAction Action, Int32 MouseAction);
	Int32 GetMouseButtonAssociatedWithAction(e_ControllerAction Action); // 0x52F580


	void DeleteMatchingActionInitiators(e_ControllerAction Action, RwInt32 KeyToBeChecked, eControllerType ControllerTypeToBeChecked);
	void AffectPadFromKeyBoard();
	void AffectPadFromMouse();
	bool GetIsKeyboardKeyDown(RsKeyCodes RwKeyCodeToCheck);

	bool GetIsMouseButtonJustUp(RsKeyCodes RwKeyCodeToCheck);
	bool GetIsMouseButtonDown(RsKeyCodes RwKeyCodeToCheck);
	bool GetIsMouseButtonUp(RsKeyCodes RwKeyCodeToCheck);
	void ResetSettingOrder(e_ControllerAction Action);
	void SaveSettings(int FileHandle);
	bool LoadSettings(int FileHandle);

protected:
	void DeleteMatchingCommonControls(e_ControllerAction Action, RwInt32 KeyToBeChecked, eControllerType ControllerTypeToBeChecked);
	void DeleteMatching3rdPersonControls(e_ControllerAction Action, RwInt32 KeyToBeChecked, eControllerType ControllerTypeToBeChecked);
	void DeleteMatchingVehicleControls(e_ControllerAction Action, RwInt32 KeyToBeChecked, eControllerType ControllerTypeToBeChecked);
	void DeleteMatchingVehicle_3rdPersonControls(e_ControllerAction Action, RwInt32 KeyToBeChecked, eControllerType ControllerTypeToBeChecked);
	void DeleteMatching1rstPersonControls(e_ControllerAction Action, RwInt32 KeyToBeChecked, eControllerType ControllerTypeToBeChecked);
	void DeleteMatching1rst3rdPersonControls(e_ControllerAction Action, RwInt32 KeyToBeChecked, eControllerType ControllerTypeToBeChecked);
	bool GetIsKeyBlank(RwInt32 KeyToBeChecked, eControllerType ControllerTypeToBeChecked);


	bool GetIsKeyboardKeyJustDown(RsKeyCodes RwKeyCodeToCheck);
};

VALIDATE_SIZE(CControllerConfigManager, 0x12E4);


extern PLUGIN_API CControllerConfigManager &ControlsManager;
