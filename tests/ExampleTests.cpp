//
// Created by Eric Ostring on 08/05/2022.
//

#include <gtest/gtest.h>
#include "../demo_rpg/include/playercharacter.h"
#include "../demo_rpg/include/types.h"
#include "../demo_rpg/include/item_manager.h"
#include "../demo_rpg/include/playableclasses_fwd.h"





TEST(ExampleTests, EquipTest) {

    PlayerCharacter rogue(new Rogue());

    EXPECT_TRUE(
            ItemManager::Equip(ItemManager::CreateWeapon("Dagger", CoreStats(), WEAPONSLOT::MELEE, 1, 3, false),
            &rogue)
            );

    EXPECT_TRUE(
            rogue.GetEquippedWeaponAt((unsigned long long)WEAPONSLOT::MELEE)
            );

    EXPECT_EQ(
            ItemManager::Equip(ItemManager::CreatePotion("Armor", 0, 1, new Buff("ArmorBuff", CoreStats(0,0,0,3,0), 5)), &rogue),
            false
            );
}


