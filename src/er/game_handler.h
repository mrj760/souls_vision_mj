//
// Created by PC-SAMUEL on 22/11/2024.
//

#ifndef SOULS_VISION_GAME_HANDLER_H
#define SOULS_VISION_GAME_HANDLER_H

#include "structs/cs_menu_man_imp.h"
#include "structs/world_chr_man_imp.h"
#include "structs/solo_param_repository_imp.h"
#include "structs/npc_param.h"

#include <string>

namespace souls_vision {

class GameHandler {
public:
    static void Initialize();

    static int NPC_PARAM_INDEX;

    static structs::CSMenuManImp* CSMenuManImp();
    static structs::SoloParamRepositoryImp* SoloParamRepositoryImp();
    static structs::WorldChrManImp* WorldChrManImp();
    static structs::ChrIns* GetChrInsFromHandle(uint64_t* handle);
    static structs::ParamResCap* GetParamResCap(uint32_t paramType, uint32_t paramIndex = 0);

    static structs::ChrIns* GetLocalPlayer();
    static structs::ParamRow* GetParamRow(uint32_t paramType, uint32_t paramId);
    static structs::NpcParam* GetNpcParam(uint32_t paramId);

private:
    static void LoadPointers();

    static std::string CS_MENU_MAN_IMP_SIGNATURE;
    static std::string SOLO_PARAM_REPOSITORY_IMP_SIGNATURE;
    static std::string WORLD_CHR_MAN_IMP_SIGNATURE;
    static std::string GET_CHR_INS_FROM_HANDLE_SIGNATURE;
    static std::string GET_PARAM_RES_CAP_SIGNATURE;
    static std::string MODULE_NAME;

    static uintptr_t csMenuManImp_;
    static uintptr_t soloParamRepositoryImp_;
    static uintptr_t worldChrManImp_;
    static uintptr_t getChrInsFromHandle_;
    static uintptr_t getParamResCap_;
};

} // souls_vision

#endif //SOULS_VISION_GAME_HANDLER_H