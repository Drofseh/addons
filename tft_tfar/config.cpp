class CfgPatches {
    class tft_tfar {
        units[] =  { "tf_rt1523g_ucp", "tf_rt1523g_ocp", "tf_rt1523g_wnt", "tf_rt1523g_ucp_big", "tf_rt1523g_ocp_big", "tf_rt1523g_wnt_big" };
        weapons[] =  {};
        requiredVersion = 1.0;
        requiredAddons[] = { "CBA_Main", "task_force_radio_items", "task_force_radio"};
        author = "S4 @ TFT8, YoursTruly, Fitzgerald";
        version = 2.0.0;
        versionStr = "2.0.0";
        versionAr[] = {2,0,0};
    };
};

class Extended_PostInit_EventHandlers {
    class tft_tfar {
        init = "call compile preprocessFileLineNumbers '\tft_tfar\init.sqf'";
    };
};

class CfgVehicles {
    class TFAR_rt1523g;
    class TFAR_Bag_Base;
    class TFAR_rt1523g_big;

//----------------------------------------- TFT8 Radios
    class tf_rt1523g_ucp: TFAR_rt1523g {
        author = "S4 @ TFT8 / Fitzgerald, Truly";
        displayName = "RT-1523G (ASIP) TFT8 [UCP]";
        descriptionShort = "RT-1523G (ASIP) UCP long range radio 20km";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\tft_tfar\data\ucp.paa"};
    };
    class tf_rt1523g_ocp: tf_rt1523g_ucp {
        displayName = "RT-1523G (ASIP) TFT8 [OCP]";
        descriptionShort = "RT-1523G (ASIP) OCP long range radio 20km";
        hiddenSelectionsTextures[] = {"\tft_tfar\data\ocp.paa"};
    };
    class tf_rt1523g_wnt: tf_rt1523g_ucp {
        displayName = "RT-1523G (ASIP) TFT8 [WNT]";
        descriptionShort = "RT-1523G (ASIP) WNT long range radio 20km";
        hiddenSelectionsTextures[] = {"\tft_tfar\data\wnt.paa"};
    };
    class tf_rt1523g_ucp_big: TFAR_rt1523g_big {
        displayName = "RT-1523G (ASIP) Big TFT8 [UCP]";
        descriptionShort = "RT-1523G (ASIP) UCP (Big) long range radio 20km";
        hiddenSelectionsTextures[] = {"\tft_tfar\data\ucp_big.paa"};
    };
    class tf_rt1523g_ocp_big: TFAR_rt1523g_big {
        displayName = "RT-1523G (ASIP) Big TFT8 [OCP]";
        descriptionShort = "RT-1523G (ASIP) OCP (Big) long range radio 20km";
        hiddenSelectionsTextures[] = {"\tft_tfar\data\ocp_big.paa"};
    };
    class tf_rt1523g_wnt_big: TFAR_rt1523g_big {
        displayName = "RT-1523G (ASIP) Big TFT8 [WNT]";
        descriptionShort = "RT-1523G (ASIP) WNT (Big) long range radio 20km";
        hiddenSelectionsTextures[] = {"\tft_tfar\data\wnt_big.paa"};
    };

//------------------------------------------ Arsenal Clean Up
    class TFAR_rt1523g_rhs: TFAR_rt1523g {
        scope = 1;
    };
    class TFAR_rt1523g_big_rhs: TFAR_rt1523g {
        scope = 1;
    };
    class TFAR_rt1523g_big_bwmod: TFAR_rt1523g {
        scope = 1;
    };
    class TFAR_rt1523g_big_bwmod_tropen: TFAR_rt1523g {
        scope = 1;
    };
    class TFAR_rt1523g_bwmod: TFAR_rt1523g {
        scope = 1;
    };
    class TFAR_rt1523g_fabric: TFAR_rt1523g {
        scope = 1;
    };
    class TFAR_rt1523g_green: TFAR_rt1523g {
        scope = 1;
    };
    class TFAR_rt1523g_sage: TFAR_rt1523g {
        scope = 1;
    };
    class TFAR_anprc155: TFAR_Bag_Base {
        scope = 1;
    };
    class TFAR_mr3000: TFAR_Bag_Base {
        scope = 1;
    };
    class TFAR_mr3000_bwmod: TFAR_Bag_Base {
        scope = 1;
    };
    class TFAR_mr3000_bwmod_tropen: TFAR_Bag_Base {
        scope = 1;
    };
    class TFAR_anarc210: TFAR_Bag_Base {
        scope = 1;
    };
    class TFAR_anarc164: TFAR_Bag_Base {
        scope = 1;
    };
    class TFAR_mr6000l: TFAR_Bag_Base {
        scope = 1;
    };
};

class CfgWeapons {
    class ItemRadio;
//--------------------------------- Arsenal Cleanup
    class TFAR_anprc154: ItemRadio {
        scope = 1;
    };
    class TFAR_pnr1000a: ItemRadio {
        scope = 1;
    };
};
