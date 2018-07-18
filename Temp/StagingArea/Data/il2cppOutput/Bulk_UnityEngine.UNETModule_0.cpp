﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// UnityEngine.Networking.ChannelQOS
struct ChannelQOS_t1890984120;
// System.NullReferenceException
struct NullReferenceException_t1023182353;
// System.String
struct String_t;
// UnityEngine.Networking.ConnectionConfig
struct ConnectionConfig_t4173981269;
// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>
struct List_1_t3363058862;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>
struct List_1_t4078445860;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_t2606371118;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// System.Type
struct Type_t;
// UnityEngine.Networking.ConnectionSimulatorConfig
struct ConnectionSimulatorConfig_t1375549810;
// UnityEngine.Networking.GlobalConfig
struct GlobalConfig_t833512557;
// UnityEngine.Networking.HostTopology
struct HostTopology_t4059263395;
// System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig>
struct List_1_t1351088715;
// UnityEngine.Networking.Match.BasicResponse
struct BasicResponse_t1476713923;
// UnityEngine.Networking.Match.Response
struct Response_t2513603462;
// UnityEngine.Networking.Match.CreateMatchRequest
struct CreateMatchRequest_t2600446299;
// UnityEngine.Networking.Match.Request
struct Request_t2696089890;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
struct Dictionary_2_t3521823603;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t789006292;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// UnityEngine.Networking.Match.CreateMatchResponse
struct CreateMatchResponse_t1328247360;
// System.Enum
struct Enum_t4135868527;
// UnityEngine.Networking.Match.ResponseBase
struct ResponseBase_t1712937097;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t1329213854;
// System.FormatException
struct FormatException_t154580423;
// UnityEngine.Networking.Match.DestroyMatchRequest
struct DestroyMatchRequest_t2124150613;
// UnityEngine.Networking.Match.DropConnectionRequest
struct DropConnectionRequest_t2647317937;
// UnityEngine.Networking.Match.DropConnectionResponse
struct DropConnectionResponse_t3571632289;
// UnityEngine.Networking.Match.JoinMatchRequest
struct JoinMatchRequest_t3991767598;
// UnityEngine.Networking.Match.JoinMatchResponse
struct JoinMatchResponse_t845270609;
// UnityEngine.Networking.Match.ListMatchRequest
struct ListMatchRequest_t1588429355;
// UnityEngine.Networking.Match.ListMatchResponse
struct ListMatchResponse_t3200990838;
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
struct List_1_t1004336143;
// UnityEngine.Networking.Match.MatchDesc
struct MatchDesc_t3827228697;
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
struct List_1_t32447842;
// UnityEngine.Networking.Match.MatchDirectConnectInfo
struct MatchDirectConnectInfo_t2855340396;
// UnityEngine.Networking.Match.MatchInfo
struct MatchInfo_t221301733;
// UnityEngine.Networking.Types.NetworkAccessToken
struct NetworkAccessToken_t320639760;
// UnityEngine.Networking.Match.MatchInfoSnapshot
struct MatchInfoSnapshot_t3166422189;
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot>
struct List_1_t2090095927;
// UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot
struct MatchInfoDirectConnectSnapshot_t618021185;
// UnityEngine.Networking.Match.NetworkMatch
struct NetworkMatch_t2930480025;
// System.Uri
struct Uri_t100236324;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>
struct DataResponseDelegate_1_t186927816;
// UnityEngine.WWWForm
struct WWWForm_t4064702195;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1632706988;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t463507806;
// UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<UnityEngine.Networking.Match.CreateMatchResponse,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>>
struct InternalResponseDelegate_2_t992249662;
// UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<System.Object,System.Object>
struct InternalResponseDelegate_2_t3324166758;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<System.Object>
struct DataResponseDelegate_1_t3045732247;
// UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<UnityEngine.Networking.Match.JoinMatchResponse,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>>
struct InternalResponseDelegate_2_t3313634249;
// UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate
struct BasicResponseDelegate_t2196726690;
// UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<UnityEngine.Networking.Match.BasicResponse,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate>
struct InternalResponseDelegate_2_t753237801;
// UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<UnityEngine.Networking.Match.DropConnectionResponse,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate>
struct InternalResponseDelegate_2_t304736019;
// UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot>>
struct DataResponseDelegate_1_t309155718;
// UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<UnityEngine.Networking.Match.ListMatchResponse,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot>>>
struct InternalResponseDelegate_2_t873951790;
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot>
struct List_1_t343529635;
// UnityEngine.Networking.Match.SetMatchAttributesRequest
struct SetMatchAttributesRequest_t2732203151;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// UnityEngine.Networking.UNETWebSocketLib
struct UNETWebSocketLib_t687350976;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Net.EndPoint
struct EndPoint_t982345378;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
struct Dictionary_2_t3502080855;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct Dictionary_2_t1966579963;
// UnityEngine.Networking.ConnectionConfig[]
struct ConnectionConfigU5BU5D_t3548107960;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// UnityEngine.Networking.Types.NetworkID[]
struct NetworkIDU5BU5D_t383006840;
// UnityEngine.Networking.Types.NetworkAccessToken[]
struct NetworkAccessTokenU5BU5D_t3424775857;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Networking.Types.NetworkID>
struct IEqualityComparer_1_t2028950343;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,System.Collections.DictionaryEntry>
struct Transform_1_t73727401;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Int64[]
struct Int64U5BU5D_t2559172825;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.DictionaryEntry>
struct Transform_1_t1409584541;
// System.Uri/UriScheme[]
struct UriSchemeU5BU5D_t2082808316;
// System.UriParser
struct UriParser_t3890150400;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// UnityEngine.Networking.Match.MatchDesc[]
struct MatchDescU5BU5D_t1151567716;
// UnityEngine.Networking.Match.MatchDirectConnectInfo[]
struct MatchDirectConnectInfoU5BU5D_t2741069669;
// UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot[]
struct MatchInfoDirectConnectSnapshotU5BU5D_t3993957532;
// UnityEngine.Networking.Match.MatchInfoSnapshot[]
struct MatchInfoSnapshotU5BU5D_t1141422592;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t1293755103;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.DictionaryEntry>
struct Transform_1_t132201056;
// UnityEngine.Networking.ChannelQOS[]
struct ChannelQOSU5BU5D_t3224530281;
// System.Collections.Generic.List`1<System.Byte>[]
struct List_1U5BU5D_t3017264731;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_t4177122770;
// System.Action`1<System.Int32>
struct Action_1_t3123413348;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t2937767557;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t2993558019;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t2739891000;

extern RuntimeClass* NullReferenceException_t1023182353_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ChannelQOS__ctor_m3213155130_RuntimeMethod_var;
extern String_t* _stringLiteral1575624523;
extern const uint32_t ChannelQOS__ctor_m3213155130_MetadataUsageId;
extern RuntimeClass* List_1_t3363058862_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t4078445860_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m4168264895_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m441991155_RuntimeMethod_var;
extern const uint32_t ConnectionConfig__ctor_m3078028383_MetadataUsageId;
extern RuntimeClass* ChannelQOS_t1890984120_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ConnectionConfig__ctor_m2640243122_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m4246513235_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m1808369071_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m423166763_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m349679386_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3004041484_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m1327152933_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2439261711_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1960376679_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m491916196_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2814761745_RuntimeMethod_var;
extern String_t* _stringLiteral3778735433;
extern const uint32_t ConnectionConfig__ctor_m2640243122_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ConnectionConfig_Validate_m2712188470_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3550276212_RuntimeMethod_var;
extern String_t* _stringLiteral1848928535;
extern String_t* _stringLiteral1996371512;
extern String_t* _stringLiteral2828656510;
extern const uint32_t ConnectionConfig_Validate_m2712188470_MetadataUsageId;
extern const RuntimeMethod* ConnectionConfig_set_MinUpdateTimeout_m3638055834_RuntimeMethod_var;
extern String_t* _stringLiteral2027780650;
extern const uint32_t ConnectionConfig_set_MinUpdateTimeout_m3638055834_MetadataUsageId;
extern const RuntimeMethod* ConnectionConfig_set_UsePlatformSpecificProtocols_m774564531_RuntimeMethod_var;
extern String_t* _stringLiteral115901148;
extern const uint32_t ConnectionConfig_set_UsePlatformSpecificProtocols_m774564531_MetadataUsageId;
extern const uint32_t ConnectionConfig_get_ChannelCount_m1630695256_MetadataUsageId;
extern const RuntimeType* QosType_t3566496866_0_0_0_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* QosType_t3566496866_il2cpp_TypeInfo_var;
extern RuntimeClass* Enum_t4135868527_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ConnectionConfig_AddChannel_m2791320185_RuntimeMethod_var;
extern String_t* _stringLiteral584173395;
extern String_t* _stringLiteral3080010154;
extern const uint32_t ConnectionConfig_AddChannel_m2791320185_MetadataUsageId;
extern const RuntimeMethod* GlobalConfig_set_ThreadAwakeTimeout_m4006727376_RuntimeMethod_var;
extern String_t* _stringLiteral1423808650;
extern const uint32_t GlobalConfig_set_ThreadAwakeTimeout_m4006727376_MetadataUsageId;
extern RuntimeClass* List_1_t1351088715_il2cpp_TypeInfo_var;
extern RuntimeClass* ConnectionConfig_t4173981269_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m607530126_RuntimeMethod_var;
extern const RuntimeMethod* HostTopology__ctor_m284550224_RuntimeMethod_var;
extern String_t* _stringLiteral782611174;
extern String_t* _stringLiteral1442255268;
extern String_t* _stringLiteral3563946363;
extern const uint32_t HostTopology__ctor_m284550224_MetadataUsageId;
extern const uint32_t HostTopology__ctor_m1320382600_MetadataUsageId;
extern RuntimeClass* Request_t2696089890_il2cpp_TypeInfo_var;
extern const uint32_t CreateMatchRequest__ctor_m1120211933_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt32_t2560061978_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2_get_Count_m1082800239_RuntimeMethod_var;
extern String_t* _stringLiteral753200322;
extern String_t* _stringLiteral3456874466;
extern String_t* _stringLiteral2696477506;
extern const uint32_t CreateMatchRequest_ToString_m24174952_MetadataUsageId;
extern RuntimeClass* NetworkID_t4216585621_il2cpp_TypeInfo_var;
extern RuntimeClass* NodeID_t2347816311_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3097465497;
extern String_t* _stringLiteral3452614648;
extern const uint32_t CreateMatchResponse_ToString_m2170760668_MetadataUsageId;
extern RuntimeClass* IDictionary_2_t1329213854_il2cpp_TypeInfo_var;
extern RuntimeClass* FormatException_t154580423_il2cpp_TypeInfo_var;
extern const RuntimeMethod* CreateMatchResponse_Parse_m2235063011_RuntimeMethod_var;
extern String_t* _stringLiteral2350156779;
extern String_t* _stringLiteral1212291552;
extern String_t* _stringLiteral2471453923;
extern String_t* _stringLiteral2337841988;
extern String_t* _stringLiteral793118085;
extern String_t* _stringLiteral2147339521;
extern String_t* _stringLiteral592613445;
extern const uint32_t CreateMatchResponse_Parse_m2235063011_MetadataUsageId;
extern const uint32_t DestroyMatchRequest__ctor_m327028137_MetadataUsageId;
extern String_t* _stringLiteral2101124098;
extern const uint32_t DestroyMatchRequest_ToString_m3014217280_MetadataUsageId;
extern const uint32_t DropConnectionRequest__ctor_m2312219607_MetadataUsageId;
extern String_t* _stringLiteral4039479833;
extern const uint32_t DropConnectionRequest_ToString_m973853606_MetadataUsageId;
extern String_t* _stringLiteral3347455858;
extern const uint32_t DropConnectionResponse_ToString_m463686848_MetadataUsageId;
extern const RuntimeMethod* DropConnectionResponse_Parse_m1461665891_RuntimeMethod_var;
extern const uint32_t DropConnectionResponse_Parse_m1461665891_MetadataUsageId;
extern const uint32_t JoinMatchRequest__ctor_m929255344_MetadataUsageId;
extern String_t* _stringLiteral1439649509;
extern const uint32_t JoinMatchRequest_ToString_m1421470052_MetadataUsageId;
extern const uint32_t JoinMatchResponse_ToString_m3412211677_MetadataUsageId;
extern const RuntimeMethod* JoinMatchResponse_Parse_m1028678277_RuntimeMethod_var;
extern const uint32_t JoinMatchResponse_Parse_m1028678277_MetadataUsageId;
extern const uint32_t ListMatchRequest__ctor_m189544352_MetadataUsageId;
extern String_t* _stringLiteral1112616250;
extern const uint32_t ListMatchRequest_ToString_m1671513149_MetadataUsageId;
extern RuntimeClass* List_1_t1004336143_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m2320846806_RuntimeMethod_var;
extern const uint32_t ListMatchResponse__ctor_m1031598034_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Count_m119633916_RuntimeMethod_var;
extern String_t* _stringLiteral200980691;
extern const uint32_t ListMatchResponse_ToString_m3673418885_MetadataUsageId;
extern const RuntimeMethod* ResponseBase_ParseJSONList_TisMatchDesc_t3827228697_m1735849380_RuntimeMethod_var;
extern const RuntimeMethod* ListMatchResponse_Parse_m4153004001_RuntimeMethod_var;
extern String_t* _stringLiteral4026310890;
extern const uint32_t ListMatchResponse_Parse_m4153004001_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Count_m1160238088_RuntimeMethod_var;
extern String_t* _stringLiteral2091236560;
extern const uint32_t MatchDesc_ToString_m354754803_MetadataUsageId;
extern const RuntimeMethod* ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t2855340396_m861719111_RuntimeMethod_var;
extern const RuntimeMethod* MatchDesc_Parse_m664855799_RuntimeMethod_var;
extern String_t* _stringLiteral62725243;
extern String_t* _stringLiteral1742997909;
extern String_t* _stringLiteral3493283449;
extern String_t* _stringLiteral1616027436;
extern String_t* _stringLiteral2219497946;
extern String_t* _stringLiteral2404034871;
extern String_t* _stringLiteral3255536439;
extern const uint32_t MatchDesc_Parse_m664855799_MetadataUsageId;
extern RuntimeClass* HostPriority_t1616615738_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1614969392;
extern const uint32_t MatchDirectConnectInfo_ToString_m3550485463_MetadataUsageId;
extern const RuntimeMethod* MatchDirectConnectInfo_Parse_m2654967630_RuntimeMethod_var;
extern String_t* _stringLiteral2782796864;
extern String_t* _stringLiteral367361492;
extern String_t* _stringLiteral950199337;
extern const uint32_t MatchDirectConnectInfo_Parse_m2654967630_MetadataUsageId;
extern RuntimeClass* NetworkAccessToken_t320639760_il2cpp_TypeInfo_var;
extern const uint32_t MatchInfo__ctor_m1026163455_MetadataUsageId;
extern const uint32_t MatchInfo__ctor_m1464312026_MetadataUsageId;
extern String_t* _stringLiteral1693422942;
extern const uint32_t MatchInfo_ToString_m1494942688_MetadataUsageId;
extern RuntimeClass* List_1_t2090095927_il2cpp_TypeInfo_var;
extern RuntimeClass* MatchInfoDirectConnectSnapshot_t618021185_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m818466152_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m2476053975_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2463612473_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m548998622_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m957156581_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3020357317_RuntimeMethod_var;
extern const uint32_t MatchInfoSnapshot__ctor_m3116124190_MetadataUsageId;
extern RuntimeClass* Uri_t100236324_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1496010082;
extern const uint32_t NetworkMatch__ctor_m3727241709_MetadataUsageId;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* CreateMatchRequest_t2600446299_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral984512269;
extern const uint32_t NetworkMatch_CreateMatch_m3079176019_MetadataUsageId;
extern RuntimeClass* WWWForm_t4064702195_il2cpp_TypeInfo_var;
extern RuntimeClass* Utility_t2761513741_il2cpp_TypeInfo_var;
extern RuntimeClass* SourceID_t1070216020_il2cpp_TypeInfo_var;
extern RuntimeClass* InternalResponseDelegate_2_t992249662_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m187286838_RuntimeMethod_var;
extern const RuntimeMethod* InternalResponseDelegate_2__ctor_m2438927016_RuntimeMethod_var;
extern const RuntimeMethod* NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t1328247360_TisDataResponseDelegate_1_t186927816_m1028095887_RuntimeMethod_var;
extern String_t* _stringLiteral1982503484;
extern String_t* _stringLiteral3546950769;
extern String_t* _stringLiteral3793802062;
extern String_t* _stringLiteral1902401671;
extern String_t* _stringLiteral2910973284;
extern String_t* _stringLiteral1656358094;
extern String_t* _stringLiteral3929789730;
extern String_t* _stringLiteral4049040645;
extern String_t* _stringLiteral2172406980;
extern String_t* _stringLiteral4063764210;
extern String_t* _stringLiteral965208087;
extern String_t* _stringLiteral2350028096;
extern String_t* _stringLiteral1946891126;
extern const uint32_t NetworkMatch_CreateMatch_m3201661599_MetadataUsageId;
extern RuntimeClass* MatchInfo_t221301733_il2cpp_TypeInfo_var;
extern const RuntimeMethod* DataResponseDelegate_1_Invoke_m437983603_RuntimeMethod_var;
extern const uint32_t NetworkMatch_OnMatchCreate_m1430680992_MetadataUsageId;
extern RuntimeClass* JoinMatchRequest_t3991767598_il2cpp_TypeInfo_var;
extern const uint32_t NetworkMatch_JoinMatch_m2200257013_MetadataUsageId;
extern RuntimeClass* InternalResponseDelegate_2_t3313634249_il2cpp_TypeInfo_var;
extern const RuntimeMethod* NetworkMatch_OnMatchJoined_m4206427941_RuntimeMethod_var;
extern const RuntimeMethod* InternalResponseDelegate_2__ctor_m1006820792_RuntimeMethod_var;
extern const RuntimeMethod* NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t845270609_TisDataResponseDelegate_1_t186927816_m4139761490_RuntimeMethod_var;
extern String_t* _stringLiteral1901731153;
extern String_t* _stringLiteral2193882181;
extern String_t* _stringLiteral780008887;
extern const uint32_t NetworkMatch_JoinMatch_m3017753518_MetadataUsageId;
extern const uint32_t NetworkMatch_OnMatchJoined_m4206427941_MetadataUsageId;
extern RuntimeClass* DestroyMatchRequest_t2124150613_il2cpp_TypeInfo_var;
extern const uint32_t NetworkMatch_DestroyMatch_m4220430763_MetadataUsageId;
extern RuntimeClass* InternalResponseDelegate_2_t753237801_il2cpp_TypeInfo_var;
extern const RuntimeMethod* NetworkMatch_OnMatchDestroyed_m221375483_RuntimeMethod_var;
extern const RuntimeMethod* InternalResponseDelegate_2__ctor_m4083378426_RuntimeMethod_var;
extern const RuntimeMethod* NetworkMatch_ProcessMatchResponse_TisBasicResponse_t1476713923_TisBasicResponseDelegate_t2196726690_m4171655136_RuntimeMethod_var;
extern String_t* _stringLiteral3151169944;
extern String_t* _stringLiteral1165821571;
extern String_t* _stringLiteral1509869451;
extern const uint32_t NetworkMatch_DestroyMatch_m851204137_MetadataUsageId;
extern RuntimeClass* DropConnectionRequest_t2647317937_il2cpp_TypeInfo_var;
extern const uint32_t NetworkMatch_DropConnection_m496130429_MetadataUsageId;
extern RuntimeClass* InternalResponseDelegate_2_t304736019_il2cpp_TypeInfo_var;
extern const RuntimeMethod* NetworkMatch_OnDropConnection_m1639108205_RuntimeMethod_var;
extern const RuntimeMethod* InternalResponseDelegate_2__ctor_m3308930013_RuntimeMethod_var;
extern const RuntimeMethod* NetworkMatch_ProcessMatchResponse_TisDropConnectionResponse_t3571632289_TisBasicResponseDelegate_t2196726690_m986112150_RuntimeMethod_var;
extern String_t* _stringLiteral875319902;
extern String_t* _stringLiteral1437324351;
extern String_t* _stringLiteral2227996048;
extern const uint32_t NetworkMatch_DropConnection_m3349273159_MetadataUsageId;
extern RuntimeClass* ListMatchRequest_t1588429355_il2cpp_TypeInfo_var;
extern const uint32_t NetworkMatch_ListMatches_m628187040_MetadataUsageId;
extern RuntimeClass* InternalResponseDelegate_2_t873951790_il2cpp_TypeInfo_var;
extern const RuntimeMethod* NetworkMatch_OnMatchList_m2129293200_RuntimeMethod_var;
extern const RuntimeMethod* InternalResponseDelegate_2__ctor_m4032249314_RuntimeMethod_var;
extern const RuntimeMethod* NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t3200990838_TisDataResponseDelegate_1_t309155718_m2895002787_RuntimeMethod_var;
extern String_t* _stringLiteral4024629234;
extern String_t* _stringLiteral2386490997;
extern String_t* _stringLiteral2864547800;
extern String_t* _stringLiteral1875478138;
extern String_t* _stringLiteral4292784458;
extern String_t* _stringLiteral3552369471;
extern String_t* _stringLiteral332042649;
extern const uint32_t NetworkMatch_ListMatches_m3965275728_MetadataUsageId;
extern RuntimeClass* List_1_t343529635_il2cpp_TypeInfo_var;
extern RuntimeClass* MatchInfoSnapshot_t3166422189_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m2649410098_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m3706392678_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m1671013569_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2366351136_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m332103838_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2278141307_RuntimeMethod_var;
extern const RuntimeMethod* DataResponseDelegate_1_Invoke_m2625328205_RuntimeMethod_var;
extern const uint32_t NetworkMatch_OnMatchList_m2129293200_MetadataUsageId;
extern RuntimeClass* SetMatchAttributesRequest_t2732203151_il2cpp_TypeInfo_var;
extern const uint32_t NetworkMatch_SetMatchAttributes_m2296300825_MetadataUsageId;
extern const RuntimeMethod* NetworkMatch_OnSetMatchAttributes_m3218031621_RuntimeMethod_var;
extern String_t* _stringLiteral975573261;
extern String_t* _stringLiteral1068878819;
extern String_t* _stringLiteral597048638;
extern String_t* _stringLiteral961964331;
extern const uint32_t NetworkMatch_SetMatchAttributes_m3627579880_MetadataUsageId;
extern const uint32_t BasicResponseDelegate_BeginInvoke_m1586966129_MetadataUsageId;
extern String_t* _stringLiteral1686739920;
extern const uint32_t Request_ToString_m2900465251_MetadataUsageId;
extern const uint32_t Request__cctor_m3097775336_MetadataUsageId;
extern const uint32_t Response_SetFailure_m37322024_MetadataUsageId;
extern String_t* _stringLiteral2968508303;
extern const uint32_t Response_ToString_m2727218217_MetadataUsageId;
extern const RuntimeMethod* Response_Parse_m2983258584_RuntimeMethod_var;
extern String_t* _stringLiteral224826876;
extern String_t* _stringLiteral2754928008;
extern String_t* _stringLiteral1444336699;
extern const uint32_t Response_Parse_m2983258584_MetadataUsageId;
extern const RuntimeMethod* ResponseBase_ParseJSONString_m1155503459_RuntimeMethod_var;
extern String_t* _stringLiteral3969200035;
extern const uint32_t ResponseBase_ParseJSONString_m1155503459_MetadataUsageId;
extern RuntimeClass* Convert_t2465617642_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ResponseBase_ParseJSONInt32_m3954786687_RuntimeMethod_var;
extern const uint32_t ResponseBase_ParseJSONInt32_m3954786687_MetadataUsageId;
extern const RuntimeMethod* ResponseBase_ParseJSONUInt16_m3537693036_RuntimeMethod_var;
extern const uint32_t ResponseBase_ParseJSONUInt16_m3537693036_MetadataUsageId;
extern const RuntimeMethod* ResponseBase_ParseJSONUInt64_m607396206_RuntimeMethod_var;
extern const uint32_t ResponseBase_ParseJSONUInt64_m607396206_MetadataUsageId;
extern const RuntimeMethod* ResponseBase_ParseJSONBool_m1289868847_RuntimeMethod_var;
extern const uint32_t ResponseBase_ParseJSONBool_m1289868847_MetadataUsageId;
extern const uint32_t SetMatchAttributesRequest__ctor_m1899046165_MetadataUsageId;
extern String_t* _stringLiteral2373792937;
extern const uint32_t SetMatchAttributesRequest_ToString_m3394706279_MetadataUsageId;
extern RuntimeClass* UNETWebSocketLib_t687350976_il2cpp_TypeInfo_var;
extern const uint32_t NetworkTransport_AddHost_m1126110129_MetadataUsageId;
extern const uint32_t NetworkTransport_AddHost_m236682671_MetadataUsageId;
extern const uint32_t NetworkTransport_Init_m3007042076_MetadataUsageId;
extern const uint32_t NetworkTransport_Connect_m1156091760_MetadataUsageId;
extern const uint32_t NetworkTransport_Disconnect_m2330484719_MetadataUsageId;
extern const uint32_t NetworkTransport_Send_m1813092975_MetadataUsageId;
extern const uint32_t NetworkTransport_ReceiveFromHost_m245759866_MetadataUsageId;
extern String_t* _stringLiteral757602046;
extern const uint32_t NetworkTransport_GetConnectionInfo_m2259616706_MetadataUsageId;
extern RuntimeClass* NetworkTransport_t1089479308_il2cpp_TypeInfo_var;
extern const uint32_t NetworkTransport_get_IsStarted_m3614742619_MetadataUsageId;
extern const uint32_t NetworkTransport_AddHostWithSimulator_m764501553_MetadataUsageId;
extern const uint32_t NetworkTransport_GetBroadcastConnectionInfo_m4236529341_MetadataUsageId;
extern const uint32_t NetworkTransport__cctor_m3851733507_MetadataUsageId;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern const uint32_t NetworkAccessToken__ctor_m969521192_MetadataUsageId;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern const uint32_t NetworkAccessToken__ctor_m1548906336_MetadataUsageId;
extern const uint32_t NetworkAccessToken_GetByteString_m3125030115_MetadataUsageId;
extern const uint32_t UNETWebSocketLib_get_Instance_m1651960898_MetadataUsageId;
extern const uint32_t UNETWebSocketLib_AddHost_m97350380_MetadataUsageId;
extern String_t* _stringLiteral3236910554;
extern String_t* _stringLiteral1041713293;
extern String_t* _stringLiteral3452614550;
extern const uint32_t UNETWebSocketLib_Connect_m3711350676_MetadataUsageId;
extern const uint32_t UNETWebSocketLib_Disconnect_m686155674_MetadataUsageId;
extern const uint32_t UNETWebSocketLib_Send_m3927447004_MetadataUsageId;
extern const uint32_t UNETWebSocketLib_ReceiveFromHost_m712468056_MetadataUsageId;
extern const uint32_t UNETWebSocketLib_Init_m3744735638_MetadataUsageId;
extern const uint32_t UNETWebSocketLib_Stop_m4087678754_MetadataUsageId;
extern const uint32_t UNETWebSocketLib__cctor_m3654200216_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m3634856078_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_m1903597580_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m3785116836_RuntimeMethod_var;
extern const uint32_t Utility_SetAccessTokenForNetwork_m483792653_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m1533749912_RuntimeMethod_var;
extern const uint32_t Utility_GetAccessTokenForNetwork_m3460910439_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t3502080855_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2501111586_RuntimeMethod_var;
extern const uint32_t Utility__cctor_m3381620260_MetadataUsageId;
struct DownloadHandler_t2937767557_marshaled_com;
struct UploadHandler_t2993558019_marshaled_com;
struct CertificateHandler_t2739891000_marshaled_com;

struct ObjectU5BU5D_t2843939325;
struct ByteU5BU5D_t4116647657;


#ifndef U3CMODULEU3E_T692745540_H
#define U3CMODULEU3E_T692745540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745540 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745540_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef LIST_1_T1351088715_H
#define LIST_1_T1351088715_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig>
struct  List_1_t1351088715  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ConnectionConfigU5BU5D_t3548107960* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1351088715, ____items_1)); }
	inline ConnectionConfigU5BU5D_t3548107960* get__items_1() const { return ____items_1; }
	inline ConnectionConfigU5BU5D_t3548107960** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ConnectionConfigU5BU5D_t3548107960* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1351088715, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1351088715, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1351088715_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ConnectionConfigU5BU5D_t3548107960* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1351088715_StaticFields, ___EmptyArray_4)); }
	inline ConnectionConfigU5BU5D_t3548107960* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ConnectionConfigU5BU5D_t3548107960** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ConnectionConfigU5BU5D_t3548107960* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1351088715_H
#ifndef HOSTTOPOLOGY_T4059263395_H
#define HOSTTOPOLOGY_T4059263395_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.HostTopology
struct  HostTopology_t4059263395  : public RuntimeObject
{
public:
	// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.HostTopology::m_DefConfig
	ConnectionConfig_t4173981269 * ___m_DefConfig_0;
	// System.Int32 UnityEngine.Networking.HostTopology::m_MaxDefConnections
	int32_t ___m_MaxDefConnections_1;
	// System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig> UnityEngine.Networking.HostTopology::m_SpecialConnections
	List_1_t1351088715 * ___m_SpecialConnections_2;
	// System.UInt16 UnityEngine.Networking.HostTopology::m_ReceivedMessagePoolSize
	uint16_t ___m_ReceivedMessagePoolSize_3;
	// System.UInt16 UnityEngine.Networking.HostTopology::m_SentMessagePoolSize
	uint16_t ___m_SentMessagePoolSize_4;
	// System.Single UnityEngine.Networking.HostTopology::m_MessagePoolSizeGrowthFactor
	float ___m_MessagePoolSizeGrowthFactor_5;

public:
	inline static int32_t get_offset_of_m_DefConfig_0() { return static_cast<int32_t>(offsetof(HostTopology_t4059263395, ___m_DefConfig_0)); }
	inline ConnectionConfig_t4173981269 * get_m_DefConfig_0() const { return ___m_DefConfig_0; }
	inline ConnectionConfig_t4173981269 ** get_address_of_m_DefConfig_0() { return &___m_DefConfig_0; }
	inline void set_m_DefConfig_0(ConnectionConfig_t4173981269 * value)
	{
		___m_DefConfig_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_DefConfig_0), value);
	}

	inline static int32_t get_offset_of_m_MaxDefConnections_1() { return static_cast<int32_t>(offsetof(HostTopology_t4059263395, ___m_MaxDefConnections_1)); }
	inline int32_t get_m_MaxDefConnections_1() const { return ___m_MaxDefConnections_1; }
	inline int32_t* get_address_of_m_MaxDefConnections_1() { return &___m_MaxDefConnections_1; }
	inline void set_m_MaxDefConnections_1(int32_t value)
	{
		___m_MaxDefConnections_1 = value;
	}

	inline static int32_t get_offset_of_m_SpecialConnections_2() { return static_cast<int32_t>(offsetof(HostTopology_t4059263395, ___m_SpecialConnections_2)); }
	inline List_1_t1351088715 * get_m_SpecialConnections_2() const { return ___m_SpecialConnections_2; }
	inline List_1_t1351088715 ** get_address_of_m_SpecialConnections_2() { return &___m_SpecialConnections_2; }
	inline void set_m_SpecialConnections_2(List_1_t1351088715 * value)
	{
		___m_SpecialConnections_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SpecialConnections_2), value);
	}

	inline static int32_t get_offset_of_m_ReceivedMessagePoolSize_3() { return static_cast<int32_t>(offsetof(HostTopology_t4059263395, ___m_ReceivedMessagePoolSize_3)); }
	inline uint16_t get_m_ReceivedMessagePoolSize_3() const { return ___m_ReceivedMessagePoolSize_3; }
	inline uint16_t* get_address_of_m_ReceivedMessagePoolSize_3() { return &___m_ReceivedMessagePoolSize_3; }
	inline void set_m_ReceivedMessagePoolSize_3(uint16_t value)
	{
		___m_ReceivedMessagePoolSize_3 = value;
	}

	inline static int32_t get_offset_of_m_SentMessagePoolSize_4() { return static_cast<int32_t>(offsetof(HostTopology_t4059263395, ___m_SentMessagePoolSize_4)); }
	inline uint16_t get_m_SentMessagePoolSize_4() const { return ___m_SentMessagePoolSize_4; }
	inline uint16_t* get_address_of_m_SentMessagePoolSize_4() { return &___m_SentMessagePoolSize_4; }
	inline void set_m_SentMessagePoolSize_4(uint16_t value)
	{
		___m_SentMessagePoolSize_4 = value;
	}

	inline static int32_t get_offset_of_m_MessagePoolSizeGrowthFactor_5() { return static_cast<int32_t>(offsetof(HostTopology_t4059263395, ___m_MessagePoolSizeGrowthFactor_5)); }
	inline float get_m_MessagePoolSizeGrowthFactor_5() const { return ___m_MessagePoolSizeGrowthFactor_5; }
	inline float* get_address_of_m_MessagePoolSizeGrowthFactor_5() { return &___m_MessagePoolSizeGrowthFactor_5; }
	inline void set_m_MessagePoolSizeGrowthFactor_5(float value)
	{
		___m_MessagePoolSizeGrowthFactor_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOSTTOPOLOGY_T4059263395_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef UNETWEBSOCKETLIB_T687350976_H
#define UNETWEBSOCKETLIB_T687350976_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UNETWebSocketLib
struct  UNETWebSocketLib_t687350976  : public RuntimeObject
{
public:

public:
};

struct UNETWebSocketLib_t687350976_StaticFields
{
public:
	// UnityEngine.Networking.UNETWebSocketLib UnityEngine.Networking.UNETWebSocketLib::instance
	UNETWebSocketLib_t687350976 * ___instance_0;
	// System.Int32 UnityEngine.Networking.UNETWebSocketLib::m_MaxMessageSize
	int32_t ___m_MaxMessageSize_1;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(UNETWebSocketLib_t687350976_StaticFields, ___instance_0)); }
	inline UNETWebSocketLib_t687350976 * get_instance_0() const { return ___instance_0; }
	inline UNETWebSocketLib_t687350976 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(UNETWebSocketLib_t687350976 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___instance_0), value);
	}

	inline static int32_t get_offset_of_m_MaxMessageSize_1() { return static_cast<int32_t>(offsetof(UNETWebSocketLib_t687350976_StaticFields, ___m_MaxMessageSize_1)); }
	inline int32_t get_m_MaxMessageSize_1() const { return ___m_MaxMessageSize_1; }
	inline int32_t* get_address_of_m_MaxMessageSize_1() { return &___m_MaxMessageSize_1; }
	inline void set_m_MaxMessageSize_1(int32_t value)
	{
		___m_MaxMessageSize_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNETWEBSOCKETLIB_T687350976_H
#ifndef ENDPOINT_T982345378_H
#define ENDPOINT_T982345378_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.EndPoint
struct  EndPoint_t982345378  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENDPOINT_T982345378_H
#ifndef UNETWEBGLHELPERS_T4192926383_H
#define UNETWEBGLHELPERS_T4192926383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WebGL.UNetWebGlHelpers
struct  UNetWebGlHelpers_t4192926383  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNETWEBGLHELPERS_T4192926383_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef DICTIONARY_2_T3502080855_H
#define DICTIONARY_2_T3502080855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
struct  Dictionary_2_t3502080855  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	NetworkIDU5BU5D_t383006840* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	NetworkAccessTokenU5BU5D_t3424775857* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3502080855, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3502080855, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3502080855, ___keySlots_6)); }
	inline NetworkIDU5BU5D_t383006840* get_keySlots_6() const { return ___keySlots_6; }
	inline NetworkIDU5BU5D_t383006840** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(NetworkIDU5BU5D_t383006840* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3502080855, ___valueSlots_7)); }
	inline NetworkAccessTokenU5BU5D_t3424775857* get_valueSlots_7() const { return ___valueSlots_7; }
	inline NetworkAccessTokenU5BU5D_t3424775857** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(NetworkAccessTokenU5BU5D_t3424775857* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3502080855, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3502080855, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3502080855, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3502080855, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3502080855, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3502080855, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3502080855, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3502080855_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t73727401 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3502080855_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t73727401 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t73727401 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t73727401 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3502080855_H
#ifndef UTILITY_T2761513741_H
#define UTILITY_T2761513741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Utility
struct  Utility_t2761513741  : public RuntimeObject
{
public:

public:
};

struct Utility_t2761513741_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken> UnityEngine.Networking.Utility::s_dictTokens
	Dictionary_2_t3502080855 * ___s_dictTokens_0;

public:
	inline static int32_t get_offset_of_s_dictTokens_0() { return static_cast<int32_t>(offsetof(Utility_t2761513741_StaticFields, ___s_dictTokens_0)); }
	inline Dictionary_2_t3502080855 * get_s_dictTokens_0() const { return ___s_dictTokens_0; }
	inline Dictionary_2_t3502080855 ** get_address_of_s_dictTokens_0() { return &___s_dictTokens_0; }
	inline void set_s_dictTokens_0(Dictionary_2_t3502080855 * value)
	{
		___s_dictTokens_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_dictTokens_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTILITY_T2761513741_H
#ifndef CONNECTIONSIMULATORCONFIG_T1375549810_H
#define CONNECTIONSIMULATORCONFIG_T1375549810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.ConnectionSimulatorConfig
struct  ConnectionSimulatorConfig_t1375549810  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONSIMULATORCONFIG_T1375549810_H
#ifndef DICTIONARY_2_T3521823603_H
#define DICTIONARY_2_T3521823603_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
struct  Dictionary_2_t3521823603  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	Int64U5BU5D_t2559172825* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3521823603, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3521823603, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3521823603, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3521823603, ___valueSlots_7)); }
	inline Int64U5BU5D_t2559172825* get_valueSlots_7() const { return ___valueSlots_7; }
	inline Int64U5BU5D_t2559172825** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(Int64U5BU5D_t2559172825* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3521823603, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3521823603, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3521823603, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3521823603, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3521823603, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3521823603, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3521823603, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3521823603_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1409584541 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3521823603_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1409584541 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1409584541 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1409584541 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3521823603_H
#ifndef URI_T100236324_H
#define URI_T100236324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri
struct  Uri_t100236324  : public RuntimeObject
{
public:
	// System.Boolean System.Uri::isUnixFilePath
	bool ___isUnixFilePath_1;
	// System.String System.Uri::source
	String_t* ___source_2;
	// System.String System.Uri::scheme
	String_t* ___scheme_3;
	// System.String System.Uri::host
	String_t* ___host_4;
	// System.Int32 System.Uri::port
	int32_t ___port_5;
	// System.String System.Uri::path
	String_t* ___path_6;
	// System.String System.Uri::query
	String_t* ___query_7;
	// System.String System.Uri::fragment
	String_t* ___fragment_8;
	// System.String System.Uri::userinfo
	String_t* ___userinfo_9;
	// System.Boolean System.Uri::isUnc
	bool ___isUnc_10;
	// System.Boolean System.Uri::isOpaquePart
	bool ___isOpaquePart_11;
	// System.Boolean System.Uri::isAbsoluteUri
	bool ___isAbsoluteUri_12;
	// System.String[] System.Uri::segments
	StringU5BU5D_t1281789340* ___segments_13;
	// System.Boolean System.Uri::userEscaped
	bool ___userEscaped_14;
	// System.String System.Uri::cachedAbsoluteUri
	String_t* ___cachedAbsoluteUri_15;
	// System.String System.Uri::cachedToString
	String_t* ___cachedToString_16;
	// System.String System.Uri::cachedLocalPath
	String_t* ___cachedLocalPath_17;
	// System.Int32 System.Uri::cachedHashCode
	int32_t ___cachedHashCode_18;
	// System.UriParser System.Uri::parser
	UriParser_t3890150400 * ___parser_32;

public:
	inline static int32_t get_offset_of_isUnixFilePath_1() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isUnixFilePath_1)); }
	inline bool get_isUnixFilePath_1() const { return ___isUnixFilePath_1; }
	inline bool* get_address_of_isUnixFilePath_1() { return &___isUnixFilePath_1; }
	inline void set_isUnixFilePath_1(bool value)
	{
		___isUnixFilePath_1 = value;
	}

	inline static int32_t get_offset_of_source_2() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___source_2)); }
	inline String_t* get_source_2() const { return ___source_2; }
	inline String_t** get_address_of_source_2() { return &___source_2; }
	inline void set_source_2(String_t* value)
	{
		___source_2 = value;
		Il2CppCodeGenWriteBarrier((&___source_2), value);
	}

	inline static int32_t get_offset_of_scheme_3() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___scheme_3)); }
	inline String_t* get_scheme_3() const { return ___scheme_3; }
	inline String_t** get_address_of_scheme_3() { return &___scheme_3; }
	inline void set_scheme_3(String_t* value)
	{
		___scheme_3 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_3), value);
	}

	inline static int32_t get_offset_of_host_4() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___host_4)); }
	inline String_t* get_host_4() const { return ___host_4; }
	inline String_t** get_address_of_host_4() { return &___host_4; }
	inline void set_host_4(String_t* value)
	{
		___host_4 = value;
		Il2CppCodeGenWriteBarrier((&___host_4), value);
	}

	inline static int32_t get_offset_of_port_5() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___port_5)); }
	inline int32_t get_port_5() const { return ___port_5; }
	inline int32_t* get_address_of_port_5() { return &___port_5; }
	inline void set_port_5(int32_t value)
	{
		___port_5 = value;
	}

	inline static int32_t get_offset_of_path_6() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___path_6)); }
	inline String_t* get_path_6() const { return ___path_6; }
	inline String_t** get_address_of_path_6() { return &___path_6; }
	inline void set_path_6(String_t* value)
	{
		___path_6 = value;
		Il2CppCodeGenWriteBarrier((&___path_6), value);
	}

	inline static int32_t get_offset_of_query_7() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___query_7)); }
	inline String_t* get_query_7() const { return ___query_7; }
	inline String_t** get_address_of_query_7() { return &___query_7; }
	inline void set_query_7(String_t* value)
	{
		___query_7 = value;
		Il2CppCodeGenWriteBarrier((&___query_7), value);
	}

	inline static int32_t get_offset_of_fragment_8() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___fragment_8)); }
	inline String_t* get_fragment_8() const { return ___fragment_8; }
	inline String_t** get_address_of_fragment_8() { return &___fragment_8; }
	inline void set_fragment_8(String_t* value)
	{
		___fragment_8 = value;
		Il2CppCodeGenWriteBarrier((&___fragment_8), value);
	}

	inline static int32_t get_offset_of_userinfo_9() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___userinfo_9)); }
	inline String_t* get_userinfo_9() const { return ___userinfo_9; }
	inline String_t** get_address_of_userinfo_9() { return &___userinfo_9; }
	inline void set_userinfo_9(String_t* value)
	{
		___userinfo_9 = value;
		Il2CppCodeGenWriteBarrier((&___userinfo_9), value);
	}

	inline static int32_t get_offset_of_isUnc_10() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isUnc_10)); }
	inline bool get_isUnc_10() const { return ___isUnc_10; }
	inline bool* get_address_of_isUnc_10() { return &___isUnc_10; }
	inline void set_isUnc_10(bool value)
	{
		___isUnc_10 = value;
	}

	inline static int32_t get_offset_of_isOpaquePart_11() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isOpaquePart_11)); }
	inline bool get_isOpaquePart_11() const { return ___isOpaquePart_11; }
	inline bool* get_address_of_isOpaquePart_11() { return &___isOpaquePart_11; }
	inline void set_isOpaquePart_11(bool value)
	{
		___isOpaquePart_11 = value;
	}

	inline static int32_t get_offset_of_isAbsoluteUri_12() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isAbsoluteUri_12)); }
	inline bool get_isAbsoluteUri_12() const { return ___isAbsoluteUri_12; }
	inline bool* get_address_of_isAbsoluteUri_12() { return &___isAbsoluteUri_12; }
	inline void set_isAbsoluteUri_12(bool value)
	{
		___isAbsoluteUri_12 = value;
	}

	inline static int32_t get_offset_of_segments_13() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___segments_13)); }
	inline StringU5BU5D_t1281789340* get_segments_13() const { return ___segments_13; }
	inline StringU5BU5D_t1281789340** get_address_of_segments_13() { return &___segments_13; }
	inline void set_segments_13(StringU5BU5D_t1281789340* value)
	{
		___segments_13 = value;
		Il2CppCodeGenWriteBarrier((&___segments_13), value);
	}

	inline static int32_t get_offset_of_userEscaped_14() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___userEscaped_14)); }
	inline bool get_userEscaped_14() const { return ___userEscaped_14; }
	inline bool* get_address_of_userEscaped_14() { return &___userEscaped_14; }
	inline void set_userEscaped_14(bool value)
	{
		___userEscaped_14 = value;
	}

	inline static int32_t get_offset_of_cachedAbsoluteUri_15() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedAbsoluteUri_15)); }
	inline String_t* get_cachedAbsoluteUri_15() const { return ___cachedAbsoluteUri_15; }
	inline String_t** get_address_of_cachedAbsoluteUri_15() { return &___cachedAbsoluteUri_15; }
	inline void set_cachedAbsoluteUri_15(String_t* value)
	{
		___cachedAbsoluteUri_15 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAbsoluteUri_15), value);
	}

	inline static int32_t get_offset_of_cachedToString_16() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedToString_16)); }
	inline String_t* get_cachedToString_16() const { return ___cachedToString_16; }
	inline String_t** get_address_of_cachedToString_16() { return &___cachedToString_16; }
	inline void set_cachedToString_16(String_t* value)
	{
		___cachedToString_16 = value;
		Il2CppCodeGenWriteBarrier((&___cachedToString_16), value);
	}

	inline static int32_t get_offset_of_cachedLocalPath_17() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedLocalPath_17)); }
	inline String_t* get_cachedLocalPath_17() const { return ___cachedLocalPath_17; }
	inline String_t** get_address_of_cachedLocalPath_17() { return &___cachedLocalPath_17; }
	inline void set_cachedLocalPath_17(String_t* value)
	{
		___cachedLocalPath_17 = value;
		Il2CppCodeGenWriteBarrier((&___cachedLocalPath_17), value);
	}

	inline static int32_t get_offset_of_cachedHashCode_18() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedHashCode_18)); }
	inline int32_t get_cachedHashCode_18() const { return ___cachedHashCode_18; }
	inline int32_t* get_address_of_cachedHashCode_18() { return &___cachedHashCode_18; }
	inline void set_cachedHashCode_18(int32_t value)
	{
		___cachedHashCode_18 = value;
	}

	inline static int32_t get_offset_of_parser_32() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___parser_32)); }
	inline UriParser_t3890150400 * get_parser_32() const { return ___parser_32; }
	inline UriParser_t3890150400 ** get_address_of_parser_32() { return &___parser_32; }
	inline void set_parser_32(UriParser_t3890150400 * value)
	{
		___parser_32 = value;
		Il2CppCodeGenWriteBarrier((&___parser_32), value);
	}
};

struct Uri_t100236324_StaticFields
{
public:
	// System.String System.Uri::hexUpperChars
	String_t* ___hexUpperChars_19;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_20;
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_21;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_22;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_23;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_24;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_25;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_26;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_27;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_28;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_29;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_30;
	// System.Uri/UriScheme[] System.Uri::schemes
	UriSchemeU5BU5D_t2082808316* ___schemes_31;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map12
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map12_33;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map13
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map13_34;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map14
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map14_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map15
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map15_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map16
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map16_37;

public:
	inline static int32_t get_offset_of_hexUpperChars_19() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___hexUpperChars_19)); }
	inline String_t* get_hexUpperChars_19() const { return ___hexUpperChars_19; }
	inline String_t** get_address_of_hexUpperChars_19() { return &___hexUpperChars_19; }
	inline void set_hexUpperChars_19(String_t* value)
	{
		___hexUpperChars_19 = value;
		Il2CppCodeGenWriteBarrier((&___hexUpperChars_19), value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_20() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___SchemeDelimiter_20)); }
	inline String_t* get_SchemeDelimiter_20() const { return ___SchemeDelimiter_20; }
	inline String_t** get_address_of_SchemeDelimiter_20() { return &___SchemeDelimiter_20; }
	inline void set_SchemeDelimiter_20(String_t* value)
	{
		___SchemeDelimiter_20 = value;
		Il2CppCodeGenWriteBarrier((&___SchemeDelimiter_20), value);
	}

	inline static int32_t get_offset_of_UriSchemeFile_21() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeFile_21)); }
	inline String_t* get_UriSchemeFile_21() const { return ___UriSchemeFile_21; }
	inline String_t** get_address_of_UriSchemeFile_21() { return &___UriSchemeFile_21; }
	inline void set_UriSchemeFile_21(String_t* value)
	{
		___UriSchemeFile_21 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFile_21), value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_22() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeFtp_22)); }
	inline String_t* get_UriSchemeFtp_22() const { return ___UriSchemeFtp_22; }
	inline String_t** get_address_of_UriSchemeFtp_22() { return &___UriSchemeFtp_22; }
	inline void set_UriSchemeFtp_22(String_t* value)
	{
		___UriSchemeFtp_22 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFtp_22), value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_23() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeGopher_23)); }
	inline String_t* get_UriSchemeGopher_23() const { return ___UriSchemeGopher_23; }
	inline String_t** get_address_of_UriSchemeGopher_23() { return &___UriSchemeGopher_23; }
	inline void set_UriSchemeGopher_23(String_t* value)
	{
		___UriSchemeGopher_23 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeGopher_23), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_24() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeHttp_24)); }
	inline String_t* get_UriSchemeHttp_24() const { return ___UriSchemeHttp_24; }
	inline String_t** get_address_of_UriSchemeHttp_24() { return &___UriSchemeHttp_24; }
	inline void set_UriSchemeHttp_24(String_t* value)
	{
		___UriSchemeHttp_24 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttp_24), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_25() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeHttps_25)); }
	inline String_t* get_UriSchemeHttps_25() const { return ___UriSchemeHttps_25; }
	inline String_t** get_address_of_UriSchemeHttps_25() { return &___UriSchemeHttps_25; }
	inline void set_UriSchemeHttps_25(String_t* value)
	{
		___UriSchemeHttps_25 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttps_25), value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_26() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeMailto_26)); }
	inline String_t* get_UriSchemeMailto_26() const { return ___UriSchemeMailto_26; }
	inline String_t** get_address_of_UriSchemeMailto_26() { return &___UriSchemeMailto_26; }
	inline void set_UriSchemeMailto_26(String_t* value)
	{
		___UriSchemeMailto_26 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeMailto_26), value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_27() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNews_27)); }
	inline String_t* get_UriSchemeNews_27() const { return ___UriSchemeNews_27; }
	inline String_t** get_address_of_UriSchemeNews_27() { return &___UriSchemeNews_27; }
	inline void set_UriSchemeNews_27(String_t* value)
	{
		___UriSchemeNews_27 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNews_27), value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_28() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNntp_28)); }
	inline String_t* get_UriSchemeNntp_28() const { return ___UriSchemeNntp_28; }
	inline String_t** get_address_of_UriSchemeNntp_28() { return &___UriSchemeNntp_28; }
	inline void set_UriSchemeNntp_28(String_t* value)
	{
		___UriSchemeNntp_28 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNntp_28), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_29() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNetPipe_29)); }
	inline String_t* get_UriSchemeNetPipe_29() const { return ___UriSchemeNetPipe_29; }
	inline String_t** get_address_of_UriSchemeNetPipe_29() { return &___UriSchemeNetPipe_29; }
	inline void set_UriSchemeNetPipe_29(String_t* value)
	{
		___UriSchemeNetPipe_29 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetPipe_29), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_30() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNetTcp_30)); }
	inline String_t* get_UriSchemeNetTcp_30() const { return ___UriSchemeNetTcp_30; }
	inline String_t** get_address_of_UriSchemeNetTcp_30() { return &___UriSchemeNetTcp_30; }
	inline void set_UriSchemeNetTcp_30(String_t* value)
	{
		___UriSchemeNetTcp_30 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetTcp_30), value);
	}

	inline static int32_t get_offset_of_schemes_31() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___schemes_31)); }
	inline UriSchemeU5BU5D_t2082808316* get_schemes_31() const { return ___schemes_31; }
	inline UriSchemeU5BU5D_t2082808316** get_address_of_schemes_31() { return &___schemes_31; }
	inline void set_schemes_31(UriSchemeU5BU5D_t2082808316* value)
	{
		___schemes_31 = value;
		Il2CppCodeGenWriteBarrier((&___schemes_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map12_33() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map12_33)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map12_33() const { return ___U3CU3Ef__switchU24map12_33; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map12_33() { return &___U3CU3Ef__switchU24map12_33; }
	inline void set_U3CU3Ef__switchU24map12_33(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map12_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map12_33), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map13_34() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map13_34)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map13_34() const { return ___U3CU3Ef__switchU24map13_34; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map13_34() { return &___U3CU3Ef__switchU24map13_34; }
	inline void set_U3CU3Ef__switchU24map13_34(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map13_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map13_34), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map14_35() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map14_35)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map14_35() const { return ___U3CU3Ef__switchU24map14_35; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map14_35() { return &___U3CU3Ef__switchU24map14_35; }
	inline void set_U3CU3Ef__switchU24map14_35(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map14_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map14_35), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map15_36() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map15_36)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map15_36() const { return ___U3CU3Ef__switchU24map15_36; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map15_36() { return &___U3CU3Ef__switchU24map15_36; }
	inline void set_U3CU3Ef__switchU24map15_36(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map15_36 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map15_36), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map16_37() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map16_37)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map16_37() const { return ___U3CU3Ef__switchU24map16_37; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map16_37() { return &___U3CU3Ef__switchU24map16_37; }
	inline void set_U3CU3Ef__switchU24map16_37(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map16_37 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map16_37), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URI_T100236324_H
#ifndef LIST_1_T1004336143_H
#define LIST_1_T1004336143_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
struct  List_1_t1004336143  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MatchDescU5BU5D_t1151567716* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1004336143, ____items_1)); }
	inline MatchDescU5BU5D_t1151567716* get__items_1() const { return ____items_1; }
	inline MatchDescU5BU5D_t1151567716** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MatchDescU5BU5D_t1151567716* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1004336143, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1004336143, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1004336143_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	MatchDescU5BU5D_t1151567716* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1004336143_StaticFields, ___EmptyArray_4)); }
	inline MatchDescU5BU5D_t1151567716* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline MatchDescU5BU5D_t1151567716** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(MatchDescU5BU5D_t1151567716* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1004336143_H
#ifndef LIST_1_T32447842_H
#define LIST_1_T32447842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
struct  List_1_t32447842  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MatchDirectConnectInfoU5BU5D_t2741069669* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t32447842, ____items_1)); }
	inline MatchDirectConnectInfoU5BU5D_t2741069669* get__items_1() const { return ____items_1; }
	inline MatchDirectConnectInfoU5BU5D_t2741069669** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MatchDirectConnectInfoU5BU5D_t2741069669* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t32447842, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t32447842, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t32447842_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	MatchDirectConnectInfoU5BU5D_t2741069669* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t32447842_StaticFields, ___EmptyArray_4)); }
	inline MatchDirectConnectInfoU5BU5D_t2741069669* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline MatchDirectConnectInfoU5BU5D_t2741069669** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(MatchDirectConnectInfoU5BU5D_t2741069669* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T32447842_H
#ifndef NETWORKACCESSTOKEN_T320639760_H
#define NETWORKACCESSTOKEN_T320639760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Types.NetworkAccessToken
struct  NetworkAccessToken_t320639760  : public RuntimeObject
{
public:
	// System.Byte[] UnityEngine.Networking.Types.NetworkAccessToken::array
	ByteU5BU5D_t4116647657* ___array_1;

public:
	inline static int32_t get_offset_of_array_1() { return static_cast<int32_t>(offsetof(NetworkAccessToken_t320639760, ___array_1)); }
	inline ByteU5BU5D_t4116647657* get_array_1() const { return ___array_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_array_1() { return &___array_1; }
	inline void set_array_1(ByteU5BU5D_t4116647657* value)
	{
		___array_1 = value;
		Il2CppCodeGenWriteBarrier((&___array_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKACCESSTOKEN_T320639760_H
#ifndef LIST_1_T2090095927_H
#define LIST_1_T2090095927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot>
struct  List_1_t2090095927  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MatchInfoDirectConnectSnapshotU5BU5D_t3993957532* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2090095927, ____items_1)); }
	inline MatchInfoDirectConnectSnapshotU5BU5D_t3993957532* get__items_1() const { return ____items_1; }
	inline MatchInfoDirectConnectSnapshotU5BU5D_t3993957532** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MatchInfoDirectConnectSnapshotU5BU5D_t3993957532* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2090095927, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2090095927, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2090095927_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	MatchInfoDirectConnectSnapshotU5BU5D_t3993957532* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2090095927_StaticFields, ___EmptyArray_4)); }
	inline MatchInfoDirectConnectSnapshotU5BU5D_t3993957532* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline MatchInfoDirectConnectSnapshotU5BU5D_t3993957532** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(MatchInfoDirectConnectSnapshotU5BU5D_t3993957532* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2090095927_H
#ifndef RESPONSEBASE_T1712937097_H
#define RESPONSEBASE_T1712937097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.ResponseBase
struct  ResponseBase_t1712937097  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESPONSEBASE_T1712937097_H
#ifndef NETWORKTRANSPORT_T1089479308_H
#define NETWORKTRANSPORT_T1089479308_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkTransport
struct  NetworkTransport_t1089479308  : public RuntimeObject
{
public:

public:
};

struct NetworkTransport_t1089479308_StaticFields
{
public:
	// System.Int32 UnityEngine.Networking.NetworkTransport::s_PacketSize
	int32_t ___s_PacketSize_0;
	// System.Boolean UnityEngine.Networking.NetworkTransport::<IsStarted>k__BackingField
	bool ___U3CIsStartedU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_s_PacketSize_0() { return static_cast<int32_t>(offsetof(NetworkTransport_t1089479308_StaticFields, ___s_PacketSize_0)); }
	inline int32_t get_s_PacketSize_0() const { return ___s_PacketSize_0; }
	inline int32_t* get_address_of_s_PacketSize_0() { return &___s_PacketSize_0; }
	inline void set_s_PacketSize_0(int32_t value)
	{
		___s_PacketSize_0 = value;
	}

	inline static int32_t get_offset_of_U3CIsStartedU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(NetworkTransport_t1089479308_StaticFields, ___U3CIsStartedU3Ek__BackingField_1)); }
	inline bool get_U3CIsStartedU3Ek__BackingField_1() const { return ___U3CIsStartedU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CIsStartedU3Ek__BackingField_1() { return &___U3CIsStartedU3Ek__BackingField_1; }
	inline void set_U3CIsStartedU3Ek__BackingField_1(bool value)
	{
		___U3CIsStartedU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKTRANSPORT_T1089479308_H
#ifndef LIST_1_T343529635_H
#define LIST_1_T343529635_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot>
struct  List_1_t343529635  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MatchInfoSnapshotU5BU5D_t1141422592* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t343529635, ____items_1)); }
	inline MatchInfoSnapshotU5BU5D_t1141422592* get__items_1() const { return ____items_1; }
	inline MatchInfoSnapshotU5BU5D_t1141422592** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MatchInfoSnapshotU5BU5D_t1141422592* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t343529635, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t343529635, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t343529635_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	MatchInfoSnapshotU5BU5D_t1141422592* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t343529635_StaticFields, ___EmptyArray_4)); }
	inline MatchInfoSnapshotU5BU5D_t1141422592* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline MatchInfoSnapshotU5BU5D_t1141422592** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(MatchInfoSnapshotU5BU5D_t1141422592* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T343529635_H
#ifndef WWWFORM_T4064702195_H
#define WWWFORM_T4064702195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WWWForm
struct  WWWForm_t4064702195  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Byte[]> UnityEngine.WWWForm::formData
	List_1_t1293755103 * ___formData_0;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fieldNames
	List_1_t3319525431 * ___fieldNames_1;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fileNames
	List_1_t3319525431 * ___fileNames_2;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::types
	List_1_t3319525431 * ___types_3;
	// System.Byte[] UnityEngine.WWWForm::boundary
	ByteU5BU5D_t4116647657* ___boundary_4;
	// System.Boolean UnityEngine.WWWForm::containsFiles
	bool ___containsFiles_5;

public:
	inline static int32_t get_offset_of_formData_0() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___formData_0)); }
	inline List_1_t1293755103 * get_formData_0() const { return ___formData_0; }
	inline List_1_t1293755103 ** get_address_of_formData_0() { return &___formData_0; }
	inline void set_formData_0(List_1_t1293755103 * value)
	{
		___formData_0 = value;
		Il2CppCodeGenWriteBarrier((&___formData_0), value);
	}

	inline static int32_t get_offset_of_fieldNames_1() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___fieldNames_1)); }
	inline List_1_t3319525431 * get_fieldNames_1() const { return ___fieldNames_1; }
	inline List_1_t3319525431 ** get_address_of_fieldNames_1() { return &___fieldNames_1; }
	inline void set_fieldNames_1(List_1_t3319525431 * value)
	{
		___fieldNames_1 = value;
		Il2CppCodeGenWriteBarrier((&___fieldNames_1), value);
	}

	inline static int32_t get_offset_of_fileNames_2() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___fileNames_2)); }
	inline List_1_t3319525431 * get_fileNames_2() const { return ___fileNames_2; }
	inline List_1_t3319525431 ** get_address_of_fileNames_2() { return &___fileNames_2; }
	inline void set_fileNames_2(List_1_t3319525431 * value)
	{
		___fileNames_2 = value;
		Il2CppCodeGenWriteBarrier((&___fileNames_2), value);
	}

	inline static int32_t get_offset_of_types_3() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___types_3)); }
	inline List_1_t3319525431 * get_types_3() const { return ___types_3; }
	inline List_1_t3319525431 ** get_address_of_types_3() { return &___types_3; }
	inline void set_types_3(List_1_t3319525431 * value)
	{
		___types_3 = value;
		Il2CppCodeGenWriteBarrier((&___types_3), value);
	}

	inline static int32_t get_offset_of_boundary_4() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___boundary_4)); }
	inline ByteU5BU5D_t4116647657* get_boundary_4() const { return ___boundary_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_boundary_4() { return &___boundary_4; }
	inline void set_boundary_4(ByteU5BU5D_t4116647657* value)
	{
		___boundary_4 = value;
		Il2CppCodeGenWriteBarrier((&___boundary_4), value);
	}

	inline static int32_t get_offset_of_containsFiles_5() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___containsFiles_5)); }
	inline bool get_containsFiles_5() const { return ___containsFiles_5; }
	inline bool* get_address_of_containsFiles_5() { return &___containsFiles_5; }
	inline void set_containsFiles_5(bool value)
	{
		___containsFiles_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WWWFORM_T4064702195_H
#ifndef DICTIONARY_2_T1632706988_H
#define DICTIONARY_2_T1632706988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct  Dictionary_2_t1632706988  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	StringU5BU5D_t1281789340* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___valueSlots_7)); }
	inline StringU5BU5D_t1281789340* get_valueSlots_7() const { return ___valueSlots_7; }
	inline StringU5BU5D_t1281789340** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(StringU5BU5D_t1281789340* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1632706988_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t132201056 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t132201056 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t132201056 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t132201056 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1632706988_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef LIST_1_T3363058862_H
#define LIST_1_T3363058862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>
struct  List_1_t3363058862  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ChannelQOSU5BU5D_t3224530281* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3363058862, ____items_1)); }
	inline ChannelQOSU5BU5D_t3224530281* get__items_1() const { return ____items_1; }
	inline ChannelQOSU5BU5D_t3224530281** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ChannelQOSU5BU5D_t3224530281* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3363058862, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3363058862, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3363058862_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ChannelQOSU5BU5D_t3224530281* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3363058862_StaticFields, ___EmptyArray_4)); }
	inline ChannelQOSU5BU5D_t3224530281* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ChannelQOSU5BU5D_t3224530281** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ChannelQOSU5BU5D_t3224530281* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3363058862_H
#ifndef LIST_1_T4078445860_H
#define LIST_1_T4078445860_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>
struct  List_1_t4078445860  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	List_1U5BU5D_t3017264731* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4078445860, ____items_1)); }
	inline List_1U5BU5D_t3017264731* get__items_1() const { return ____items_1; }
	inline List_1U5BU5D_t3017264731** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(List_1U5BU5D_t3017264731* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4078445860, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4078445860, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t4078445860_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	List_1U5BU5D_t3017264731* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t4078445860_StaticFields, ___EmptyArray_4)); }
	inline List_1U5BU5D_t3017264731* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline List_1U5BU5D_t3017264731** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(List_1U5BU5D_t3017264731* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T4078445860_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef LIST_1_T2606371118_H
#define LIST_1_T2606371118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Byte>
struct  List_1_t2606371118  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5D_t4116647657* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2606371118, ____items_1)); }
	inline ByteU5BU5D_t4116647657* get__items_1() const { return ____items_1; }
	inline ByteU5BU5D_t4116647657** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ByteU5BU5D_t4116647657* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2606371118, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2606371118, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2606371118_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ByteU5BU5D_t4116647657* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2606371118_StaticFields, ___EmptyArray_4)); }
	inline ByteU5BU5D_t4116647657* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ByteU5BU5D_t4116647657* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2606371118_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_2)); }
	inline uint64_t get_m_value_2() const { return ___m_value_2; }
	inline uint64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
#ifndef ENUMERATOR_T1921691719_H
#define ENUMERATOR_T1921691719_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDirectConnectInfo>
struct  Enumerator_t1921691719 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t32447842 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	MatchDirectConnectInfo_t2855340396 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t1921691719, ___l_0)); }
	inline List_1_t32447842 * get_l_0() const { return ___l_0; }
	inline List_1_t32447842 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t32447842 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t1921691719, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t1921691719, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1921691719, ___current_3)); }
	inline MatchDirectConnectInfo_t2855340396 * get_current_3() const { return ___current_3; }
	inline MatchDirectConnectInfo_t2855340396 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(MatchDirectConnectInfo_t2855340396 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1921691719_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef ENUMERATOR_T2893580020_H
#define ENUMERATOR_T2893580020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDesc>
struct  Enumerator_t2893580020 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t1004336143 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	MatchDesc_t3827228697 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2893580020, ___l_0)); }
	inline List_1_t1004336143 * get_l_0() const { return ___l_0; }
	inline List_1_t1004336143 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t1004336143 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2893580020, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2893580020, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2893580020, ___current_3)); }
	inline MatchDesc_t3827228697 * get_current_3() const { return ___current_3; }
	inline MatchDesc_t3827228697 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(MatchDesc_t3827228697 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2893580020_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef RESPONSE_T2513603462_H
#define RESPONSE_T2513603462_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.Response
struct  Response_t2513603462  : public ResponseBase_t1712937097
{
public:
	// System.Boolean UnityEngine.Networking.Match.Response::<success>k__BackingField
	bool ___U3CsuccessU3Ek__BackingField_0;
	// System.String UnityEngine.Networking.Match.Response::<extendedInfo>k__BackingField
	String_t* ___U3CextendedInfoU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CsuccessU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Response_t2513603462, ___U3CsuccessU3Ek__BackingField_0)); }
	inline bool get_U3CsuccessU3Ek__BackingField_0() const { return ___U3CsuccessU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CsuccessU3Ek__BackingField_0() { return &___U3CsuccessU3Ek__BackingField_0; }
	inline void set_U3CsuccessU3Ek__BackingField_0(bool value)
	{
		___U3CsuccessU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CextendedInfoU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Response_t2513603462, ___U3CextendedInfoU3Ek__BackingField_1)); }
	inline String_t* get_U3CextendedInfoU3Ek__BackingField_1() const { return ___U3CextendedInfoU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CextendedInfoU3Ek__BackingField_1() { return &___U3CextendedInfoU3Ek__BackingField_1; }
	inline void set_U3CextendedInfoU3Ek__BackingField_1(String_t* value)
	{
		___U3CextendedInfoU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CextendedInfoU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESPONSE_T2513603462_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef ENUMERATOR_T957335443_H
#define ENUMERATOR_T957335443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.ChannelQOS>
struct  Enumerator_t957335443 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3363058862 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ChannelQOS_t1890984120 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t957335443, ___l_0)); }
	inline List_1_t3363058862 * get_l_0() const { return ___l_0; }
	inline List_1_t3363058862 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3363058862 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t957335443, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t957335443, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t957335443, ___current_3)); }
	inline ChannelQOS_t1890984120 * get_current_3() const { return ___current_3; }
	inline ChannelQOS_t1890984120 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ChannelQOS_t1890984120 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T957335443_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef UINT16_T2177724958_H
#define UINT16_T2177724958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t2177724958 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt16_t2177724958, ___m_value_2)); }
	inline uint16_t get_m_value_2() const { return ___m_value_2; }
	inline uint16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T2177724958_H
#ifndef ENUMERATOR_T1672722441_H
#define ENUMERATOR_T1672722441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<System.Byte>>
struct  Enumerator_t1672722441 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t4078445860 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	List_1_t2606371118 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t1672722441, ___l_0)); }
	inline List_1_t4078445860 * get_l_0() const { return ___l_0; }
	inline List_1_t4078445860 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t4078445860 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t1672722441, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t1672722441, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1672722441, ___current_3)); }
	inline List_1_t2606371118 * get_current_3() const { return ___current_3; }
	inline List_1_t2606371118 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(List_1_t2606371118 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1672722441_H
#ifndef APPID_T663952513_H
#define APPID_T663952513_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Types.AppID
struct  AppID_t663952513 
{
public:
	// System.UInt64 UnityEngine.Networking.Types.AppID::value__
	uint64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AppID_t663952513, ___value___1)); }
	inline uint64_t get_value___1() const { return ___value___1; }
	inline uint64_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint64_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPID_T663952513_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef CERTIFICATEHANDLER_T2739891000_H
#define CERTIFICATEHANDLER_T2739891000_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.CertificateHandler
struct  CertificateHandler_t2739891000  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_t2739891000, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t2739891000_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t2739891000_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // CERTIFICATEHANDLER_T2739891000_H
#ifndef NETWORKERROR_T2038193525_H
#define NETWORKERROR_T2038193525_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkError
struct  NetworkError_t2038193525 
{
public:
	// System.Int32 UnityEngine.Networking.NetworkError::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NetworkError_t2038193525, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKERROR_T2038193525_H
#ifndef NETWORKEVENTTYPE_T3383948383_H
#define NETWORKEVENTTYPE_T3383948383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkEventType
struct  NetworkEventType_t3383948383 
{
public:
	// System.Int32 UnityEngine.Networking.NetworkEventType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NetworkEventType_t3383948383, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKEVENTTYPE_T3383948383_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2721792723_H
#ifndef DOWNLOADHANDLER_T2937767557_H
#define DOWNLOADHANDLER_T2937767557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.DownloadHandler
struct  DownloadHandler_t2937767557  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_t2937767557, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t2937767557_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t2937767557_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // DOWNLOADHANDLER_T2937767557_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef SOURCEID_T1070216020_H
#define SOURCEID_T1070216020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Types.SourceID
struct  SourceID_t1070216020 
{
public:
	// System.UInt64 UnityEngine.Networking.Types.SourceID::value__
	uint64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SourceID_t1070216020, ___value___1)); }
	inline uint64_t get_value___1() const { return ___value___1; }
	inline uint64_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint64_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOURCEID_T1070216020_H
#ifndef UPLOADHANDLER_T2993558019_H
#define UPLOADHANDLER_T2993558019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UploadHandler
struct  UploadHandler_t2993558019  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t2993558019, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t2993558019_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t2993558019_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // UPLOADHANDLER_T2993558019_H
#ifndef BASICRESPONSE_T1476713923_H
#define BASICRESPONSE_T1476713923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.BasicResponse
struct  BasicResponse_t1476713923  : public Response_t2513603462
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASICRESPONSE_T1476713923_H
#ifndef CONNECTIONACKSTYPE_T3955378167_H
#define CONNECTIONACKSTYPE_T3955378167_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.ConnectionAcksType
struct  ConnectionAcksType_t3955378167 
{
public:
	// System.Int32 UnityEngine.Networking.ConnectionAcksType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConnectionAcksType_t3955378167, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONACKSTYPE_T3955378167_H
#ifndef NULLREFERENCEEXCEPTION_T1023182353_H
#define NULLREFERENCEEXCEPTION_T1023182353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NullReferenceException
struct  NullReferenceException_t1023182353  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLREFERENCEEXCEPTION_T1023182353_H
#ifndef REACTORMODEL_T89779108_H
#define REACTORMODEL_T89779108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.ReactorModel
struct  ReactorModel_t89779108 
{
public:
	// System.Int32 UnityEngine.Networking.ReactorModel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ReactorModel_t89779108, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REACTORMODEL_T89779108_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef RUNTIMEPLATFORM_T4159857903_H
#define RUNTIMEPLATFORM_T4159857903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RuntimePlatform
struct  RuntimePlatform_t4159857903 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RuntimePlatform_t4159857903, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEPLATFORM_T4159857903_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef FORMATEXCEPTION_T154580423_H
#define FORMATEXCEPTION_T154580423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FormatException
struct  FormatException_t154580423  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATEXCEPTION_T154580423_H
#ifndef NODEID_T2347816311_H
#define NODEID_T2347816311_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Types.NodeID
struct  NodeID_t2347816311 
{
public:
	// System.UInt16 UnityEngine.Networking.Types.NodeID::value__
	uint16_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NodeID_t2347816311, ___value___1)); }
	inline uint16_t get_value___1() const { return ___value___1; }
	inline uint16_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint16_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODEID_T2347816311_H
#ifndef HOSTPRIORITY_T1616615738_H
#define HOSTPRIORITY_T1616615738_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Types.HostPriority
struct  HostPriority_t1616615738 
{
public:
	// System.Int32 UnityEngine.Networking.Types.HostPriority::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HostPriority_t1616615738, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOSTPRIORITY_T1616615738_H
#ifndef NETWORKID_T4216585621_H
#define NETWORKID_T4216585621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Types.NetworkID
struct  NetworkID_t4216585621 
{
public:
	// System.UInt64 UnityEngine.Networking.Types.NetworkID::value__
	uint64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NetworkID_t4216585621, ___value___1)); }
	inline uint64_t get_value___1() const { return ___value___1; }
	inline uint64_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint64_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKID_T4216585621_H
#ifndef QOSTYPE_T3566496866_H
#define QOSTYPE_T3566496866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.QosType
struct  QosType_t3566496866 
{
public:
	// System.Int32 UnityEngine.Networking.QosType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(QosType_t3566496866, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QOSTYPE_T3566496866_H
#ifndef REQUEST_T2696089890_H
#define REQUEST_T2696089890_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.Request
struct  Request_t2696089890  : public RuntimeObject
{
public:
	// UnityEngine.Networking.Types.SourceID UnityEngine.Networking.Match.Request::<sourceId>k__BackingField
	uint64_t ___U3CsourceIdU3Ek__BackingField_1;
	// System.String UnityEngine.Networking.Match.Request::<projectId>k__BackingField
	String_t* ___U3CprojectIdU3Ek__BackingField_2;
	// System.String UnityEngine.Networking.Match.Request::<accessTokenString>k__BackingField
	String_t* ___U3CaccessTokenStringU3Ek__BackingField_3;
	// System.Int32 UnityEngine.Networking.Match.Request::<domain>k__BackingField
	int32_t ___U3CdomainU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsourceIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Request_t2696089890, ___U3CsourceIdU3Ek__BackingField_1)); }
	inline uint64_t get_U3CsourceIdU3Ek__BackingField_1() const { return ___U3CsourceIdU3Ek__BackingField_1; }
	inline uint64_t* get_address_of_U3CsourceIdU3Ek__BackingField_1() { return &___U3CsourceIdU3Ek__BackingField_1; }
	inline void set_U3CsourceIdU3Ek__BackingField_1(uint64_t value)
	{
		___U3CsourceIdU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CprojectIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Request_t2696089890, ___U3CprojectIdU3Ek__BackingField_2)); }
	inline String_t* get_U3CprojectIdU3Ek__BackingField_2() const { return ___U3CprojectIdU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CprojectIdU3Ek__BackingField_2() { return &___U3CprojectIdU3Ek__BackingField_2; }
	inline void set_U3CprojectIdU3Ek__BackingField_2(String_t* value)
	{
		___U3CprojectIdU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CprojectIdU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CaccessTokenStringU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Request_t2696089890, ___U3CaccessTokenStringU3Ek__BackingField_3)); }
	inline String_t* get_U3CaccessTokenStringU3Ek__BackingField_3() const { return ___U3CaccessTokenStringU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CaccessTokenStringU3Ek__BackingField_3() { return &___U3CaccessTokenStringU3Ek__BackingField_3; }
	inline void set_U3CaccessTokenStringU3Ek__BackingField_3(String_t* value)
	{
		___U3CaccessTokenStringU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CaccessTokenStringU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CdomainU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Request_t2696089890, ___U3CdomainU3Ek__BackingField_4)); }
	inline int32_t get_U3CdomainU3Ek__BackingField_4() const { return ___U3CdomainU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CdomainU3Ek__BackingField_4() { return &___U3CdomainU3Ek__BackingField_4; }
	inline void set_U3CdomainU3Ek__BackingField_4(int32_t value)
	{
		___U3CdomainU3Ek__BackingField_4 = value;
	}
};

struct Request_t2696089890_StaticFields
{
public:
	// System.Int32 UnityEngine.Networking.Match.Request::currentVersion
	int32_t ___currentVersion_0;

public:
	inline static int32_t get_offset_of_currentVersion_0() { return static_cast<int32_t>(offsetof(Request_t2696089890_StaticFields, ___currentVersion_0)); }
	inline int32_t get_currentVersion_0() const { return ___currentVersion_0; }
	inline int32_t* get_address_of_currentVersion_0() { return &___currentVersion_0; }
	inline void set_currentVersion_0(int32_t value)
	{
		___currentVersion_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUEST_T2696089890_H
#ifndef MATCHINFO_T221301733_H
#define MATCHINFO_T221301733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.MatchInfo
struct  MatchInfo_t221301733  : public RuntimeObject
{
public:
	// System.String UnityEngine.Networking.Match.MatchInfo::<address>k__BackingField
	String_t* ___U3CaddressU3Ek__BackingField_0;
	// System.Int32 UnityEngine.Networking.Match.MatchInfo::<port>k__BackingField
	int32_t ___U3CportU3Ek__BackingField_1;
	// System.Int32 UnityEngine.Networking.Match.MatchInfo::<domain>k__BackingField
	int32_t ___U3CdomainU3Ek__BackingField_2;
	// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.MatchInfo::<networkId>k__BackingField
	uint64_t ___U3CnetworkIdU3Ek__BackingField_3;
	// UnityEngine.Networking.Types.NetworkAccessToken UnityEngine.Networking.Match.MatchInfo::<accessToken>k__BackingField
	NetworkAccessToken_t320639760 * ___U3CaccessTokenU3Ek__BackingField_4;
	// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchInfo::<nodeId>k__BackingField
	uint16_t ___U3CnodeIdU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.Match.MatchInfo::<usingRelay>k__BackingField
	bool ___U3CusingRelayU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CaddressU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MatchInfo_t221301733, ___U3CaddressU3Ek__BackingField_0)); }
	inline String_t* get_U3CaddressU3Ek__BackingField_0() const { return ___U3CaddressU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CaddressU3Ek__BackingField_0() { return &___U3CaddressU3Ek__BackingField_0; }
	inline void set_U3CaddressU3Ek__BackingField_0(String_t* value)
	{
		___U3CaddressU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CaddressU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CportU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MatchInfo_t221301733, ___U3CportU3Ek__BackingField_1)); }
	inline int32_t get_U3CportU3Ek__BackingField_1() const { return ___U3CportU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CportU3Ek__BackingField_1() { return &___U3CportU3Ek__BackingField_1; }
	inline void set_U3CportU3Ek__BackingField_1(int32_t value)
	{
		___U3CportU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CdomainU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MatchInfo_t221301733, ___U3CdomainU3Ek__BackingField_2)); }
	inline int32_t get_U3CdomainU3Ek__BackingField_2() const { return ___U3CdomainU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CdomainU3Ek__BackingField_2() { return &___U3CdomainU3Ek__BackingField_2; }
	inline void set_U3CdomainU3Ek__BackingField_2(int32_t value)
	{
		___U3CdomainU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CnetworkIdU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MatchInfo_t221301733, ___U3CnetworkIdU3Ek__BackingField_3)); }
	inline uint64_t get_U3CnetworkIdU3Ek__BackingField_3() const { return ___U3CnetworkIdU3Ek__BackingField_3; }
	inline uint64_t* get_address_of_U3CnetworkIdU3Ek__BackingField_3() { return &___U3CnetworkIdU3Ek__BackingField_3; }
	inline void set_U3CnetworkIdU3Ek__BackingField_3(uint64_t value)
	{
		___U3CnetworkIdU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CaccessTokenU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MatchInfo_t221301733, ___U3CaccessTokenU3Ek__BackingField_4)); }
	inline NetworkAccessToken_t320639760 * get_U3CaccessTokenU3Ek__BackingField_4() const { return ___U3CaccessTokenU3Ek__BackingField_4; }
	inline NetworkAccessToken_t320639760 ** get_address_of_U3CaccessTokenU3Ek__BackingField_4() { return &___U3CaccessTokenU3Ek__BackingField_4; }
	inline void set_U3CaccessTokenU3Ek__BackingField_4(NetworkAccessToken_t320639760 * value)
	{
		___U3CaccessTokenU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CaccessTokenU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CnodeIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MatchInfo_t221301733, ___U3CnodeIdU3Ek__BackingField_5)); }
	inline uint16_t get_U3CnodeIdU3Ek__BackingField_5() const { return ___U3CnodeIdU3Ek__BackingField_5; }
	inline uint16_t* get_address_of_U3CnodeIdU3Ek__BackingField_5() { return &___U3CnodeIdU3Ek__BackingField_5; }
	inline void set_U3CnodeIdU3Ek__BackingField_5(uint16_t value)
	{
		___U3CnodeIdU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CusingRelayU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(MatchInfo_t221301733, ___U3CusingRelayU3Ek__BackingField_6)); }
	inline bool get_U3CusingRelayU3Ek__BackingField_6() const { return ___U3CusingRelayU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CusingRelayU3Ek__BackingField_6() { return &___U3CusingRelayU3Ek__BackingField_6; }
	inline void set_U3CusingRelayU3Ek__BackingField_6(bool value)
	{
		___U3CusingRelayU3Ek__BackingField_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATCHINFO_T221301733_H
#ifndef CREATEMATCHRESPONSE_T1328247360_H
#define CREATEMATCHRESPONSE_T1328247360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.CreateMatchResponse
struct  CreateMatchResponse_t1328247360  : public BasicResponse_t1476713923
{
public:
	// System.String UnityEngine.Networking.Match.CreateMatchResponse::<address>k__BackingField
	String_t* ___U3CaddressU3Ek__BackingField_2;
	// System.Int32 UnityEngine.Networking.Match.CreateMatchResponse::<port>k__BackingField
	int32_t ___U3CportU3Ek__BackingField_3;
	// System.Int32 UnityEngine.Networking.Match.CreateMatchResponse::<domain>k__BackingField
	int32_t ___U3CdomainU3Ek__BackingField_4;
	// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.CreateMatchResponse::<networkId>k__BackingField
	uint64_t ___U3CnetworkIdU3Ek__BackingField_5;
	// System.String UnityEngine.Networking.Match.CreateMatchResponse::<accessTokenString>k__BackingField
	String_t* ___U3CaccessTokenStringU3Ek__BackingField_6;
	// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.CreateMatchResponse::<nodeId>k__BackingField
	uint16_t ___U3CnodeIdU3Ek__BackingField_7;
	// System.Boolean UnityEngine.Networking.Match.CreateMatchResponse::<usingRelay>k__BackingField
	bool ___U3CusingRelayU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CaddressU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CreateMatchResponse_t1328247360, ___U3CaddressU3Ek__BackingField_2)); }
	inline String_t* get_U3CaddressU3Ek__BackingField_2() const { return ___U3CaddressU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CaddressU3Ek__BackingField_2() { return &___U3CaddressU3Ek__BackingField_2; }
	inline void set_U3CaddressU3Ek__BackingField_2(String_t* value)
	{
		___U3CaddressU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CaddressU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CportU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(CreateMatchResponse_t1328247360, ___U3CportU3Ek__BackingField_3)); }
	inline int32_t get_U3CportU3Ek__BackingField_3() const { return ___U3CportU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CportU3Ek__BackingField_3() { return &___U3CportU3Ek__BackingField_3; }
	inline void set_U3CportU3Ek__BackingField_3(int32_t value)
	{
		___U3CportU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CdomainU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CreateMatchResponse_t1328247360, ___U3CdomainU3Ek__BackingField_4)); }
	inline int32_t get_U3CdomainU3Ek__BackingField_4() const { return ___U3CdomainU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CdomainU3Ek__BackingField_4() { return &___U3CdomainU3Ek__BackingField_4; }
	inline void set_U3CdomainU3Ek__BackingField_4(int32_t value)
	{
		___U3CdomainU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CnetworkIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(CreateMatchResponse_t1328247360, ___U3CnetworkIdU3Ek__BackingField_5)); }
	inline uint64_t get_U3CnetworkIdU3Ek__BackingField_5() const { return ___U3CnetworkIdU3Ek__BackingField_5; }
	inline uint64_t* get_address_of_U3CnetworkIdU3Ek__BackingField_5() { return &___U3CnetworkIdU3Ek__BackingField_5; }
	inline void set_U3CnetworkIdU3Ek__BackingField_5(uint64_t value)
	{
		___U3CnetworkIdU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CaccessTokenStringU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(CreateMatchResponse_t1328247360, ___U3CaccessTokenStringU3Ek__BackingField_6)); }
	inline String_t* get_U3CaccessTokenStringU3Ek__BackingField_6() const { return ___U3CaccessTokenStringU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CaccessTokenStringU3Ek__BackingField_6() { return &___U3CaccessTokenStringU3Ek__BackingField_6; }
	inline void set_U3CaccessTokenStringU3Ek__BackingField_6(String_t* value)
	{
		___U3CaccessTokenStringU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CaccessTokenStringU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CnodeIdU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(CreateMatchResponse_t1328247360, ___U3CnodeIdU3Ek__BackingField_7)); }
	inline uint16_t get_U3CnodeIdU3Ek__BackingField_7() const { return ___U3CnodeIdU3Ek__BackingField_7; }
	inline uint16_t* get_address_of_U3CnodeIdU3Ek__BackingField_7() { return &___U3CnodeIdU3Ek__BackingField_7; }
	inline void set_U3CnodeIdU3Ek__BackingField_7(uint16_t value)
	{
		___U3CnodeIdU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CusingRelayU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(CreateMatchResponse_t1328247360, ___U3CusingRelayU3Ek__BackingField_8)); }
	inline bool get_U3CusingRelayU3Ek__BackingField_8() const { return ___U3CusingRelayU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CusingRelayU3Ek__BackingField_8() { return &___U3CusingRelayU3Ek__BackingField_8; }
	inline void set_U3CusingRelayU3Ek__BackingField_8(bool value)
	{
		___U3CusingRelayU3Ek__BackingField_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CREATEMATCHRESPONSE_T1328247360_H
#ifndef GLOBALCONFIG_T833512557_H
#define GLOBALCONFIG_T833512557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.GlobalConfig
struct  GlobalConfig_t833512557  : public RuntimeObject
{
public:
	// System.UInt32 UnityEngine.Networking.GlobalConfig::m_ThreadAwakeTimeout
	uint32_t ___m_ThreadAwakeTimeout_3;
	// UnityEngine.Networking.ReactorModel UnityEngine.Networking.GlobalConfig::m_ReactorModel
	int32_t ___m_ReactorModel_4;
	// System.UInt16 UnityEngine.Networking.GlobalConfig::m_ReactorMaximumReceivedMessages
	uint16_t ___m_ReactorMaximumReceivedMessages_5;
	// System.UInt16 UnityEngine.Networking.GlobalConfig::m_ReactorMaximumSentMessages
	uint16_t ___m_ReactorMaximumSentMessages_6;
	// System.UInt16 UnityEngine.Networking.GlobalConfig::m_MaxPacketSize
	uint16_t ___m_MaxPacketSize_7;
	// System.UInt16 UnityEngine.Networking.GlobalConfig::m_MaxHosts
	uint16_t ___m_MaxHosts_8;
	// System.Byte UnityEngine.Networking.GlobalConfig::m_ThreadPoolSize
	uint8_t ___m_ThreadPoolSize_9;
	// System.UInt32 UnityEngine.Networking.GlobalConfig::m_MinTimerTimeout
	uint32_t ___m_MinTimerTimeout_10;
	// System.UInt32 UnityEngine.Networking.GlobalConfig::m_MaxTimerTimeout
	uint32_t ___m_MaxTimerTimeout_11;
	// System.UInt32 UnityEngine.Networking.GlobalConfig::m_MinNetSimulatorTimeout
	uint32_t ___m_MinNetSimulatorTimeout_12;
	// System.UInt32 UnityEngine.Networking.GlobalConfig::m_MaxNetSimulatorTimeout
	uint32_t ___m_MaxNetSimulatorTimeout_13;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Networking.GlobalConfig::m_ConnectionReadyForSend
	Action_2_t4177122770 * ___m_ConnectionReadyForSend_14;
	// System.Action`1<System.Int32> UnityEngine.Networking.GlobalConfig::m_NetworkEventAvailable
	Action_1_t3123413348 * ___m_NetworkEventAvailable_15;

public:
	inline static int32_t get_offset_of_m_ThreadAwakeTimeout_3() { return static_cast<int32_t>(offsetof(GlobalConfig_t833512557, ___m_ThreadAwakeTimeout_3)); }
	inline uint32_t get_m_ThreadAwakeTimeout_3() const { return ___m_ThreadAwakeTimeout_3; }
	inline uint32_t* get_address_of_m_ThreadAwakeTimeout_3() { return &___m_ThreadAwakeTimeout_3; }
	inline void set_m_ThreadAwakeTimeout_3(uint32_t value)
	{
		___m_ThreadAwakeTimeout_3 = value;
	}

	inline static int32_t get_offset_of_m_ReactorModel_4() { return static_cast<int32_t>(offsetof(GlobalConfig_t833512557, ___m_ReactorModel_4)); }
	inline int32_t get_m_ReactorModel_4() const { return ___m_ReactorModel_4; }
	inline int32_t* get_address_of_m_ReactorModel_4() { return &___m_ReactorModel_4; }
	inline void set_m_ReactorModel_4(int32_t value)
	{
		___m_ReactorModel_4 = value;
	}

	inline static int32_t get_offset_of_m_ReactorMaximumReceivedMessages_5() { return static_cast<int32_t>(offsetof(GlobalConfig_t833512557, ___m_ReactorMaximumReceivedMessages_5)); }
	inline uint16_t get_m_ReactorMaximumReceivedMessages_5() const { return ___m_ReactorMaximumReceivedMessages_5; }
	inline uint16_t* get_address_of_m_ReactorMaximumReceivedMessages_5() { return &___m_ReactorMaximumReceivedMessages_5; }
	inline void set_m_ReactorMaximumReceivedMessages_5(uint16_t value)
	{
		___m_ReactorMaximumReceivedMessages_5 = value;
	}

	inline static int32_t get_offset_of_m_ReactorMaximumSentMessages_6() { return static_cast<int32_t>(offsetof(GlobalConfig_t833512557, ___m_ReactorMaximumSentMessages_6)); }
	inline uint16_t get_m_ReactorMaximumSentMessages_6() const { return ___m_ReactorMaximumSentMessages_6; }
	inline uint16_t* get_address_of_m_ReactorMaximumSentMessages_6() { return &___m_ReactorMaximumSentMessages_6; }
	inline void set_m_ReactorMaximumSentMessages_6(uint16_t value)
	{
		___m_ReactorMaximumSentMessages_6 = value;
	}

	inline static int32_t get_offset_of_m_MaxPacketSize_7() { return static_cast<int32_t>(offsetof(GlobalConfig_t833512557, ___m_MaxPacketSize_7)); }
	inline uint16_t get_m_MaxPacketSize_7() const { return ___m_MaxPacketSize_7; }
	inline uint16_t* get_address_of_m_MaxPacketSize_7() { return &___m_MaxPacketSize_7; }
	inline void set_m_MaxPacketSize_7(uint16_t value)
	{
		___m_MaxPacketSize_7 = value;
	}

	inline static int32_t get_offset_of_m_MaxHosts_8() { return static_cast<int32_t>(offsetof(GlobalConfig_t833512557, ___m_MaxHosts_8)); }
	inline uint16_t get_m_MaxHosts_8() const { return ___m_MaxHosts_8; }
	inline uint16_t* get_address_of_m_MaxHosts_8() { return &___m_MaxHosts_8; }
	inline void set_m_MaxHosts_8(uint16_t value)
	{
		___m_MaxHosts_8 = value;
	}

	inline static int32_t get_offset_of_m_ThreadPoolSize_9() { return static_cast<int32_t>(offsetof(GlobalConfig_t833512557, ___m_ThreadPoolSize_9)); }
	inline uint8_t get_m_ThreadPoolSize_9() const { return ___m_ThreadPoolSize_9; }
	inline uint8_t* get_address_of_m_ThreadPoolSize_9() { return &___m_ThreadPoolSize_9; }
	inline void set_m_ThreadPoolSize_9(uint8_t value)
	{
		___m_ThreadPoolSize_9 = value;
	}

	inline static int32_t get_offset_of_m_MinTimerTimeout_10() { return static_cast<int32_t>(offsetof(GlobalConfig_t833512557, ___m_MinTimerTimeout_10)); }
	inline uint32_t get_m_MinTimerTimeout_10() const { return ___m_MinTimerTimeout_10; }
	inline uint32_t* get_address_of_m_MinTimerTimeout_10() { return &___m_MinTimerTimeout_10; }
	inline void set_m_MinTimerTimeout_10(uint32_t value)
	{
		___m_MinTimerTimeout_10 = value;
	}

	inline static int32_t get_offset_of_m_MaxTimerTimeout_11() { return static_cast<int32_t>(offsetof(GlobalConfig_t833512557, ___m_MaxTimerTimeout_11)); }
	inline uint32_t get_m_MaxTimerTimeout_11() const { return ___m_MaxTimerTimeout_11; }
	inline uint32_t* get_address_of_m_MaxTimerTimeout_11() { return &___m_MaxTimerTimeout_11; }
	inline void set_m_MaxTimerTimeout_11(uint32_t value)
	{
		___m_MaxTimerTimeout_11 = value;
	}

	inline static int32_t get_offset_of_m_MinNetSimulatorTimeout_12() { return static_cast<int32_t>(offsetof(GlobalConfig_t833512557, ___m_MinNetSimulatorTimeout_12)); }
	inline uint32_t get_m_MinNetSimulatorTimeout_12() const { return ___m_MinNetSimulatorTimeout_12; }
	inline uint32_t* get_address_of_m_MinNetSimulatorTimeout_12() { return &___m_MinNetSimulatorTimeout_12; }
	inline void set_m_MinNetSimulatorTimeout_12(uint32_t value)
	{
		___m_MinNetSimulatorTimeout_12 = value;
	}

	inline static int32_t get_offset_of_m_MaxNetSimulatorTimeout_13() { return static_cast<int32_t>(offsetof(GlobalConfig_t833512557, ___m_MaxNetSimulatorTimeout_13)); }
	inline uint32_t get_m_MaxNetSimulatorTimeout_13() const { return ___m_MaxNetSimulatorTimeout_13; }
	inline uint32_t* get_address_of_m_MaxNetSimulatorTimeout_13() { return &___m_MaxNetSimulatorTimeout_13; }
	inline void set_m_MaxNetSimulatorTimeout_13(uint32_t value)
	{
		___m_MaxNetSimulatorTimeout_13 = value;
	}

	inline static int32_t get_offset_of_m_ConnectionReadyForSend_14() { return static_cast<int32_t>(offsetof(GlobalConfig_t833512557, ___m_ConnectionReadyForSend_14)); }
	inline Action_2_t4177122770 * get_m_ConnectionReadyForSend_14() const { return ___m_ConnectionReadyForSend_14; }
	inline Action_2_t4177122770 ** get_address_of_m_ConnectionReadyForSend_14() { return &___m_ConnectionReadyForSend_14; }
	inline void set_m_ConnectionReadyForSend_14(Action_2_t4177122770 * value)
	{
		___m_ConnectionReadyForSend_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_ConnectionReadyForSend_14), value);
	}

	inline static int32_t get_offset_of_m_NetworkEventAvailable_15() { return static_cast<int32_t>(offsetof(GlobalConfig_t833512557, ___m_NetworkEventAvailable_15)); }
	inline Action_1_t3123413348 * get_m_NetworkEventAvailable_15() const { return ___m_NetworkEventAvailable_15; }
	inline Action_1_t3123413348 ** get_address_of_m_NetworkEventAvailable_15() { return &___m_NetworkEventAvailable_15; }
	inline void set_m_NetworkEventAvailable_15(Action_1_t3123413348 * value)
	{
		___m_NetworkEventAvailable_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_NetworkEventAvailable_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLOBALCONFIG_T833512557_H
#ifndef CHANNELQOS_T1890984120_H
#define CHANNELQOS_T1890984120_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.ChannelQOS
struct  ChannelQOS_t1890984120  : public RuntimeObject
{
public:
	// UnityEngine.Networking.QosType UnityEngine.Networking.ChannelQOS::m_Type
	int32_t ___m_Type_0;
	// System.Boolean UnityEngine.Networking.ChannelQOS::m_BelongsSharedOrderChannel
	bool ___m_BelongsSharedOrderChannel_1;

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(ChannelQOS_t1890984120, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_BelongsSharedOrderChannel_1() { return static_cast<int32_t>(offsetof(ChannelQOS_t1890984120, ___m_BelongsSharedOrderChannel_1)); }
	inline bool get_m_BelongsSharedOrderChannel_1() const { return ___m_BelongsSharedOrderChannel_1; }
	inline bool* get_address_of_m_BelongsSharedOrderChannel_1() { return &___m_BelongsSharedOrderChannel_1; }
	inline void set_m_BelongsSharedOrderChannel_1(bool value)
	{
		___m_BelongsSharedOrderChannel_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELQOS_T1890984120_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef MATCHDESC_T3827228697_H
#define MATCHDESC_T3827228697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.MatchDesc
struct  MatchDesc_t3827228697  : public ResponseBase_t1712937097
{
public:
	// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.MatchDesc::<networkId>k__BackingField
	uint64_t ___U3CnetworkIdU3Ek__BackingField_0;
	// System.String UnityEngine.Networking.Match.MatchDesc::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_1;
	// System.Int32 UnityEngine.Networking.Match.MatchDesc::<averageEloScore>k__BackingField
	int32_t ___U3CaverageEloScoreU3Ek__BackingField_2;
	// System.Int32 UnityEngine.Networking.Match.MatchDesc::<maxSize>k__BackingField
	int32_t ___U3CmaxSizeU3Ek__BackingField_3;
	// System.Int32 UnityEngine.Networking.Match.MatchDesc::<currentSize>k__BackingField
	int32_t ___U3CcurrentSizeU3Ek__BackingField_4;
	// System.Boolean UnityEngine.Networking.Match.MatchDesc::<isPrivate>k__BackingField
	bool ___U3CisPrivateU3Ek__BackingField_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.MatchDesc::<matchAttributes>k__BackingField
	Dictionary_2_t3521823603 * ___U3CmatchAttributesU3Ek__BackingField_6;
	// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchDesc::<hostNodeId>k__BackingField
	uint16_t ___U3ChostNodeIdU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo> UnityEngine.Networking.Match.MatchDesc::<directConnectInfos>k__BackingField
	List_1_t32447842 * ___U3CdirectConnectInfosU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CnetworkIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MatchDesc_t3827228697, ___U3CnetworkIdU3Ek__BackingField_0)); }
	inline uint64_t get_U3CnetworkIdU3Ek__BackingField_0() const { return ___U3CnetworkIdU3Ek__BackingField_0; }
	inline uint64_t* get_address_of_U3CnetworkIdU3Ek__BackingField_0() { return &___U3CnetworkIdU3Ek__BackingField_0; }
	inline void set_U3CnetworkIdU3Ek__BackingField_0(uint64_t value)
	{
		___U3CnetworkIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MatchDesc_t3827228697, ___U3CnameU3Ek__BackingField_1)); }
	inline String_t* get_U3CnameU3Ek__BackingField_1() const { return ___U3CnameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_1() { return &___U3CnameU3Ek__BackingField_1; }
	inline void set_U3CnameU3Ek__BackingField_1(String_t* value)
	{
		___U3CnameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnameU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CaverageEloScoreU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MatchDesc_t3827228697, ___U3CaverageEloScoreU3Ek__BackingField_2)); }
	inline int32_t get_U3CaverageEloScoreU3Ek__BackingField_2() const { return ___U3CaverageEloScoreU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CaverageEloScoreU3Ek__BackingField_2() { return &___U3CaverageEloScoreU3Ek__BackingField_2; }
	inline void set_U3CaverageEloScoreU3Ek__BackingField_2(int32_t value)
	{
		___U3CaverageEloScoreU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CmaxSizeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MatchDesc_t3827228697, ___U3CmaxSizeU3Ek__BackingField_3)); }
	inline int32_t get_U3CmaxSizeU3Ek__BackingField_3() const { return ___U3CmaxSizeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CmaxSizeU3Ek__BackingField_3() { return &___U3CmaxSizeU3Ek__BackingField_3; }
	inline void set_U3CmaxSizeU3Ek__BackingField_3(int32_t value)
	{
		___U3CmaxSizeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CcurrentSizeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MatchDesc_t3827228697, ___U3CcurrentSizeU3Ek__BackingField_4)); }
	inline int32_t get_U3CcurrentSizeU3Ek__BackingField_4() const { return ___U3CcurrentSizeU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CcurrentSizeU3Ek__BackingField_4() { return &___U3CcurrentSizeU3Ek__BackingField_4; }
	inline void set_U3CcurrentSizeU3Ek__BackingField_4(int32_t value)
	{
		___U3CcurrentSizeU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CisPrivateU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MatchDesc_t3827228697, ___U3CisPrivateU3Ek__BackingField_5)); }
	inline bool get_U3CisPrivateU3Ek__BackingField_5() const { return ___U3CisPrivateU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CisPrivateU3Ek__BackingField_5() { return &___U3CisPrivateU3Ek__BackingField_5; }
	inline void set_U3CisPrivateU3Ek__BackingField_5(bool value)
	{
		___U3CisPrivateU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CmatchAttributesU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(MatchDesc_t3827228697, ___U3CmatchAttributesU3Ek__BackingField_6)); }
	inline Dictionary_2_t3521823603 * get_U3CmatchAttributesU3Ek__BackingField_6() const { return ___U3CmatchAttributesU3Ek__BackingField_6; }
	inline Dictionary_2_t3521823603 ** get_address_of_U3CmatchAttributesU3Ek__BackingField_6() { return &___U3CmatchAttributesU3Ek__BackingField_6; }
	inline void set_U3CmatchAttributesU3Ek__BackingField_6(Dictionary_2_t3521823603 * value)
	{
		___U3CmatchAttributesU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmatchAttributesU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3ChostNodeIdU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(MatchDesc_t3827228697, ___U3ChostNodeIdU3Ek__BackingField_7)); }
	inline uint16_t get_U3ChostNodeIdU3Ek__BackingField_7() const { return ___U3ChostNodeIdU3Ek__BackingField_7; }
	inline uint16_t* get_address_of_U3ChostNodeIdU3Ek__BackingField_7() { return &___U3ChostNodeIdU3Ek__BackingField_7; }
	inline void set_U3ChostNodeIdU3Ek__BackingField_7(uint16_t value)
	{
		___U3ChostNodeIdU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CdirectConnectInfosU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(MatchDesc_t3827228697, ___U3CdirectConnectInfosU3Ek__BackingField_8)); }
	inline List_1_t32447842 * get_U3CdirectConnectInfosU3Ek__BackingField_8() const { return ___U3CdirectConnectInfosU3Ek__BackingField_8; }
	inline List_1_t32447842 ** get_address_of_U3CdirectConnectInfosU3Ek__BackingField_8() { return &___U3CdirectConnectInfosU3Ek__BackingField_8; }
	inline void set_U3CdirectConnectInfosU3Ek__BackingField_8(List_1_t32447842 * value)
	{
		___U3CdirectConnectInfosU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CdirectConnectInfosU3Ek__BackingField_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATCHDESC_T3827228697_H
#ifndef CONNECTIONCONFIG_T4173981269_H
#define CONNECTIONCONFIG_T4173981269_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.ConnectionConfig
struct  ConnectionConfig_t4173981269  : public RuntimeObject
{
public:
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_PacketSize
	uint16_t ___m_PacketSize_1;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_FragmentSize
	uint16_t ___m_FragmentSize_2;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_ResendTimeout
	uint32_t ___m_ResendTimeout_3;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_DisconnectTimeout
	uint32_t ___m_DisconnectTimeout_4;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_ConnectTimeout
	uint32_t ___m_ConnectTimeout_5;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_MinUpdateTimeout
	uint32_t ___m_MinUpdateTimeout_6;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_PingTimeout
	uint32_t ___m_PingTimeout_7;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_ReducedPingTimeout
	uint32_t ___m_ReducedPingTimeout_8;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_AllCostTimeout
	uint32_t ___m_AllCostTimeout_9;
	// System.Byte UnityEngine.Networking.ConnectionConfig::m_NetworkDropThreshold
	uint8_t ___m_NetworkDropThreshold_10;
	// System.Byte UnityEngine.Networking.ConnectionConfig::m_OverflowDropThreshold
	uint8_t ___m_OverflowDropThreshold_11;
	// System.Byte UnityEngine.Networking.ConnectionConfig::m_MaxConnectionAttempt
	uint8_t ___m_MaxConnectionAttempt_12;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_AckDelay
	uint32_t ___m_AckDelay_13;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_SendDelay
	uint32_t ___m_SendDelay_14;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_MaxCombinedReliableMessageSize
	uint16_t ___m_MaxCombinedReliableMessageSize_15;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_MaxCombinedReliableMessageCount
	uint16_t ___m_MaxCombinedReliableMessageCount_16;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_MaxSentMessageQueueSize
	uint16_t ___m_MaxSentMessageQueueSize_17;
	// UnityEngine.Networking.ConnectionAcksType UnityEngine.Networking.ConnectionConfig::m_AcksType
	int32_t ___m_AcksType_18;
	// System.Boolean UnityEngine.Networking.ConnectionConfig::m_UsePlatformSpecificProtocols
	bool ___m_UsePlatformSpecificProtocols_19;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_InitialBandwidth
	uint32_t ___m_InitialBandwidth_20;
	// System.Single UnityEngine.Networking.ConnectionConfig::m_BandwidthPeakFactor
	float ___m_BandwidthPeakFactor_21;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_WebSocketReceiveBufferMaxSize
	uint16_t ___m_WebSocketReceiveBufferMaxSize_22;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_UdpSocketReceiveBufferMaxSize
	uint32_t ___m_UdpSocketReceiveBufferMaxSize_23;
	// System.String UnityEngine.Networking.ConnectionConfig::m_SSLCertFilePath
	String_t* ___m_SSLCertFilePath_24;
	// System.String UnityEngine.Networking.ConnectionConfig::m_SSLPrivateKeyFilePath
	String_t* ___m_SSLPrivateKeyFilePath_25;
	// System.String UnityEngine.Networking.ConnectionConfig::m_SSLCAFilePath
	String_t* ___m_SSLCAFilePath_26;
	// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS> UnityEngine.Networking.ConnectionConfig::m_Channels
	List_1_t3363058862 * ___m_Channels_27;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>> UnityEngine.Networking.ConnectionConfig::m_SharedOrderChannels
	List_1_t4078445860 * ___m_SharedOrderChannels_28;

public:
	inline static int32_t get_offset_of_m_PacketSize_1() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_PacketSize_1)); }
	inline uint16_t get_m_PacketSize_1() const { return ___m_PacketSize_1; }
	inline uint16_t* get_address_of_m_PacketSize_1() { return &___m_PacketSize_1; }
	inline void set_m_PacketSize_1(uint16_t value)
	{
		___m_PacketSize_1 = value;
	}

	inline static int32_t get_offset_of_m_FragmentSize_2() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_FragmentSize_2)); }
	inline uint16_t get_m_FragmentSize_2() const { return ___m_FragmentSize_2; }
	inline uint16_t* get_address_of_m_FragmentSize_2() { return &___m_FragmentSize_2; }
	inline void set_m_FragmentSize_2(uint16_t value)
	{
		___m_FragmentSize_2 = value;
	}

	inline static int32_t get_offset_of_m_ResendTimeout_3() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_ResendTimeout_3)); }
	inline uint32_t get_m_ResendTimeout_3() const { return ___m_ResendTimeout_3; }
	inline uint32_t* get_address_of_m_ResendTimeout_3() { return &___m_ResendTimeout_3; }
	inline void set_m_ResendTimeout_3(uint32_t value)
	{
		___m_ResendTimeout_3 = value;
	}

	inline static int32_t get_offset_of_m_DisconnectTimeout_4() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_DisconnectTimeout_4)); }
	inline uint32_t get_m_DisconnectTimeout_4() const { return ___m_DisconnectTimeout_4; }
	inline uint32_t* get_address_of_m_DisconnectTimeout_4() { return &___m_DisconnectTimeout_4; }
	inline void set_m_DisconnectTimeout_4(uint32_t value)
	{
		___m_DisconnectTimeout_4 = value;
	}

	inline static int32_t get_offset_of_m_ConnectTimeout_5() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_ConnectTimeout_5)); }
	inline uint32_t get_m_ConnectTimeout_5() const { return ___m_ConnectTimeout_5; }
	inline uint32_t* get_address_of_m_ConnectTimeout_5() { return &___m_ConnectTimeout_5; }
	inline void set_m_ConnectTimeout_5(uint32_t value)
	{
		___m_ConnectTimeout_5 = value;
	}

	inline static int32_t get_offset_of_m_MinUpdateTimeout_6() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_MinUpdateTimeout_6)); }
	inline uint32_t get_m_MinUpdateTimeout_6() const { return ___m_MinUpdateTimeout_6; }
	inline uint32_t* get_address_of_m_MinUpdateTimeout_6() { return &___m_MinUpdateTimeout_6; }
	inline void set_m_MinUpdateTimeout_6(uint32_t value)
	{
		___m_MinUpdateTimeout_6 = value;
	}

	inline static int32_t get_offset_of_m_PingTimeout_7() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_PingTimeout_7)); }
	inline uint32_t get_m_PingTimeout_7() const { return ___m_PingTimeout_7; }
	inline uint32_t* get_address_of_m_PingTimeout_7() { return &___m_PingTimeout_7; }
	inline void set_m_PingTimeout_7(uint32_t value)
	{
		___m_PingTimeout_7 = value;
	}

	inline static int32_t get_offset_of_m_ReducedPingTimeout_8() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_ReducedPingTimeout_8)); }
	inline uint32_t get_m_ReducedPingTimeout_8() const { return ___m_ReducedPingTimeout_8; }
	inline uint32_t* get_address_of_m_ReducedPingTimeout_8() { return &___m_ReducedPingTimeout_8; }
	inline void set_m_ReducedPingTimeout_8(uint32_t value)
	{
		___m_ReducedPingTimeout_8 = value;
	}

	inline static int32_t get_offset_of_m_AllCostTimeout_9() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_AllCostTimeout_9)); }
	inline uint32_t get_m_AllCostTimeout_9() const { return ___m_AllCostTimeout_9; }
	inline uint32_t* get_address_of_m_AllCostTimeout_9() { return &___m_AllCostTimeout_9; }
	inline void set_m_AllCostTimeout_9(uint32_t value)
	{
		___m_AllCostTimeout_9 = value;
	}

	inline static int32_t get_offset_of_m_NetworkDropThreshold_10() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_NetworkDropThreshold_10)); }
	inline uint8_t get_m_NetworkDropThreshold_10() const { return ___m_NetworkDropThreshold_10; }
	inline uint8_t* get_address_of_m_NetworkDropThreshold_10() { return &___m_NetworkDropThreshold_10; }
	inline void set_m_NetworkDropThreshold_10(uint8_t value)
	{
		___m_NetworkDropThreshold_10 = value;
	}

	inline static int32_t get_offset_of_m_OverflowDropThreshold_11() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_OverflowDropThreshold_11)); }
	inline uint8_t get_m_OverflowDropThreshold_11() const { return ___m_OverflowDropThreshold_11; }
	inline uint8_t* get_address_of_m_OverflowDropThreshold_11() { return &___m_OverflowDropThreshold_11; }
	inline void set_m_OverflowDropThreshold_11(uint8_t value)
	{
		___m_OverflowDropThreshold_11 = value;
	}

	inline static int32_t get_offset_of_m_MaxConnectionAttempt_12() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_MaxConnectionAttempt_12)); }
	inline uint8_t get_m_MaxConnectionAttempt_12() const { return ___m_MaxConnectionAttempt_12; }
	inline uint8_t* get_address_of_m_MaxConnectionAttempt_12() { return &___m_MaxConnectionAttempt_12; }
	inline void set_m_MaxConnectionAttempt_12(uint8_t value)
	{
		___m_MaxConnectionAttempt_12 = value;
	}

	inline static int32_t get_offset_of_m_AckDelay_13() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_AckDelay_13)); }
	inline uint32_t get_m_AckDelay_13() const { return ___m_AckDelay_13; }
	inline uint32_t* get_address_of_m_AckDelay_13() { return &___m_AckDelay_13; }
	inline void set_m_AckDelay_13(uint32_t value)
	{
		___m_AckDelay_13 = value;
	}

	inline static int32_t get_offset_of_m_SendDelay_14() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_SendDelay_14)); }
	inline uint32_t get_m_SendDelay_14() const { return ___m_SendDelay_14; }
	inline uint32_t* get_address_of_m_SendDelay_14() { return &___m_SendDelay_14; }
	inline void set_m_SendDelay_14(uint32_t value)
	{
		___m_SendDelay_14 = value;
	}

	inline static int32_t get_offset_of_m_MaxCombinedReliableMessageSize_15() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_MaxCombinedReliableMessageSize_15)); }
	inline uint16_t get_m_MaxCombinedReliableMessageSize_15() const { return ___m_MaxCombinedReliableMessageSize_15; }
	inline uint16_t* get_address_of_m_MaxCombinedReliableMessageSize_15() { return &___m_MaxCombinedReliableMessageSize_15; }
	inline void set_m_MaxCombinedReliableMessageSize_15(uint16_t value)
	{
		___m_MaxCombinedReliableMessageSize_15 = value;
	}

	inline static int32_t get_offset_of_m_MaxCombinedReliableMessageCount_16() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_MaxCombinedReliableMessageCount_16)); }
	inline uint16_t get_m_MaxCombinedReliableMessageCount_16() const { return ___m_MaxCombinedReliableMessageCount_16; }
	inline uint16_t* get_address_of_m_MaxCombinedReliableMessageCount_16() { return &___m_MaxCombinedReliableMessageCount_16; }
	inline void set_m_MaxCombinedReliableMessageCount_16(uint16_t value)
	{
		___m_MaxCombinedReliableMessageCount_16 = value;
	}

	inline static int32_t get_offset_of_m_MaxSentMessageQueueSize_17() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_MaxSentMessageQueueSize_17)); }
	inline uint16_t get_m_MaxSentMessageQueueSize_17() const { return ___m_MaxSentMessageQueueSize_17; }
	inline uint16_t* get_address_of_m_MaxSentMessageQueueSize_17() { return &___m_MaxSentMessageQueueSize_17; }
	inline void set_m_MaxSentMessageQueueSize_17(uint16_t value)
	{
		___m_MaxSentMessageQueueSize_17 = value;
	}

	inline static int32_t get_offset_of_m_AcksType_18() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_AcksType_18)); }
	inline int32_t get_m_AcksType_18() const { return ___m_AcksType_18; }
	inline int32_t* get_address_of_m_AcksType_18() { return &___m_AcksType_18; }
	inline void set_m_AcksType_18(int32_t value)
	{
		___m_AcksType_18 = value;
	}

	inline static int32_t get_offset_of_m_UsePlatformSpecificProtocols_19() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_UsePlatformSpecificProtocols_19)); }
	inline bool get_m_UsePlatformSpecificProtocols_19() const { return ___m_UsePlatformSpecificProtocols_19; }
	inline bool* get_address_of_m_UsePlatformSpecificProtocols_19() { return &___m_UsePlatformSpecificProtocols_19; }
	inline void set_m_UsePlatformSpecificProtocols_19(bool value)
	{
		___m_UsePlatformSpecificProtocols_19 = value;
	}

	inline static int32_t get_offset_of_m_InitialBandwidth_20() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_InitialBandwidth_20)); }
	inline uint32_t get_m_InitialBandwidth_20() const { return ___m_InitialBandwidth_20; }
	inline uint32_t* get_address_of_m_InitialBandwidth_20() { return &___m_InitialBandwidth_20; }
	inline void set_m_InitialBandwidth_20(uint32_t value)
	{
		___m_InitialBandwidth_20 = value;
	}

	inline static int32_t get_offset_of_m_BandwidthPeakFactor_21() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_BandwidthPeakFactor_21)); }
	inline float get_m_BandwidthPeakFactor_21() const { return ___m_BandwidthPeakFactor_21; }
	inline float* get_address_of_m_BandwidthPeakFactor_21() { return &___m_BandwidthPeakFactor_21; }
	inline void set_m_BandwidthPeakFactor_21(float value)
	{
		___m_BandwidthPeakFactor_21 = value;
	}

	inline static int32_t get_offset_of_m_WebSocketReceiveBufferMaxSize_22() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_WebSocketReceiveBufferMaxSize_22)); }
	inline uint16_t get_m_WebSocketReceiveBufferMaxSize_22() const { return ___m_WebSocketReceiveBufferMaxSize_22; }
	inline uint16_t* get_address_of_m_WebSocketReceiveBufferMaxSize_22() { return &___m_WebSocketReceiveBufferMaxSize_22; }
	inline void set_m_WebSocketReceiveBufferMaxSize_22(uint16_t value)
	{
		___m_WebSocketReceiveBufferMaxSize_22 = value;
	}

	inline static int32_t get_offset_of_m_UdpSocketReceiveBufferMaxSize_23() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_UdpSocketReceiveBufferMaxSize_23)); }
	inline uint32_t get_m_UdpSocketReceiveBufferMaxSize_23() const { return ___m_UdpSocketReceiveBufferMaxSize_23; }
	inline uint32_t* get_address_of_m_UdpSocketReceiveBufferMaxSize_23() { return &___m_UdpSocketReceiveBufferMaxSize_23; }
	inline void set_m_UdpSocketReceiveBufferMaxSize_23(uint32_t value)
	{
		___m_UdpSocketReceiveBufferMaxSize_23 = value;
	}

	inline static int32_t get_offset_of_m_SSLCertFilePath_24() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_SSLCertFilePath_24)); }
	inline String_t* get_m_SSLCertFilePath_24() const { return ___m_SSLCertFilePath_24; }
	inline String_t** get_address_of_m_SSLCertFilePath_24() { return &___m_SSLCertFilePath_24; }
	inline void set_m_SSLCertFilePath_24(String_t* value)
	{
		___m_SSLCertFilePath_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_SSLCertFilePath_24), value);
	}

	inline static int32_t get_offset_of_m_SSLPrivateKeyFilePath_25() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_SSLPrivateKeyFilePath_25)); }
	inline String_t* get_m_SSLPrivateKeyFilePath_25() const { return ___m_SSLPrivateKeyFilePath_25; }
	inline String_t** get_address_of_m_SSLPrivateKeyFilePath_25() { return &___m_SSLPrivateKeyFilePath_25; }
	inline void set_m_SSLPrivateKeyFilePath_25(String_t* value)
	{
		___m_SSLPrivateKeyFilePath_25 = value;
		Il2CppCodeGenWriteBarrier((&___m_SSLPrivateKeyFilePath_25), value);
	}

	inline static int32_t get_offset_of_m_SSLCAFilePath_26() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_SSLCAFilePath_26)); }
	inline String_t* get_m_SSLCAFilePath_26() const { return ___m_SSLCAFilePath_26; }
	inline String_t** get_address_of_m_SSLCAFilePath_26() { return &___m_SSLCAFilePath_26; }
	inline void set_m_SSLCAFilePath_26(String_t* value)
	{
		___m_SSLCAFilePath_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_SSLCAFilePath_26), value);
	}

	inline static int32_t get_offset_of_m_Channels_27() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_Channels_27)); }
	inline List_1_t3363058862 * get_m_Channels_27() const { return ___m_Channels_27; }
	inline List_1_t3363058862 ** get_address_of_m_Channels_27() { return &___m_Channels_27; }
	inline void set_m_Channels_27(List_1_t3363058862 * value)
	{
		___m_Channels_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_Channels_27), value);
	}

	inline static int32_t get_offset_of_m_SharedOrderChannels_28() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_SharedOrderChannels_28)); }
	inline List_1_t4078445860 * get_m_SharedOrderChannels_28() const { return ___m_SharedOrderChannels_28; }
	inline List_1_t4078445860 ** get_address_of_m_SharedOrderChannels_28() { return &___m_SharedOrderChannels_28; }
	inline void set_m_SharedOrderChannels_28(List_1_t4078445860 * value)
	{
		___m_SharedOrderChannels_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_SharedOrderChannels_28), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONCONFIG_T4173981269_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t777629997  : public ArgumentException_t132251570
{
public:
	// System.Object System.ArgumentOutOfRangeException::actual_value
	RuntimeObject * ___actual_value_13;

public:
	inline static int32_t get_offset_of_actual_value_13() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t777629997, ___actual_value_13)); }
	inline RuntimeObject * get_actual_value_13() const { return ___actual_value_13; }
	inline RuntimeObject ** get_address_of_actual_value_13() { return &___actual_value_13; }
	inline void set_actual_value_13(RuntimeObject * value)
	{
		___actual_value_13 = value;
		Il2CppCodeGenWriteBarrier((&___actual_value_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef UNITYWEBREQUEST_T463507806_H
#define UNITYWEBREQUEST_T463507806_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UnityWebRequest
struct  UnityWebRequest_t463507806  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t2937767557 * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t2993558019 * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t2739891000 * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t100236324 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___m_DownloadHandler_1)); }
	inline DownloadHandler_t2937767557 * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_t2937767557 ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_t2937767557 * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_DownloadHandler_1), value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___m_UploadHandler_2)); }
	inline UploadHandler_t2993558019 * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t2993558019 ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t2993558019 * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_UploadHandler_2), value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___m_CertificateHandler_3)); }
	inline CertificateHandler_t2739891000 * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_t2739891000 ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_t2739891000 * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CertificateHandler_3), value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___m_Uri_4)); }
	inline Uri_t100236324 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t100236324 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t100236324 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uri_4), value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t463507806_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t2937767557_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t2993558019_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t2739891000_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t100236324 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t463507806_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t2937767557_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t2993558019_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t2739891000_marshaled_com* ___m_CertificateHandler_3;
	Uri_t100236324 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
#endif // UNITYWEBREQUEST_T463507806_H
#ifndef LISTMATCHRESPONSE_T3200990838_H
#define LISTMATCHRESPONSE_T3200990838_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.ListMatchResponse
struct  ListMatchResponse_t3200990838  : public BasicResponse_t1476713923
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc> UnityEngine.Networking.Match.ListMatchResponse::<matches>k__BackingField
	List_1_t1004336143 * ___U3CmatchesU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CmatchesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ListMatchResponse_t3200990838, ___U3CmatchesU3Ek__BackingField_2)); }
	inline List_1_t1004336143 * get_U3CmatchesU3Ek__BackingField_2() const { return ___U3CmatchesU3Ek__BackingField_2; }
	inline List_1_t1004336143 ** get_address_of_U3CmatchesU3Ek__BackingField_2() { return &___U3CmatchesU3Ek__BackingField_2; }
	inline void set_U3CmatchesU3Ek__BackingField_2(List_1_t1004336143 * value)
	{
		___U3CmatchesU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmatchesU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTMATCHRESPONSE_T3200990838_H
#ifndef JOINMATCHRESPONSE_T845270609_H
#define JOINMATCHRESPONSE_T845270609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.JoinMatchResponse
struct  JoinMatchResponse_t845270609  : public BasicResponse_t1476713923
{
public:
	// System.String UnityEngine.Networking.Match.JoinMatchResponse::<address>k__BackingField
	String_t* ___U3CaddressU3Ek__BackingField_2;
	// System.Int32 UnityEngine.Networking.Match.JoinMatchResponse::<port>k__BackingField
	int32_t ___U3CportU3Ek__BackingField_3;
	// System.Int32 UnityEngine.Networking.Match.JoinMatchResponse::<domain>k__BackingField
	int32_t ___U3CdomainU3Ek__BackingField_4;
	// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.JoinMatchResponse::<networkId>k__BackingField
	uint64_t ___U3CnetworkIdU3Ek__BackingField_5;
	// System.String UnityEngine.Networking.Match.JoinMatchResponse::<accessTokenString>k__BackingField
	String_t* ___U3CaccessTokenStringU3Ek__BackingField_6;
	// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.JoinMatchResponse::<nodeId>k__BackingField
	uint16_t ___U3CnodeIdU3Ek__BackingField_7;
	// System.Boolean UnityEngine.Networking.Match.JoinMatchResponse::<usingRelay>k__BackingField
	bool ___U3CusingRelayU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CaddressU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(JoinMatchResponse_t845270609, ___U3CaddressU3Ek__BackingField_2)); }
	inline String_t* get_U3CaddressU3Ek__BackingField_2() const { return ___U3CaddressU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CaddressU3Ek__BackingField_2() { return &___U3CaddressU3Ek__BackingField_2; }
	inline void set_U3CaddressU3Ek__BackingField_2(String_t* value)
	{
		___U3CaddressU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CaddressU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CportU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(JoinMatchResponse_t845270609, ___U3CportU3Ek__BackingField_3)); }
	inline int32_t get_U3CportU3Ek__BackingField_3() const { return ___U3CportU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CportU3Ek__BackingField_3() { return &___U3CportU3Ek__BackingField_3; }
	inline void set_U3CportU3Ek__BackingField_3(int32_t value)
	{
		___U3CportU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CdomainU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(JoinMatchResponse_t845270609, ___U3CdomainU3Ek__BackingField_4)); }
	inline int32_t get_U3CdomainU3Ek__BackingField_4() const { return ___U3CdomainU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CdomainU3Ek__BackingField_4() { return &___U3CdomainU3Ek__BackingField_4; }
	inline void set_U3CdomainU3Ek__BackingField_4(int32_t value)
	{
		___U3CdomainU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CnetworkIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(JoinMatchResponse_t845270609, ___U3CnetworkIdU3Ek__BackingField_5)); }
	inline uint64_t get_U3CnetworkIdU3Ek__BackingField_5() const { return ___U3CnetworkIdU3Ek__BackingField_5; }
	inline uint64_t* get_address_of_U3CnetworkIdU3Ek__BackingField_5() { return &___U3CnetworkIdU3Ek__BackingField_5; }
	inline void set_U3CnetworkIdU3Ek__BackingField_5(uint64_t value)
	{
		___U3CnetworkIdU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CaccessTokenStringU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(JoinMatchResponse_t845270609, ___U3CaccessTokenStringU3Ek__BackingField_6)); }
	inline String_t* get_U3CaccessTokenStringU3Ek__BackingField_6() const { return ___U3CaccessTokenStringU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CaccessTokenStringU3Ek__BackingField_6() { return &___U3CaccessTokenStringU3Ek__BackingField_6; }
	inline void set_U3CaccessTokenStringU3Ek__BackingField_6(String_t* value)
	{
		___U3CaccessTokenStringU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CaccessTokenStringU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CnodeIdU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(JoinMatchResponse_t845270609, ___U3CnodeIdU3Ek__BackingField_7)); }
	inline uint16_t get_U3CnodeIdU3Ek__BackingField_7() const { return ___U3CnodeIdU3Ek__BackingField_7; }
	inline uint16_t* get_address_of_U3CnodeIdU3Ek__BackingField_7() { return &___U3CnodeIdU3Ek__BackingField_7; }
	inline void set_U3CnodeIdU3Ek__BackingField_7(uint16_t value)
	{
		___U3CnodeIdU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CusingRelayU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(JoinMatchResponse_t845270609, ___U3CusingRelayU3Ek__BackingField_8)); }
	inline bool get_U3CusingRelayU3Ek__BackingField_8() const { return ___U3CusingRelayU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CusingRelayU3Ek__BackingField_8() { return &___U3CusingRelayU3Ek__BackingField_8; }
	inline void set_U3CusingRelayU3Ek__BackingField_8(bool value)
	{
		___U3CusingRelayU3Ek__BackingField_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JOINMATCHRESPONSE_T845270609_H
#ifndef DROPCONNECTIONRESPONSE_T3571632289_H
#define DROPCONNECTIONRESPONSE_T3571632289_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.DropConnectionResponse
struct  DropConnectionResponse_t3571632289  : public Response_t2513603462
{
public:
	// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DropConnectionResponse::<networkId>k__BackingField
	uint64_t ___U3CnetworkIdU3Ek__BackingField_2;
	// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.DropConnectionResponse::<nodeId>k__BackingField
	uint16_t ___U3CnodeIdU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CnetworkIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DropConnectionResponse_t3571632289, ___U3CnetworkIdU3Ek__BackingField_2)); }
	inline uint64_t get_U3CnetworkIdU3Ek__BackingField_2() const { return ___U3CnetworkIdU3Ek__BackingField_2; }
	inline uint64_t* get_address_of_U3CnetworkIdU3Ek__BackingField_2() { return &___U3CnetworkIdU3Ek__BackingField_2; }
	inline void set_U3CnetworkIdU3Ek__BackingField_2(uint64_t value)
	{
		___U3CnetworkIdU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CnodeIdU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DropConnectionResponse_t3571632289, ___U3CnodeIdU3Ek__BackingField_3)); }
	inline uint16_t get_U3CnodeIdU3Ek__BackingField_3() const { return ___U3CnodeIdU3Ek__BackingField_3; }
	inline uint16_t* get_address_of_U3CnodeIdU3Ek__BackingField_3() { return &___U3CnodeIdU3Ek__BackingField_3; }
	inline void set_U3CnodeIdU3Ek__BackingField_3(uint16_t value)
	{
		___U3CnodeIdU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DROPCONNECTIONRESPONSE_T3571632289_H
#ifndef MATCHINFOSNAPSHOT_T3166422189_H
#define MATCHINFOSNAPSHOT_T3166422189_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.MatchInfoSnapshot
struct  MatchInfoSnapshot_t3166422189  : public RuntimeObject
{
public:
	// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.MatchInfoSnapshot::<networkId>k__BackingField
	uint64_t ___U3CnetworkIdU3Ek__BackingField_0;
	// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchInfoSnapshot::<hostNodeId>k__BackingField
	uint16_t ___U3ChostNodeIdU3Ek__BackingField_1;
	// System.String UnityEngine.Networking.Match.MatchInfoSnapshot::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_2;
	// System.Int32 UnityEngine.Networking.Match.MatchInfoSnapshot::<averageEloScore>k__BackingField
	int32_t ___U3CaverageEloScoreU3Ek__BackingField_3;
	// System.Int32 UnityEngine.Networking.Match.MatchInfoSnapshot::<maxSize>k__BackingField
	int32_t ___U3CmaxSizeU3Ek__BackingField_4;
	// System.Int32 UnityEngine.Networking.Match.MatchInfoSnapshot::<currentSize>k__BackingField
	int32_t ___U3CcurrentSizeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.Match.MatchInfoSnapshot::<isPrivate>k__BackingField
	bool ___U3CisPrivateU3Ek__BackingField_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.MatchInfoSnapshot::<matchAttributes>k__BackingField
	Dictionary_2_t3521823603 * ___U3CmatchAttributesU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot> UnityEngine.Networking.Match.MatchInfoSnapshot::<directConnectInfos>k__BackingField
	List_1_t2090095927 * ___U3CdirectConnectInfosU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CnetworkIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MatchInfoSnapshot_t3166422189, ___U3CnetworkIdU3Ek__BackingField_0)); }
	inline uint64_t get_U3CnetworkIdU3Ek__BackingField_0() const { return ___U3CnetworkIdU3Ek__BackingField_0; }
	inline uint64_t* get_address_of_U3CnetworkIdU3Ek__BackingField_0() { return &___U3CnetworkIdU3Ek__BackingField_0; }
	inline void set_U3CnetworkIdU3Ek__BackingField_0(uint64_t value)
	{
		___U3CnetworkIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3ChostNodeIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MatchInfoSnapshot_t3166422189, ___U3ChostNodeIdU3Ek__BackingField_1)); }
	inline uint16_t get_U3ChostNodeIdU3Ek__BackingField_1() const { return ___U3ChostNodeIdU3Ek__BackingField_1; }
	inline uint16_t* get_address_of_U3ChostNodeIdU3Ek__BackingField_1() { return &___U3ChostNodeIdU3Ek__BackingField_1; }
	inline void set_U3ChostNodeIdU3Ek__BackingField_1(uint16_t value)
	{
		___U3ChostNodeIdU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MatchInfoSnapshot_t3166422189, ___U3CnameU3Ek__BackingField_2)); }
	inline String_t* get_U3CnameU3Ek__BackingField_2() const { return ___U3CnameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_2() { return &___U3CnameU3Ek__BackingField_2; }
	inline void set_U3CnameU3Ek__BackingField_2(String_t* value)
	{
		___U3CnameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnameU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CaverageEloScoreU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MatchInfoSnapshot_t3166422189, ___U3CaverageEloScoreU3Ek__BackingField_3)); }
	inline int32_t get_U3CaverageEloScoreU3Ek__BackingField_3() const { return ___U3CaverageEloScoreU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CaverageEloScoreU3Ek__BackingField_3() { return &___U3CaverageEloScoreU3Ek__BackingField_3; }
	inline void set_U3CaverageEloScoreU3Ek__BackingField_3(int32_t value)
	{
		___U3CaverageEloScoreU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CmaxSizeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MatchInfoSnapshot_t3166422189, ___U3CmaxSizeU3Ek__BackingField_4)); }
	inline int32_t get_U3CmaxSizeU3Ek__BackingField_4() const { return ___U3CmaxSizeU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CmaxSizeU3Ek__BackingField_4() { return &___U3CmaxSizeU3Ek__BackingField_4; }
	inline void set_U3CmaxSizeU3Ek__BackingField_4(int32_t value)
	{
		___U3CmaxSizeU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CcurrentSizeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MatchInfoSnapshot_t3166422189, ___U3CcurrentSizeU3Ek__BackingField_5)); }
	inline int32_t get_U3CcurrentSizeU3Ek__BackingField_5() const { return ___U3CcurrentSizeU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CcurrentSizeU3Ek__BackingField_5() { return &___U3CcurrentSizeU3Ek__BackingField_5; }
	inline void set_U3CcurrentSizeU3Ek__BackingField_5(int32_t value)
	{
		___U3CcurrentSizeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CisPrivateU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(MatchInfoSnapshot_t3166422189, ___U3CisPrivateU3Ek__BackingField_6)); }
	inline bool get_U3CisPrivateU3Ek__BackingField_6() const { return ___U3CisPrivateU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CisPrivateU3Ek__BackingField_6() { return &___U3CisPrivateU3Ek__BackingField_6; }
	inline void set_U3CisPrivateU3Ek__BackingField_6(bool value)
	{
		___U3CisPrivateU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CmatchAttributesU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(MatchInfoSnapshot_t3166422189, ___U3CmatchAttributesU3Ek__BackingField_7)); }
	inline Dictionary_2_t3521823603 * get_U3CmatchAttributesU3Ek__BackingField_7() const { return ___U3CmatchAttributesU3Ek__BackingField_7; }
	inline Dictionary_2_t3521823603 ** get_address_of_U3CmatchAttributesU3Ek__BackingField_7() { return &___U3CmatchAttributesU3Ek__BackingField_7; }
	inline void set_U3CmatchAttributesU3Ek__BackingField_7(Dictionary_2_t3521823603 * value)
	{
		___U3CmatchAttributesU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmatchAttributesU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CdirectConnectInfosU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(MatchInfoSnapshot_t3166422189, ___U3CdirectConnectInfosU3Ek__BackingField_8)); }
	inline List_1_t2090095927 * get_U3CdirectConnectInfosU3Ek__BackingField_8() const { return ___U3CdirectConnectInfosU3Ek__BackingField_8; }
	inline List_1_t2090095927 ** get_address_of_U3CdirectConnectInfosU3Ek__BackingField_8() { return &___U3CdirectConnectInfosU3Ek__BackingField_8; }
	inline void set_U3CdirectConnectInfosU3Ek__BackingField_8(List_1_t2090095927 * value)
	{
		___U3CdirectConnectInfosU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CdirectConnectInfosU3Ek__BackingField_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATCHINFOSNAPSHOT_T3166422189_H
#ifndef MATCHINFODIRECTCONNECTSNAPSHOT_T618021185_H
#define MATCHINFODIRECTCONNECTSNAPSHOT_T618021185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot
struct  MatchInfoDirectConnectSnapshot_t618021185  : public RuntimeObject
{
public:
	// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot::<nodeId>k__BackingField
	uint16_t ___U3CnodeIdU3Ek__BackingField_0;
	// System.String UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot::<publicAddress>k__BackingField
	String_t* ___U3CpublicAddressU3Ek__BackingField_1;
	// System.String UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot::<privateAddress>k__BackingField
	String_t* ___U3CprivateAddressU3Ek__BackingField_2;
	// UnityEngine.Networking.Types.HostPriority UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot::<hostPriority>k__BackingField
	int32_t ___U3ChostPriorityU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CnodeIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MatchInfoDirectConnectSnapshot_t618021185, ___U3CnodeIdU3Ek__BackingField_0)); }
	inline uint16_t get_U3CnodeIdU3Ek__BackingField_0() const { return ___U3CnodeIdU3Ek__BackingField_0; }
	inline uint16_t* get_address_of_U3CnodeIdU3Ek__BackingField_0() { return &___U3CnodeIdU3Ek__BackingField_0; }
	inline void set_U3CnodeIdU3Ek__BackingField_0(uint16_t value)
	{
		___U3CnodeIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CpublicAddressU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MatchInfoDirectConnectSnapshot_t618021185, ___U3CpublicAddressU3Ek__BackingField_1)); }
	inline String_t* get_U3CpublicAddressU3Ek__BackingField_1() const { return ___U3CpublicAddressU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CpublicAddressU3Ek__BackingField_1() { return &___U3CpublicAddressU3Ek__BackingField_1; }
	inline void set_U3CpublicAddressU3Ek__BackingField_1(String_t* value)
	{
		___U3CpublicAddressU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpublicAddressU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CprivateAddressU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MatchInfoDirectConnectSnapshot_t618021185, ___U3CprivateAddressU3Ek__BackingField_2)); }
	inline String_t* get_U3CprivateAddressU3Ek__BackingField_2() const { return ___U3CprivateAddressU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CprivateAddressU3Ek__BackingField_2() { return &___U3CprivateAddressU3Ek__BackingField_2; }
	inline void set_U3CprivateAddressU3Ek__BackingField_2(String_t* value)
	{
		___U3CprivateAddressU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CprivateAddressU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3ChostPriorityU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MatchInfoDirectConnectSnapshot_t618021185, ___U3ChostPriorityU3Ek__BackingField_3)); }
	inline int32_t get_U3ChostPriorityU3Ek__BackingField_3() const { return ___U3ChostPriorityU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3ChostPriorityU3Ek__BackingField_3() { return &___U3ChostPriorityU3Ek__BackingField_3; }
	inline void set_U3ChostPriorityU3Ek__BackingField_3(int32_t value)
	{
		___U3ChostPriorityU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATCHINFODIRECTCONNECTSNAPSHOT_T618021185_H
#ifndef MATCHDIRECTCONNECTINFO_T2855340396_H
#define MATCHDIRECTCONNECTINFO_T2855340396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.MatchDirectConnectInfo
struct  MatchDirectConnectInfo_t2855340396  : public ResponseBase_t1712937097
{
public:
	// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchDirectConnectInfo::<nodeId>k__BackingField
	uint16_t ___U3CnodeIdU3Ek__BackingField_0;
	// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::<publicAddress>k__BackingField
	String_t* ___U3CpublicAddressU3Ek__BackingField_1;
	// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::<privateAddress>k__BackingField
	String_t* ___U3CprivateAddressU3Ek__BackingField_2;
	// UnityEngine.Networking.Types.HostPriority UnityEngine.Networking.Match.MatchDirectConnectInfo::<hostPriority>k__BackingField
	int32_t ___U3ChostPriorityU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CnodeIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MatchDirectConnectInfo_t2855340396, ___U3CnodeIdU3Ek__BackingField_0)); }
	inline uint16_t get_U3CnodeIdU3Ek__BackingField_0() const { return ___U3CnodeIdU3Ek__BackingField_0; }
	inline uint16_t* get_address_of_U3CnodeIdU3Ek__BackingField_0() { return &___U3CnodeIdU3Ek__BackingField_0; }
	inline void set_U3CnodeIdU3Ek__BackingField_0(uint16_t value)
	{
		___U3CnodeIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CpublicAddressU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MatchDirectConnectInfo_t2855340396, ___U3CpublicAddressU3Ek__BackingField_1)); }
	inline String_t* get_U3CpublicAddressU3Ek__BackingField_1() const { return ___U3CpublicAddressU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CpublicAddressU3Ek__BackingField_1() { return &___U3CpublicAddressU3Ek__BackingField_1; }
	inline void set_U3CpublicAddressU3Ek__BackingField_1(String_t* value)
	{
		___U3CpublicAddressU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpublicAddressU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CprivateAddressU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MatchDirectConnectInfo_t2855340396, ___U3CprivateAddressU3Ek__BackingField_2)); }
	inline String_t* get_U3CprivateAddressU3Ek__BackingField_2() const { return ___U3CprivateAddressU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CprivateAddressU3Ek__BackingField_2() { return &___U3CprivateAddressU3Ek__BackingField_2; }
	inline void set_U3CprivateAddressU3Ek__BackingField_2(String_t* value)
	{
		___U3CprivateAddressU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CprivateAddressU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3ChostPriorityU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MatchDirectConnectInfo_t2855340396, ___U3ChostPriorityU3Ek__BackingField_3)); }
	inline int32_t get_U3ChostPriorityU3Ek__BackingField_3() const { return ___U3ChostPriorityU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3ChostPriorityU3Ek__BackingField_3() { return &___U3ChostPriorityU3Ek__BackingField_3; }
	inline void set_U3ChostPriorityU3Ek__BackingField_3(int32_t value)
	{
		___U3ChostPriorityU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATCHDIRECTCONNECTINFO_T2855340396_H
#ifndef DROPCONNECTIONREQUEST_T2647317937_H
#define DROPCONNECTIONREQUEST_T2647317937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.DropConnectionRequest
struct  DropConnectionRequest_t2647317937  : public Request_t2696089890
{
public:
	// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DropConnectionRequest::<networkId>k__BackingField
	uint64_t ___U3CnetworkIdU3Ek__BackingField_5;
	// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.DropConnectionRequest::<nodeId>k__BackingField
	uint16_t ___U3CnodeIdU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CnetworkIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DropConnectionRequest_t2647317937, ___U3CnetworkIdU3Ek__BackingField_5)); }
	inline uint64_t get_U3CnetworkIdU3Ek__BackingField_5() const { return ___U3CnetworkIdU3Ek__BackingField_5; }
	inline uint64_t* get_address_of_U3CnetworkIdU3Ek__BackingField_5() { return &___U3CnetworkIdU3Ek__BackingField_5; }
	inline void set_U3CnetworkIdU3Ek__BackingField_5(uint64_t value)
	{
		___U3CnetworkIdU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CnodeIdU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(DropConnectionRequest_t2647317937, ___U3CnodeIdU3Ek__BackingField_6)); }
	inline uint16_t get_U3CnodeIdU3Ek__BackingField_6() const { return ___U3CnodeIdU3Ek__BackingField_6; }
	inline uint16_t* get_address_of_U3CnodeIdU3Ek__BackingField_6() { return &___U3CnodeIdU3Ek__BackingField_6; }
	inline void set_U3CnodeIdU3Ek__BackingField_6(uint16_t value)
	{
		___U3CnodeIdU3Ek__BackingField_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DROPCONNECTIONREQUEST_T2647317937_H
#ifndef JOINMATCHREQUEST_T3991767598_H
#define JOINMATCHREQUEST_T3991767598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.JoinMatchRequest
struct  JoinMatchRequest_t3991767598  : public Request_t2696089890
{
public:
	// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.JoinMatchRequest::<networkId>k__BackingField
	uint64_t ___U3CnetworkIdU3Ek__BackingField_5;
	// System.String UnityEngine.Networking.Match.JoinMatchRequest::<publicAddress>k__BackingField
	String_t* ___U3CpublicAddressU3Ek__BackingField_6;
	// System.String UnityEngine.Networking.Match.JoinMatchRequest::<privateAddress>k__BackingField
	String_t* ___U3CprivateAddressU3Ek__BackingField_7;
	// System.Int32 UnityEngine.Networking.Match.JoinMatchRequest::<eloScore>k__BackingField
	int32_t ___U3CeloScoreU3Ek__BackingField_8;
	// System.String UnityEngine.Networking.Match.JoinMatchRequest::<password>k__BackingField
	String_t* ___U3CpasswordU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CnetworkIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(JoinMatchRequest_t3991767598, ___U3CnetworkIdU3Ek__BackingField_5)); }
	inline uint64_t get_U3CnetworkIdU3Ek__BackingField_5() const { return ___U3CnetworkIdU3Ek__BackingField_5; }
	inline uint64_t* get_address_of_U3CnetworkIdU3Ek__BackingField_5() { return &___U3CnetworkIdU3Ek__BackingField_5; }
	inline void set_U3CnetworkIdU3Ek__BackingField_5(uint64_t value)
	{
		___U3CnetworkIdU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CpublicAddressU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(JoinMatchRequest_t3991767598, ___U3CpublicAddressU3Ek__BackingField_6)); }
	inline String_t* get_U3CpublicAddressU3Ek__BackingField_6() const { return ___U3CpublicAddressU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CpublicAddressU3Ek__BackingField_6() { return &___U3CpublicAddressU3Ek__BackingField_6; }
	inline void set_U3CpublicAddressU3Ek__BackingField_6(String_t* value)
	{
		___U3CpublicAddressU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpublicAddressU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CprivateAddressU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(JoinMatchRequest_t3991767598, ___U3CprivateAddressU3Ek__BackingField_7)); }
	inline String_t* get_U3CprivateAddressU3Ek__BackingField_7() const { return ___U3CprivateAddressU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CprivateAddressU3Ek__BackingField_7() { return &___U3CprivateAddressU3Ek__BackingField_7; }
	inline void set_U3CprivateAddressU3Ek__BackingField_7(String_t* value)
	{
		___U3CprivateAddressU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CprivateAddressU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CeloScoreU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(JoinMatchRequest_t3991767598, ___U3CeloScoreU3Ek__BackingField_8)); }
	inline int32_t get_U3CeloScoreU3Ek__BackingField_8() const { return ___U3CeloScoreU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CeloScoreU3Ek__BackingField_8() { return &___U3CeloScoreU3Ek__BackingField_8; }
	inline void set_U3CeloScoreU3Ek__BackingField_8(int32_t value)
	{
		___U3CeloScoreU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CpasswordU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(JoinMatchRequest_t3991767598, ___U3CpasswordU3Ek__BackingField_9)); }
	inline String_t* get_U3CpasswordU3Ek__BackingField_9() const { return ___U3CpasswordU3Ek__BackingField_9; }
	inline String_t** get_address_of_U3CpasswordU3Ek__BackingField_9() { return &___U3CpasswordU3Ek__BackingField_9; }
	inline void set_U3CpasswordU3Ek__BackingField_9(String_t* value)
	{
		___U3CpasswordU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpasswordU3Ek__BackingField_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JOINMATCHREQUEST_T3991767598_H
#ifndef LISTMATCHREQUEST_T1588429355_H
#define LISTMATCHREQUEST_T1588429355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.ListMatchRequest
struct  ListMatchRequest_t1588429355  : public Request_t2696089890
{
public:
	// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::<pageSize>k__BackingField
	int32_t ___U3CpageSizeU3Ek__BackingField_5;
	// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::<pageNum>k__BackingField
	int32_t ___U3CpageNumU3Ek__BackingField_6;
	// System.String UnityEngine.Networking.Match.ListMatchRequest::<nameFilter>k__BackingField
	String_t* ___U3CnameFilterU3Ek__BackingField_7;
	// System.Boolean UnityEngine.Networking.Match.ListMatchRequest::<filterOutPrivateMatches>k__BackingField
	bool ___U3CfilterOutPrivateMatchesU3Ek__BackingField_8;
	// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::<eloScore>k__BackingField
	int32_t ___U3CeloScoreU3Ek__BackingField_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::<matchAttributeFilterLessThan>k__BackingField
	Dictionary_2_t3521823603 * ___U3CmatchAttributeFilterLessThanU3Ek__BackingField_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::<matchAttributeFilterEqualTo>k__BackingField
	Dictionary_2_t3521823603 * ___U3CmatchAttributeFilterEqualToU3Ek__BackingField_11;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::<matchAttributeFilterGreaterThan>k__BackingField
	Dictionary_2_t3521823603 * ___U3CmatchAttributeFilterGreaterThanU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_U3CpageSizeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ListMatchRequest_t1588429355, ___U3CpageSizeU3Ek__BackingField_5)); }
	inline int32_t get_U3CpageSizeU3Ek__BackingField_5() const { return ___U3CpageSizeU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CpageSizeU3Ek__BackingField_5() { return &___U3CpageSizeU3Ek__BackingField_5; }
	inline void set_U3CpageSizeU3Ek__BackingField_5(int32_t value)
	{
		___U3CpageSizeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CpageNumU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ListMatchRequest_t1588429355, ___U3CpageNumU3Ek__BackingField_6)); }
	inline int32_t get_U3CpageNumU3Ek__BackingField_6() const { return ___U3CpageNumU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CpageNumU3Ek__BackingField_6() { return &___U3CpageNumU3Ek__BackingField_6; }
	inline void set_U3CpageNumU3Ek__BackingField_6(int32_t value)
	{
		___U3CpageNumU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CnameFilterU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ListMatchRequest_t1588429355, ___U3CnameFilterU3Ek__BackingField_7)); }
	inline String_t* get_U3CnameFilterU3Ek__BackingField_7() const { return ___U3CnameFilterU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CnameFilterU3Ek__BackingField_7() { return &___U3CnameFilterU3Ek__BackingField_7; }
	inline void set_U3CnameFilterU3Ek__BackingField_7(String_t* value)
	{
		___U3CnameFilterU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnameFilterU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CfilterOutPrivateMatchesU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ListMatchRequest_t1588429355, ___U3CfilterOutPrivateMatchesU3Ek__BackingField_8)); }
	inline bool get_U3CfilterOutPrivateMatchesU3Ek__BackingField_8() const { return ___U3CfilterOutPrivateMatchesU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CfilterOutPrivateMatchesU3Ek__BackingField_8() { return &___U3CfilterOutPrivateMatchesU3Ek__BackingField_8; }
	inline void set_U3CfilterOutPrivateMatchesU3Ek__BackingField_8(bool value)
	{
		___U3CfilterOutPrivateMatchesU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CeloScoreU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(ListMatchRequest_t1588429355, ___U3CeloScoreU3Ek__BackingField_9)); }
	inline int32_t get_U3CeloScoreU3Ek__BackingField_9() const { return ___U3CeloScoreU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CeloScoreU3Ek__BackingField_9() { return &___U3CeloScoreU3Ek__BackingField_9; }
	inline void set_U3CeloScoreU3Ek__BackingField_9(int32_t value)
	{
		___U3CeloScoreU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CmatchAttributeFilterLessThanU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(ListMatchRequest_t1588429355, ___U3CmatchAttributeFilterLessThanU3Ek__BackingField_10)); }
	inline Dictionary_2_t3521823603 * get_U3CmatchAttributeFilterLessThanU3Ek__BackingField_10() const { return ___U3CmatchAttributeFilterLessThanU3Ek__BackingField_10; }
	inline Dictionary_2_t3521823603 ** get_address_of_U3CmatchAttributeFilterLessThanU3Ek__BackingField_10() { return &___U3CmatchAttributeFilterLessThanU3Ek__BackingField_10; }
	inline void set_U3CmatchAttributeFilterLessThanU3Ek__BackingField_10(Dictionary_2_t3521823603 * value)
	{
		___U3CmatchAttributeFilterLessThanU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmatchAttributeFilterLessThanU3Ek__BackingField_10), value);
	}

	inline static int32_t get_offset_of_U3CmatchAttributeFilterEqualToU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(ListMatchRequest_t1588429355, ___U3CmatchAttributeFilterEqualToU3Ek__BackingField_11)); }
	inline Dictionary_2_t3521823603 * get_U3CmatchAttributeFilterEqualToU3Ek__BackingField_11() const { return ___U3CmatchAttributeFilterEqualToU3Ek__BackingField_11; }
	inline Dictionary_2_t3521823603 ** get_address_of_U3CmatchAttributeFilterEqualToU3Ek__BackingField_11() { return &___U3CmatchAttributeFilterEqualToU3Ek__BackingField_11; }
	inline void set_U3CmatchAttributeFilterEqualToU3Ek__BackingField_11(Dictionary_2_t3521823603 * value)
	{
		___U3CmatchAttributeFilterEqualToU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmatchAttributeFilterEqualToU3Ek__BackingField_11), value);
	}

	inline static int32_t get_offset_of_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(ListMatchRequest_t1588429355, ___U3CmatchAttributeFilterGreaterThanU3Ek__BackingField_12)); }
	inline Dictionary_2_t3521823603 * get_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField_12() const { return ___U3CmatchAttributeFilterGreaterThanU3Ek__BackingField_12; }
	inline Dictionary_2_t3521823603 ** get_address_of_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField_12() { return &___U3CmatchAttributeFilterGreaterThanU3Ek__BackingField_12; }
	inline void set_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField_12(Dictionary_2_t3521823603 * value)
	{
		___U3CmatchAttributeFilterGreaterThanU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmatchAttributeFilterGreaterThanU3Ek__BackingField_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTMATCHREQUEST_T1588429355_H
#ifndef DESTROYMATCHREQUEST_T2124150613_H
#define DESTROYMATCHREQUEST_T2124150613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.DestroyMatchRequest
struct  DestroyMatchRequest_t2124150613  : public Request_t2696089890
{
public:
	// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DestroyMatchRequest::<networkId>k__BackingField
	uint64_t ___U3CnetworkIdU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CnetworkIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DestroyMatchRequest_t2124150613, ___U3CnetworkIdU3Ek__BackingField_5)); }
	inline uint64_t get_U3CnetworkIdU3Ek__BackingField_5() const { return ___U3CnetworkIdU3Ek__BackingField_5; }
	inline uint64_t* get_address_of_U3CnetworkIdU3Ek__BackingField_5() { return &___U3CnetworkIdU3Ek__BackingField_5; }
	inline void set_U3CnetworkIdU3Ek__BackingField_5(uint64_t value)
	{
		___U3CnetworkIdU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESTROYMATCHREQUEST_T2124150613_H
#ifndef DATARESPONSEDELEGATE_1_T186927816_H
#define DATARESPONSEDELEGATE_1_T186927816_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>
struct  DataResponseDelegate_1_t186927816  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATARESPONSEDELEGATE_1_T186927816_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef DATARESPONSEDELEGATE_1_T309155718_H
#define DATARESPONSEDELEGATE_1_T309155718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot>>
struct  DataResponseDelegate_1_t309155718  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATARESPONSEDELEGATE_1_T309155718_H
#ifndef INTERNALRESPONSEDELEGATE_2_T304736019_H
#define INTERNALRESPONSEDELEGATE_2_T304736019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<UnityEngine.Networking.Match.DropConnectionResponse,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate>
struct  InternalResponseDelegate_2_t304736019  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALRESPONSEDELEGATE_2_T304736019_H
#ifndef INTERNALRESPONSEDELEGATE_2_T753237801_H
#define INTERNALRESPONSEDELEGATE_2_T753237801_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<UnityEngine.Networking.Match.BasicResponse,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate>
struct  InternalResponseDelegate_2_t753237801  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALRESPONSEDELEGATE_2_T753237801_H
#ifndef INTERNALRESPONSEDELEGATE_2_T873951790_H
#define INTERNALRESPONSEDELEGATE_2_T873951790_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<UnityEngine.Networking.Match.ListMatchResponse,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot>>>
struct  InternalResponseDelegate_2_t873951790  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALRESPONSEDELEGATE_2_T873951790_H
#ifndef SETMATCHATTRIBUTESREQUEST_T2732203151_H
#define SETMATCHATTRIBUTESREQUEST_T2732203151_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.SetMatchAttributesRequest
struct  SetMatchAttributesRequest_t2732203151  : public Request_t2696089890
{
public:
	// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.SetMatchAttributesRequest::<networkId>k__BackingField
	uint64_t ___U3CnetworkIdU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.Match.SetMatchAttributesRequest::<isListed>k__BackingField
	bool ___U3CisListedU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CnetworkIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SetMatchAttributesRequest_t2732203151, ___U3CnetworkIdU3Ek__BackingField_5)); }
	inline uint64_t get_U3CnetworkIdU3Ek__BackingField_5() const { return ___U3CnetworkIdU3Ek__BackingField_5; }
	inline uint64_t* get_address_of_U3CnetworkIdU3Ek__BackingField_5() { return &___U3CnetworkIdU3Ek__BackingField_5; }
	inline void set_U3CnetworkIdU3Ek__BackingField_5(uint64_t value)
	{
		___U3CnetworkIdU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CisListedU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SetMatchAttributesRequest_t2732203151, ___U3CisListedU3Ek__BackingField_6)); }
	inline bool get_U3CisListedU3Ek__BackingField_6() const { return ___U3CisListedU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CisListedU3Ek__BackingField_6() { return &___U3CisListedU3Ek__BackingField_6; }
	inline void set_U3CisListedU3Ek__BackingField_6(bool value)
	{
		___U3CisListedU3Ek__BackingField_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETMATCHATTRIBUTESREQUEST_T2732203151_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef INTERNALRESPONSEDELEGATE_2_T992249662_H
#define INTERNALRESPONSEDELEGATE_2_T992249662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<UnityEngine.Networking.Match.CreateMatchResponse,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>>
struct  InternalResponseDelegate_2_t992249662  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALRESPONSEDELEGATE_2_T992249662_H
#ifndef ACTION_1_T3123413348_H
#define ACTION_1_T3123413348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.Int32>
struct  Action_1_t3123413348  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T3123413348_H
#ifndef ACTION_2_T4177122770_H
#define ACTION_2_T4177122770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<System.Int32,System.Int32>
struct  Action_2_t4177122770  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_T4177122770_H
#ifndef CREATEMATCHREQUEST_T2600446299_H
#define CREATEMATCHREQUEST_T2600446299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.CreateMatchRequest
struct  CreateMatchRequest_t2600446299  : public Request_t2696089890
{
public:
	// System.String UnityEngine.Networking.Match.CreateMatchRequest::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_5;
	// System.UInt32 UnityEngine.Networking.Match.CreateMatchRequest::<size>k__BackingField
	uint32_t ___U3CsizeU3Ek__BackingField_6;
	// System.String UnityEngine.Networking.Match.CreateMatchRequest::<publicAddress>k__BackingField
	String_t* ___U3CpublicAddressU3Ek__BackingField_7;
	// System.String UnityEngine.Networking.Match.CreateMatchRequest::<privateAddress>k__BackingField
	String_t* ___U3CprivateAddressU3Ek__BackingField_8;
	// System.Int32 UnityEngine.Networking.Match.CreateMatchRequest::<eloScore>k__BackingField
	int32_t ___U3CeloScoreU3Ek__BackingField_9;
	// System.Boolean UnityEngine.Networking.Match.CreateMatchRequest::<advertise>k__BackingField
	bool ___U3CadvertiseU3Ek__BackingField_10;
	// System.String UnityEngine.Networking.Match.CreateMatchRequest::<password>k__BackingField
	String_t* ___U3CpasswordU3Ek__BackingField_11;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.CreateMatchRequest::<matchAttributes>k__BackingField
	Dictionary_2_t3521823603 * ___U3CmatchAttributesU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(CreateMatchRequest_t2600446299, ___U3CnameU3Ek__BackingField_5)); }
	inline String_t* get_U3CnameU3Ek__BackingField_5() const { return ___U3CnameU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_5() { return &___U3CnameU3Ek__BackingField_5; }
	inline void set_U3CnameU3Ek__BackingField_5(String_t* value)
	{
		___U3CnameU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnameU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CsizeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(CreateMatchRequest_t2600446299, ___U3CsizeU3Ek__BackingField_6)); }
	inline uint32_t get_U3CsizeU3Ek__BackingField_6() const { return ___U3CsizeU3Ek__BackingField_6; }
	inline uint32_t* get_address_of_U3CsizeU3Ek__BackingField_6() { return &___U3CsizeU3Ek__BackingField_6; }
	inline void set_U3CsizeU3Ek__BackingField_6(uint32_t value)
	{
		___U3CsizeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CpublicAddressU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(CreateMatchRequest_t2600446299, ___U3CpublicAddressU3Ek__BackingField_7)); }
	inline String_t* get_U3CpublicAddressU3Ek__BackingField_7() const { return ___U3CpublicAddressU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CpublicAddressU3Ek__BackingField_7() { return &___U3CpublicAddressU3Ek__BackingField_7; }
	inline void set_U3CpublicAddressU3Ek__BackingField_7(String_t* value)
	{
		___U3CpublicAddressU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpublicAddressU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CprivateAddressU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(CreateMatchRequest_t2600446299, ___U3CprivateAddressU3Ek__BackingField_8)); }
	inline String_t* get_U3CprivateAddressU3Ek__BackingField_8() const { return ___U3CprivateAddressU3Ek__BackingField_8; }
	inline String_t** get_address_of_U3CprivateAddressU3Ek__BackingField_8() { return &___U3CprivateAddressU3Ek__BackingField_8; }
	inline void set_U3CprivateAddressU3Ek__BackingField_8(String_t* value)
	{
		___U3CprivateAddressU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CprivateAddressU3Ek__BackingField_8), value);
	}

	inline static int32_t get_offset_of_U3CeloScoreU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(CreateMatchRequest_t2600446299, ___U3CeloScoreU3Ek__BackingField_9)); }
	inline int32_t get_U3CeloScoreU3Ek__BackingField_9() const { return ___U3CeloScoreU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CeloScoreU3Ek__BackingField_9() { return &___U3CeloScoreU3Ek__BackingField_9; }
	inline void set_U3CeloScoreU3Ek__BackingField_9(int32_t value)
	{
		___U3CeloScoreU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CadvertiseU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(CreateMatchRequest_t2600446299, ___U3CadvertiseU3Ek__BackingField_10)); }
	inline bool get_U3CadvertiseU3Ek__BackingField_10() const { return ___U3CadvertiseU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CadvertiseU3Ek__BackingField_10() { return &___U3CadvertiseU3Ek__BackingField_10; }
	inline void set_U3CadvertiseU3Ek__BackingField_10(bool value)
	{
		___U3CadvertiseU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CpasswordU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(CreateMatchRequest_t2600446299, ___U3CpasswordU3Ek__BackingField_11)); }
	inline String_t* get_U3CpasswordU3Ek__BackingField_11() const { return ___U3CpasswordU3Ek__BackingField_11; }
	inline String_t** get_address_of_U3CpasswordU3Ek__BackingField_11() { return &___U3CpasswordU3Ek__BackingField_11; }
	inline void set_U3CpasswordU3Ek__BackingField_11(String_t* value)
	{
		___U3CpasswordU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpasswordU3Ek__BackingField_11), value);
	}

	inline static int32_t get_offset_of_U3CmatchAttributesU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(CreateMatchRequest_t2600446299, ___U3CmatchAttributesU3Ek__BackingField_12)); }
	inline Dictionary_2_t3521823603 * get_U3CmatchAttributesU3Ek__BackingField_12() const { return ___U3CmatchAttributesU3Ek__BackingField_12; }
	inline Dictionary_2_t3521823603 ** get_address_of_U3CmatchAttributesU3Ek__BackingField_12() { return &___U3CmatchAttributesU3Ek__BackingField_12; }
	inline void set_U3CmatchAttributesU3Ek__BackingField_12(Dictionary_2_t3521823603 * value)
	{
		___U3CmatchAttributesU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmatchAttributesU3Ek__BackingField_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CREATEMATCHREQUEST_T2600446299_H
#ifndef BASICRESPONSEDELEGATE_T2196726690_H
#define BASICRESPONSEDELEGATE_T2196726690_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate
struct  BasicResponseDelegate_t2196726690  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASICRESPONSEDELEGATE_T2196726690_H
#ifndef INTERNALRESPONSEDELEGATE_2_T3313634249_H
#define INTERNALRESPONSEDELEGATE_2_T3313634249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<UnityEngine.Networking.Match.JoinMatchResponse,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>>
struct  InternalResponseDelegate_2_t3313634249  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALRESPONSEDELEGATE_2_T3313634249_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef NETWORKMATCH_T2930480025_H
#define NETWORKMATCH_T2930480025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.NetworkMatch
struct  NetworkMatch_t2930480025  : public MonoBehaviour_t3962482529
{
public:
	// System.Uri UnityEngine.Networking.Match.NetworkMatch::m_BaseUri
	Uri_t100236324 * ___m_BaseUri_2;

public:
	inline static int32_t get_offset_of_m_BaseUri_2() { return static_cast<int32_t>(offsetof(NetworkMatch_t2930480025, ___m_BaseUri_2)); }
	inline Uri_t100236324 * get_m_BaseUri_2() const { return ___m_BaseUri_2; }
	inline Uri_t100236324 ** get_address_of_m_BaseUri_2() { return &___m_BaseUri_2; }
	inline void set_m_BaseUri_2(Uri_t100236324 * value)
	{
		___m_BaseUri_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_BaseUri_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKMATCH_T2930480025_H
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m4178626270_gshared (Dictionary_2_t789006292 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<T> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<System.Object>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  List_1_t257213610 * ResponseBase_ParseJSONList_TisRuntimeObject_m3468361004_gshared (ResponseBase_t1712937097 * __this, String_t* ___name0, RuntimeObject * ___obj1, RuntimeObject* ___dictJsonObj2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C"  void Dictionary_2_set_Item_m3474379962_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void InternalResponseDelegate_2__ctor_m3201973790_gshared (InternalResponseDelegate_2_t3324166758 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<System.Object,System.Object>(UnityEngine.Networking.UnityWebRequest,UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<JSONRESPONSE,USERRESPONSEDELEGATETYPE>,USERRESPONSEDELEGATETYPE)
extern "C"  RuntimeObject* NetworkMatch_ProcessMatchResponse_TisRuntimeObject_TisRuntimeObject_m4234265295_gshared (NetworkMatch_t2930480025 * __this, UnityWebRequest_t463507806 * ___client0, InternalResponseDelegate_2_t3324166758 * ___internalCallback1, RuntimeObject * ___userCallback2, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<System.Object>::Invoke(System.Boolean,System.String,T)
extern "C"  void DataResponseDelegate_1_Invoke_m1974839323_gshared (DataResponseDelegate_1_t3045732247 * __this, bool p0, String_t* p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ContainsKey(!0)
extern "C"  bool Dictionary_2_ContainsKey_m990283339_gshared (Dictionary_2_t1966579963 * __this, uint64_t p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Remove(!0)
extern "C"  bool Dictionary_2_Remove_m963104344_gshared (Dictionary_2_t1966579963 * __this, uint64_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Add(!0,!1)
extern "C"  void Dictionary_2_Add_m3180043010_gshared (Dictionary_2_t1966579963 * __this, uint64_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::TryGetValue(!0,!1&)
extern "C"  bool Dictionary_2_TryGetValue_m2634421657_gshared (Dictionary_2_t1966579963 * __this, uint64_t p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m2241802331_gshared (Dictionary_2_t1966579963 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NullReferenceException::.ctor(System.String)
extern "C"  void NullReferenceException__ctor_m3076065613 (NullReferenceException_t1023182353 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>::.ctor()
#define List_1__ctor_m4168264895(__this, method) ((  void (*) (List_1_t3363058862 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>::.ctor()
#define List_1__ctor_m441991155(__this, method) ((  void (*) (List_1_t4078445860 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_MaxCombinedReliableMessageSize()
extern "C"  uint16_t ConnectionConfig_get_MaxCombinedReliableMessageSize_m1419822617 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>::GetEnumerator()
#define List_1_GetEnumerator_m4246513235(__this, method) ((  Enumerator_t957335443  (*) (List_1_t3363058862 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.ChannelQOS>::get_Current()
#define Enumerator_get_Current_m1808369071(__this, method) ((  ChannelQOS_t1890984120 * (*) (Enumerator_t957335443 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Void UnityEngine.Networking.ChannelQOS::.ctor(UnityEngine.Networking.ChannelQOS)
extern "C"  void ChannelQOS__ctor_m3213155130 (ChannelQOS_t1890984120 * __this, ChannelQOS_t1890984120 * ___channel0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>::Add(!0)
#define List_1_Add_m423166763(__this, p0, method) ((  void (*) (List_1_t3363058862 *, ChannelQOS_t1890984120 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.ChannelQOS>::MoveNext()
#define Enumerator_MoveNext_m349679386(__this, method) ((  bool (*) (Enumerator_t957335443 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.ChannelQOS>::Dispose()
#define Enumerator_Dispose_m3004041484(__this, method) ((  void (*) (Enumerator_t957335443 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>::GetEnumerator()
#define List_1_GetEnumerator_m1327152933(__this, method) ((  Enumerator_t1672722441  (*) (List_1_t4078445860 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<System.Byte>>::get_Current()
#define Enumerator_get_Current_m2439261711(__this, method) ((  List_1_t2606371118 * (*) (Enumerator_t1672722441 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>::Add(!0)
#define List_1_Add_m1960376679(__this, p0, method) ((  void (*) (List_1_t4078445860 *, List_1_t2606371118 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<System.Byte>>::MoveNext()
#define Enumerator_MoveNext_m491916196(__this, method) ((  bool (*) (Enumerator_t1672722441 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<System.Byte>>::Dispose()
#define Enumerator_Dispose_m2814761745(__this, method) ((  void (*) (Enumerator_t1672722441 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
extern "C"  void ArgumentOutOfRangeException__ctor_m3628145864 (ArgumentOutOfRangeException_t777629997 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>::get_Count()
#define List_1_get_Count_m3550276212(__this, method) ((  int32_t (*) (List_1_t3363058862 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern "C"  int32_t Application_get_platform_m2150679437 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Enum::IsDefined(System.Type,System.Object)
extern "C"  bool Enum_IsDefined_m1442314461 (RuntimeObject * __this /* static, unused */, Type_t * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ChannelQOS::.ctor(UnityEngine.Networking.QosType)
extern "C"  void ChannelQOS__ctor_m181222305 (ChannelQOS_t1890984120 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig>::.ctor()
#define List_1__ctor_m607530126(__this, method) ((  void (*) (List_1_t1351088715 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
extern "C"  void ArgumentOutOfRangeException__ctor_m282481429 (ArgumentOutOfRangeException_t777629997 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfig::Validate(UnityEngine.Networking.ConnectionConfig)
extern "C"  void ConnectionConfig_Validate_m2712188470 (RuntimeObject * __this /* static, unused */, ConnectionConfig_t4173981269 * ___config0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfig::.ctor(UnityEngine.Networking.ConnectionConfig)
extern "C"  void ConnectionConfig__ctor_m2640243122 (ConnectionConfig_t4173981269 * __this, ConnectionConfig_t4173981269 * ___config0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.Response::.ctor()
extern "C"  void Response__ctor_m1005354347 (Response_t2513603462 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.Request::.ctor()
extern "C"  void Request__ctor_m873075042 (Request_t2696089890 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.Request::ToString()
extern "C"  String_t* Request_ToString_m2900465251 (Request_t2696089890 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.CreateMatchRequest::get_name()
extern "C"  String_t* CreateMatchRequest_get_name_m2145735034 (CreateMatchRequest_t2600446299 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.Match.CreateMatchRequest::get_size()
extern "C"  uint32_t CreateMatchRequest_get_size_m3980857567 (CreateMatchRequest_t2600446299 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.CreateMatchRequest::get_publicAddress()
extern "C"  String_t* CreateMatchRequest_get_publicAddress_m3336041532 (CreateMatchRequest_t2600446299 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.CreateMatchRequest::get_privateAddress()
extern "C"  String_t* CreateMatchRequest_get_privateAddress_m3613518697 (CreateMatchRequest_t2600446299 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.CreateMatchRequest::get_eloScore()
extern "C"  int32_t CreateMatchRequest_get_eloScore_m1485273462 (CreateMatchRequest_t2600446299 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.Match.CreateMatchRequest::get_advertise()
extern "C"  bool CreateMatchRequest_get_advertise_m865484440 (CreateMatchRequest_t2600446299 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.CreateMatchRequest::get_password()
extern "C"  String_t* CreateMatchRequest_get_password_m3435449282 (CreateMatchRequest_t2600446299 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C"  bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.CreateMatchRequest::get_matchAttributes()
extern "C"  Dictionary_2_t3521823603 * CreateMatchRequest_get_matchAttributes_m3276240993 (CreateMatchRequest_t2600446299 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Count()
#define Dictionary_2_get_Count_m1082800239(__this, method) ((  int32_t (*) (Dictionary_2_t3521823603 *, const RuntimeMethod*))Dictionary_2_get_Count_m4178626270_gshared)(__this, method)
// System.String UnityEngine.UnityString::Format(System.String,System.Object[])
extern "C"  String_t* UnityString_Format_m261690510 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.BasicResponse::.ctor()
extern "C"  void BasicResponse__ctor_m3021811122 (BasicResponse_t1476713923 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.Response::ToString()
extern "C"  String_t* Response_ToString_m2727218217 (Response_t2513603462 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.CreateMatchResponse::get_address()
extern "C"  String_t* CreateMatchResponse_get_address_m2586556876 (CreateMatchResponse_t1328247360 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.CreateMatchResponse::get_port()
extern "C"  int32_t CreateMatchResponse_get_port_m4033119080 (CreateMatchResponse_t1328247360 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.CreateMatchResponse::get_networkId()
extern "C"  uint64_t CreateMatchResponse_get_networkId_m3705876485 (CreateMatchResponse_t1328247360 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Enum::ToString(System.String)
extern "C"  String_t* Enum_ToString_m2477889358 (RuntimeObject * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.CreateMatchResponse::get_accessTokenString()
extern "C"  String_t* CreateMatchResponse_get_accessTokenString_m1012218612 (CreateMatchResponse_t1328247360 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.CreateMatchResponse::get_nodeId()
extern "C"  uint16_t CreateMatchResponse_get_nodeId_m1756638988 (CreateMatchResponse_t1328247360 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.Match.CreateMatchResponse::get_usingRelay()
extern "C"  bool CreateMatchResponse_get_usingRelay_m1664992420 (CreateMatchResponse_t1328247360 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.Response::Parse(System.Object)
extern "C"  void Response_Parse_m2983258584 (Response_t2513603462 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.ResponseBase::ParseJSONString(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  String_t* ResponseBase_ParseJSONString_m1155503459 (ResponseBase_t1712937097 * __this, String_t* ___name0, RuntimeObject * ___obj1, RuntimeObject* ___dictJsonObj2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_address(System.String)
extern "C"  void CreateMatchResponse_set_address_m1298421245 (CreateMatchResponse_t1328247360 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.ResponseBase::ParseJSONInt32(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t ResponseBase_ParseJSONInt32_m3954786687 (ResponseBase_t1712937097 * __this, String_t* ___name0, RuntimeObject * ___obj1, RuntimeObject* ___dictJsonObj2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_port(System.Int32)
extern "C"  void CreateMatchResponse_set_port_m667344331 (CreateMatchResponse_t1328247360 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt64 UnityEngine.Networking.Match.ResponseBase::ParseJSONUInt64(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  uint64_t ResponseBase_ParseJSONUInt64_m607396206 (ResponseBase_t1712937097 * __this, String_t* ___name0, RuntimeObject * ___obj1, RuntimeObject* ___dictJsonObj2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C"  void CreateMatchResponse_set_networkId_m3779189147 (CreateMatchResponse_t1328247360 * __this, uint64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_accessTokenString(System.String)
extern "C"  void CreateMatchResponse_set_accessTokenString_m3004518143 (CreateMatchResponse_t1328247360 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt16 UnityEngine.Networking.Match.ResponseBase::ParseJSONUInt16(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  uint16_t ResponseBase_ParseJSONUInt16_m3537693036 (ResponseBase_t1712937097 * __this, String_t* ___name0, RuntimeObject * ___obj1, RuntimeObject* ___dictJsonObj2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C"  void CreateMatchResponse_set_nodeId_m1085561786 (CreateMatchResponse_t1328247360 * __this, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.Match.ResponseBase::ParseJSONBool(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  bool ResponseBase_ParseJSONBool_m1289868847 (ResponseBase_t1712937097 * __this, String_t* ___name0, RuntimeObject * ___obj1, RuntimeObject* ___dictJsonObj2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_usingRelay(System.Boolean)
extern "C"  void CreateMatchResponse_set_usingRelay_m3898155256 (CreateMatchResponse_t1328247360 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.FormatException::.ctor(System.String)
extern "C"  void FormatException__ctor_m4049685996 (FormatException_t154580423 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DestroyMatchRequest::get_networkId()
extern "C"  uint64_t DestroyMatchRequest_get_networkId_m1753108237 (DestroyMatchRequest_t2124150613 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DropConnectionRequest::get_networkId()
extern "C"  uint64_t DropConnectionRequest_get_networkId_m2906146404 (DropConnectionRequest_t2647317937 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.DropConnectionRequest::get_nodeId()
extern "C"  uint16_t DropConnectionRequest_get_nodeId_m2375409994 (DropConnectionRequest_t2647317937 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DropConnectionResponse::get_networkId()
extern "C"  uint64_t DropConnectionResponse_get_networkId_m778172076 (DropConnectionResponse_t3571632289 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.DropConnectionResponse::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C"  void DropConnectionResponse_set_networkId_m2043961426 (DropConnectionResponse_t3571632289 * __this, uint64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.DropConnectionResponse::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C"  void DropConnectionResponse_set_nodeId_m117407726 (DropConnectionResponse_t3571632289 * __this, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.JoinMatchRequest::get_networkId()
extern "C"  uint64_t JoinMatchRequest_get_networkId_m2534671775 (JoinMatchRequest_t3991767598 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.JoinMatchRequest::get_publicAddress()
extern "C"  String_t* JoinMatchRequest_get_publicAddress_m3644611049 (JoinMatchRequest_t3991767598 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.JoinMatchRequest::get_privateAddress()
extern "C"  String_t* JoinMatchRequest_get_privateAddress_m664578272 (JoinMatchRequest_t3991767598 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.JoinMatchRequest::get_eloScore()
extern "C"  int32_t JoinMatchRequest_get_eloScore_m1107868278 (JoinMatchRequest_t3991767598 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.JoinMatchRequest::get_password()
extern "C"  String_t* JoinMatchRequest_get_password_m2718232171 (JoinMatchRequest_t3991767598 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.JoinMatchResponse::get_address()
extern "C"  String_t* JoinMatchResponse_get_address_m354689537 (JoinMatchResponse_t845270609 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.JoinMatchResponse::get_port()
extern "C"  int32_t JoinMatchResponse_get_port_m3002546777 (JoinMatchResponse_t845270609 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.JoinMatchResponse::get_networkId()
extern "C"  uint64_t JoinMatchResponse_get_networkId_m3394264089 (JoinMatchResponse_t845270609 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.JoinMatchResponse::get_accessTokenString()
extern "C"  String_t* JoinMatchResponse_get_accessTokenString_m2145669779 (JoinMatchResponse_t845270609 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.JoinMatchResponse::get_nodeId()
extern "C"  uint16_t JoinMatchResponse_get_nodeId_m1797413455 (JoinMatchResponse_t845270609 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.Match.JoinMatchResponse::get_usingRelay()
extern "C"  bool JoinMatchResponse_get_usingRelay_m193800465 (JoinMatchResponse_t845270609 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_address(System.String)
extern "C"  void JoinMatchResponse_set_address_m3790037850 (JoinMatchResponse_t845270609 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_port(System.Int32)
extern "C"  void JoinMatchResponse_set_port_m3174583991 (JoinMatchResponse_t845270609 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C"  void JoinMatchResponse_set_networkId_m2307287695 (JoinMatchResponse_t845270609 * __this, uint64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_accessTokenString(System.String)
extern "C"  void JoinMatchResponse_set_accessTokenString_m2553303280 (JoinMatchResponse_t845270609 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C"  void JoinMatchResponse_set_nodeId_m1545694507 (JoinMatchResponse_t845270609 * __this, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_usingRelay(System.Boolean)
extern "C"  void JoinMatchResponse_set_usingRelay_m1722520532 (JoinMatchResponse_t845270609 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_pageSize()
extern "C"  int32_t ListMatchRequest_get_pageSize_m3055718048 (ListMatchRequest_t1588429355 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_pageNum()
extern "C"  int32_t ListMatchRequest_get_pageNum_m3084306515 (ListMatchRequest_t1588429355 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.ListMatchRequest::get_nameFilter()
extern "C"  String_t* ListMatchRequest_get_nameFilter_m1921865349 (ListMatchRequest_t1588429355 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.Match.ListMatchRequest::get_filterOutPrivateMatches()
extern "C"  bool ListMatchRequest_get_filterOutPrivateMatches_m702074324 (ListMatchRequest_t1588429355 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_eloScore()
extern "C"  int32_t ListMatchRequest_get_eloScore_m2377257860 (ListMatchRequest_t1588429355 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterLessThan()
extern "C"  Dictionary_2_t3521823603 * ListMatchRequest_get_matchAttributeFilterLessThan_m369421819 (ListMatchRequest_t1588429355 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterEqualTo()
extern "C"  Dictionary_2_t3521823603 * ListMatchRequest_get_matchAttributeFilterEqualTo_m2609736901 (ListMatchRequest_t1588429355 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterGreaterThan()
extern "C"  Dictionary_2_t3521823603 * ListMatchRequest_get_matchAttributeFilterGreaterThan_m2040637691 (ListMatchRequest_t1588429355 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.ctor()
#define List_1__ctor_m2320846806(__this, method) ((  void (*) (List_1_t1004336143 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void UnityEngine.Networking.Match.ListMatchResponse::set_matches(System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>)
extern "C"  void ListMatchResponse_set_matches_m2209334367 (ListMatchResponse_t3200990838 * __this, List_1_t1004336143 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc> UnityEngine.Networking.Match.ListMatchResponse::get_matches()
extern "C"  List_1_t1004336143 * ListMatchResponse_get_matches_m2872681810 (ListMatchResponse_t3200990838 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Count()
#define List_1_get_Count_m119633916(__this, method) ((  int32_t (*) (List_1_t1004336143 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Collections.Generic.List`1<T> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDesc>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ResponseBase_ParseJSONList_TisMatchDesc_t3827228697_m1735849380(__this, ___name0, ___obj1, ___dictJsonObj2, method) ((  List_1_t1004336143 * (*) (ResponseBase_t1712937097 *, String_t*, RuntimeObject *, RuntimeObject*, const RuntimeMethod*))ResponseBase_ParseJSONList_TisRuntimeObject_m3468361004_gshared)(__this, ___name0, ___obj1, ___dictJsonObj2, method)
// System.Void UnityEngine.Networking.Match.ResponseBase::.ctor()
extern "C"  void ResponseBase__ctor_m3542648275 (ResponseBase_t1712937097 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Object::ToString()
extern "C"  String_t* Object_ToString_m1740002499 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.MatchDesc::get_networkId()
extern "C"  uint64_t MatchDesc_get_networkId_m3617176384 (MatchDesc_t3827228697 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.MatchDesc::get_name()
extern "C"  String_t* MatchDesc_get_name_m1687824342 (MatchDesc_t3827228697 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_averageEloScore()
extern "C"  int32_t MatchDesc_get_averageEloScore_m408805692 (MatchDesc_t3827228697 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_maxSize()
extern "C"  int32_t MatchDesc_get_maxSize_m2265962323 (MatchDesc_t3827228697 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_currentSize()
extern "C"  int32_t MatchDesc_get_currentSize_m9145650 (MatchDesc_t3827228697 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.Match.MatchDesc::get_isPrivate()
extern "C"  bool MatchDesc_get_isPrivate_m3525868735 (MatchDesc_t3827228697 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.MatchDesc::get_matchAttributes()
extern "C"  Dictionary_2_t3521823603 * MatchDesc_get_matchAttributes_m481045601 (MatchDesc_t3827228697 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchDesc::get_hostNodeId()
extern "C"  uint16_t MatchDesc_get_hostNodeId_m641289458 (MatchDesc_t3827228697 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo> UnityEngine.Networking.Match.MatchDesc::get_directConnectInfos()
extern "C"  List_1_t32447842 * MatchDesc_get_directConnectInfos_m210874281 (MatchDesc_t3827228697 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Count()
#define List_1_get_Count_m1160238088(__this, method) ((  int32_t (*) (List_1_t32447842 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Void UnityEngine.Networking.Match.MatchDesc::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C"  void MatchDesc_set_networkId_m1506267256 (MatchDesc_t3827228697 * __this, uint64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDesc::set_name(System.String)
extern "C"  void MatchDesc_set_name_m1393859823 (MatchDesc_t3827228697 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDesc::set_averageEloScore(System.Int32)
extern "C"  void MatchDesc_set_averageEloScore_m1052582910 (MatchDesc_t3827228697 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDesc::set_maxSize(System.Int32)
extern "C"  void MatchDesc_set_maxSize_m3996499333 (MatchDesc_t3827228697 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDesc::set_currentSize(System.Int32)
extern "C"  void MatchDesc_set_currentSize_m1599782322 (MatchDesc_t3827228697 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDesc::set_isPrivate(System.Boolean)
extern "C"  void MatchDesc_set_isPrivate_m1090199307 (MatchDesc_t3827228697 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDesc::set_hostNodeId(UnityEngine.Networking.Types.NodeID)
extern "C"  void MatchDesc_set_hostNodeId_m1443808085 (MatchDesc_t3827228697 * __this, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<T> UnityEngine.Networking.Match.ResponseBase::ParseJSONList<UnityEngine.Networking.Match.MatchDirectConnectInfo>(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
#define ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t2855340396_m861719111(__this, ___name0, ___obj1, ___dictJsonObj2, method) ((  List_1_t32447842 * (*) (ResponseBase_t1712937097 *, String_t*, RuntimeObject *, RuntimeObject*, const RuntimeMethod*))ResponseBase_ParseJSONList_TisRuntimeObject_m3468361004_gshared)(__this, ___name0, ___obj1, ___dictJsonObj2, method)
// System.Void UnityEngine.Networking.Match.MatchDesc::set_directConnectInfos(System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>)
extern "C"  void MatchDesc_set_directConnectInfos_m1039210702 (MatchDesc_t3827228697 * __this, List_1_t32447842 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchDirectConnectInfo::get_nodeId()
extern "C"  uint16_t MatchDirectConnectInfo_get_nodeId_m3793825698 (MatchDirectConnectInfo_t2855340396 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::get_publicAddress()
extern "C"  String_t* MatchDirectConnectInfo_get_publicAddress_m1866730570 (MatchDirectConnectInfo_t2855340396 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::get_privateAddress()
extern "C"  String_t* MatchDirectConnectInfo_get_privateAddress_m2215153279 (MatchDirectConnectInfo_t2855340396 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.HostPriority UnityEngine.Networking.Match.MatchDirectConnectInfo::get_hostPriority()
extern "C"  int32_t MatchDirectConnectInfo_get_hostPriority_m1279982512 (MatchDirectConnectInfo_t2855340396 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C"  void MatchDirectConnectInfo_set_nodeId_m3830557121 (MatchDirectConnectInfo_t2855340396 * __this, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_publicAddress(System.String)
extern "C"  void MatchDirectConnectInfo_set_publicAddress_m4256653139 (MatchDirectConnectInfo_t2855340396 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_privateAddress(System.String)
extern "C"  void MatchDirectConnectInfo_set_privateAddress_m659110150 (MatchDirectConnectInfo_t2855340396 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_hostPriority(UnityEngine.Networking.Types.HostPriority)
extern "C"  void MatchDirectConnectInfo_set_hostPriority_m2242080675 (MatchDirectConnectInfo_t2855340396 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfo::set_address(System.String)
extern "C"  void MatchInfo_set_address_m3672516569 (MatchInfo_t221301733 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfo::set_port(System.Int32)
extern "C"  void MatchInfo_set_port_m2729257488 (MatchInfo_t221301733 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.CreateMatchResponse::get_domain()
extern "C"  int32_t CreateMatchResponse_get_domain_m2386171851 (CreateMatchResponse_t1328247360 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfo::set_domain(System.Int32)
extern "C"  void MatchInfo_set_domain_m2690339534 (MatchInfo_t221301733 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfo::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C"  void MatchInfo_set_networkId_m3466879976 (MatchInfo_t221301733 * __this, uint64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Types.NetworkAccessToken::.ctor(System.String)
extern "C"  void NetworkAccessToken__ctor_m1548906336 (NetworkAccessToken_t320639760 * __this, String_t* ___strArray0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfo::set_accessToken(UnityEngine.Networking.Types.NetworkAccessToken)
extern "C"  void MatchInfo_set_accessToken_m2153896250 (MatchInfo_t221301733 * __this, NetworkAccessToken_t320639760 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfo::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C"  void MatchInfo_set_nodeId_m1751290814 (MatchInfo_t221301733 * __this, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfo::set_usingRelay(System.Boolean)
extern "C"  void MatchInfo_set_usingRelay_m1568266214 (MatchInfo_t221301733 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.JoinMatchResponse::get_domain()
extern "C"  int32_t JoinMatchResponse_get_domain_m1174913480 (JoinMatchResponse_t845270609 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.MatchInfo::get_networkId()
extern "C"  uint64_t MatchInfo_get_networkId_m1444611712 (MatchInfo_t221301733 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.MatchInfo::get_address()
extern "C"  String_t* MatchInfo_get_address_m1232556325 (MatchInfo_t221301733 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.MatchInfo::get_port()
extern "C"  int32_t MatchInfo_get_port_m1945994513 (MatchInfo_t221301733 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchInfo::get_nodeId()
extern "C"  uint16_t MatchInfo_get_nodeId_m3362352490 (MatchInfo_t221301733 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.Match.MatchInfo::get_usingRelay()
extern "C"  bool MatchInfo_get_usingRelay_m3308939749 (MatchInfo_t221301733 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C"  void MatchInfoSnapshot_set_networkId_m1572557663 (MatchInfoSnapshot_t3166422189 * __this, uint64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_hostNodeId(UnityEngine.Networking.Types.NodeID)
extern "C"  void MatchInfoSnapshot_set_hostNodeId_m2433065083 (MatchInfoSnapshot_t3166422189 * __this, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_name(System.String)
extern "C"  void MatchInfoSnapshot_set_name_m382744311 (MatchInfoSnapshot_t3166422189 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_averageEloScore(System.Int32)
extern "C"  void MatchInfoSnapshot_set_averageEloScore_m1171549014 (MatchInfoSnapshot_t3166422189 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_maxSize(System.Int32)
extern "C"  void MatchInfoSnapshot_set_maxSize_m2547898986 (MatchInfoSnapshot_t3166422189 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_currentSize(System.Int32)
extern "C"  void MatchInfoSnapshot_set_currentSize_m3677953324 (MatchInfoSnapshot_t3166422189 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_isPrivate(System.Boolean)
extern "C"  void MatchInfoSnapshot_set_isPrivate_m1688058755 (MatchInfoSnapshot_t3166422189 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_matchAttributes(System.Collections.Generic.Dictionary`2<System.String,System.Int64>)
extern "C"  void MatchInfoSnapshot_set_matchAttributes_m1462812445 (MatchInfoSnapshot_t3166422189 * __this, Dictionary_2_t3521823603 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot>::.ctor()
#define List_1__ctor_m818466152(__this, method) ((  void (*) (List_1_t2090095927 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_directConnectInfos(System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot>)
extern "C"  void MatchInfoSnapshot_set_directConnectInfos_m4174501432 (MatchInfoSnapshot_t3166422189 * __this, List_1_t2090095927 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::GetEnumerator()
#define List_1_GetEnumerator_m2476053975(__this, method) ((  Enumerator_t1921691719  (*) (List_1_t32447842 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Current()
#define Enumerator_get_Current_m2463612473(__this, method) ((  MatchDirectConnectInfo_t2855340396 * (*) (Enumerator_t1921691719 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot> UnityEngine.Networking.Match.MatchInfoSnapshot::get_directConnectInfos()
extern "C"  List_1_t2090095927 * MatchInfoSnapshot_get_directConnectInfos_m4034722686 (MatchInfoSnapshot_t3166422189 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot::.ctor(UnityEngine.Networking.Match.MatchDirectConnectInfo)
extern "C"  void MatchInfoDirectConnectSnapshot__ctor_m375710675 (MatchInfoDirectConnectSnapshot_t618021185 * __this, MatchDirectConnectInfo_t2855340396 * ___matchDirectConnectInfo0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot>::Add(!0)
#define List_1_Add_m548998622(__this, p0, method) ((  void (*) (List_1_t2090095927 *, MatchInfoDirectConnectSnapshot_t618021185 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDirectConnectInfo>::MoveNext()
#define Enumerator_MoveNext_m957156581(__this, method) ((  bool (*) (Enumerator_t1921691719 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Dispose()
#define Enumerator_Dispose_m3020357317(__this, method) ((  void (*) (Enumerator_t1921691719 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C"  void MatchInfoDirectConnectSnapshot_set_nodeId_m198744523 (MatchInfoDirectConnectSnapshot_t618021185 * __this, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot::set_publicAddress(System.String)
extern "C"  void MatchInfoDirectConnectSnapshot_set_publicAddress_m3627602076 (MatchInfoDirectConnectSnapshot_t618021185 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot::set_privateAddress(System.String)
extern "C"  void MatchInfoDirectConnectSnapshot_set_privateAddress_m2091056284 (MatchInfoDirectConnectSnapshot_t618021185 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot::set_hostPriority(UnityEngine.Networking.Types.HostPriority)
extern "C"  void MatchInfoDirectConnectSnapshot_set_hostPriority_m3615557824 (MatchInfoDirectConnectSnapshot_t618021185 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.String)
extern "C"  void Uri__ctor_m800430703 (Uri_t100236324 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C"  void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::.ctor()
extern "C"  void CreateMatchRequest__ctor_m1120211933 (CreateMatchRequest_t2600446299 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_name(System.String)
extern "C"  void CreateMatchRequest_set_name_m701411379 (CreateMatchRequest_t2600446299 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_size(System.UInt32)
extern "C"  void CreateMatchRequest_set_size_m3316633767 (CreateMatchRequest_t2600446299 * __this, uint32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_advertise(System.Boolean)
extern "C"  void CreateMatchRequest_set_advertise_m3607720815 (CreateMatchRequest_t2600446299 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_password(System.String)
extern "C"  void CreateMatchRequest_set_password_m1322775125 (CreateMatchRequest_t2600446299 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_publicAddress(System.String)
extern "C"  void CreateMatchRequest_set_publicAddress_m1416983088 (CreateMatchRequest_t2600446299 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_privateAddress(System.String)
extern "C"  void CreateMatchRequest_set_privateAddress_m278898640 (CreateMatchRequest_t2600446299 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_eloScore(System.Int32)
extern "C"  void CreateMatchRequest_set_eloScore_m1972554262 (CreateMatchRequest_t2600446299 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.Request::set_domain(System.Int32)
extern "C"  void Request_set_domain_m3630208190 (Request_t2696089890 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(UnityEngine.Networking.Match.CreateMatchRequest,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>)
extern "C"  Coroutine_t3829159415 * NetworkMatch_CreateMatch_m3201661599 (NetworkMatch_t2930480025 * __this, CreateMatchRequest_t2600446299 * ___req0, DataResponseDelegate_1_t186927816 * ___callback1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Uri UnityEngine.Networking.Match.NetworkMatch::get_baseUri()
extern "C"  Uri_t100236324 * NetworkMatch_get_baseUri_m3103825236 (NetworkMatch_t2930480025 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.Uri,System.String)
extern "C"  void Uri__ctor_m4293005803 (Uri_t100236324 * __this, Uri_t100236324 * p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::.ctor()
extern "C"  void WWWForm__ctor_m2465700452 (WWWForm_t4064702195 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.Int32)
extern "C"  void WWWForm_AddField_m711349004 (WWWForm_t4064702195 * __this, String_t* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_cloudProjectId()
extern "C"  String_t* Application_get_cloudProjectId_m3678427659 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
extern "C"  void WWWForm_AddField_m2357902982 (WWWForm_t4064702195 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.SourceID UnityEngine.Networking.Utility::GetSourceID()
extern "C"  uint64_t Utility_GetSourceID_m602367204 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.Request::get_domain()
extern "C"  int32_t Request_get_domain_m2533048369 (Request_t2696089890 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt32::ToString()
extern "C"  String_t* UInt32_ToString_m2574561716 (uint32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Boolean::ToString()
extern "C"  String_t* Boolean_ToString_m2664721875 (bool* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWWForm::get_headers()
extern "C"  Dictionary_2_t1632706988 * WWWForm_get_headers_m1854290957 (WWWForm_t4064702195 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1)
#define Dictionary_2_set_Item_m187286838(__this, p0, p1, method) ((  void (*) (Dictionary_2_t1632706988 *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m3474379962_gshared)(__this, p0, p1, method)
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Post(System.String,UnityEngine.WWWForm)
extern "C"  UnityWebRequest_t463507806 * UnityWebRequest_Post_m4193475377 (RuntimeObject * __this /* static, unused */, String_t* p0, WWWForm_t4064702195 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<UnityEngine.Networking.Match.CreateMatchResponse,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>>::.ctor(System.Object,System.IntPtr)
#define InternalResponseDelegate_2__ctor_m2438927016(__this, p0, p1, method) ((  void (*) (InternalResponseDelegate_2_t992249662 *, RuntimeObject *, intptr_t, const RuntimeMethod*))InternalResponseDelegate_2__ctor_m3201973790_gshared)(__this, p0, p1, method)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.CreateMatchResponse,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>>(UnityEngine.Networking.UnityWebRequest,UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<JSONRESPONSE,USERRESPONSEDELEGATETYPE>,USERRESPONSEDELEGATETYPE)
#define NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t1328247360_TisDataResponseDelegate_1_t186927816_m1028095887(__this, ___client0, ___internalCallback1, ___userCallback2, method) ((  RuntimeObject* (*) (NetworkMatch_t2930480025 *, UnityWebRequest_t463507806 *, InternalResponseDelegate_2_t992249662 *, DataResponseDelegate_1_t186927816 *, const RuntimeMethod*))NetworkMatch_ProcessMatchResponse_TisRuntimeObject_TisRuntimeObject_m4234265295_gshared)(__this, ___client0, ___internalCallback1, ___userCallback2, method)
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C"  Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.Match.Response::get_success()
extern "C"  bool Response_get_success_m3343637985 (Response_t2513603462 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Utility::SetAccessTokenForNetwork(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken)
extern "C"  void Utility_SetAccessTokenForNetwork_m483792653 (RuntimeObject * __this /* static, unused */, uint64_t ___netId0, NetworkAccessToken_t320639760 * ___accessToken1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.Response::get_extendedInfo()
extern "C"  String_t* Response_get_extendedInfo_m1561286864 (Response_t2513603462 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfo::.ctor(UnityEngine.Networking.Match.CreateMatchResponse)
extern "C"  void MatchInfo__ctor_m1026163455 (MatchInfo_t221301733 * __this, CreateMatchResponse_t1328247360 * ___matchResponse0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>::Invoke(System.Boolean,System.String,T)
#define DataResponseDelegate_1_Invoke_m437983603(__this, p0, p1, p2, method) ((  void (*) (DataResponseDelegate_1_t186927816 *, bool, String_t*, MatchInfo_t221301733 *, const RuntimeMethod*))DataResponseDelegate_1_Invoke_m1974839323_gshared)(__this, p0, p1, p2, method)
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::.ctor()
extern "C"  void JoinMatchRequest__ctor_m929255344 (JoinMatchRequest_t3991767598 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C"  void JoinMatchRequest_set_networkId_m1582426564 (JoinMatchRequest_t3991767598 * __this, uint64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_password(System.String)
extern "C"  void JoinMatchRequest_set_password_m3230348675 (JoinMatchRequest_t3991767598 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_publicAddress(System.String)
extern "C"  void JoinMatchRequest_set_publicAddress_m3396720139 (JoinMatchRequest_t3991767598 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_privateAddress(System.String)
extern "C"  void JoinMatchRequest_set_privateAddress_m2598128522 (JoinMatchRequest_t3991767598 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_eloScore(System.Int32)
extern "C"  void JoinMatchRequest_set_eloScore_m3728163236 (JoinMatchRequest_t3991767598 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Match.JoinMatchRequest,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>)
extern "C"  Coroutine_t3829159415 * NetworkMatch_JoinMatch_m3017753518 (NetworkMatch_t2930480025 * __this, JoinMatchRequest_t3991767598 * ___req0, DataResponseDelegate_1_t186927816 * ___callback1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<UnityEngine.Networking.Match.JoinMatchResponse,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>>::.ctor(System.Object,System.IntPtr)
#define InternalResponseDelegate_2__ctor_m1006820792(__this, p0, p1, method) ((  void (*) (InternalResponseDelegate_2_t3313634249 *, RuntimeObject *, intptr_t, const RuntimeMethod*))InternalResponseDelegate_2__ctor_m3201973790_gshared)(__this, p0, p1, method)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.JoinMatchResponse,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>>(UnityEngine.Networking.UnityWebRequest,UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<JSONRESPONSE,USERRESPONSEDELEGATETYPE>,USERRESPONSEDELEGATETYPE)
#define NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t845270609_TisDataResponseDelegate_1_t186927816_m4139761490(__this, ___client0, ___internalCallback1, ___userCallback2, method) ((  RuntimeObject* (*) (NetworkMatch_t2930480025 *, UnityWebRequest_t463507806 *, InternalResponseDelegate_2_t3313634249 *, DataResponseDelegate_1_t186927816 *, const RuntimeMethod*))NetworkMatch_ProcessMatchResponse_TisRuntimeObject_TisRuntimeObject_m4234265295_gshared)(__this, ___client0, ___internalCallback1, ___userCallback2, method)
// System.Void UnityEngine.Networking.Match.MatchInfo::.ctor(UnityEngine.Networking.Match.JoinMatchResponse)
extern "C"  void MatchInfo__ctor_m1464312026 (MatchInfo_t221301733 * __this, JoinMatchResponse_t845270609 * ___matchResponse0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.DestroyMatchRequest::.ctor()
extern "C"  void DestroyMatchRequest__ctor_m327028137 (DestroyMatchRequest_t2124150613 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.DestroyMatchRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C"  void DestroyMatchRequest_set_networkId_m2430913175 (DestroyMatchRequest_t2124150613 * __this, uint64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DestroyMatch(UnityEngine.Networking.Match.DestroyMatchRequest,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate)
extern "C"  Coroutine_t3829159415 * NetworkMatch_DestroyMatch_m851204137 (NetworkMatch_t2930480025 * __this, DestroyMatchRequest_t2124150613 * ___req0, BasicResponseDelegate_t2196726690 * ___callback1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NetworkAccessToken UnityEngine.Networking.Utility::GetAccessTokenForNetwork(UnityEngine.Networking.Types.NetworkID)
extern "C"  NetworkAccessToken_t320639760 * Utility_GetAccessTokenForNetwork_m3460910439 (RuntimeObject * __this /* static, unused */, uint64_t ___netId0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Types.NetworkAccessToken::GetByteString()
extern "C"  String_t* NetworkAccessToken_GetByteString_m3125030115 (NetworkAccessToken_t320639760 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<UnityEngine.Networking.Match.BasicResponse,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate>::.ctor(System.Object,System.IntPtr)
#define InternalResponseDelegate_2__ctor_m4083378426(__this, p0, p1, method) ((  void (*) (InternalResponseDelegate_2_t753237801 *, RuntimeObject *, intptr_t, const RuntimeMethod*))InternalResponseDelegate_2__ctor_m3201973790_gshared)(__this, p0, p1, method)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.BasicResponse,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate>(UnityEngine.Networking.UnityWebRequest,UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<JSONRESPONSE,USERRESPONSEDELEGATETYPE>,USERRESPONSEDELEGATETYPE)
#define NetworkMatch_ProcessMatchResponse_TisBasicResponse_t1476713923_TisBasicResponseDelegate_t2196726690_m4171655136(__this, ___client0, ___internalCallback1, ___userCallback2, method) ((  RuntimeObject* (*) (NetworkMatch_t2930480025 *, UnityWebRequest_t463507806 *, InternalResponseDelegate_2_t753237801 *, BasicResponseDelegate_t2196726690 *, const RuntimeMethod*))NetworkMatch_ProcessMatchResponse_TisRuntimeObject_TisRuntimeObject_m4234265295_gshared)(__this, ___client0, ___internalCallback1, ___userCallback2, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate::Invoke(System.Boolean,System.String)
extern "C"  void BasicResponseDelegate_Invoke_m1399904936 (BasicResponseDelegate_t2196726690 * __this, bool ___success0, String_t* ___extendedInfo1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.DropConnectionRequest::.ctor()
extern "C"  void DropConnectionRequest__ctor_m2312219607 (DropConnectionRequest_t2647317937 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.DropConnectionRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C"  void DropConnectionRequest_set_networkId_m399344964 (DropConnectionRequest_t2647317937 * __this, uint64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.DropConnectionRequest::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C"  void DropConnectionRequest_set_nodeId_m2959951618 (DropConnectionRequest_t2647317937 * __this, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DropConnection(UnityEngine.Networking.Match.DropConnectionRequest,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate)
extern "C"  Coroutine_t3829159415 * NetworkMatch_DropConnection_m3349273159 (NetworkMatch_t2930480025 * __this, DropConnectionRequest_t2647317937 * ___req0, BasicResponseDelegate_t2196726690 * ___callback1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<UnityEngine.Networking.Match.DropConnectionResponse,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate>::.ctor(System.Object,System.IntPtr)
#define InternalResponseDelegate_2__ctor_m3308930013(__this, p0, p1, method) ((  void (*) (InternalResponseDelegate_2_t304736019 *, RuntimeObject *, intptr_t, const RuntimeMethod*))InternalResponseDelegate_2__ctor_m3201973790_gshared)(__this, p0, p1, method)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.DropConnectionResponse,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate>(UnityEngine.Networking.UnityWebRequest,UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<JSONRESPONSE,USERRESPONSEDELEGATETYPE>,USERRESPONSEDELEGATETYPE)
#define NetworkMatch_ProcessMatchResponse_TisDropConnectionResponse_t3571632289_TisBasicResponseDelegate_t2196726690_m986112150(__this, ___client0, ___internalCallback1, ___userCallback2, method) ((  RuntimeObject* (*) (NetworkMatch_t2930480025 *, UnityWebRequest_t463507806 *, InternalResponseDelegate_2_t304736019 *, BasicResponseDelegate_t2196726690 *, const RuntimeMethod*))NetworkMatch_ProcessMatchResponse_TisRuntimeObject_TisRuntimeObject_m4234265295_gshared)(__this, ___client0, ___internalCallback1, ___userCallback2, method)
// System.Void UnityEngine.Networking.Match.ListMatchRequest::.ctor()
extern "C"  void ListMatchRequest__ctor_m189544352 (ListMatchRequest_t1588429355 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_pageNum(System.Int32)
extern "C"  void ListMatchRequest_set_pageNum_m714424921 (ListMatchRequest_t1588429355 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_pageSize(System.Int32)
extern "C"  void ListMatchRequest_set_pageSize_m2542353962 (ListMatchRequest_t1588429355 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_nameFilter(System.String)
extern "C"  void ListMatchRequest_set_nameFilter_m3455577482 (ListMatchRequest_t1588429355 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_filterOutPrivateMatches(System.Boolean)
extern "C"  void ListMatchRequest_set_filterOutPrivateMatches_m242262970 (ListMatchRequest_t1588429355 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_eloScore(System.Int32)
extern "C"  void ListMatchRequest_set_eloScore_m2096908822 (ListMatchRequest_t1588429355 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(UnityEngine.Networking.Match.ListMatchRequest,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot>>)
extern "C"  Coroutine_t3829159415 * NetworkMatch_ListMatches_m3965275728 (NetworkMatch_t2930480025 * __this, ListMatchRequest_t1588429355 * ___req0, DataResponseDelegate_1_t309155718 * ___callback1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<UnityEngine.Networking.Match.ListMatchResponse,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot>>>::.ctor(System.Object,System.IntPtr)
#define InternalResponseDelegate_2__ctor_m4032249314(__this, p0, p1, method) ((  void (*) (InternalResponseDelegate_2_t873951790 *, RuntimeObject *, intptr_t, const RuntimeMethod*))InternalResponseDelegate_2__ctor_m3201973790_gshared)(__this, p0, p1, method)
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.ListMatchResponse,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot>>>(UnityEngine.Networking.UnityWebRequest,UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<JSONRESPONSE,USERRESPONSEDELEGATETYPE>,USERRESPONSEDELEGATETYPE)
#define NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t3200990838_TisDataResponseDelegate_1_t309155718_m2895002787(__this, ___client0, ___internalCallback1, ___userCallback2, method) ((  RuntimeObject* (*) (NetworkMatch_t2930480025 *, UnityWebRequest_t463507806 *, InternalResponseDelegate_2_t873951790 *, DataResponseDelegate_1_t309155718 *, const RuntimeMethod*))NetworkMatch_ProcessMatchResponse_TisRuntimeObject_TisRuntimeObject_m4234265295_gshared)(__this, ___client0, ___internalCallback1, ___userCallback2, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot>::.ctor()
#define List_1__ctor_m2649410098(__this, method) ((  void (*) (List_1_t343529635 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::GetEnumerator()
#define List_1_GetEnumerator_m3706392678(__this, method) ((  Enumerator_t2893580020  (*) (List_1_t1004336143 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDesc>::get_Current()
#define Enumerator_get_Current_m1671013569(__this, method) ((  MatchDesc_t3827228697 * (*) (Enumerator_t2893580020 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::.ctor(UnityEngine.Networking.Match.MatchDesc)
extern "C"  void MatchInfoSnapshot__ctor_m3116124190 (MatchInfoSnapshot_t3166422189 * __this, MatchDesc_t3827228697 * ___matchDesc0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot>::Add(!0)
#define List_1_Add_m2366351136(__this, p0, method) ((  void (*) (List_1_t343529635 *, MatchInfoSnapshot_t3166422189 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDesc>::MoveNext()
#define Enumerator_MoveNext_m332103838(__this, method) ((  bool (*) (Enumerator_t2893580020 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDesc>::Dispose()
#define Enumerator_Dispose_m2278141307(__this, method) ((  void (*) (Enumerator_t2893580020 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot>>::Invoke(System.Boolean,System.String,T)
#define DataResponseDelegate_1_Invoke_m2625328205(__this, p0, p1, p2, method) ((  void (*) (DataResponseDelegate_1_t309155718 *, bool, String_t*, List_1_t343529635 *, const RuntimeMethod*))DataResponseDelegate_1_Invoke_m1974839323_gshared)(__this, p0, p1, p2, method)
// System.Void UnityEngine.Networking.Match.SetMatchAttributesRequest::.ctor()
extern "C"  void SetMatchAttributesRequest__ctor_m1899046165 (SetMatchAttributesRequest_t2732203151 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.SetMatchAttributesRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C"  void SetMatchAttributesRequest_set_networkId_m557696958 (SetMatchAttributesRequest_t2732203151 * __this, uint64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.SetMatchAttributesRequest::set_isListed(System.Boolean)
extern "C"  void SetMatchAttributesRequest_set_isListed_m2994314324 (SetMatchAttributesRequest_t2732203151 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::SetMatchAttributes(UnityEngine.Networking.Match.SetMatchAttributesRequest,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate)
extern "C"  Coroutine_t3829159415 * NetworkMatch_SetMatchAttributes_m3627579880 (NetworkMatch_t2930480025 * __this, SetMatchAttributesRequest_t2732203151 * ___req0, BasicResponseDelegate_t2196726690 * ___callback1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.SetMatchAttributesRequest::get_networkId()
extern "C"  uint64_t SetMatchAttributesRequest_get_networkId_m2380549462 (SetMatchAttributesRequest_t2732203151 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.Match.SetMatchAttributesRequest::get_isListed()
extern "C"  bool SetMatchAttributesRequest_get_isListed_m3414389613 (SetMatchAttributesRequest_t2732203151 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.SourceID UnityEngine.Networking.Match.Request::get_sourceId()
extern "C"  uint64_t Request_get_sourceId_m208323637 (Request_t2696089890 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.Request::get_projectId()
extern "C"  String_t* Request_get_projectId_m2576041751 (Request_t2696089890 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.Request::get_accessTokenString()
extern "C"  String_t* Request_get_accessTokenString_m4019206711 (Request_t2696089890 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.Response::set_success(System.Boolean)
extern "C"  void Response_set_success_m2199256226 (Response_t2513603462 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.Response::set_extendedInfo(System.String)
extern "C"  void Response_set_extendedInfo_m4106844907 (Response_t2513603462 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Object)
extern "C"  int32_t Convert_ToInt32_m2608095889 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Object)
extern "C"  uint16_t Convert_ToUInt16_m3103153160 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Object)
extern "C"  uint64_t Convert_ToUInt64_m1841050714 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Object)
extern "C"  bool Convert_ToBoolean_m2072772931 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.UNETWebSocketLib UnityEngine.Networking.UNETWebSocketLib::get_Instance()
extern "C"  UNETWebSocketLib_t687350976 * UNETWebSocketLib_get_Instance_m1651960898 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.UNETWebSocketLib::AddHost(UnityEngine.Networking.HostTopology,System.Int32)
extern "C"  int32_t UNETWebSocketLib_AddHost_m97350380 (UNETWebSocketLib_t687350976 * __this, HostTopology_t4059263395 * ___topology0, int32_t ___port1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UNETWebSocketLib::Init()
extern "C"  void UNETWebSocketLib_Init_m3744735638 (UNETWebSocketLib_t687350976 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebGL.UNetWebGlHelpers::InitUpdateFunction()
extern "C"  void UNetWebGlHelpers_InitUpdateFunction_m1335550908 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.UNETWebSocketLib::Connect(System.Int32,System.String,System.Int32,System.Int32,System.Byte&)
extern "C"  int32_t UNETWebSocketLib_Connect_m3711350676 (UNETWebSocketLib_t687350976 * __this, int32_t ___hostId0, String_t* ___ip1, int32_t ___port2, int32_t ___exeptionConnectionId3, uint8_t* ___error4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UNETWebSocketLib::Disconnect(System.Int32,System.Int32,System.Byte&)
extern "C"  bool UNETWebSocketLib_Disconnect_m686155674 (UNETWebSocketLib_t687350976 * __this, int32_t ___hostId0, int32_t ___connectionId1, uint8_t* ___error2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UNETWebSocketLib::Send(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)
extern "C"  bool UNETWebSocketLib_Send_m3927447004 (UNETWebSocketLib_t687350976 * __this, int32_t ___hostId0, int32_t ___connectionId1, int32_t ___channelId2, ByteU5BU5D_t4116647657* ___buff3, int32_t ___size4, uint8_t* ___error5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkEventType UnityEngine.Networking.UNETWebSocketLib::ReceiveFromHost(System.Int32,System.Int32&,System.Int32&,System.Byte[],System.Int32,System.Int32&,System.Byte&)
extern "C"  int32_t UNETWebSocketLib_ReceiveFromHost_m712468056 (UNETWebSocketLib_t687350976 * __this, int32_t ___hostId0, int32_t* ___connectionId1, int32_t* ___channelId2, ByteU5BU5D_t4116647657* ___buffer3, int32_t ___bufferSize4, int32_t* ___receivedSize5, uint8_t* ___error6, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHostWithSimulator(UnityEngine.Networking.HostTopology,System.Int32,System.Int32,System.Int32,System.String)
extern "C"  int32_t NetworkTransport_AddHostWithSimulator_m2523855845 (RuntimeObject * __this /* static, unused */, HostTopology_t4059263395 * ___topology0, int32_t ___minTimeout1, int32_t ___maxTimeout2, int32_t ___port3, String_t* ___ip4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Convert::FromBase64String(System.String)
extern "C"  ByteU5BU5D_t4116647657* Convert_FromBase64String_m3685135396 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToBase64String(System.Byte[])
extern "C"  String_t* Convert_ToBase64String_m3839334935 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.HostTopology::get_DefaultConfig()
extern "C"  ConnectionConfig_t4173981269 * HostTopology_get_DefaultConfig_m230960067 (HostTopology_t4059263395 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_PacketSize()
extern "C"  uint16_t ConnectionConfig_get_PacketSize_m195714670 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_PingTimeout()
extern "C"  uint32_t ConnectionConfig_get_PingTimeout_m2393238105 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_AddHost(System.UInt32)
extern "C"  int32_t UNETWebSocketLib_JS_UNETWebSockets_AddHost_m738051848 (RuntimeObject * __this /* static, unused */, uint32_t ___pingTimeout0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_IsHostReadyToConnect(System.Int32)
extern "C"  bool UNETWebSocketLib_JS_UNETWebSockets_IsHostReadyToConnect_m2745408737 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::StartsWith(System.String)
extern "C"  bool String_StartsWith_m1759067526 (String_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m2163913788 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_SocketCreate(System.Int32,System.String)
extern "C"  void UNETWebSocketLib_JS_UNETWebSockets_SocketCreate_m4185608284 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, String_t* ___url1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_IsHostCorrect(System.Int32)
extern "C"  bool UNETWebSocketLib_JS_UNETWebSockets_IsHostCorrect_m2117042243 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_SocketClose(System.Int32)
extern "C"  void UNETWebSocketLib_JS_UNETWebSockets_SocketClose_m1940787209 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C"  void Buffer_BlockCopy_m2884209081 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_SocketSend(System.Int32,System.Byte[],System.Int32)
extern "C"  void UNETWebSocketLib_JS_UNETWebSockets_SocketSend_m1408259275 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, ByteU5BU5D_t4116647657* ___buff1, int32_t ___length2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_SocketRecvEvntTypeFromHost(System.Int32)
extern "C"  int32_t UNETWebSocketLib_JS_UNETWebSockets_SocketRecvEvntTypeFromHost_m2846787008 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_SocketRecvEvntBuffLengthFromHost(System.Int32)
extern "C"  int32_t UNETWebSocketLib_JS_UNETWebSockets_SocketRecvEvntBuffLengthFromHost_m1817862721 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_SocketRecvEvntBuffFromHost(System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t UNETWebSocketLib_JS_UNETWebSockets_SocketRecvEvntBuffFromHost_m1734420795 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, ByteU5BU5D_t4116647657* ___buff1, int32_t ___length2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_SocketCleanEvntFromHost(System.Int32)
extern "C"  void UNETWebSocketLib_JS_UNETWebSockets_SocketCleanEvntFromHost_m1987701607 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_Init()
extern "C"  void UNETWebSocketLib_JS_UNETWebSockets_Init_m1663175152 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_SocketStop()
extern "C"  void UNETWebSocketLib_JS_UNETWebSockets_SocketStop_m2873444946 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UNETWebSocketLib::Stop()
extern "C"  void UNETWebSocketLib_Stop_m4087678754 (UNETWebSocketLib_t687350976 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.UNETWebSocketLib::.ctor()
extern "C"  void UNETWebSocketLib__ctor_m3891055645 (UNETWebSocketLib_t687350976 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SystemInfo::get_deviceUniqueIdentifier()
extern "C"  String_t* SystemInfo_get_deviceUniqueIdentifier_m3439870207 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::ContainsKey(!0)
#define Dictionary_2_ContainsKey_m3634856078(__this, p0, method) ((  bool (*) (Dictionary_2_t3502080855 *, uint64_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m990283339_gshared)(__this, p0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Remove(!0)
#define Dictionary_2_Remove_m1903597580(__this, p0, method) ((  bool (*) (Dictionary_2_t3502080855 *, uint64_t, const RuntimeMethod*))Dictionary_2_Remove_m963104344_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Add(!0,!1)
#define Dictionary_2_Add_m3785116836(__this, p0, p1, method) ((  void (*) (Dictionary_2_t3502080855 *, uint64_t, NetworkAccessToken_t320639760 *, const RuntimeMethod*))Dictionary_2_Add_m3180043010_gshared)(__this, p0, p1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::TryGetValue(!0,!1&)
#define Dictionary_2_TryGetValue_m1533749912(__this, p0, p1, method) ((  bool (*) (Dictionary_2_t3502080855 *, uint64_t, NetworkAccessToken_t320639760 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m2634421657_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.Networking.Types.NetworkAccessToken::.ctor()
extern "C"  void NetworkAccessToken__ctor_m969521192 (NetworkAccessToken_t320639760 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::.ctor()
#define Dictionary_2__ctor_m2501111586(__this, method) ((  void (*) (Dictionary_2_t3502080855 *, const RuntimeMethod*))Dictionary_2__ctor_m2241802331_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.ChannelQOS::.ctor(UnityEngine.Networking.QosType)
extern "C"  void ChannelQOS__ctor_m181222305 (ChannelQOS_t1890984120 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___value0;
		__this->set_m_Type_0(L_0);
		__this->set_m_BelongsSharedOrderChannel_1((bool)0);
		return;
	}
}
// System.Void UnityEngine.Networking.ChannelQOS::.ctor()
extern "C"  void ChannelQOS__ctor_m1615168101 (ChannelQOS_t1890984120 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		__this->set_m_Type_0(0);
		__this->set_m_BelongsSharedOrderChannel_1((bool)0);
		return;
	}
}
// System.Void UnityEngine.Networking.ChannelQOS::.ctor(UnityEngine.Networking.ChannelQOS)
extern "C"  void ChannelQOS__ctor_m3213155130 (ChannelQOS_t1890984120 * __this, ChannelQOS_t1890984120 * ___channel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChannelQOS__ctor_m3213155130_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ChannelQOS_t1890984120 * L_0 = ___channel0;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		NullReferenceException_t1023182353 * L_1 = (NullReferenceException_t1023182353 *)il2cpp_codegen_object_new(NullReferenceException_t1023182353_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m3076065613(L_1, _stringLiteral1575624523, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ChannelQOS__ctor_m3213155130_RuntimeMethod_var);
	}

IL_0018:
	{
		ChannelQOS_t1890984120 * L_2 = ___channel0;
		int32_t L_3 = L_2->get_m_Type_0();
		__this->set_m_Type_0(L_3);
		ChannelQOS_t1890984120 * L_4 = ___channel0;
		bool L_5 = L_4->get_m_BelongsSharedOrderChannel_1();
		__this->set_m_BelongsSharedOrderChannel_1(L_5);
		return;
	}
}
// UnityEngine.Networking.QosType UnityEngine.Networking.ChannelQOS::get_QOS()
extern "C"  int32_t ChannelQOS_get_QOS_m209007790 (ChannelQOS_t1890984120 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Type_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.ConnectionConfig::.ctor()
extern "C"  void ConnectionConfig__ctor_m3078028383 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfig__ctor_m3078028383_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3363058862 * L_0 = (List_1_t3363058862 *)il2cpp_codegen_object_new(List_1_t3363058862_il2cpp_TypeInfo_var);
		List_1__ctor_m4168264895(L_0, /*hidden argument*/List_1__ctor_m4168264895_RuntimeMethod_var);
		__this->set_m_Channels_27(L_0);
		List_1_t4078445860 * L_1 = (List_1_t4078445860 *)il2cpp_codegen_object_new(List_1_t4078445860_il2cpp_TypeInfo_var);
		List_1__ctor_m441991155(L_1, /*hidden argument*/List_1__ctor_m441991155_RuntimeMethod_var);
		__this->set_m_SharedOrderChannels_28(L_1);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		__this->set_m_PacketSize_1((uint16_t)((int32_t)1440));
		__this->set_m_FragmentSize_2((uint16_t)((int32_t)500));
		__this->set_m_ResendTimeout_3(((int32_t)1200));
		__this->set_m_DisconnectTimeout_4(((int32_t)2000));
		__this->set_m_ConnectTimeout_5(((int32_t)2000));
		__this->set_m_MinUpdateTimeout_6(((int32_t)10));
		__this->set_m_PingTimeout_7(((int32_t)500));
		__this->set_m_ReducedPingTimeout_8(((int32_t)100));
		__this->set_m_AllCostTimeout_9(((int32_t)20));
		__this->set_m_NetworkDropThreshold_10((uint8_t)5);
		__this->set_m_OverflowDropThreshold_11((uint8_t)5);
		__this->set_m_MaxConnectionAttempt_12((uint8_t)((int32_t)10));
		__this->set_m_AckDelay_13(((int32_t)33));
		__this->set_m_SendDelay_14(((int32_t)10));
		__this->set_m_MaxCombinedReliableMessageSize_15((uint16_t)((int32_t)100));
		__this->set_m_MaxCombinedReliableMessageCount_16((uint16_t)((int32_t)10));
		__this->set_m_MaxSentMessageQueueSize_17((uint16_t)((int32_t)512));
		__this->set_m_AcksType_18(1);
		__this->set_m_UsePlatformSpecificProtocols_19((bool)0);
		__this->set_m_InitialBandwidth_20(0);
		__this->set_m_BandwidthPeakFactor_21((2.0f));
		__this->set_m_WebSocketReceiveBufferMaxSize_22((uint16_t)0);
		__this->set_m_UdpSocketReceiveBufferMaxSize_23(0);
		__this->set_m_SSLCertFilePath_24((String_t*)NULL);
		__this->set_m_SSLPrivateKeyFilePath_25((String_t*)NULL);
		__this->set_m_SSLCAFilePath_26((String_t*)NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfig::.ctor(UnityEngine.Networking.ConnectionConfig)
extern "C"  void ConnectionConfig__ctor_m2640243122 (ConnectionConfig_t4173981269 * __this, ConnectionConfig_t4173981269 * ___config0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfig__ctor_m2640243122_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ChannelQOS_t1890984120 * V_0 = NULL;
	Enumerator_t957335443  V_1;
	memset(&V_1, 0, sizeof(V_1));
	List_1_t2606371118 * V_2 = NULL;
	Enumerator_t1672722441  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t3363058862 * L_0 = (List_1_t3363058862 *)il2cpp_codegen_object_new(List_1_t3363058862_il2cpp_TypeInfo_var);
		List_1__ctor_m4168264895(L_0, /*hidden argument*/List_1__ctor_m4168264895_RuntimeMethod_var);
		__this->set_m_Channels_27(L_0);
		List_1_t4078445860 * L_1 = (List_1_t4078445860 *)il2cpp_codegen_object_new(List_1_t4078445860_il2cpp_TypeInfo_var);
		List_1__ctor_m441991155(L_1, /*hidden argument*/List_1__ctor_m441991155_RuntimeMethod_var);
		__this->set_m_SharedOrderChannels_28(L_1);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_2 = ___config0;
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		NullReferenceException_t1023182353 * L_3 = (NullReferenceException_t1023182353 *)il2cpp_codegen_object_new(NullReferenceException_t1023182353_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m3076065613(L_3, _stringLiteral3778735433, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, ConnectionConfig__ctor_m2640243122_RuntimeMethod_var);
	}

IL_002e:
	{
		ConnectionConfig_t4173981269 * L_4 = ___config0;
		uint16_t L_5 = L_4->get_m_PacketSize_1();
		__this->set_m_PacketSize_1(L_5);
		ConnectionConfig_t4173981269 * L_6 = ___config0;
		uint16_t L_7 = L_6->get_m_FragmentSize_2();
		__this->set_m_FragmentSize_2(L_7);
		ConnectionConfig_t4173981269 * L_8 = ___config0;
		uint32_t L_9 = L_8->get_m_ResendTimeout_3();
		__this->set_m_ResendTimeout_3(L_9);
		ConnectionConfig_t4173981269 * L_10 = ___config0;
		uint32_t L_11 = L_10->get_m_DisconnectTimeout_4();
		__this->set_m_DisconnectTimeout_4(L_11);
		ConnectionConfig_t4173981269 * L_12 = ___config0;
		uint32_t L_13 = L_12->get_m_ConnectTimeout_5();
		__this->set_m_ConnectTimeout_5(L_13);
		ConnectionConfig_t4173981269 * L_14 = ___config0;
		uint32_t L_15 = L_14->get_m_MinUpdateTimeout_6();
		__this->set_m_MinUpdateTimeout_6(L_15);
		ConnectionConfig_t4173981269 * L_16 = ___config0;
		uint32_t L_17 = L_16->get_m_PingTimeout_7();
		__this->set_m_PingTimeout_7(L_17);
		ConnectionConfig_t4173981269 * L_18 = ___config0;
		uint32_t L_19 = L_18->get_m_ReducedPingTimeout_8();
		__this->set_m_ReducedPingTimeout_8(L_19);
		ConnectionConfig_t4173981269 * L_20 = ___config0;
		uint32_t L_21 = L_20->get_m_AllCostTimeout_9();
		__this->set_m_AllCostTimeout_9(L_21);
		ConnectionConfig_t4173981269 * L_22 = ___config0;
		uint8_t L_23 = L_22->get_m_NetworkDropThreshold_10();
		__this->set_m_NetworkDropThreshold_10(L_23);
		ConnectionConfig_t4173981269 * L_24 = ___config0;
		uint8_t L_25 = L_24->get_m_OverflowDropThreshold_11();
		__this->set_m_OverflowDropThreshold_11(L_25);
		ConnectionConfig_t4173981269 * L_26 = ___config0;
		uint8_t L_27 = L_26->get_m_MaxConnectionAttempt_12();
		__this->set_m_MaxConnectionAttempt_12(L_27);
		ConnectionConfig_t4173981269 * L_28 = ___config0;
		uint32_t L_29 = L_28->get_m_AckDelay_13();
		__this->set_m_AckDelay_13(L_29);
		ConnectionConfig_t4173981269 * L_30 = ___config0;
		uint32_t L_31 = L_30->get_m_SendDelay_14();
		__this->set_m_SendDelay_14(L_31);
		ConnectionConfig_t4173981269 * L_32 = ___config0;
		uint16_t L_33 = ConnectionConfig_get_MaxCombinedReliableMessageSize_m1419822617(L_32, /*hidden argument*/NULL);
		__this->set_m_MaxCombinedReliableMessageSize_15(L_33);
		ConnectionConfig_t4173981269 * L_34 = ___config0;
		uint16_t L_35 = L_34->get_m_MaxCombinedReliableMessageCount_16();
		__this->set_m_MaxCombinedReliableMessageCount_16(L_35);
		ConnectionConfig_t4173981269 * L_36 = ___config0;
		uint16_t L_37 = L_36->get_m_MaxSentMessageQueueSize_17();
		__this->set_m_MaxSentMessageQueueSize_17(L_37);
		ConnectionConfig_t4173981269 * L_38 = ___config0;
		int32_t L_39 = L_38->get_m_AcksType_18();
		__this->set_m_AcksType_18(L_39);
		ConnectionConfig_t4173981269 * L_40 = ___config0;
		bool L_41 = L_40->get_m_UsePlatformSpecificProtocols_19();
		__this->set_m_UsePlatformSpecificProtocols_19(L_41);
		ConnectionConfig_t4173981269 * L_42 = ___config0;
		uint32_t L_43 = L_42->get_m_InitialBandwidth_20();
		__this->set_m_InitialBandwidth_20(L_43);
		uint32_t L_44 = __this->get_m_InitialBandwidth_20();
		if (L_44)
		{
			goto IL_0144;
		}
	}
	{
		uint16_t L_45 = __this->get_m_PacketSize_1();
		uint32_t L_46 = __this->get_m_MinUpdateTimeout_6();
		__this->set_m_InitialBandwidth_20(((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_45, (int32_t)((int32_t)1000)))/(uint32_t)(int32_t)L_46)));
	}

IL_0144:
	{
		ConnectionConfig_t4173981269 * L_47 = ___config0;
		float L_48 = L_47->get_m_BandwidthPeakFactor_21();
		__this->set_m_BandwidthPeakFactor_21(L_48);
		ConnectionConfig_t4173981269 * L_49 = ___config0;
		uint16_t L_50 = L_49->get_m_WebSocketReceiveBufferMaxSize_22();
		__this->set_m_WebSocketReceiveBufferMaxSize_22(L_50);
		ConnectionConfig_t4173981269 * L_51 = ___config0;
		uint32_t L_52 = L_51->get_m_UdpSocketReceiveBufferMaxSize_23();
		__this->set_m_UdpSocketReceiveBufferMaxSize_23(L_52);
		ConnectionConfig_t4173981269 * L_53 = ___config0;
		String_t* L_54 = L_53->get_m_SSLCertFilePath_24();
		__this->set_m_SSLCertFilePath_24(L_54);
		ConnectionConfig_t4173981269 * L_55 = ___config0;
		String_t* L_56 = L_55->get_m_SSLPrivateKeyFilePath_25();
		__this->set_m_SSLPrivateKeyFilePath_25(L_56);
		ConnectionConfig_t4173981269 * L_57 = ___config0;
		String_t* L_58 = L_57->get_m_SSLCAFilePath_26();
		__this->set_m_SSLCAFilePath_26(L_58);
		ConnectionConfig_t4173981269 * L_59 = ___config0;
		List_1_t3363058862 * L_60 = L_59->get_m_Channels_27();
		Enumerator_t957335443  L_61 = List_1_GetEnumerator_m4246513235(L_60, /*hidden argument*/List_1_GetEnumerator_m4246513235_RuntimeMethod_var);
		V_1 = L_61;
	}

IL_0199:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01b9;
		}

IL_019e:
		{
			ChannelQOS_t1890984120 * L_62 = Enumerator_get_Current_m1808369071((Enumerator_t957335443 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m1808369071_RuntimeMethod_var);
			V_0 = L_62;
			List_1_t3363058862 * L_63 = __this->get_m_Channels_27();
			ChannelQOS_t1890984120 * L_64 = V_0;
			ChannelQOS_t1890984120 * L_65 = (ChannelQOS_t1890984120 *)il2cpp_codegen_object_new(ChannelQOS_t1890984120_il2cpp_TypeInfo_var);
			ChannelQOS__ctor_m3213155130(L_65, L_64, /*hidden argument*/NULL);
			List_1_Add_m423166763(L_63, L_65, /*hidden argument*/List_1_Add_m423166763_RuntimeMethod_var);
		}

IL_01b9:
		{
			bool L_66 = Enumerator_MoveNext_m349679386((Enumerator_t957335443 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m349679386_RuntimeMethod_var);
			if (L_66)
			{
				goto IL_019e;
			}
		}

IL_01c5:
		{
			IL2CPP_LEAVE(0x1D8, FINALLY_01ca);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01ca;
	}

FINALLY_01ca:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3004041484((Enumerator_t957335443 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m3004041484_RuntimeMethod_var);
		IL2CPP_END_FINALLY(458)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(458)
	{
		IL2CPP_JUMP_TBL(0x1D8, IL_01d8)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01d8:
	{
		ConnectionConfig_t4173981269 * L_67 = ___config0;
		List_1_t4078445860 * L_68 = L_67->get_m_SharedOrderChannels_28();
		Enumerator_t1672722441  L_69 = List_1_GetEnumerator_m1327152933(L_68, /*hidden argument*/List_1_GetEnumerator_m1327152933_RuntimeMethod_var);
		V_3 = L_69;
	}

IL_01e5:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0200;
		}

IL_01ea:
		{
			List_1_t2606371118 * L_70 = Enumerator_get_Current_m2439261711((Enumerator_t1672722441 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m2439261711_RuntimeMethod_var);
			V_2 = L_70;
			List_1_t4078445860 * L_71 = __this->get_m_SharedOrderChannels_28();
			List_1_t2606371118 * L_72 = V_2;
			List_1_Add_m1960376679(L_71, L_72, /*hidden argument*/List_1_Add_m1960376679_RuntimeMethod_var);
		}

IL_0200:
		{
			bool L_73 = Enumerator_MoveNext_m491916196((Enumerator_t1672722441 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m491916196_RuntimeMethod_var);
			if (L_73)
			{
				goto IL_01ea;
			}
		}

IL_020c:
		{
			IL2CPP_LEAVE(0x21F, FINALLY_0211);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0211;
	}

FINALLY_0211:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2814761745((Enumerator_t1672722441 *)(&V_3), /*hidden argument*/Enumerator_Dispose_m2814761745_RuntimeMethod_var);
		IL2CPP_END_FINALLY(529)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(529)
	{
		IL2CPP_JUMP_TBL(0x21F, IL_021f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_021f:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfig::Validate(UnityEngine.Networking.ConnectionConfig)
extern "C"  void ConnectionConfig_Validate_m2712188470 (RuntimeObject * __this /* static, unused */, ConnectionConfig_t4173981269 * ___config0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfig_Validate_m2712188470_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ConnectionConfig_t4173981269 * L_0 = ___config0;
		uint16_t L_1 = L_0->get_m_PacketSize_1();
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0034;
		}
	}
	{
		V_0 = ((int32_t)128);
		String_t* L_2 = Int32_ToString_m141394615((int32_t*)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1848928535, L_2, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_4 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, ConnectionConfig_Validate_m2712188470_RuntimeMethod_var);
	}

IL_0034:
	{
		ConnectionConfig_t4173981269 * L_5 = ___config0;
		uint16_t L_6 = L_5->get_m_FragmentSize_2();
		ConnectionConfig_t4173981269 * L_7 = ___config0;
		uint16_t L_8 = L_7->get_m_PacketSize_1();
		if ((((int32_t)L_6) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)128))))))
		{
			goto IL_006e;
		}
	}
	{
		V_1 = ((int32_t)128);
		String_t* L_9 = Int32_ToString_m141394615((int32_t*)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1996371512, L_9, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_11 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NULL, ConnectionConfig_Validate_m2712188470_RuntimeMethod_var);
	}

IL_006e:
	{
		ConnectionConfig_t4173981269 * L_12 = ___config0;
		List_1_t3363058862 * L_13 = L_12->get_m_Channels_27();
		int32_t L_14 = List_1_get_Count_m3550276212(L_13, /*hidden argument*/List_1_get_Count_m3550276212_RuntimeMethod_var);
		if ((((int32_t)L_14) <= ((int32_t)((int32_t)255))))
		{
			goto IL_008e;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_15 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_15, _stringLiteral2828656510, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, NULL, ConnectionConfig_Validate_m2712188470_RuntimeMethod_var);
	}

IL_008e:
	{
		return;
	}
}
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_PacketSize()
extern "C"  uint16_t ConnectionConfig_get_PacketSize_m195714670 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_PacketSize_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_FragmentSize()
extern "C"  uint16_t ConnectionConfig_get_FragmentSize_m3690693204 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_FragmentSize_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_MinUpdateTimeout()
extern "C"  uint32_t ConnectionConfig_get_MinUpdateTimeout_m2622211838 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_MinUpdateTimeout_6();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfig::set_MinUpdateTimeout(System.UInt32)
extern "C"  void ConnectionConfig_set_MinUpdateTimeout_m3638055834 (ConnectionConfig_t4173981269 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfig_set_MinUpdateTimeout_m3638055834_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___value0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_1 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_1, _stringLiteral2027780650, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ConnectionConfig_set_MinUpdateTimeout_m3638055834_RuntimeMethod_var);
	}

IL_0012:
	{
		uint32_t L_2 = ___value0;
		__this->set_m_MinUpdateTimeout_6(L_2);
		return;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_PingTimeout()
extern "C"  uint32_t ConnectionConfig_get_PingTimeout_m2393238105 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_PingTimeout_7();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_MaxCombinedReliableMessageSize()
extern "C"  uint16_t ConnectionConfig_get_MaxCombinedReliableMessageSize_m1419822617 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_MaxCombinedReliableMessageSize_15();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Networking.ConnectionConfig::get_UsePlatformSpecificProtocols()
extern "C"  bool ConnectionConfig_get_UsePlatformSpecificProtocols_m1183726116 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_UsePlatformSpecificProtocols_19();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfig::set_UsePlatformSpecificProtocols(System.Boolean)
extern "C"  void ConnectionConfig_set_UsePlatformSpecificProtocols_m774564531 (ConnectionConfig_t4173981269 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfig_set_UsePlatformSpecificProtocols_m774564531_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_1 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)25))))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_2 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)24))))
		{
			goto IL_002a;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_3 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_3, _stringLiteral115901148, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, ConnectionConfig_set_UsePlatformSpecificProtocols_m774564531_RuntimeMethod_var);
	}

IL_002a:
	{
		bool L_4 = ___value0;
		__this->set_m_UsePlatformSpecificProtocols_19(L_4);
		return;
	}
}
// System.Int32 UnityEngine.Networking.ConnectionConfig::get_ChannelCount()
extern "C"  int32_t ConnectionConfig_get_ChannelCount_m1630695256 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfig_get_ChannelCount_m1630695256_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t3363058862 * L_0 = __this->get_m_Channels_27();
		int32_t L_1 = List_1_get_Count_m3550276212(L_0, /*hidden argument*/List_1_get_Count_m3550276212_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Byte UnityEngine.Networking.ConnectionConfig::AddChannel(UnityEngine.Networking.QosType)
extern "C"  uint8_t ConnectionConfig_AddChannel_m2791320185 (ConnectionConfig_t4173981269 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfig_AddChannel_m2791320185_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ChannelQOS_t1890984120 * V_0 = NULL;
	uint8_t V_1 = 0x0;
	{
		List_1_t3363058862 * L_0 = __this->get_m_Channels_27();
		int32_t L_1 = List_1_get_Count_m3550276212(L_0, /*hidden argument*/List_1_get_Count_m3550276212_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)255))))
		{
			goto IL_0021;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, _stringLiteral584173395, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, ConnectionConfig_AddChannel_m2791320185_RuntimeMethod_var);
	}

IL_0021:
	{
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (QosType_t3566496866_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		int32_t L_5 = ___value0;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(QosType_t3566496866_il2cpp_TypeInfo_var, &L_6);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t4135868527_il2cpp_TypeInfo_var);
		bool L_8 = Enum_IsDefined_m1442314461(NULL /*static, unused*/, L_4, L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_9 = ___value0;
		int32_t L_10 = ((int32_t)L_9);
		RuntimeObject * L_11 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3080010154, L_11, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_13 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_13, L_12, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, NULL, ConnectionConfig_AddChannel_m2791320185_RuntimeMethod_var);
	}

IL_0052:
	{
		int32_t L_14 = ___value0;
		ChannelQOS_t1890984120 * L_15 = (ChannelQOS_t1890984120 *)il2cpp_codegen_object_new(ChannelQOS_t1890984120_il2cpp_TypeInfo_var);
		ChannelQOS__ctor_m181222305(L_15, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		List_1_t3363058862 * L_16 = __this->get_m_Channels_27();
		ChannelQOS_t1890984120 * L_17 = V_0;
		List_1_Add_m423166763(L_16, L_17, /*hidden argument*/List_1_Add_m423166763_RuntimeMethod_var);
		List_1_t3363058862 * L_18 = __this->get_m_Channels_27();
		int32_t L_19 = List_1_get_Count_m3550276212(L_18, /*hidden argument*/List_1_get_Count_m3550276212_RuntimeMethod_var);
		V_1 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1)))));
		goto IL_0079;
	}

IL_0079:
	{
		uint8_t L_20 = V_1;
		return L_20;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS> UnityEngine.Networking.ConnectionConfig::get_Channels()
extern "C"  List_1_t3363058862 * ConnectionConfig_get_Channels_m1411410508 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	List_1_t3363058862 * V_0 = NULL;
	{
		List_1_t3363058862 * L_0 = __this->get_m_Channels_27();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		List_1_t3363058862 * L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.ConnectionSimulatorConfig::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Single)
extern "C"  void ConnectionSimulatorConfig__ctor_m2825245486 (ConnectionSimulatorConfig_t1375549810 * __this, int32_t ___outMinDelay0, int32_t ___outAvgDelay1, int32_t ___inMinDelay2, int32_t ___inAvgDelay3, float ___packetLossPercentage4, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.GlobalConfig::.ctor()
extern "C"  void GlobalConfig__ctor_m3352574105 (GlobalConfig_t833512557 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		__this->set_m_ThreadAwakeTimeout_3(1);
		__this->set_m_ReactorModel_4(0);
		__this->set_m_ReactorMaximumReceivedMessages_5((uint16_t)((int32_t)1024));
		__this->set_m_ReactorMaximumSentMessages_6((uint16_t)((int32_t)1024));
		__this->set_m_MaxPacketSize_7((uint16_t)((int32_t)2000));
		__this->set_m_MaxHosts_8((uint16_t)((int32_t)16));
		__this->set_m_ThreadPoolSize_9((uint8_t)1);
		__this->set_m_MinTimerTimeout_10(1);
		__this->set_m_MaxTimerTimeout_11(((int32_t)12000));
		__this->set_m_MinNetSimulatorTimeout_12(1);
		__this->set_m_MaxNetSimulatorTimeout_13(((int32_t)12000));
		__this->set_m_ConnectionReadyForSend_14((Action_2_t4177122770 *)NULL);
		__this->set_m_NetworkEventAvailable_15((Action_1_t3123413348 *)NULL);
		return;
	}
}
// System.UInt32 UnityEngine.Networking.GlobalConfig::get_ThreadAwakeTimeout()
extern "C"  uint32_t GlobalConfig_get_ThreadAwakeTimeout_m2647936312 (GlobalConfig_t833512557 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_ThreadAwakeTimeout_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.GlobalConfig::set_ThreadAwakeTimeout(System.UInt32)
extern "C"  void GlobalConfig_set_ThreadAwakeTimeout_m4006727376 (GlobalConfig_t833512557 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GlobalConfig_set_ThreadAwakeTimeout_m4006727376_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___value0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_1 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_1, _stringLiteral1423808650, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, GlobalConfig_set_ThreadAwakeTimeout_m4006727376_RuntimeMethod_var);
	}

IL_0012:
	{
		uint32_t L_2 = ___value0;
		__this->set_m_ThreadAwakeTimeout_3(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.HostTopology::.ctor(UnityEngine.Networking.ConnectionConfig,System.Int32)
extern "C"  void HostTopology__ctor_m284550224 (HostTopology_t4059263395 * __this, ConnectionConfig_t4173981269 * ___defaultConfig0, int32_t ___maxDefaultConnections1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HostTopology__ctor_m284550224_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_DefConfig_0((ConnectionConfig_t4173981269 *)NULL);
		__this->set_m_MaxDefConnections_1(0);
		List_1_t1351088715 * L_0 = (List_1_t1351088715 *)il2cpp_codegen_object_new(List_1_t1351088715_il2cpp_TypeInfo_var);
		List_1__ctor_m607530126(L_0, /*hidden argument*/List_1__ctor_m607530126_RuntimeMethod_var);
		__this->set_m_SpecialConnections_2(L_0);
		__this->set_m_ReceivedMessagePoolSize_3((uint16_t)((int32_t)1024));
		__this->set_m_SentMessagePoolSize_4((uint16_t)((int32_t)1024));
		__this->set_m_MessagePoolSizeGrowthFactor_5((0.75f));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_1 = ___defaultConfig0;
		if (L_1)
		{
			goto IL_0052;
		}
	}
	{
		NullReferenceException_t1023182353 * L_2 = (NullReferenceException_t1023182353 *)il2cpp_codegen_object_new(NullReferenceException_t1023182353_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m3076065613(L_2, _stringLiteral3778735433, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, HostTopology__ctor_m284550224_RuntimeMethod_var);
	}

IL_0052:
	{
		int32_t L_3 = ___maxDefaultConnections1;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0069;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_4 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_4, _stringLiteral782611174, _stringLiteral1442255268, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, HostTopology__ctor_m284550224_RuntimeMethod_var);
	}

IL_0069:
	{
		int32_t L_5 = ___maxDefaultConnections1;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)65535))))
		{
			goto IL_0084;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_6 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_6, _stringLiteral782611174, _stringLiteral3563946363, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, HostTopology__ctor_m284550224_RuntimeMethod_var);
	}

IL_0084:
	{
		ConnectionConfig_t4173981269 * L_7 = ___defaultConfig0;
		ConnectionConfig_Validate_m2712188470(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_8 = ___defaultConfig0;
		ConnectionConfig_t4173981269 * L_9 = (ConnectionConfig_t4173981269 *)il2cpp_codegen_object_new(ConnectionConfig_t4173981269_il2cpp_TypeInfo_var);
		ConnectionConfig__ctor_m2640243122(L_9, L_8, /*hidden argument*/NULL);
		__this->set_m_DefConfig_0(L_9);
		int32_t L_10 = ___maxDefaultConnections1;
		__this->set_m_MaxDefConnections_1(L_10);
		return;
	}
}
// System.Void UnityEngine.Networking.HostTopology::.ctor()
extern "C"  void HostTopology__ctor_m1320382600 (HostTopology_t4059263395 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HostTopology__ctor_m1320382600_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_DefConfig_0((ConnectionConfig_t4173981269 *)NULL);
		__this->set_m_MaxDefConnections_1(0);
		List_1_t1351088715 * L_0 = (List_1_t1351088715 *)il2cpp_codegen_object_new(List_1_t1351088715_il2cpp_TypeInfo_var);
		List_1__ctor_m607530126(L_0, /*hidden argument*/List_1__ctor_m607530126_RuntimeMethod_var);
		__this->set_m_SpecialConnections_2(L_0);
		__this->set_m_ReceivedMessagePoolSize_3((uint16_t)((int32_t)1024));
		__this->set_m_SentMessagePoolSize_4((uint16_t)((int32_t)1024));
		__this->set_m_MessagePoolSizeGrowthFactor_5((0.75f));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.HostTopology::get_DefaultConfig()
extern "C"  ConnectionConfig_t4173981269 * HostTopology_get_DefaultConfig_m230960067 (HostTopology_t4059263395 * __this, const RuntimeMethod* method)
{
	ConnectionConfig_t4173981269 * V_0 = NULL;
	{
		ConnectionConfig_t4173981269 * L_0 = __this->get_m_DefConfig_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		ConnectionConfig_t4173981269 * L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.Match.BasicResponse::.ctor()
extern "C"  void BasicResponse__ctor_m3021811122 (BasicResponse_t1476713923 * __this, const RuntimeMethod* method)
{
	{
		Response__ctor_m1005354347(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::.ctor()
extern "C"  void CreateMatchRequest__ctor_m1120211933 (CreateMatchRequest_t2600446299 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CreateMatchRequest__ctor_m1120211933_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Request_t2696089890_il2cpp_TypeInfo_var);
		Request__ctor_m873075042(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::get_name()
extern "C"  String_t* CreateMatchRequest_get_name_m2145735034 (CreateMatchRequest_t2600446299 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CnameU3Ek__BackingField_5();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_name(System.String)
extern "C"  void CreateMatchRequest_set_name_m701411379 (CreateMatchRequest_t2600446299 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.UInt32 UnityEngine.Networking.Match.CreateMatchRequest::get_size()
extern "C"  uint32_t CreateMatchRequest_get_size_m3980857567 (CreateMatchRequest_t2600446299 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_U3CsizeU3Ek__BackingField_6();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_size(System.UInt32)
extern "C"  void CreateMatchRequest_set_size_m3316633767 (CreateMatchRequest_t2600446299 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___value0;
		__this->set_U3CsizeU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::get_publicAddress()
extern "C"  String_t* CreateMatchRequest_get_publicAddress_m3336041532 (CreateMatchRequest_t2600446299 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CpublicAddressU3Ek__BackingField_7();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_publicAddress(System.String)
extern "C"  void CreateMatchRequest_set_publicAddress_m1416983088 (CreateMatchRequest_t2600446299 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CpublicAddressU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::get_privateAddress()
extern "C"  String_t* CreateMatchRequest_get_privateAddress_m3613518697 (CreateMatchRequest_t2600446299 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CprivateAddressU3Ek__BackingField_8();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_privateAddress(System.String)
extern "C"  void CreateMatchRequest_set_privateAddress_m278898640 (CreateMatchRequest_t2600446299 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CprivateAddressU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.CreateMatchRequest::get_eloScore()
extern "C"  int32_t CreateMatchRequest_get_eloScore_m1485273462 (CreateMatchRequest_t2600446299 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CeloScoreU3Ek__BackingField_9();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_eloScore(System.Int32)
extern "C"  void CreateMatchRequest_set_eloScore_m1972554262 (CreateMatchRequest_t2600446299 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CeloScoreU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.CreateMatchRequest::get_advertise()
extern "C"  bool CreateMatchRequest_get_advertise_m865484440 (CreateMatchRequest_t2600446299 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_U3CadvertiseU3Ek__BackingField_10();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_advertise(System.Boolean)
extern "C"  void CreateMatchRequest_set_advertise_m3607720815 (CreateMatchRequest_t2600446299 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CadvertiseU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::get_password()
extern "C"  String_t* CreateMatchRequest_get_password_m3435449282 (CreateMatchRequest_t2600446299 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CpasswordU3Ek__BackingField_11();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_password(System.String)
extern "C"  void CreateMatchRequest_set_password_m1322775125 (CreateMatchRequest_t2600446299 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CpasswordU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.CreateMatchRequest::get_matchAttributes()
extern "C"  Dictionary_2_t3521823603 * CreateMatchRequest_get_matchAttributes_m3276240993 (CreateMatchRequest_t2600446299 * __this, const RuntimeMethod* method)
{
	Dictionary_2_t3521823603 * V_0 = NULL;
	{
		Dictionary_2_t3521823603 * L_0 = __this->get_U3CmatchAttributesU3Ek__BackingField_12();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Dictionary_2_t3521823603 * L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::ToString()
extern "C"  String_t* CreateMatchRequest_ToString_m24174952 (CreateMatchRequest_t2600446299 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CreateMatchRequest_ToString_m24174952_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t2843939325* G_B2_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t2843939325* G_B1_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t2843939325* G_B3_2 = NULL;
	ObjectU5BU5D_t2843939325* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t2843939325* G_B5_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t2843939325* G_B4_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t2843939325* G_B6_2 = NULL;
	ObjectU5BU5D_t2843939325* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9)));
		String_t* L_1 = Request_ToString_m2900465251(__this, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_1);
		ObjectU5BU5D_t2843939325* L_2 = L_0;
		String_t* L_3 = CreateMatchRequest_get_name_m2145735034(__this, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_3);
		ObjectU5BU5D_t2843939325* L_4 = L_2;
		uint32_t L_5 = CreateMatchRequest_get_size_m3980857567(__this, /*hidden argument*/NULL);
		uint32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(UInt32_t2560061978_il2cpp_TypeInfo_var, &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		ObjectU5BU5D_t2843939325* L_8 = L_4;
		String_t* L_9 = CreateMatchRequest_get_publicAddress_m3336041532(__this, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_9);
		ObjectU5BU5D_t2843939325* L_10 = L_8;
		String_t* L_11 = CreateMatchRequest_get_privateAddress_m3613518697(__this, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_11);
		ObjectU5BU5D_t2843939325* L_12 = L_10;
		int32_t L_13 = CreateMatchRequest_get_eloScore_m1485273462(__this, /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_14);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_15);
		ObjectU5BU5D_t2843939325* L_16 = L_12;
		bool L_17 = CreateMatchRequest_get_advertise_m865484440(__this, /*hidden argument*/NULL);
		bool L_18 = L_17;
		RuntimeObject * L_19 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_18);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_19);
		ObjectU5BU5D_t2843939325* L_20 = L_16;
		String_t* L_21 = CreateMatchRequest_get_password_m3435449282(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_22 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		G_B1_0 = 7;
		G_B1_1 = L_20;
		G_B1_2 = L_20;
		G_B1_3 = _stringLiteral753200322;
		if (!L_22)
		{
			G_B2_0 = 7;
			G_B2_1 = L_20;
			G_B2_2 = L_20;
			G_B2_3 = _stringLiteral753200322;
			goto IL_0077;
		}
	}
	{
		G_B3_0 = _stringLiteral3456874466;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_007c;
	}

IL_0077:
	{
		G_B3_0 = _stringLiteral2696477506;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_007c:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject *)G_B3_0);
		ObjectU5BU5D_t2843939325* L_23 = G_B3_3;
		Dictionary_2_t3521823603 * L_24 = CreateMatchRequest_get_matchAttributes_m3276240993(__this, /*hidden argument*/NULL);
		G_B4_0 = 8;
		G_B4_1 = L_23;
		G_B4_2 = L_23;
		G_B4_3 = G_B3_4;
		if (L_24)
		{
			G_B5_0 = 8;
			G_B5_1 = L_23;
			G_B5_2 = L_23;
			G_B5_3 = G_B3_4;
			goto IL_0090;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_009b;
	}

IL_0090:
	{
		Dictionary_2_t3521823603 * L_25 = CreateMatchRequest_get_matchAttributes_m3276240993(__this, /*hidden argument*/NULL);
		int32_t L_26 = Dictionary_2_get_Count_m1082800239(L_25, /*hidden argument*/Dictionary_2_get_Count_m1082800239_RuntimeMethod_var);
		G_B6_0 = L_26;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_009b:
	{
		int32_t L_27 = G_B6_0;
		RuntimeObject * L_28 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_27);
		ArrayElementTypeCheck (G_B6_2, L_28);
		(G_B6_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject *)L_28);
		String_t* L_29 = UnityString_Format_m261690510(NULL /*static, unused*/, G_B6_4, G_B6_3, /*hidden argument*/NULL);
		V_0 = L_29;
		goto IL_00ac;
	}

IL_00ac:
	{
		String_t* L_30 = V_0;
		return L_30;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::.ctor()
extern "C"  void CreateMatchResponse__ctor_m3223617620 (CreateMatchResponse_t1328247360 * __this, const RuntimeMethod* method)
{
	{
		BasicResponse__ctor_m3021811122(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchResponse::get_address()
extern "C"  String_t* CreateMatchResponse_get_address_m2586556876 (CreateMatchResponse_t1328247360 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CaddressU3Ek__BackingField_2();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_address(System.String)
extern "C"  void CreateMatchResponse_set_address_m1298421245 (CreateMatchResponse_t1328247360 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CaddressU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.CreateMatchResponse::get_port()
extern "C"  int32_t CreateMatchResponse_get_port_m4033119080 (CreateMatchResponse_t1328247360 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CportU3Ek__BackingField_3();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_port(System.Int32)
extern "C"  void CreateMatchResponse_set_port_m667344331 (CreateMatchResponse_t1328247360 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CportU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.CreateMatchResponse::get_domain()
extern "C"  int32_t CreateMatchResponse_get_domain_m2386171851 (CreateMatchResponse_t1328247360 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CdomainU3Ek__BackingField_4();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.CreateMatchResponse::get_networkId()
extern "C"  uint64_t CreateMatchResponse_get_networkId_m3705876485 (CreateMatchResponse_t1328247360 * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		uint64_t L_0 = __this->get_U3CnetworkIdU3Ek__BackingField_5();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		uint64_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C"  void CreateMatchResponse_set_networkId_m3779189147 (CreateMatchResponse_t1328247360 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___value0;
		__this->set_U3CnetworkIdU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchResponse::get_accessTokenString()
extern "C"  String_t* CreateMatchResponse_get_accessTokenString_m1012218612 (CreateMatchResponse_t1328247360 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CaccessTokenStringU3Ek__BackingField_6();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_accessTokenString(System.String)
extern "C"  void CreateMatchResponse_set_accessTokenString_m3004518143 (CreateMatchResponse_t1328247360 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CaccessTokenStringU3Ek__BackingField_6(L_0);
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.CreateMatchResponse::get_nodeId()
extern "C"  uint16_t CreateMatchResponse_get_nodeId_m1756638988 (CreateMatchResponse_t1328247360 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_U3CnodeIdU3Ek__BackingField_7();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C"  void CreateMatchResponse_set_nodeId_m1085561786 (CreateMatchResponse_t1328247360 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_U3CnodeIdU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.CreateMatchResponse::get_usingRelay()
extern "C"  bool CreateMatchResponse_get_usingRelay_m1664992420 (CreateMatchResponse_t1328247360 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_U3CusingRelayU3Ek__BackingField_8();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_usingRelay(System.Boolean)
extern "C"  void CreateMatchResponse_set_usingRelay_m3898155256 (CreateMatchResponse_t1328247360 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CusingRelayU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchResponse::ToString()
extern "C"  String_t* CreateMatchResponse_ToString_m2170760668 (CreateMatchResponse_t1328247360 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CreateMatchResponse_ToString_m2170760668_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	uint16_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)7));
		String_t* L_1 = Response_ToString_m2727218217(__this, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_1);
		ObjectU5BU5D_t2843939325* L_2 = L_0;
		String_t* L_3 = CreateMatchResponse_get_address_m2586556876(__this, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_3);
		ObjectU5BU5D_t2843939325* L_4 = L_2;
		int32_t L_5 = CreateMatchResponse_get_port_m4033119080(__this, /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		ObjectU5BU5D_t2843939325* L_8 = L_4;
		uint64_t L_9 = CreateMatchResponse_get_networkId_m3705876485(__this, /*hidden argument*/NULL);
		V_0 = L_9;
		RuntimeObject * L_10 = Box(NetworkID_t4216585621_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_11 = Enum_ToString_m2477889358((Enum_t4135868527 *)L_10, _stringLiteral3452614648, /*hidden argument*/NULL);
		V_0 = *(uint64_t*)UnBox(L_10);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_11);
		ObjectU5BU5D_t2843939325* L_12 = L_8;
		String_t* L_13 = CreateMatchResponse_get_accessTokenString_m1012218612(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_14 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		bool L_15 = L_14;
		RuntimeObject * L_16 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_15);
		ArrayElementTypeCheck (L_12, L_16);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_16);
		ObjectU5BU5D_t2843939325* L_17 = L_12;
		uint16_t L_18 = CreateMatchResponse_get_nodeId_m1756638988(__this, /*hidden argument*/NULL);
		V_1 = L_18;
		RuntimeObject * L_19 = Box(NodeID_t2347816311_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_20 = Enum_ToString_m2477889358((Enum_t4135868527 *)L_19, _stringLiteral3452614648, /*hidden argument*/NULL);
		V_1 = *(uint16_t*)UnBox(L_19);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_20);
		ObjectU5BU5D_t2843939325* L_21 = L_17;
		bool L_22 = CreateMatchResponse_get_usingRelay_m1664992420(__this, /*hidden argument*/NULL);
		bool L_23 = L_22;
		RuntimeObject * L_24 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_23);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_24);
		String_t* L_25 = UnityString_Format_m261690510(NULL /*static, unused*/, _stringLiteral3097465497, L_21, /*hidden argument*/NULL);
		V_2 = L_25;
		goto IL_0090;
	}

IL_0090:
	{
		String_t* L_26 = V_2;
		return L_26;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::Parse(System.Object)
extern "C"  void CreateMatchResponse_Parse_m2235063011 (CreateMatchResponse_t1328247360 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CreateMatchResponse_Parse_m2235063011_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		Response_Parse_m2983258584(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___obj0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, IDictionary_2_t1329213854_il2cpp_TypeInfo_var));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_008e;
		}
	}
	{
		RuntimeObject * L_3 = ___obj0;
		RuntimeObject* L_4 = V_0;
		String_t* L_5 = ResponseBase_ParseJSONString_m1155503459(__this, _stringLiteral2350156779, L_3, L_4, /*hidden argument*/NULL);
		CreateMatchResponse_set_address_m1298421245(__this, L_5, /*hidden argument*/NULL);
		RuntimeObject * L_6 = ___obj0;
		RuntimeObject* L_7 = V_0;
		int32_t L_8 = ResponseBase_ParseJSONInt32_m3954786687(__this, _stringLiteral1212291552, L_6, L_7, /*hidden argument*/NULL);
		CreateMatchResponse_set_port_m667344331(__this, L_8, /*hidden argument*/NULL);
		RuntimeObject * L_9 = ___obj0;
		RuntimeObject* L_10 = V_0;
		uint64_t L_11 = ResponseBase_ParseJSONUInt64_m607396206(__this, _stringLiteral2471453923, L_9, L_10, /*hidden argument*/NULL);
		CreateMatchResponse_set_networkId_m3779189147(__this, L_11, /*hidden argument*/NULL);
		RuntimeObject * L_12 = ___obj0;
		RuntimeObject* L_13 = V_0;
		String_t* L_14 = ResponseBase_ParseJSONString_m1155503459(__this, _stringLiteral2337841988, L_12, L_13, /*hidden argument*/NULL);
		CreateMatchResponse_set_accessTokenString_m3004518143(__this, L_14, /*hidden argument*/NULL);
		RuntimeObject * L_15 = ___obj0;
		RuntimeObject* L_16 = V_0;
		uint16_t L_17 = ResponseBase_ParseJSONUInt16_m3537693036(__this, _stringLiteral793118085, L_15, L_16, /*hidden argument*/NULL);
		CreateMatchResponse_set_nodeId_m1085561786(__this, L_17, /*hidden argument*/NULL);
		RuntimeObject * L_18 = ___obj0;
		RuntimeObject* L_19 = V_0;
		bool L_20 = ResponseBase_ParseJSONBool_m1289868847(__this, _stringLiteral2147339521, L_18, L_19, /*hidden argument*/NULL);
		CreateMatchResponse_set_usingRelay_m3898155256(__this, L_20, /*hidden argument*/NULL);
		goto IL_00a5;
	}

IL_008e:
	{
		RuntimeObject * L_21 = ___obj0;
		String_t* L_22 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral592613445, L_22, /*hidden argument*/NULL);
		FormatException_t154580423 * L_24 = (FormatException_t154580423 *)il2cpp_codegen_object_new(FormatException_t154580423_il2cpp_TypeInfo_var);
		FormatException__ctor_m4049685996(L_24, L_23, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, NULL, CreateMatchResponse_Parse_m2235063011_RuntimeMethod_var);
	}

IL_00a5:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.Match.DestroyMatchRequest::.ctor()
extern "C"  void DestroyMatchRequest__ctor_m327028137 (DestroyMatchRequest_t2124150613 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DestroyMatchRequest__ctor_m327028137_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Request_t2696089890_il2cpp_TypeInfo_var);
		Request__ctor_m873075042(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DestroyMatchRequest::get_networkId()
extern "C"  uint64_t DestroyMatchRequest_get_networkId_m1753108237 (DestroyMatchRequest_t2124150613 * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		uint64_t L_0 = __this->get_U3CnetworkIdU3Ek__BackingField_5();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		uint64_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.DestroyMatchRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C"  void DestroyMatchRequest_set_networkId_m2430913175 (DestroyMatchRequest_t2124150613 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___value0;
		__this->set_U3CnetworkIdU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.String UnityEngine.Networking.Match.DestroyMatchRequest::ToString()
extern "C"  String_t* DestroyMatchRequest_ToString_m3014217280 (DestroyMatchRequest_t2124150613 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DestroyMatchRequest_ToString_m3014217280_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		String_t* L_1 = Request_ToString_m2900465251(__this, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_1);
		ObjectU5BU5D_t2843939325* L_2 = L_0;
		uint64_t L_3 = DestroyMatchRequest_get_networkId_m1753108237(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		RuntimeObject * L_4 = Box(NetworkID_t4216585621_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_5 = Enum_ToString_m2477889358((Enum_t4135868527 *)L_4, _stringLiteral3452614648, /*hidden argument*/NULL);
		V_0 = *(uint64_t*)UnBox(L_4);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		String_t* L_6 = UnityString_Format_m261690510(NULL /*static, unused*/, _stringLiteral2101124098, L_2, /*hidden argument*/NULL);
		V_1 = L_6;
		goto IL_003c;
	}

IL_003c:
	{
		String_t* L_7 = V_1;
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.Match.DropConnectionRequest::.ctor()
extern "C"  void DropConnectionRequest__ctor_m2312219607 (DropConnectionRequest_t2647317937 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DropConnectionRequest__ctor_m2312219607_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Request_t2696089890_il2cpp_TypeInfo_var);
		Request__ctor_m873075042(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DropConnectionRequest::get_networkId()
extern "C"  uint64_t DropConnectionRequest_get_networkId_m2906146404 (DropConnectionRequest_t2647317937 * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		uint64_t L_0 = __this->get_U3CnetworkIdU3Ek__BackingField_5();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		uint64_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.DropConnectionRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C"  void DropConnectionRequest_set_networkId_m399344964 (DropConnectionRequest_t2647317937 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___value0;
		__this->set_U3CnetworkIdU3Ek__BackingField_5(L_0);
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.DropConnectionRequest::get_nodeId()
extern "C"  uint16_t DropConnectionRequest_get_nodeId_m2375409994 (DropConnectionRequest_t2647317937 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_U3CnodeIdU3Ek__BackingField_6();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.DropConnectionRequest::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C"  void DropConnectionRequest_set_nodeId_m2959951618 (DropConnectionRequest_t2647317937 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_U3CnodeIdU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.String UnityEngine.Networking.Match.DropConnectionRequest::ToString()
extern "C"  String_t* DropConnectionRequest_ToString_m973853606 (DropConnectionRequest_t2647317937 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DropConnectionRequest_ToString_m973853606_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	uint16_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)3));
		String_t* L_1 = Request_ToString_m2900465251(__this, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_1);
		ObjectU5BU5D_t2843939325* L_2 = L_0;
		uint64_t L_3 = DropConnectionRequest_get_networkId_m2906146404(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		RuntimeObject * L_4 = Box(NetworkID_t4216585621_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_5 = Enum_ToString_m2477889358((Enum_t4135868527 *)L_4, _stringLiteral3452614648, /*hidden argument*/NULL);
		V_0 = *(uint64_t*)UnBox(L_4);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_t2843939325* L_6 = L_2;
		uint16_t L_7 = DropConnectionRequest_get_nodeId_m2375409994(__this, /*hidden argument*/NULL);
		V_1 = L_7;
		RuntimeObject * L_8 = Box(NodeID_t2347816311_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_9 = Enum_ToString_m2477889358((Enum_t4135868527 *)L_8, _stringLiteral3452614648, /*hidden argument*/NULL);
		V_1 = *(uint16_t*)UnBox(L_8);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_9);
		String_t* L_10 = UnityString_Format_m261690510(NULL /*static, unused*/, _stringLiteral4039479833, L_6, /*hidden argument*/NULL);
		V_2 = L_10;
		goto IL_0058;
	}

IL_0058:
	{
		String_t* L_11 = V_2;
		return L_11;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.Match.DropConnectionResponse::.ctor()
extern "C"  void DropConnectionResponse__ctor_m921258081 (DropConnectionResponse_t3571632289 * __this, const RuntimeMethod* method)
{
	{
		Response__ctor_m1005354347(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DropConnectionResponse::get_networkId()
extern "C"  uint64_t DropConnectionResponse_get_networkId_m778172076 (DropConnectionResponse_t3571632289 * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		uint64_t L_0 = __this->get_U3CnetworkIdU3Ek__BackingField_2();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		uint64_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.DropConnectionResponse::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C"  void DropConnectionResponse_set_networkId_m2043961426 (DropConnectionResponse_t3571632289 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___value0;
		__this->set_U3CnetworkIdU3Ek__BackingField_2(L_0);
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.DropConnectionResponse::get_nodeId()
extern "C"  uint16_t DropConnectionResponse_get_nodeId_m1281904853 (DropConnectionResponse_t3571632289 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_U3CnodeIdU3Ek__BackingField_3();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.DropConnectionResponse::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C"  void DropConnectionResponse_set_nodeId_m117407726 (DropConnectionResponse_t3571632289 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_U3CnodeIdU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.String UnityEngine.Networking.Match.DropConnectionResponse::ToString()
extern "C"  String_t* DropConnectionResponse_ToString_m463686848 (DropConnectionResponse_t3571632289 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DropConnectionResponse_ToString_m463686848_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		String_t* L_1 = Response_ToString_m2727218217(__this, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_1);
		ObjectU5BU5D_t2843939325* L_2 = L_0;
		uint64_t L_3 = DropConnectionResponse_get_networkId_m778172076(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		RuntimeObject * L_4 = Box(NetworkID_t4216585621_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_5 = Enum_ToString_m2477889358((Enum_t4135868527 *)L_4, _stringLiteral3452614648, /*hidden argument*/NULL);
		V_0 = *(uint64_t*)UnBox(L_4);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		String_t* L_6 = UnityString_Format_m261690510(NULL /*static, unused*/, _stringLiteral3347455858, L_2, /*hidden argument*/NULL);
		V_1 = L_6;
		goto IL_003c;
	}

IL_003c:
	{
		String_t* L_7 = V_1;
		return L_7;
	}
}
// System.Void UnityEngine.Networking.Match.DropConnectionResponse::Parse(System.Object)
extern "C"  void DropConnectionResponse_Parse_m1461665891 (DropConnectionResponse_t3571632289 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DropConnectionResponse_Parse_m1461665891_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		Response_Parse_m2983258584(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___obj0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, IDictionary_2_t1329213854_il2cpp_TypeInfo_var));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject * L_3 = ___obj0;
		RuntimeObject* L_4 = V_0;
		uint64_t L_5 = ResponseBase_ParseJSONUInt64_m607396206(__this, _stringLiteral2471453923, L_3, L_4, /*hidden argument*/NULL);
		DropConnectionResponse_set_networkId_m2043961426(__this, L_5, /*hidden argument*/NULL);
		RuntimeObject * L_6 = ___obj0;
		RuntimeObject* L_7 = V_0;
		uint16_t L_8 = ResponseBase_ParseJSONUInt16_m3537693036(__this, _stringLiteral793118085, L_6, L_7, /*hidden argument*/NULL);
		DropConnectionResponse_set_nodeId_m117407726(__this, L_8, /*hidden argument*/NULL);
		goto IL_0059;
	}

IL_0042:
	{
		RuntimeObject * L_9 = ___obj0;
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral592613445, L_10, /*hidden argument*/NULL);
		FormatException_t154580423 * L_12 = (FormatException_t154580423 *)il2cpp_codegen_object_new(FormatException_t154580423_il2cpp_TypeInfo_var);
		FormatException__ctor_m4049685996(L_12, L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, NULL, DropConnectionResponse_Parse_m1461665891_RuntimeMethod_var);
	}

IL_0059:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::.ctor()
extern "C"  void JoinMatchRequest__ctor_m929255344 (JoinMatchRequest_t3991767598 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JoinMatchRequest__ctor_m929255344_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Request_t2696089890_il2cpp_TypeInfo_var);
		Request__ctor_m873075042(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.JoinMatchRequest::get_networkId()
extern "C"  uint64_t JoinMatchRequest_get_networkId_m2534671775 (JoinMatchRequest_t3991767598 * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		uint64_t L_0 = __this->get_U3CnetworkIdU3Ek__BackingField_5();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		uint64_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C"  void JoinMatchRequest_set_networkId_m1582426564 (JoinMatchRequest_t3991767598 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___value0;
		__this->set_U3CnetworkIdU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchRequest::get_publicAddress()
extern "C"  String_t* JoinMatchRequest_get_publicAddress_m3644611049 (JoinMatchRequest_t3991767598 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CpublicAddressU3Ek__BackingField_6();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_publicAddress(System.String)
extern "C"  void JoinMatchRequest_set_publicAddress_m3396720139 (JoinMatchRequest_t3991767598 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CpublicAddressU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchRequest::get_privateAddress()
extern "C"  String_t* JoinMatchRequest_get_privateAddress_m664578272 (JoinMatchRequest_t3991767598 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CprivateAddressU3Ek__BackingField_7();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_privateAddress(System.String)
extern "C"  void JoinMatchRequest_set_privateAddress_m2598128522 (JoinMatchRequest_t3991767598 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CprivateAddressU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.JoinMatchRequest::get_eloScore()
extern "C"  int32_t JoinMatchRequest_get_eloScore_m1107868278 (JoinMatchRequest_t3991767598 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CeloScoreU3Ek__BackingField_8();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_eloScore(System.Int32)
extern "C"  void JoinMatchRequest_set_eloScore_m3728163236 (JoinMatchRequest_t3991767598 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CeloScoreU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchRequest::get_password()
extern "C"  String_t* JoinMatchRequest_get_password_m2718232171 (JoinMatchRequest_t3991767598 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CpasswordU3Ek__BackingField_9();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_password(System.String)
extern "C"  void JoinMatchRequest_set_password_m3230348675 (JoinMatchRequest_t3991767598 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CpasswordU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchRequest::ToString()
extern "C"  String_t* JoinMatchRequest_ToString_m1421470052 (JoinMatchRequest_t3991767598 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JoinMatchRequest_ToString_m1421470052_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t2843939325* G_B2_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t2843939325* G_B1_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t2843939325* G_B3_2 = NULL;
	ObjectU5BU5D_t2843939325* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)6));
		String_t* L_1 = Request_ToString_m2900465251(__this, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_1);
		ObjectU5BU5D_t2843939325* L_2 = L_0;
		uint64_t L_3 = JoinMatchRequest_get_networkId_m2534671775(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		RuntimeObject * L_4 = Box(NetworkID_t4216585621_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_5 = Enum_ToString_m2477889358((Enum_t4135868527 *)L_4, _stringLiteral3452614648, /*hidden argument*/NULL);
		V_0 = *(uint64_t*)UnBox(L_4);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_t2843939325* L_6 = L_2;
		String_t* L_7 = JoinMatchRequest_get_publicAddress_m3644611049(__this, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		ObjectU5BU5D_t2843939325* L_8 = L_6;
		String_t* L_9 = JoinMatchRequest_get_privateAddress_m664578272(__this, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_9);
		ObjectU5BU5D_t2843939325* L_10 = L_8;
		int32_t L_11 = JoinMatchRequest_get_eloScore_m1107868278(__this, /*hidden argument*/NULL);
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_12);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_13);
		ObjectU5BU5D_t2843939325* L_14 = L_10;
		String_t* L_15 = JoinMatchRequest_get_password_m2718232171(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_16 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		G_B1_0 = 5;
		G_B1_1 = L_14;
		G_B1_2 = L_14;
		G_B1_3 = _stringLiteral1439649509;
		if (!L_16)
		{
			G_B2_0 = 5;
			G_B2_1 = L_14;
			G_B2_2 = L_14;
			G_B2_3 = _stringLiteral1439649509;
			goto IL_006d;
		}
	}
	{
		G_B3_0 = _stringLiteral3456874466;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0072;
	}

IL_006d:
	{
		G_B3_0 = _stringLiteral2696477506;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0072:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject *)G_B3_0);
		String_t* L_17 = UnityString_Format_m261690510(NULL /*static, unused*/, G_B3_4, G_B3_3, /*hidden argument*/NULL);
		V_1 = L_17;
		goto IL_007e;
	}

IL_007e:
	{
		String_t* L_18 = V_1;
		return L_18;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::.ctor()
extern "C"  void JoinMatchResponse__ctor_m29151454 (JoinMatchResponse_t845270609 * __this, const RuntimeMethod* method)
{
	{
		BasicResponse__ctor_m3021811122(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchResponse::get_address()
extern "C"  String_t* JoinMatchResponse_get_address_m354689537 (JoinMatchResponse_t845270609 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CaddressU3Ek__BackingField_2();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_address(System.String)
extern "C"  void JoinMatchResponse_set_address_m3790037850 (JoinMatchResponse_t845270609 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CaddressU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.JoinMatchResponse::get_port()
extern "C"  int32_t JoinMatchResponse_get_port_m3002546777 (JoinMatchResponse_t845270609 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CportU3Ek__BackingField_3();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_port(System.Int32)
extern "C"  void JoinMatchResponse_set_port_m3174583991 (JoinMatchResponse_t845270609 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CportU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.JoinMatchResponse::get_domain()
extern "C"  int32_t JoinMatchResponse_get_domain_m1174913480 (JoinMatchResponse_t845270609 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CdomainU3Ek__BackingField_4();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.JoinMatchResponse::get_networkId()
extern "C"  uint64_t JoinMatchResponse_get_networkId_m3394264089 (JoinMatchResponse_t845270609 * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		uint64_t L_0 = __this->get_U3CnetworkIdU3Ek__BackingField_5();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		uint64_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C"  void JoinMatchResponse_set_networkId_m2307287695 (JoinMatchResponse_t845270609 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___value0;
		__this->set_U3CnetworkIdU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchResponse::get_accessTokenString()
extern "C"  String_t* JoinMatchResponse_get_accessTokenString_m2145669779 (JoinMatchResponse_t845270609 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CaccessTokenStringU3Ek__BackingField_6();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_accessTokenString(System.String)
extern "C"  void JoinMatchResponse_set_accessTokenString_m2553303280 (JoinMatchResponse_t845270609 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CaccessTokenStringU3Ek__BackingField_6(L_0);
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.JoinMatchResponse::get_nodeId()
extern "C"  uint16_t JoinMatchResponse_get_nodeId_m1797413455 (JoinMatchResponse_t845270609 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_U3CnodeIdU3Ek__BackingField_7();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C"  void JoinMatchResponse_set_nodeId_m1545694507 (JoinMatchResponse_t845270609 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_U3CnodeIdU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.JoinMatchResponse::get_usingRelay()
extern "C"  bool JoinMatchResponse_get_usingRelay_m193800465 (JoinMatchResponse_t845270609 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_U3CusingRelayU3Ek__BackingField_8();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_usingRelay(System.Boolean)
extern "C"  void JoinMatchResponse_set_usingRelay_m1722520532 (JoinMatchResponse_t845270609 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CusingRelayU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchResponse::ToString()
extern "C"  String_t* JoinMatchResponse_ToString_m3412211677 (JoinMatchResponse_t845270609 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JoinMatchResponse_ToString_m3412211677_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	uint16_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)7));
		String_t* L_1 = Response_ToString_m2727218217(__this, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_1);
		ObjectU5BU5D_t2843939325* L_2 = L_0;
		String_t* L_3 = JoinMatchResponse_get_address_m354689537(__this, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_3);
		ObjectU5BU5D_t2843939325* L_4 = L_2;
		int32_t L_5 = JoinMatchResponse_get_port_m3002546777(__this, /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		ObjectU5BU5D_t2843939325* L_8 = L_4;
		uint64_t L_9 = JoinMatchResponse_get_networkId_m3394264089(__this, /*hidden argument*/NULL);
		V_0 = L_9;
		RuntimeObject * L_10 = Box(NetworkID_t4216585621_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_11 = Enum_ToString_m2477889358((Enum_t4135868527 *)L_10, _stringLiteral3452614648, /*hidden argument*/NULL);
		V_0 = *(uint64_t*)UnBox(L_10);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_11);
		ObjectU5BU5D_t2843939325* L_12 = L_8;
		String_t* L_13 = JoinMatchResponse_get_accessTokenString_m2145669779(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_14 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		bool L_15 = L_14;
		RuntimeObject * L_16 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_15);
		ArrayElementTypeCheck (L_12, L_16);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_16);
		ObjectU5BU5D_t2843939325* L_17 = L_12;
		uint16_t L_18 = JoinMatchResponse_get_nodeId_m1797413455(__this, /*hidden argument*/NULL);
		V_1 = L_18;
		RuntimeObject * L_19 = Box(NodeID_t2347816311_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_20 = Enum_ToString_m2477889358((Enum_t4135868527 *)L_19, _stringLiteral3452614648, /*hidden argument*/NULL);
		V_1 = *(uint16_t*)UnBox(L_19);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_20);
		ObjectU5BU5D_t2843939325* L_21 = L_17;
		bool L_22 = JoinMatchResponse_get_usingRelay_m193800465(__this, /*hidden argument*/NULL);
		bool L_23 = L_22;
		RuntimeObject * L_24 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_23);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_24);
		String_t* L_25 = UnityString_Format_m261690510(NULL /*static, unused*/, _stringLiteral3097465497, L_21, /*hidden argument*/NULL);
		V_2 = L_25;
		goto IL_0090;
	}

IL_0090:
	{
		String_t* L_26 = V_2;
		return L_26;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::Parse(System.Object)
extern "C"  void JoinMatchResponse_Parse_m1028678277 (JoinMatchResponse_t845270609 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JoinMatchResponse_Parse_m1028678277_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		Response_Parse_m2983258584(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___obj0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, IDictionary_2_t1329213854_il2cpp_TypeInfo_var));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_008e;
		}
	}
	{
		RuntimeObject * L_3 = ___obj0;
		RuntimeObject* L_4 = V_0;
		String_t* L_5 = ResponseBase_ParseJSONString_m1155503459(__this, _stringLiteral2350156779, L_3, L_4, /*hidden argument*/NULL);
		JoinMatchResponse_set_address_m3790037850(__this, L_5, /*hidden argument*/NULL);
		RuntimeObject * L_6 = ___obj0;
		RuntimeObject* L_7 = V_0;
		int32_t L_8 = ResponseBase_ParseJSONInt32_m3954786687(__this, _stringLiteral1212291552, L_6, L_7, /*hidden argument*/NULL);
		JoinMatchResponse_set_port_m3174583991(__this, L_8, /*hidden argument*/NULL);
		RuntimeObject * L_9 = ___obj0;
		RuntimeObject* L_10 = V_0;
		uint64_t L_11 = ResponseBase_ParseJSONUInt64_m607396206(__this, _stringLiteral2471453923, L_9, L_10, /*hidden argument*/NULL);
		JoinMatchResponse_set_networkId_m2307287695(__this, L_11, /*hidden argument*/NULL);
		RuntimeObject * L_12 = ___obj0;
		RuntimeObject* L_13 = V_0;
		String_t* L_14 = ResponseBase_ParseJSONString_m1155503459(__this, _stringLiteral2337841988, L_12, L_13, /*hidden argument*/NULL);
		JoinMatchResponse_set_accessTokenString_m2553303280(__this, L_14, /*hidden argument*/NULL);
		RuntimeObject * L_15 = ___obj0;
		RuntimeObject* L_16 = V_0;
		uint16_t L_17 = ResponseBase_ParseJSONUInt16_m3537693036(__this, _stringLiteral793118085, L_15, L_16, /*hidden argument*/NULL);
		JoinMatchResponse_set_nodeId_m1545694507(__this, L_17, /*hidden argument*/NULL);
		RuntimeObject * L_18 = ___obj0;
		RuntimeObject* L_19 = V_0;
		bool L_20 = ResponseBase_ParseJSONBool_m1289868847(__this, _stringLiteral2147339521, L_18, L_19, /*hidden argument*/NULL);
		JoinMatchResponse_set_usingRelay_m1722520532(__this, L_20, /*hidden argument*/NULL);
		goto IL_00a5;
	}

IL_008e:
	{
		RuntimeObject * L_21 = ___obj0;
		String_t* L_22 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral592613445, L_22, /*hidden argument*/NULL);
		FormatException_t154580423 * L_24 = (FormatException_t154580423 *)il2cpp_codegen_object_new(FormatException_t154580423_il2cpp_TypeInfo_var);
		FormatException__ctor_m4049685996(L_24, L_23, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, NULL, JoinMatchResponse_Parse_m1028678277_RuntimeMethod_var);
	}

IL_00a5:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.Match.ListMatchRequest::.ctor()
extern "C"  void ListMatchRequest__ctor_m189544352 (ListMatchRequest_t1588429355 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListMatchRequest__ctor_m189544352_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Request_t2696089890_il2cpp_TypeInfo_var);
		Request__ctor_m873075042(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_pageSize()
extern "C"  int32_t ListMatchRequest_get_pageSize_m3055718048 (ListMatchRequest_t1588429355 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CpageSizeU3Ek__BackingField_5();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_pageSize(System.Int32)
extern "C"  void ListMatchRequest_set_pageSize_m2542353962 (ListMatchRequest_t1588429355 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CpageSizeU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_pageNum()
extern "C"  int32_t ListMatchRequest_get_pageNum_m3084306515 (ListMatchRequest_t1588429355 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CpageNumU3Ek__BackingField_6();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_pageNum(System.Int32)
extern "C"  void ListMatchRequest_set_pageNum_m714424921 (ListMatchRequest_t1588429355 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CpageNumU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.String UnityEngine.Networking.Match.ListMatchRequest::get_nameFilter()
extern "C"  String_t* ListMatchRequest_get_nameFilter_m1921865349 (ListMatchRequest_t1588429355 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CnameFilterU3Ek__BackingField_7();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_nameFilter(System.String)
extern "C"  void ListMatchRequest_set_nameFilter_m3455577482 (ListMatchRequest_t1588429355 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameFilterU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.ListMatchRequest::get_filterOutPrivateMatches()
extern "C"  bool ListMatchRequest_get_filterOutPrivateMatches_m702074324 (ListMatchRequest_t1588429355 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_U3CfilterOutPrivateMatchesU3Ek__BackingField_8();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_filterOutPrivateMatches(System.Boolean)
extern "C"  void ListMatchRequest_set_filterOutPrivateMatches_m242262970 (ListMatchRequest_t1588429355 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CfilterOutPrivateMatchesU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_eloScore()
extern "C"  int32_t ListMatchRequest_get_eloScore_m2377257860 (ListMatchRequest_t1588429355 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CeloScoreU3Ek__BackingField_9();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_eloScore(System.Int32)
extern "C"  void ListMatchRequest_set_eloScore_m2096908822 (ListMatchRequest_t1588429355 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CeloScoreU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterLessThan()
extern "C"  Dictionary_2_t3521823603 * ListMatchRequest_get_matchAttributeFilterLessThan_m369421819 (ListMatchRequest_t1588429355 * __this, const RuntimeMethod* method)
{
	Dictionary_2_t3521823603 * V_0 = NULL;
	{
		Dictionary_2_t3521823603 * L_0 = __this->get_U3CmatchAttributeFilterLessThanU3Ek__BackingField_10();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Dictionary_2_t3521823603 * L_1 = V_0;
		return L_1;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterEqualTo()
extern "C"  Dictionary_2_t3521823603 * ListMatchRequest_get_matchAttributeFilterEqualTo_m2609736901 (ListMatchRequest_t1588429355 * __this, const RuntimeMethod* method)
{
	Dictionary_2_t3521823603 * V_0 = NULL;
	{
		Dictionary_2_t3521823603 * L_0 = __this->get_U3CmatchAttributeFilterEqualToU3Ek__BackingField_11();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Dictionary_2_t3521823603 * L_1 = V_0;
		return L_1;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterGreaterThan()
extern "C"  Dictionary_2_t3521823603 * ListMatchRequest_get_matchAttributeFilterGreaterThan_m2040637691 (ListMatchRequest_t1588429355 * __this, const RuntimeMethod* method)
{
	Dictionary_2_t3521823603 * V_0 = NULL;
	{
		Dictionary_2_t3521823603 * L_0 = __this->get_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField_12();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Dictionary_2_t3521823603 * L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Networking.Match.ListMatchRequest::ToString()
extern "C"  String_t* ListMatchRequest_ToString_m1671513149 (ListMatchRequest_t1588429355 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListMatchRequest_ToString_m1671513149_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t2843939325* G_B2_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t2843939325* G_B1_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t2843939325* G_B3_2 = NULL;
	ObjectU5BU5D_t2843939325* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t2843939325* G_B5_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t2843939325* G_B4_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t2843939325* G_B6_2 = NULL;
	ObjectU5BU5D_t2843939325* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	int32_t G_B8_0 = 0;
	ObjectU5BU5D_t2843939325* G_B8_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B8_2 = NULL;
	String_t* G_B8_3 = NULL;
	int32_t G_B7_0 = 0;
	ObjectU5BU5D_t2843939325* G_B7_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B7_2 = NULL;
	String_t* G_B7_3 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	ObjectU5BU5D_t2843939325* G_B9_2 = NULL;
	ObjectU5BU5D_t2843939325* G_B9_3 = NULL;
	String_t* G_B9_4 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9)));
		String_t* L_1 = Request_ToString_m2900465251(__this, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_1);
		ObjectU5BU5D_t2843939325* L_2 = L_0;
		int32_t L_3 = ListMatchRequest_get_pageSize_m3055718048(__this, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_t2843939325* L_6 = L_2;
		int32_t L_7 = ListMatchRequest_get_pageNum_m3084306515(__this, /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_8);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_9);
		ObjectU5BU5D_t2843939325* L_10 = L_6;
		String_t* L_11 = ListMatchRequest_get_nameFilter_m1921865349(__this, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_11);
		ObjectU5BU5D_t2843939325* L_12 = L_10;
		bool L_13 = ListMatchRequest_get_filterOutPrivateMatches_m702074324(__this, /*hidden argument*/NULL);
		bool L_14 = L_13;
		RuntimeObject * L_15 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_14);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_15);
		ObjectU5BU5D_t2843939325* L_16 = L_12;
		int32_t L_17 = ListMatchRequest_get_eloScore_m2377257860(__this, /*hidden argument*/NULL);
		int32_t L_18 = L_17;
		RuntimeObject * L_19 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_18);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_19);
		ObjectU5BU5D_t2843939325* L_20 = L_16;
		Dictionary_2_t3521823603 * L_21 = ListMatchRequest_get_matchAttributeFilterLessThan_m369421819(__this, /*hidden argument*/NULL);
		G_B1_0 = 6;
		G_B1_1 = L_20;
		G_B1_2 = L_20;
		G_B1_3 = _stringLiteral1112616250;
		if (L_21)
		{
			G_B2_0 = 6;
			G_B2_1 = L_20;
			G_B2_2 = L_20;
			G_B2_3 = _stringLiteral1112616250;
			goto IL_006a;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0075;
	}

IL_006a:
	{
		Dictionary_2_t3521823603 * L_22 = ListMatchRequest_get_matchAttributeFilterLessThan_m369421819(__this, /*hidden argument*/NULL);
		int32_t L_23 = Dictionary_2_get_Count_m1082800239(L_22, /*hidden argument*/Dictionary_2_get_Count_m1082800239_RuntimeMethod_var);
		G_B3_0 = L_23;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0075:
	{
		int32_t L_24 = G_B3_0;
		RuntimeObject * L_25 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_24);
		ArrayElementTypeCheck (G_B3_2, L_25);
		(G_B3_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject *)L_25);
		ObjectU5BU5D_t2843939325* L_26 = G_B3_3;
		Dictionary_2_t3521823603 * L_27 = ListMatchRequest_get_matchAttributeFilterEqualTo_m2609736901(__this, /*hidden argument*/NULL);
		G_B4_0 = 7;
		G_B4_1 = L_26;
		G_B4_2 = L_26;
		G_B4_3 = G_B3_4;
		if (L_27)
		{
			G_B5_0 = 7;
			G_B5_1 = L_26;
			G_B5_2 = L_26;
			G_B5_3 = G_B3_4;
			goto IL_008e;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_0099;
	}

IL_008e:
	{
		Dictionary_2_t3521823603 * L_28 = ListMatchRequest_get_matchAttributeFilterEqualTo_m2609736901(__this, /*hidden argument*/NULL);
		int32_t L_29 = Dictionary_2_get_Count_m1082800239(L_28, /*hidden argument*/Dictionary_2_get_Count_m1082800239_RuntimeMethod_var);
		G_B6_0 = L_29;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_0099:
	{
		int32_t L_30 = G_B6_0;
		RuntimeObject * L_31 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_30);
		ArrayElementTypeCheck (G_B6_2, L_31);
		(G_B6_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject *)L_31);
		ObjectU5BU5D_t2843939325* L_32 = G_B6_3;
		Dictionary_2_t3521823603 * L_33 = ListMatchRequest_get_matchAttributeFilterGreaterThan_m2040637691(__this, /*hidden argument*/NULL);
		G_B7_0 = 8;
		G_B7_1 = L_32;
		G_B7_2 = L_32;
		G_B7_3 = G_B6_4;
		if (L_33)
		{
			G_B8_0 = 8;
			G_B8_1 = L_32;
			G_B8_2 = L_32;
			G_B8_3 = G_B6_4;
			goto IL_00b2;
		}
	}
	{
		G_B9_0 = 0;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		G_B9_4 = G_B7_3;
		goto IL_00bd;
	}

IL_00b2:
	{
		Dictionary_2_t3521823603 * L_34 = ListMatchRequest_get_matchAttributeFilterGreaterThan_m2040637691(__this, /*hidden argument*/NULL);
		int32_t L_35 = Dictionary_2_get_Count_m1082800239(L_34, /*hidden argument*/Dictionary_2_get_Count_m1082800239_RuntimeMethod_var);
		G_B9_0 = L_35;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
		G_B9_4 = G_B8_3;
	}

IL_00bd:
	{
		int32_t L_36 = G_B9_0;
		RuntimeObject * L_37 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_36);
		ArrayElementTypeCheck (G_B9_2, L_37);
		(G_B9_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B9_1), (RuntimeObject *)L_37);
		String_t* L_38 = UnityString_Format_m261690510(NULL /*static, unused*/, G_B9_4, G_B9_3, /*hidden argument*/NULL);
		V_0 = L_38;
		goto IL_00ce;
	}

IL_00ce:
	{
		String_t* L_39 = V_0;
		return L_39;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.Match.ListMatchResponse::.ctor()
extern "C"  void ListMatchResponse__ctor_m1031598034 (ListMatchResponse_t3200990838 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListMatchResponse__ctor_m1031598034_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		BasicResponse__ctor_m3021811122(__this, /*hidden argument*/NULL);
		List_1_t1004336143 * L_0 = (List_1_t1004336143 *)il2cpp_codegen_object_new(List_1_t1004336143_il2cpp_TypeInfo_var);
		List_1__ctor_m2320846806(L_0, /*hidden argument*/List_1__ctor_m2320846806_RuntimeMethod_var);
		ListMatchResponse_set_matches_m2209334367(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc> UnityEngine.Networking.Match.ListMatchResponse::get_matches()
extern "C"  List_1_t1004336143 * ListMatchResponse_get_matches_m2872681810 (ListMatchResponse_t3200990838 * __this, const RuntimeMethod* method)
{
	List_1_t1004336143 * V_0 = NULL;
	{
		List_1_t1004336143 * L_0 = __this->get_U3CmatchesU3Ek__BackingField_2();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		List_1_t1004336143 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchResponse::set_matches(System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>)
extern "C"  void ListMatchResponse_set_matches_m2209334367 (ListMatchResponse_t3200990838 * __this, List_1_t1004336143 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_t1004336143 * L_0 = ___value0;
		__this->set_U3CmatchesU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String UnityEngine.Networking.Match.ListMatchResponse::ToString()
extern "C"  String_t* ListMatchResponse_ToString_m3673418885 (ListMatchResponse_t3200990838 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListMatchResponse_ToString_m3673418885_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t2843939325* G_B2_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t2843939325* G_B1_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t2843939325* G_B3_2 = NULL;
	ObjectU5BU5D_t2843939325* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		String_t* L_1 = Response_ToString_m2727218217(__this, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_1);
		ObjectU5BU5D_t2843939325* L_2 = L_0;
		List_1_t1004336143 * L_3 = ListMatchResponse_get_matches_m2872681810(__this, /*hidden argument*/NULL);
		G_B1_0 = 1;
		G_B1_1 = L_2;
		G_B1_2 = L_2;
		G_B1_3 = _stringLiteral200980691;
		if (L_3)
		{
			G_B2_0 = 1;
			G_B2_1 = L_2;
			G_B2_2 = L_2;
			G_B2_3 = _stringLiteral200980691;
			goto IL_0028;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0033;
	}

IL_0028:
	{
		List_1_t1004336143 * L_4 = ListMatchResponse_get_matches_m2872681810(__this, /*hidden argument*/NULL);
		int32_t L_5 = List_1_get_Count_m119633916(L_4, /*hidden argument*/List_1_get_Count_m119633916_RuntimeMethod_var);
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0033:
	{
		int32_t L_6 = G_B3_0;
		RuntimeObject * L_7 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_6);
		ArrayElementTypeCheck (G_B3_2, L_7);
		(G_B3_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject *)L_7);
		String_t* L_8 = UnityString_Format_m261690510(NULL /*static, unused*/, G_B3_4, G_B3_3, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0044;
	}

IL_0044:
	{
		String_t* L_9 = V_0;
		return L_9;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchResponse::Parse(System.Object)
extern "C"  void ListMatchResponse_Parse_m4153004001 (ListMatchResponse_t3200990838 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListMatchResponse_Parse_m4153004001_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		Response_Parse_m2983258584(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___obj0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, IDictionary_2_t1329213854_il2cpp_TypeInfo_var));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		RuntimeObject * L_3 = ___obj0;
		RuntimeObject* L_4 = V_0;
		List_1_t1004336143 * L_5 = ResponseBase_ParseJSONList_TisMatchDesc_t3827228697_m1735849380(__this, _stringLiteral4026310890, L_3, L_4, /*hidden argument*/ResponseBase_ParseJSONList_TisMatchDesc_t3827228697_m1735849380_RuntimeMethod_var);
		ListMatchResponse_set_matches_m2209334367(__this, L_5, /*hidden argument*/NULL);
		goto IL_0046;
	}

IL_002f:
	{
		RuntimeObject * L_6 = ___obj0;
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral592613445, L_7, /*hidden argument*/NULL);
		FormatException_t154580423 * L_9 = (FormatException_t154580423 *)il2cpp_codegen_object_new(FormatException_t154580423_il2cpp_TypeInfo_var);
		FormatException__ctor_m4049685996(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, ListMatchResponse_Parse_m4153004001_RuntimeMethod_var);
	}

IL_0046:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.Match.MatchDesc::.ctor()
extern "C"  void MatchDesc__ctor_m2893606109 (MatchDesc_t3827228697 * __this, const RuntimeMethod* method)
{
	{
		ResponseBase__ctor_m3542648275(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.MatchDesc::get_networkId()
extern "C"  uint64_t MatchDesc_get_networkId_m3617176384 (MatchDesc_t3827228697 * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		uint64_t L_0 = __this->get_U3CnetworkIdU3Ek__BackingField_0();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		uint64_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C"  void MatchDesc_set_networkId_m1506267256 (MatchDesc_t3827228697 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___value0;
		__this->set_U3CnetworkIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDesc::get_name()
extern "C"  String_t* MatchDesc_get_name_m1687824342 (MatchDesc_t3827228697 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CnameU3Ek__BackingField_1();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_name(System.String)
extern "C"  void MatchDesc_set_name_m1393859823 (MatchDesc_t3827228697 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_averageEloScore()
extern "C"  int32_t MatchDesc_get_averageEloScore_m408805692 (MatchDesc_t3827228697 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CaverageEloScoreU3Ek__BackingField_2();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_averageEloScore(System.Int32)
extern "C"  void MatchDesc_set_averageEloScore_m1052582910 (MatchDesc_t3827228697 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CaverageEloScoreU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_maxSize()
extern "C"  int32_t MatchDesc_get_maxSize_m2265962323 (MatchDesc_t3827228697 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CmaxSizeU3Ek__BackingField_3();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_maxSize(System.Int32)
extern "C"  void MatchDesc_set_maxSize_m3996499333 (MatchDesc_t3827228697 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CmaxSizeU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_currentSize()
extern "C"  int32_t MatchDesc_get_currentSize_m9145650 (MatchDesc_t3827228697 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CcurrentSizeU3Ek__BackingField_4();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_currentSize(System.Int32)
extern "C"  void MatchDesc_set_currentSize_m1599782322 (MatchDesc_t3827228697 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CcurrentSizeU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.MatchDesc::get_isPrivate()
extern "C"  bool MatchDesc_get_isPrivate_m3525868735 (MatchDesc_t3827228697 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_U3CisPrivateU3Ek__BackingField_5();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_isPrivate(System.Boolean)
extern "C"  void MatchDesc_set_isPrivate_m1090199307 (MatchDesc_t3827228697 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CisPrivateU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.MatchDesc::get_matchAttributes()
extern "C"  Dictionary_2_t3521823603 * MatchDesc_get_matchAttributes_m481045601 (MatchDesc_t3827228697 * __this, const RuntimeMethod* method)
{
	Dictionary_2_t3521823603 * V_0 = NULL;
	{
		Dictionary_2_t3521823603 * L_0 = __this->get_U3CmatchAttributesU3Ek__BackingField_6();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Dictionary_2_t3521823603 * L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchDesc::get_hostNodeId()
extern "C"  uint16_t MatchDesc_get_hostNodeId_m641289458 (MatchDesc_t3827228697 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_U3ChostNodeIdU3Ek__BackingField_7();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_hostNodeId(UnityEngine.Networking.Types.NodeID)
extern "C"  void MatchDesc_set_hostNodeId_m1443808085 (MatchDesc_t3827228697 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_U3ChostNodeIdU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo> UnityEngine.Networking.Match.MatchDesc::get_directConnectInfos()
extern "C"  List_1_t32447842 * MatchDesc_get_directConnectInfos_m210874281 (MatchDesc_t3827228697 * __this, const RuntimeMethod* method)
{
	List_1_t32447842 * V_0 = NULL;
	{
		List_1_t32447842 * L_0 = __this->get_U3CdirectConnectInfosU3Ek__BackingField_8();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		List_1_t32447842 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::set_directConnectInfos(System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>)
extern "C"  void MatchDesc_set_directConnectInfos_m1039210702 (MatchDesc_t3827228697 * __this, List_1_t32447842 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_t32447842 * L_0 = ___value0;
		__this->set_U3CdirectConnectInfosU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDesc::ToString()
extern "C"  String_t* MatchDesc_ToString_m354754803 (MatchDesc_t3827228697 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MatchDesc_ToString_m354754803_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t2843939325* G_B2_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t2843939325* G_B1_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t2843939325* G_B3_2 = NULL;
	ObjectU5BU5D_t2843939325* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10)));
		String_t* L_1 = Object_ToString_m1740002499(__this, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_1);
		ObjectU5BU5D_t2843939325* L_2 = L_0;
		uint64_t L_3 = MatchDesc_get_networkId_m3617176384(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		RuntimeObject * L_4 = Box(NetworkID_t4216585621_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_5 = Enum_ToString_m2477889358((Enum_t4135868527 *)L_4, _stringLiteral3452614648, /*hidden argument*/NULL);
		V_0 = *(uint64_t*)UnBox(L_4);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_t2843939325* L_6 = L_2;
		String_t* L_7 = MatchDesc_get_name_m1687824342(__this, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		ObjectU5BU5D_t2843939325* L_8 = L_6;
		int32_t L_9 = MatchDesc_get_averageEloScore_m408805692(__this, /*hidden argument*/NULL);
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_11);
		ObjectU5BU5D_t2843939325* L_12 = L_8;
		int32_t L_13 = MatchDesc_get_maxSize_m2265962323(__this, /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_14);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_15);
		ObjectU5BU5D_t2843939325* L_16 = L_12;
		int32_t L_17 = MatchDesc_get_currentSize_m9145650(__this, /*hidden argument*/NULL);
		int32_t L_18 = L_17;
		RuntimeObject * L_19 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_18);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_19);
		ObjectU5BU5D_t2843939325* L_20 = L_16;
		bool L_21 = MatchDesc_get_isPrivate_m3525868735(__this, /*hidden argument*/NULL);
		bool L_22 = L_21;
		RuntimeObject * L_23 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_22);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_23);
		ObjectU5BU5D_t2843939325* L_24 = L_20;
		Dictionary_2_t3521823603 * L_25 = MatchDesc_get_matchAttributes_m481045601(__this, /*hidden argument*/NULL);
		G_B1_0 = 7;
		G_B1_1 = L_24;
		G_B1_2 = L_24;
		G_B1_3 = _stringLiteral2091236560;
		if (L_25)
		{
			G_B2_0 = 7;
			G_B2_1 = L_24;
			G_B2_2 = L_24;
			G_B2_3 = _stringLiteral2091236560;
			goto IL_0086;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0091;
	}

IL_0086:
	{
		Dictionary_2_t3521823603 * L_26 = MatchDesc_get_matchAttributes_m481045601(__this, /*hidden argument*/NULL);
		int32_t L_27 = Dictionary_2_get_Count_m1082800239(L_26, /*hidden argument*/Dictionary_2_get_Count_m1082800239_RuntimeMethod_var);
		G_B3_0 = L_27;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0091:
	{
		int32_t L_28 = G_B3_0;
		RuntimeObject * L_29 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_28);
		ArrayElementTypeCheck (G_B3_2, L_29);
		(G_B3_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject *)L_29);
		ObjectU5BU5D_t2843939325* L_30 = G_B3_3;
		uint16_t L_31 = MatchDesc_get_hostNodeId_m641289458(__this, /*hidden argument*/NULL);
		uint16_t L_32 = L_31;
		RuntimeObject * L_33 = Box(NodeID_t2347816311_il2cpp_TypeInfo_var, &L_32);
		ArrayElementTypeCheck (L_30, L_33);
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)L_33);
		ObjectU5BU5D_t2843939325* L_34 = L_30;
		List_1_t32447842 * L_35 = MatchDesc_get_directConnectInfos_m210874281(__this, /*hidden argument*/NULL);
		int32_t L_36 = List_1_get_Count_m1160238088(L_35, /*hidden argument*/List_1_get_Count_m1160238088_RuntimeMethod_var);
		int32_t L_37 = L_36;
		RuntimeObject * L_38 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_37);
		ArrayElementTypeCheck (L_34, L_38);
		(L_34)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject *)L_38);
		String_t* L_39 = UnityString_Format_m261690510(NULL /*static, unused*/, G_B3_4, L_34, /*hidden argument*/NULL);
		V_1 = L_39;
		goto IL_00c4;
	}

IL_00c4:
	{
		String_t* L_40 = V_1;
		return L_40;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDesc::Parse(System.Object)
extern "C"  void MatchDesc_Parse_m664855799 (MatchDesc_t3827228697 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MatchDesc_Parse_m664855799_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IDictionary_2_t1329213854_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00ad;
		}
	}
	{
		RuntimeObject * L_2 = ___obj0;
		RuntimeObject* L_3 = V_0;
		uint64_t L_4 = ResponseBase_ParseJSONUInt64_m607396206(__this, _stringLiteral2471453923, L_2, L_3, /*hidden argument*/NULL);
		MatchDesc_set_networkId_m1506267256(__this, L_4, /*hidden argument*/NULL);
		RuntimeObject * L_5 = ___obj0;
		RuntimeObject* L_6 = V_0;
		String_t* L_7 = ResponseBase_ParseJSONString_m1155503459(__this, _stringLiteral62725243, L_5, L_6, /*hidden argument*/NULL);
		MatchDesc_set_name_m1393859823(__this, L_7, /*hidden argument*/NULL);
		RuntimeObject * L_8 = ___obj0;
		RuntimeObject* L_9 = V_0;
		int32_t L_10 = ResponseBase_ParseJSONInt32_m3954786687(__this, _stringLiteral1742997909, L_8, L_9, /*hidden argument*/NULL);
		MatchDesc_set_averageEloScore_m1052582910(__this, L_10, /*hidden argument*/NULL);
		RuntimeObject * L_11 = ___obj0;
		RuntimeObject* L_12 = V_0;
		int32_t L_13 = ResponseBase_ParseJSONInt32_m3954786687(__this, _stringLiteral3493283449, L_11, L_12, /*hidden argument*/NULL);
		MatchDesc_set_maxSize_m3996499333(__this, L_13, /*hidden argument*/NULL);
		RuntimeObject * L_14 = ___obj0;
		RuntimeObject* L_15 = V_0;
		int32_t L_16 = ResponseBase_ParseJSONInt32_m3954786687(__this, _stringLiteral1616027436, L_14, L_15, /*hidden argument*/NULL);
		MatchDesc_set_currentSize_m1599782322(__this, L_16, /*hidden argument*/NULL);
		RuntimeObject * L_17 = ___obj0;
		RuntimeObject* L_18 = V_0;
		bool L_19 = ResponseBase_ParseJSONBool_m1289868847(__this, _stringLiteral2219497946, L_17, L_18, /*hidden argument*/NULL);
		MatchDesc_set_isPrivate_m1090199307(__this, L_19, /*hidden argument*/NULL);
		RuntimeObject * L_20 = ___obj0;
		RuntimeObject* L_21 = V_0;
		uint16_t L_22 = ResponseBase_ParseJSONUInt16_m3537693036(__this, _stringLiteral2404034871, L_20, L_21, /*hidden argument*/NULL);
		MatchDesc_set_hostNodeId_m1443808085(__this, L_22, /*hidden argument*/NULL);
		RuntimeObject * L_23 = ___obj0;
		RuntimeObject* L_24 = V_0;
		List_1_t32447842 * L_25 = ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t2855340396_m861719111(__this, _stringLiteral3255536439, L_23, L_24, /*hidden argument*/ResponseBase_ParseJSONList_TisMatchDirectConnectInfo_t2855340396_m861719111_RuntimeMethod_var);
		MatchDesc_set_directConnectInfos_m1039210702(__this, L_25, /*hidden argument*/NULL);
		goto IL_00c4;
	}

IL_00ad:
	{
		RuntimeObject * L_26 = ___obj0;
		String_t* L_27 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_26);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral592613445, L_27, /*hidden argument*/NULL);
		FormatException_t154580423 * L_29 = (FormatException_t154580423 *)il2cpp_codegen_object_new(FormatException_t154580423_il2cpp_TypeInfo_var);
		FormatException__ctor_m4049685996(L_29, L_28, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, NULL, MatchDesc_Parse_m664855799_RuntimeMethod_var);
	}

IL_00c4:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::.ctor()
extern "C"  void MatchDirectConnectInfo__ctor_m3939448440 (MatchDirectConnectInfo_t2855340396 * __this, const RuntimeMethod* method)
{
	{
		ResponseBase__ctor_m3542648275(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchDirectConnectInfo::get_nodeId()
extern "C"  uint16_t MatchDirectConnectInfo_get_nodeId_m3793825698 (MatchDirectConnectInfo_t2855340396 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_U3CnodeIdU3Ek__BackingField_0();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C"  void MatchDirectConnectInfo_set_nodeId_m3830557121 (MatchDirectConnectInfo_t2855340396 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_U3CnodeIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::get_publicAddress()
extern "C"  String_t* MatchDirectConnectInfo_get_publicAddress_m1866730570 (MatchDirectConnectInfo_t2855340396 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CpublicAddressU3Ek__BackingField_1();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_publicAddress(System.String)
extern "C"  void MatchDirectConnectInfo_set_publicAddress_m4256653139 (MatchDirectConnectInfo_t2855340396 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CpublicAddressU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::get_privateAddress()
extern "C"  String_t* MatchDirectConnectInfo_get_privateAddress_m2215153279 (MatchDirectConnectInfo_t2855340396 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CprivateAddressU3Ek__BackingField_2();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_privateAddress(System.String)
extern "C"  void MatchDirectConnectInfo_set_privateAddress_m659110150 (MatchDirectConnectInfo_t2855340396 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CprivateAddressU3Ek__BackingField_2(L_0);
		return;
	}
}
// UnityEngine.Networking.Types.HostPriority UnityEngine.Networking.Match.MatchDirectConnectInfo::get_hostPriority()
extern "C"  int32_t MatchDirectConnectInfo_get_hostPriority_m1279982512 (MatchDirectConnectInfo_t2855340396 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3ChostPriorityU3Ek__BackingField_3();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_hostPriority(UnityEngine.Networking.Types.HostPriority)
extern "C"  void MatchDirectConnectInfo_set_hostPriority_m2242080675 (MatchDirectConnectInfo_t2855340396 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3ChostPriorityU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::ToString()
extern "C"  String_t* MatchDirectConnectInfo_ToString_m3550485463 (MatchDirectConnectInfo_t2855340396 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MatchDirectConnectInfo_ToString_m3550485463_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5));
		String_t* L_1 = Object_ToString_m1740002499(__this, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_1);
		ObjectU5BU5D_t2843939325* L_2 = L_0;
		uint16_t L_3 = MatchDirectConnectInfo_get_nodeId_m3793825698(__this, /*hidden argument*/NULL);
		uint16_t L_4 = L_3;
		RuntimeObject * L_5 = Box(NodeID_t2347816311_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_t2843939325* L_6 = L_2;
		String_t* L_7 = MatchDirectConnectInfo_get_publicAddress_m1866730570(__this, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		ObjectU5BU5D_t2843939325* L_8 = L_6;
		String_t* L_9 = MatchDirectConnectInfo_get_privateAddress_m2215153279(__this, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_9);
		ObjectU5BU5D_t2843939325* L_10 = L_8;
		int32_t L_11 = MatchDirectConnectInfo_get_hostPriority_m1279982512(__this, /*hidden argument*/NULL);
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(HostPriority_t1616615738_il2cpp_TypeInfo_var, &L_12);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_13);
		String_t* L_14 = UnityString_Format_m261690510(NULL /*static, unused*/, _stringLiteral1614969392, L_10, /*hidden argument*/NULL);
		V_0 = L_14;
		goto IL_004e;
	}

IL_004e:
	{
		String_t* L_15 = V_0;
		return L_15;
	}
}
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::Parse(System.Object)
extern "C"  void MatchDirectConnectInfo_Parse_m2654967630 (MatchDirectConnectInfo_t2855340396 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MatchDirectConnectInfo_Parse_m2654967630_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IDictionary_2_t1329213854_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0061;
		}
	}
	{
		RuntimeObject * L_2 = ___obj0;
		RuntimeObject* L_3 = V_0;
		uint16_t L_4 = ResponseBase_ParseJSONUInt16_m3537693036(__this, _stringLiteral793118085, L_2, L_3, /*hidden argument*/NULL);
		MatchDirectConnectInfo_set_nodeId_m3830557121(__this, L_4, /*hidden argument*/NULL);
		RuntimeObject * L_5 = ___obj0;
		RuntimeObject* L_6 = V_0;
		String_t* L_7 = ResponseBase_ParseJSONString_m1155503459(__this, _stringLiteral2782796864, L_5, L_6, /*hidden argument*/NULL);
		MatchDirectConnectInfo_set_publicAddress_m4256653139(__this, L_7, /*hidden argument*/NULL);
		RuntimeObject * L_8 = ___obj0;
		RuntimeObject* L_9 = V_0;
		String_t* L_10 = ResponseBase_ParseJSONString_m1155503459(__this, _stringLiteral367361492, L_8, L_9, /*hidden argument*/NULL);
		MatchDirectConnectInfo_set_privateAddress_m659110150(__this, L_10, /*hidden argument*/NULL);
		RuntimeObject * L_11 = ___obj0;
		RuntimeObject* L_12 = V_0;
		int32_t L_13 = ResponseBase_ParseJSONInt32_m3954786687(__this, _stringLiteral950199337, L_11, L_12, /*hidden argument*/NULL);
		MatchDirectConnectInfo_set_hostPriority_m2242080675(__this, L_13, /*hidden argument*/NULL);
		goto IL_0078;
	}

IL_0061:
	{
		RuntimeObject * L_14 = ___obj0;
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral592613445, L_15, /*hidden argument*/NULL);
		FormatException_t154580423 * L_17 = (FormatException_t154580423 *)il2cpp_codegen_object_new(FormatException_t154580423_il2cpp_TypeInfo_var);
		FormatException__ctor_m4049685996(L_17, L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, NULL, MatchDirectConnectInfo_Parse_m2654967630_RuntimeMethod_var);
	}

IL_0078:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.Match.MatchInfo::.ctor(UnityEngine.Networking.Match.CreateMatchResponse)
extern "C"  void MatchInfo__ctor_m1026163455 (MatchInfo_t221301733 * __this, CreateMatchResponse_t1328247360 * ___matchResponse0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MatchInfo__ctor_m1026163455_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		CreateMatchResponse_t1328247360 * L_0 = ___matchResponse0;
		String_t* L_1 = CreateMatchResponse_get_address_m2586556876(L_0, /*hidden argument*/NULL);
		MatchInfo_set_address_m3672516569(__this, L_1, /*hidden argument*/NULL);
		CreateMatchResponse_t1328247360 * L_2 = ___matchResponse0;
		int32_t L_3 = CreateMatchResponse_get_port_m4033119080(L_2, /*hidden argument*/NULL);
		MatchInfo_set_port_m2729257488(__this, L_3, /*hidden argument*/NULL);
		CreateMatchResponse_t1328247360 * L_4 = ___matchResponse0;
		int32_t L_5 = CreateMatchResponse_get_domain_m2386171851(L_4, /*hidden argument*/NULL);
		MatchInfo_set_domain_m2690339534(__this, L_5, /*hidden argument*/NULL);
		CreateMatchResponse_t1328247360 * L_6 = ___matchResponse0;
		uint64_t L_7 = CreateMatchResponse_get_networkId_m3705876485(L_6, /*hidden argument*/NULL);
		MatchInfo_set_networkId_m3466879976(__this, L_7, /*hidden argument*/NULL);
		CreateMatchResponse_t1328247360 * L_8 = ___matchResponse0;
		String_t* L_9 = CreateMatchResponse_get_accessTokenString_m1012218612(L_8, /*hidden argument*/NULL);
		NetworkAccessToken_t320639760 * L_10 = (NetworkAccessToken_t320639760 *)il2cpp_codegen_object_new(NetworkAccessToken_t320639760_il2cpp_TypeInfo_var);
		NetworkAccessToken__ctor_m1548906336(L_10, L_9, /*hidden argument*/NULL);
		MatchInfo_set_accessToken_m2153896250(__this, L_10, /*hidden argument*/NULL);
		CreateMatchResponse_t1328247360 * L_11 = ___matchResponse0;
		uint16_t L_12 = CreateMatchResponse_get_nodeId_m1756638988(L_11, /*hidden argument*/NULL);
		MatchInfo_set_nodeId_m1751290814(__this, L_12, /*hidden argument*/NULL);
		CreateMatchResponse_t1328247360 * L_13 = ___matchResponse0;
		bool L_14 = CreateMatchResponse_get_usingRelay_m1664992420(L_13, /*hidden argument*/NULL);
		MatchInfo_set_usingRelay_m1568266214(__this, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.Match.MatchInfo::.ctor(UnityEngine.Networking.Match.JoinMatchResponse)
extern "C"  void MatchInfo__ctor_m1464312026 (MatchInfo_t221301733 * __this, JoinMatchResponse_t845270609 * ___matchResponse0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MatchInfo__ctor_m1464312026_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		JoinMatchResponse_t845270609 * L_0 = ___matchResponse0;
		String_t* L_1 = JoinMatchResponse_get_address_m354689537(L_0, /*hidden argument*/NULL);
		MatchInfo_set_address_m3672516569(__this, L_1, /*hidden argument*/NULL);
		JoinMatchResponse_t845270609 * L_2 = ___matchResponse0;
		int32_t L_3 = JoinMatchResponse_get_port_m3002546777(L_2, /*hidden argument*/NULL);
		MatchInfo_set_port_m2729257488(__this, L_3, /*hidden argument*/NULL);
		JoinMatchResponse_t845270609 * L_4 = ___matchResponse0;
		int32_t L_5 = JoinMatchResponse_get_domain_m1174913480(L_4, /*hidden argument*/NULL);
		MatchInfo_set_domain_m2690339534(__this, L_5, /*hidden argument*/NULL);
		JoinMatchResponse_t845270609 * L_6 = ___matchResponse0;
		uint64_t L_7 = JoinMatchResponse_get_networkId_m3394264089(L_6, /*hidden argument*/NULL);
		MatchInfo_set_networkId_m3466879976(__this, L_7, /*hidden argument*/NULL);
		JoinMatchResponse_t845270609 * L_8 = ___matchResponse0;
		String_t* L_9 = JoinMatchResponse_get_accessTokenString_m2145669779(L_8, /*hidden argument*/NULL);
		NetworkAccessToken_t320639760 * L_10 = (NetworkAccessToken_t320639760 *)il2cpp_codegen_object_new(NetworkAccessToken_t320639760_il2cpp_TypeInfo_var);
		NetworkAccessToken__ctor_m1548906336(L_10, L_9, /*hidden argument*/NULL);
		MatchInfo_set_accessToken_m2153896250(__this, L_10, /*hidden argument*/NULL);
		JoinMatchResponse_t845270609 * L_11 = ___matchResponse0;
		uint16_t L_12 = JoinMatchResponse_get_nodeId_m1797413455(L_11, /*hidden argument*/NULL);
		MatchInfo_set_nodeId_m1751290814(__this, L_12, /*hidden argument*/NULL);
		JoinMatchResponse_t845270609 * L_13 = ___matchResponse0;
		bool L_14 = JoinMatchResponse_get_usingRelay_m193800465(L_13, /*hidden argument*/NULL);
		MatchInfo_set_usingRelay_m1568266214(__this, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchInfo::get_address()
extern "C"  String_t* MatchInfo_get_address_m1232556325 (MatchInfo_t221301733 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CaddressU3Ek__BackingField_0();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.MatchInfo::set_address(System.String)
extern "C"  void MatchInfo_set_address_m3672516569 (MatchInfo_t221301733 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CaddressU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.MatchInfo::get_port()
extern "C"  int32_t MatchInfo_get_port_m1945994513 (MatchInfo_t221301733 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CportU3Ek__BackingField_1();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.MatchInfo::set_port(System.Int32)
extern "C"  void MatchInfo_set_port_m2729257488 (MatchInfo_t221301733 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CportU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.MatchInfo::get_domain()
extern "C"  int32_t MatchInfo_get_domain_m3216876147 (MatchInfo_t221301733 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CdomainU3Ek__BackingField_2();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.MatchInfo::set_domain(System.Int32)
extern "C"  void MatchInfo_set_domain_m2690339534 (MatchInfo_t221301733 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CdomainU3Ek__BackingField_2(L_0);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.MatchInfo::get_networkId()
extern "C"  uint64_t MatchInfo_get_networkId_m1444611712 (MatchInfo_t221301733 * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		uint64_t L_0 = __this->get_U3CnetworkIdU3Ek__BackingField_3();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		uint64_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.MatchInfo::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C"  void MatchInfo_set_networkId_m3466879976 (MatchInfo_t221301733 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___value0;
		__this->set_U3CnetworkIdU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.Match.MatchInfo::set_accessToken(UnityEngine.Networking.Types.NetworkAccessToken)
extern "C"  void MatchInfo_set_accessToken_m2153896250 (MatchInfo_t221301733 * __this, NetworkAccessToken_t320639760 * ___value0, const RuntimeMethod* method)
{
	{
		NetworkAccessToken_t320639760 * L_0 = ___value0;
		__this->set_U3CaccessTokenU3Ek__BackingField_4(L_0);
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchInfo::get_nodeId()
extern "C"  uint16_t MatchInfo_get_nodeId_m3362352490 (MatchInfo_t221301733 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_U3CnodeIdU3Ek__BackingField_5();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.MatchInfo::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C"  void MatchInfo_set_nodeId_m1751290814 (MatchInfo_t221301733 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_U3CnodeIdU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.MatchInfo::get_usingRelay()
extern "C"  bool MatchInfo_get_usingRelay_m3308939749 (MatchInfo_t221301733 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_U3CusingRelayU3Ek__BackingField_6();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.MatchInfo::set_usingRelay(System.Boolean)
extern "C"  void MatchInfo_set_usingRelay_m1568266214 (MatchInfo_t221301733 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CusingRelayU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchInfo::ToString()
extern "C"  String_t* MatchInfo_ToString_m1494942688 (MatchInfo_t221301733 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MatchInfo_ToString_m1494942688_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5));
		uint64_t L_1 = MatchInfo_get_networkId_m1444611712(__this, /*hidden argument*/NULL);
		uint64_t L_2 = L_1;
		RuntimeObject * L_3 = Box(NetworkID_t4216585621_il2cpp_TypeInfo_var, &L_2);
		ArrayElementTypeCheck (L_0, L_3);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t2843939325* L_4 = L_0;
		String_t* L_5 = MatchInfo_get_address_m1232556325(__this, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_t2843939325* L_6 = L_4;
		int32_t L_7 = MatchInfo_get_port_m1945994513(__this, /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_8);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_9);
		ObjectU5BU5D_t2843939325* L_10 = L_6;
		uint16_t L_11 = MatchInfo_get_nodeId_m3362352490(__this, /*hidden argument*/NULL);
		uint16_t L_12 = L_11;
		RuntimeObject * L_13 = Box(NodeID_t2347816311_il2cpp_TypeInfo_var, &L_12);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_13);
		ObjectU5BU5D_t2843939325* L_14 = L_10;
		bool L_15 = MatchInfo_get_usingRelay_m3308939749(__this, /*hidden argument*/NULL);
		bool L_16 = L_15;
		RuntimeObject * L_17 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_16);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_17);
		String_t* L_18 = UnityString_Format_m261690510(NULL /*static, unused*/, _stringLiteral1693422942, L_14, /*hidden argument*/NULL);
		V_0 = L_18;
		goto IL_0058;
	}

IL_0058:
	{
		String_t* L_19 = V_0;
		return L_19;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::.ctor(UnityEngine.Networking.Match.MatchDesc)
extern "C"  void MatchInfoSnapshot__ctor_m3116124190 (MatchInfoSnapshot_t3166422189 * __this, MatchDesc_t3827228697 * ___matchDesc0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MatchInfoSnapshot__ctor_m3116124190_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MatchDirectConnectInfo_t2855340396 * V_0 = NULL;
	Enumerator_t1921691719  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		MatchDesc_t3827228697 * L_0 = ___matchDesc0;
		uint64_t L_1 = MatchDesc_get_networkId_m3617176384(L_0, /*hidden argument*/NULL);
		MatchInfoSnapshot_set_networkId_m1572557663(__this, L_1, /*hidden argument*/NULL);
		MatchDesc_t3827228697 * L_2 = ___matchDesc0;
		uint16_t L_3 = MatchDesc_get_hostNodeId_m641289458(L_2, /*hidden argument*/NULL);
		MatchInfoSnapshot_set_hostNodeId_m2433065083(__this, L_3, /*hidden argument*/NULL);
		MatchDesc_t3827228697 * L_4 = ___matchDesc0;
		String_t* L_5 = MatchDesc_get_name_m1687824342(L_4, /*hidden argument*/NULL);
		MatchInfoSnapshot_set_name_m382744311(__this, L_5, /*hidden argument*/NULL);
		MatchDesc_t3827228697 * L_6 = ___matchDesc0;
		int32_t L_7 = MatchDesc_get_averageEloScore_m408805692(L_6, /*hidden argument*/NULL);
		MatchInfoSnapshot_set_averageEloScore_m1171549014(__this, L_7, /*hidden argument*/NULL);
		MatchDesc_t3827228697 * L_8 = ___matchDesc0;
		int32_t L_9 = MatchDesc_get_maxSize_m2265962323(L_8, /*hidden argument*/NULL);
		MatchInfoSnapshot_set_maxSize_m2547898986(__this, L_9, /*hidden argument*/NULL);
		MatchDesc_t3827228697 * L_10 = ___matchDesc0;
		int32_t L_11 = MatchDesc_get_currentSize_m9145650(L_10, /*hidden argument*/NULL);
		MatchInfoSnapshot_set_currentSize_m3677953324(__this, L_11, /*hidden argument*/NULL);
		MatchDesc_t3827228697 * L_12 = ___matchDesc0;
		bool L_13 = MatchDesc_get_isPrivate_m3525868735(L_12, /*hidden argument*/NULL);
		MatchInfoSnapshot_set_isPrivate_m1688058755(__this, L_13, /*hidden argument*/NULL);
		MatchDesc_t3827228697 * L_14 = ___matchDesc0;
		Dictionary_2_t3521823603 * L_15 = MatchDesc_get_matchAttributes_m481045601(L_14, /*hidden argument*/NULL);
		MatchInfoSnapshot_set_matchAttributes_m1462812445(__this, L_15, /*hidden argument*/NULL);
		List_1_t2090095927 * L_16 = (List_1_t2090095927 *)il2cpp_codegen_object_new(List_1_t2090095927_il2cpp_TypeInfo_var);
		List_1__ctor_m818466152(L_16, /*hidden argument*/List_1__ctor_m818466152_RuntimeMethod_var);
		MatchInfoSnapshot_set_directConnectInfos_m4174501432(__this, L_16, /*hidden argument*/NULL);
		MatchDesc_t3827228697 * L_17 = ___matchDesc0;
		List_1_t32447842 * L_18 = MatchDesc_get_directConnectInfos_m210874281(L_17, /*hidden argument*/NULL);
		Enumerator_t1921691719  L_19 = List_1_GetEnumerator_m2476053975(L_18, /*hidden argument*/List_1_GetEnumerator_m2476053975_RuntimeMethod_var);
		V_1 = L_19;
	}

IL_007f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_009f;
		}

IL_0084:
		{
			MatchDirectConnectInfo_t2855340396 * L_20 = Enumerator_get_Current_m2463612473((Enumerator_t1921691719 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m2463612473_RuntimeMethod_var);
			V_0 = L_20;
			List_1_t2090095927 * L_21 = MatchInfoSnapshot_get_directConnectInfos_m4034722686(__this, /*hidden argument*/NULL);
			MatchDirectConnectInfo_t2855340396 * L_22 = V_0;
			MatchInfoDirectConnectSnapshot_t618021185 * L_23 = (MatchInfoDirectConnectSnapshot_t618021185 *)il2cpp_codegen_object_new(MatchInfoDirectConnectSnapshot_t618021185_il2cpp_TypeInfo_var);
			MatchInfoDirectConnectSnapshot__ctor_m375710675(L_23, L_22, /*hidden argument*/NULL);
			List_1_Add_m548998622(L_21, L_23, /*hidden argument*/List_1_Add_m548998622_RuntimeMethod_var);
		}

IL_009f:
		{
			bool L_24 = Enumerator_MoveNext_m957156581((Enumerator_t1921691719 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m957156581_RuntimeMethod_var);
			if (L_24)
			{
				goto IL_0084;
			}
		}

IL_00ab:
		{
			IL2CPP_LEAVE(0xBE, FINALLY_00b0);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b0;
	}

FINALLY_00b0:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3020357317((Enumerator_t1921691719 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m3020357317_RuntimeMethod_var);
		IL2CPP_END_FINALLY(176)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(176)
	{
		IL2CPP_JUMP_TBL(0xBE, IL_00be)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00be:
	{
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.MatchInfoSnapshot::get_networkId()
extern "C"  uint64_t MatchInfoSnapshot_get_networkId_m4253878400 (MatchInfoSnapshot_t3166422189 * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		uint64_t L_0 = __this->get_U3CnetworkIdU3Ek__BackingField_0();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		uint64_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C"  void MatchInfoSnapshot_set_networkId_m1572557663 (MatchInfoSnapshot_t3166422189 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___value0;
		__this->set_U3CnetworkIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_hostNodeId(UnityEngine.Networking.Types.NodeID)
extern "C"  void MatchInfoSnapshot_set_hostNodeId_m2433065083 (MatchInfoSnapshot_t3166422189 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_U3ChostNodeIdU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchInfoSnapshot::get_name()
extern "C"  String_t* MatchInfoSnapshot_get_name_m2315886851 (MatchInfoSnapshot_t3166422189 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CnameU3Ek__BackingField_2();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_name(System.String)
extern "C"  void MatchInfoSnapshot_set_name_m382744311 (MatchInfoSnapshot_t3166422189 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_averageEloScore(System.Int32)
extern "C"  void MatchInfoSnapshot_set_averageEloScore_m1171549014 (MatchInfoSnapshot_t3166422189 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CaverageEloScoreU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_maxSize(System.Int32)
extern "C"  void MatchInfoSnapshot_set_maxSize_m2547898986 (MatchInfoSnapshot_t3166422189 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CmaxSizeU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_currentSize(System.Int32)
extern "C"  void MatchInfoSnapshot_set_currentSize_m3677953324 (MatchInfoSnapshot_t3166422189 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CcurrentSizeU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_isPrivate(System.Boolean)
extern "C"  void MatchInfoSnapshot_set_isPrivate_m1688058755 (MatchInfoSnapshot_t3166422189 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CisPrivateU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_matchAttributes(System.Collections.Generic.Dictionary`2<System.String,System.Int64>)
extern "C"  void MatchInfoSnapshot_set_matchAttributes_m1462812445 (MatchInfoSnapshot_t3166422189 * __this, Dictionary_2_t3521823603 * ___value0, const RuntimeMethod* method)
{
	{
		Dictionary_2_t3521823603 * L_0 = ___value0;
		__this->set_U3CmatchAttributesU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot> UnityEngine.Networking.Match.MatchInfoSnapshot::get_directConnectInfos()
extern "C"  List_1_t2090095927 * MatchInfoSnapshot_get_directConnectInfos_m4034722686 (MatchInfoSnapshot_t3166422189 * __this, const RuntimeMethod* method)
{
	List_1_t2090095927 * V_0 = NULL;
	{
		List_1_t2090095927 * L_0 = __this->get_U3CdirectConnectInfosU3Ek__BackingField_8();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		List_1_t2090095927 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_directConnectInfos(System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot>)
extern "C"  void MatchInfoSnapshot_set_directConnectInfos_m4174501432 (MatchInfoSnapshot_t3166422189 * __this, List_1_t2090095927 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_t2090095927 * L_0 = ___value0;
		__this->set_U3CdirectConnectInfosU3Ek__BackingField_8(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot::.ctor(UnityEngine.Networking.Match.MatchDirectConnectInfo)
extern "C"  void MatchInfoDirectConnectSnapshot__ctor_m375710675 (MatchInfoDirectConnectSnapshot_t618021185 * __this, MatchDirectConnectInfo_t2855340396 * ___matchDirectConnectInfo0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		MatchDirectConnectInfo_t2855340396 * L_0 = ___matchDirectConnectInfo0;
		uint16_t L_1 = MatchDirectConnectInfo_get_nodeId_m3793825698(L_0, /*hidden argument*/NULL);
		MatchInfoDirectConnectSnapshot_set_nodeId_m198744523(__this, L_1, /*hidden argument*/NULL);
		MatchDirectConnectInfo_t2855340396 * L_2 = ___matchDirectConnectInfo0;
		String_t* L_3 = MatchDirectConnectInfo_get_publicAddress_m1866730570(L_2, /*hidden argument*/NULL);
		MatchInfoDirectConnectSnapshot_set_publicAddress_m3627602076(__this, L_3, /*hidden argument*/NULL);
		MatchDirectConnectInfo_t2855340396 * L_4 = ___matchDirectConnectInfo0;
		String_t* L_5 = MatchDirectConnectInfo_get_privateAddress_m2215153279(L_4, /*hidden argument*/NULL);
		MatchInfoDirectConnectSnapshot_set_privateAddress_m2091056284(__this, L_5, /*hidden argument*/NULL);
		MatchDirectConnectInfo_t2855340396 * L_6 = ___matchDirectConnectInfo0;
		int32_t L_7 = MatchDirectConnectInfo_get_hostPriority_m1279982512(L_6, /*hidden argument*/NULL);
		MatchInfoDirectConnectSnapshot_set_hostPriority_m3615557824(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C"  void MatchInfoDirectConnectSnapshot_set_nodeId_m198744523 (MatchInfoDirectConnectSnapshot_t618021185 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_U3CnodeIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot::set_publicAddress(System.String)
extern "C"  void MatchInfoDirectConnectSnapshot_set_publicAddress_m3627602076 (MatchInfoDirectConnectSnapshot_t618021185 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CpublicAddressU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot::set_privateAddress(System.String)
extern "C"  void MatchInfoDirectConnectSnapshot_set_privateAddress_m2091056284 (MatchInfoDirectConnectSnapshot_t618021185 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CprivateAddressU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot::set_hostPriority(UnityEngine.Networking.Types.HostPriority)
extern "C"  void MatchInfoDirectConnectSnapshot_set_hostPriority_m3615557824 (MatchInfoDirectConnectSnapshot_t618021185 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3ChostPriorityU3Ek__BackingField_3(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.Match.NetworkMatch::.ctor()
extern "C"  void NetworkMatch__ctor_m3727241709 (NetworkMatch_t2930480025 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkMatch__ctor_m3727241709_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Uri_t100236324 * L_0 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m800430703(L_0, _stringLiteral1496010082, /*hidden argument*/NULL);
		__this->set_m_BaseUri_2(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Uri UnityEngine.Networking.Match.NetworkMatch::get_baseUri()
extern "C"  Uri_t100236324 * NetworkMatch_get_baseUri_m3103825236 (NetworkMatch_t2930480025 * __this, const RuntimeMethod* method)
{
	Uri_t100236324 * V_0 = NULL;
	{
		Uri_t100236324 * L_0 = __this->get_m_BaseUri_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Uri_t100236324 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.NetworkMatch::set_baseUri(System.Uri)
extern "C"  void NetworkMatch_set_baseUri_m3444896208 (NetworkMatch_t2930480025 * __this, Uri_t100236324 * ___value0, const RuntimeMethod* method)
{
	{
		Uri_t100236324 * L_0 = ___value0;
		__this->set_m_BaseUri_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.Match.NetworkMatch::SetProgramAppID(UnityEngine.Networking.Types.AppID)
extern "C"  void NetworkMatch_SetProgramAppID_m431388278 (NetworkMatch_t2930480025 * __this, uint64_t ___programAppID0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(System.String,System.UInt32,System.Boolean,System.String,System.String,System.String,System.Int32,System.Int32,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>)
extern "C"  Coroutine_t3829159415 * NetworkMatch_CreateMatch_m3079176019 (NetworkMatch_t2930480025 * __this, String_t* ___matchName0, uint32_t ___matchSize1, bool ___matchAdvertise2, String_t* ___matchPassword3, String_t* ___publicClientAddress4, String_t* ___privateClientAddress5, int32_t ___eloScoreForMatch6, int32_t ___requestDomain7, DataResponseDelegate_1_t186927816 * ___callback8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkMatch_CreateMatch_m3079176019_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Coroutine_t3829159415 * V_0 = NULL;
	CreateMatchRequest_t2600446299 * V_1 = NULL;
	{
		int32_t L_0 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)17)))))
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral984512269, /*hidden argument*/NULL);
		V_0 = (Coroutine_t3829159415 *)NULL;
		goto IL_0071;
	}

IL_001f:
	{
		CreateMatchRequest_t2600446299 * L_1 = (CreateMatchRequest_t2600446299 *)il2cpp_codegen_object_new(CreateMatchRequest_t2600446299_il2cpp_TypeInfo_var);
		CreateMatchRequest__ctor_m1120211933(L_1, /*hidden argument*/NULL);
		V_1 = L_1;
		CreateMatchRequest_t2600446299 * L_2 = V_1;
		String_t* L_3 = ___matchName0;
		CreateMatchRequest_set_name_m701411379(L_2, L_3, /*hidden argument*/NULL);
		CreateMatchRequest_t2600446299 * L_4 = V_1;
		uint32_t L_5 = ___matchSize1;
		CreateMatchRequest_set_size_m3316633767(L_4, L_5, /*hidden argument*/NULL);
		CreateMatchRequest_t2600446299 * L_6 = V_1;
		bool L_7 = ___matchAdvertise2;
		CreateMatchRequest_set_advertise_m3607720815(L_6, L_7, /*hidden argument*/NULL);
		CreateMatchRequest_t2600446299 * L_8 = V_1;
		String_t* L_9 = ___matchPassword3;
		CreateMatchRequest_set_password_m1322775125(L_8, L_9, /*hidden argument*/NULL);
		CreateMatchRequest_t2600446299 * L_10 = V_1;
		String_t* L_11 = ___publicClientAddress4;
		CreateMatchRequest_set_publicAddress_m1416983088(L_10, L_11, /*hidden argument*/NULL);
		CreateMatchRequest_t2600446299 * L_12 = V_1;
		String_t* L_13 = ___privateClientAddress5;
		CreateMatchRequest_set_privateAddress_m278898640(L_12, L_13, /*hidden argument*/NULL);
		CreateMatchRequest_t2600446299 * L_14 = V_1;
		int32_t L_15 = ___eloScoreForMatch6;
		CreateMatchRequest_set_eloScore_m1972554262(L_14, L_15, /*hidden argument*/NULL);
		CreateMatchRequest_t2600446299 * L_16 = V_1;
		int32_t L_17 = ___requestDomain7;
		Request_set_domain_m3630208190(L_16, L_17, /*hidden argument*/NULL);
		CreateMatchRequest_t2600446299 * L_18 = V_1;
		DataResponseDelegate_1_t186927816 * L_19 = ___callback8;
		Coroutine_t3829159415 * L_20 = NetworkMatch_CreateMatch_m3201661599(__this, L_18, L_19, /*hidden argument*/NULL);
		V_0 = L_20;
		goto IL_0071;
	}

IL_0071:
	{
		Coroutine_t3829159415 * L_21 = V_0;
		return L_21;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(UnityEngine.Networking.Match.CreateMatchRequest,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>)
extern "C"  Coroutine_t3829159415 * NetworkMatch_CreateMatch_m3201661599 (NetworkMatch_t2930480025 * __this, CreateMatchRequest_t2600446299 * ___req0, DataResponseDelegate_1_t186927816 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkMatch_CreateMatch_m3201661599_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Coroutine_t3829159415 * V_0 = NULL;
	Uri_t100236324 * V_1 = NULL;
	WWWForm_t4064702195 * V_2 = NULL;
	uint64_t V_3 = 0;
	uint32_t V_4 = 0;
	bool V_5 = false;
	int32_t V_6 = 0;
	UnityWebRequest_t463507806 * V_7 = NULL;
	{
		DataResponseDelegate_1_t186927816 * L_0 = ___callback1;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1982503484, /*hidden argument*/NULL);
		V_0 = (Coroutine_t3829159415 *)NULL;
		goto IL_0184;
	}

IL_0019:
	{
		Uri_t100236324 * L_1 = NetworkMatch_get_baseUri_m3103825236(__this, /*hidden argument*/NULL);
		Uri_t100236324 * L_2 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m4293005803(L_2, L_1, _stringLiteral3546950769, /*hidden argument*/NULL);
		V_1 = L_2;
		Uri_t100236324 * L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3793802062, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_5 = (WWWForm_t4064702195 *)il2cpp_codegen_object_new(WWWForm_t4064702195_il2cpp_TypeInfo_var);
		WWWForm__ctor_m2465700452(L_5, /*hidden argument*/NULL);
		V_2 = L_5;
		WWWForm_t4064702195 * L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Request_t2696089890_il2cpp_TypeInfo_var);
		int32_t L_7 = ((Request_t2696089890_StaticFields*)il2cpp_codegen_static_fields_for(Request_t2696089890_il2cpp_TypeInfo_var))->get_currentVersion_0();
		WWWForm_AddField_m711349004(L_6, _stringLiteral1902401671, L_7, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_8 = V_2;
		String_t* L_9 = Application_get_cloudProjectId_m3678427659(NULL /*static, unused*/, /*hidden argument*/NULL);
		WWWForm_AddField_m2357902982(L_8, _stringLiteral2910973284, L_9, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_10 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t2761513741_il2cpp_TypeInfo_var);
		uint64_t L_11 = Utility_GetSourceID_m602367204(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_11;
		RuntimeObject * L_12 = Box(SourceID_t1070216020_il2cpp_TypeInfo_var, (&V_3));
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		V_3 = *(uint64_t*)UnBox(L_12);
		WWWForm_AddField_m2357902982(L_10, _stringLiteral1656358094, L_13, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_14 = V_2;
		WWWForm_AddField_m711349004(L_14, _stringLiteral2337841988, 0, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_15 = V_2;
		CreateMatchRequest_t2600446299 * L_16 = ___req0;
		int32_t L_17 = Request_get_domain_m2533048369(L_16, /*hidden argument*/NULL);
		WWWForm_AddField_m711349004(L_15, _stringLiteral3929789730, L_17, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_18 = V_2;
		CreateMatchRequest_t2600446299 * L_19 = ___req0;
		String_t* L_20 = CreateMatchRequest_get_name_m2145735034(L_19, /*hidden argument*/NULL);
		WWWForm_AddField_m2357902982(L_18, _stringLiteral62725243, L_20, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_21 = V_2;
		CreateMatchRequest_t2600446299 * L_22 = ___req0;
		uint32_t L_23 = CreateMatchRequest_get_size_m3980857567(L_22, /*hidden argument*/NULL);
		V_4 = L_23;
		String_t* L_24 = UInt32_ToString_m2574561716((uint32_t*)(&V_4), /*hidden argument*/NULL);
		WWWForm_AddField_m2357902982(L_21, _stringLiteral4049040645, L_24, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_25 = V_2;
		CreateMatchRequest_t2600446299 * L_26 = ___req0;
		bool L_27 = CreateMatchRequest_get_advertise_m865484440(L_26, /*hidden argument*/NULL);
		V_5 = L_27;
		String_t* L_28 = Boolean_ToString_m2664721875((bool*)(&V_5), /*hidden argument*/NULL);
		WWWForm_AddField_m2357902982(L_25, _stringLiteral2172406980, L_28, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_29 = V_2;
		CreateMatchRequest_t2600446299 * L_30 = ___req0;
		String_t* L_31 = CreateMatchRequest_get_password_m3435449282(L_30, /*hidden argument*/NULL);
		WWWForm_AddField_m2357902982(L_29, _stringLiteral4063764210, L_31, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_32 = V_2;
		CreateMatchRequest_t2600446299 * L_33 = ___req0;
		String_t* L_34 = CreateMatchRequest_get_publicAddress_m3336041532(L_33, /*hidden argument*/NULL);
		WWWForm_AddField_m2357902982(L_32, _stringLiteral2782796864, L_34, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_35 = V_2;
		CreateMatchRequest_t2600446299 * L_36 = ___req0;
		String_t* L_37 = CreateMatchRequest_get_privateAddress_m3613518697(L_36, /*hidden argument*/NULL);
		WWWForm_AddField_m2357902982(L_35, _stringLiteral367361492, L_37, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_38 = V_2;
		CreateMatchRequest_t2600446299 * L_39 = ___req0;
		int32_t L_40 = CreateMatchRequest_get_eloScore_m1485273462(L_39, /*hidden argument*/NULL);
		V_6 = L_40;
		String_t* L_41 = Int32_ToString_m141394615((int32_t*)(&V_6), /*hidden argument*/NULL);
		WWWForm_AddField_m2357902982(L_38, _stringLiteral965208087, L_41, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_42 = V_2;
		Dictionary_2_t1632706988 * L_43 = WWWForm_get_headers_m1854290957(L_42, /*hidden argument*/NULL);
		Dictionary_2_set_Item_m187286838(L_43, _stringLiteral2350028096, _stringLiteral1946891126, /*hidden argument*/Dictionary_2_set_Item_m187286838_RuntimeMethod_var);
		Uri_t100236324 * L_44 = V_1;
		String_t* L_45 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_44);
		WWWForm_t4064702195 * L_46 = V_2;
		UnityWebRequest_t463507806 * L_47 = UnityWebRequest_Post_m4193475377(NULL /*static, unused*/, L_45, L_46, /*hidden argument*/NULL);
		V_7 = L_47;
		UnityWebRequest_t463507806 * L_48 = V_7;
		intptr_t L_49 = (intptr_t)GetVirtualMethodInfo(__this, 4);
		InternalResponseDelegate_2_t992249662 * L_50 = (InternalResponseDelegate_2_t992249662 *)il2cpp_codegen_object_new(InternalResponseDelegate_2_t992249662_il2cpp_TypeInfo_var);
		InternalResponseDelegate_2__ctor_m2438927016(L_50, __this, L_49, /*hidden argument*/InternalResponseDelegate_2__ctor_m2438927016_RuntimeMethod_var);
		DataResponseDelegate_1_t186927816 * L_51 = ___callback1;
		RuntimeObject* L_52 = NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t1328247360_TisDataResponseDelegate_1_t186927816_m1028095887(__this, L_48, L_50, L_51, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t1328247360_TisDataResponseDelegate_1_t186927816_m1028095887_RuntimeMethod_var);
		Coroutine_t3829159415 * L_53 = MonoBehaviour_StartCoroutine_m3411253000(__this, L_52, /*hidden argument*/NULL);
		V_0 = L_53;
		goto IL_0184;
	}

IL_0184:
	{
		Coroutine_t3829159415 * L_54 = V_0;
		return L_54;
	}
}
// System.Void UnityEngine.Networking.Match.NetworkMatch::OnMatchCreate(UnityEngine.Networking.Match.CreateMatchResponse,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>)
extern "C"  void NetworkMatch_OnMatchCreate_m1430680992 (NetworkMatch_t2930480025 * __this, CreateMatchResponse_t1328247360 * ___response0, DataResponseDelegate_1_t186927816 * ___userCallback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkMatch_OnMatchCreate_m1430680992_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CreateMatchResponse_t1328247360 * L_0 = ___response0;
		bool L_1 = Response_get_success_m3343637985(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		CreateMatchResponse_t1328247360 * L_2 = ___response0;
		uint64_t L_3 = CreateMatchResponse_get_networkId_m3705876485(L_2, /*hidden argument*/NULL);
		CreateMatchResponse_t1328247360 * L_4 = ___response0;
		String_t* L_5 = CreateMatchResponse_get_accessTokenString_m1012218612(L_4, /*hidden argument*/NULL);
		NetworkAccessToken_t320639760 * L_6 = (NetworkAccessToken_t320639760 *)il2cpp_codegen_object_new(NetworkAccessToken_t320639760_il2cpp_TypeInfo_var);
		NetworkAccessToken__ctor_m1548906336(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t2761513741_il2cpp_TypeInfo_var);
		Utility_SetAccessTokenForNetwork_m483792653(NULL /*static, unused*/, L_3, L_6, /*hidden argument*/NULL);
	}

IL_0022:
	{
		DataResponseDelegate_1_t186927816 * L_7 = ___userCallback1;
		CreateMatchResponse_t1328247360 * L_8 = ___response0;
		bool L_9 = Response_get_success_m3343637985(L_8, /*hidden argument*/NULL);
		CreateMatchResponse_t1328247360 * L_10 = ___response0;
		String_t* L_11 = Response_get_extendedInfo_m1561286864(L_10, /*hidden argument*/NULL);
		CreateMatchResponse_t1328247360 * L_12 = ___response0;
		MatchInfo_t221301733 * L_13 = (MatchInfo_t221301733 *)il2cpp_codegen_object_new(MatchInfo_t221301733_il2cpp_TypeInfo_var);
		MatchInfo__ctor_m1026163455(L_13, L_12, /*hidden argument*/NULL);
		DataResponseDelegate_1_Invoke_m437983603(L_7, L_9, L_11, L_13, /*hidden argument*/DataResponseDelegate_1_Invoke_m437983603_RuntimeMethod_var);
		return;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Types.NetworkID,System.String,System.String,System.String,System.Int32,System.Int32,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>)
extern "C"  Coroutine_t3829159415 * NetworkMatch_JoinMatch_m2200257013 (NetworkMatch_t2930480025 * __this, uint64_t ___netId0, String_t* ___matchPassword1, String_t* ___publicClientAddress2, String_t* ___privateClientAddress3, int32_t ___eloScoreForClient4, int32_t ___requestDomain5, DataResponseDelegate_1_t186927816 * ___callback6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkMatch_JoinMatch_m2200257013_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JoinMatchRequest_t3991767598 * V_0 = NULL;
	Coroutine_t3829159415 * V_1 = NULL;
	{
		JoinMatchRequest_t3991767598 * L_0 = (JoinMatchRequest_t3991767598 *)il2cpp_codegen_object_new(JoinMatchRequest_t3991767598_il2cpp_TypeInfo_var);
		JoinMatchRequest__ctor_m929255344(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		JoinMatchRequest_t3991767598 * L_1 = V_0;
		uint64_t L_2 = ___netId0;
		JoinMatchRequest_set_networkId_m1582426564(L_1, L_2, /*hidden argument*/NULL);
		JoinMatchRequest_t3991767598 * L_3 = V_0;
		String_t* L_4 = ___matchPassword1;
		JoinMatchRequest_set_password_m3230348675(L_3, L_4, /*hidden argument*/NULL);
		JoinMatchRequest_t3991767598 * L_5 = V_0;
		String_t* L_6 = ___publicClientAddress2;
		JoinMatchRequest_set_publicAddress_m3396720139(L_5, L_6, /*hidden argument*/NULL);
		JoinMatchRequest_t3991767598 * L_7 = V_0;
		String_t* L_8 = ___privateClientAddress3;
		JoinMatchRequest_set_privateAddress_m2598128522(L_7, L_8, /*hidden argument*/NULL);
		JoinMatchRequest_t3991767598 * L_9 = V_0;
		int32_t L_10 = ___eloScoreForClient4;
		JoinMatchRequest_set_eloScore_m3728163236(L_9, L_10, /*hidden argument*/NULL);
		JoinMatchRequest_t3991767598 * L_11 = V_0;
		int32_t L_12 = ___requestDomain5;
		Request_set_domain_m3630208190(L_11, L_12, /*hidden argument*/NULL);
		JoinMatchRequest_t3991767598 * L_13 = V_0;
		DataResponseDelegate_1_t186927816 * L_14 = ___callback6;
		Coroutine_t3829159415 * L_15 = NetworkMatch_JoinMatch_m3017753518(__this, L_13, L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		goto IL_0043;
	}

IL_0043:
	{
		Coroutine_t3829159415 * L_16 = V_1;
		return L_16;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Match.JoinMatchRequest,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>)
extern "C"  Coroutine_t3829159415 * NetworkMatch_JoinMatch_m3017753518 (NetworkMatch_t2930480025 * __this, JoinMatchRequest_t3991767598 * ___req0, DataResponseDelegate_1_t186927816 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkMatch_JoinMatch_m3017753518_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Coroutine_t3829159415 * V_0 = NULL;
	Uri_t100236324 * V_1 = NULL;
	WWWForm_t4064702195 * V_2 = NULL;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	int32_t V_5 = 0;
	UnityWebRequest_t463507806 * V_6 = NULL;
	{
		DataResponseDelegate_1_t186927816 * L_0 = ___callback1;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1901731153, /*hidden argument*/NULL);
		V_0 = (Coroutine_t3829159415 *)NULL;
		goto IL_0152;
	}

IL_0019:
	{
		Uri_t100236324 * L_1 = NetworkMatch_get_baseUri_m3103825236(__this, /*hidden argument*/NULL);
		Uri_t100236324 * L_2 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m4293005803(L_2, L_1, _stringLiteral2193882181, /*hidden argument*/NULL);
		V_1 = L_2;
		Uri_t100236324 * L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral780008887, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_5 = (WWWForm_t4064702195 *)il2cpp_codegen_object_new(WWWForm_t4064702195_il2cpp_TypeInfo_var);
		WWWForm__ctor_m2465700452(L_5, /*hidden argument*/NULL);
		V_2 = L_5;
		WWWForm_t4064702195 * L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Request_t2696089890_il2cpp_TypeInfo_var);
		int32_t L_7 = ((Request_t2696089890_StaticFields*)il2cpp_codegen_static_fields_for(Request_t2696089890_il2cpp_TypeInfo_var))->get_currentVersion_0();
		WWWForm_AddField_m711349004(L_6, _stringLiteral1902401671, L_7, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_8 = V_2;
		String_t* L_9 = Application_get_cloudProjectId_m3678427659(NULL /*static, unused*/, /*hidden argument*/NULL);
		WWWForm_AddField_m2357902982(L_8, _stringLiteral2910973284, L_9, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_10 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t2761513741_il2cpp_TypeInfo_var);
		uint64_t L_11 = Utility_GetSourceID_m602367204(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_11;
		RuntimeObject * L_12 = Box(SourceID_t1070216020_il2cpp_TypeInfo_var, (&V_3));
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		V_3 = *(uint64_t*)UnBox(L_12);
		WWWForm_AddField_m2357902982(L_10, _stringLiteral1656358094, L_13, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_14 = V_2;
		WWWForm_AddField_m711349004(L_14, _stringLiteral2337841988, 0, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_15 = V_2;
		JoinMatchRequest_t3991767598 * L_16 = ___req0;
		int32_t L_17 = Request_get_domain_m2533048369(L_16, /*hidden argument*/NULL);
		WWWForm_AddField_m711349004(L_15, _stringLiteral3929789730, L_17, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_18 = V_2;
		JoinMatchRequest_t3991767598 * L_19 = ___req0;
		uint64_t L_20 = JoinMatchRequest_get_networkId_m2534671775(L_19, /*hidden argument*/NULL);
		V_4 = L_20;
		RuntimeObject * L_21 = Box(NetworkID_t4216585621_il2cpp_TypeInfo_var, (&V_4));
		String_t* L_22 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		V_4 = *(uint64_t*)UnBox(L_21);
		WWWForm_AddField_m2357902982(L_18, _stringLiteral2471453923, L_22, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_23 = V_2;
		JoinMatchRequest_t3991767598 * L_24 = ___req0;
		String_t* L_25 = JoinMatchRequest_get_password_m2718232171(L_24, /*hidden argument*/NULL);
		WWWForm_AddField_m2357902982(L_23, _stringLiteral4063764210, L_25, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_26 = V_2;
		JoinMatchRequest_t3991767598 * L_27 = ___req0;
		String_t* L_28 = JoinMatchRequest_get_publicAddress_m3644611049(L_27, /*hidden argument*/NULL);
		WWWForm_AddField_m2357902982(L_26, _stringLiteral2782796864, L_28, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_29 = V_2;
		JoinMatchRequest_t3991767598 * L_30 = ___req0;
		String_t* L_31 = JoinMatchRequest_get_privateAddress_m664578272(L_30, /*hidden argument*/NULL);
		WWWForm_AddField_m2357902982(L_29, _stringLiteral367361492, L_31, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_32 = V_2;
		JoinMatchRequest_t3991767598 * L_33 = ___req0;
		int32_t L_34 = JoinMatchRequest_get_eloScore_m1107868278(L_33, /*hidden argument*/NULL);
		V_5 = L_34;
		String_t* L_35 = Int32_ToString_m141394615((int32_t*)(&V_5), /*hidden argument*/NULL);
		WWWForm_AddField_m2357902982(L_32, _stringLiteral965208087, L_35, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_36 = V_2;
		Dictionary_2_t1632706988 * L_37 = WWWForm_get_headers_m1854290957(L_36, /*hidden argument*/NULL);
		Dictionary_2_set_Item_m187286838(L_37, _stringLiteral2350028096, _stringLiteral1946891126, /*hidden argument*/Dictionary_2_set_Item_m187286838_RuntimeMethod_var);
		Uri_t100236324 * L_38 = V_1;
		String_t* L_39 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_38);
		WWWForm_t4064702195 * L_40 = V_2;
		UnityWebRequest_t463507806 * L_41 = UnityWebRequest_Post_m4193475377(NULL /*static, unused*/, L_39, L_40, /*hidden argument*/NULL);
		V_6 = L_41;
		UnityWebRequest_t463507806 * L_42 = V_6;
		intptr_t L_43 = (intptr_t)NetworkMatch_OnMatchJoined_m4206427941_RuntimeMethod_var;
		InternalResponseDelegate_2_t3313634249 * L_44 = (InternalResponseDelegate_2_t3313634249 *)il2cpp_codegen_object_new(InternalResponseDelegate_2_t3313634249_il2cpp_TypeInfo_var);
		InternalResponseDelegate_2__ctor_m1006820792(L_44, __this, L_43, /*hidden argument*/InternalResponseDelegate_2__ctor_m1006820792_RuntimeMethod_var);
		DataResponseDelegate_1_t186927816 * L_45 = ___callback1;
		RuntimeObject* L_46 = NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t845270609_TisDataResponseDelegate_1_t186927816_m4139761490(__this, L_42, L_44, L_45, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t845270609_TisDataResponseDelegate_1_t186927816_m4139761490_RuntimeMethod_var);
		Coroutine_t3829159415 * L_47 = MonoBehaviour_StartCoroutine_m3411253000(__this, L_46, /*hidden argument*/NULL);
		V_0 = L_47;
		goto IL_0152;
	}

IL_0152:
	{
		Coroutine_t3829159415 * L_48 = V_0;
		return L_48;
	}
}
// System.Void UnityEngine.Networking.Match.NetworkMatch::OnMatchJoined(UnityEngine.Networking.Match.JoinMatchResponse,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>)
extern "C"  void NetworkMatch_OnMatchJoined_m4206427941 (NetworkMatch_t2930480025 * __this, JoinMatchResponse_t845270609 * ___response0, DataResponseDelegate_1_t186927816 * ___userCallback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkMatch_OnMatchJoined_m4206427941_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JoinMatchResponse_t845270609 * L_0 = ___response0;
		bool L_1 = Response_get_success_m3343637985(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		JoinMatchResponse_t845270609 * L_2 = ___response0;
		uint64_t L_3 = JoinMatchResponse_get_networkId_m3394264089(L_2, /*hidden argument*/NULL);
		JoinMatchResponse_t845270609 * L_4 = ___response0;
		String_t* L_5 = JoinMatchResponse_get_accessTokenString_m2145669779(L_4, /*hidden argument*/NULL);
		NetworkAccessToken_t320639760 * L_6 = (NetworkAccessToken_t320639760 *)il2cpp_codegen_object_new(NetworkAccessToken_t320639760_il2cpp_TypeInfo_var);
		NetworkAccessToken__ctor_m1548906336(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t2761513741_il2cpp_TypeInfo_var);
		Utility_SetAccessTokenForNetwork_m483792653(NULL /*static, unused*/, L_3, L_6, /*hidden argument*/NULL);
	}

IL_0022:
	{
		DataResponseDelegate_1_t186927816 * L_7 = ___userCallback1;
		JoinMatchResponse_t845270609 * L_8 = ___response0;
		bool L_9 = Response_get_success_m3343637985(L_8, /*hidden argument*/NULL);
		JoinMatchResponse_t845270609 * L_10 = ___response0;
		String_t* L_11 = Response_get_extendedInfo_m1561286864(L_10, /*hidden argument*/NULL);
		JoinMatchResponse_t845270609 * L_12 = ___response0;
		MatchInfo_t221301733 * L_13 = (MatchInfo_t221301733 *)il2cpp_codegen_object_new(MatchInfo_t221301733_il2cpp_TypeInfo_var);
		MatchInfo__ctor_m1464312026(L_13, L_12, /*hidden argument*/NULL);
		DataResponseDelegate_1_Invoke_m437983603(L_7, L_9, L_11, L_13, /*hidden argument*/DataResponseDelegate_1_Invoke_m437983603_RuntimeMethod_var);
		return;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DestroyMatch(UnityEngine.Networking.Types.NetworkID,System.Int32,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate)
extern "C"  Coroutine_t3829159415 * NetworkMatch_DestroyMatch_m4220430763 (NetworkMatch_t2930480025 * __this, uint64_t ___netId0, int32_t ___requestDomain1, BasicResponseDelegate_t2196726690 * ___callback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkMatch_DestroyMatch_m4220430763_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DestroyMatchRequest_t2124150613 * V_0 = NULL;
	Coroutine_t3829159415 * V_1 = NULL;
	{
		DestroyMatchRequest_t2124150613 * L_0 = (DestroyMatchRequest_t2124150613 *)il2cpp_codegen_object_new(DestroyMatchRequest_t2124150613_il2cpp_TypeInfo_var);
		DestroyMatchRequest__ctor_m327028137(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		DestroyMatchRequest_t2124150613 * L_1 = V_0;
		uint64_t L_2 = ___netId0;
		DestroyMatchRequest_set_networkId_m2430913175(L_1, L_2, /*hidden argument*/NULL);
		DestroyMatchRequest_t2124150613 * L_3 = V_0;
		int32_t L_4 = ___requestDomain1;
		Request_set_domain_m3630208190(L_3, L_4, /*hidden argument*/NULL);
		DestroyMatchRequest_t2124150613 * L_5 = V_0;
		BasicResponseDelegate_t2196726690 * L_6 = ___callback2;
		Coroutine_t3829159415 * L_7 = NetworkMatch_DestroyMatch_m851204137(__this, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		goto IL_0023;
	}

IL_0023:
	{
		Coroutine_t3829159415 * L_8 = V_1;
		return L_8;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DestroyMatch(UnityEngine.Networking.Match.DestroyMatchRequest,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate)
extern "C"  Coroutine_t3829159415 * NetworkMatch_DestroyMatch_m851204137 (NetworkMatch_t2930480025 * __this, DestroyMatchRequest_t2124150613 * ___req0, BasicResponseDelegate_t2196726690 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkMatch_DestroyMatch_m851204137_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Coroutine_t3829159415 * V_0 = NULL;
	Uri_t100236324 * V_1 = NULL;
	WWWForm_t4064702195 * V_2 = NULL;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	UnityWebRequest_t463507806 * V_5 = NULL;
	{
		BasicResponseDelegate_t2196726690 * L_0 = ___callback1;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3151169944, /*hidden argument*/NULL);
		V_0 = (Coroutine_t3829159415 *)NULL;
		goto IL_0113;
	}

IL_0019:
	{
		Uri_t100236324 * L_1 = NetworkMatch_get_baseUri_m3103825236(__this, /*hidden argument*/NULL);
		Uri_t100236324 * L_2 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m4293005803(L_2, L_1, _stringLiteral1165821571, /*hidden argument*/NULL);
		V_1 = L_2;
		Uri_t100236324 * L_3 = V_1;
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1509869451, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_6 = (WWWForm_t4064702195 *)il2cpp_codegen_object_new(WWWForm_t4064702195_il2cpp_TypeInfo_var);
		WWWForm__ctor_m2465700452(L_6, /*hidden argument*/NULL);
		V_2 = L_6;
		WWWForm_t4064702195 * L_7 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Request_t2696089890_il2cpp_TypeInfo_var);
		int32_t L_8 = ((Request_t2696089890_StaticFields*)il2cpp_codegen_static_fields_for(Request_t2696089890_il2cpp_TypeInfo_var))->get_currentVersion_0();
		WWWForm_AddField_m711349004(L_7, _stringLiteral1902401671, L_8, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_9 = V_2;
		String_t* L_10 = Application_get_cloudProjectId_m3678427659(NULL /*static, unused*/, /*hidden argument*/NULL);
		WWWForm_AddField_m2357902982(L_9, _stringLiteral2910973284, L_10, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t2761513741_il2cpp_TypeInfo_var);
		uint64_t L_12 = Utility_GetSourceID_m602367204(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_12;
		RuntimeObject * L_13 = Box(SourceID_t1070216020_il2cpp_TypeInfo_var, (&V_3));
		String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		V_3 = *(uint64_t*)UnBox(L_13);
		WWWForm_AddField_m2357902982(L_11, _stringLiteral1656358094, L_14, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_15 = V_2;
		DestroyMatchRequest_t2124150613 * L_16 = ___req0;
		uint64_t L_17 = DestroyMatchRequest_get_networkId_m1753108237(L_16, /*hidden argument*/NULL);
		NetworkAccessToken_t320639760 * L_18 = Utility_GetAccessTokenForNetwork_m3460910439(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		String_t* L_19 = NetworkAccessToken_GetByteString_m3125030115(L_18, /*hidden argument*/NULL);
		WWWForm_AddField_m2357902982(L_15, _stringLiteral2337841988, L_19, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_20 = V_2;
		DestroyMatchRequest_t2124150613 * L_21 = ___req0;
		int32_t L_22 = Request_get_domain_m2533048369(L_21, /*hidden argument*/NULL);
		WWWForm_AddField_m711349004(L_20, _stringLiteral3929789730, L_22, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_23 = V_2;
		DestroyMatchRequest_t2124150613 * L_24 = ___req0;
		uint64_t L_25 = DestroyMatchRequest_get_networkId_m1753108237(L_24, /*hidden argument*/NULL);
		V_4 = L_25;
		RuntimeObject * L_26 = Box(NetworkID_t4216585621_il2cpp_TypeInfo_var, (&V_4));
		String_t* L_27 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_26);
		V_4 = *(uint64_t*)UnBox(L_26);
		WWWForm_AddField_m2357902982(L_23, _stringLiteral2471453923, L_27, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_28 = V_2;
		Dictionary_2_t1632706988 * L_29 = WWWForm_get_headers_m1854290957(L_28, /*hidden argument*/NULL);
		Dictionary_2_set_Item_m187286838(L_29, _stringLiteral2350028096, _stringLiteral1946891126, /*hidden argument*/Dictionary_2_set_Item_m187286838_RuntimeMethod_var);
		Uri_t100236324 * L_30 = V_1;
		String_t* L_31 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_30);
		WWWForm_t4064702195 * L_32 = V_2;
		UnityWebRequest_t463507806 * L_33 = UnityWebRequest_Post_m4193475377(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		V_5 = L_33;
		UnityWebRequest_t463507806 * L_34 = V_5;
		intptr_t L_35 = (intptr_t)NetworkMatch_OnMatchDestroyed_m221375483_RuntimeMethod_var;
		InternalResponseDelegate_2_t753237801 * L_36 = (InternalResponseDelegate_2_t753237801 *)il2cpp_codegen_object_new(InternalResponseDelegate_2_t753237801_il2cpp_TypeInfo_var);
		InternalResponseDelegate_2__ctor_m4083378426(L_36, __this, L_35, /*hidden argument*/InternalResponseDelegate_2__ctor_m4083378426_RuntimeMethod_var);
		BasicResponseDelegate_t2196726690 * L_37 = ___callback1;
		RuntimeObject* L_38 = NetworkMatch_ProcessMatchResponse_TisBasicResponse_t1476713923_TisBasicResponseDelegate_t2196726690_m4171655136(__this, L_34, L_36, L_37, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisBasicResponse_t1476713923_TisBasicResponseDelegate_t2196726690_m4171655136_RuntimeMethod_var);
		Coroutine_t3829159415 * L_39 = MonoBehaviour_StartCoroutine_m3411253000(__this, L_38, /*hidden argument*/NULL);
		V_0 = L_39;
		goto IL_0113;
	}

IL_0113:
	{
		Coroutine_t3829159415 * L_40 = V_0;
		return L_40;
	}
}
// System.Void UnityEngine.Networking.Match.NetworkMatch::OnMatchDestroyed(UnityEngine.Networking.Match.BasicResponse,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate)
extern "C"  void NetworkMatch_OnMatchDestroyed_m221375483 (NetworkMatch_t2930480025 * __this, BasicResponse_t1476713923 * ___response0, BasicResponseDelegate_t2196726690 * ___userCallback1, const RuntimeMethod* method)
{
	{
		BasicResponseDelegate_t2196726690 * L_0 = ___userCallback1;
		BasicResponse_t1476713923 * L_1 = ___response0;
		bool L_2 = Response_get_success_m3343637985(L_1, /*hidden argument*/NULL);
		BasicResponse_t1476713923 * L_3 = ___response0;
		String_t* L_4 = Response_get_extendedInfo_m1561286864(L_3, /*hidden argument*/NULL);
		BasicResponseDelegate_Invoke_m1399904936(L_0, L_2, L_4, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DropConnection(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NodeID,System.Int32,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate)
extern "C"  Coroutine_t3829159415 * NetworkMatch_DropConnection_m496130429 (NetworkMatch_t2930480025 * __this, uint64_t ___netId0, uint16_t ___dropNodeId1, int32_t ___requestDomain2, BasicResponseDelegate_t2196726690 * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkMatch_DropConnection_m496130429_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DropConnectionRequest_t2647317937 * V_0 = NULL;
	Coroutine_t3829159415 * V_1 = NULL;
	{
		DropConnectionRequest_t2647317937 * L_0 = (DropConnectionRequest_t2647317937 *)il2cpp_codegen_object_new(DropConnectionRequest_t2647317937_il2cpp_TypeInfo_var);
		DropConnectionRequest__ctor_m2312219607(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		DropConnectionRequest_t2647317937 * L_1 = V_0;
		uint64_t L_2 = ___netId0;
		DropConnectionRequest_set_networkId_m399344964(L_1, L_2, /*hidden argument*/NULL);
		DropConnectionRequest_t2647317937 * L_3 = V_0;
		uint16_t L_4 = ___dropNodeId1;
		DropConnectionRequest_set_nodeId_m2959951618(L_3, L_4, /*hidden argument*/NULL);
		DropConnectionRequest_t2647317937 * L_5 = V_0;
		int32_t L_6 = ___requestDomain2;
		Request_set_domain_m3630208190(L_5, L_6, /*hidden argument*/NULL);
		DropConnectionRequest_t2647317937 * L_7 = V_0;
		BasicResponseDelegate_t2196726690 * L_8 = ___callback3;
		Coroutine_t3829159415 * L_9 = NetworkMatch_DropConnection_m3349273159(__this, L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		goto IL_002b;
	}

IL_002b:
	{
		Coroutine_t3829159415 * L_10 = V_1;
		return L_10;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DropConnection(UnityEngine.Networking.Match.DropConnectionRequest,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate)
extern "C"  Coroutine_t3829159415 * NetworkMatch_DropConnection_m3349273159 (NetworkMatch_t2930480025 * __this, DropConnectionRequest_t2647317937 * ___req0, BasicResponseDelegate_t2196726690 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkMatch_DropConnection_m3349273159_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Coroutine_t3829159415 * V_0 = NULL;
	Uri_t100236324 * V_1 = NULL;
	WWWForm_t4064702195 * V_2 = NULL;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint16_t V_5 = 0;
	UnityWebRequest_t463507806 * V_6 = NULL;
	{
		BasicResponseDelegate_t2196726690 * L_0 = ___callback1;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral875319902, /*hidden argument*/NULL);
		V_0 = (Coroutine_t3829159415 *)NULL;
		goto IL_012e;
	}

IL_0019:
	{
		Uri_t100236324 * L_1 = NetworkMatch_get_baseUri_m3103825236(__this, /*hidden argument*/NULL);
		Uri_t100236324 * L_2 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m4293005803(L_2, L_1, _stringLiteral1437324351, /*hidden argument*/NULL);
		V_1 = L_2;
		Uri_t100236324 * L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2227996048, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_5 = (WWWForm_t4064702195 *)il2cpp_codegen_object_new(WWWForm_t4064702195_il2cpp_TypeInfo_var);
		WWWForm__ctor_m2465700452(L_5, /*hidden argument*/NULL);
		V_2 = L_5;
		WWWForm_t4064702195 * L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Request_t2696089890_il2cpp_TypeInfo_var);
		int32_t L_7 = ((Request_t2696089890_StaticFields*)il2cpp_codegen_static_fields_for(Request_t2696089890_il2cpp_TypeInfo_var))->get_currentVersion_0();
		WWWForm_AddField_m711349004(L_6, _stringLiteral1902401671, L_7, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_8 = V_2;
		String_t* L_9 = Application_get_cloudProjectId_m3678427659(NULL /*static, unused*/, /*hidden argument*/NULL);
		WWWForm_AddField_m2357902982(L_8, _stringLiteral2910973284, L_9, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_10 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t2761513741_il2cpp_TypeInfo_var);
		uint64_t L_11 = Utility_GetSourceID_m602367204(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_11;
		RuntimeObject * L_12 = Box(SourceID_t1070216020_il2cpp_TypeInfo_var, (&V_3));
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		V_3 = *(uint64_t*)UnBox(L_12);
		WWWForm_AddField_m2357902982(L_10, _stringLiteral1656358094, L_13, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_14 = V_2;
		DropConnectionRequest_t2647317937 * L_15 = ___req0;
		uint64_t L_16 = DropConnectionRequest_get_networkId_m2906146404(L_15, /*hidden argument*/NULL);
		NetworkAccessToken_t320639760 * L_17 = Utility_GetAccessTokenForNetwork_m3460910439(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		String_t* L_18 = NetworkAccessToken_GetByteString_m3125030115(L_17, /*hidden argument*/NULL);
		WWWForm_AddField_m2357902982(L_14, _stringLiteral2337841988, L_18, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_19 = V_2;
		DropConnectionRequest_t2647317937 * L_20 = ___req0;
		int32_t L_21 = Request_get_domain_m2533048369(L_20, /*hidden argument*/NULL);
		WWWForm_AddField_m711349004(L_19, _stringLiteral3929789730, L_21, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_22 = V_2;
		DropConnectionRequest_t2647317937 * L_23 = ___req0;
		uint64_t L_24 = DropConnectionRequest_get_networkId_m2906146404(L_23, /*hidden argument*/NULL);
		V_4 = L_24;
		RuntimeObject * L_25 = Box(NetworkID_t4216585621_il2cpp_TypeInfo_var, (&V_4));
		String_t* L_26 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_25);
		V_4 = *(uint64_t*)UnBox(L_25);
		WWWForm_AddField_m2357902982(L_22, _stringLiteral2471453923, L_26, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_27 = V_2;
		DropConnectionRequest_t2647317937 * L_28 = ___req0;
		uint16_t L_29 = DropConnectionRequest_get_nodeId_m2375409994(L_28, /*hidden argument*/NULL);
		V_5 = L_29;
		RuntimeObject * L_30 = Box(NodeID_t2347816311_il2cpp_TypeInfo_var, (&V_5));
		String_t* L_31 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_30);
		V_5 = *(uint16_t*)UnBox(L_30);
		WWWForm_AddField_m2357902982(L_27, _stringLiteral793118085, L_31, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_32 = V_2;
		Dictionary_2_t1632706988 * L_33 = WWWForm_get_headers_m1854290957(L_32, /*hidden argument*/NULL);
		Dictionary_2_set_Item_m187286838(L_33, _stringLiteral2350028096, _stringLiteral1946891126, /*hidden argument*/Dictionary_2_set_Item_m187286838_RuntimeMethod_var);
		Uri_t100236324 * L_34 = V_1;
		String_t* L_35 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_34);
		WWWForm_t4064702195 * L_36 = V_2;
		UnityWebRequest_t463507806 * L_37 = UnityWebRequest_Post_m4193475377(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		V_6 = L_37;
		UnityWebRequest_t463507806 * L_38 = V_6;
		intptr_t L_39 = (intptr_t)NetworkMatch_OnDropConnection_m1639108205_RuntimeMethod_var;
		InternalResponseDelegate_2_t304736019 * L_40 = (InternalResponseDelegate_2_t304736019 *)il2cpp_codegen_object_new(InternalResponseDelegate_2_t304736019_il2cpp_TypeInfo_var);
		InternalResponseDelegate_2__ctor_m3308930013(L_40, __this, L_39, /*hidden argument*/InternalResponseDelegate_2__ctor_m3308930013_RuntimeMethod_var);
		BasicResponseDelegate_t2196726690 * L_41 = ___callback1;
		RuntimeObject* L_42 = NetworkMatch_ProcessMatchResponse_TisDropConnectionResponse_t3571632289_TisBasicResponseDelegate_t2196726690_m986112150(__this, L_38, L_40, L_41, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisDropConnectionResponse_t3571632289_TisBasicResponseDelegate_t2196726690_m986112150_RuntimeMethod_var);
		Coroutine_t3829159415 * L_43 = MonoBehaviour_StartCoroutine_m3411253000(__this, L_42, /*hidden argument*/NULL);
		V_0 = L_43;
		goto IL_012e;
	}

IL_012e:
	{
		Coroutine_t3829159415 * L_44 = V_0;
		return L_44;
	}
}
// System.Void UnityEngine.Networking.Match.NetworkMatch::OnDropConnection(UnityEngine.Networking.Match.DropConnectionResponse,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate)
extern "C"  void NetworkMatch_OnDropConnection_m1639108205 (NetworkMatch_t2930480025 * __this, DropConnectionResponse_t3571632289 * ___response0, BasicResponseDelegate_t2196726690 * ___userCallback1, const RuntimeMethod* method)
{
	{
		BasicResponseDelegate_t2196726690 * L_0 = ___userCallback1;
		DropConnectionResponse_t3571632289 * L_1 = ___response0;
		bool L_2 = Response_get_success_m3343637985(L_1, /*hidden argument*/NULL);
		DropConnectionResponse_t3571632289 * L_3 = ___response0;
		String_t* L_4 = Response_get_extendedInfo_m1561286864(L_3, /*hidden argument*/NULL);
		BasicResponseDelegate_Invoke_m1399904936(L_0, L_2, L_4, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(System.Int32,System.Int32,System.String,System.Boolean,System.Int32,System.Int32,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot>>)
extern "C"  Coroutine_t3829159415 * NetworkMatch_ListMatches_m628187040 (NetworkMatch_t2930480025 * __this, int32_t ___startPageNumber0, int32_t ___resultPageSize1, String_t* ___matchNameFilter2, bool ___filterOutPrivateMatchesFromResults3, int32_t ___eloScoreTarget4, int32_t ___requestDomain5, DataResponseDelegate_1_t309155718 * ___callback6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkMatch_ListMatches_m628187040_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Coroutine_t3829159415 * V_0 = NULL;
	ListMatchRequest_t1588429355 * V_1 = NULL;
	{
		int32_t L_0 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)17)))))
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral984512269, /*hidden argument*/NULL);
		V_0 = (Coroutine_t3829159415 *)NULL;
		goto IL_0061;
	}

IL_001f:
	{
		ListMatchRequest_t1588429355 * L_1 = (ListMatchRequest_t1588429355 *)il2cpp_codegen_object_new(ListMatchRequest_t1588429355_il2cpp_TypeInfo_var);
		ListMatchRequest__ctor_m189544352(L_1, /*hidden argument*/NULL);
		V_1 = L_1;
		ListMatchRequest_t1588429355 * L_2 = V_1;
		int32_t L_3 = ___startPageNumber0;
		ListMatchRequest_set_pageNum_m714424921(L_2, L_3, /*hidden argument*/NULL);
		ListMatchRequest_t1588429355 * L_4 = V_1;
		int32_t L_5 = ___resultPageSize1;
		ListMatchRequest_set_pageSize_m2542353962(L_4, L_5, /*hidden argument*/NULL);
		ListMatchRequest_t1588429355 * L_6 = V_1;
		String_t* L_7 = ___matchNameFilter2;
		ListMatchRequest_set_nameFilter_m3455577482(L_6, L_7, /*hidden argument*/NULL);
		ListMatchRequest_t1588429355 * L_8 = V_1;
		bool L_9 = ___filterOutPrivateMatchesFromResults3;
		ListMatchRequest_set_filterOutPrivateMatches_m242262970(L_8, L_9, /*hidden argument*/NULL);
		ListMatchRequest_t1588429355 * L_10 = V_1;
		int32_t L_11 = ___eloScoreTarget4;
		ListMatchRequest_set_eloScore_m2096908822(L_10, L_11, /*hidden argument*/NULL);
		ListMatchRequest_t1588429355 * L_12 = V_1;
		int32_t L_13 = ___requestDomain5;
		Request_set_domain_m3630208190(L_12, L_13, /*hidden argument*/NULL);
		ListMatchRequest_t1588429355 * L_14 = V_1;
		DataResponseDelegate_1_t309155718 * L_15 = ___callback6;
		Coroutine_t3829159415 * L_16 = NetworkMatch_ListMatches_m3965275728(__this, L_14, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_0061;
	}

IL_0061:
	{
		Coroutine_t3829159415 * L_17 = V_0;
		return L_17;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(UnityEngine.Networking.Match.ListMatchRequest,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot>>)
extern "C"  Coroutine_t3829159415 * NetworkMatch_ListMatches_m3965275728 (NetworkMatch_t2930480025 * __this, ListMatchRequest_t1588429355 * ___req0, DataResponseDelegate_1_t309155718 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkMatch_ListMatches_m3965275728_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Coroutine_t3829159415 * V_0 = NULL;
	Uri_t100236324 * V_1 = NULL;
	WWWForm_t4064702195 * V_2 = NULL;
	uint64_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	UnityWebRequest_t463507806 * V_6 = NULL;
	{
		DataResponseDelegate_1_t309155718 * L_0 = ___callback1;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4024629234, /*hidden argument*/NULL);
		V_0 = (Coroutine_t3829159415 *)NULL;
		goto IL_0152;
	}

IL_0019:
	{
		Uri_t100236324 * L_1 = NetworkMatch_get_baseUri_m3103825236(__this, /*hidden argument*/NULL);
		Uri_t100236324 * L_2 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m4293005803(L_2, L_1, _stringLiteral2386490997, /*hidden argument*/NULL);
		V_1 = L_2;
		Uri_t100236324 * L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2864547800, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_5 = (WWWForm_t4064702195 *)il2cpp_codegen_object_new(WWWForm_t4064702195_il2cpp_TypeInfo_var);
		WWWForm__ctor_m2465700452(L_5, /*hidden argument*/NULL);
		V_2 = L_5;
		WWWForm_t4064702195 * L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Request_t2696089890_il2cpp_TypeInfo_var);
		int32_t L_7 = ((Request_t2696089890_StaticFields*)il2cpp_codegen_static_fields_for(Request_t2696089890_il2cpp_TypeInfo_var))->get_currentVersion_0();
		WWWForm_AddField_m711349004(L_6, _stringLiteral1902401671, L_7, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_8 = V_2;
		String_t* L_9 = Application_get_cloudProjectId_m3678427659(NULL /*static, unused*/, /*hidden argument*/NULL);
		WWWForm_AddField_m2357902982(L_8, _stringLiteral2910973284, L_9, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_10 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t2761513741_il2cpp_TypeInfo_var);
		uint64_t L_11 = Utility_GetSourceID_m602367204(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_11;
		RuntimeObject * L_12 = Box(SourceID_t1070216020_il2cpp_TypeInfo_var, (&V_3));
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		V_3 = *(uint64_t*)UnBox(L_12);
		WWWForm_AddField_m2357902982(L_10, _stringLiteral1656358094, L_13, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_14 = V_2;
		WWWForm_AddField_m711349004(L_14, _stringLiteral2337841988, 0, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_15 = V_2;
		ListMatchRequest_t1588429355 * L_16 = ___req0;
		int32_t L_17 = Request_get_domain_m2533048369(L_16, /*hidden argument*/NULL);
		WWWForm_AddField_m711349004(L_15, _stringLiteral3929789730, L_17, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_18 = V_2;
		ListMatchRequest_t1588429355 * L_19 = ___req0;
		int32_t L_20 = ListMatchRequest_get_pageSize_m3055718048(L_19, /*hidden argument*/NULL);
		WWWForm_AddField_m711349004(L_18, _stringLiteral1875478138, L_20, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_21 = V_2;
		ListMatchRequest_t1588429355 * L_22 = ___req0;
		int32_t L_23 = ListMatchRequest_get_pageNum_m3084306515(L_22, /*hidden argument*/NULL);
		WWWForm_AddField_m711349004(L_21, _stringLiteral4292784458, L_23, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_24 = V_2;
		ListMatchRequest_t1588429355 * L_25 = ___req0;
		String_t* L_26 = ListMatchRequest_get_nameFilter_m1921865349(L_25, /*hidden argument*/NULL);
		WWWForm_AddField_m2357902982(L_24, _stringLiteral3552369471, L_26, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_27 = V_2;
		ListMatchRequest_t1588429355 * L_28 = ___req0;
		bool L_29 = ListMatchRequest_get_filterOutPrivateMatches_m702074324(L_28, /*hidden argument*/NULL);
		V_4 = L_29;
		String_t* L_30 = Boolean_ToString_m2664721875((bool*)(&V_4), /*hidden argument*/NULL);
		WWWForm_AddField_m2357902982(L_27, _stringLiteral332042649, L_30, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_31 = V_2;
		ListMatchRequest_t1588429355 * L_32 = ___req0;
		int32_t L_33 = ListMatchRequest_get_eloScore_m2377257860(L_32, /*hidden argument*/NULL);
		V_5 = L_33;
		String_t* L_34 = Int32_ToString_m141394615((int32_t*)(&V_5), /*hidden argument*/NULL);
		WWWForm_AddField_m2357902982(L_31, _stringLiteral965208087, L_34, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_35 = V_2;
		Dictionary_2_t1632706988 * L_36 = WWWForm_get_headers_m1854290957(L_35, /*hidden argument*/NULL);
		Dictionary_2_set_Item_m187286838(L_36, _stringLiteral2350028096, _stringLiteral1946891126, /*hidden argument*/Dictionary_2_set_Item_m187286838_RuntimeMethod_var);
		Uri_t100236324 * L_37 = V_1;
		String_t* L_38 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_37);
		WWWForm_t4064702195 * L_39 = V_2;
		UnityWebRequest_t463507806 * L_40 = UnityWebRequest_Post_m4193475377(NULL /*static, unused*/, L_38, L_39, /*hidden argument*/NULL);
		V_6 = L_40;
		UnityWebRequest_t463507806 * L_41 = V_6;
		intptr_t L_42 = (intptr_t)NetworkMatch_OnMatchList_m2129293200_RuntimeMethod_var;
		InternalResponseDelegate_2_t873951790 * L_43 = (InternalResponseDelegate_2_t873951790 *)il2cpp_codegen_object_new(InternalResponseDelegate_2_t873951790_il2cpp_TypeInfo_var);
		InternalResponseDelegate_2__ctor_m4032249314(L_43, __this, L_42, /*hidden argument*/InternalResponseDelegate_2__ctor_m4032249314_RuntimeMethod_var);
		DataResponseDelegate_1_t309155718 * L_44 = ___callback1;
		RuntimeObject* L_45 = NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t3200990838_TisDataResponseDelegate_1_t309155718_m2895002787(__this, L_41, L_43, L_44, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t3200990838_TisDataResponseDelegate_1_t309155718_m2895002787_RuntimeMethod_var);
		Coroutine_t3829159415 * L_46 = MonoBehaviour_StartCoroutine_m3411253000(__this, L_45, /*hidden argument*/NULL);
		V_0 = L_46;
		goto IL_0152;
	}

IL_0152:
	{
		Coroutine_t3829159415 * L_47 = V_0;
		return L_47;
	}
}
// System.Void UnityEngine.Networking.Match.NetworkMatch::OnMatchList(UnityEngine.Networking.Match.ListMatchResponse,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot>>)
extern "C"  void NetworkMatch_OnMatchList_m2129293200 (NetworkMatch_t2930480025 * __this, ListMatchResponse_t3200990838 * ___response0, DataResponseDelegate_1_t309155718 * ___userCallback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkMatch_OnMatchList_m2129293200_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t343529635 * V_0 = NULL;
	MatchDesc_t3827228697 * V_1 = NULL;
	Enumerator_t2893580020  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t343529635 * L_0 = (List_1_t343529635 *)il2cpp_codegen_object_new(List_1_t343529635_il2cpp_TypeInfo_var);
		List_1__ctor_m2649410098(L_0, /*hidden argument*/List_1__ctor_m2649410098_RuntimeMethod_var);
		V_0 = L_0;
		ListMatchResponse_t3200990838 * L_1 = ___response0;
		List_1_t1004336143 * L_2 = ListMatchResponse_get_matches_m2872681810(L_1, /*hidden argument*/NULL);
		Enumerator_t2893580020  L_3 = List_1_GetEnumerator_m3706392678(L_2, /*hidden argument*/List_1_GetEnumerator_m3706392678_RuntimeMethod_var);
		V_2 = L_3;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002f;
		}

IL_0019:
		{
			MatchDesc_t3827228697 * L_4 = Enumerator_get_Current_m1671013569((Enumerator_t2893580020 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m1671013569_RuntimeMethod_var);
			V_1 = L_4;
			List_1_t343529635 * L_5 = V_0;
			MatchDesc_t3827228697 * L_6 = V_1;
			MatchInfoSnapshot_t3166422189 * L_7 = (MatchInfoSnapshot_t3166422189 *)il2cpp_codegen_object_new(MatchInfoSnapshot_t3166422189_il2cpp_TypeInfo_var);
			MatchInfoSnapshot__ctor_m3116124190(L_7, L_6, /*hidden argument*/NULL);
			List_1_Add_m2366351136(L_5, L_7, /*hidden argument*/List_1_Add_m2366351136_RuntimeMethod_var);
		}

IL_002f:
		{
			bool L_8 = Enumerator_MoveNext_m332103838((Enumerator_t2893580020 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m332103838_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_0019;
			}
		}

IL_003b:
		{
			IL2CPP_LEAVE(0x4E, FINALLY_0040);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2278141307((Enumerator_t2893580020 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m2278141307_RuntimeMethod_var);
		IL2CPP_END_FINALLY(64)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_JUMP_TBL(0x4E, IL_004e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004e:
	{
		DataResponseDelegate_1_t309155718 * L_9 = ___userCallback1;
		ListMatchResponse_t3200990838 * L_10 = ___response0;
		bool L_11 = Response_get_success_m3343637985(L_10, /*hidden argument*/NULL);
		ListMatchResponse_t3200990838 * L_12 = ___response0;
		String_t* L_13 = Response_get_extendedInfo_m1561286864(L_12, /*hidden argument*/NULL);
		List_1_t343529635 * L_14 = V_0;
		DataResponseDelegate_1_Invoke_m2625328205(L_9, L_11, L_13, L_14, /*hidden argument*/DataResponseDelegate_1_Invoke_m2625328205_RuntimeMethod_var);
		return;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::SetMatchAttributes(UnityEngine.Networking.Types.NetworkID,System.Boolean,System.Int32,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate)
extern "C"  Coroutine_t3829159415 * NetworkMatch_SetMatchAttributes_m2296300825 (NetworkMatch_t2930480025 * __this, uint64_t ___networkId0, bool ___isListed1, int32_t ___requestDomain2, BasicResponseDelegate_t2196726690 * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkMatch_SetMatchAttributes_m2296300825_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SetMatchAttributesRequest_t2732203151 * V_0 = NULL;
	Coroutine_t3829159415 * V_1 = NULL;
	{
		SetMatchAttributesRequest_t2732203151 * L_0 = (SetMatchAttributesRequest_t2732203151 *)il2cpp_codegen_object_new(SetMatchAttributesRequest_t2732203151_il2cpp_TypeInfo_var);
		SetMatchAttributesRequest__ctor_m1899046165(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		SetMatchAttributesRequest_t2732203151 * L_1 = V_0;
		uint64_t L_2 = ___networkId0;
		SetMatchAttributesRequest_set_networkId_m557696958(L_1, L_2, /*hidden argument*/NULL);
		SetMatchAttributesRequest_t2732203151 * L_3 = V_0;
		bool L_4 = ___isListed1;
		SetMatchAttributesRequest_set_isListed_m2994314324(L_3, L_4, /*hidden argument*/NULL);
		SetMatchAttributesRequest_t2732203151 * L_5 = V_0;
		int32_t L_6 = ___requestDomain2;
		Request_set_domain_m3630208190(L_5, L_6, /*hidden argument*/NULL);
		SetMatchAttributesRequest_t2732203151 * L_7 = V_0;
		BasicResponseDelegate_t2196726690 * L_8 = ___callback3;
		Coroutine_t3829159415 * L_9 = NetworkMatch_SetMatchAttributes_m3627579880(__this, L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		goto IL_002b;
	}

IL_002b:
	{
		Coroutine_t3829159415 * L_10 = V_1;
		return L_10;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::SetMatchAttributes(UnityEngine.Networking.Match.SetMatchAttributesRequest,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate)
extern "C"  Coroutine_t3829159415 * NetworkMatch_SetMatchAttributes_m3627579880 (NetworkMatch_t2930480025 * __this, SetMatchAttributesRequest_t2732203151 * ___req0, BasicResponseDelegate_t2196726690 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkMatch_SetMatchAttributes_m3627579880_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Coroutine_t3829159415 * V_0 = NULL;
	Uri_t100236324 * V_1 = NULL;
	WWWForm_t4064702195 * V_2 = NULL;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	bool V_5 = false;
	UnityWebRequest_t463507806 * V_6 = NULL;
	{
		BasicResponseDelegate_t2196726690 * L_0 = ___callback1;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral975573261, /*hidden argument*/NULL);
		V_0 = (Coroutine_t3829159415 *)NULL;
		goto IL_012e;
	}

IL_0019:
	{
		Uri_t100236324 * L_1 = NetworkMatch_get_baseUri_m3103825236(__this, /*hidden argument*/NULL);
		Uri_t100236324 * L_2 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m4293005803(L_2, L_1, _stringLiteral1068878819, /*hidden argument*/NULL);
		V_1 = L_2;
		Uri_t100236324 * L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral597048638, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_5 = (WWWForm_t4064702195 *)il2cpp_codegen_object_new(WWWForm_t4064702195_il2cpp_TypeInfo_var);
		WWWForm__ctor_m2465700452(L_5, /*hidden argument*/NULL);
		V_2 = L_5;
		WWWForm_t4064702195 * L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Request_t2696089890_il2cpp_TypeInfo_var);
		int32_t L_7 = ((Request_t2696089890_StaticFields*)il2cpp_codegen_static_fields_for(Request_t2696089890_il2cpp_TypeInfo_var))->get_currentVersion_0();
		WWWForm_AddField_m711349004(L_6, _stringLiteral1902401671, L_7, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_8 = V_2;
		String_t* L_9 = Application_get_cloudProjectId_m3678427659(NULL /*static, unused*/, /*hidden argument*/NULL);
		WWWForm_AddField_m2357902982(L_8, _stringLiteral2910973284, L_9, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_10 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t2761513741_il2cpp_TypeInfo_var);
		uint64_t L_11 = Utility_GetSourceID_m602367204(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_11;
		RuntimeObject * L_12 = Box(SourceID_t1070216020_il2cpp_TypeInfo_var, (&V_3));
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		V_3 = *(uint64_t*)UnBox(L_12);
		WWWForm_AddField_m2357902982(L_10, _stringLiteral1656358094, L_13, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_14 = V_2;
		SetMatchAttributesRequest_t2732203151 * L_15 = ___req0;
		uint64_t L_16 = SetMatchAttributesRequest_get_networkId_m2380549462(L_15, /*hidden argument*/NULL);
		NetworkAccessToken_t320639760 * L_17 = Utility_GetAccessTokenForNetwork_m3460910439(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		String_t* L_18 = NetworkAccessToken_GetByteString_m3125030115(L_17, /*hidden argument*/NULL);
		WWWForm_AddField_m2357902982(L_14, _stringLiteral2337841988, L_18, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_19 = V_2;
		SetMatchAttributesRequest_t2732203151 * L_20 = ___req0;
		int32_t L_21 = Request_get_domain_m2533048369(L_20, /*hidden argument*/NULL);
		WWWForm_AddField_m711349004(L_19, _stringLiteral3929789730, L_21, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_22 = V_2;
		SetMatchAttributesRequest_t2732203151 * L_23 = ___req0;
		uint64_t L_24 = SetMatchAttributesRequest_get_networkId_m2380549462(L_23, /*hidden argument*/NULL);
		V_4 = L_24;
		RuntimeObject * L_25 = Box(NetworkID_t4216585621_il2cpp_TypeInfo_var, (&V_4));
		String_t* L_26 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_25);
		V_4 = *(uint64_t*)UnBox(L_25);
		WWWForm_AddField_m2357902982(L_22, _stringLiteral2471453923, L_26, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_27 = V_2;
		SetMatchAttributesRequest_t2732203151 * L_28 = ___req0;
		bool L_29 = SetMatchAttributesRequest_get_isListed_m3414389613(L_28, /*hidden argument*/NULL);
		V_5 = L_29;
		String_t* L_30 = Boolean_ToString_m2664721875((bool*)(&V_5), /*hidden argument*/NULL);
		WWWForm_AddField_m2357902982(L_27, _stringLiteral961964331, L_30, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_31 = V_2;
		Dictionary_2_t1632706988 * L_32 = WWWForm_get_headers_m1854290957(L_31, /*hidden argument*/NULL);
		Dictionary_2_set_Item_m187286838(L_32, _stringLiteral2350028096, _stringLiteral1946891126, /*hidden argument*/Dictionary_2_set_Item_m187286838_RuntimeMethod_var);
		Uri_t100236324 * L_33 = V_1;
		String_t* L_34 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_33);
		WWWForm_t4064702195 * L_35 = V_2;
		UnityWebRequest_t463507806 * L_36 = UnityWebRequest_Post_m4193475377(NULL /*static, unused*/, L_34, L_35, /*hidden argument*/NULL);
		V_6 = L_36;
		UnityWebRequest_t463507806 * L_37 = V_6;
		intptr_t L_38 = (intptr_t)NetworkMatch_OnSetMatchAttributes_m3218031621_RuntimeMethod_var;
		InternalResponseDelegate_2_t753237801 * L_39 = (InternalResponseDelegate_2_t753237801 *)il2cpp_codegen_object_new(InternalResponseDelegate_2_t753237801_il2cpp_TypeInfo_var);
		InternalResponseDelegate_2__ctor_m4083378426(L_39, __this, L_38, /*hidden argument*/InternalResponseDelegate_2__ctor_m4083378426_RuntimeMethod_var);
		BasicResponseDelegate_t2196726690 * L_40 = ___callback1;
		RuntimeObject* L_41 = NetworkMatch_ProcessMatchResponse_TisBasicResponse_t1476713923_TisBasicResponseDelegate_t2196726690_m4171655136(__this, L_37, L_39, L_40, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisBasicResponse_t1476713923_TisBasicResponseDelegate_t2196726690_m4171655136_RuntimeMethod_var);
		Coroutine_t3829159415 * L_42 = MonoBehaviour_StartCoroutine_m3411253000(__this, L_41, /*hidden argument*/NULL);
		V_0 = L_42;
		goto IL_012e;
	}

IL_012e:
	{
		Coroutine_t3829159415 * L_43 = V_0;
		return L_43;
	}
}
// System.Void UnityEngine.Networking.Match.NetworkMatch::OnSetMatchAttributes(UnityEngine.Networking.Match.BasicResponse,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate)
extern "C"  void NetworkMatch_OnSetMatchAttributes_m3218031621 (NetworkMatch_t2930480025 * __this, BasicResponse_t1476713923 * ___response0, BasicResponseDelegate_t2196726690 * ___userCallback1, const RuntimeMethod* method)
{
	{
		BasicResponseDelegate_t2196726690 * L_0 = ___userCallback1;
		BasicResponse_t1476713923 * L_1 = ___response0;
		bool L_2 = Response_get_success_m3343637985(L_1, /*hidden argument*/NULL);
		BasicResponse_t1476713923 * L_3 = ___response0;
		String_t* L_4 = Response_get_extendedInfo_m1561286864(L_3, /*hidden argument*/NULL);
		BasicResponseDelegate_Invoke_m1399904936(L_0, L_2, L_4, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_BasicResponseDelegate_t2196726690 (BasicResponseDelegate_t2196726690 * __this, bool ___success0, String_t* ___extendedInfo1, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___extendedInfo1' to native representation
	char* ____extendedInfo1_marshaled = NULL;
	____extendedInfo1_marshaled = il2cpp_codegen_marshal_string(___extendedInfo1);

	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___success0), ____extendedInfo1_marshaled);

	// Marshaling cleanup of parameter '___extendedInfo1' native representation
	il2cpp_codegen_marshal_free(____extendedInfo1_marshaled);
	____extendedInfo1_marshaled = NULL;

}
// System.Void UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void BasicResponseDelegate__ctor_m3474841667 (BasicResponseDelegate_t2196726690 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate::Invoke(System.Boolean,System.String)
extern "C"  void BasicResponseDelegate_Invoke_m1399904936 (BasicResponseDelegate_t2196726690 * __this, bool ___success0, String_t* ___extendedInfo1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		BasicResponseDelegate_Invoke_m1399904936((BasicResponseDelegate_t2196726690 *)__this->get_prev_9(), ___success0, ___extendedInfo1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, bool, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___success0, ___extendedInfo1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, bool, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___success0, ___extendedInfo1, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< bool, String_t* >::Invoke(targetMethod, targetThis, ___success0, ___extendedInfo1);
					else
						GenericVirtActionInvoker2< bool, String_t* >::Invoke(targetMethod, targetThis, ___success0, ___extendedInfo1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< bool, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___success0, ___extendedInfo1);
					else
						VirtActionInvoker2< bool, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___success0, ___extendedInfo1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, bool, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___success0, ___extendedInfo1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate::BeginInvoke(System.Boolean,System.String,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* BasicResponseDelegate_BeginInvoke_m1586966129 (BasicResponseDelegate_t2196726690 * __this, bool ___success0, String_t* ___extendedInfo1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BasicResponseDelegate_BeginInvoke_m1586966129_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &___success0);
	__d_args[1] = ___extendedInfo1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void BasicResponseDelegate_EndInvoke_m3291947204 (BasicResponseDelegate_t2196726690 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.Match.Request::.ctor()
extern "C"  void Request__ctor_m873075042 (Request_t2696089890 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.SourceID UnityEngine.Networking.Match.Request::get_sourceId()
extern "C"  uint64_t Request_get_sourceId_m208323637 (Request_t2696089890 * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		uint64_t L_0 = __this->get_U3CsourceIdU3Ek__BackingField_1();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		uint64_t L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Networking.Match.Request::get_projectId()
extern "C"  String_t* Request_get_projectId_m2576041751 (Request_t2696089890 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CprojectIdU3Ek__BackingField_2();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Networking.Match.Request::get_accessTokenString()
extern "C"  String_t* Request_get_accessTokenString_m4019206711 (Request_t2696089890 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CaccessTokenStringU3Ek__BackingField_3();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Networking.Match.Request::get_domain()
extern "C"  int32_t Request_get_domain_m2533048369 (Request_t2696089890 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CdomainU3Ek__BackingField_4();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.Request::set_domain(System.Int32)
extern "C"  void Request_set_domain_m3630208190 (Request_t2696089890 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CdomainU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.String UnityEngine.Networking.Match.Request::ToString()
extern "C"  String_t* Request_ToString_m2900465251 (Request_t2696089890 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Request_ToString_m2900465251_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5));
		String_t* L_1 = Object_ToString_m1740002499(__this, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_1);
		ObjectU5BU5D_t2843939325* L_2 = L_0;
		uint64_t L_3 = Request_get_sourceId_m208323637(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		RuntimeObject * L_4 = Box(SourceID_t1070216020_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_5 = Enum_ToString_m2477889358((Enum_t4135868527 *)L_4, _stringLiteral3452614648, /*hidden argument*/NULL);
		V_0 = *(uint64_t*)UnBox(L_4);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_t2843939325* L_6 = L_2;
		String_t* L_7 = Request_get_projectId_m2576041751(__this, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		ObjectU5BU5D_t2843939325* L_8 = L_6;
		String_t* L_9 = Request_get_accessTokenString_m4019206711(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		bool L_11 = L_10;
		RuntimeObject * L_12 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_11);
		ArrayElementTypeCheck (L_8, L_12);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_12);
		ObjectU5BU5D_t2843939325* L_13 = L_8;
		int32_t L_14 = Request_get_domain_m2533048369(__this, /*hidden argument*/NULL);
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_15);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_16);
		String_t* L_17 = UnityString_Format_m261690510(NULL /*static, unused*/, _stringLiteral1686739920, L_13, /*hidden argument*/NULL);
		V_1 = L_17;
		goto IL_0066;
	}

IL_0066:
	{
		String_t* L_18 = V_1;
		return L_18;
	}
}
// System.Void UnityEngine.Networking.Match.Request::.cctor()
extern "C"  void Request__cctor_m3097775336 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Request__cctor_m3097775336_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Request_t2696089890_StaticFields*)il2cpp_codegen_static_fields_for(Request_t2696089890_il2cpp_TypeInfo_var))->set_currentVersion_0(3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.Match.Response::.ctor()
extern "C"  void Response__ctor_m1005354347 (Response_t2513603462 * __this, const RuntimeMethod* method)
{
	{
		ResponseBase__ctor_m3542648275(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.Response::get_success()
extern "C"  bool Response_get_success_m3343637985 (Response_t2513603462 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_U3CsuccessU3Ek__BackingField_0();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.Response::set_success(System.Boolean)
extern "C"  void Response_set_success_m2199256226 (Response_t2513603462 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CsuccessU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String UnityEngine.Networking.Match.Response::get_extendedInfo()
extern "C"  String_t* Response_get_extendedInfo_m1561286864 (Response_t2513603462 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CextendedInfoU3Ek__BackingField_1();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.Response::set_extendedInfo(System.String)
extern "C"  void Response_set_extendedInfo_m4106844907 (Response_t2513603462 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CextendedInfoU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.Match.Response::SetFailure(System.String)
extern "C"  void Response_SetFailure_m37322024 (Response_t2513603462 * __this, String_t* ___info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Response_SetFailure_m37322024_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Response_set_success_m2199256226(__this, (bool)0, /*hidden argument*/NULL);
		String_t* L_0 = Response_get_extendedInfo_m1561286864(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___info0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		Response_set_extendedInfo_m4106844907(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.Match.Response::ToString()
extern "C"  String_t* Response_ToString_m2727218217 (Response_t2513603462 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Response_ToString_m2727218217_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)3));
		String_t* L_1 = Object_ToString_m1740002499(__this, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_1);
		ObjectU5BU5D_t2843939325* L_2 = L_0;
		bool L_3 = Response_get_success_m3343637985(__this, /*hidden argument*/NULL);
		bool L_4 = L_3;
		RuntimeObject * L_5 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_t2843939325* L_6 = L_2;
		String_t* L_7 = Response_get_extendedInfo_m1561286864(__this, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		String_t* L_8 = UnityString_Format_m261690510(NULL /*static, unused*/, _stringLiteral2968508303, L_6, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0037;
	}

IL_0037:
	{
		String_t* L_9 = V_0;
		return L_9;
	}
}
// System.Void UnityEngine.Networking.Match.Response::Parse(System.Object)
extern "C"  void Response_Parse_m2983258584 (Response_t2513603462 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Response_Parse_m2983258584_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IDictionary_2_t1329213854_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject * L_2 = ___obj0;
		RuntimeObject* L_3 = V_0;
		bool L_4 = ResponseBase_ParseJSONBool_m1289868847(__this, _stringLiteral224826876, L_2, L_3, /*hidden argument*/NULL);
		Response_set_success_m2199256226(__this, L_4, /*hidden argument*/NULL);
		RuntimeObject * L_5 = ___obj0;
		RuntimeObject* L_6 = V_0;
		String_t* L_7 = ResponseBase_ParseJSONString_m1155503459(__this, _stringLiteral2754928008, L_5, L_6, /*hidden argument*/NULL);
		Response_set_extendedInfo_m4106844907(__this, L_7, /*hidden argument*/NULL);
		bool L_8 = Response_get_success_m3343637985(__this, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0057;
		}
	}
	{
		String_t* L_9 = Response_get_extendedInfo_m1561286864(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1444336699, L_9, /*hidden argument*/NULL);
		FormatException_t154580423 * L_11 = (FormatException_t154580423 *)il2cpp_codegen_object_new(FormatException_t154580423_il2cpp_TypeInfo_var);
		FormatException__ctor_m4049685996(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NULL, Response_Parse_m2983258584_RuntimeMethod_var);
	}

IL_0057:
	{
	}

IL_0058:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.Match.ResponseBase::.ctor()
extern "C"  void ResponseBase__ctor_m3542648275 (ResponseBase_t1712937097 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.Match.ResponseBase::ParseJSONString(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  String_t* ResponseBase_ParseJSONString_m1155503459 (ResponseBase_t1712937097 * __this, String_t* ___name0, RuntimeObject * ___obj1, RuntimeObject* ___dictJsonObj2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ResponseBase_ParseJSONString_m1155503459_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___dictJsonObj2;
		String_t* L_1 = ___name0;
		bool L_2 = InterfaceFuncInvoker2< bool, String_t*, RuntimeObject ** >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t1329213854_il2cpp_TypeInfo_var, L_0, L_1, (RuntimeObject **)(&___obj1));
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject * L_3 = ___obj1;
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var));
		goto IL_002c;
	}

IL_001b:
	{
		String_t* L_4 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m3937257545(NULL /*static, unused*/, L_4, _stringLiteral3969200035, /*hidden argument*/NULL);
		FormatException_t154580423 * L_6 = (FormatException_t154580423 *)il2cpp_codegen_object_new(FormatException_t154580423_il2cpp_TypeInfo_var);
		FormatException__ctor_m4049685996(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, ResponseBase_ParseJSONString_m1155503459_RuntimeMethod_var);
	}

IL_002c:
	{
		String_t* L_7 = V_0;
		return L_7;
	}
}
// System.Int32 UnityEngine.Networking.Match.ResponseBase::ParseJSONInt32(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  int32_t ResponseBase_ParseJSONInt32_m3954786687 (ResponseBase_t1712937097 * __this, String_t* ___name0, RuntimeObject * ___obj1, RuntimeObject* ___dictJsonObj2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ResponseBase_ParseJSONInt32_m3954786687_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___dictJsonObj2;
		String_t* L_1 = ___name0;
		bool L_2 = InterfaceFuncInvoker2< bool, String_t*, RuntimeObject ** >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t1329213854_il2cpp_TypeInfo_var, L_0, L_1, (RuntimeObject **)(&___obj1));
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject * L_3 = ___obj1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int32_t L_4 = Convert_ToInt32_m2608095889(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_002c;
	}

IL_001b:
	{
		String_t* L_5 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m3937257545(NULL /*static, unused*/, L_5, _stringLiteral3969200035, /*hidden argument*/NULL);
		FormatException_t154580423 * L_7 = (FormatException_t154580423 *)il2cpp_codegen_object_new(FormatException_t154580423_il2cpp_TypeInfo_var);
		FormatException__ctor_m4049685996(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, ResponseBase_ParseJSONInt32_m3954786687_RuntimeMethod_var);
	}

IL_002c:
	{
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.UInt16 UnityEngine.Networking.Match.ResponseBase::ParseJSONUInt16(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  uint16_t ResponseBase_ParseJSONUInt16_m3537693036 (ResponseBase_t1712937097 * __this, String_t* ___name0, RuntimeObject * ___obj1, RuntimeObject* ___dictJsonObj2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ResponseBase_ParseJSONUInt16_m3537693036_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___dictJsonObj2;
		String_t* L_1 = ___name0;
		bool L_2 = InterfaceFuncInvoker2< bool, String_t*, RuntimeObject ** >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t1329213854_il2cpp_TypeInfo_var, L_0, L_1, (RuntimeObject **)(&___obj1));
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject * L_3 = ___obj1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint16_t L_4 = Convert_ToUInt16_m3103153160(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_002c;
	}

IL_001b:
	{
		String_t* L_5 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m3937257545(NULL /*static, unused*/, L_5, _stringLiteral3969200035, /*hidden argument*/NULL);
		FormatException_t154580423 * L_7 = (FormatException_t154580423 *)il2cpp_codegen_object_new(FormatException_t154580423_il2cpp_TypeInfo_var);
		FormatException__ctor_m4049685996(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, ResponseBase_ParseJSONUInt16_m3537693036_RuntimeMethod_var);
	}

IL_002c:
	{
		uint16_t L_8 = V_0;
		return L_8;
	}
}
// System.UInt64 UnityEngine.Networking.Match.ResponseBase::ParseJSONUInt64(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  uint64_t ResponseBase_ParseJSONUInt64_m607396206 (ResponseBase_t1712937097 * __this, String_t* ___name0, RuntimeObject * ___obj1, RuntimeObject* ___dictJsonObj2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ResponseBase_ParseJSONUInt64_m607396206_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___dictJsonObj2;
		String_t* L_1 = ___name0;
		bool L_2 = InterfaceFuncInvoker2< bool, String_t*, RuntimeObject ** >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t1329213854_il2cpp_TypeInfo_var, L_0, L_1, (RuntimeObject **)(&___obj1));
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject * L_3 = ___obj1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint64_t L_4 = Convert_ToUInt64_m1841050714(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_002c;
	}

IL_001b:
	{
		String_t* L_5 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m3937257545(NULL /*static, unused*/, L_5, _stringLiteral3969200035, /*hidden argument*/NULL);
		FormatException_t154580423 * L_7 = (FormatException_t154580423 *)il2cpp_codegen_object_new(FormatException_t154580423_il2cpp_TypeInfo_var);
		FormatException__ctor_m4049685996(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, ResponseBase_ParseJSONUInt64_m607396206_RuntimeMethod_var);
	}

IL_002c:
	{
		uint64_t L_8 = V_0;
		return L_8;
	}
}
// System.Boolean UnityEngine.Networking.Match.ResponseBase::ParseJSONBool(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  bool ResponseBase_ParseJSONBool_m1289868847 (ResponseBase_t1712937097 * __this, String_t* ___name0, RuntimeObject * ___obj1, RuntimeObject* ___dictJsonObj2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ResponseBase_ParseJSONBool_m1289868847_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___dictJsonObj2;
		String_t* L_1 = ___name0;
		bool L_2 = InterfaceFuncInvoker2< bool, String_t*, RuntimeObject ** >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, IDictionary_2_t1329213854_il2cpp_TypeInfo_var, L_0, L_1, (RuntimeObject **)(&___obj1));
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject * L_3 = ___obj1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		bool L_4 = Convert_ToBoolean_m2072772931(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_002c;
	}

IL_001b:
	{
		String_t* L_5 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m3937257545(NULL /*static, unused*/, L_5, _stringLiteral3969200035, /*hidden argument*/NULL);
		FormatException_t154580423 * L_7 = (FormatException_t154580423 *)il2cpp_codegen_object_new(FormatException_t154580423_il2cpp_TypeInfo_var);
		FormatException__ctor_m4049685996(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, ResponseBase_ParseJSONBool_m1289868847_RuntimeMethod_var);
	}

IL_002c:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.Match.SetMatchAttributesRequest::.ctor()
extern "C"  void SetMatchAttributesRequest__ctor_m1899046165 (SetMatchAttributesRequest_t2732203151 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SetMatchAttributesRequest__ctor_m1899046165_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Request_t2696089890_il2cpp_TypeInfo_var);
		Request__ctor_m873075042(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.SetMatchAttributesRequest::get_networkId()
extern "C"  uint64_t SetMatchAttributesRequest_get_networkId_m2380549462 (SetMatchAttributesRequest_t2732203151 * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		uint64_t L_0 = __this->get_U3CnetworkIdU3Ek__BackingField_5();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		uint64_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.SetMatchAttributesRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C"  void SetMatchAttributesRequest_set_networkId_m557696958 (SetMatchAttributesRequest_t2732203151 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___value0;
		__this->set_U3CnetworkIdU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.SetMatchAttributesRequest::get_isListed()
extern "C"  bool SetMatchAttributesRequest_get_isListed_m3414389613 (SetMatchAttributesRequest_t2732203151 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_U3CisListedU3Ek__BackingField_6();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.SetMatchAttributesRequest::set_isListed(System.Boolean)
extern "C"  void SetMatchAttributesRequest_set_isListed_m2994314324 (SetMatchAttributesRequest_t2732203151 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CisListedU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.String UnityEngine.Networking.Match.SetMatchAttributesRequest::ToString()
extern "C"  String_t* SetMatchAttributesRequest_ToString_m3394706279 (SetMatchAttributesRequest_t2732203151 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SetMatchAttributesRequest_ToString_m3394706279_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)3));
		String_t* L_1 = Request_ToString_m2900465251(__this, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_1);
		ObjectU5BU5D_t2843939325* L_2 = L_0;
		uint64_t L_3 = SetMatchAttributesRequest_get_networkId_m2380549462(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		RuntimeObject * L_4 = Box(NetworkID_t4216585621_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_5 = Enum_ToString_m2477889358((Enum_t4135868527 *)L_4, _stringLiteral3452614648, /*hidden argument*/NULL);
		V_0 = *(uint64_t*)UnBox(L_4);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_t2843939325* L_6 = L_2;
		bool L_7 = SetMatchAttributesRequest_get_isListed_m3414389613(__this, /*hidden argument*/NULL);
		bool L_8 = L_7;
		RuntimeObject * L_9 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_8);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_9);
		String_t* L_10 = UnityString_Format_m261690510(NULL /*static, unused*/, _stringLiteral2373792937, L_6, /*hidden argument*/NULL);
		V_1 = L_10;
		goto IL_004a;
	}

IL_004a:
	{
		String_t* L_11 = V_1;
		return L_11;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHost(UnityEngine.Networking.HostTopology,System.Int32)
extern "C"  int32_t NetworkTransport_AddHost_m1126110129 (RuntimeObject * __this /* static, unused */, HostTopology_t4059263395 * ___topology0, int32_t ___port1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_AddHost_m1126110129_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(UNETWebSocketLib_t687350976_il2cpp_TypeInfo_var);
		UNETWebSocketLib_t687350976 * L_0 = UNETWebSocketLib_get_Instance_m1651960898(NULL /*static, unused*/, /*hidden argument*/NULL);
		HostTopology_t4059263395 * L_1 = ___topology0;
		int32_t L_2 = ___port1;
		int32_t L_3 = UNETWebSocketLib_AddHost_m97350380(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0013;
	}

IL_0013:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHost(UnityEngine.Networking.HostTopology,System.Int32,System.String)
extern "C"  int32_t NetworkTransport_AddHost_m236682671 (RuntimeObject * __this /* static, unused */, HostTopology_t4059263395 * ___topology0, int32_t ___port1, String_t* ___ip2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_AddHost_m236682671_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(UNETWebSocketLib_t687350976_il2cpp_TypeInfo_var);
		UNETWebSocketLib_t687350976 * L_0 = UNETWebSocketLib_get_Instance_m1651960898(NULL /*static, unused*/, /*hidden argument*/NULL);
		HostTopology_t4059263395 * L_1 = ___topology0;
		int32_t L_2 = ___port1;
		int32_t L_3 = UNETWebSocketLib_AddHost_m97350380(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0013;
	}

IL_0013:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Void UnityEngine.Networking.NetworkTransport::Init()
extern "C"  void NetworkTransport_Init_m3007042076 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_Init_m3007042076_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UNETWebSocketLib_t687350976_il2cpp_TypeInfo_var);
		UNETWebSocketLib_t687350976 * L_0 = UNETWebSocketLib_get_Instance_m1651960898(NULL /*static, unused*/, /*hidden argument*/NULL);
		UNETWebSocketLib_Init_m3744735638(L_0, /*hidden argument*/NULL);
		UNetWebGlHelpers_InitUpdateFunction_m1335550908(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.Networking.NetworkTransport::Connect(System.Int32,System.String,System.Int32,System.Int32,System.Byte&)
extern "C"  int32_t NetworkTransport_Connect_m1156091760 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, String_t* ___address1, int32_t ___port2, int32_t ___exeptionConnectionId3, uint8_t* ___error4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_Connect_m1156091760_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(UNETWebSocketLib_t687350976_il2cpp_TypeInfo_var);
		UNETWebSocketLib_t687350976 * L_0 = UNETWebSocketLib_get_Instance_m1651960898(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = ___hostId0;
		String_t* L_2 = ___address1;
		int32_t L_3 = ___port2;
		int32_t L_4 = ___exeptionConnectionId3;
		uint8_t* L_5 = ___error4;
		int32_t L_6 = UNETWebSocketLib_Connect_m3711350676(L_0, L_1, L_2, L_3, L_4, (uint8_t*)L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0017;
	}

IL_0017:
	{
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.Boolean UnityEngine.Networking.NetworkTransport::Disconnect(System.Int32,System.Int32,System.Byte&)
extern "C"  bool NetworkTransport_Disconnect_m2330484719 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, int32_t ___connectionId1, uint8_t* ___error2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_Disconnect_m2330484719_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(UNETWebSocketLib_t687350976_il2cpp_TypeInfo_var);
		UNETWebSocketLib_t687350976 * L_0 = UNETWebSocketLib_get_Instance_m1651960898(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = ___hostId0;
		int32_t L_2 = ___connectionId1;
		uint8_t* L_3 = ___error2;
		bool L_4 = UNETWebSocketLib_Disconnect_m686155674(L_0, L_1, L_2, (uint8_t*)L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean UnityEngine.Networking.NetworkTransport::Send(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)
extern "C"  bool NetworkTransport_Send_m1813092975 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, int32_t ___connectionId1, int32_t ___channelId2, ByteU5BU5D_t4116647657* ___buffer3, int32_t ___size4, uint8_t* ___error5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_Send_m1813092975_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(UNETWebSocketLib_t687350976_il2cpp_TypeInfo_var);
		UNETWebSocketLib_t687350976 * L_0 = UNETWebSocketLib_get_Instance_m1651960898(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = ___hostId0;
		int32_t L_2 = ___connectionId1;
		int32_t L_3 = ___channelId2;
		ByteU5BU5D_t4116647657* L_4 = ___buffer3;
		int32_t L_5 = ___size4;
		uint8_t* L_6 = ___error5;
		bool L_7 = UNETWebSocketLib_Send_m3927447004(L_0, L_1, L_2, L_3, L_4, L_5, (uint8_t*)L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// UnityEngine.Networking.NetworkEventType UnityEngine.Networking.NetworkTransport::ReceiveFromHost(System.Int32,System.Int32&,System.Int32&,System.Byte[],System.Int32,System.Int32&,System.Byte&)
extern "C"  int32_t NetworkTransport_ReceiveFromHost_m245759866 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, int32_t* ___connectionId1, int32_t* ___channelId2, ByteU5BU5D_t4116647657* ___buffer3, int32_t ___bufferSize4, int32_t* ___receivedSize5, uint8_t* ___error6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_ReceiveFromHost_m245759866_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(UNETWebSocketLib_t687350976_il2cpp_TypeInfo_var);
		UNETWebSocketLib_t687350976 * L_0 = UNETWebSocketLib_get_Instance_m1651960898(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = ___hostId0;
		int32_t* L_2 = ___connectionId1;
		int32_t* L_3 = ___channelId2;
		ByteU5BU5D_t4116647657* L_4 = ___buffer3;
		int32_t L_5 = ___bufferSize4;
		int32_t* L_6 = ___receivedSize5;
		uint8_t* L_7 = ___error6;
		int32_t L_8 = UNETWebSocketLib_ReceiveFromHost_m712468056(L_0, L_1, (int32_t*)L_2, (int32_t*)L_3, L_4, L_5, (int32_t*)L_6, (uint8_t*)L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_001b;
	}

IL_001b:
	{
		int32_t L_9 = V_0;
		return L_9;
	}
}
// System.Boolean UnityEngine.Networking.NetworkTransport::RemoveHost(System.Int32)
extern "C"  bool NetworkTransport_RemoveHost_m1576069304 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0008;
	}

IL_0008:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Networking.NetworkTransport::ConnectAsNetworkHost(System.Int32,System.String,System.Int32,UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.SourceID,UnityEngine.Networking.Types.NodeID,System.Byte&)
extern "C"  void NetworkTransport_ConnectAsNetworkHost_m2353972988 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, String_t* ___address1, int32_t ___port2, uint64_t ___network3, uint64_t ___source4, uint16_t ___node5, uint8_t* ___error6, const RuntimeMethod* method)
{
	{
		uint8_t* L_0 = ___error6;
		*((int8_t*)(L_0)) = (int8_t)0;
		return;
	}
}
// UnityEngine.Networking.NetworkEventType UnityEngine.Networking.NetworkTransport::ReceiveRelayEventFromHost(System.Int32,System.Byte&)
extern "C"  int32_t NetworkTransport_ReceiveRelayEventFromHost_m2308363197 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, uint8_t* ___error1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		uint8_t* L_0 = ___error1;
		*((int8_t*)(L_0)) = (int8_t)0;
		V_0 = 3;
		goto IL_000b;
	}

IL_000b:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Networking.NetworkTransport::ConnectToNetworkPeer(System.Int32,System.String,System.Int32,System.Int32,System.Int32,UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.SourceID,UnityEngine.Networking.Types.NodeID,System.Byte&)
extern "C"  int32_t NetworkTransport_ConnectToNetworkPeer_m461204670 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, String_t* ___address1, int32_t ___port2, int32_t ___exceptionConnectionId3, int32_t ___relaySlotId4, uint64_t ___network5, uint64_t ___source6, uint16_t ___node7, uint8_t* ___error8, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		uint8_t* L_0 = ___error8;
		*((int8_t*)(L_0)) = (int8_t)0;
		V_0 = (-1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.NetworkTransport::GetConnectionInfo(System.Int32,System.Int32,System.String&,System.Int32&,UnityEngine.Networking.Types.NetworkID&,UnityEngine.Networking.Types.NodeID&,System.Byte&)
extern "C"  void NetworkTransport_GetConnectionInfo_m2259616706 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, int32_t ___connectionId1, String_t** ___address2, int32_t* ___port3, uint64_t* ___network4, uint16_t* ___dstNode5, uint8_t* ___error6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_GetConnectionInfo_m2259616706_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t** L_0 = ___address2;
		*((RuntimeObject **)(L_0)) = (RuntimeObject *)_stringLiteral757602046;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_0), (RuntimeObject *)_stringLiteral757602046);
		int32_t* L_1 = ___port3;
		*((int32_t*)(L_1)) = (int32_t)0;
		uint64_t* L_2 = ___network4;
		*((int64_t*)(L_2)) = (int64_t)(((int64_t)((int64_t)(-1))));
		uint16_t* L_3 = ___dstNode5;
		*((int16_t*)(L_3)) = (int16_t)0;
		uint8_t* L_4 = ___error6;
		*((int8_t*)(L_4)) = (int8_t)0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.NetworkTransport::get_IsStarted()
extern "C"  bool NetworkTransport_get_IsStarted_m3614742619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_get_IsStarted_m3614742619_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTransport_t1089479308_il2cpp_TypeInfo_var);
		bool L_0 = ((NetworkTransport_t1089479308_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTransport_t1089479308_il2cpp_TypeInfo_var))->get_U3CIsStartedU3Ek__BackingField_1();
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Networking.NetworkTransport::ConnectWithSimulator(System.Int32,System.String,System.Int32,System.Int32,System.Byte&,UnityEngine.Networking.ConnectionSimulatorConfig)
extern "C"  int32_t NetworkTransport_ConnectWithSimulator_m2620266349 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, String_t* ___address1, int32_t ___port2, int32_t ___exeptionConnectionId3, uint8_t* ___error4, ConnectionSimulatorConfig_t1375549810 * ___conf5, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		uint8_t* L_0 = ___error4;
		*((int8_t*)(L_0)) = (int8_t)0;
		V_0 = (-1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.NetworkTransport::Init(UnityEngine.Networking.GlobalConfig)
extern "C"  void NetworkTransport_Init_m1021203550 (RuntimeObject * __this /* static, unused */, GlobalConfig_t833512557 * ___config0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Int32 UnityEngine.Networking.NetworkTransport::AddWebsocketHost(UnityEngine.Networking.HostTopology,System.Int32,System.String)
extern "C"  int32_t NetworkTransport_AddWebsocketHost_m3508994088 (RuntimeObject * __this /* static, unused */, HostTopology_t4059263395 * ___topology0, int32_t ___port1, String_t* ___ip2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (-1);
		goto IL_0008;
	}

IL_0008:
	{
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHostWithSimulator(UnityEngine.Networking.HostTopology,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t NetworkTransport_AddHostWithSimulator_m764501553 (RuntimeObject * __this /* static, unused */, HostTopology_t4059263395 * ___topology0, int32_t ___minTimeout1, int32_t ___maxTimeout2, int32_t ___port3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_AddHostWithSimulator_m764501553_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		HostTopology_t4059263395 * L_0 = ___topology0;
		int32_t L_1 = ___minTimeout1;
		int32_t L_2 = ___maxTimeout2;
		int32_t L_3 = ___port3;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkTransport_t1089479308_il2cpp_TypeInfo_var);
		int32_t L_4 = NetworkTransport_AddHostWithSimulator_m2523855845(NULL /*static, unused*/, L_0, L_1, L_2, L_3, (String_t*)NULL, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0011;
	}

IL_0011:
	{
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHostWithSimulator(UnityEngine.Networking.HostTopology,System.Int32,System.Int32,System.Int32,System.String)
extern "C"  int32_t NetworkTransport_AddHostWithSimulator_m2523855845 (RuntimeObject * __this /* static, unused */, HostTopology_t4059263395 * ___topology0, int32_t ___minTimeout1, int32_t ___maxTimeout2, int32_t ___port3, String_t* ___ip4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (-1);
		goto IL_0008;
	}

IL_0008:
	{
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Int32 UnityEngine.Networking.NetworkTransport::ConnectEndPoint(System.Int32,System.Net.EndPoint,System.Int32,System.Byte&)
extern "C"  int32_t NetworkTransport_ConnectEndPoint_m743044074 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, EndPoint_t982345378 * ___xboxOneEndPoint1, int32_t ___exceptionConnectionId2, uint8_t* ___error3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		uint8_t* L_0 = ___error3;
		*((int8_t*)(L_0)) = (int8_t)0;
		V_0 = (-1);
		goto IL_000b;
	}

IL_000b:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Networking.NetworkTransport::DoesEndPointUsePlatformProtocols(System.Net.EndPoint)
extern "C"  bool NetworkTransport_DoesEndPointUsePlatformProtocols_m748072121 (RuntimeObject * __this /* static, unused */, EndPoint_t982345378 * ___endPoint0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0008;
	}

IL_0008:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UnityEngine.Networking.NetworkTransport::StartBroadcastDiscovery(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Int32,System.Byte&)
extern "C"  bool NetworkTransport_StartBroadcastDiscovery_m3499887629 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, int32_t ___broadcastPort1, int32_t ___key2, int32_t ___version3, int32_t ___subversion4, ByteU5BU5D_t4116647657* ___buffer5, int32_t ___size6, int32_t ___timeout7, uint8_t* ___error8, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		uint8_t* L_0 = ___error8;
		*((int8_t*)(L_0)) = (int8_t)0;
		V_0 = (bool)0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.NetworkTransport::StopBroadcastDiscovery()
extern "C"  void NetworkTransport_StopBroadcastDiscovery_m3847658116 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransport::GetBroadcastConnectionInfo(System.Int32,System.String&,System.Int32&,System.Byte&)
extern "C"  void NetworkTransport_GetBroadcastConnectionInfo_m4236529341 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, String_t** ___address1, int32_t* ___port2, uint8_t* ___error3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_GetBroadcastConnectionInfo_m4236529341_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t** L_0 = ___address1;
		*((RuntimeObject **)(L_0)) = (RuntimeObject *)_stringLiteral757602046;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_0), (RuntimeObject *)_stringLiteral757602046);
		int32_t* L_1 = ___port2;
		*((int32_t*)(L_1)) = (int32_t)0;
		uint8_t* L_2 = ___error3;
		*((int8_t*)(L_2)) = (int8_t)0;
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransport::GetBroadcastConnectionMessage(System.Int32,System.Byte[],System.Int32,System.Int32&,System.Byte&)
extern "C"  void NetworkTransport_GetBroadcastConnectionMessage_m4291551967 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, ByteU5BU5D_t4116647657* ___buffer1, int32_t ___bufferSize2, int32_t* ___receivedSize3, uint8_t* ___error4, const RuntimeMethod* method)
{
	{
		int32_t* L_0 = ___receivedSize3;
		*((int32_t*)(L_0)) = (int32_t)0;
		uint8_t* L_1 = ___error4;
		*((int8_t*)(L_1)) = (int8_t)0;
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransport::SetBroadcastCredentials(System.Int32,System.Int32,System.Int32,System.Int32,System.Byte&)
extern "C"  void NetworkTransport_SetBroadcastCredentials_m1961897762 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, int32_t ___key1, int32_t ___version2, int32_t ___subversion3, uint8_t* ___error4, const RuntimeMethod* method)
{
	{
		uint8_t* L_0 = ___error4;
		*((int8_t*)(L_0)) = (int8_t)0;
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransport::.cctor()
extern "C"  void NetworkTransport__cctor_m3851733507 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport__cctor_m3851733507_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((NetworkTransport_t1089479308_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTransport_t1089479308_il2cpp_TypeInfo_var))->set_s_PacketSize_0(((int32_t)4000));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.Types.NetworkAccessToken::.ctor()
extern "C"  void NetworkAccessToken__ctor_m969521192 (NetworkAccessToken_t320639760 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkAccessToken__ctor_m969521192_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		__this->set_array_1(((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64))));
		return;
	}
}
// System.Void UnityEngine.Networking.Types.NetworkAccessToken::.ctor(System.String)
extern "C"  void NetworkAccessToken__ctor_m1548906336 (NetworkAccessToken_t320639760 * __this, String_t* ___strArray0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkAccessToken__ctor_m1548906336_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		String_t* L_0 = ___strArray0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_1 = Convert_FromBase64String_m3685135396(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->set_array_1(L_1);
		goto IL_002f;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_001a;
		throw e;
	}

CATCH_001a:
	{ // begin catch(System.Exception)
		__this->set_array_1(((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64))));
		goto IL_002f;
	} // end catch (depth: 1)

IL_002f:
	{
		return;
	}
}
// System.String UnityEngine.Networking.Types.NetworkAccessToken::GetByteString()
extern "C"  String_t* NetworkAccessToken_GetByteString_m3125030115 (NetworkAccessToken_t320639760 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkAccessToken_GetByteString_m3125030115_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_array_1();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		String_t* L_1 = Convert_ToBase64String_m3839334935(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.UNETWebSocketLib::.ctor()
extern "C"  void UNETWebSocketLib__ctor_m3891055645 (UNETWebSocketLib_t687350976 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL JS_UNETWebSockets_Init();
// System.Void UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_Init()
extern "C"  void UNETWebSocketLib_JS_UNETWebSockets_Init_m1663175152 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(JS_UNETWebSockets_Init)();

}
extern "C" void DEFAULT_CALL JS_UNETWebSockets_SocketCreate(int32_t, char*);
// System.Void UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_SocketCreate(System.Int32,System.String)
extern "C"  void UNETWebSocketLib_JS_UNETWebSockets_SocketCreate_m4185608284 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, String_t* ___url1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*);

	// Marshaling of parameter '___url1' to native representation
	char* ____url1_marshaled = NULL;
	____url1_marshaled = il2cpp_codegen_marshal_string(___url1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(JS_UNETWebSockets_SocketCreate)(___hostId0, ____url1_marshaled);

	// Marshaling cleanup of parameter '___url1' native representation
	il2cpp_codegen_marshal_free(____url1_marshaled);
	____url1_marshaled = NULL;

}
extern "C" int32_t DEFAULT_CALL JS_UNETWebSockets_SocketRecvEvntTypeFromHost(int32_t);
// System.Int32 UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_SocketRecvEvntTypeFromHost(System.Int32)
extern "C"  int32_t UNETWebSocketLib_JS_UNETWebSockets_SocketRecvEvntTypeFromHost_m2846787008 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(JS_UNETWebSockets_SocketRecvEvntTypeFromHost)(___hostId0);

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL JS_UNETWebSockets_SocketRecvEvntBuffLengthFromHost(int32_t);
// System.Int32 UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_SocketRecvEvntBuffLengthFromHost(System.Int32)
extern "C"  int32_t UNETWebSocketLib_JS_UNETWebSockets_SocketRecvEvntBuffLengthFromHost_m1817862721 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(JS_UNETWebSockets_SocketRecvEvntBuffLengthFromHost)(___hostId0);

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL JS_UNETWebSockets_SocketRecvEvntBuffFromHost(int32_t, uint8_t*, int32_t);
// System.Int32 UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_SocketRecvEvntBuffFromHost(System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t UNETWebSocketLib_JS_UNETWebSockets_SocketRecvEvntBuffFromHost_m1734420795 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, ByteU5BU5D_t4116647657* ___buff1, int32_t ___length2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, uint8_t*, int32_t);

	// Marshaling of parameter '___buff1' to native representation
	uint8_t* ____buff1_marshaled = NULL;
	if (___buff1 != NULL)
	{
		____buff1_marshaled = reinterpret_cast<uint8_t*>((___buff1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(JS_UNETWebSockets_SocketRecvEvntBuffFromHost)(___hostId0, ____buff1_marshaled, ___length2);

	return returnValue;
}
extern "C" void DEFAULT_CALL JS_UNETWebSockets_SocketCleanEvntFromHost(int32_t);
// System.Void UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_SocketCleanEvntFromHost(System.Int32)
extern "C"  void UNETWebSocketLib_JS_UNETWebSockets_SocketCleanEvntFromHost_m1987701607 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(JS_UNETWebSockets_SocketCleanEvntFromHost)(___hostId0);

}
extern "C" void DEFAULT_CALL JS_UNETWebSockets_SocketClose(int32_t);
// System.Void UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_SocketClose(System.Int32)
extern "C"  void UNETWebSocketLib_JS_UNETWebSockets_SocketClose_m1940787209 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(JS_UNETWebSockets_SocketClose)(___hostId0);

}
extern "C" void DEFAULT_CALL JS_UNETWebSockets_SocketSend(int32_t, uint8_t*, int32_t);
// System.Void UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_SocketSend(System.Int32,System.Byte[],System.Int32)
extern "C"  void UNETWebSocketLib_JS_UNETWebSockets_SocketSend_m1408259275 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, ByteU5BU5D_t4116647657* ___buff1, int32_t ___length2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, uint8_t*, int32_t);

	// Marshaling of parameter '___buff1' to native representation
	uint8_t* ____buff1_marshaled = NULL;
	if (___buff1 != NULL)
	{
		____buff1_marshaled = reinterpret_cast<uint8_t*>((___buff1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(JS_UNETWebSockets_SocketSend)(___hostId0, ____buff1_marshaled, ___length2);

}
extern "C" int32_t DEFAULT_CALL JS_UNETWebSockets_AddHost(uint32_t);
// System.Int32 UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_AddHost(System.UInt32)
extern "C"  int32_t UNETWebSocketLib_JS_UNETWebSockets_AddHost_m738051848 (RuntimeObject * __this /* static, unused */, uint32_t ___pingTimeout0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (uint32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(JS_UNETWebSockets_AddHost)(___pingTimeout0);

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL JS_UNETWebSockets_IsHostCorrect(int32_t);
// System.Boolean UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_IsHostCorrect(System.Int32)
extern "C"  bool UNETWebSocketLib_JS_UNETWebSockets_IsHostCorrect_m2117042243 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(JS_UNETWebSockets_IsHostCorrect)(___hostId0);

	return static_cast<bool>(returnValue);
}
extern "C" int32_t DEFAULT_CALL JS_UNETWebSockets_IsHostReadyToConnect(int32_t);
// System.Boolean UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_IsHostReadyToConnect(System.Int32)
extern "C"  bool UNETWebSocketLib_JS_UNETWebSockets_IsHostReadyToConnect_m2745408737 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(JS_UNETWebSockets_IsHostReadyToConnect)(___hostId0);

	return static_cast<bool>(returnValue);
}
extern "C" void DEFAULT_CALL JS_UNETWebSockets_SocketStop();
// System.Void UnityEngine.Networking.UNETWebSocketLib::JS_UNETWebSockets_SocketStop()
extern "C"  void UNETWebSocketLib_JS_UNETWebSockets_SocketStop_m2873444946 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(JS_UNETWebSockets_SocketStop)();

}
// UnityEngine.Networking.UNETWebSocketLib UnityEngine.Networking.UNETWebSocketLib::get_Instance()
extern "C"  UNETWebSocketLib_t687350976 * UNETWebSocketLib_get_Instance_m1651960898 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UNETWebSocketLib_get_Instance_m1651960898_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UNETWebSocketLib_t687350976 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(UNETWebSocketLib_t687350976_il2cpp_TypeInfo_var);
		UNETWebSocketLib_t687350976 * L_0 = ((UNETWebSocketLib_t687350976_StaticFields*)il2cpp_codegen_static_fields_for(UNETWebSocketLib_t687350976_il2cpp_TypeInfo_var))->get_instance_0();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		UNETWebSocketLib_t687350976 * L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Networking.UNETWebSocketLib::AddHost(UnityEngine.Networking.HostTopology,System.Int32)
extern "C"  int32_t UNETWebSocketLib_AddHost_m97350380 (UNETWebSocketLib_t687350976 * __this, HostTopology_t4059263395 * ___topology0, int32_t ___port1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UNETWebSocketLib_AddHost_m97350380_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		HostTopology_t4059263395 * L_0 = ___topology0;
		ConnectionConfig_t4173981269 * L_1 = HostTopology_get_DefaultConfig_m230960067(L_0, /*hidden argument*/NULL);
		uint16_t L_2 = ConnectionConfig_get_PacketSize_m195714670(L_1, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)((int32_t)128)));
		IL2CPP_RUNTIME_CLASS_INIT(UNETWebSocketLib_t687350976_il2cpp_TypeInfo_var);
		int32_t L_3 = ((UNETWebSocketLib_t687350976_StaticFields*)il2cpp_codegen_static_fields_for(UNETWebSocketLib_t687350976_il2cpp_TypeInfo_var))->get_m_MaxMessageSize_1();
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0028;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UNETWebSocketLib_t687350976_il2cpp_TypeInfo_var);
		int32_t L_5 = ((UNETWebSocketLib_t687350976_StaticFields*)il2cpp_codegen_static_fields_for(UNETWebSocketLib_t687350976_il2cpp_TypeInfo_var))->get_m_MaxMessageSize_1();
		G_B3_0 = L_5;
		goto IL_0029;
	}

IL_0028:
	{
		int32_t L_6 = V_0;
		G_B3_0 = L_6;
	}

IL_0029:
	{
		IL2CPP_RUNTIME_CLASS_INIT(UNETWebSocketLib_t687350976_il2cpp_TypeInfo_var);
		((UNETWebSocketLib_t687350976_StaticFields*)il2cpp_codegen_static_fields_for(UNETWebSocketLib_t687350976_il2cpp_TypeInfo_var))->set_m_MaxMessageSize_1(G_B3_0);
		HostTopology_t4059263395 * L_7 = ___topology0;
		ConnectionConfig_t4173981269 * L_8 = HostTopology_get_DefaultConfig_m230960067(L_7, /*hidden argument*/NULL);
		uint32_t L_9 = ConnectionConfig_get_PingTimeout_m2393238105(L_8, /*hidden argument*/NULL);
		int32_t L_10 = UNETWebSocketLib_JS_UNETWebSockets_AddHost_m738051848(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		goto IL_0044;
	}

IL_0044:
	{
		int32_t L_11 = V_1;
		return L_11;
	}
}
// System.Int32 UnityEngine.Networking.UNETWebSocketLib::Connect(System.Int32,System.String,System.Int32,System.Int32,System.Byte&)
extern "C"  int32_t UNETWebSocketLib_Connect_m3711350676 (UNETWebSocketLib_t687350976 * __this, int32_t ___hostId0, String_t* ___ip1, int32_t ___port2, int32_t ___exeptionConnectionId3, uint8_t* ___error4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UNETWebSocketLib_Connect_m3711350676_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		int32_t L_0 = ___hostId0;
		IL2CPP_RUNTIME_CLASS_INIT(UNETWebSocketLib_t687350976_il2cpp_TypeInfo_var);
		bool L_1 = UNETWebSocketLib_JS_UNETWebSockets_IsHostReadyToConnect_m2745408737(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		uint8_t* L_2 = ___error4;
		*((int8_t*)(L_2)) = (int8_t)1;
		V_0 = 0;
		goto IL_008c;
	}

IL_0018:
	{
		V_1 = (String_t*)NULL;
		String_t* L_3 = ___ip1;
		bool L_4 = String_StartsWith_m1759067526(L_3, _stringLiteral3236910554, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_003a;
		}
	}
	{
		String_t* L_5 = ___ip1;
		bool L_6 = String_StartsWith_m1759067526(L_5, _stringLiteral1041713293, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_005a;
		}
	}

IL_003a:
	{
		String_t* L_7 = ___ip1;
		String_t* L_8 = Int32_ToString_m141394615((int32_t*)(&___port2), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m3755062657(NULL /*static, unused*/, L_7, _stringLiteral3452614550, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		goto IL_007a;
	}

IL_005a:
	{
		String_t* L_10 = ___ip1;
		String_t* L_11 = Int32_ToString_m141394615((int32_t*)(&___port2), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral3236910554, L_10, _stringLiteral3452614550, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
	}

IL_007a:
	{
		int32_t L_13 = ___hostId0;
		String_t* L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(UNETWebSocketLib_t687350976_il2cpp_TypeInfo_var);
		UNETWebSocketLib_JS_UNETWebSockets_SocketCreate_m4185608284(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		uint8_t* L_15 = ___error4;
		*((int8_t*)(L_15)) = (int8_t)0;
		V_0 = 1;
		goto IL_008c;
	}

IL_008c:
	{
		int32_t L_16 = V_0;
		return L_16;
	}
}
// System.Boolean UnityEngine.Networking.UNETWebSocketLib::Disconnect(System.Int32,System.Int32,System.Byte&)
extern "C"  bool UNETWebSocketLib_Disconnect_m686155674 (UNETWebSocketLib_t687350976 * __this, int32_t ___hostId0, int32_t ___connectionId1, uint8_t* ___error2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UNETWebSocketLib_Disconnect_m686155674_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		int32_t L_0 = ___hostId0;
		IL2CPP_RUNTIME_CLASS_INIT(UNETWebSocketLib_t687350976_il2cpp_TypeInfo_var);
		bool L_1 = UNETWebSocketLib_JS_UNETWebSockets_IsHostCorrect_m2117042243(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		uint8_t* L_2 = ___error2;
		*((int8_t*)(L_2)) = (int8_t)1;
		V_0 = (bool)0;
		goto IL_0027;
	}

IL_0017:
	{
		int32_t L_3 = ___hostId0;
		IL2CPP_RUNTIME_CLASS_INIT(UNETWebSocketLib_t687350976_il2cpp_TypeInfo_var);
		UNETWebSocketLib_JS_UNETWebSockets_SocketClose_m1940787209(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		uint8_t* L_4 = ___error2;
		*((int8_t*)(L_4)) = (int8_t)0;
		V_0 = (bool)1;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean UnityEngine.Networking.UNETWebSocketLib::Send(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)
extern "C"  bool UNETWebSocketLib_Send_m3927447004 (UNETWebSocketLib_t687350976 * __this, int32_t ___hostId0, int32_t ___connectionId1, int32_t ___channelId2, ByteU5BU5D_t4116647657* ___buff3, int32_t ___size4, uint8_t* ___error5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UNETWebSocketLib_Send_m3927447004_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	{
		int32_t L_0 = ___hostId0;
		IL2CPP_RUNTIME_CLASS_INIT(UNETWebSocketLib_t687350976_il2cpp_TypeInfo_var);
		bool L_1 = UNETWebSocketLib_JS_UNETWebSockets_IsHostCorrect_m2117042243(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		uint8_t* L_2 = ___error5;
		*((int8_t*)(L_2)) = (int8_t)1;
		V_0 = (bool)0;
		goto IL_0078;
	}

IL_0018:
	{
		int32_t L_3 = ___connectionId1;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_002b;
		}
	}
	{
		uint8_t* L_4 = ___error5;
		*((int8_t*)(L_4)) = (int8_t)2;
		V_0 = (bool)0;
		goto IL_0078;
	}

IL_002b:
	{
		int32_t L_5 = ___size4;
		IL2CPP_RUNTIME_CLASS_INIT(UNETWebSocketLib_t687350976_il2cpp_TypeInfo_var);
		int32_t L_6 = ((UNETWebSocketLib_t687350976_StaticFields*)il2cpp_codegen_static_fields_for(UNETWebSocketLib_t687350976_il2cpp_TypeInfo_var))->get_m_MaxMessageSize_1();
		if ((((int32_t)L_5) <= ((int32_t)L_6)))
		{
			goto IL_0043;
		}
	}
	{
		uint8_t* L_7 = ___error5;
		*((int8_t*)(L_7)) = (int8_t)7;
		V_0 = (bool)0;
		goto IL_0078;
	}

IL_0043:
	{
		ByteU5BU5D_t4116647657* L_8 = ___buff3;
		V_1 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))), (int32_t)1))));
		ByteU5BU5D_t4116647657* L_9 = V_1;
		int32_t L_10 = ___channelId2;
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)(((int32_t)((uint8_t)L_10))));
		ByteU5BU5D_t4116647657* L_11 = ___buff3;
		ByteU5BU5D_t4116647657* L_12 = V_1;
		ByteU5BU5D_t4116647657* L_13 = ___buff3;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_11, 0, (RuntimeArray *)(RuntimeArray *)L_12, 1, (((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length)))), /*hidden argument*/NULL);
		int32_t L_14 = ___hostId0;
		ByteU5BU5D_t4116647657* L_15 = V_1;
		int32_t L_16 = ___size4;
		IL2CPP_RUNTIME_CLASS_INIT(UNETWebSocketLib_t687350976_il2cpp_TypeInfo_var);
		UNETWebSocketLib_JS_UNETWebSockets_SocketSend_m1408259275(NULL /*static, unused*/, L_14, L_15, ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)), /*hidden argument*/NULL);
		uint8_t* L_17 = ___error5;
		*((int8_t*)(L_17)) = (int8_t)0;
		V_0 = (bool)1;
		goto IL_0078;
	}

IL_0078:
	{
		bool L_18 = V_0;
		return L_18;
	}
}
// UnityEngine.Networking.NetworkEventType UnityEngine.Networking.UNETWebSocketLib::ReceiveFromHost(System.Int32,System.Int32&,System.Int32&,System.Byte[],System.Int32,System.Int32&,System.Byte&)
extern "C"  int32_t UNETWebSocketLib_ReceiveFromHost_m712468056 (UNETWebSocketLib_t687350976 * __this, int32_t ___hostId0, int32_t* ___connectionId1, int32_t* ___channelId2, ByteU5BU5D_t4116647657* ___buffer3, int32_t ___bufferSize4, int32_t* ___receivedSize5, uint8_t* ___error6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UNETWebSocketLib_ReceiveFromHost_m712468056_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ByteU5BU5D_t4116647657* V_2 = NULL;
	{
		int32_t* L_0 = ___connectionId1;
		*((int32_t*)(L_0)) = (int32_t)1;
		int32_t* L_1 = ___channelId2;
		*((int32_t*)(L_1)) = (int32_t)0;
		int32_t* L_2 = ___receivedSize5;
		*((int32_t*)(L_2)) = (int32_t)0;
		uint8_t* L_3 = ___error6;
		*((int8_t*)(L_3)) = (int8_t)0;
		int32_t L_4 = ___hostId0;
		IL2CPP_RUNTIME_CLASS_INIT(UNETWebSocketLib_t687350976_il2cpp_TypeInfo_var);
		bool L_5 = UNETWebSocketLib_JS_UNETWebSockets_IsHostCorrect_m2117042243(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0026;
		}
	}
	{
		uint8_t* L_6 = ___error6;
		*((int8_t*)(L_6)) = (int8_t)1;
		V_0 = 3;
		goto IL_00a1;
	}

IL_0026:
	{
		int32_t L_7 = ___hostId0;
		IL2CPP_RUNTIME_CLASS_INIT(UNETWebSocketLib_t687350976_il2cpp_TypeInfo_var);
		int32_t L_8 = UNETWebSocketLib_JS_UNETWebSockets_SocketRecvEvntTypeFromHost_m2846787008(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		int32_t L_9 = V_1;
		if ((!(((uint32_t)L_9) == ((uint32_t)3))))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_10 = V_1;
		V_0 = L_10;
		goto IL_00a1;
	}

IL_003b:
	{
		int32_t L_11 = V_1;
		if (L_11)
		{
			goto IL_0094;
		}
	}
	{
		int32_t* L_12 = ___receivedSize5;
		int32_t L_13 = ___hostId0;
		IL2CPP_RUNTIME_CLASS_INIT(UNETWebSocketLib_t687350976_il2cpp_TypeInfo_var);
		int32_t L_14 = UNETWebSocketLib_JS_UNETWebSockets_SocketRecvEvntBuffLengthFromHost_m1817862721(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		*((int32_t*)(L_12)) = (int32_t)L_14;
		int32_t* L_15 = ___receivedSize5;
		int32_t L_16 = ___bufferSize4;
		if ((((int32_t)(*((int32_t*)L_15))) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1)))))
		{
			goto IL_0063;
		}
	}
	{
		uint8_t* L_17 = ___error6;
		*((int8_t*)(L_17)) = (int8_t)7;
		V_0 = 0;
		goto IL_00a1;
	}

IL_0063:
	{
		int32_t* L_18 = ___receivedSize5;
		V_2 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)(*((int32_t*)L_18))));
		int32_t L_19 = ___hostId0;
		ByteU5BU5D_t4116647657* L_20 = V_2;
		int32_t* L_21 = ___receivedSize5;
		IL2CPP_RUNTIME_CLASS_INIT(UNETWebSocketLib_t687350976_il2cpp_TypeInfo_var);
		UNETWebSocketLib_JS_UNETWebSockets_SocketRecvEvntBuffFromHost_m1734420795(NULL /*static, unused*/, L_19, L_20, (*((int32_t*)L_21)), /*hidden argument*/NULL);
		int32_t* L_22 = ___channelId2;
		ByteU5BU5D_t4116647657* L_23 = V_2;
		int32_t L_24 = 0;
		uint8_t L_25 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		*((int32_t*)(L_22)) = (int32_t)L_25;
		int32_t* L_26 = ___receivedSize5;
		int32_t* L_27 = ___receivedSize5;
		*((int32_t*)(L_26)) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(*((int32_t*)L_27)), (int32_t)1));
		ByteU5BU5D_t4116647657* L_28 = V_2;
		ByteU5BU5D_t4116647657* L_29 = ___buffer3;
		int32_t* L_30 = ___receivedSize5;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_28, 1, (RuntimeArray *)(RuntimeArray *)L_29, 0, (*((int32_t*)L_30)), /*hidden argument*/NULL);
	}

IL_0094:
	{
		int32_t L_31 = ___hostId0;
		IL2CPP_RUNTIME_CLASS_INIT(UNETWebSocketLib_t687350976_il2cpp_TypeInfo_var);
		UNETWebSocketLib_JS_UNETWebSockets_SocketCleanEvntFromHost_m1987701607(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		int32_t L_32 = V_1;
		V_0 = L_32;
		goto IL_00a1;
	}

IL_00a1:
	{
		int32_t L_33 = V_0;
		return L_33;
	}
}
// System.Void UnityEngine.Networking.UNETWebSocketLib::Init()
extern "C"  void UNETWebSocketLib_Init_m3744735638 (UNETWebSocketLib_t687350976 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UNETWebSocketLib_Init_m3744735638_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UNETWebSocketLib_t687350976_il2cpp_TypeInfo_var);
		UNETWebSocketLib_JS_UNETWebSockets_Init_m1663175152(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.UNETWebSocketLib::Stop()
extern "C"  void UNETWebSocketLib_Stop_m4087678754 (UNETWebSocketLib_t687350976 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UNETWebSocketLib_Stop_m4087678754_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UNETWebSocketLib_t687350976_il2cpp_TypeInfo_var);
		UNETWebSocketLib_JS_UNETWebSockets_SocketStop_m2873444946(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.UNETWebSocketLib::Dispose()
extern "C"  void UNETWebSocketLib_Dispose_m65583585 (UNETWebSocketLib_t687350976 * __this, const RuntimeMethod* method)
{
	{
		UNETWebSocketLib_Stop_m4087678754(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.UNETWebSocketLib::.cctor()
extern "C"  void UNETWebSocketLib__cctor_m3654200216 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UNETWebSocketLib__cctor_m3654200216_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UNETWebSocketLib_t687350976 * L_0 = (UNETWebSocketLib_t687350976 *)il2cpp_codegen_object_new(UNETWebSocketLib_t687350976_il2cpp_TypeInfo_var);
		UNETWebSocketLib__ctor_m3891055645(L_0, /*hidden argument*/NULL);
		((UNETWebSocketLib_t687350976_StaticFields*)il2cpp_codegen_static_fields_for(UNETWebSocketLib_t687350976_il2cpp_TypeInfo_var))->set_instance_0(L_0);
		((UNETWebSocketLib_t687350976_StaticFields*)il2cpp_codegen_static_fields_for(UNETWebSocketLib_t687350976_il2cpp_TypeInfo_var))->set_m_MaxMessageSize_1(((int32_t)1500));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Networking.Types.SourceID UnityEngine.Networking.Utility::GetSourceID()
extern "C"  uint64_t Utility_GetSourceID_m602367204 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		String_t* L_0 = SystemInfo_get_deviceUniqueIdentifier_m3439870207(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		V_0 = (((int64_t)((int64_t)L_1)));
		goto IL_0012;
	}

IL_0012:
	{
		uint64_t L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Networking.Utility::SetAccessTokenForNetwork(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken)
extern "C"  void Utility_SetAccessTokenForNetwork_m483792653 (RuntimeObject * __this /* static, unused */, uint64_t ___netId0, NetworkAccessToken_t320639760 * ___accessToken1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utility_SetAccessTokenForNetwork_m483792653_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t2761513741_il2cpp_TypeInfo_var);
		Dictionary_2_t3502080855 * L_0 = ((Utility_t2761513741_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t2761513741_il2cpp_TypeInfo_var))->get_s_dictTokens_0();
		uint64_t L_1 = ___netId0;
		bool L_2 = Dictionary_2_ContainsKey_m3634856078(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3634856078_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t2761513741_il2cpp_TypeInfo_var);
		Dictionary_2_t3502080855 * L_3 = ((Utility_t2761513741_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t2761513741_il2cpp_TypeInfo_var))->get_s_dictTokens_0();
		uint64_t L_4 = ___netId0;
		Dictionary_2_Remove_m1903597580(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_m1903597580_RuntimeMethod_var);
	}

IL_001d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t2761513741_il2cpp_TypeInfo_var);
		Dictionary_2_t3502080855 * L_5 = ((Utility_t2761513741_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t2761513741_il2cpp_TypeInfo_var))->get_s_dictTokens_0();
		uint64_t L_6 = ___netId0;
		NetworkAccessToken_t320639760 * L_7 = ___accessToken1;
		Dictionary_2_Add_m3785116836(L_5, L_6, L_7, /*hidden argument*/Dictionary_2_Add_m3785116836_RuntimeMethod_var);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkAccessToken UnityEngine.Networking.Utility::GetAccessTokenForNetwork(UnityEngine.Networking.Types.NetworkID)
extern "C"  NetworkAccessToken_t320639760 * Utility_GetAccessTokenForNetwork_m3460910439 (RuntimeObject * __this /* static, unused */, uint64_t ___netId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utility_GetAccessTokenForNetwork_m3460910439_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkAccessToken_t320639760 * V_0 = NULL;
	NetworkAccessToken_t320639760 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t2761513741_il2cpp_TypeInfo_var);
		Dictionary_2_t3502080855 * L_0 = ((Utility_t2761513741_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t2761513741_il2cpp_TypeInfo_var))->get_s_dictTokens_0();
		uint64_t L_1 = ___netId0;
		bool L_2 = Dictionary_2_TryGetValue_m1533749912(L_0, L_1, (NetworkAccessToken_t320639760 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m1533749912_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		NetworkAccessToken_t320639760 * L_3 = (NetworkAccessToken_t320639760 *)il2cpp_codegen_object_new(NetworkAccessToken_t320639760_il2cpp_TypeInfo_var);
		NetworkAccessToken__ctor_m969521192(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_001b:
	{
		NetworkAccessToken_t320639760 * L_4 = V_0;
		V_1 = L_4;
		goto IL_0022;
	}

IL_0022:
	{
		NetworkAccessToken_t320639760 * L_5 = V_1;
		return L_5;
	}
}
// System.Void UnityEngine.Networking.Utility::.cctor()
extern "C"  void Utility__cctor_m3381620260 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utility__cctor_m3381620260_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3502080855 * L_0 = (Dictionary_2_t3502080855 *)il2cpp_codegen_object_new(Dictionary_2_t3502080855_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2501111586(L_0, /*hidden argument*/Dictionary_2__ctor_m2501111586_RuntimeMethod_var);
		((Utility_t2761513741_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t2761513741_il2cpp_TypeInfo_var))->set_s_dictTokens_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.WebGL.UNetWebGlHelpers::InitUpdateFunction()
extern "C"  void UNetWebGlHelpers_InitUpdateFunction_m1335550908 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (*UNetWebGlHelpers_InitUpdateFunction_m1335550908_ftn) ();
	static UNetWebGlHelpers_InitUpdateFunction_m1335550908_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UNetWebGlHelpers_InitUpdateFunction_m1335550908_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebGL.UNetWebGlHelpers::InitUpdateFunction()");
	_il2cpp_icall_func();
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
