#pragma once

// PlayerUnknown's Battlegrounds (2.6.23) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_SlotWidgetBaseInterface_structs.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SlotWidgetBaseInterface.SlotWidgetBaseInterface_C
// 0x0000 (0x0028 - 0x0028)
class USlotWidgetBaseInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SlotWidgetBaseInterface.SlotWidgetBaseInterface_C");
		return ptr;
	}


	void GetSlotContainer(TScriptInterface<class USlotContainerInterface>* SlotContainer);
	void GetSlotItem(TScriptInterface<class USlotInterface>* SlotItem);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
