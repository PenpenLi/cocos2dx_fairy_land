//
// for win32
//
#ifdef _STRING_RES_
#include <windows.h>

const char *g_sInputAccount = "«Î ‰»Î’À∫≈";
const char *g_sInputPassword = "«Î ‰»Î√‹¬Î";
const char *g_sInputMail = "«Î ‰»Î” œ‰";
const char *g_sAccountLenErr = "’À∫≈≥§∂»≤ªƒ‹µÕ”⁄6Œª";
const char *g_sPasswordNotMatch = "√‹¬Î≤ª“ª÷¬";
const char *g_sPasswordLenErr = "√‹¬Î≥§∂»≤ªƒ‹µÕ”⁄6Œª";
const char *g_sCreateRole = "¥¥Ω®Ω«…´";
const char *g_sGameBegin = "ø™ º”Œœ∑";
const char *g_sFightResult = "’Ω∂∑Ω·π˚";
const char *g_sStageClearTime = "Õ®πÿ ±º‰£∫";
const char *g_sHitContinuous = "◊Ó¥Û¡¨ª˜£∫";
const char *g_sKillCount = "ª˜…±∏ˆ ˝£∫";
const char *g_sStageComment = "Õ®πÿ∆¿º€£∫";
const char *g_sExpAward = "æ≠—ÈΩ±¿¯£∫";
const char *g_sMoneyAward = "Ω«ÆΩ±¿¯£∫";
const char *g_sObjectAward = "ŒÔ∆∑Ω±¿¯£∫";
const char *g_sOK = "»∑∂®";
const char *g_sYouDead = "ƒ„π“¡À!";
const char *g_sDiffculty[] = {"∆’Õ®", "¿ßƒ—", "ÿ¨√Œ",0};
const char *g_sPhysicalCost = "œ˚∫ƒÃÂ¡¶÷µ£∫%d/%d";
const char *g_sStageRefreshTimes = "πÿø®ø…À¢¥Œ ˝£∫%d";
const char *g_sFixedAward = "πÃ∂®Ω±¿¯";
const char *g_sRandomAward = "ÀÊª˙Ω±¿¯";
const char *g_sEnter = "Ω¯»Î";
const char *g_sBaggage = "–– ƒ“";
const char *g_sProfessionStr[] = {"π≠º˝ ÷", "∑® ¶", "Ω£ •",0};
const char *g_sAddattribution[] = {"«øªØ≥…π¶¬ ", "œ˚∫ƒΩ±“", "100%«øªØ≥…π¶ª®∑—±¶ Ø","À˘–Ë«øªØ Ø",0};
const char *g_sStageFmt = "Lv: %d";
const char *g_sAttribute[] = {"¡¶¡ø:","√ÙΩ›:","÷«¡¶:","ƒÕ¡¶:","æ´…Ò:","–“‘À:",0};
const char *g_sMoneyName[] = {"Ω±“", "±¶ Ø", 0};

const char *g_sSelectEnhanceObject = "«Î—°‘Ò«øªØ◊∞±∏°£";
const char *g_sEnhanceFailed = "«øªØ ß∞‹";
const char *g_sSelectCombObject = "«Î—°‘Ò∫œ≥…◊∞±∏°£";
const char *g_sCombFailed = "∫œ≥… ß∞‹";
const char *g_sQualityFmt = "∆∑÷ £∫%s";
const char *g_sTypeFmt = "¿‡–Õ£∫%s";
const char *g_sProLimitFmt = "÷∞“µœﬁ÷∆£∫%s";
const char *g_sIsBindFmt = " «∑Ò∞Û∂®£∫%s";
const char *g_sIsUniqueFmt = " «∑ÒŒ®“ª£∫%s";
const char *g_sEquipClassFmt = "◊∞±∏µ»º∂£∫%s";
const char *g_sFunctionFmt = "√Ë ˆ£∫%s";
const char *g_sSalePriceFmt = "≥ˆ €º€∏Ò£∫%d";
const char *g_sUseTimeLimitFmt = " π”√ ±œﬁ£∫%s";
const char *g_sProfession = "÷∞“µ£∫";
const char *g_sBowman = "π≠º˝ ÷";
const char *g_sMagician = "ƒß∑® ¶";
const char *g_sSoldier  = "’Ω ø";
const char *g_sNeedLevelFmt = "–Ë«Ûµ»º∂£∫%d";
const char *g_sEquipScore = "◊∞±∏∆¿∑÷£∫%d";
const char *g_sAttrib = " Ù–‘:";
const char *g_sExtraAttrib = "∏Ωº” Ù–‘:";
const char *g_sNameLevelFmt = "%s  µ»º∂:%s";
const char *g_sPriceFmt = "º€∏Ò: %s";
const char *g_sChannel[] = {"◊€∫œ","≥« –","∂”ŒÈ","π´ª·","∫⁄√˚µ•","∑¢ÀÕ",0};
const char *g_sInputHere = "«Î‘⁄’‚¿Ô ‰»Î";
const char *g_sChat = "¡ƒ ÃÏ";
const char *g_sSkillStr[] = {"ººƒ‹…Ë÷√","ººƒ‹…˝º∂","≈≠ºº…˝º∂","∏Ω…Ì…˝º∂","‘§¡Ù","…˝º∂",0};
const char *g_sSkill = "ºº ƒ‹";
const char *g_sGoldCount = "Ω±“ ˝";
const char *g_sSkillNameStr[] = {"∫Æ±˘º˝","Œﬁ”∞µ∂","Ω∏’≤˘","¡“ªπ≠","Œ◊ ı",0};
const char *g_sAllSkillNamd[] = {"÷¬√¸¥Úª˜","∫·…®«ßæ¸","Œﬁµ–≥Â∑Ê","…Û≈––˝∑Á","’˝“Â≤√æˆ","«øªØ÷¬√¸¥Úª˜","«øªØ’˝“Â≤√æˆ",0};
const char *g_sSkillInfo[] = {"À˘–ËΩ«…´µ»º∂:", "À˘–Ëººƒ‹µ„:","”µ”–ººƒ‹µ„:","ª®∑—Ω±“:",0};
const char *g_sAngrySkillInfoStr[2];
const char *g_sSkillCaption = "ººƒ‹";
const char *g_sAngrySkill = "≈≠ºº";
const char *g_sAttach = "∏Ω…Ì";
const char *g_sSkillName = "ººƒ‹√˚≥∆";
const char *g_sAngrySkillName = "≈≠ºº√˚≥∆";
const char *g_sAttachName = "∏Ω…Ì√˚≥∆";
const char *g_sNotOpen = "Œ¥ø™∑≈";
const char *g_sNotStudy = "lv:Œ¥—ßœ∞";
const char *g_sNeedSkillPro = "À˘–Ëµ¿æﬂ";
const char *g_sNextClassDescription = "œ¬“ªº∂√Ë ˆ:";
const char *g_sStudy = "—ßœ∞";
const char *g_sUpgrade = "…˝º∂";
const char *g_sMaster = "[÷˜]";
const char *g_sBranch = "[÷ß]";
const char *g_sSun = "[»’]";
const char *g_sNoDialog = "√ª”–∂‘ª∞";
const char *g_sSelectTask = "«Î—°‘Ò»ŒŒÒ";
const char *g_sLevelLow = "µ»º∂≤ª◊„";
const char *g_sPowerNeedUpgrade = " µ¡¶”–¥˝Ã·∏ﬂ";
const char *g_sAccept = "Ω” ‹";
const char *g_sContinue = "ºÃ–¯";
const char *g_sDone = "ÕÍ≥…";
const char *g_sSeek = "—∞¬∑";
const char *g_sUpgradeFmt = "«Î…˝µΩ%dº∂";

const char *g_sLevelFmt = "µ»º∂:%s";
const char *g_sReconnectLater = "∂œœﬂ¡À,«Î…‘∫Û÷ÿ¡¨°£";
const char *g_sNetworkError = "Õ¯¬Á“Ï≥£!";
const char *g_sTip = "Ã· æ";
const char *g_sWaitReconnectFmt = "µ»¥˝÷ÿ¡¨: %d";
const char *g_sWorld = "[ ¿ΩÁ]";
const char *g_sCity = "[≥« –]";
const char *g_sSystem = "[œµÕ≥]";
const char *g_sFuncNotOpen = "π¶ƒ‹‘›Œ¥ø™∑≈";
const char *g_sUiButton[] = {"±≥∞¸","ººƒ‹","∑˚Œƒ","’º–«","∏Ω…Ì","◊È∂”","∫√”—","π´ª·",0};

const char *g_sAvoid = "…¡±‹";
const char *g_sBloodBottle = "—™∆ø";
const char *g_sMagicBottle = "ƒß∆ø";
const char* g_sBagButtonStr[] = {"◊∞±∏","«øªØ","∫œ≥…","¥Úø◊","œ‚«∂","◊∞\n±∏\n¿∏","ŒÔ\n∆∑\n¿∏","’˚¿Ì",
				"“—\n◊∞\n±∏","100%«øªØ","«øªØ","≤π»´À˘”–","∫œ≥…","∑µªÿ","ºÃ–¯","Œ¥\n◊∞\n±∏",0}; 

const char *g_sNotCouldExclude = "ø…≈≈≥˝ ˝≤ª◊„";
const char *g_sNotCouldAcquire = "ø…ªÒ»° ˝≤ª◊„";
const char *g_sCurrentCouldReceive = "µ±«∞ø…ªÒµ√≈∆ ˝£∫";
const char *g_sVIPFunctionInfo = "VIPÕÊº“ø…∂ÓÕ‚ªÒµ√∏¸∂‡≈∆ ˝";
const char *g_sLottery = "≥ÈΩ±";

const char *g_sHeader = "Õ∑≤ø";
const char *g_sCloth = "“¬∑˛";
const char *g_sGlove = " ÷Ã◊";
const char *g_sShoes = "–¨◊”";
const char *g_sPet = "≥ËŒÔ";
const char *g_sWeapon = "Œ‰∆˜";
const char *g_sNecklace = "œÓ¡¥";
const char *g_sRing = "Ω‰÷∏";
const char *g_sJewelry = " Œ∆∑";
const char *g_sWing = "≥·∞Ú";
const char *g_sChoiceProfession = "«Î—°‘Ò÷∞“µ";

const char *g_sReliveConfirm = " «∑Ò‘≠µÿ∏¥ªÓ£ø";
const char *g_sYes = " «";
const char *g_sNo = "∑Ò";

const char *g_sTreasure = "±¶œ‰";
const char *g_sPresent = "¿Ò∆∑";
const char *g_sConsumables = "œ˚∫ƒ∆∑";
const char *g_sMaterial = "≤ƒ¡œ";
const char *g_sUse = " π”√";
const char *g_sSale = "≥ˆ €";

const char *g_sRefreshable = "◊Í ØÀ¢–¬";
const char *g_sNotRefreshable = "≤ªø…À¢–¬";
const char *g_sLackJewel = "◊Í Ø ˝¡ø≤ª◊„";
const char *g_sNeedJewelOpen = "œ˚∫ƒ%d◊Í Øø…ø™∆Ù";
const char *g_sMicrosoftAccor = "Œ¢»Ì—≈∫⁄";

const char *g_sBeEquipped = "“—◊∞±∏";
const char *g_sNotEquip = "Œ¥◊∞±∏";

const char *g_sReceive = " ’»°";
const char *g_sEquip = "◊∞±∏";

const char *g_sNoEquipPos = "√ª”–ø…◊∞±∏µƒŒª÷√";
const char *g_sNoItem = "√ª”–µ¿æﬂ";

const char *g_sTotal = "¿€º∆";
const char *g_sSignUp = "«©µΩ";
const char *g_sNum = "¥Œ";
const char *g_sCount = " ˝";
const char *g_sReal = " µº ";
const char *g_sGetable = "≤ªƒ‹¡Ï»°";
const char *g_sGotten = "“—¡Ï»°";
const char *g_sSymbol = "£∫";
const char *g_sSignUpSuccess = "≤π«©≥…π¶";
const char *g_sGet = "ªÒµ√£∫";
const char *g_sGetScore = "¡Ï»°∑÷ ˝";
const char *g_sPointFormat = "%dµ„";
const char *g_sLeaveDungeons = "离开副本";

char* gb2312_utf8(const char* gb2312);
char* utf8_gb2312(const char* utf8);

void string_init_array(const char**pa)
{
	while(*pa){
		*pa = gb2312_utf8(*pa);
		pa++;
	}
}

void string_init()
{
	g_sInputAccount = gb2312_utf8(g_sInputAccount);
	g_sInputPassword = gb2312_utf8(g_sInputPassword);
	g_sInputMail = gb2312_utf8(g_sInputMail);
	g_sAccountLenErr = gb2312_utf8(g_sAccountLenErr);
	g_sPasswordNotMatch = gb2312_utf8(g_sPasswordNotMatch);
	g_sPasswordLenErr = gb2312_utf8(g_sPasswordLenErr);
	g_sCreateRole = gb2312_utf8(g_sCreateRole );
	g_sGameBegin = gb2312_utf8(g_sGameBegin );
	g_sFightResult = gb2312_utf8(g_sFightResult );
	g_sStageClearTime = gb2312_utf8(g_sStageClearTime );
	g_sHitContinuous = gb2312_utf8(g_sHitContinuous );
	g_sKillCount = gb2312_utf8(g_sKillCount );
	g_sStageComment = gb2312_utf8(g_sStageComment );
	g_sExpAward = gb2312_utf8(g_sExpAward );
	g_sMoneyAward = gb2312_utf8(g_sMoneyAward );
	g_sObjectAward = gb2312_utf8(g_sObjectAward );
	g_sOK = gb2312_utf8(g_sOK );
	g_sYouDead = gb2312_utf8(g_sYouDead );
	string_init_array(g_sDiffculty);
	g_sPhysicalCost = gb2312_utf8(g_sPhysicalCost );
	g_sStageRefreshTimes = gb2312_utf8(g_sStageRefreshTimes );
	g_sFixedAward = gb2312_utf8(g_sFixedAward );
	g_sRandomAward = gb2312_utf8(g_sRandomAward );
	g_sEnter = gb2312_utf8(g_sEnter );
	g_sBaggage = gb2312_utf8(g_sBaggage );
	string_init_array(g_sProfessionStr);
	string_init_array(g_sAddattribution);
	g_sStageFmt = gb2312_utf8(g_sStageFmt );
	string_init_array(g_sAttribute);
	string_init_array(g_sMoneyName);	

	g_sSelectEnhanceObject = gb2312_utf8(g_sSelectEnhanceObject );
	g_sEnhanceFailed = gb2312_utf8(g_sEnhanceFailed );
	g_sSelectCombObject = gb2312_utf8(g_sSelectCombObject );
	g_sCombFailed = gb2312_utf8(g_sCombFailed );
	g_sQualityFmt = gb2312_utf8(g_sQualityFmt );
	g_sTypeFmt = gb2312_utf8(g_sTypeFmt );
	g_sProLimitFmt = gb2312_utf8(g_sProLimitFmt );
	g_sIsBindFmt = gb2312_utf8(g_sIsBindFmt );
	g_sIsUniqueFmt = gb2312_utf8(g_sIsUniqueFmt );
	g_sEquipClassFmt = gb2312_utf8(g_sEquipClassFmt );
	g_sFunctionFmt = gb2312_utf8(g_sFunctionFmt );
	g_sSalePriceFmt = gb2312_utf8(g_sSalePriceFmt );
	g_sUseTimeLimitFmt = gb2312_utf8(g_sUseTimeLimitFmt );
	g_sProfession = gb2312_utf8(g_sProfession);
	g_sBowman = gb2312_utf8(g_sBowman );
	g_sMagician = gb2312_utf8(g_sMagician );
	g_sSoldier  = gb2312_utf8(g_sSoldier  );
	g_sNeedLevelFmt = gb2312_utf8(g_sNeedLevelFmt );
	g_sAttrib = gb2312_utf8(g_sAttrib );
	g_sExtraAttrib = gb2312_utf8(g_sExtraAttrib );
	g_sNameLevelFmt = gb2312_utf8(g_sNameLevelFmt );
	g_sPriceFmt = gb2312_utf8(g_sPriceFmt );
	string_init_array(g_sChannel);
	g_sInputHere = gb2312_utf8(g_sInputHere );
	g_sChat = gb2312_utf8(g_sChat );
	string_init_array(g_sSkillStr);
	g_sSkill = gb2312_utf8(g_sSkill );
	g_sGoldCount = gb2312_utf8(g_sGoldCount );
	;
	string_init_array(g_sSkillNameStr);
	string_init_array(g_sAllSkillNamd);
	string_init_array(g_sSkillInfo);
	g_sAngrySkillInfoStr[0] = g_sSkillInfo[0];
	g_sAngrySkillInfoStr[1] = g_sSkillInfo[3];
	g_sSkillCaption = gb2312_utf8(g_sSkillCaption );
	g_sAngrySkill = gb2312_utf8(g_sAngrySkill );
	g_sAttach = gb2312_utf8(g_sAttach );
	g_sSkillName = gb2312_utf8(g_sSkillName );
	g_sAngrySkillName = gb2312_utf8(g_sAngrySkillName );
	g_sAttachName = gb2312_utf8(g_sAttachName );
	g_sNotOpen = gb2312_utf8(g_sNotOpen );
	g_sNotStudy = gb2312_utf8(g_sNotStudy );
	g_sNeedSkillPro = gb2312_utf8(g_sNeedSkillPro );
	g_sNextClassDescription = gb2312_utf8(g_sNextClassDescription );
	g_sStudy = gb2312_utf8(g_sStudy );
	g_sUpgrade = gb2312_utf8(g_sUpgrade );
	g_sMaster = gb2312_utf8(g_sMaster );
	g_sBranch = gb2312_utf8(g_sBranch );
	g_sSun = gb2312_utf8(g_sSun );
	g_sNoDialog = gb2312_utf8(g_sNoDialog );
	g_sSelectTask = gb2312_utf8(g_sSelectTask );
	g_sLevelLow = gb2312_utf8(g_sLevelLow );
	g_sPowerNeedUpgrade = gb2312_utf8(g_sPowerNeedUpgrade );
	g_sAccept = gb2312_utf8(g_sAccept );
	g_sContinue = gb2312_utf8(g_sContinue );
	g_sDone = gb2312_utf8(g_sDone );
	g_sSeek = gb2312_utf8(g_sSeek );
	g_sUpgradeFmt = gb2312_utf8(g_sUpgradeFmt );

	g_sLevelFmt = gb2312_utf8(g_sLevelFmt);
	g_sReconnectLater = gb2312_utf8(g_sReconnectLater);
	g_sNetworkError = gb2312_utf8(g_sNetworkError);
	g_sTip = gb2312_utf8(g_sTip);
	g_sWaitReconnectFmt = gb2312_utf8(g_sWaitReconnectFmt);
	g_sWorld = gb2312_utf8(g_sWorld);
	g_sCity = gb2312_utf8(g_sCity);
	g_sFuncNotOpen = gb2312_utf8(g_sFuncNotOpen);
	string_init_array(g_sUiButton);
	g_sAvoid = gb2312_utf8(g_sAvoid);
	g_sBloodBottle = gb2312_utf8(g_sBloodBottle);
	g_sMagicBottle = gb2312_utf8(g_sMagicBottle);

	string_init_array(g_sBagButtonStr);
	g_sNotCouldExclude = gb2312_utf8(g_sNotCouldExclude);
	g_sNotCouldAcquire = gb2312_utf8(g_sNotCouldAcquire);
	g_sCurrentCouldReceive = gb2312_utf8(g_sCurrentCouldReceive);
	g_sVIPFunctionInfo = gb2312_utf8(g_sVIPFunctionInfo);
	g_sLottery = gb2312_utf8(g_sLottery);

	g_sHeader = gb2312_utf8(g_sHeader);
	g_sCloth = gb2312_utf8(g_sCloth);
	g_sGlove = gb2312_utf8(g_sGlove);
	g_sShoes = gb2312_utf8(g_sShoes);
	g_sPet = gb2312_utf8(g_sPet);
	g_sWeapon = gb2312_utf8(g_sWeapon);
	g_sNecklace = gb2312_utf8(g_sNecklace);
	g_sRing = gb2312_utf8(g_sRing);;
	g_sJewelry = gb2312_utf8(g_sJewelry);;
	g_sWing = gb2312_utf8(g_sWing);;
	g_sChoiceProfession = gb2312_utf8(g_sChoiceProfession);
	g_sReliveConfirm = gb2312_utf8(g_sReliveConfirm);
	g_sYes = gb2312_utf8(g_sYes);
	g_sNo = gb2312_utf8(g_sNo);
	g_sTreasure = gb2312_utf8(g_sTreasure);
	g_sPresent = gb2312_utf8(g_sPresent);
	g_sConsumables = gb2312_utf8(g_sConsumables);
	g_sMaterial = gb2312_utf8(g_sMaterial);
	g_sUse = gb2312_utf8(g_sUse);
	g_sSale = gb2312_utf8(g_sSale);

	g_sRefreshable = gb2312_utf8(g_sRefreshable);
	g_sNotRefreshable = gb2312_utf8(g_sNotRefreshable);
	g_sLackJewel = gb2312_utf8(g_sLackJewel);
	g_sNeedJewelOpen = gb2312_utf8(g_sNeedJewelOpen);
	g_sMicrosoftAccor = gb2312_utf8(g_sMicrosoftAccor);
	g_sEquipScore = gb2312_utf8(g_sEquipScore);
	g_sSystem = gb2312_utf8(g_sSystem);
	g_sBeEquipped = gb2312_utf8(g_sBeEquipped);
	g_sNotEquip = gb2312_utf8(g_sNotEquip);

	g_sReceive = gb2312_utf8(g_sReceive);
	g_sEquip = gb2312_utf8(g_sEquip);
	g_sNoEquipPos = gb2312_utf8(g_sNoEquipPos);
	g_sNoItem = gb2312_utf8(g_sNoItem);
	g_sTotal = gb2312_utf8(g_sSignUp);
	g_sSignUp = gb2312_utf8(g_sSignUp);
	g_sNum = gb2312_utf8(g_sNum);
	g_sCount = gb2312_utf8(g_sCount);;
	g_sReal = gb2312_utf8(g_sReal);
	g_sCanNotGet = gb2312_utf8(g_sCanNotGet);
	g_sHaveGet = gb2312_utf8(g_sHaveGet);
	g_sHaveNotGet = gb2312_utf8(g_sHaveNotGet);
	g_sSymbol = gb2312_utf8(g_sSymbol);
	g_sSignUpSuccess = gb2312_utf8(g_sSignUpSuccess);
	g_sGet = gb2312_utf8(g_sGet);
	g_sGetScore = gb2312_utf8(g_sGetScore);
	g_sPointFormat = gb2312_utf8(g_sPointFormat);
}

void string_release()
{
}

#if 1
char* gb2312_utf8(const char* gb2312)
{
	int len = MultiByteToWideChar(CP_ACP, 0, gb2312, -1, NULL, 0);
	wchar_t* wstr = new wchar_t[len+1];
	memset(wstr, 0, len+1);
	MultiByteToWideChar(CP_ACP, 0, gb2312, -1, wstr, len);
	len = WideCharToMultiByte(CP_UTF8, 0, wstr, -1, NULL, 0, NULL, NULL);
	char* str = new char[len+1];
	memset(str, 0, len+1);
	WideCharToMultiByte(CP_UTF8, 0, wstr, -1, str, len, NULL, NULL);
	if(wstr) delete[] wstr;
	return str;
}
/*
wstring UTF8ToUnicode( const string& str )
{
	int len = 0;
	len = str.length();
	int unicodeLen = ::MultiByteToWideChar( CP_UTF8,0,str.c_str(),-1,NULL,0 ); 
	wchar_t * pUnicode; 
	pUnicode = new wchar_t[unicodeLen+1]; 
	memset(pUnicode,0,(unicodeLen+1)*sizeof(wchar_t)); 
	::MultiByteToWideChar( CP_UTF8,0,str.c_str(),-1,(LPWSTR)pUnicode,unicodeLen ); 
	wstring rt; 
	rt = ( wchar_t* )pUnicode;
	delete pUnicode; 
	return rt; 
}
*/
char* utf8_gb2312b(const char* utf8)
{
	int len = MultiByteToWideChar(CP_UTF8, 0, utf8, -1, NULL, 0);
	wchar_t* wstr = new wchar_t[len+1];
	memset(wstr, 0, len+1);
	MultiByteToWideChar(CP_UTF8, 0, utf8, -1, wstr, len);
	len = WideCharToMultiByte(CP_ACP, 0, wstr, -1, NULL, 0, NULL, NULL);
	char* str = new char[len+1];
	memset(str, 0, len+1);
	WideCharToMultiByte(CP_ACP, 0, wstr, -1, str, len, NULL, NULL);
	if(wstr) delete[] wstr;
	return str;
	
}
#endif
#endif	// _STRING_RES_