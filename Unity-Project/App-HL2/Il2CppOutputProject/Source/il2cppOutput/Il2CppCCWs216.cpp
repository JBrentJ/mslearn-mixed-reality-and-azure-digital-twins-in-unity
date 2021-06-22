#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>

#include "vm/CachedCCWBase.h"
#include "utils/New.h"

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

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<Microsoft.Geospatial.TileId,#=z0MnGekwpRgFU7$iVW8X5$xonhEZvRaHEMXVHPyh9aO2kc52YdA==>
struct Dictionary_2_t049AB000068AC79B45EED8BCCAE47B23B0B18B72;
// System.Collections.Generic.Dictionary`2<Microsoft.Geospatial.TileId,#=zG9WBI4m7na9OshAewdvflELclh5D>
struct Dictionary_2_tD7BA2A0D4A15ABAD76816CADA4A47E4EED50BB77;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct Dictionary_2_t9C346C961DA726D2E935BCA9F27BF39FE4EB463B;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>
struct EventFunction_1_t0F9FDBA279A6B752B2CB31C8D5A4E5BE54438A68;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>>
struct EventFunction_1_t9D9637F452B6DE98AB382482491DC9DD5A47CC5D;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>>
struct EventFunction_1_tE5C222AE72719E5202DC74DF6E9F245C703FA987;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>>
struct EventFunction_1_t76159F6E13D48C7588ADA8FE915484A89BCBD0AC;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>
struct EventFunction_1_t1560006E71599AFE4A68DB24BD17A244C2C42B5E;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Quaternion>>
struct EventFunction_1_tC82499C2264931E95E922A73BE558B8B1000DEBF;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<System.Single>>
struct EventFunction_1_tE53387E5C9435C87B00E3776C1284FACDAF828DD;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector2>>
struct EventFunction_1_tBDD479D195AB503216CA2C141279707876E2CE6B;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector3>>
struct EventFunction_1_t0A490D6A60344ECB31239B80D7A64B857DECE37A;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler>
struct EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler>
struct EventFunction_1_tA38ADF88EA964859D63EEA6C3B9786CF7247171A;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler>
struct EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler>
struct EventFunction_1_t2717B4BEEC8F13851D1A3B0BD2C00F24A0D7B3F5;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler>
struct EventFunction_1_t8A66D1428C54D47DE7C3767C8336D7D738E4CFD7;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler>
struct EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointHandler>
struct EventFunction_1_tC180EC34C0F84626214501D36C59A6D96F3BAE9A;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandMeshHandler>
struct EventFunction_1_tDA972648D941D55D8F76F1DF59415693FAE31F4A;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler>
struct EventFunction_1_t6A301BBD7AE53D439749F7D768B738644EEE54F4;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler>
struct EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler>
struct EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler>
struct EventFunction_1_tC25248F4120420D70DBE7C0E2CE8203E96093880;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler>
struct EventFunction_1_t6A1B7B8EE1A910A06AEC85165DE92D36EADF88E6;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler>
struct EventFunction_1_t3185DCA90F112F51BD30605E3CE96271ECB077ED;
// System.EventHandler`1<Microsoft.Maps.Unity.MapSession>
struct EventHandler_1_t5A44536C29E4E6D13AE3EFBF556A08847DFE96DC;
// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct HashSet_1_tB517370B36B1616B4EBF2636DBC0FB76ED989826;
// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>
struct HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944;
// System.Collections.Generic.HashSet`1<Microsoft.Maps.Unity.MapPin>
struct HashSet_1_t95A5C57A7B9892EBF521BC2C19F0EB9258FB974E;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>>
struct InputEventData_1_t51D8897349D68573795ABC1D041110873F021DDE;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Input.HandMeshInfo>
struct InputEventData_1_t27A9E42F8C4750017CCF75B72B28AF7426CA29E9;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct InputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Quaternion>
struct InputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Single>
struct InputEventData_1_t3311F6FA584F0F3689AF220E22C7EB910A3B4CEC;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector2>
struct InputEventData_1_t087726847A7755115A9464A201CE76C01156D000;
// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector3>
struct InputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E;
// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>>
struct List_1_tFBD74CBAB85AF6A2E49F61373B8A7503C022E2CD;
// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>>
struct List_1_tB2338FC47817B39A67EDF98A81C666A585CBB1B0;
// System.Collections.Generic.List`1<#=zCZTNcCQIQyHmdF3yzrf99HvCI3Q8>
struct List_1_t3583F7E200CA31239569F517D46EC6A79785FE7D;
// System.Collections.Generic.List`1<#=zXT6PAmOt3SpWxcIyXtV0HZNYSGH4>
struct List_1_t9784882413F9EEDBD78A33DB4E900C033610AF29;
// System.Collections.Generic.List`1<#=zcn8lNm8$im3OCUjLCJDAQvsHGNji>
struct List_1_tA1AC911A62FB80716188A6C2E74EC1CDA333C070;
// System.Collections.Generic.List`1<#=ziuJgwfIQN7Cq3ebdm5MMOxI9zsHK>
struct List_1_t33758A17F9C5272569ADB02F8230576D4AF1E6D6;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider>
struct List_1_t94FC783F2185B5CB832CD245C5E89430CC6533D4;
// System.Collections.Generic.List`1<Microsoft.Maps.Unity.MapPin>
struct List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115;
// System.Collections.Generic.List`1<Microsoft.Maps.Unity.MapRenderer>
struct List_1_tB730799AB9076F9B3BBB2088B97BB4241771F8D0;
// System.Collections.Generic.List`1<UnityEngine.Mesh>
struct List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<Microsoft.Geospatial.TileId>
struct List_1_tE8B748F7F3B1B8182E2BEC12CFC14A94D030D267;
// System.Collections.Generic.List`1<Microsoft.AspNetCore.Internal.MemoryBufferWriter/CompletedBuffer>
struct List_1_t33E7C0A941CE085262E5F5E54C9CEEDB3AF2760D;
// Nerdbank.Streams.Sequence`1<System.Byte>
struct Sequence_1_tABC4B1F6E83EAA8EECFB1C674B244FFE3EDF94A0;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct SourcePoseEventData_1_tD500DD60037038B0256A85F515AC203F8B5FD7A5;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Quaternion>
struct SourcePoseEventData_1_t62FBE40FF45DB019D531E85782BEB7801DD3DCDC;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.TrackingState>
struct SourcePoseEventData_1_t93B64FA6890DA53EE729AF86DB0A28D8D2DF6237;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector2>
struct SourcePoseEventData_1_t2563FDACCC27400A28715E96CB3B25880150DBB8;
// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector3>
struct SourcePoseEventData_1_tBC103FBA20596670CA31FDCDEB31D1E9411AEE0A;
// System.Collections.Generic.Stack`1<UnityEngine.GameObject>
struct Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Threading.Tasks.Task`1<System.Net.WebSockets.WebSocketReceiveResult>
struct Task_1_t79E764D87096B674F330B1306805A0FF72B2E83E;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// Microsoft.Geospatial.TileId[]
struct TileIdU5BU5D_tC3C41979AF33FB8BA28A821B4FCE3507F85E37B0;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871;
// System.Net.WebSockets.WebSocketState[]
struct WebSocketStateU5BU5D_t1BB6FB2DCD8E670734694F18E718B567A9EA91C4;
// #=zEgwucroqHQ3qyhQOBF$8hhRKBtqV
struct U23U3DzEgwucroqHQ3qyhQOBFU248hhRKBtqV_t975EF43C9578F598D9B1A0A4F8EBE23AA2100D30;
// #=zG9WBI4m7na9OshAewdvflELclh5D
struct U23U3DzG9WBI4m7na9OshAewdvflELclh5D_t4FCDFA6C716769365ABE1DBACA7528030D717DC3;
// #=zSGAjct8w61XD9NwbVtcamQwAVN4i
struct U23U3DzSGAjct8w61XD9NwbVtcamQwAVN4i_t63810C266FCF7349E740FEF3D49697C18C74AACC;
// #=zreTq2aMiQHwa4PeFRZDv3dFu3_uL
struct U23U3DzreTq2aMiQHwa4PeFRZDv3dFu3_uL_tD47C36C75E1BD177F00903A320F6D2DBD6AD678C;
// #=zslffm3rEpcrDGeF0LnKQktU=
struct U23U3Dzslffm3rEpcrDGeF0LnKQktUU3D_tF0EE0F1F72AE6E41707DB83400FD2C4A7245F2A4;
// #=zxNi94QYCEvGCRwW2p7FSSls0nuoJ
struct U23U3DzxNi94QYCEvGCRwW2p7FSSls0nuoJ_t8F6C966885732C368324D29C66D74D034151A8E2;
// #=zz2WQAsO2UUEplIiiNuE7oQk=
struct U23U3Dzz2WQAsO2UUEplIiiNuE7oQkU3D_t0EE83925EB2ADE849F30C026B3E102D9250CCA6F;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1;
// UnityEngine.BoxCollider
struct BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29;
// Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData
struct DiagnosticsEventData_t66E2FC32D9CCC21E8436A3BD941E41FA16BB0959;
// Microsoft.MixedReality.Toolkit.Input.DictationEventData
struct DictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD;
// Microsoft.Maps.Unity.ElevationTileLayerList
struct ElevationTileLayerList_t3EEC2F8696DA2541B15517E87F3C2B3EFC6E6B13;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714;
// Microsoft.MixedReality.Toolkit.Input.FocusEventData
struct FocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData
struct HandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// Microsoft.Maps.Unity.IMapSceneAnimationController
struct IMapSceneAnimationController_t7AC166DE2CEE7970CFEAB67CFB1F81946ADD3148;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_tF1E8AAA822A4BC884BC20CAB4B84F5826BBE282C;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider
struct IMixedRealityEyeGazeProvider_tA854FE94B4C220F8742E193148C51A8C30744627;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProvider
struct IMixedRealityGazeProvider_t8CD90C5B0C055251CD31B191A9C898C0717BC3E9;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t81B35976BCAABB86634D8CAB6C5EBECE36D65D3A;
// System.Buffers.IPinnable
struct IPinnable_t08DF74A05B0B91A0740277BC3FB652D42C3FCC2C;
// System.ComponentModel.ISite
struct ISite_tC1E55EC6FA743BE8C9D79C838308E788B90C8790;
// Microsoft.MixedReality.Toolkit.Input.InputEventData
struct InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// Microsoft.Maps.Unity.MapLabelLayer
struct MapLabelLayer_tA1A1A075D41B9606B44B32386433CF9B4725A5A5;
// Microsoft.Maps.Unity.MapSession
struct MapSession_t250FD50789E1C78E85BD85621AFB52FB62A9023E;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile
struct MixedRealityDiagnosticsProfile_tB77D28B2D28A27D6719DC464D9A087D90FA62A35;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionRulesProfile
struct MixedRealityInputActionRulesProfile_t92E2FDE69469BC16B8FFD33677466320A63D9ECD;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule
struct MixedRealityInputModule_t846C494ECBA395077B5AAE96CA25B69E9243679F;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile
struct MixedRealityInputSystemProfile_t31C758089592D55A720AF9AABFF0B95B989740E7;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData
struct MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B;
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler
struct MixedRealityToolkitVisualProfiler_t220C11F70BC64DCE0842637B35DC785217B6A3B3;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// MessagePack.SequencePool
struct SequencePool_tAF90EB941F07D8F524346D87B0908274C20D0593;
// Microsoft.MixedReality.Toolkit.Input.SourceStateEventData
struct SourceStateEventData_t98ADEA28B57F43D9889BA9E98876F6D7685D1E69;
// Microsoft.MixedReality.Toolkit.Input.SpeechEventData
struct SpeechEventData_t9922EE268A5F18C835C491A80700AB1B073AC5AE;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// Microsoft.Maps.Unity.TextureTileLayerList
struct TextureTileLayerList_tEF7045D4A8E00005129C46B1B064FF11D37689F8;
// System.Threading.Timer
struct Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB;
// System.Type
struct Type_t;
// System.Text.UTF8Encoding
struct UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Net.WebSockets.ManagedWebSocket/Utf8MessageState
struct Utf8MessageState_tE921FCD77394CBA2FFCAB969044B8068951955D3;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ;
struct Guid_t ;
struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ;
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 ;
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ;
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() = 0;
};

// System.Object


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.ComponentModel.MarshalByValueComponent
struct MarshalByValueComponent_t932153909102130DE1C7FE6F988139CD9FEF2E3D  : public RuntimeObject
{
public:
	// System.ComponentModel.ISite System.ComponentModel.MarshalByValueComponent::site
	RuntimeObject* ___site_1;
	// System.ComponentModel.EventHandlerList System.ComponentModel.MarshalByValueComponent::events
	EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * ___events_2;

public:
	inline static int32_t get_offset_of_site_1() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t932153909102130DE1C7FE6F988139CD9FEF2E3D, ___site_1)); }
	inline RuntimeObject* get_site_1() const { return ___site_1; }
	inline RuntimeObject** get_address_of_site_1() { return &___site_1; }
	inline void set_site_1(RuntimeObject* value)
	{
		___site_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___site_1), (void*)value);
	}

	inline static int32_t get_offset_of_events_2() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t932153909102130DE1C7FE6F988139CD9FEF2E3D, ___events_2)); }
	inline EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * get_events_2() const { return ___events_2; }
	inline EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 ** get_address_of_events_2() { return &___events_2; }
	inline void set_events_2(EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * value)
	{
		___events_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___events_2), (void*)value);
	}
};

struct MarshalByValueComponent_t932153909102130DE1C7FE6F988139CD9FEF2E3D_StaticFields
{
public:
	// System.Object System.ComponentModel.MarshalByValueComponent::EventDisposed
	RuntimeObject * ___EventDisposed_0;

public:
	inline static int32_t get_offset_of_EventDisposed_0() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t932153909102130DE1C7FE6F988139CD9FEF2E3D_StaticFields, ___EventDisposed_0)); }
	inline RuntimeObject * get_EventDisposed_0() const { return ___EventDisposed_0; }
	inline RuntimeObject ** get_address_of_EventDisposed_0() { return &___EventDisposed_0; }
	inline void set_EventDisposed_0(RuntimeObject * value)
	{
		___EventDisposed_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventDisposed_0), (void*)value);
	}
};


// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.MatchCollection::_regex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ____regex_0;
	// System.Collections.ArrayList System.Text.RegularExpressions.MatchCollection::_matches
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ____matches_1;
	// System.Boolean System.Text.RegularExpressions.MatchCollection::_done
	bool ____done_2;
	// System.String System.Text.RegularExpressions.MatchCollection::_input
	String_t* ____input_3;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_beginning
	int32_t ____beginning_4;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_length
	int32_t ____length_5;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_startat
	int32_t ____startat_6;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_prevlen
	int32_t ____prevlen_7;

public:
	inline static int32_t get_offset_of__regex_0() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____regex_0)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get__regex_0() const { return ____regex_0; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of__regex_0() { return &____regex_0; }
	inline void set__regex_0(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		____regex_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____regex_0), (void*)value);
	}

	inline static int32_t get_offset_of__matches_1() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____matches_1)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get__matches_1() const { return ____matches_1; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of__matches_1() { return &____matches_1; }
	inline void set__matches_1(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		____matches_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____matches_1), (void*)value);
	}

	inline static int32_t get_offset_of__done_2() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____done_2)); }
	inline bool get__done_2() const { return ____done_2; }
	inline bool* get_address_of__done_2() { return &____done_2; }
	inline void set__done_2(bool value)
	{
		____done_2 = value;
	}

	inline static int32_t get_offset_of__input_3() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____input_3)); }
	inline String_t* get__input_3() const { return ____input_3; }
	inline String_t** get_address_of__input_3() { return &____input_3; }
	inline void set__input_3(String_t* value)
	{
		____input_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____input_3), (void*)value);
	}

	inline static int32_t get_offset_of__beginning_4() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____beginning_4)); }
	inline int32_t get__beginning_4() const { return ____beginning_4; }
	inline int32_t* get_address_of__beginning_4() { return &____beginning_4; }
	inline void set__beginning_4(int32_t value)
	{
		____beginning_4 = value;
	}

	inline static int32_t get_offset_of__length_5() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____length_5)); }
	inline int32_t get__length_5() const { return ____length_5; }
	inline int32_t* get_address_of__length_5() { return &____length_5; }
	inline void set__length_5(int32_t value)
	{
		____length_5 = value;
	}

	inline static int32_t get_offset_of__startat_6() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____startat_6)); }
	inline int32_t get__startat_6() const { return ____startat_6; }
	inline int32_t* get_address_of__startat_6() { return &____startat_6; }
	inline void set__startat_6(int32_t value)
	{
		____startat_6 = value;
	}

	inline static int32_t get_offset_of__prevlen_7() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E, ____prevlen_7)); }
	inline int32_t get__prevlen_7() const { return ____prevlen_7; }
	inline int32_t* get_address_of__prevlen_7() { return &____prevlen_7; }
	inline void set__prevlen_7(int32_t value)
	{
		____prevlen_7 = value;
	}
};

struct MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_StaticFields
{
public:
	// System.Int32 System.Text.RegularExpressions.MatchCollection::infinite
	int32_t ___infinite_8;

public:
	inline static int32_t get_offset_of_infinite_8() { return static_cast<int32_t>(offsetof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_StaticFields, ___infinite_8)); }
	inline int32_t get_infinite_8() const { return ___infinite_8; }
	inline int32_t* get_address_of_infinite_8() { return &___infinite_8; }
	inline void set_infinite_8(int32_t value)
	{
		___infinite_8 = value;
	}
};


// System.Runtime.Remoting.Messaging.MessageDictionary
struct MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE  : public RuntimeObject
{
public:
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MessageDictionary::_internalProperties
	RuntimeObject* ____internalProperties_0;
	// System.Runtime.Remoting.Messaging.IMethodMessage System.Runtime.Remoting.Messaging.MessageDictionary::_message
	RuntimeObject* ____message_1;
	// System.String[] System.Runtime.Remoting.Messaging.MessageDictionary::_methodKeys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____methodKeys_2;
	// System.Boolean System.Runtime.Remoting.Messaging.MessageDictionary::_ownProperties
	bool ____ownProperties_3;

public:
	inline static int32_t get_offset_of__internalProperties_0() { return static_cast<int32_t>(offsetof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE, ____internalProperties_0)); }
	inline RuntimeObject* get__internalProperties_0() const { return ____internalProperties_0; }
	inline RuntimeObject** get_address_of__internalProperties_0() { return &____internalProperties_0; }
	inline void set__internalProperties_0(RuntimeObject* value)
	{
		____internalProperties_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____internalProperties_0), (void*)value);
	}

	inline static int32_t get_offset_of__message_1() { return static_cast<int32_t>(offsetof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE, ____message_1)); }
	inline RuntimeObject* get__message_1() const { return ____message_1; }
	inline RuntimeObject** get_address_of__message_1() { return &____message_1; }
	inline void set__message_1(RuntimeObject* value)
	{
		____message_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_1), (void*)value);
	}

	inline static int32_t get_offset_of__methodKeys_2() { return static_cast<int32_t>(offsetof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE, ____methodKeys_2)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__methodKeys_2() const { return ____methodKeys_2; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__methodKeys_2() { return &____methodKeys_2; }
	inline void set__methodKeys_2(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____methodKeys_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____methodKeys_2), (void*)value);
	}

	inline static int32_t get_offset_of__ownProperties_3() { return static_cast<int32_t>(offsetof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE, ____ownProperties_3)); }
	inline bool get__ownProperties_3() const { return ____ownProperties_3; }
	inline bool* get_address_of__ownProperties_3() { return &____ownProperties_3; }
	inline void set__ownProperties_3(bool value)
	{
		____ownProperties_3 = value;
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Net.WebSockets.WebSocket
struct WebSocket_t163494E6D52FFC7BACDCD1488EB1B61B392C298D  : public RuntimeObject
{
public:

public:
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// #=zn_NNy$QPYYrSfVMkU1dRxd$kZDxkiyBTBQ==
struct U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D 
{
public:
	// System.Double #=zn_NNy$QPYYrSfVMkU1dRxd$kZDxkiyBTBQ==::#=z8Kw8kQk=
	double ___U23U3Dz8Kw8kQkU3D_7;
	// System.Double #=zn_NNy$QPYYrSfVMkU1dRxd$kZDxkiyBTBQ==::#=zd7Ui1iM=
	double ___U23U3Dzd7Ui1iMU3D_8;
	// System.Double #=zn_NNy$QPYYrSfVMkU1dRxd$kZDxkiyBTBQ==::#=zz$tDAJU=
	double ___U23U3DzzU24tDAJUU3D_9;

public:
	inline static int32_t get_offset_of_U23U3Dz8Kw8kQkU3D_7() { return static_cast<int32_t>(offsetof(U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D, ___U23U3Dz8Kw8kQkU3D_7)); }
	inline double get_U23U3Dz8Kw8kQkU3D_7() const { return ___U23U3Dz8Kw8kQkU3D_7; }
	inline double* get_address_of_U23U3Dz8Kw8kQkU3D_7() { return &___U23U3Dz8Kw8kQkU3D_7; }
	inline void set_U23U3Dz8Kw8kQkU3D_7(double value)
	{
		___U23U3Dz8Kw8kQkU3D_7 = value;
	}

	inline static int32_t get_offset_of_U23U3Dzd7Ui1iMU3D_8() { return static_cast<int32_t>(offsetof(U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D, ___U23U3Dzd7Ui1iMU3D_8)); }
	inline double get_U23U3Dzd7Ui1iMU3D_8() const { return ___U23U3Dzd7Ui1iMU3D_8; }
	inline double* get_address_of_U23U3Dzd7Ui1iMU3D_8() { return &___U23U3Dzd7Ui1iMU3D_8; }
	inline void set_U23U3Dzd7Ui1iMU3D_8(double value)
	{
		___U23U3Dzd7Ui1iMU3D_8 = value;
	}

	inline static int32_t get_offset_of_U23U3DzzU24tDAJUU3D_9() { return static_cast<int32_t>(offsetof(U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D, ___U23U3DzzU24tDAJUU3D_9)); }
	inline double get_U23U3DzzU24tDAJUU3D_9() const { return ___U23U3DzzU24tDAJUU3D_9; }
	inline double* get_address_of_U23U3DzzU24tDAJUU3D_9() { return &___U23U3DzzU24tDAJUU3D_9; }
	inline void set_U23U3DzzU24tDAJUU3D_9(double value)
	{
		___U23U3DzzU24tDAJUU3D_9 = value;
	}
};

struct U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D_StaticFields
{
public:
	// #=zn_NNy$QPYYrSfVMkU1dRxd$kZDxkiyBTBQ== #=zn_NNy$QPYYrSfVMkU1dRxd$kZDxkiyBTBQ==::#=zesqA6EI=
	U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  ___U23U3DzesqA6EIU3D_0;
	// #=zn_NNy$QPYYrSfVMkU1dRxd$kZDxkiyBTBQ== #=zn_NNy$QPYYrSfVMkU1dRxd$kZDxkiyBTBQ==::#=zv9PICU0=
	U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  ___U23U3Dzv9PICU0U3D_1;
	// #=zn_NNy$QPYYrSfVMkU1dRxd$kZDxkiyBTBQ== #=zn_NNy$QPYYrSfVMkU1dRxd$kZDxkiyBTBQ==::#=zMe1FeQo=
	U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  ___U23U3DzMe1FeQoU3D_2;
	// #=zn_NNy$QPYYrSfVMkU1dRxd$kZDxkiyBTBQ== #=zn_NNy$QPYYrSfVMkU1dRxd$kZDxkiyBTBQ==::#=z_wxtDSI=
	U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  ___U23U3Dz_wxtDSIU3D_3;
	// #=zn_NNy$QPYYrSfVMkU1dRxd$kZDxkiyBTBQ== #=zn_NNy$QPYYrSfVMkU1dRxd$kZDxkiyBTBQ==::#=zpkj8nAE=
	U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  ___U23U3Dzpkj8nAEU3D_4;
	// #=zn_NNy$QPYYrSfVMkU1dRxd$kZDxkiyBTBQ== #=zn_NNy$QPYYrSfVMkU1dRxd$kZDxkiyBTBQ==::#=zwdgcWN4=
	U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  ___U23U3DzwdgcWN4U3D_5;
	// #=zn_NNy$QPYYrSfVMkU1dRxd$kZDxkiyBTBQ== #=zn_NNy$QPYYrSfVMkU1dRxd$kZDxkiyBTBQ==::#=zCiJrol8=
	U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  ___U23U3DzCiJrol8U3D_6;

public:
	inline static int32_t get_offset_of_U23U3DzesqA6EIU3D_0() { return static_cast<int32_t>(offsetof(U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D_StaticFields, ___U23U3DzesqA6EIU3D_0)); }
	inline U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  get_U23U3DzesqA6EIU3D_0() const { return ___U23U3DzesqA6EIU3D_0; }
	inline U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D * get_address_of_U23U3DzesqA6EIU3D_0() { return &___U23U3DzesqA6EIU3D_0; }
	inline void set_U23U3DzesqA6EIU3D_0(U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  value)
	{
		___U23U3DzesqA6EIU3D_0 = value;
	}

	inline static int32_t get_offset_of_U23U3Dzv9PICU0U3D_1() { return static_cast<int32_t>(offsetof(U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D_StaticFields, ___U23U3Dzv9PICU0U3D_1)); }
	inline U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  get_U23U3Dzv9PICU0U3D_1() const { return ___U23U3Dzv9PICU0U3D_1; }
	inline U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D * get_address_of_U23U3Dzv9PICU0U3D_1() { return &___U23U3Dzv9PICU0U3D_1; }
	inline void set_U23U3Dzv9PICU0U3D_1(U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  value)
	{
		___U23U3Dzv9PICU0U3D_1 = value;
	}

	inline static int32_t get_offset_of_U23U3DzMe1FeQoU3D_2() { return static_cast<int32_t>(offsetof(U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D_StaticFields, ___U23U3DzMe1FeQoU3D_2)); }
	inline U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  get_U23U3DzMe1FeQoU3D_2() const { return ___U23U3DzMe1FeQoU3D_2; }
	inline U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D * get_address_of_U23U3DzMe1FeQoU3D_2() { return &___U23U3DzMe1FeQoU3D_2; }
	inline void set_U23U3DzMe1FeQoU3D_2(U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  value)
	{
		___U23U3DzMe1FeQoU3D_2 = value;
	}

	inline static int32_t get_offset_of_U23U3Dz_wxtDSIU3D_3() { return static_cast<int32_t>(offsetof(U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D_StaticFields, ___U23U3Dz_wxtDSIU3D_3)); }
	inline U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  get_U23U3Dz_wxtDSIU3D_3() const { return ___U23U3Dz_wxtDSIU3D_3; }
	inline U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D * get_address_of_U23U3Dz_wxtDSIU3D_3() { return &___U23U3Dz_wxtDSIU3D_3; }
	inline void set_U23U3Dz_wxtDSIU3D_3(U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  value)
	{
		___U23U3Dz_wxtDSIU3D_3 = value;
	}

	inline static int32_t get_offset_of_U23U3Dzpkj8nAEU3D_4() { return static_cast<int32_t>(offsetof(U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D_StaticFields, ___U23U3Dzpkj8nAEU3D_4)); }
	inline U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  get_U23U3Dzpkj8nAEU3D_4() const { return ___U23U3Dzpkj8nAEU3D_4; }
	inline U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D * get_address_of_U23U3Dzpkj8nAEU3D_4() { return &___U23U3Dzpkj8nAEU3D_4; }
	inline void set_U23U3Dzpkj8nAEU3D_4(U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  value)
	{
		___U23U3Dzpkj8nAEU3D_4 = value;
	}

	inline static int32_t get_offset_of_U23U3DzwdgcWN4U3D_5() { return static_cast<int32_t>(offsetof(U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D_StaticFields, ___U23U3DzwdgcWN4U3D_5)); }
	inline U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  get_U23U3DzwdgcWN4U3D_5() const { return ___U23U3DzwdgcWN4U3D_5; }
	inline U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D * get_address_of_U23U3DzwdgcWN4U3D_5() { return &___U23U3DzwdgcWN4U3D_5; }
	inline void set_U23U3DzwdgcWN4U3D_5(U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  value)
	{
		___U23U3DzwdgcWN4U3D_5 = value;
	}

	inline static int32_t get_offset_of_U23U3DzCiJrol8U3D_6() { return static_cast<int32_t>(offsetof(U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D_StaticFields, ___U23U3DzCiJrol8U3D_6)); }
	inline U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  get_U23U3DzCiJrol8U3D_6() const { return ___U23U3DzCiJrol8U3D_6; }
	inline U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D * get_address_of_U23U3DzCiJrol8U3D_6() { return &___U23U3DzCiJrol8U3D_6; }
	inline void set_U23U3DzCiJrol8U3D_6(U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  value)
	{
		___U23U3DzCiJrol8U3D_6 = value;
	}
};


// #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw=
struct U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B 
{
public:
	// System.Double #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw=::#=zAgay4aA=
	double ___U23U3DzAgay4aAU3D_2;
	// System.Double #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw=::#=z7kHv$4U=
	double ___U23U3Dz7kHvU244UU3D_3;
	// System.Double #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw=::#=zUbZ6BJM=
	double ___U23U3DzUbZ6BJMU3D_4;
	// System.Double #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw=::#=zKvzwkvw=
	double ___U23U3DzKvzwkvwU3D_5;
	// System.Double #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw=::#=z_bWHoJU=
	double ___U23U3Dz_bWHoJUU3D_6;
	// System.Double #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw=::#=zoLpGtjY=
	double ___U23U3DzoLpGtjYU3D_7;
	// System.Double #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw=::#=z0O9XGAY=
	double ___U23U3Dz0O9XGAYU3D_8;
	// System.Double #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw=::#=zRI3FGYY=
	double ___U23U3DzRI3FGYYU3D_9;
	// System.Double #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw=::#=zecW6PvY=
	double ___U23U3DzecW6PvYU3D_10;
	// System.Double #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw=::#=zhRjflL8=
	double ___U23U3DzhRjflL8U3D_11;
	// System.Double #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw=::#=zC4a_$xE=
	double ___U23U3DzC4a_U24xEU3D_12;
	// System.Double #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw=::#=zVN23tYs=
	double ___U23U3DzVN23tYsU3D_13;
	// System.Double #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw=::#=z42K_Ujk=
	double ___U23U3Dz42K_UjkU3D_14;
	// System.Double #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw=::#=zYMZlUOQ=
	double ___U23U3DzYMZlUOQU3D_15;
	// System.Double #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw=::#=z0cC2tTU=
	double ___U23U3Dz0cC2tTUU3D_16;
	// System.Double #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw=::#=zzoRqnvY=
	double ___U23U3DzzoRqnvYU3D_17;

public:
	inline static int32_t get_offset_of_U23U3DzAgay4aAU3D_2() { return static_cast<int32_t>(offsetof(U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B, ___U23U3DzAgay4aAU3D_2)); }
	inline double get_U23U3DzAgay4aAU3D_2() const { return ___U23U3DzAgay4aAU3D_2; }
	inline double* get_address_of_U23U3DzAgay4aAU3D_2() { return &___U23U3DzAgay4aAU3D_2; }
	inline void set_U23U3DzAgay4aAU3D_2(double value)
	{
		___U23U3DzAgay4aAU3D_2 = value;
	}

	inline static int32_t get_offset_of_U23U3Dz7kHvU244UU3D_3() { return static_cast<int32_t>(offsetof(U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B, ___U23U3Dz7kHvU244UU3D_3)); }
	inline double get_U23U3Dz7kHvU244UU3D_3() const { return ___U23U3Dz7kHvU244UU3D_3; }
	inline double* get_address_of_U23U3Dz7kHvU244UU3D_3() { return &___U23U3Dz7kHvU244UU3D_3; }
	inline void set_U23U3Dz7kHvU244UU3D_3(double value)
	{
		___U23U3Dz7kHvU244UU3D_3 = value;
	}

	inline static int32_t get_offset_of_U23U3DzUbZ6BJMU3D_4() { return static_cast<int32_t>(offsetof(U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B, ___U23U3DzUbZ6BJMU3D_4)); }
	inline double get_U23U3DzUbZ6BJMU3D_4() const { return ___U23U3DzUbZ6BJMU3D_4; }
	inline double* get_address_of_U23U3DzUbZ6BJMU3D_4() { return &___U23U3DzUbZ6BJMU3D_4; }
	inline void set_U23U3DzUbZ6BJMU3D_4(double value)
	{
		___U23U3DzUbZ6BJMU3D_4 = value;
	}

	inline static int32_t get_offset_of_U23U3DzKvzwkvwU3D_5() { return static_cast<int32_t>(offsetof(U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B, ___U23U3DzKvzwkvwU3D_5)); }
	inline double get_U23U3DzKvzwkvwU3D_5() const { return ___U23U3DzKvzwkvwU3D_5; }
	inline double* get_address_of_U23U3DzKvzwkvwU3D_5() { return &___U23U3DzKvzwkvwU3D_5; }
	inline void set_U23U3DzKvzwkvwU3D_5(double value)
	{
		___U23U3DzKvzwkvwU3D_5 = value;
	}

	inline static int32_t get_offset_of_U23U3Dz_bWHoJUU3D_6() { return static_cast<int32_t>(offsetof(U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B, ___U23U3Dz_bWHoJUU3D_6)); }
	inline double get_U23U3Dz_bWHoJUU3D_6() const { return ___U23U3Dz_bWHoJUU3D_6; }
	inline double* get_address_of_U23U3Dz_bWHoJUU3D_6() { return &___U23U3Dz_bWHoJUU3D_6; }
	inline void set_U23U3Dz_bWHoJUU3D_6(double value)
	{
		___U23U3Dz_bWHoJUU3D_6 = value;
	}

	inline static int32_t get_offset_of_U23U3DzoLpGtjYU3D_7() { return static_cast<int32_t>(offsetof(U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B, ___U23U3DzoLpGtjYU3D_7)); }
	inline double get_U23U3DzoLpGtjYU3D_7() const { return ___U23U3DzoLpGtjYU3D_7; }
	inline double* get_address_of_U23U3DzoLpGtjYU3D_7() { return &___U23U3DzoLpGtjYU3D_7; }
	inline void set_U23U3DzoLpGtjYU3D_7(double value)
	{
		___U23U3DzoLpGtjYU3D_7 = value;
	}

	inline static int32_t get_offset_of_U23U3Dz0O9XGAYU3D_8() { return static_cast<int32_t>(offsetof(U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B, ___U23U3Dz0O9XGAYU3D_8)); }
	inline double get_U23U3Dz0O9XGAYU3D_8() const { return ___U23U3Dz0O9XGAYU3D_8; }
	inline double* get_address_of_U23U3Dz0O9XGAYU3D_8() { return &___U23U3Dz0O9XGAYU3D_8; }
	inline void set_U23U3Dz0O9XGAYU3D_8(double value)
	{
		___U23U3Dz0O9XGAYU3D_8 = value;
	}

	inline static int32_t get_offset_of_U23U3DzRI3FGYYU3D_9() { return static_cast<int32_t>(offsetof(U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B, ___U23U3DzRI3FGYYU3D_9)); }
	inline double get_U23U3DzRI3FGYYU3D_9() const { return ___U23U3DzRI3FGYYU3D_9; }
	inline double* get_address_of_U23U3DzRI3FGYYU3D_9() { return &___U23U3DzRI3FGYYU3D_9; }
	inline void set_U23U3DzRI3FGYYU3D_9(double value)
	{
		___U23U3DzRI3FGYYU3D_9 = value;
	}

	inline static int32_t get_offset_of_U23U3DzecW6PvYU3D_10() { return static_cast<int32_t>(offsetof(U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B, ___U23U3DzecW6PvYU3D_10)); }
	inline double get_U23U3DzecW6PvYU3D_10() const { return ___U23U3DzecW6PvYU3D_10; }
	inline double* get_address_of_U23U3DzecW6PvYU3D_10() { return &___U23U3DzecW6PvYU3D_10; }
	inline void set_U23U3DzecW6PvYU3D_10(double value)
	{
		___U23U3DzecW6PvYU3D_10 = value;
	}

	inline static int32_t get_offset_of_U23U3DzhRjflL8U3D_11() { return static_cast<int32_t>(offsetof(U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B, ___U23U3DzhRjflL8U3D_11)); }
	inline double get_U23U3DzhRjflL8U3D_11() const { return ___U23U3DzhRjflL8U3D_11; }
	inline double* get_address_of_U23U3DzhRjflL8U3D_11() { return &___U23U3DzhRjflL8U3D_11; }
	inline void set_U23U3DzhRjflL8U3D_11(double value)
	{
		___U23U3DzhRjflL8U3D_11 = value;
	}

	inline static int32_t get_offset_of_U23U3DzC4a_U24xEU3D_12() { return static_cast<int32_t>(offsetof(U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B, ___U23U3DzC4a_U24xEU3D_12)); }
	inline double get_U23U3DzC4a_U24xEU3D_12() const { return ___U23U3DzC4a_U24xEU3D_12; }
	inline double* get_address_of_U23U3DzC4a_U24xEU3D_12() { return &___U23U3DzC4a_U24xEU3D_12; }
	inline void set_U23U3DzC4a_U24xEU3D_12(double value)
	{
		___U23U3DzC4a_U24xEU3D_12 = value;
	}

	inline static int32_t get_offset_of_U23U3DzVN23tYsU3D_13() { return static_cast<int32_t>(offsetof(U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B, ___U23U3DzVN23tYsU3D_13)); }
	inline double get_U23U3DzVN23tYsU3D_13() const { return ___U23U3DzVN23tYsU3D_13; }
	inline double* get_address_of_U23U3DzVN23tYsU3D_13() { return &___U23U3DzVN23tYsU3D_13; }
	inline void set_U23U3DzVN23tYsU3D_13(double value)
	{
		___U23U3DzVN23tYsU3D_13 = value;
	}

	inline static int32_t get_offset_of_U23U3Dz42K_UjkU3D_14() { return static_cast<int32_t>(offsetof(U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B, ___U23U3Dz42K_UjkU3D_14)); }
	inline double get_U23U3Dz42K_UjkU3D_14() const { return ___U23U3Dz42K_UjkU3D_14; }
	inline double* get_address_of_U23U3Dz42K_UjkU3D_14() { return &___U23U3Dz42K_UjkU3D_14; }
	inline void set_U23U3Dz42K_UjkU3D_14(double value)
	{
		___U23U3Dz42K_UjkU3D_14 = value;
	}

	inline static int32_t get_offset_of_U23U3DzYMZlUOQU3D_15() { return static_cast<int32_t>(offsetof(U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B, ___U23U3DzYMZlUOQU3D_15)); }
	inline double get_U23U3DzYMZlUOQU3D_15() const { return ___U23U3DzYMZlUOQU3D_15; }
	inline double* get_address_of_U23U3DzYMZlUOQU3D_15() { return &___U23U3DzYMZlUOQU3D_15; }
	inline void set_U23U3DzYMZlUOQU3D_15(double value)
	{
		___U23U3DzYMZlUOQU3D_15 = value;
	}

	inline static int32_t get_offset_of_U23U3Dz0cC2tTUU3D_16() { return static_cast<int32_t>(offsetof(U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B, ___U23U3Dz0cC2tTUU3D_16)); }
	inline double get_U23U3Dz0cC2tTUU3D_16() const { return ___U23U3Dz0cC2tTUU3D_16; }
	inline double* get_address_of_U23U3Dz0cC2tTUU3D_16() { return &___U23U3Dz0cC2tTUU3D_16; }
	inline void set_U23U3Dz0cC2tTUU3D_16(double value)
	{
		___U23U3Dz0cC2tTUU3D_16 = value;
	}

	inline static int32_t get_offset_of_U23U3DzzoRqnvYU3D_17() { return static_cast<int32_t>(offsetof(U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B, ___U23U3DzzoRqnvYU3D_17)); }
	inline double get_U23U3DzzoRqnvYU3D_17() const { return ___U23U3DzzoRqnvYU3D_17; }
	inline double* get_address_of_U23U3DzzoRqnvYU3D_17() { return &___U23U3DzzoRqnvYU3D_17; }
	inline void set_U23U3DzzoRqnvYU3D_17(double value)
	{
		___U23U3DzzoRqnvYU3D_17 = value;
	}
};

struct U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B_StaticFields
{
public:
	// #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw= #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw=::#=zVxPCo6E=
	U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B  ___U23U3DzVxPCo6EU3D_0;
	// #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw= #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw=::#=zesqA6EI=
	U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B  ___U23U3DzesqA6EIU3D_1;

public:
	inline static int32_t get_offset_of_U23U3DzVxPCo6EU3D_0() { return static_cast<int32_t>(offsetof(U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B_StaticFields, ___U23U3DzVxPCo6EU3D_0)); }
	inline U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B  get_U23U3DzVxPCo6EU3D_0() const { return ___U23U3DzVxPCo6EU3D_0; }
	inline U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B * get_address_of_U23U3DzVxPCo6EU3D_0() { return &___U23U3DzVxPCo6EU3D_0; }
	inline void set_U23U3DzVxPCo6EU3D_0(U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B  value)
	{
		___U23U3DzVxPCo6EU3D_0 = value;
	}

	inline static int32_t get_offset_of_U23U3DzesqA6EIU3D_1() { return static_cast<int32_t>(offsetof(U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B_StaticFields, ___U23U3DzesqA6EIU3D_1)); }
	inline U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B  get_U23U3DzesqA6EIU3D_1() const { return ___U23U3DzesqA6EIU3D_1; }
	inline U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B * get_address_of_U23U3DzesqA6EIU3D_1() { return &___U23U3DzesqA6EIU3D_1; }
	inline void set_U23U3DzesqA6EIU3D_1(U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B  value)
	{
		___U23U3DzesqA6EIU3D_1 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// Windows.Foundation.DateTime
struct DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C 
{
public:
	// System.Int64 Windows.Foundation.DateTime::UniversalTime
	int64_t ___UniversalTime_0;

public:
	inline static int32_t get_offset_of_UniversalTime_0() { return static_cast<int32_t>(offsetof(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C, ___UniversalTime_0)); }
	inline int64_t get_UniversalTime_0() const { return ___UniversalTime_0; }
	inline int64_t* get_address_of_UniversalTime_0() { return &___UniversalTime_0; }
	inline void set_UniversalTime_0(int64_t value)
	{
		___UniversalTime_0 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// Microsoft.Geospatial.LatLon
struct LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99 
{
public:
	// System.Double Microsoft.Geospatial.LatLon::#=zM9rQiaQjFSiD3YTuh6A49Cj9ONBU
	double ___U23U3DzM9rQiaQjFSiD3YTuh6A49Cj9ONBU_8;
	// System.Double Microsoft.Geospatial.LatLon::#=zlnCfSYuw_w3LdKBU_O2Mt2PWp4Lh
	double ___U23U3DzlnCfSYuw_w3LdKBU_O2Mt2PWp4Lh_9;

public:
	inline static int32_t get_offset_of_U23U3DzM9rQiaQjFSiD3YTuh6A49Cj9ONBU_8() { return static_cast<int32_t>(offsetof(LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99, ___U23U3DzM9rQiaQjFSiD3YTuh6A49Cj9ONBU_8)); }
	inline double get_U23U3DzM9rQiaQjFSiD3YTuh6A49Cj9ONBU_8() const { return ___U23U3DzM9rQiaQjFSiD3YTuh6A49Cj9ONBU_8; }
	inline double* get_address_of_U23U3DzM9rQiaQjFSiD3YTuh6A49Cj9ONBU_8() { return &___U23U3DzM9rQiaQjFSiD3YTuh6A49Cj9ONBU_8; }
	inline void set_U23U3DzM9rQiaQjFSiD3YTuh6A49Cj9ONBU_8(double value)
	{
		___U23U3DzM9rQiaQjFSiD3YTuh6A49Cj9ONBU_8 = value;
	}

	inline static int32_t get_offset_of_U23U3DzlnCfSYuw_w3LdKBU_O2Mt2PWp4Lh_9() { return static_cast<int32_t>(offsetof(LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99, ___U23U3DzlnCfSYuw_w3LdKBU_O2Mt2PWp4Lh_9)); }
	inline double get_U23U3DzlnCfSYuw_w3LdKBU_O2Mt2PWp4Lh_9() const { return ___U23U3DzlnCfSYuw_w3LdKBU_O2Mt2PWp4Lh_9; }
	inline double* get_address_of_U23U3DzlnCfSYuw_w3LdKBU_O2Mt2PWp4Lh_9() { return &___U23U3DzlnCfSYuw_w3LdKBU_O2Mt2PWp4Lh_9; }
	inline void set_U23U3DzlnCfSYuw_w3LdKBU_O2Mt2PWp4Lh_9(double value)
	{
		___U23U3DzlnCfSYuw_w3LdKBU_O2Mt2PWp4Lh_9 = value;
	}
};

struct LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99_StaticFields
{
public:
	// Microsoft.Geospatial.LatLon Microsoft.Geospatial.LatLon::MinValue
	LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99  ___MinValue_4;
	// Microsoft.Geospatial.LatLon Microsoft.Geospatial.LatLon::MaxValue
	LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99  ___MaxValue_5;
	// Microsoft.Geospatial.LatLon Microsoft.Geospatial.LatLon::Origin
	LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99  ___Origin_7;

public:
	inline static int32_t get_offset_of_MinValue_4() { return static_cast<int32_t>(offsetof(LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99_StaticFields, ___MinValue_4)); }
	inline LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99  get_MinValue_4() const { return ___MinValue_4; }
	inline LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99 * get_address_of_MinValue_4() { return &___MinValue_4; }
	inline void set_MinValue_4(LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99  value)
	{
		___MinValue_4 = value;
	}

	inline static int32_t get_offset_of_MaxValue_5() { return static_cast<int32_t>(offsetof(LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99_StaticFields, ___MaxValue_5)); }
	inline LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99  get_MaxValue_5() const { return ___MaxValue_5; }
	inline LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99 * get_address_of_MaxValue_5() { return &___MaxValue_5; }
	inline void set_MaxValue_5(LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99  value)
	{
		___MaxValue_5 = value;
	}

	inline static int32_t get_offset_of_Origin_7() { return static_cast<int32_t>(offsetof(LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99_StaticFields, ___Origin_7)); }
	inline LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99  get_Origin_7() const { return ___Origin_7; }
	inline LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99 * get_address_of_Origin_7() { return &___Origin_7; }
	inline void set_Origin_7(LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99  value)
	{
		___Origin_7 = value;
	}
};


// Microsoft.Maps.Unity.LatLonWrapper
struct LatLonWrapper_tAECAE12B0A62DE49E57EC25734C8938758F716FE 
{
public:
	// System.Double Microsoft.Maps.Unity.LatLonWrapper::_latitude
	double ____latitude_0;
	// System.Double Microsoft.Maps.Unity.LatLonWrapper::_longitude
	double ____longitude_1;

public:
	inline static int32_t get_offset_of__latitude_0() { return static_cast<int32_t>(offsetof(LatLonWrapper_tAECAE12B0A62DE49E57EC25734C8938758F716FE, ____latitude_0)); }
	inline double get__latitude_0() const { return ____latitude_0; }
	inline double* get_address_of__latitude_0() { return &____latitude_0; }
	inline void set__latitude_0(double value)
	{
		____latitude_0 = value;
	}

	inline static int32_t get_offset_of__longitude_1() { return static_cast<int32_t>(offsetof(LatLonWrapper_tAECAE12B0A62DE49E57EC25734C8938758F716FE, ____longitude_1)); }
	inline double get__longitude_1() const { return ____longitude_1; }
	inline double* get_address_of__longitude_1() { return &____longitude_1; }
	inline void set__longitude_1(double value)
	{
		____longitude_1 = value;
	}
};


// System.Numerics.Matrix4x4
struct Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 
{
public:
	// System.Single System.Numerics.Matrix4x4::M11
	float ___M11_0;
	// System.Single System.Numerics.Matrix4x4::M12
	float ___M12_1;
	// System.Single System.Numerics.Matrix4x4::M13
	float ___M13_2;
	// System.Single System.Numerics.Matrix4x4::M14
	float ___M14_3;
	// System.Single System.Numerics.Matrix4x4::M21
	float ___M21_4;
	// System.Single System.Numerics.Matrix4x4::M22
	float ___M22_5;
	// System.Single System.Numerics.Matrix4x4::M23
	float ___M23_6;
	// System.Single System.Numerics.Matrix4x4::M24
	float ___M24_7;
	// System.Single System.Numerics.Matrix4x4::M31
	float ___M31_8;
	// System.Single System.Numerics.Matrix4x4::M32
	float ___M32_9;
	// System.Single System.Numerics.Matrix4x4::M33
	float ___M33_10;
	// System.Single System.Numerics.Matrix4x4::M34
	float ___M34_11;
	// System.Single System.Numerics.Matrix4x4::M41
	float ___M41_12;
	// System.Single System.Numerics.Matrix4x4::M42
	float ___M42_13;
	// System.Single System.Numerics.Matrix4x4::M43
	float ___M43_14;
	// System.Single System.Numerics.Matrix4x4::M44
	float ___M44_15;

public:
	inline static int32_t get_offset_of_M11_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M11_0)); }
	inline float get_M11_0() const { return ___M11_0; }
	inline float* get_address_of_M11_0() { return &___M11_0; }
	inline void set_M11_0(float value)
	{
		___M11_0 = value;
	}

	inline static int32_t get_offset_of_M12_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M12_1)); }
	inline float get_M12_1() const { return ___M12_1; }
	inline float* get_address_of_M12_1() { return &___M12_1; }
	inline void set_M12_1(float value)
	{
		___M12_1 = value;
	}

	inline static int32_t get_offset_of_M13_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M13_2)); }
	inline float get_M13_2() const { return ___M13_2; }
	inline float* get_address_of_M13_2() { return &___M13_2; }
	inline void set_M13_2(float value)
	{
		___M13_2 = value;
	}

	inline static int32_t get_offset_of_M14_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M14_3)); }
	inline float get_M14_3() const { return ___M14_3; }
	inline float* get_address_of_M14_3() { return &___M14_3; }
	inline void set_M14_3(float value)
	{
		___M14_3 = value;
	}

	inline static int32_t get_offset_of_M21_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M21_4)); }
	inline float get_M21_4() const { return ___M21_4; }
	inline float* get_address_of_M21_4() { return &___M21_4; }
	inline void set_M21_4(float value)
	{
		___M21_4 = value;
	}

	inline static int32_t get_offset_of_M22_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M22_5)); }
	inline float get_M22_5() const { return ___M22_5; }
	inline float* get_address_of_M22_5() { return &___M22_5; }
	inline void set_M22_5(float value)
	{
		___M22_5 = value;
	}

	inline static int32_t get_offset_of_M23_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M23_6)); }
	inline float get_M23_6() const { return ___M23_6; }
	inline float* get_address_of_M23_6() { return &___M23_6; }
	inline void set_M23_6(float value)
	{
		___M23_6 = value;
	}

	inline static int32_t get_offset_of_M24_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M24_7)); }
	inline float get_M24_7() const { return ___M24_7; }
	inline float* get_address_of_M24_7() { return &___M24_7; }
	inline void set_M24_7(float value)
	{
		___M24_7 = value;
	}

	inline static int32_t get_offset_of_M31_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M31_8)); }
	inline float get_M31_8() const { return ___M31_8; }
	inline float* get_address_of_M31_8() { return &___M31_8; }
	inline void set_M31_8(float value)
	{
		___M31_8 = value;
	}

	inline static int32_t get_offset_of_M32_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M32_9)); }
	inline float get_M32_9() const { return ___M32_9; }
	inline float* get_address_of_M32_9() { return &___M32_9; }
	inline void set_M32_9(float value)
	{
		___M32_9 = value;
	}

	inline static int32_t get_offset_of_M33_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M33_10)); }
	inline float get_M33_10() const { return ___M33_10; }
	inline float* get_address_of_M33_10() { return &___M33_10; }
	inline void set_M33_10(float value)
	{
		___M33_10 = value;
	}

	inline static int32_t get_offset_of_M34_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M34_11)); }
	inline float get_M34_11() const { return ___M34_11; }
	inline float* get_address_of_M34_11() { return &___M34_11; }
	inline void set_M34_11(float value)
	{
		___M34_11 = value;
	}

	inline static int32_t get_offset_of_M41_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M41_12)); }
	inline float get_M41_12() const { return ___M41_12; }
	inline float* get_address_of_M41_12() { return &___M41_12; }
	inline void set_M41_12(float value)
	{
		___M41_12 = value;
	}

	inline static int32_t get_offset_of_M42_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M42_13)); }
	inline float get_M42_13() const { return ___M42_13; }
	inline float* get_address_of_M42_13() { return &___M42_13; }
	inline void set_M42_13(float value)
	{
		___M42_13 = value;
	}

	inline static int32_t get_offset_of_M43_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M43_14)); }
	inline float get_M43_14() const { return ___M43_14; }
	inline float* get_address_of_M43_14() { return &___M43_14; }
	inline void set_M43_14(float value)
	{
		___M43_14 = value;
	}

	inline static int32_t get_offset_of_M44_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M44_15)); }
	inline float get_M44_15() const { return ___M44_15; }
	inline float* get_address_of_M44_15() { return &___M44_15; }
	inline void set_M44_15(float value)
	{
		___M44_15 = value;
	}
};

struct Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_StaticFields
{
public:
	// System.Numerics.Matrix4x4 System.Numerics.Matrix4x4::_identity
	Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  ____identity_16;

public:
	inline static int32_t get_offset_of__identity_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_StaticFields, ____identity_16)); }
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  get__identity_16() const { return ____identity_16; }
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 * get_address_of__identity_16() { return &____identity_16; }
	inline void set__identity_16(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  value)
	{
		____identity_16 = value;
	}
};


// Windows.Foundation.Numerics.Matrix4x4
struct Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82 
{
public:
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M11
	float ___M11_0;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M12
	float ___M12_1;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M13
	float ___M13_2;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M14
	float ___M14_3;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M21
	float ___M21_4;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M22
	float ___M22_5;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M23
	float ___M23_6;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M24
	float ___M24_7;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M31
	float ___M31_8;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M32
	float ___M32_9;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M33
	float ___M33_10;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M34
	float ___M34_11;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M41
	float ___M41_12;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M42
	float ___M42_13;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M43
	float ___M43_14;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M44
	float ___M44_15;

public:
	inline static int32_t get_offset_of_M11_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M11_0)); }
	inline float get_M11_0() const { return ___M11_0; }
	inline float* get_address_of_M11_0() { return &___M11_0; }
	inline void set_M11_0(float value)
	{
		___M11_0 = value;
	}

	inline static int32_t get_offset_of_M12_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M12_1)); }
	inline float get_M12_1() const { return ___M12_1; }
	inline float* get_address_of_M12_1() { return &___M12_1; }
	inline void set_M12_1(float value)
	{
		___M12_1 = value;
	}

	inline static int32_t get_offset_of_M13_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M13_2)); }
	inline float get_M13_2() const { return ___M13_2; }
	inline float* get_address_of_M13_2() { return &___M13_2; }
	inline void set_M13_2(float value)
	{
		___M13_2 = value;
	}

	inline static int32_t get_offset_of_M14_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M14_3)); }
	inline float get_M14_3() const { return ___M14_3; }
	inline float* get_address_of_M14_3() { return &___M14_3; }
	inline void set_M14_3(float value)
	{
		___M14_3 = value;
	}

	inline static int32_t get_offset_of_M21_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M21_4)); }
	inline float get_M21_4() const { return ___M21_4; }
	inline float* get_address_of_M21_4() { return &___M21_4; }
	inline void set_M21_4(float value)
	{
		___M21_4 = value;
	}

	inline static int32_t get_offset_of_M22_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M22_5)); }
	inline float get_M22_5() const { return ___M22_5; }
	inline float* get_address_of_M22_5() { return &___M22_5; }
	inline void set_M22_5(float value)
	{
		___M22_5 = value;
	}

	inline static int32_t get_offset_of_M23_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M23_6)); }
	inline float get_M23_6() const { return ___M23_6; }
	inline float* get_address_of_M23_6() { return &___M23_6; }
	inline void set_M23_6(float value)
	{
		___M23_6 = value;
	}

	inline static int32_t get_offset_of_M24_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M24_7)); }
	inline float get_M24_7() const { return ___M24_7; }
	inline float* get_address_of_M24_7() { return &___M24_7; }
	inline void set_M24_7(float value)
	{
		___M24_7 = value;
	}

	inline static int32_t get_offset_of_M31_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M31_8)); }
	inline float get_M31_8() const { return ___M31_8; }
	inline float* get_address_of_M31_8() { return &___M31_8; }
	inline void set_M31_8(float value)
	{
		___M31_8 = value;
	}

	inline static int32_t get_offset_of_M32_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M32_9)); }
	inline float get_M32_9() const { return ___M32_9; }
	inline float* get_address_of_M32_9() { return &___M32_9; }
	inline void set_M32_9(float value)
	{
		___M32_9 = value;
	}

	inline static int32_t get_offset_of_M33_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M33_10)); }
	inline float get_M33_10() const { return ___M33_10; }
	inline float* get_address_of_M33_10() { return &___M33_10; }
	inline void set_M33_10(float value)
	{
		___M33_10 = value;
	}

	inline static int32_t get_offset_of_M34_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M34_11)); }
	inline float get_M34_11() const { return ___M34_11; }
	inline float* get_address_of_M34_11() { return &___M34_11; }
	inline void set_M34_11(float value)
	{
		___M34_11 = value;
	}

	inline static int32_t get_offset_of_M41_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M41_12)); }
	inline float get_M41_12() const { return ___M41_12; }
	inline float* get_address_of_M41_12() { return &___M41_12; }
	inline void set_M41_12(float value)
	{
		___M41_12 = value;
	}

	inline static int32_t get_offset_of_M42_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M42_13)); }
	inline float get_M42_13() const { return ___M42_13; }
	inline float* get_address_of_M42_13() { return &___M42_13; }
	inline void set_M42_13(float value)
	{
		___M42_13 = value;
	}

	inline static int32_t get_offset_of_M43_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M43_14)); }
	inline float get_M43_14() const { return ___M43_14; }
	inline float* get_address_of_M43_14() { return &___M43_14; }
	inline void set_M43_14(float value)
	{
		___M43_14 = value;
	}

	inline static int32_t get_offset_of_M44_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82, ___M44_15)); }
	inline float get_M44_15() const { return ___M44_15; }
	inline float* get_address_of_M44_15() { return &___M44_15; }
	inline void set_M44_15(float value)
	{
		___M44_15 = value;
	}
};


// Microsoft.Geospatial.MercatorCoordinate
struct MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36 
{
public:
	// System.Double Microsoft.Geospatial.MercatorCoordinate::#=zZiSXMMOVFjuJD0Eoeg==
	double ___U23U3DzZiSXMMOVFjuJD0EoegU3DU3D_5;
	// System.Double Microsoft.Geospatial.MercatorCoordinate::#=zhxc26YlVuwTTuvztIg==
	double ___U23U3Dzhxc26YlVuwTTuvztIgU3DU3D_6;

public:
	inline static int32_t get_offset_of_U23U3DzZiSXMMOVFjuJD0EoegU3DU3D_5() { return static_cast<int32_t>(offsetof(MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36, ___U23U3DzZiSXMMOVFjuJD0EoegU3DU3D_5)); }
	inline double get_U23U3DzZiSXMMOVFjuJD0EoegU3DU3D_5() const { return ___U23U3DzZiSXMMOVFjuJD0EoegU3DU3D_5; }
	inline double* get_address_of_U23U3DzZiSXMMOVFjuJD0EoegU3DU3D_5() { return &___U23U3DzZiSXMMOVFjuJD0EoegU3DU3D_5; }
	inline void set_U23U3DzZiSXMMOVFjuJD0EoegU3DU3D_5(double value)
	{
		___U23U3DzZiSXMMOVFjuJD0EoegU3DU3D_5 = value;
	}

	inline static int32_t get_offset_of_U23U3Dzhxc26YlVuwTTuvztIgU3DU3D_6() { return static_cast<int32_t>(offsetof(MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36, ___U23U3Dzhxc26YlVuwTTuvztIgU3DU3D_6)); }
	inline double get_U23U3Dzhxc26YlVuwTTuvztIgU3DU3D_6() const { return ___U23U3Dzhxc26YlVuwTTuvztIgU3DU3D_6; }
	inline double* get_address_of_U23U3Dzhxc26YlVuwTTuvztIgU3DU3D_6() { return &___U23U3Dzhxc26YlVuwTTuvztIgU3DU3D_6; }
	inline void set_U23U3Dzhxc26YlVuwTTuvztIgU3DU3D_6(double value)
	{
		___U23U3Dzhxc26YlVuwTTuvztIgU3DU3D_6 = value;
	}
};

struct MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36_StaticFields
{
public:
	// Microsoft.Geospatial.MercatorCoordinate Microsoft.Geospatial.MercatorCoordinate::Origin
	MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  ___Origin_4;

public:
	inline static int32_t get_offset_of_Origin_4() { return static_cast<int32_t>(offsetof(MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36_StaticFields, ___Origin_4)); }
	inline MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  get_Origin_4() const { return ___Origin_4; }
	inline MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36 * get_address_of_Origin_4() { return &___Origin_4; }
	inline void set_Origin_4(MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  value)
	{
		___Origin_4 = value;
	}
};


// System.Runtime.Remoting.Messaging.MethodReturnDictionary
struct MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531  : public MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE
{
public:

public:
};

struct MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_StaticFields
{
public:
	// System.String[] System.Runtime.Remoting.Messaging.MethodReturnDictionary::InternalReturnKeys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___InternalReturnKeys_4;
	// System.String[] System.Runtime.Remoting.Messaging.MethodReturnDictionary::InternalExceptionKeys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___InternalExceptionKeys_5;

public:
	inline static int32_t get_offset_of_InternalReturnKeys_4() { return static_cast<int32_t>(offsetof(MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_StaticFields, ___InternalReturnKeys_4)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_InternalReturnKeys_4() const { return ___InternalReturnKeys_4; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_InternalReturnKeys_4() { return &___InternalReturnKeys_4; }
	inline void set_InternalReturnKeys_4(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___InternalReturnKeys_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalReturnKeys_4), (void*)value);
	}

	inline static int32_t get_offset_of_InternalExceptionKeys_5() { return static_cast<int32_t>(offsetof(MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_StaticFields, ___InternalExceptionKeys_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_InternalExceptionKeys_5() const { return ___InternalExceptionKeys_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_InternalExceptionKeys_5() { return &___InternalExceptionKeys_5; }
	inline void set_InternalExceptionKeys_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___InternalExceptionKeys_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalExceptionKeys_5), (void*)value);
	}
};


// Windows.Foundation.Point
struct Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 
{
public:
	// System.Single Windows.Foundation.Point::_x
	float ____x_0;
	// System.Single Windows.Foundation.Point::_y
	float ____y_1;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}
};


// Windows.Foundation.Rect
struct Rect_tC45F1DDF39812623644DE296D8057A4958176627 
{
public:
	// System.Single Windows.Foundation.Rect::_x
	float ____x_0;
	// System.Single Windows.Foundation.Rect::_y
	float ____y_1;
	// System.Single Windows.Foundation.Rect::_width
	float ____width_2;
	// System.Single Windows.Foundation.Rect::_height
	float ____height_3;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}

	inline static int32_t get_offset_of__width_2() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____width_2)); }
	inline float get__width_2() const { return ____width_2; }
	inline float* get_address_of__width_2() { return &____width_2; }
	inline void set__width_2(float value)
	{
		____width_2 = value;
	}

	inline static int32_t get_offset_of__height_3() { return static_cast<int32_t>(offsetof(Rect_tC45F1DDF39812623644DE296D8057A4958176627, ____height_3)); }
	inline float get__height_3() const { return ____height_3; }
	inline float* get_address_of__height_3() { return &____height_3; }
	inline void set__height_3(float value)
	{
		____height_3 = value;
	}
};


// System.SequencePosition
struct SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 
{
public:
	// System.Object System.SequencePosition::_object
	RuntimeObject * ____object_0;
	// System.Int32 System.SequencePosition::_integer
	int32_t ____integer_1;

public:
	inline static int32_t get_offset_of__object_0() { return static_cast<int32_t>(offsetof(SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32, ____object_0)); }
	inline RuntimeObject * get__object_0() const { return ____object_0; }
	inline RuntimeObject ** get_address_of__object_0() { return &____object_0; }
	inline void set__object_0(RuntimeObject * value)
	{
		____object_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____object_0), (void*)value);
	}

	inline static int32_t get_offset_of__integer_1() { return static_cast<int32_t>(offsetof(SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32, ____integer_1)); }
	inline int32_t get__integer_1() const { return ____integer_1; }
	inline int32_t* get_address_of__integer_1() { return &____integer_1; }
	inline void set__integer_1(int32_t value)
	{
		____integer_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.SequencePosition
struct SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____integer_1;
};
// Native definition for COM marshalling of System.SequencePosition
struct SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____integer_1;
};

// Windows.Foundation.Size
struct Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 
{
public:
	// System.Single Windows.Foundation.Size::_width
	float ____width_0;
	// System.Single Windows.Foundation.Size::_height
	float ____height_1;

public:
	inline static int32_t get_offset_of__width_0() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____width_0)); }
	inline float get__width_0() const { return ____width_0; }
	inline float* get_address_of__width_0() { return &____width_0; }
	inline void set__width_0(float value)
	{
		____width_0 = value;
	}

	inline static int32_t get_offset_of__height_1() { return static_cast<int32_t>(offsetof(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92, ____height_1)); }
	inline float get__height_1() const { return ____height_1; }
	inline float* get_address_of__height_1() { return &____height_1; }
	inline void set__height_1(float value)
	{
		____height_1 = value;
	}
};


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// MessagePack.SequencePool/Rental
struct Rental_t52FB21BE765DB6CF3D8A5285138986B9640A27CD 
{
public:
	// MessagePack.SequencePool MessagePack.SequencePool/Rental::owner
	SequencePool_tAF90EB941F07D8F524346D87B0908274C20D0593 * ___owner_0;
	// Nerdbank.Streams.Sequence`1<System.Byte> MessagePack.SequencePool/Rental::<Value>k__BackingField
	Sequence_1_tABC4B1F6E83EAA8EECFB1C674B244FFE3EDF94A0 * ___U3CValueU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_owner_0() { return static_cast<int32_t>(offsetof(Rental_t52FB21BE765DB6CF3D8A5285138986B9640A27CD, ___owner_0)); }
	inline SequencePool_tAF90EB941F07D8F524346D87B0908274C20D0593 * get_owner_0() const { return ___owner_0; }
	inline SequencePool_tAF90EB941F07D8F524346D87B0908274C20D0593 ** get_address_of_owner_0() { return &___owner_0; }
	inline void set_owner_0(SequencePool_tAF90EB941F07D8F524346D87B0908274C20D0593 * value)
	{
		___owner_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___owner_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Rental_t52FB21BE765DB6CF3D8A5285138986B9640A27CD, ___U3CValueU3Ek__BackingField_1)); }
	inline Sequence_1_tABC4B1F6E83EAA8EECFB1C674B244FFE3EDF94A0 * get_U3CValueU3Ek__BackingField_1() const { return ___U3CValueU3Ek__BackingField_1; }
	inline Sequence_1_tABC4B1F6E83EAA8EECFB1C674B244FFE3EDF94A0 ** get_address_of_U3CValueU3Ek__BackingField_1() { return &___U3CValueU3Ek__BackingField_1; }
	inline void set_U3CValueU3Ek__BackingField_1(Sequence_1_tABC4B1F6E83EAA8EECFB1C674B244FFE3EDF94A0 * value)
	{
		___U3CValueU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueU3Ek__BackingField_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of MessagePack.SequencePool/Rental
struct Rental_t52FB21BE765DB6CF3D8A5285138986B9640A27CD_marshaled_pinvoke
{
	SequencePool_tAF90EB941F07D8F524346D87B0908274C20D0593 * ___owner_0;
	Sequence_1_tABC4B1F6E83EAA8EECFB1C674B244FFE3EDF94A0 * ___U3CValueU3Ek__BackingField_1;
};
// Native definition for COM marshalling of MessagePack.SequencePool/Rental
struct Rental_t52FB21BE765DB6CF3D8A5285138986B9640A27CD_marshaled_com
{
	SequencePool_tAF90EB941F07D8F524346D87B0908274C20D0593 * ___owner_0;
	Sequence_1_tABC4B1F6E83EAA8EECFB1C674B244FFE3EDF94A0 * ___U3CValueU3Ek__BackingField_1;
};
// Windows.Foundation.IReference`1<System.Numerics.Matrix4x4>
struct NOVTABLE IReference_1_t97B2873C86B7742F03D17D1D0BC7B456F90D09E2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mA1E3E5D81B89D3EA702FD87A063F5C5CBDD3949B(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Matrix4x4>
struct NOVTABLE IReference_1_t8A0A795D67A1984F24F971A8C797A86DDD5FD8D4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mB1385E16B3DF2EBB57B6A2953C5ACFFB0F57E766(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82 * comReturnValue) = 0;
};

// System.Nullable`1<System.SequencePosition>
struct Nullable_1_t4D0B500AA123A0A527E4534B9010B059653E1546 
{
public:
	// T System.Nullable`1::value
	SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t4D0B500AA123A0A527E4534B9010B059653E1546, ___value_0)); }
	inline SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  get_value_0() const { return ___value_0; }
	inline SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(SequencePosition_t1EE0135424C05933E86350841921B8DC2B309E32  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->____object_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t4D0B500AA123A0A527E4534B9010B059653E1546, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isInitialized
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isInitialized_4;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isEnabled
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isEnabled_5;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isMarkedDestroyed
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isMarkedDestroyed_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_7;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16, ___U3CConfigurationProfileU3Ek__BackingField_3)); }
	inline BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * get_U3CConfigurationProfileU3Ek__BackingField_3() const { return ___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_3() { return &___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_3(BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationProfileU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_isInitialized_4() { return static_cast<int32_t>(offsetof(BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16, ___isInitialized_4)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isInitialized_4() const { return ___isInitialized_4; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isInitialized_4() { return &___isInitialized_4; }
	inline void set_isInitialized_4(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isInitialized_4 = value;
	}

	inline static int32_t get_offset_of_isEnabled_5() { return static_cast<int32_t>(offsetof(BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16, ___isEnabled_5)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isEnabled_5() const { return ___isEnabled_5; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isEnabled_5() { return &___isEnabled_5; }
	inline void set_isEnabled_5(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isEnabled_5 = value;
	}

	inline static int32_t get_offset_of_isMarkedDestroyed_6() { return static_cast<int32_t>(offsetof(BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16, ___isMarkedDestroyed_6)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isMarkedDestroyed_6() const { return ___isMarkedDestroyed_6; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isMarkedDestroyed_6() { return &___isMarkedDestroyed_6; }
	inline void set_isMarkedDestroyed_6(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isMarkedDestroyed_6 = value;
	}

	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}
};


// Microsoft.Maps.Unity.ClippingVolumeDistanceTextureResolution
struct ClippingVolumeDistanceTextureResolution_t3345711BB6C44F3F31DFD99BDFD7585E158FF2D1 
{
public:
	// System.Int32 Microsoft.Maps.Unity.ClippingVolumeDistanceTextureResolution::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClippingVolumeDistanceTextureResolution_t3345711BB6C44F3F31DFD99BDFD7585E158FF2D1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.DisplayType
struct DisplayType_t169730BD5E949BB96C5CD3F37D6F5956A72635DA 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.CameraSystem.DisplayType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DisplayType_t169730BD5E949BB96C5CD3F37D6F5956A72635DA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.Geospatial.GeoBoundingBox
struct GeoBoundingBox_t1E8B92C76B1F3F64468713C93BC6B184D116B756 
{
public:
	// Microsoft.Geospatial.LatLon Microsoft.Geospatial.GeoBoundingBox::#=z8vNo1CRG2vBQpVDkWbisVcs=
	LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99  ___U23U3Dz8vNo1CRG2vBQpVDkWbisVcsU3D_0;
	// Microsoft.Geospatial.LatLon Microsoft.Geospatial.GeoBoundingBox::#=zawmIxZRnx5qJ7mYZRaVLNRM=
	LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99  ___U23U3DzawmIxZRnx5qJ7mYZRaVLNRMU3D_1;

public:
	inline static int32_t get_offset_of_U23U3Dz8vNo1CRG2vBQpVDkWbisVcsU3D_0() { return static_cast<int32_t>(offsetof(GeoBoundingBox_t1E8B92C76B1F3F64468713C93BC6B184D116B756, ___U23U3Dz8vNo1CRG2vBQpVDkWbisVcsU3D_0)); }
	inline LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99  get_U23U3Dz8vNo1CRG2vBQpVDkWbisVcsU3D_0() const { return ___U23U3Dz8vNo1CRG2vBQpVDkWbisVcsU3D_0; }
	inline LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99 * get_address_of_U23U3Dz8vNo1CRG2vBQpVDkWbisVcsU3D_0() { return &___U23U3Dz8vNo1CRG2vBQpVDkWbisVcsU3D_0; }
	inline void set_U23U3Dz8vNo1CRG2vBQpVDkWbisVcsU3D_0(LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99  value)
	{
		___U23U3Dz8vNo1CRG2vBQpVDkWbisVcsU3D_0 = value;
	}

	inline static int32_t get_offset_of_U23U3DzawmIxZRnx5qJ7mYZRaVLNRMU3D_1() { return static_cast<int32_t>(offsetof(GeoBoundingBox_t1E8B92C76B1F3F64468713C93BC6B184D116B756, ___U23U3DzawmIxZRnx5qJ7mYZRaVLNRMU3D_1)); }
	inline LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99  get_U23U3DzawmIxZRnx5qJ7mYZRaVLNRMU3D_1() const { return ___U23U3DzawmIxZRnx5qJ7mYZRaVLNRMU3D_1; }
	inline LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99 * get_address_of_U23U3DzawmIxZRnx5qJ7mYZRaVLNRMU3D_1() { return &___U23U3DzawmIxZRnx5qJ7mYZRaVLNRMU3D_1; }
	inline void set_U23U3DzawmIxZRnx5qJ7mYZRaVLNRMU3D_1(LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99  value)
	{
		___U23U3DzawmIxZRnx5qJ7mYZRaVLNRMU3D_1 = value;
	}
};


// System.Threading.ManualResetEventSlim
struct ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E  : public RuntimeObject
{
public:
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.ManualResetEventSlim::m_lock
	RuntimeObject * ___m_lock_2;
	// System.Threading.ManualResetEvent modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.ManualResetEventSlim::m_eventObj
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_eventObj_3;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.ManualResetEventSlim::m_combinedState
	int32_t ___m_combinedState_4;

public:
	inline static int32_t get_offset_of_m_lock_2() { return static_cast<int32_t>(offsetof(ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E, ___m_lock_2)); }
	inline RuntimeObject * get_m_lock_2() const { return ___m_lock_2; }
	inline RuntimeObject ** get_address_of_m_lock_2() { return &___m_lock_2; }
	inline void set_m_lock_2(RuntimeObject * value)
	{
		___m_lock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_lock_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_eventObj_3() { return static_cast<int32_t>(offsetof(ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E, ___m_eventObj_3)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_m_eventObj_3() const { return ___m_eventObj_3; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_m_eventObj_3() { return &___m_eventObj_3; }
	inline void set_m_eventObj_3(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___m_eventObj_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_eventObj_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_combinedState_4() { return static_cast<int32_t>(offsetof(ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E, ___m_combinedState_4)); }
	inline int32_t get_m_combinedState_4() const { return ___m_combinedState_4; }
	inline int32_t* get_address_of_m_combinedState_4() { return &___m_combinedState_4; }
	inline void set_m_combinedState_4(int32_t value)
	{
		___m_combinedState_4 = value;
	}
};

struct ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.ManualResetEventSlim::s_cancellationTokenCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_cancellationTokenCallback_14;

public:
	inline static int32_t get_offset_of_s_cancellationTokenCallback_14() { return static_cast<int32_t>(offsetof(ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_StaticFields, ___s_cancellationTokenCallback_14)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_cancellationTokenCallback_14() const { return ___s_cancellationTokenCallback_14; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_cancellationTokenCallback_14() { return &___s_cancellationTokenCallback_14; }
	inline void set_s_cancellationTokenCallback_14(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_cancellationTokenCallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cancellationTokenCallback_14), (void*)value);
	}
};


// Microsoft.Maps.Unity.MapColliderType
struct MapColliderType_tE7909A74CF517EFEFA49447D029B468BC4A73399 
{
public:
	// System.Int32 Microsoft.Maps.Unity.MapColliderType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MapColliderType_tE7909A74CF517EFEFA49447D029B468BC4A73399, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.Maps.Unity.MapShape
struct MapShape_t1C138EF2615DAA47C99368471D6EE2646167C059 
{
public:
	// System.Int32 Microsoft.Maps.Unity.MapShape::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MapShape_t1C138EF2615DAA47C99368471D6EE2646167C059, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.Maps.Unity.MapTerrainType
struct MapTerrainType_t55A58790E54C87DDF264AD343EBC6EAA8323DCF7 
{
public:
	// System.Int32 Microsoft.Maps.Unity.MapTerrainType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MapTerrainType_t55A58790E54C87DDF264AD343EBC6EAA8323DCF7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.Foundation.Metadata.MarshalingType
struct MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05 
{
public:
	// System.Int32 Windows.Foundation.Metadata.MarshalingType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.AspNetCore.Internal.MemoryBufferWriter
struct MemoryBufferWriter_tB8B5606805E392BA65EA3A3B7AD167D47E16CBF7  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Int32 Microsoft.AspNetCore.Internal.MemoryBufferWriter::_minimumSegmentSize
	int32_t ____minimumSegmentSize_5;
	// System.Int32 Microsoft.AspNetCore.Internal.MemoryBufferWriter::_bytesWritten
	int32_t ____bytesWritten_6;
	// System.Collections.Generic.List`1<Microsoft.AspNetCore.Internal.MemoryBufferWriter/CompletedBuffer> Microsoft.AspNetCore.Internal.MemoryBufferWriter::_completedSegments
	List_1_t33E7C0A941CE085262E5F5E54C9CEEDB3AF2760D * ____completedSegments_7;
	// System.Byte[] Microsoft.AspNetCore.Internal.MemoryBufferWriter::_currentSegment
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____currentSegment_8;
	// System.Int32 Microsoft.AspNetCore.Internal.MemoryBufferWriter::_position
	int32_t ____position_9;

public:
	inline static int32_t get_offset_of__minimumSegmentSize_5() { return static_cast<int32_t>(offsetof(MemoryBufferWriter_tB8B5606805E392BA65EA3A3B7AD167D47E16CBF7, ____minimumSegmentSize_5)); }
	inline int32_t get__minimumSegmentSize_5() const { return ____minimumSegmentSize_5; }
	inline int32_t* get_address_of__minimumSegmentSize_5() { return &____minimumSegmentSize_5; }
	inline void set__minimumSegmentSize_5(int32_t value)
	{
		____minimumSegmentSize_5 = value;
	}

	inline static int32_t get_offset_of__bytesWritten_6() { return static_cast<int32_t>(offsetof(MemoryBufferWriter_tB8B5606805E392BA65EA3A3B7AD167D47E16CBF7, ____bytesWritten_6)); }
	inline int32_t get__bytesWritten_6() const { return ____bytesWritten_6; }
	inline int32_t* get_address_of__bytesWritten_6() { return &____bytesWritten_6; }
	inline void set__bytesWritten_6(int32_t value)
	{
		____bytesWritten_6 = value;
	}

	inline static int32_t get_offset_of__completedSegments_7() { return static_cast<int32_t>(offsetof(MemoryBufferWriter_tB8B5606805E392BA65EA3A3B7AD167D47E16CBF7, ____completedSegments_7)); }
	inline List_1_t33E7C0A941CE085262E5F5E54C9CEEDB3AF2760D * get__completedSegments_7() const { return ____completedSegments_7; }
	inline List_1_t33E7C0A941CE085262E5F5E54C9CEEDB3AF2760D ** get_address_of__completedSegments_7() { return &____completedSegments_7; }
	inline void set__completedSegments_7(List_1_t33E7C0A941CE085262E5F5E54C9CEEDB3AF2760D * value)
	{
		____completedSegments_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____completedSegments_7), (void*)value);
	}

	inline static int32_t get_offset_of__currentSegment_8() { return static_cast<int32_t>(offsetof(MemoryBufferWriter_tB8B5606805E392BA65EA3A3B7AD167D47E16CBF7, ____currentSegment_8)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__currentSegment_8() const { return ____currentSegment_8; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__currentSegment_8() { return &____currentSegment_8; }
	inline void set__currentSegment_8(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____currentSegment_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentSegment_8), (void*)value);
	}

	inline static int32_t get_offset_of__position_9() { return static_cast<int32_t>(offsetof(MemoryBufferWriter_tB8B5606805E392BA65EA3A3B7AD167D47E16CBF7, ____position_9)); }
	inline int32_t get__position_9() const { return ____position_9; }
	inline int32_t* get_address_of__position_9() { return &____position_9; }
	inline void set__position_9(int32_t value)
	{
		____position_9 = value;
	}
};

struct MemoryBufferWriter_tB8B5606805E392BA65EA3A3B7AD167D47E16CBF7_ThreadStaticFields
{
public:
	// Microsoft.AspNetCore.Internal.MemoryBufferWriter Microsoft.AspNetCore.Internal.MemoryBufferWriter::_cachedInstance
	MemoryBufferWriter_tB8B5606805E392BA65EA3A3B7AD167D47E16CBF7 * ____cachedInstance_4;

public:
	inline static int32_t get_offset_of__cachedInstance_4() { return static_cast<int32_t>(offsetof(MemoryBufferWriter_tB8B5606805E392BA65EA3A3B7AD167D47E16CBF7_ThreadStaticFields, ____cachedInstance_4)); }
	inline MemoryBufferWriter_tB8B5606805E392BA65EA3A3B7AD167D47E16CBF7 * get__cachedInstance_4() const { return ____cachedInstance_4; }
	inline MemoryBufferWriter_tB8B5606805E392BA65EA3A3B7AD167D47E16CBF7 ** get_address_of__cachedInstance_4() { return &____cachedInstance_4; }
	inline void set__cachedInstance_4(MemoryBufferWriter_tB8B5606805E392BA65EA3A3B7AD167D47E16CBF7 * value)
	{
		____cachedInstance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachedInstance_4), (void*)value);
	}
};


// System.Buffers.MemoryHandle
struct MemoryHandle_tF1C21894564B908B077B28F482F188FC96B60A09 
{
public:
	// System.Void* System.Buffers.MemoryHandle::_pointer
	void* ____pointer_0;
	// System.Runtime.InteropServices.GCHandle System.Buffers.MemoryHandle::_handle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ____handle_1;
	// System.Buffers.IPinnable System.Buffers.MemoryHandle::_pinnable
	RuntimeObject* ____pinnable_2;

public:
	inline static int32_t get_offset_of__pointer_0() { return static_cast<int32_t>(offsetof(MemoryHandle_tF1C21894564B908B077B28F482F188FC96B60A09, ____pointer_0)); }
	inline void* get__pointer_0() const { return ____pointer_0; }
	inline void** get_address_of__pointer_0() { return &____pointer_0; }
	inline void set__pointer_0(void* value)
	{
		____pointer_0 = value;
	}

	inline static int32_t get_offset_of__handle_1() { return static_cast<int32_t>(offsetof(MemoryHandle_tF1C21894564B908B077B28F482F188FC96B60A09, ____handle_1)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get__handle_1() const { return ____handle_1; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of__handle_1() { return &____handle_1; }
	inline void set__handle_1(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		____handle_1 = value;
	}

	inline static int32_t get_offset_of__pinnable_2() { return static_cast<int32_t>(offsetof(MemoryHandle_tF1C21894564B908B077B28F482F188FC96B60A09, ____pinnable_2)); }
	inline RuntimeObject* get__pinnable_2() const { return ____pinnable_2; }
	inline RuntimeObject** get_address_of__pinnable_2() { return &____pinnable_2; }
	inline void set__pinnable_2(RuntimeObject* value)
	{
		____pinnable_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pinnable_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Buffers.MemoryHandle
struct MemoryHandle_tF1C21894564B908B077B28F482F188FC96B60A09_marshaled_pinvoke
{
	void* ____pointer_0;
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ____handle_1;
	RuntimeObject* ____pinnable_2;
};
// Native definition for COM marshalling of System.Buffers.MemoryHandle
struct MemoryHandle_tF1C21894564B908B077B28F482F188FC96B60A09_marshaled_com
{
	void* ____pointer_0;
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ____handle_1;
	RuntimeObject* ____pinnable_2;
};

// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ____lastReadTask_13;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____buffer_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_4), (void*)value);
	}

	inline static int32_t get_offset_of__origin_5() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____origin_5)); }
	inline int32_t get__origin_5() const { return ____origin_5; }
	inline int32_t* get_address_of__origin_5() { return &____origin_5; }
	inline void set__origin_5(int32_t value)
	{
		____origin_5 = value;
	}

	inline static int32_t get_offset_of__position_6() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____position_6)); }
	inline int32_t get__position_6() const { return ____position_6; }
	inline int32_t* get_address_of__position_6() { return &____position_6; }
	inline void set__position_6(int32_t value)
	{
		____position_6 = value;
	}

	inline static int32_t get_offset_of__length_7() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____length_7)); }
	inline int32_t get__length_7() const { return ____length_7; }
	inline int32_t* get_address_of__length_7() { return &____length_7; }
	inline void set__length_7(int32_t value)
	{
		____length_7 = value;
	}

	inline static int32_t get_offset_of__capacity_8() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____capacity_8)); }
	inline int32_t get__capacity_8() const { return ____capacity_8; }
	inline int32_t* get_address_of__capacity_8() { return &____capacity_8; }
	inline void set__capacity_8(int32_t value)
	{
		____capacity_8 = value;
	}

	inline static int32_t get_offset_of__expandable_9() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____expandable_9)); }
	inline bool get__expandable_9() const { return ____expandable_9; }
	inline bool* get_address_of__expandable_9() { return &____expandable_9; }
	inline void set__expandable_9(bool value)
	{
		____expandable_9 = value;
	}

	inline static int32_t get_offset_of__writable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____writable_10)); }
	inline bool get__writable_10() const { return ____writable_10; }
	inline bool* get_address_of__writable_10() { return &____writable_10; }
	inline void set__writable_10(bool value)
	{
		____writable_10 = value;
	}

	inline static int32_t get_offset_of__exposable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____exposable_11)); }
	inline bool get__exposable_11() const { return ____exposable_11; }
	inline bool* get_address_of__exposable_11() { return &____exposable_11; }
	inline void set__exposable_11(bool value)
	{
		____exposable_11 = value;
	}

	inline static int32_t get_offset_of__isOpen_12() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____isOpen_12)); }
	inline bool get__isOpen_12() const { return ____isOpen_12; }
	inline bool* get_address_of__isOpen_12() { return &____isOpen_12; }
	inline void set__isOpen_12(bool value)
	{
		____isOpen_12 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_13() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____lastReadTask_13)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get__lastReadTask_13() const { return ____lastReadTask_13; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of__lastReadTask_13() { return &____lastReadTask_13; }
	inline void set__lastReadTask_13(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		____lastReadTask_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_13), (void*)value);
	}
};


// Microsoft.Geospatial.MercatorBoundingBox
struct MercatorBoundingBox_t56EA742B88F9B43443F7771A6A6990886855BC03 
{
public:
	// Microsoft.Geospatial.MercatorCoordinate Microsoft.Geospatial.MercatorBoundingBox::#=z8vNo1CRG2vBQpVDkWbisVcs=
	MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  ___U23U3Dz8vNo1CRG2vBQpVDkWbisVcsU3D_0;
	// Microsoft.Geospatial.MercatorCoordinate Microsoft.Geospatial.MercatorBoundingBox::#=zawmIxZRnx5qJ7mYZRaVLNRM=
	MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  ___U23U3DzawmIxZRnx5qJ7mYZRaVLNRMU3D_1;

public:
	inline static int32_t get_offset_of_U23U3Dz8vNo1CRG2vBQpVDkWbisVcsU3D_0() { return static_cast<int32_t>(offsetof(MercatorBoundingBox_t56EA742B88F9B43443F7771A6A6990886855BC03, ___U23U3Dz8vNo1CRG2vBQpVDkWbisVcsU3D_0)); }
	inline MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  get_U23U3Dz8vNo1CRG2vBQpVDkWbisVcsU3D_0() const { return ___U23U3Dz8vNo1CRG2vBQpVDkWbisVcsU3D_0; }
	inline MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36 * get_address_of_U23U3Dz8vNo1CRG2vBQpVDkWbisVcsU3D_0() { return &___U23U3Dz8vNo1CRG2vBQpVDkWbisVcsU3D_0; }
	inline void set_U23U3Dz8vNo1CRG2vBQpVDkWbisVcsU3D_0(MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  value)
	{
		___U23U3Dz8vNo1CRG2vBQpVDkWbisVcsU3D_0 = value;
	}

	inline static int32_t get_offset_of_U23U3DzawmIxZRnx5qJ7mYZRaVLNRMU3D_1() { return static_cast<int32_t>(offsetof(MercatorBoundingBox_t56EA742B88F9B43443F7771A6A6990886855BC03, ___U23U3DzawmIxZRnx5qJ7mYZRaVLNRMU3D_1)); }
	inline MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  get_U23U3DzawmIxZRnx5qJ7mYZRaVLNRMU3D_1() const { return ___U23U3DzawmIxZRnx5qJ7mYZRaVLNRMU3D_1; }
	inline MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36 * get_address_of_U23U3DzawmIxZRnx5qJ7mYZRaVLNRMU3D_1() { return &___U23U3DzawmIxZRnx5qJ7mYZRaVLNRMU3D_1; }
	inline void set_U23U3DzawmIxZRnx5qJ7mYZRaVLNRMU3D_1(MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  value)
	{
		___U23U3DzawmIxZRnx5qJ7mYZRaVLNRMU3D_1 = value;
	}
};


// Microsoft.Geospatial.MercatorBoundingCircle
struct MercatorBoundingCircle_tE867DD349AF18A40F8DD44C3C4864AD15FF3248C 
{
public:
	// Microsoft.Geospatial.MercatorCoordinate Microsoft.Geospatial.MercatorBoundingCircle::#=zl2AfWUmGU_IqPuYXBQ==
	MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  ___U23U3Dzl2AfWUmGU_IqPuYXBQU3DU3D_0;
	// System.Double Microsoft.Geospatial.MercatorBoundingCircle::#=zc37$sc8kxBHiP6w$PQ==
	double ___U23U3Dzc37U24sc8kxBHiP6wU24PQU3DU3D_1;
	// System.Double Microsoft.Geospatial.MercatorBoundingCircle::#=zRAcdN3$gQZX6NH2qoA==
	double ___U23U3DzRAcdN3U24gQZX6NH2qoAU3DU3D_2;
	// System.Boolean Microsoft.Geospatial.MercatorBoundingCircle::#=zR5ago14eUqlO4KcI__EsCyoXddyqgA4QjA==
	bool ___U23U3DzR5ago14eUqlO4KcI__EsCyoXddyqgA4QjAU3DU3D_3;
	// Microsoft.Geospatial.MercatorCoordinate Microsoft.Geospatial.MercatorBoundingCircle::#=z7D6$m5$sMXA8
	MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  ___U23U3Dz7D6U24m5U24sMXA8_4;

public:
	inline static int32_t get_offset_of_U23U3Dzl2AfWUmGU_IqPuYXBQU3DU3D_0() { return static_cast<int32_t>(offsetof(MercatorBoundingCircle_tE867DD349AF18A40F8DD44C3C4864AD15FF3248C, ___U23U3Dzl2AfWUmGU_IqPuYXBQU3DU3D_0)); }
	inline MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  get_U23U3Dzl2AfWUmGU_IqPuYXBQU3DU3D_0() const { return ___U23U3Dzl2AfWUmGU_IqPuYXBQU3DU3D_0; }
	inline MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36 * get_address_of_U23U3Dzl2AfWUmGU_IqPuYXBQU3DU3D_0() { return &___U23U3Dzl2AfWUmGU_IqPuYXBQU3DU3D_0; }
	inline void set_U23U3Dzl2AfWUmGU_IqPuYXBQU3DU3D_0(MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  value)
	{
		___U23U3Dzl2AfWUmGU_IqPuYXBQU3DU3D_0 = value;
	}

	inline static int32_t get_offset_of_U23U3Dzc37U24sc8kxBHiP6wU24PQU3DU3D_1() { return static_cast<int32_t>(offsetof(MercatorBoundingCircle_tE867DD349AF18A40F8DD44C3C4864AD15FF3248C, ___U23U3Dzc37U24sc8kxBHiP6wU24PQU3DU3D_1)); }
	inline double get_U23U3Dzc37U24sc8kxBHiP6wU24PQU3DU3D_1() const { return ___U23U3Dzc37U24sc8kxBHiP6wU24PQU3DU3D_1; }
	inline double* get_address_of_U23U3Dzc37U24sc8kxBHiP6wU24PQU3DU3D_1() { return &___U23U3Dzc37U24sc8kxBHiP6wU24PQU3DU3D_1; }
	inline void set_U23U3Dzc37U24sc8kxBHiP6wU24PQU3DU3D_1(double value)
	{
		___U23U3Dzc37U24sc8kxBHiP6wU24PQU3DU3D_1 = value;
	}

	inline static int32_t get_offset_of_U23U3DzRAcdN3U24gQZX6NH2qoAU3DU3D_2() { return static_cast<int32_t>(offsetof(MercatorBoundingCircle_tE867DD349AF18A40F8DD44C3C4864AD15FF3248C, ___U23U3DzRAcdN3U24gQZX6NH2qoAU3DU3D_2)); }
	inline double get_U23U3DzRAcdN3U24gQZX6NH2qoAU3DU3D_2() const { return ___U23U3DzRAcdN3U24gQZX6NH2qoAU3DU3D_2; }
	inline double* get_address_of_U23U3DzRAcdN3U24gQZX6NH2qoAU3DU3D_2() { return &___U23U3DzRAcdN3U24gQZX6NH2qoAU3DU3D_2; }
	inline void set_U23U3DzRAcdN3U24gQZX6NH2qoAU3DU3D_2(double value)
	{
		___U23U3DzRAcdN3U24gQZX6NH2qoAU3DU3D_2 = value;
	}

	inline static int32_t get_offset_of_U23U3DzR5ago14eUqlO4KcI__EsCyoXddyqgA4QjAU3DU3D_3() { return static_cast<int32_t>(offsetof(MercatorBoundingCircle_tE867DD349AF18A40F8DD44C3C4864AD15FF3248C, ___U23U3DzR5ago14eUqlO4KcI__EsCyoXddyqgA4QjAU3DU3D_3)); }
	inline bool get_U23U3DzR5ago14eUqlO4KcI__EsCyoXddyqgA4QjAU3DU3D_3() const { return ___U23U3DzR5ago14eUqlO4KcI__EsCyoXddyqgA4QjAU3DU3D_3; }
	inline bool* get_address_of_U23U3DzR5ago14eUqlO4KcI__EsCyoXddyqgA4QjAU3DU3D_3() { return &___U23U3DzR5ago14eUqlO4KcI__EsCyoXddyqgA4QjAU3DU3D_3; }
	inline void set_U23U3DzR5ago14eUqlO4KcI__EsCyoXddyqgA4QjAU3DU3D_3(bool value)
	{
		___U23U3DzR5ago14eUqlO4KcI__EsCyoXddyqgA4QjAU3DU3D_3 = value;
	}

	inline static int32_t get_offset_of_U23U3Dz7D6U24m5U24sMXA8_4() { return static_cast<int32_t>(offsetof(MercatorBoundingCircle_tE867DD349AF18A40F8DD44C3C4864AD15FF3248C, ___U23U3Dz7D6U24m5U24sMXA8_4)); }
	inline MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  get_U23U3Dz7D6U24m5U24sMXA8_4() const { return ___U23U3Dz7D6U24m5U24sMXA8_4; }
	inline MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36 * get_address_of_U23U3Dz7D6U24m5U24sMXA8_4() { return &___U23U3Dz7D6U24m5U24sMXA8_4; }
	inline void set_U23U3Dz7D6U24m5U24sMXA8_4(MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  value)
	{
		___U23U3Dz7D6U24m5U24sMXA8_4 = value;
	}
};

// Native definition for P/Invoke marshalling of Microsoft.Geospatial.MercatorBoundingCircle
struct MercatorBoundingCircle_tE867DD349AF18A40F8DD44C3C4864AD15FF3248C_marshaled_pinvoke
{
	MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  ___U23U3Dzl2AfWUmGU_IqPuYXBQU3DU3D_0;
	double ___U23U3Dzc37U24sc8kxBHiP6wU24PQU3DU3D_1;
	double ___U23U3DzRAcdN3U24gQZX6NH2qoAU3DU3D_2;
	int32_t ___U23U3DzR5ago14eUqlO4KcI__EsCyoXddyqgA4QjAU3DU3D_3;
	MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  ___U23U3Dz7D6U24m5U24sMXA8_4;
};
// Native definition for COM marshalling of Microsoft.Geospatial.MercatorBoundingCircle
struct MercatorBoundingCircle_tE867DD349AF18A40F8DD44C3C4864AD15FF3248C_marshaled_com
{
	MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  ___U23U3Dzl2AfWUmGU_IqPuYXBQU3DU3D_0;
	double ___U23U3Dzc37U24sc8kxBHiP6wU24PQU3DU3D_1;
	double ___U23U3DzRAcdN3U24gQZX6NH2qoAU3DU3D_2;
	int32_t ___U23U3DzR5ago14eUqlO4KcI__EsCyoXddyqgA4QjAU3DU3D_3;
	MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  ___U23U3Dz7D6U24m5U24sMXA8_4;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Plane
struct Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_2;

public:
	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_Distance_2() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Distance_2)); }
	inline float get_m_Distance_2() const { return ___m_Distance_2; }
	inline float* get_address_of_m_Distance_2() { return &___m_Distance_2; }
	inline void set_m_Distance_2(float value)
	{
		___m_Distance_2 = value;
	}
};


// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// Windows.Foundation.PropertyType
struct PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808 
{
public:
	// System.Int32 Windows.Foundation.PropertyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyType_tE0EA93A7BFC9AC532D4D960D9F87C6E0B5C4F808, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RenderTextureFormat
struct RenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626 
{
public:
	// System.Int32 UnityEngine.RenderTextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextAnchor
struct TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;

public:
	inline static int32_t get_offset_of_waitHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___waitHandle_3)); }
	inline intptr_t get_waitHandle_3() const { return ___waitHandle_3; }
	inline intptr_t* get_address_of_waitHandle_3() { return &___waitHandle_3; }
	inline void set_waitHandle_3(intptr_t value)
	{
		___waitHandle_3 = value;
	}

	inline static int32_t get_offset_of_safeWaitHandle_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___safeWaitHandle_4)); }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * get_safeWaitHandle_4() const { return ___safeWaitHandle_4; }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 ** get_address_of_safeWaitHandle_4() { return &___safeWaitHandle_4; }
	inline void set_safeWaitHandle_4(SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * value)
	{
		___safeWaitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeWaitHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasThreadAffinity_5() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___hasThreadAffinity_5)); }
	inline bool get_hasThreadAffinity_5() const { return ___hasThreadAffinity_5; }
	inline bool* get_address_of_hasThreadAffinity_5() { return &___hasThreadAffinity_5; }
	inline void set_hasThreadAffinity_5(bool value)
	{
		___hasThreadAffinity_5 = value;
	}
};

struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_10;

public:
	inline static int32_t get_offset_of_InvalidHandle_10() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields, ___InvalidHandle_10)); }
	inline intptr_t get_InvalidHandle_10() const { return ___InvalidHandle_10; }
	inline intptr_t* get_address_of_InvalidHandle_10() { return &___InvalidHandle_10; }
	inline void set_InvalidHandle_10(intptr_t value)
	{
		___InvalidHandle_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_pinvoke : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_com : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// System.Net.WebSockets.WebSocketCloseStatus
struct WebSocketCloseStatus_t3F80BE84F62E6E4BF4A1BE486A6123B4C216EE71 
{
public:
	// System.Int32 System.Net.WebSockets.WebSocketCloseStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebSocketCloseStatus_t3F80BE84F62E6E4BF4A1BE486A6123B4C216EE71, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.WebSockets.WebSocketState
struct WebSocketState_t302343A2337712283EA85C8BCAD335D66FFC1E77 
{
public:
	// System.Int32 System.Net.WebSockets.WebSocketState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebSocketState_t302343A2337712283EA85C8BCAD335D66FFC1E77, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.WebSockets.ManagedWebSocket/MessageOpcode
struct MessageOpcode_t7060DEFDBD04D585D01A301A37DBE10C158EEDC1 
{
public:
	// System.Byte System.Net.WebSockets.ManagedWebSocket/MessageOpcode::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MessageOpcode_t7060DEFDBD04D585D01A301A37DBE10C158EEDC1, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};

// Windows.Foundation.IReference`1<Windows.Foundation.Metadata.MarshalingType>
struct NOVTABLE IReference_1_t073FCE60E00DC1FDAB8ACFF11F7AE2A9BA6F6D92 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mB021045389972057F5036B2BEAF48C63CC75C2E0(int32_t* comReturnValue) = 0;
};

// System.Nullable`1<System.Net.WebSockets.WebSocketCloseStatus>
struct Nullable_1_tEEF07CE805E86A33961C7C0AE095FA4A628605C6 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tEEF07CE805E86A33961C7C0AE095FA4A628605C6, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tEEF07CE805E86A33961C7C0AE095FA4A628605C6, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// #=ziUh6YegtXaMaYaPcfnx5SfHo6eWY
struct U23U3DziUh6YegtXaMaYaPcfnx5SfHo6eWY_tE0409A728C125BC78CE1210283AB619D7FE1B2D9 
{
public:
	// UnityEngine.Vector3 #=ziUh6YegtXaMaYaPcfnx5SfHo6eWY::#=z_kPbVnY=
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U23U3Dz_kPbVnYU3D_7;
	// System.Single #=ziUh6YegtXaMaYaPcfnx5SfHo6eWY::#=zXUkqn3Y=
	float ___U23U3DzXUkqn3YU3D_8;
	// UnityEngine.Vector3 #=ziUh6YegtXaMaYaPcfnx5SfHo6eWY::#=z_sVA0vw=
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U23U3Dz_sVA0vwU3D_9;
	// UnityEngine.Plane #=ziUh6YegtXaMaYaPcfnx5SfHo6eWY::#=zQyoCHGhkuSw4
	Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  ___U23U3DzQyoCHGhkuSw4_10;
	// UnityEngine.Plane #=ziUh6YegtXaMaYaPcfnx5SfHo6eWY::#=zIMcVLblzvxeL
	Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  ___U23U3DzIMcVLblzvxeL_11;
	// UnityEngine.Vector2 #=ziUh6YegtXaMaYaPcfnx5SfHo6eWY::#=ziMvp0jG_FlTuKkNiUgdN6WA=
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U23U3DziMvp0jG_FlTuKkNiUgdN6WAU3D_12;
	// UnityEngine.Vector2 #=ziUh6YegtXaMaYaPcfnx5SfHo6eWY::#=zc37$sc8kxBHiP6w$PQ==
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U23U3Dzc37U24sc8kxBHiP6wU24PQU3DU3D_13;

public:
	inline static int32_t get_offset_of_U23U3Dz_kPbVnYU3D_7() { return static_cast<int32_t>(offsetof(U23U3DziUh6YegtXaMaYaPcfnx5SfHo6eWY_tE0409A728C125BC78CE1210283AB619D7FE1B2D9, ___U23U3Dz_kPbVnYU3D_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U23U3Dz_kPbVnYU3D_7() const { return ___U23U3Dz_kPbVnYU3D_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U23U3Dz_kPbVnYU3D_7() { return &___U23U3Dz_kPbVnYU3D_7; }
	inline void set_U23U3Dz_kPbVnYU3D_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U23U3Dz_kPbVnYU3D_7 = value;
	}

	inline static int32_t get_offset_of_U23U3DzXUkqn3YU3D_8() { return static_cast<int32_t>(offsetof(U23U3DziUh6YegtXaMaYaPcfnx5SfHo6eWY_tE0409A728C125BC78CE1210283AB619D7FE1B2D9, ___U23U3DzXUkqn3YU3D_8)); }
	inline float get_U23U3DzXUkqn3YU3D_8() const { return ___U23U3DzXUkqn3YU3D_8; }
	inline float* get_address_of_U23U3DzXUkqn3YU3D_8() { return &___U23U3DzXUkqn3YU3D_8; }
	inline void set_U23U3DzXUkqn3YU3D_8(float value)
	{
		___U23U3DzXUkqn3YU3D_8 = value;
	}

	inline static int32_t get_offset_of_U23U3Dz_sVA0vwU3D_9() { return static_cast<int32_t>(offsetof(U23U3DziUh6YegtXaMaYaPcfnx5SfHo6eWY_tE0409A728C125BC78CE1210283AB619D7FE1B2D9, ___U23U3Dz_sVA0vwU3D_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U23U3Dz_sVA0vwU3D_9() const { return ___U23U3Dz_sVA0vwU3D_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U23U3Dz_sVA0vwU3D_9() { return &___U23U3Dz_sVA0vwU3D_9; }
	inline void set_U23U3Dz_sVA0vwU3D_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U23U3Dz_sVA0vwU3D_9 = value;
	}

	inline static int32_t get_offset_of_U23U3DzQyoCHGhkuSw4_10() { return static_cast<int32_t>(offsetof(U23U3DziUh6YegtXaMaYaPcfnx5SfHo6eWY_tE0409A728C125BC78CE1210283AB619D7FE1B2D9, ___U23U3DzQyoCHGhkuSw4_10)); }
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  get_U23U3DzQyoCHGhkuSw4_10() const { return ___U23U3DzQyoCHGhkuSw4_10; }
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * get_address_of_U23U3DzQyoCHGhkuSw4_10() { return &___U23U3DzQyoCHGhkuSw4_10; }
	inline void set_U23U3DzQyoCHGhkuSw4_10(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  value)
	{
		___U23U3DzQyoCHGhkuSw4_10 = value;
	}

	inline static int32_t get_offset_of_U23U3DzIMcVLblzvxeL_11() { return static_cast<int32_t>(offsetof(U23U3DziUh6YegtXaMaYaPcfnx5SfHo6eWY_tE0409A728C125BC78CE1210283AB619D7FE1B2D9, ___U23U3DzIMcVLblzvxeL_11)); }
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  get_U23U3DzIMcVLblzvxeL_11() const { return ___U23U3DzIMcVLblzvxeL_11; }
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * get_address_of_U23U3DzIMcVLblzvxeL_11() { return &___U23U3DzIMcVLblzvxeL_11; }
	inline void set_U23U3DzIMcVLblzvxeL_11(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  value)
	{
		___U23U3DzIMcVLblzvxeL_11 = value;
	}

	inline static int32_t get_offset_of_U23U3DziMvp0jG_FlTuKkNiUgdN6WAU3D_12() { return static_cast<int32_t>(offsetof(U23U3DziUh6YegtXaMaYaPcfnx5SfHo6eWY_tE0409A728C125BC78CE1210283AB619D7FE1B2D9, ___U23U3DziMvp0jG_FlTuKkNiUgdN6WAU3D_12)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U23U3DziMvp0jG_FlTuKkNiUgdN6WAU3D_12() const { return ___U23U3DziMvp0jG_FlTuKkNiUgdN6WAU3D_12; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U23U3DziMvp0jG_FlTuKkNiUgdN6WAU3D_12() { return &___U23U3DziMvp0jG_FlTuKkNiUgdN6WAU3D_12; }
	inline void set_U23U3DziMvp0jG_FlTuKkNiUgdN6WAU3D_12(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U23U3DziMvp0jG_FlTuKkNiUgdN6WAU3D_12 = value;
	}

	inline static int32_t get_offset_of_U23U3Dzc37U24sc8kxBHiP6wU24PQU3DU3D_13() { return static_cast<int32_t>(offsetof(U23U3DziUh6YegtXaMaYaPcfnx5SfHo6eWY_tE0409A728C125BC78CE1210283AB619D7FE1B2D9, ___U23U3Dzc37U24sc8kxBHiP6wU24PQU3DU3D_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U23U3Dzc37U24sc8kxBHiP6wU24PQU3DU3D_13() const { return ___U23U3Dzc37U24sc8kxBHiP6wU24PQU3DU3D_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U23U3Dzc37U24sc8kxBHiP6wU24PQU3DU3D_13() { return &___U23U3Dzc37U24sc8kxBHiP6wU24PQU3DU3D_13; }
	inline void set_U23U3Dzc37U24sc8kxBHiP6wU24PQU3DU3D_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U23U3Dzc37U24sc8kxBHiP6wU24PQU3DU3D_13 = value;
	}
};

struct U23U3DziUh6YegtXaMaYaPcfnx5SfHo6eWY_tE0409A728C125BC78CE1210283AB619D7FE1B2D9_StaticFields
{
public:
	// System.Int32 #=ziUh6YegtXaMaYaPcfnx5SfHo6eWY::#=zmC5gzRiOKryV
	int32_t ___U23U3DzmC5gzRiOKryV_0;
	// System.Int32 #=ziUh6YegtXaMaYaPcfnx5SfHo6eWY::#=zGySVj_Y1c9LYgCTlK$OQFVI=
	int32_t ___U23U3DzGySVj_Y1c9LYgCTlKU24OQFVIU3D_1;
	// System.Int32 #=ziUh6YegtXaMaYaPcfnx5SfHo6eWY::#=zIC9bMCQa_cbi
	int32_t ___U23U3DzIC9bMCQa_cbi_2;
	// System.Int32 #=ziUh6YegtXaMaYaPcfnx5SfHo6eWY::#=z5mDuj30zA_YNnswRiw==
	int32_t ___U23U3Dz5mDuj30zA_YNnswRiwU3DU3D_3;
	// System.Int32 #=ziUh6YegtXaMaYaPcfnx5SfHo6eWY::#=zrw7wll5rxjTK
	int32_t ___U23U3Dzrw7wll5rxjTK_4;
	// System.Int32 #=ziUh6YegtXaMaYaPcfnx5SfHo6eWY::#=z$uxlDagiBO5N
	int32_t ___U23U3DzU24uxlDagiBO5N_5;
	// UnityEngine.Vector4[] #=ziUh6YegtXaMaYaPcfnx5SfHo6eWY::#=z0Dv4zEvOVwLgd2iDLg==
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ___U23U3Dz0Dv4zEvOVwLgd2iDLgU3DU3D_6;

public:
	inline static int32_t get_offset_of_U23U3DzmC5gzRiOKryV_0() { return static_cast<int32_t>(offsetof(U23U3DziUh6YegtXaMaYaPcfnx5SfHo6eWY_tE0409A728C125BC78CE1210283AB619D7FE1B2D9_StaticFields, ___U23U3DzmC5gzRiOKryV_0)); }
	inline int32_t get_U23U3DzmC5gzRiOKryV_0() const { return ___U23U3DzmC5gzRiOKryV_0; }
	inline int32_t* get_address_of_U23U3DzmC5gzRiOKryV_0() { return &___U23U3DzmC5gzRiOKryV_0; }
	inline void set_U23U3DzmC5gzRiOKryV_0(int32_t value)
	{
		___U23U3DzmC5gzRiOKryV_0 = value;
	}

	inline static int32_t get_offset_of_U23U3DzGySVj_Y1c9LYgCTlKU24OQFVIU3D_1() { return static_cast<int32_t>(offsetof(U23U3DziUh6YegtXaMaYaPcfnx5SfHo6eWY_tE0409A728C125BC78CE1210283AB619D7FE1B2D9_StaticFields, ___U23U3DzGySVj_Y1c9LYgCTlKU24OQFVIU3D_1)); }
	inline int32_t get_U23U3DzGySVj_Y1c9LYgCTlKU24OQFVIU3D_1() const { return ___U23U3DzGySVj_Y1c9LYgCTlKU24OQFVIU3D_1; }
	inline int32_t* get_address_of_U23U3DzGySVj_Y1c9LYgCTlKU24OQFVIU3D_1() { return &___U23U3DzGySVj_Y1c9LYgCTlKU24OQFVIU3D_1; }
	inline void set_U23U3DzGySVj_Y1c9LYgCTlKU24OQFVIU3D_1(int32_t value)
	{
		___U23U3DzGySVj_Y1c9LYgCTlKU24OQFVIU3D_1 = value;
	}

	inline static int32_t get_offset_of_U23U3DzIC9bMCQa_cbi_2() { return static_cast<int32_t>(offsetof(U23U3DziUh6YegtXaMaYaPcfnx5SfHo6eWY_tE0409A728C125BC78CE1210283AB619D7FE1B2D9_StaticFields, ___U23U3DzIC9bMCQa_cbi_2)); }
	inline int32_t get_U23U3DzIC9bMCQa_cbi_2() const { return ___U23U3DzIC9bMCQa_cbi_2; }
	inline int32_t* get_address_of_U23U3DzIC9bMCQa_cbi_2() { return &___U23U3DzIC9bMCQa_cbi_2; }
	inline void set_U23U3DzIC9bMCQa_cbi_2(int32_t value)
	{
		___U23U3DzIC9bMCQa_cbi_2 = value;
	}

	inline static int32_t get_offset_of_U23U3Dz5mDuj30zA_YNnswRiwU3DU3D_3() { return static_cast<int32_t>(offsetof(U23U3DziUh6YegtXaMaYaPcfnx5SfHo6eWY_tE0409A728C125BC78CE1210283AB619D7FE1B2D9_StaticFields, ___U23U3Dz5mDuj30zA_YNnswRiwU3DU3D_3)); }
	inline int32_t get_U23U3Dz5mDuj30zA_YNnswRiwU3DU3D_3() const { return ___U23U3Dz5mDuj30zA_YNnswRiwU3DU3D_3; }
	inline int32_t* get_address_of_U23U3Dz5mDuj30zA_YNnswRiwU3DU3D_3() { return &___U23U3Dz5mDuj30zA_YNnswRiwU3DU3D_3; }
	inline void set_U23U3Dz5mDuj30zA_YNnswRiwU3DU3D_3(int32_t value)
	{
		___U23U3Dz5mDuj30zA_YNnswRiwU3DU3D_3 = value;
	}

	inline static int32_t get_offset_of_U23U3Dzrw7wll5rxjTK_4() { return static_cast<int32_t>(offsetof(U23U3DziUh6YegtXaMaYaPcfnx5SfHo6eWY_tE0409A728C125BC78CE1210283AB619D7FE1B2D9_StaticFields, ___U23U3Dzrw7wll5rxjTK_4)); }
	inline int32_t get_U23U3Dzrw7wll5rxjTK_4() const { return ___U23U3Dzrw7wll5rxjTK_4; }
	inline int32_t* get_address_of_U23U3Dzrw7wll5rxjTK_4() { return &___U23U3Dzrw7wll5rxjTK_4; }
	inline void set_U23U3Dzrw7wll5rxjTK_4(int32_t value)
	{
		___U23U3Dzrw7wll5rxjTK_4 = value;
	}

	inline static int32_t get_offset_of_U23U3DzU24uxlDagiBO5N_5() { return static_cast<int32_t>(offsetof(U23U3DziUh6YegtXaMaYaPcfnx5SfHo6eWY_tE0409A728C125BC78CE1210283AB619D7FE1B2D9_StaticFields, ___U23U3DzU24uxlDagiBO5N_5)); }
	inline int32_t get_U23U3DzU24uxlDagiBO5N_5() const { return ___U23U3DzU24uxlDagiBO5N_5; }
	inline int32_t* get_address_of_U23U3DzU24uxlDagiBO5N_5() { return &___U23U3DzU24uxlDagiBO5N_5; }
	inline void set_U23U3DzU24uxlDagiBO5N_5(int32_t value)
	{
		___U23U3DzU24uxlDagiBO5N_5 = value;
	}

	inline static int32_t get_offset_of_U23U3Dz0Dv4zEvOVwLgd2iDLgU3DU3D_6() { return static_cast<int32_t>(offsetof(U23U3DziUh6YegtXaMaYaPcfnx5SfHo6eWY_tE0409A728C125BC78CE1210283AB619D7FE1B2D9_StaticFields, ___U23U3Dz0Dv4zEvOVwLgd2iDLgU3DU3D_6)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get_U23U3Dz0Dv4zEvOVwLgd2iDLgU3DU3D_6() const { return ___U23U3Dz0Dv4zEvOVwLgd2iDLgU3DU3D_6; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of_U23U3Dz0Dv4zEvOVwLgd2iDLgU3DU3D_6() { return &___U23U3Dz0Dv4zEvOVwLgd2iDLgU3DU3D_6; }
	inline void set_U23U3Dz0Dv4zEvOVwLgd2iDLgU3DU3D_6(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		___U23U3Dz0Dv4zEvOVwLgd2iDLgU3DU3D_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3Dz0Dv4zEvOVwLgd2iDLgU3DU3D_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct BaseEventSystem_t3D8C69A25D5A24E2D5A9D4AA786DA498318ACBCC  : public BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.BaseEventSystem::eventExecutionDepth
	int32_t ___eventExecutionDepth_9;
	// System.Type Microsoft.MixedReality.Toolkit.BaseEventSystem::eventSystemHandlerType
	Type_t * ___eventSystemHandlerType_10;
	// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedActions
	List_1_tB2338FC47817B39A67EDF98A81C666A585CBB1B0 * ___postponedActions_11;
	// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedObjectActions
	List_1_tFBD74CBAB85AF6A2E49F61373B8A7503C022E2CD * ___postponedObjectActions_12;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventHandlersByType>k__BackingField
	Dictionary_2_t9C346C961DA726D2E935BCA9F27BF39FE4EB463B * ___U3CEventHandlersByTypeU3Ek__BackingField_13;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventListeners>k__BackingField
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___U3CEventListenersU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_eventExecutionDepth_9() { return static_cast<int32_t>(offsetof(BaseEventSystem_t3D8C69A25D5A24E2D5A9D4AA786DA498318ACBCC, ___eventExecutionDepth_9)); }
	inline int32_t get_eventExecutionDepth_9() const { return ___eventExecutionDepth_9; }
	inline int32_t* get_address_of_eventExecutionDepth_9() { return &___eventExecutionDepth_9; }
	inline void set_eventExecutionDepth_9(int32_t value)
	{
		___eventExecutionDepth_9 = value;
	}

	inline static int32_t get_offset_of_eventSystemHandlerType_10() { return static_cast<int32_t>(offsetof(BaseEventSystem_t3D8C69A25D5A24E2D5A9D4AA786DA498318ACBCC, ___eventSystemHandlerType_10)); }
	inline Type_t * get_eventSystemHandlerType_10() const { return ___eventSystemHandlerType_10; }
	inline Type_t ** get_address_of_eventSystemHandlerType_10() { return &___eventSystemHandlerType_10; }
	inline void set_eventSystemHandlerType_10(Type_t * value)
	{
		___eventSystemHandlerType_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventSystemHandlerType_10), (void*)value);
	}

	inline static int32_t get_offset_of_postponedActions_11() { return static_cast<int32_t>(offsetof(BaseEventSystem_t3D8C69A25D5A24E2D5A9D4AA786DA498318ACBCC, ___postponedActions_11)); }
	inline List_1_tB2338FC47817B39A67EDF98A81C666A585CBB1B0 * get_postponedActions_11() const { return ___postponedActions_11; }
	inline List_1_tB2338FC47817B39A67EDF98A81C666A585CBB1B0 ** get_address_of_postponedActions_11() { return &___postponedActions_11; }
	inline void set_postponedActions_11(List_1_tB2338FC47817B39A67EDF98A81C666A585CBB1B0 * value)
	{
		___postponedActions_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedActions_11), (void*)value);
	}

	inline static int32_t get_offset_of_postponedObjectActions_12() { return static_cast<int32_t>(offsetof(BaseEventSystem_t3D8C69A25D5A24E2D5A9D4AA786DA498318ACBCC, ___postponedObjectActions_12)); }
	inline List_1_tFBD74CBAB85AF6A2E49F61373B8A7503C022E2CD * get_postponedObjectActions_12() const { return ___postponedObjectActions_12; }
	inline List_1_tFBD74CBAB85AF6A2E49F61373B8A7503C022E2CD ** get_address_of_postponedObjectActions_12() { return &___postponedObjectActions_12; }
	inline void set_postponedObjectActions_12(List_1_tFBD74CBAB85AF6A2E49F61373B8A7503C022E2CD * value)
	{
		___postponedObjectActions_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___postponedObjectActions_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventHandlersByTypeU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseEventSystem_t3D8C69A25D5A24E2D5A9D4AA786DA498318ACBCC, ___U3CEventHandlersByTypeU3Ek__BackingField_13)); }
	inline Dictionary_2_t9C346C961DA726D2E935BCA9F27BF39FE4EB463B * get_U3CEventHandlersByTypeU3Ek__BackingField_13() const { return ___U3CEventHandlersByTypeU3Ek__BackingField_13; }
	inline Dictionary_2_t9C346C961DA726D2E935BCA9F27BF39FE4EB463B ** get_address_of_U3CEventHandlersByTypeU3Ek__BackingField_13() { return &___U3CEventHandlersByTypeU3Ek__BackingField_13; }
	inline void set_U3CEventHandlersByTypeU3Ek__BackingField_13(Dictionary_2_t9C346C961DA726D2E935BCA9F27BF39FE4EB463B * value)
	{
		___U3CEventHandlersByTypeU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventHandlersByTypeU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEventListenersU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(BaseEventSystem_t3D8C69A25D5A24E2D5A9D4AA786DA498318ACBCC, ___U3CEventListenersU3Ek__BackingField_14)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_U3CEventListenersU3Ek__BackingField_14() const { return ___U3CEventListenersU3Ek__BackingField_14; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_U3CEventListenersU3Ek__BackingField_14() { return &___U3CEventListenersU3Ek__BackingField_14; }
	inline void set_U3CEventListenersU3Ek__BackingField_14(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___U3CEventListenersU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventListenersU3Ek__BackingField_14), (void*)value);
	}
};

struct BaseEventSystem_t3D8C69A25D5A24E2D5A9D4AA786DA498318ACBCC_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseEventSystem::enableDanglingHandlerDiagnostics
	bool ___enableDanglingHandlerDiagnostics_8;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseEventSystem::TraverseEventSystemHandlerHierarchyPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___TraverseEventSystemHandlerHierarchyPerfMarker_15;

public:
	inline static int32_t get_offset_of_enableDanglingHandlerDiagnostics_8() { return static_cast<int32_t>(offsetof(BaseEventSystem_t3D8C69A25D5A24E2D5A9D4AA786DA498318ACBCC_StaticFields, ___enableDanglingHandlerDiagnostics_8)); }
	inline bool get_enableDanglingHandlerDiagnostics_8() const { return ___enableDanglingHandlerDiagnostics_8; }
	inline bool* get_address_of_enableDanglingHandlerDiagnostics_8() { return &___enableDanglingHandlerDiagnostics_8; }
	inline void set_enableDanglingHandlerDiagnostics_8(bool value)
	{
		___enableDanglingHandlerDiagnostics_8 = value;
	}

	inline static int32_t get_offset_of_TraverseEventSystemHandlerHierarchyPerfMarker_15() { return static_cast<int32_t>(offsetof(BaseEventSystem_t3D8C69A25D5A24E2D5A9D4AA786DA498318ACBCC_StaticFields, ___TraverseEventSystemHandlerHierarchyPerfMarker_15)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_TraverseEventSystemHandlerHierarchyPerfMarker_15() const { return ___TraverseEventSystemHandlerHierarchyPerfMarker_15; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_TraverseEventSystemHandlerHierarchyPerfMarker_15() { return &___TraverseEventSystemHandlerHierarchyPerfMarker_15; }
	inline void set_TraverseEventSystemHandlerHierarchyPerfMarker_15(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___TraverseEventSystemHandlerHierarchyPerfMarker_15 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C  : public WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842
{
public:

public:
};

// Windows.Foundation.IPropertyValue
struct NOVTABLE IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) = 0;
};

// MessagePack.MessagePackStreamReader
struct MessagePackStreamReader_t88B2D757E1A7D63091590D050E6D29C2A04F6968  : public RuntimeObject
{
public:
	// System.IO.Stream MessagePack.MessagePackStreamReader::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_0;
	// System.Boolean MessagePack.MessagePackStreamReader::leaveOpen
	bool ___leaveOpen_1;
	// MessagePack.SequencePool/Rental MessagePack.MessagePackStreamReader::sequenceRental
	Rental_t52FB21BE765DB6CF3D8A5285138986B9640A27CD  ___sequenceRental_2;
	// System.Nullable`1<System.SequencePosition> MessagePack.MessagePackStreamReader::endOfLastMessage
	Nullable_1_t4D0B500AA123A0A527E4534B9010B059653E1546  ___endOfLastMessage_3;

public:
	inline static int32_t get_offset_of_stream_0() { return static_cast<int32_t>(offsetof(MessagePackStreamReader_t88B2D757E1A7D63091590D050E6D29C2A04F6968, ___stream_0)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_0() const { return ___stream_0; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_0() { return &___stream_0; }
	inline void set_stream_0(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_0), (void*)value);
	}

	inline static int32_t get_offset_of_leaveOpen_1() { return static_cast<int32_t>(offsetof(MessagePackStreamReader_t88B2D757E1A7D63091590D050E6D29C2A04F6968, ___leaveOpen_1)); }
	inline bool get_leaveOpen_1() const { return ___leaveOpen_1; }
	inline bool* get_address_of_leaveOpen_1() { return &___leaveOpen_1; }
	inline void set_leaveOpen_1(bool value)
	{
		___leaveOpen_1 = value;
	}

	inline static int32_t get_offset_of_sequenceRental_2() { return static_cast<int32_t>(offsetof(MessagePackStreamReader_t88B2D757E1A7D63091590D050E6D29C2A04F6968, ___sequenceRental_2)); }
	inline Rental_t52FB21BE765DB6CF3D8A5285138986B9640A27CD  get_sequenceRental_2() const { return ___sequenceRental_2; }
	inline Rental_t52FB21BE765DB6CF3D8A5285138986B9640A27CD * get_address_of_sequenceRental_2() { return &___sequenceRental_2; }
	inline void set_sequenceRental_2(Rental_t52FB21BE765DB6CF3D8A5285138986B9640A27CD  value)
	{
		___sequenceRental_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___sequenceRental_2))->___owner_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___sequenceRental_2))->___U3CValueU3Ek__BackingField_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_endOfLastMessage_3() { return static_cast<int32_t>(offsetof(MessagePackStreamReader_t88B2D757E1A7D63091590D050E6D29C2A04F6968, ___endOfLastMessage_3)); }
	inline Nullable_1_t4D0B500AA123A0A527E4534B9010B059653E1546  get_endOfLastMessage_3() const { return ___endOfLastMessage_3; }
	inline Nullable_1_t4D0B500AA123A0A527E4534B9010B059653E1546 * get_address_of_endOfLastMessage_3() { return &___endOfLastMessage_3; }
	inline void set_endOfLastMessage_3(Nullable_1_t4D0B500AA123A0A527E4534B9010B059653E1546  value)
	{
		___endOfLastMessage_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___endOfLastMessage_3))->___value_0))->____object_0), (void*)NULL);
	}
};


// System.Net.WebSockets.ManagedWebSocket/MessageHeader
struct MessageHeader_t76B0077FC24560BBDC9A4B6B543DBEDA00702634 
{
public:
	// System.Net.WebSockets.ManagedWebSocket/MessageOpcode System.Net.WebSockets.ManagedWebSocket/MessageHeader::Opcode
	uint8_t ___Opcode_0;
	// System.Boolean System.Net.WebSockets.ManagedWebSocket/MessageHeader::Fin
	bool ___Fin_1;
	// System.Int64 System.Net.WebSockets.ManagedWebSocket/MessageHeader::PayloadLength
	int64_t ___PayloadLength_2;
	// System.Int32 System.Net.WebSockets.ManagedWebSocket/MessageHeader::Mask
	int32_t ___Mask_3;

public:
	inline static int32_t get_offset_of_Opcode_0() { return static_cast<int32_t>(offsetof(MessageHeader_t76B0077FC24560BBDC9A4B6B543DBEDA00702634, ___Opcode_0)); }
	inline uint8_t get_Opcode_0() const { return ___Opcode_0; }
	inline uint8_t* get_address_of_Opcode_0() { return &___Opcode_0; }
	inline void set_Opcode_0(uint8_t value)
	{
		___Opcode_0 = value;
	}

	inline static int32_t get_offset_of_Fin_1() { return static_cast<int32_t>(offsetof(MessageHeader_t76B0077FC24560BBDC9A4B6B543DBEDA00702634, ___Fin_1)); }
	inline bool get_Fin_1() const { return ___Fin_1; }
	inline bool* get_address_of_Fin_1() { return &___Fin_1; }
	inline void set_Fin_1(bool value)
	{
		___Fin_1 = value;
	}

	inline static int32_t get_offset_of_PayloadLength_2() { return static_cast<int32_t>(offsetof(MessageHeader_t76B0077FC24560BBDC9A4B6B543DBEDA00702634, ___PayloadLength_2)); }
	inline int64_t get_PayloadLength_2() const { return ___PayloadLength_2; }
	inline int64_t* get_address_of_PayloadLength_2() { return &___PayloadLength_2; }
	inline void set_PayloadLength_2(int64_t value)
	{
		___PayloadLength_2 = value;
	}

	inline static int32_t get_offset_of_Mask_3() { return static_cast<int32_t>(offsetof(MessageHeader_t76B0077FC24560BBDC9A4B6B543DBEDA00702634, ___Mask_3)); }
	inline int32_t get_Mask_3() const { return ___Mask_3; }
	inline int32_t* get_address_of_Mask_3() { return &___Mask_3; }
	inline void set_Mask_3(int32_t value)
	{
		___Mask_3 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct BaseCoreSystem_tD60FB642C7AFAB28F3D023BEDD98D52A0ED105D1  : public BaseEventSystem_t3D8C69A25D5A24E2D5A9D4AA786DA498318ACBCC
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseCoreSystem::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(BaseCoreSystem_tD60FB642C7AFAB28F3D023BEDD98D52A0ED105D1, ___U3CRegistrarU3Ek__BackingField_16)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_16() const { return ___U3CRegistrarU3Ek__BackingField_16; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_16() { return &___U3CRegistrarU3Ek__BackingField_16; }
	inline void set_U3CRegistrarU3Ek__BackingField_16(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_16), (void*)value);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.Net.WebSockets.ManagedWebSocket
struct ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393  : public WebSocket_t163494E6D52FFC7BACDCD1488EB1B61B392C298D
{
public:
	// System.IO.Stream System.Net.WebSockets.ManagedWebSocket::_stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____stream_6;
	// System.Boolean System.Net.WebSockets.ManagedWebSocket::_isServer
	bool ____isServer_7;
	// System.String System.Net.WebSockets.ManagedWebSocket::_subprotocol
	String_t* ____subprotocol_8;
	// System.Threading.Timer System.Net.WebSockets.ManagedWebSocket::_keepAliveTimer
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ____keepAliveTimer_9;
	// System.Threading.CancellationTokenSource System.Net.WebSockets.ManagedWebSocket::_abortSource
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ____abortSource_10;
	// System.Byte[] System.Net.WebSockets.ManagedWebSocket::_receiveBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____receiveBuffer_11;
	// System.Boolean System.Net.WebSockets.ManagedWebSocket::_receiveBufferFromPool
	bool ____receiveBufferFromPool_12;
	// System.Net.WebSockets.ManagedWebSocket/Utf8MessageState System.Net.WebSockets.ManagedWebSocket::_utf8TextState
	Utf8MessageState_tE921FCD77394CBA2FFCAB969044B8068951955D3 * ____utf8TextState_13;
	// System.Threading.SemaphoreSlim System.Net.WebSockets.ManagedWebSocket::_sendFrameAsyncLock
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____sendFrameAsyncLock_14;
	// System.Net.WebSockets.WebSocketState System.Net.WebSockets.ManagedWebSocket::_state
	int32_t ____state_15;
	// System.Boolean System.Net.WebSockets.ManagedWebSocket::_disposed
	bool ____disposed_16;
	// System.Boolean System.Net.WebSockets.ManagedWebSocket::_sentCloseFrame
	bool ____sentCloseFrame_17;
	// System.Boolean System.Net.WebSockets.ManagedWebSocket::_receivedCloseFrame
	bool ____receivedCloseFrame_18;
	// System.Nullable`1<System.Net.WebSockets.WebSocketCloseStatus> System.Net.WebSockets.ManagedWebSocket::_closeStatus
	Nullable_1_tEEF07CE805E86A33961C7C0AE095FA4A628605C6  ____closeStatus_19;
	// System.String System.Net.WebSockets.ManagedWebSocket::_closeStatusDescription
	String_t* ____closeStatusDescription_20;
	// System.Net.WebSockets.ManagedWebSocket/MessageHeader System.Net.WebSockets.ManagedWebSocket::_lastReceiveHeader
	MessageHeader_t76B0077FC24560BBDC9A4B6B543DBEDA00702634  ____lastReceiveHeader_21;
	// System.Int32 System.Net.WebSockets.ManagedWebSocket::_receiveBufferOffset
	int32_t ____receiveBufferOffset_22;
	// System.Int32 System.Net.WebSockets.ManagedWebSocket::_receiveBufferCount
	int32_t ____receiveBufferCount_23;
	// System.Int32 System.Net.WebSockets.ManagedWebSocket::_receivedMaskOffsetOffset
	int32_t ____receivedMaskOffsetOffset_24;
	// System.Byte[] System.Net.WebSockets.ManagedWebSocket::_sendBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____sendBuffer_25;
	// System.Boolean System.Net.WebSockets.ManagedWebSocket::_lastSendWasFragment
	bool ____lastSendWasFragment_26;
	// System.Threading.Tasks.Task System.Net.WebSockets.ManagedWebSocket::_lastSendAsync
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ____lastSendAsync_27;
	// System.Threading.Tasks.Task`1<System.Net.WebSockets.WebSocketReceiveResult> System.Net.WebSockets.ManagedWebSocket::_lastReceiveAsync
	Task_1_t79E764D87096B674F330B1306805A0FF72B2E83E * ____lastReceiveAsync_28;

public:
	inline static int32_t get_offset_of__stream_6() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____stream_6)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__stream_6() const { return ____stream_6; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__stream_6() { return &____stream_6; }
	inline void set__stream_6(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____stream_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stream_6), (void*)value);
	}

	inline static int32_t get_offset_of__isServer_7() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____isServer_7)); }
	inline bool get__isServer_7() const { return ____isServer_7; }
	inline bool* get_address_of__isServer_7() { return &____isServer_7; }
	inline void set__isServer_7(bool value)
	{
		____isServer_7 = value;
	}

	inline static int32_t get_offset_of__subprotocol_8() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____subprotocol_8)); }
	inline String_t* get__subprotocol_8() const { return ____subprotocol_8; }
	inline String_t** get_address_of__subprotocol_8() { return &____subprotocol_8; }
	inline void set__subprotocol_8(String_t* value)
	{
		____subprotocol_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____subprotocol_8), (void*)value);
	}

	inline static int32_t get_offset_of__keepAliveTimer_9() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____keepAliveTimer_9)); }
	inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * get__keepAliveTimer_9() const { return ____keepAliveTimer_9; }
	inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB ** get_address_of__keepAliveTimer_9() { return &____keepAliveTimer_9; }
	inline void set__keepAliveTimer_9(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * value)
	{
		____keepAliveTimer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keepAliveTimer_9), (void*)value);
	}

	inline static int32_t get_offset_of__abortSource_10() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____abortSource_10)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get__abortSource_10() const { return ____abortSource_10; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of__abortSource_10() { return &____abortSource_10; }
	inline void set__abortSource_10(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		____abortSource_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____abortSource_10), (void*)value);
	}

	inline static int32_t get_offset_of__receiveBuffer_11() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____receiveBuffer_11)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__receiveBuffer_11() const { return ____receiveBuffer_11; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__receiveBuffer_11() { return &____receiveBuffer_11; }
	inline void set__receiveBuffer_11(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____receiveBuffer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____receiveBuffer_11), (void*)value);
	}

	inline static int32_t get_offset_of__receiveBufferFromPool_12() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____receiveBufferFromPool_12)); }
	inline bool get__receiveBufferFromPool_12() const { return ____receiveBufferFromPool_12; }
	inline bool* get_address_of__receiveBufferFromPool_12() { return &____receiveBufferFromPool_12; }
	inline void set__receiveBufferFromPool_12(bool value)
	{
		____receiveBufferFromPool_12 = value;
	}

	inline static int32_t get_offset_of__utf8TextState_13() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____utf8TextState_13)); }
	inline Utf8MessageState_tE921FCD77394CBA2FFCAB969044B8068951955D3 * get__utf8TextState_13() const { return ____utf8TextState_13; }
	inline Utf8MessageState_tE921FCD77394CBA2FFCAB969044B8068951955D3 ** get_address_of__utf8TextState_13() { return &____utf8TextState_13; }
	inline void set__utf8TextState_13(Utf8MessageState_tE921FCD77394CBA2FFCAB969044B8068951955D3 * value)
	{
		____utf8TextState_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____utf8TextState_13), (void*)value);
	}

	inline static int32_t get_offset_of__sendFrameAsyncLock_14() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____sendFrameAsyncLock_14)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__sendFrameAsyncLock_14() const { return ____sendFrameAsyncLock_14; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__sendFrameAsyncLock_14() { return &____sendFrameAsyncLock_14; }
	inline void set__sendFrameAsyncLock_14(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____sendFrameAsyncLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sendFrameAsyncLock_14), (void*)value);
	}

	inline static int32_t get_offset_of__state_15() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____state_15)); }
	inline int32_t get__state_15() const { return ____state_15; }
	inline int32_t* get_address_of__state_15() { return &____state_15; }
	inline void set__state_15(int32_t value)
	{
		____state_15 = value;
	}

	inline static int32_t get_offset_of__disposed_16() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____disposed_16)); }
	inline bool get__disposed_16() const { return ____disposed_16; }
	inline bool* get_address_of__disposed_16() { return &____disposed_16; }
	inline void set__disposed_16(bool value)
	{
		____disposed_16 = value;
	}

	inline static int32_t get_offset_of__sentCloseFrame_17() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____sentCloseFrame_17)); }
	inline bool get__sentCloseFrame_17() const { return ____sentCloseFrame_17; }
	inline bool* get_address_of__sentCloseFrame_17() { return &____sentCloseFrame_17; }
	inline void set__sentCloseFrame_17(bool value)
	{
		____sentCloseFrame_17 = value;
	}

	inline static int32_t get_offset_of__receivedCloseFrame_18() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____receivedCloseFrame_18)); }
	inline bool get__receivedCloseFrame_18() const { return ____receivedCloseFrame_18; }
	inline bool* get_address_of__receivedCloseFrame_18() { return &____receivedCloseFrame_18; }
	inline void set__receivedCloseFrame_18(bool value)
	{
		____receivedCloseFrame_18 = value;
	}

	inline static int32_t get_offset_of__closeStatus_19() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____closeStatus_19)); }
	inline Nullable_1_tEEF07CE805E86A33961C7C0AE095FA4A628605C6  get__closeStatus_19() const { return ____closeStatus_19; }
	inline Nullable_1_tEEF07CE805E86A33961C7C0AE095FA4A628605C6 * get_address_of__closeStatus_19() { return &____closeStatus_19; }
	inline void set__closeStatus_19(Nullable_1_tEEF07CE805E86A33961C7C0AE095FA4A628605C6  value)
	{
		____closeStatus_19 = value;
	}

	inline static int32_t get_offset_of__closeStatusDescription_20() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____closeStatusDescription_20)); }
	inline String_t* get__closeStatusDescription_20() const { return ____closeStatusDescription_20; }
	inline String_t** get_address_of__closeStatusDescription_20() { return &____closeStatusDescription_20; }
	inline void set__closeStatusDescription_20(String_t* value)
	{
		____closeStatusDescription_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____closeStatusDescription_20), (void*)value);
	}

	inline static int32_t get_offset_of__lastReceiveHeader_21() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____lastReceiveHeader_21)); }
	inline MessageHeader_t76B0077FC24560BBDC9A4B6B543DBEDA00702634  get__lastReceiveHeader_21() const { return ____lastReceiveHeader_21; }
	inline MessageHeader_t76B0077FC24560BBDC9A4B6B543DBEDA00702634 * get_address_of__lastReceiveHeader_21() { return &____lastReceiveHeader_21; }
	inline void set__lastReceiveHeader_21(MessageHeader_t76B0077FC24560BBDC9A4B6B543DBEDA00702634  value)
	{
		____lastReceiveHeader_21 = value;
	}

	inline static int32_t get_offset_of__receiveBufferOffset_22() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____receiveBufferOffset_22)); }
	inline int32_t get__receiveBufferOffset_22() const { return ____receiveBufferOffset_22; }
	inline int32_t* get_address_of__receiveBufferOffset_22() { return &____receiveBufferOffset_22; }
	inline void set__receiveBufferOffset_22(int32_t value)
	{
		____receiveBufferOffset_22 = value;
	}

	inline static int32_t get_offset_of__receiveBufferCount_23() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____receiveBufferCount_23)); }
	inline int32_t get__receiveBufferCount_23() const { return ____receiveBufferCount_23; }
	inline int32_t* get_address_of__receiveBufferCount_23() { return &____receiveBufferCount_23; }
	inline void set__receiveBufferCount_23(int32_t value)
	{
		____receiveBufferCount_23 = value;
	}

	inline static int32_t get_offset_of__receivedMaskOffsetOffset_24() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____receivedMaskOffsetOffset_24)); }
	inline int32_t get__receivedMaskOffsetOffset_24() const { return ____receivedMaskOffsetOffset_24; }
	inline int32_t* get_address_of__receivedMaskOffsetOffset_24() { return &____receivedMaskOffsetOffset_24; }
	inline void set__receivedMaskOffsetOffset_24(int32_t value)
	{
		____receivedMaskOffsetOffset_24 = value;
	}

	inline static int32_t get_offset_of__sendBuffer_25() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____sendBuffer_25)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__sendBuffer_25() const { return ____sendBuffer_25; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__sendBuffer_25() { return &____sendBuffer_25; }
	inline void set__sendBuffer_25(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____sendBuffer_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sendBuffer_25), (void*)value);
	}

	inline static int32_t get_offset_of__lastSendWasFragment_26() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____lastSendWasFragment_26)); }
	inline bool get__lastSendWasFragment_26() const { return ____lastSendWasFragment_26; }
	inline bool* get_address_of__lastSendWasFragment_26() { return &____lastSendWasFragment_26; }
	inline void set__lastSendWasFragment_26(bool value)
	{
		____lastSendWasFragment_26 = value;
	}

	inline static int32_t get_offset_of__lastSendAsync_27() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____lastSendAsync_27)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get__lastSendAsync_27() const { return ____lastSendAsync_27; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of__lastSendAsync_27() { return &____lastSendAsync_27; }
	inline void set__lastSendAsync_27(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		____lastSendAsync_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastSendAsync_27), (void*)value);
	}

	inline static int32_t get_offset_of__lastReceiveAsync_28() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393, ____lastReceiveAsync_28)); }
	inline Task_1_t79E764D87096B674F330B1306805A0FF72B2E83E * get__lastReceiveAsync_28() const { return ____lastReceiveAsync_28; }
	inline Task_1_t79E764D87096B674F330B1306805A0FF72B2E83E ** get_address_of__lastReceiveAsync_28() { return &____lastReceiveAsync_28; }
	inline void set__lastReceiveAsync_28(Task_1_t79E764D87096B674F330B1306805A0FF72B2E83E * value)
	{
		____lastReceiveAsync_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReceiveAsync_28), (void*)value);
	}
};

struct ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393_StaticFields
{
public:
	// System.Security.Cryptography.RandomNumberGenerator System.Net.WebSockets.ManagedWebSocket::s_random
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ___s_random_0;
	// System.Text.UTF8Encoding System.Net.WebSockets.ManagedWebSocket::s_textEncoding
	UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * ___s_textEncoding_1;
	// System.Net.WebSockets.WebSocketState[] System.Net.WebSockets.ManagedWebSocket::s_validSendStates
	WebSocketStateU5BU5D_t1BB6FB2DCD8E670734694F18E718B567A9EA91C4* ___s_validSendStates_2;
	// System.Net.WebSockets.WebSocketState[] System.Net.WebSockets.ManagedWebSocket::s_validReceiveStates
	WebSocketStateU5BU5D_t1BB6FB2DCD8E670734694F18E718B567A9EA91C4* ___s_validReceiveStates_3;
	// System.Net.WebSockets.WebSocketState[] System.Net.WebSockets.ManagedWebSocket::s_validCloseOutputStates
	WebSocketStateU5BU5D_t1BB6FB2DCD8E670734694F18E718B567A9EA91C4* ___s_validCloseOutputStates_4;
	// System.Net.WebSockets.WebSocketState[] System.Net.WebSockets.ManagedWebSocket::s_validCloseStates
	WebSocketStateU5BU5D_t1BB6FB2DCD8E670734694F18E718B567A9EA91C4* ___s_validCloseStates_5;

public:
	inline static int32_t get_offset_of_s_random_0() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393_StaticFields, ___s_random_0)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get_s_random_0() const { return ___s_random_0; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of_s_random_0() { return &___s_random_0; }
	inline void set_s_random_0(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		___s_random_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_random_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_textEncoding_1() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393_StaticFields, ___s_textEncoding_1)); }
	inline UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * get_s_textEncoding_1() const { return ___s_textEncoding_1; }
	inline UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 ** get_address_of_s_textEncoding_1() { return &___s_textEncoding_1; }
	inline void set_s_textEncoding_1(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * value)
	{
		___s_textEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_textEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_validSendStates_2() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393_StaticFields, ___s_validSendStates_2)); }
	inline WebSocketStateU5BU5D_t1BB6FB2DCD8E670734694F18E718B567A9EA91C4* get_s_validSendStates_2() const { return ___s_validSendStates_2; }
	inline WebSocketStateU5BU5D_t1BB6FB2DCD8E670734694F18E718B567A9EA91C4** get_address_of_s_validSendStates_2() { return &___s_validSendStates_2; }
	inline void set_s_validSendStates_2(WebSocketStateU5BU5D_t1BB6FB2DCD8E670734694F18E718B567A9EA91C4* value)
	{
		___s_validSendStates_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_validSendStates_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_validReceiveStates_3() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393_StaticFields, ___s_validReceiveStates_3)); }
	inline WebSocketStateU5BU5D_t1BB6FB2DCD8E670734694F18E718B567A9EA91C4* get_s_validReceiveStates_3() const { return ___s_validReceiveStates_3; }
	inline WebSocketStateU5BU5D_t1BB6FB2DCD8E670734694F18E718B567A9EA91C4** get_address_of_s_validReceiveStates_3() { return &___s_validReceiveStates_3; }
	inline void set_s_validReceiveStates_3(WebSocketStateU5BU5D_t1BB6FB2DCD8E670734694F18E718B567A9EA91C4* value)
	{
		___s_validReceiveStates_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_validReceiveStates_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_validCloseOutputStates_4() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393_StaticFields, ___s_validCloseOutputStates_4)); }
	inline WebSocketStateU5BU5D_t1BB6FB2DCD8E670734694F18E718B567A9EA91C4* get_s_validCloseOutputStates_4() const { return ___s_validCloseOutputStates_4; }
	inline WebSocketStateU5BU5D_t1BB6FB2DCD8E670734694F18E718B567A9EA91C4** get_address_of_s_validCloseOutputStates_4() { return &___s_validCloseOutputStates_4; }
	inline void set_s_validCloseOutputStates_4(WebSocketStateU5BU5D_t1BB6FB2DCD8E670734694F18E718B567A9EA91C4* value)
	{
		___s_validCloseOutputStates_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_validCloseOutputStates_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_validCloseStates_5() { return static_cast<int32_t>(offsetof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393_StaticFields, ___s_validCloseStates_5)); }
	inline WebSocketStateU5BU5D_t1BB6FB2DCD8E670734694F18E718B567A9EA91C4* get_s_validCloseStates_5() const { return ___s_validCloseStates_5; }
	inline WebSocketStateU5BU5D_t1BB6FB2DCD8E670734694F18E718B567A9EA91C4** get_address_of_s_validCloseStates_5() { return &___s_validCloseStates_5; }
	inline void set_s_validCloseStates_5(WebSocketStateU5BU5D_t1BB6FB2DCD8E670734694F18E718B567A9EA91C4* value)
	{
		___s_validCloseStates_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_validCloseStates_5), (void*)value);
	}
};


// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA  : public EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem
struct BaseDataProviderAccessCoreSystem_t7A7B0A8F1AA8A4A6F16E2590B1A5125C9D6B6B47  : public BaseCoreSystem_tD60FB642C7AFAB28F3D023BEDD98D52A0ED105D1
{
public:
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider> Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::dataProviders
	List_1_t94FC783F2185B5CB832CD245C5E89430CC6533D4 * ___dataProviders_17;

public:
	inline static int32_t get_offset_of_dataProviders_17() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_t7A7B0A8F1AA8A4A6F16E2590B1A5125C9D6B6B47, ___dataProviders_17)); }
	inline List_1_t94FC783F2185B5CB832CD245C5E89430CC6533D4 * get_dataProviders_17() const { return ___dataProviders_17; }
	inline List_1_t94FC783F2185B5CB832CD245C5E89430CC6533D4 ** get_address_of_dataProviders_17() { return &___dataProviders_17; }
	inline void set_dataProviders_17(List_1_t94FC783F2185B5CB832CD245C5E89430CC6533D4 * value)
	{
		___dataProviders_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataProviders_17), (void*)value);
	}
};

struct BaseDataProviderAccessCoreSystem_t7A7B0A8F1AA8A4A6F16E2590B1A5125C9D6B6B47_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_18;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::LateUpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___LateUpdatePerfMarker_19;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_18() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_t7A7B0A8F1AA8A4A6F16E2590B1A5125C9D6B6B47_StaticFields, ___UpdatePerfMarker_18)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_18() const { return ___UpdatePerfMarker_18; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_18() { return &___UpdatePerfMarker_18; }
	inline void set_UpdatePerfMarker_18(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_18 = value;
	}

	inline static int32_t get_offset_of_LateUpdatePerfMarker_19() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_t7A7B0A8F1AA8A4A6F16E2590B1A5125C9D6B6B47_StaticFields, ___LateUpdatePerfMarker_19)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_LateUpdatePerfMarker_19() const { return ___LateUpdatePerfMarker_19; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_LateUpdatePerfMarker_19() { return &___LateUpdatePerfMarker_19; }
	inline void set_LateUpdatePerfMarker_19(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___LateUpdatePerfMarker_19 = value;
	}
};


// MapRaycastProvider
struct MapRaycastProvider_t05A94D4749F82A250A4D8BD35FCB88FB5E770989  : public BaseCoreSystem_tD60FB642C7AFAB28F3D023BEDD98D52A0ED105D1
{
public:
	// System.Collections.Generic.List`1<Microsoft.Maps.Unity.MapRenderer> MapRaycastProvider::_mapRenderers
	List_1_tB730799AB9076F9B3BBB2088B97BB4241771F8D0 * ____mapRenderers_17;

public:
	inline static int32_t get_offset_of__mapRenderers_17() { return static_cast<int32_t>(offsetof(MapRaycastProvider_t05A94D4749F82A250A4D8BD35FCB88FB5E770989, ____mapRenderers_17)); }
	inline List_1_tB730799AB9076F9B3BBB2088B97BB4241771F8D0 * get__mapRenderers_17() const { return ____mapRenderers_17; }
	inline List_1_tB730799AB9076F9B3BBB2088B97BB4241771F8D0 ** get_address_of__mapRenderers_17() { return &____mapRenderers_17; }
	inline void set__mapRenderers_17(List_1_tB730799AB9076F9B3BBB2088B97BB4241771F8D0 * value)
	{
		____mapRenderers_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mapRenderers_17), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem
struct MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9  : public BaseCoreSystem_tD60FB642C7AFAB28F3D023BEDD98D52A0ED105D1
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_17;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::diagnosticVisualizationParent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___diagnosticVisualizationParent_18;
	// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityToolkitVisualProfiler Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::visualProfiler
	MixedRealityToolkitVisualProfiler_t220C11F70BC64DCE0842637B35DC785217B6A3B3 * ___visualProfiler_19;
	// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::diagnosticsSystemProfile
	MixedRealityDiagnosticsProfile_tB77D28B2D28A27D6719DC464D9A087D90FA62A35 * ___diagnosticsSystemProfile_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showDiagnostics
	bool ___showDiagnostics_21;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showProfiler
	bool ___showProfiler_22;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showFrameInfo
	bool ___showFrameInfo_23;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showMemoryStats
	bool ___showMemoryStats_24;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::frameSampleRate
	float ___frameSampleRate_25;
	// Microsoft.MixedReality.Toolkit.Diagnostics.DiagnosticsEventData Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::eventData
	DiagnosticsEventData_t66E2FC32D9CCC21E8436A3BD941E41FA16BB0959 * ___eventData_26;
	// UnityEngine.TextAnchor Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowAnchor
	int32_t ___windowAnchor_29;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowOffset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___windowOffset_30;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowScale
	float ___windowScale_31;
	// System.Single Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::windowFollowSpeed
	float ___windowFollowSpeed_32;
	// System.Boolean Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::showProfilerDuringMRC
	bool ___showProfilerDuringMRC_33;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___U3CNameU3Ek__BackingField_17)); }
	inline String_t* get_U3CNameU3Ek__BackingField_17() const { return ___U3CNameU3Ek__BackingField_17; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_17() { return &___U3CNameU3Ek__BackingField_17; }
	inline void set_U3CNameU3Ek__BackingField_17(String_t* value)
	{
		___U3CNameU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_diagnosticVisualizationParent_18() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___diagnosticVisualizationParent_18)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_diagnosticVisualizationParent_18() const { return ___diagnosticVisualizationParent_18; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_diagnosticVisualizationParent_18() { return &___diagnosticVisualizationParent_18; }
	inline void set_diagnosticVisualizationParent_18(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___diagnosticVisualizationParent_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___diagnosticVisualizationParent_18), (void*)value);
	}

	inline static int32_t get_offset_of_visualProfiler_19() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___visualProfiler_19)); }
	inline MixedRealityToolkitVisualProfiler_t220C11F70BC64DCE0842637B35DC785217B6A3B3 * get_visualProfiler_19() const { return ___visualProfiler_19; }
	inline MixedRealityToolkitVisualProfiler_t220C11F70BC64DCE0842637B35DC785217B6A3B3 ** get_address_of_visualProfiler_19() { return &___visualProfiler_19; }
	inline void set_visualProfiler_19(MixedRealityToolkitVisualProfiler_t220C11F70BC64DCE0842637B35DC785217B6A3B3 * value)
	{
		___visualProfiler_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visualProfiler_19), (void*)value);
	}

	inline static int32_t get_offset_of_diagnosticsSystemProfile_20() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___diagnosticsSystemProfile_20)); }
	inline MixedRealityDiagnosticsProfile_tB77D28B2D28A27D6719DC464D9A087D90FA62A35 * get_diagnosticsSystemProfile_20() const { return ___diagnosticsSystemProfile_20; }
	inline MixedRealityDiagnosticsProfile_tB77D28B2D28A27D6719DC464D9A087D90FA62A35 ** get_address_of_diagnosticsSystemProfile_20() { return &___diagnosticsSystemProfile_20; }
	inline void set_diagnosticsSystemProfile_20(MixedRealityDiagnosticsProfile_tB77D28B2D28A27D6719DC464D9A087D90FA62A35 * value)
	{
		___diagnosticsSystemProfile_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___diagnosticsSystemProfile_20), (void*)value);
	}

	inline static int32_t get_offset_of_showDiagnostics_21() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___showDiagnostics_21)); }
	inline bool get_showDiagnostics_21() const { return ___showDiagnostics_21; }
	inline bool* get_address_of_showDiagnostics_21() { return &___showDiagnostics_21; }
	inline void set_showDiagnostics_21(bool value)
	{
		___showDiagnostics_21 = value;
	}

	inline static int32_t get_offset_of_showProfiler_22() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___showProfiler_22)); }
	inline bool get_showProfiler_22() const { return ___showProfiler_22; }
	inline bool* get_address_of_showProfiler_22() { return &___showProfiler_22; }
	inline void set_showProfiler_22(bool value)
	{
		___showProfiler_22 = value;
	}

	inline static int32_t get_offset_of_showFrameInfo_23() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___showFrameInfo_23)); }
	inline bool get_showFrameInfo_23() const { return ___showFrameInfo_23; }
	inline bool* get_address_of_showFrameInfo_23() { return &___showFrameInfo_23; }
	inline void set_showFrameInfo_23(bool value)
	{
		___showFrameInfo_23 = value;
	}

	inline static int32_t get_offset_of_showMemoryStats_24() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___showMemoryStats_24)); }
	inline bool get_showMemoryStats_24() const { return ___showMemoryStats_24; }
	inline bool* get_address_of_showMemoryStats_24() { return &___showMemoryStats_24; }
	inline void set_showMemoryStats_24(bool value)
	{
		___showMemoryStats_24 = value;
	}

	inline static int32_t get_offset_of_frameSampleRate_25() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___frameSampleRate_25)); }
	inline float get_frameSampleRate_25() const { return ___frameSampleRate_25; }
	inline float* get_address_of_frameSampleRate_25() { return &___frameSampleRate_25; }
	inline void set_frameSampleRate_25(float value)
	{
		___frameSampleRate_25 = value;
	}

	inline static int32_t get_offset_of_eventData_26() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___eventData_26)); }
	inline DiagnosticsEventData_t66E2FC32D9CCC21E8436A3BD941E41FA16BB0959 * get_eventData_26() const { return ___eventData_26; }
	inline DiagnosticsEventData_t66E2FC32D9CCC21E8436A3BD941E41FA16BB0959 ** get_address_of_eventData_26() { return &___eventData_26; }
	inline void set_eventData_26(DiagnosticsEventData_t66E2FC32D9CCC21E8436A3BD941E41FA16BB0959 * value)
	{
		___eventData_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventData_26), (void*)value);
	}

	inline static int32_t get_offset_of_windowAnchor_29() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___windowAnchor_29)); }
	inline int32_t get_windowAnchor_29() const { return ___windowAnchor_29; }
	inline int32_t* get_address_of_windowAnchor_29() { return &___windowAnchor_29; }
	inline void set_windowAnchor_29(int32_t value)
	{
		___windowAnchor_29 = value;
	}

	inline static int32_t get_offset_of_windowOffset_30() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___windowOffset_30)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_windowOffset_30() const { return ___windowOffset_30; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_windowOffset_30() { return &___windowOffset_30; }
	inline void set_windowOffset_30(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___windowOffset_30 = value;
	}

	inline static int32_t get_offset_of_windowScale_31() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___windowScale_31)); }
	inline float get_windowScale_31() const { return ___windowScale_31; }
	inline float* get_address_of_windowScale_31() { return &___windowScale_31; }
	inline void set_windowScale_31(float value)
	{
		___windowScale_31 = value;
	}

	inline static int32_t get_offset_of_windowFollowSpeed_32() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___windowFollowSpeed_32)); }
	inline float get_windowFollowSpeed_32() const { return ___windowFollowSpeed_32; }
	inline float* get_address_of_windowFollowSpeed_32() { return &___windowFollowSpeed_32; }
	inline void set_windowFollowSpeed_32(float value)
	{
		___windowFollowSpeed_32 = value;
	}

	inline static int32_t get_offset_of_showProfilerDuringMRC_33() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9, ___showProfilerDuringMRC_33)); }
	inline bool get_showProfilerDuringMRC_33() const { return ___showProfilerDuringMRC_33; }
	inline bool* get_address_of_showProfilerDuringMRC_33() { return &___showProfilerDuringMRC_33; }
	inline void set_showProfilerDuringMRC_33(bool value)
	{
		___showProfilerDuringMRC_33 = value;
	}
};

struct MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::OnDiagnosticsChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___OnDiagnosticsChangedPerfMarker_27;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Diagnostics.IMixedRealityDiagnosticsHandler> Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem::OnDiagnosticsChanged
	EventFunction_1_tA38ADF88EA964859D63EEA6C3B9786CF7247171A * ___OnDiagnosticsChanged_28;

public:
	inline static int32_t get_offset_of_OnDiagnosticsChangedPerfMarker_27() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9_StaticFields, ___OnDiagnosticsChangedPerfMarker_27)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_OnDiagnosticsChangedPerfMarker_27() const { return ___OnDiagnosticsChangedPerfMarker_27; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_OnDiagnosticsChangedPerfMarker_27() { return &___OnDiagnosticsChangedPerfMarker_27; }
	inline void set_OnDiagnosticsChangedPerfMarker_27(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___OnDiagnosticsChangedPerfMarker_27 = value;
	}

	inline static int32_t get_offset_of_OnDiagnosticsChanged_28() { return static_cast<int32_t>(offsetof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9_StaticFields, ___OnDiagnosticsChanged_28)); }
	inline EventFunction_1_tA38ADF88EA964859D63EEA6C3B9786CF7247171A * get_OnDiagnosticsChanged_28() const { return ___OnDiagnosticsChanged_28; }
	inline EventFunction_1_tA38ADF88EA964859D63EEA6C3B9786CF7247171A ** get_address_of_OnDiagnosticsChanged_28() { return &___OnDiagnosticsChanged_28; }
	inline void set_OnDiagnosticsChanged_28(EventFunction_1_tA38ADF88EA964859D63EEA6C3B9786CF7247171A * value)
	{
		___OnDiagnosticsChanged_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDiagnosticsChanged_28), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Microsoft.Maps.Unity.MapRendererBase
struct MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Mesh> Microsoft.Maps.Unity.MapRendererBase::#=zyvWJptMsGvQYOmwzQQ==
	List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B * ___U23U3DzyvWJptMsGvQYOmwzQQU3DU3D_5;
	// System.Boolean Microsoft.Maps.Unity.MapRendererBase::#=zgLYW_oB1Bmf8
	bool ___U23U3DzgLYW_oB1Bmf8_9;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::_version
	int32_t ____version_11;
	// Microsoft.Maps.Unity.MapSession Microsoft.Maps.Unity.MapRendererBase::_mapSession
	MapSession_t250FD50789E1C78E85BD85621AFB52FB62A9023E * ____mapSession_12;
	// Microsoft.Maps.Unity.MapSession Microsoft.Maps.Unity.MapRendererBase::#=zilyv5B6UxfpN
	MapSession_t250FD50789E1C78E85BD85621AFB52FB62A9023E * ___U23U3Dzilyv5B6UxfpN_13;
	// System.String Microsoft.Maps.Unity.MapRendererBase::#=zIwlFIzVTk1bahUD98w==
	String_t* ___U23U3DzIwlFIzVTk1bahUD98wU3DU3D_14;
	// UnityEngine.Color Microsoft.Maps.Unity.MapRendererBase::_mapEdgeColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____mapEdgeColor_15;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::_mapEdgeColorFadeDistance
	float ____mapEdgeColorFadeDistance_16;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::_detailOffset
	float ____detailOffset_17;
	// Microsoft.Maps.Unity.LatLonWrapper Microsoft.Maps.Unity.MapRendererBase::_center
	LatLonWrapper_tAECAE12B0A62DE49E57EC25734C8938758F716FE  ____center_18;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::_zoomLevel
	float ____zoomLevel_19;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::_minimumZoomLevel
	float ____minimumZoomLevel_20;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::_maximumZoomLevel
	float ____maximumZoomLevel_21;
	// Microsoft.Maps.Unity.MapTerrainType Microsoft.Maps.Unity.MapRendererBase::_mapTerrainType
	int32_t ____mapTerrainType_22;
	// Microsoft.Maps.Unity.MapShape Microsoft.Maps.Unity.MapRendererBase::_mapShape
	int32_t ____mapShape_23;
	// System.Double Microsoft.Maps.Unity.MapRendererBase::#=zglzr$NfYA8gy8qXUGy7jTpo=
	double ___U23U3DzglzrU24NfYA8gy8qXUGy7jTpoU3D_24;
	// UnityEngine.Vector2 Microsoft.Maps.Unity.MapRendererBase::_localMapDimension
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ____localMapDimension_25;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::_localMapRadius
	float ____localMapRadius_26;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::_localMapBaseHeight
	float ____localMapBaseHeight_27;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::#=zqKyyv6nTzCzyiBh8bHEY6Nc=
	float ___U23U3DzqKyyv6nTzCzyiBh8bHEY6NcU3D_28;
	// UnityEngine.Mesh Microsoft.Maps.Unity.MapRendererBase::#=zGUWZE_0nMZYj
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___U23U3DzGUWZE_0nMZYj_29;
	// UnityEngine.Mesh Microsoft.Maps.Unity.MapRendererBase::#=zp9lbXTWvMSmA0k_TEQ==
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___U23U3Dzp9lbXTWvMSmA0k_TEQU3DU3D_30;
	// UnityEngine.Mesh Microsoft.Maps.Unity.MapRendererBase::#=zL3vZk1pnYgEWKBlf_w==
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___U23U3DzL3vZk1pnYgEWKBlf_wU3DU3D_31;
	// UnityEngine.Mesh Microsoft.Maps.Unity.MapRendererBase::#=zBLfz2MYFue$$l2UvVg==
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___U23U3DzBLfz2MYFueU24U24l2UvVgU3DU3D_32;
	// Microsoft.Geospatial.GeoBoundingBox Microsoft.Maps.Unity.MapRendererBase::#=zIIQnC376dsSOzdD8EQ==
	GeoBoundingBox_t1E8B92C76B1F3F64468713C93BC6B184D116B756  ___U23U3DzIIQnC376dsSOzdD8EQU3DU3D_33;
	// UnityEngine.Texture2D Microsoft.Maps.Unity.MapRendererBase::#=z8POMnU2KO6Ye
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___U23U3Dz8POMnU2KO6Ye_34;
	// UnityEngine.Camera Microsoft.Maps.Unity.MapRendererBase::#=z9VIXQ0bkqz8rsspyOvsw1RM=
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___U23U3Dz9VIXQ0bkqz8rsspyOvsw1RMU3D_35;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::_elevationScale
	float ____elevationScale_36;
	// System.Boolean Microsoft.Maps.Unity.MapRendererBase::_castShadows
	bool ____castShadows_37;
	// System.Boolean Microsoft.Maps.Unity.MapRendererBase::_receiveShadows
	bool ____receiveShadows_38;
	// System.Boolean Microsoft.Maps.Unity.MapRendererBase::_enableMrtkMaterialIntegration
	bool ____enableMrtkMaterialIntegration_39;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::_terrainMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ____terrainMaterial_40;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::#=zWyvPN7olV3vQtg7OafwQt$A=
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U23U3DzWyvPN7olV3vQtg7OafwQtU24AU3D_41;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::#=zcbOZrgU6I1H2jVMKcvPfgKA=
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U23U3DzcbOZrgU6I1H2jVMKcvPfgKAU3D_42;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::#=zcWzpUwpbuVFGtArGRhP7wTE=
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U23U3DzcWzpUwpbuVFGtArGRhP7wTEU3D_43;
	// System.Boolean Microsoft.Maps.Unity.MapRendererBase::_isClippingVolumeWallEnabled
	bool ____isClippingVolumeWallEnabled_44;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::_clippingVolumeMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ____clippingVolumeMaterial_45;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::#=zniRhOY9yyJnMhhhG8alvSLxfxueK
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U23U3DzniRhOY9yyJnMhhhG8alvSLxfxueK_46;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::#=zTIqKs1aEHRH$$jWntQ==
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U23U3DzTIqKs1aEHRHU24U24jWntQU3DU3D_47;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::#=zbjjNK00sLTMIej8v8Q==
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U23U3DzbjjNK00sLTMIej8v8QU3DU3D_48;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::#=zDq5QGH7IlHPX
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U23U3DzDq5QGH7IlHPX_49;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::#=zW$qNkR8ZJBhllEacyKnc00Y=
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U23U3DzWU24qNkR8ZJBhllEacyKnc00YU3D_50;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::#=zuNJT9UHX8n8$tWNM59cHigE=
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U23U3DzuNJT9UHX8n8U24tWNM59cHigEU3D_51;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::#=zGXUfOHV4rxXf
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U23U3DzGXUfOHV4rxXf_52;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::#=z8dqN2EFS8IXkhgqvug==
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U23U3Dz8dqN2EFS8IXkhgqvugU3DU3D_53;
	// UnityEngine.Material Microsoft.Maps.Unity.MapRendererBase::#=zT9JVwRpOhamZ4lMrKzqNo12gx0JN
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___U23U3DzT9JVwRpOhamZ4lMrKzqNo12gx0JN_54;
	// Microsoft.Maps.Unity.ClippingVolumeDistanceTextureResolution Microsoft.Maps.Unity.MapRendererBase::_clippingVolumeDistanceTextureResolution
	int32_t ____clippingVolumeDistanceTextureResolution_55;
	// Microsoft.Maps.Unity.ClippingVolumeDistanceTextureResolution Microsoft.Maps.Unity.MapRendererBase::#=z1X5BSg16x38NSSZZqh1i0r0=
	int32_t ___U23U3Dz1X5BSg16x38NSSZZqh1i0r0U3D_56;
	// Microsoft.Maps.Unity.TextureTileLayerList Microsoft.Maps.Unity.MapRendererBase::_textureTileLayers
	TextureTileLayerList_tEF7045D4A8E00005129C46B1B064FF11D37689F8 * ____textureTileLayers_57;
	// Microsoft.Maps.Unity.ElevationTileLayerList Microsoft.Maps.Unity.MapRendererBase::_elevationTileLayers
	ElevationTileLayerList_t3EEC2F8696DA2541B15517E87F3C2B3EFC6E6B13 * ____elevationTileLayers_59;
	// #=zSGAjct8w61XD9NwbVtcamQwAVN4i Microsoft.Maps.Unity.MapRendererBase::#=zmti9cAx_YIgb
	U23U3DzSGAjct8w61XD9NwbVtcamQwAVN4i_t63810C266FCF7349E740FEF3D49697C18C74AACC * ___U23U3Dzmti9cAx_YIgb_60;
	// System.Nullable`1<System.Boolean> Microsoft.Maps.Unity.MapRendererBase::#=zBIBiHxvhve7ilGYGNQ==
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U23U3DzBIBiHxvhve7ilGYGNQU3DU3D_61;
	// System.Boolean Microsoft.Maps.Unity.MapRendererBase::_hideTileLayerComponents
	bool ____hideTileLayerComponents_62;
	// System.EventHandler Microsoft.Maps.Unity.MapRendererBase::#=z6jYcfOg=
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___U23U3Dz6jYcfOgU3D_63;
	// System.EventHandler Microsoft.Maps.Unity.MapRendererBase::#=z6liJx8R_Bl8G
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___U23U3Dz6liJx8R_Bl8G_64;
	// System.EventHandler`1<Microsoft.Maps.Unity.MapSession> Microsoft.Maps.Unity.MapRendererBase::#=zkMk5z3BcGtOV
	EventHandler_1_t5A44536C29E4E6D13AE3EFBF556A08847DFE96DC * ___U23U3DzkMk5z3BcGtOV_65;
	// UnityEngine.MaterialPropertyBlock Microsoft.Maps.Unity.MapRendererBase::#=zQbmqyqiS3L5Sj_vxiHXXeZ8=
	MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___U23U3DzQbmqyqiS3L5Sj_vxiHXXeZ8U3D_66;
	// UnityEngine.MaterialPropertyBlock Microsoft.Maps.Unity.MapRendererBase::#=zmwiOFXn7lCHUEqUzKcBXlP1beBhN
	MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___U23U3DzmwiOFXn7lCHUEqUzKcBXlP1beBhN_67;
	// UnityEngine.RenderTextureFormat Microsoft.Maps.Unity.MapRendererBase::#=zAndzma3OFyUrYCgJAQqWdrk0IRPE
	int32_t ___U23U3DzAndzma3OFyUrYCgJAQqWdrk0IRPE_70;
	// UnityEngine.Camera Microsoft.Maps.Unity.MapRendererBase::#=ze1sqwcaKaOLnVQsmEnmgbsI=
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___U23U3Dze1sqwcaKaOLnVQsmEnmgbsIU3D_71;
	// UnityEngine.GameObject Microsoft.Maps.Unity.MapRendererBase::#=zGW3SHu0LTmVV9doR7S$umdBQ5DxA
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U23U3DzGW3SHu0LTmVV9doR7SU24umdBQ5DxA_72;
	// UnityEngine.Rendering.CommandBuffer Microsoft.Maps.Unity.MapRendererBase::#=znBC6tEc5L7YpnfvWNsJ74e9Le_vA
	CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * ___U23U3DznBC6tEc5L7YpnfvWNsJ74e9Le_vA_73;
	// UnityEngine.RenderTexture Microsoft.Maps.Unity.MapRendererBase::#=zq044YgL5T$$TLOcGtihvFzo=
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___U23U3Dzq044YgL5TU24U24TLOcGtihvFzoU3D_74;
	// System.Object Microsoft.Maps.Unity.MapRendererBase::#=zaj$xoH5w7v$C
	RuntimeObject * ___U23U3DzajU24xoH5w7vU24C_75;
	// #=zslffm3rEpcrDGeF0LnKQktU= Microsoft.Maps.Unity.MapRendererBase::#=zZXj3$30dbmxb
	U23U3Dzslffm3rEpcrDGeF0LnKQktUU3D_tF0EE0F1F72AE6E41707DB83400FD2C4A7245F2A4 * ___U23U3DzZXj3U2430dbmxb_76;
	// #=zxNi94QYCEvGCRwW2p7FSSls0nuoJ Microsoft.Maps.Unity.MapRendererBase::#=zCSl6lpg_zQnK
	U23U3DzxNi94QYCEvGCRwW2p7FSSls0nuoJ_t8F6C966885732C368324D29C66D74D034151A8E2 * ___U23U3DzCSl6lpg_zQnK_77;
	// #=zreTq2aMiQHwa4PeFRZDv3dFu3_uL Microsoft.Maps.Unity.MapRendererBase::#=znYMlaPjR$LEd40z3ZD$WzyI=
	U23U3DzreTq2aMiQHwa4PeFRZDv3dFu3_uL_tD47C36C75E1BD177F00903A320F6D2DBD6AD678C * ___U23U3DznYMlaPjRU24LEd40z3ZDU24WzyIU3D_78;
	// #=zEgwucroqHQ3qyhQOBF$8hhRKBtqV Microsoft.Maps.Unity.MapRendererBase::#=zmgnslVO2h8hT
	U23U3DzEgwucroqHQ3qyhQOBFU248hhRKBtqV_t975EF43C9578F598D9B1A0A4F8EBE23AA2100D30 * ___U23U3DzmgnslVO2h8hT_79;
	// System.Boolean Microsoft.Maps.Unity.MapRendererBase::#=zq90mNM3U$G0SLAq6b5y_DKRn8wAe
	bool ___U23U3Dzq90mNM3UU24G0SLAq6b5y_DKRn8wAe_80;
	// Microsoft.Maps.Unity.MapLabelLayer Microsoft.Maps.Unity.MapRendererBase::#=z77IlqDE4FhBi
	MapLabelLayer_tA1A1A075D41B9606B44B32386433CF9B4725A5A5 * ___U23U3Dz77IlqDE4FhBi_81;
	// Microsoft.Maps.Unity.MapLabelLayer Microsoft.Maps.Unity.MapRendererBase::#=zwwPGp4vA29TV
	MapLabelLayer_tA1A1A075D41B9606B44B32386433CF9B4725A5A5 * ___U23U3DzwwPGp4vA29TV_82;
	// #=zxNi94QYCEvGCRwW2p7FSSls0nuoJ Microsoft.Maps.Unity.MapRendererBase::#=zXi$QkIanoVsG
	U23U3DzxNi94QYCEvGCRwW2p7FSSls0nuoJ_t8F6C966885732C368324D29C66D74D034151A8E2 * ___U23U3DzXiU24QkIanoVsG_83;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::#=zemVScALLWE3T
	int32_t ___U23U3DzemVScALLWE3T_84;
	// Microsoft.Geospatial.MercatorBoundingBox Microsoft.Maps.Unity.MapRendererBase::#=zhXpG8M8_9USWjMVlSRkD_mB7RdAuUMjx8w==
	MercatorBoundingBox_t56EA742B88F9B43443F7771A6A6990886855BC03  ___U23U3DzhXpG8M8_9USWjMVlSRkD_mB7RdAuUMjx8wU3DU3D_85;
	// Microsoft.Geospatial.MercatorBoundingBox Microsoft.Maps.Unity.MapRendererBase::#=znaTvLz6wHTrYa_ncy0MlTLpd7BQP
	MercatorBoundingBox_t56EA742B88F9B43443F7771A6A6990886855BC03  ___U23U3DznaTvLz6wHTrYa_ncy0MlTLpd7BQP_86;
	// Microsoft.Geospatial.MercatorBoundingCircle Microsoft.Maps.Unity.MapRendererBase::#=zeXHsd4LrUynFhW1F918cjuBHFQdmDPhCPraRLAc=
	MercatorBoundingCircle_tE867DD349AF18A40F8DD44C3C4864AD15FF3248C  ___U23U3DzeXHsd4LrUynFhW1F918cjuBHFQdmDPhCPraRLAcU3D_87;
	// System.Collections.Generic.List`1<Microsoft.Geospatial.TileId> Microsoft.Maps.Unity.MapRendererBase::#=zvDxjcsI3cFacBKDQXFrmmjUzOqCY
	List_1_tE8B748F7F3B1B8182E2BEC12CFC14A94D030D267 * ___U23U3DzvDxjcsI3cFacBKDQXFrmmjUzOqCY_88;
	// System.Double Microsoft.Maps.Unity.MapRendererBase::#=zhDTqz$x5f0jFsAHPVA==
	double ___U23U3DzhDTqzU24x5f0jFsAHPVAU3DU3D_89;
	// System.Double Microsoft.Maps.Unity.MapRendererBase::#=zy5KnEEq2ZWAaQDAFdA==
	double ___U23U3Dzy5KnEEq2ZWAaQDAFdAU3DU3D_90;
	// Microsoft.Geospatial.LatLon Microsoft.Maps.Unity.MapRendererBase::#=zvho7ZuVajrwVbdC_oA==
	LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99  ___U23U3Dzvho7ZuVajrwVbdC_oAU3DU3D_91;
	// Microsoft.Geospatial.LatLon Microsoft.Maps.Unity.MapRendererBase::#=zJQ$gE$05cggu$FQ3og==
	LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99  ___U23U3DzJQU24gEU2405cgguU24FQ3ogU3DU3D_92;
	// Microsoft.Geospatial.MercatorCoordinate Microsoft.Maps.Unity.MapRendererBase::#=zWWpX$AUc1vs_WSIS8VpAg8wQBxs2
	MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  ___U23U3DzWWpXU24AUc1vs_WSIS8VpAg8wQBxs2_93;
	// Microsoft.Geospatial.MercatorCoordinate Microsoft.Maps.Unity.MapRendererBase::#=zMguBcD9hUhNK4NeLbitbPtJmA1gOcc2I_MqnhPs=
	MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  ___U23U3DzMguBcD9hUhNK4NeLbitbPtJmA1gOcc2I_MqnhPsU3D_94;
	// System.Double Microsoft.Maps.Unity.MapRendererBase::#=z0SS3O_7_EgadxOLfXWQq__wLfcwe
	double ___U23U3Dz0SS3O_7_EgadxOLfXWQq__wLfcwe_95;
	// System.Double Microsoft.Maps.Unity.MapRendererBase::#=zQ6eEh7xBkeLApFoK_nNUx3yAdEzoKP4v7nvzWjM=
	double ___U23U3DzQ6eEh7xBkeLApFoK_nNUx3yAdEzoKP4v7nvzWjMU3D_96;
	// System.Double Microsoft.Maps.Unity.MapRendererBase::#=zF7zGt23XK$W9_XKLI7O5fmcQ6_XRA32utQ==
	double ___U23U3DzF7zGt23XKU24W9_XKLI7O5fmcQ6_XRA32utQU3DU3D_97;
	// UnityEngine.Vector2 Microsoft.Maps.Unity.MapRendererBase::#=zI20pFJEuZbxFS3brVA==
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U23U3DzI20pFJEuZbxFS3brVAU3DU3D_98;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::#=zrqXq$5WTq17VXFtVAg==
	float ___U23U3DzrqXqU245WTq17VXFtVAgU3DU3D_99;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::#=zIjH1r19CxdnhXhQRRg==
	float ___U23U3DzIjH1r19CxdnhXhQRRgU3DU3D_100;
	// #=zn_NNy$QPYYrSfVMkU1dRxd$kZDxkiyBTBQ== Microsoft.Maps.Unity.MapRendererBase::#=zEiWXvGQUryvxQkqIN_4SDcU=
	U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  ___U23U3DzEiWXvGQUryvxQkqIN_4SDcUU3D_101;
	// #=zx3t$Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClw= Microsoft.Maps.Unity.MapRendererBase::#=zSdCM6PN23WfyeImkTVNB3V8=
	U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B  ___U23U3DzSdCM6PN23WfyeImkTVNB3V8U3D_102;
	// UnityEngine.Vector3 Microsoft.Maps.Unity.MapRendererBase::#=z5WrGpL_yNVbmrOX47xb$MyeUEyOY
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U23U3Dz5WrGpL_yNVbmrOX47xbU24MyeUEyOY_103;
	// System.Double Microsoft.Maps.Unity.MapRendererBase::#=z$pcLGu4Njq_L1RuEaoIj6v0=
	double ___U23U3DzU24pcLGu4Njq_L1RuEaoIj6v0U3D_104;
	// System.Double Microsoft.Maps.Unity.MapRendererBase::#=z297P$HkTtI6$MLGRDkHQZVE=
	double ___U23U3Dz297PU24HkTtI6U24MLGRDkHQZVEU3D_105;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::#=zR9G$gMZJGslLE4yeoA==
	float ___U23U3DzR9GU24gMZJGslLE4yeoAU3DU3D_106;
	// System.Single Microsoft.Maps.Unity.MapRendererBase::#=ztXNDWQsHkpo1z_TEJunTj40=
	float ___U23U3DztXNDWQsHkpo1z_TEJunTj40U3D_107;
	// #=ziUh6YegtXaMaYaPcfnx5SfHo6eWY Microsoft.Maps.Unity.MapRendererBase::#=zZvtfcKEIhrS48URVJd1Ezr8=
	U23U3DziUh6YegtXaMaYaPcfnx5SfHo6eWY_tE0409A728C125BC78CE1210283AB619D7FE1B2D9  ___U23U3DzZvtfcKEIhrS48URVJd1Ezr8U3D_108;
	// System.Collections.Generic.List`1<System.String> Microsoft.Maps.Unity.MapRendererBase::#=zBlrl2rmQWqzFOvoFQg6R4E0=
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U23U3DzBlrl2rmQWqzFOvoFQg6R4E0U3D_109;
	// System.Collections.Generic.List`1<System.String> Microsoft.Maps.Unity.MapRendererBase::#=zYcr5tmTLFR2$tQCtq$EvqeE=
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U23U3DzYcr5tmTLFR2U24tQCtqU24EvqeEU3D_110;
	// System.Boolean Microsoft.Maps.Unity.MapRendererBase::#=z4WgwZkn2I81GxWAvxw==
	bool ___U23U3Dz4WgwZkn2I81GxWAvxwU3DU3D_111;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::#=z9MQ6wF3$JrGjI3S6r1je$MwbmgMJ
	int32_t ___U23U3Dz9MQ6wF3U24JrGjI3S6r1jeU24MwbmgMJ_112;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::#=zPccfKmXdast_gctwgd32VJDbJUwXXhct8A==
	int32_t ___U23U3DzPccfKmXdast_gctwgd32VJDbJUwXXhct8AU3DU3D_113;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::#=zptUnw_Y0toZvB70nCiuMWQY=
	int32_t ___U23U3DzptUnw_Y0toZvB70nCiuMWQYU3D_114;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::#=zWgobBQev2_2N
	int32_t ___U23U3DzWgobBQev2_2N_115;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::#=zWy6Ib_RKRbTJMtiXMQ==
	int32_t ___U23U3DzWy6Ib_RKRbTJMtiXMQU3DU3D_116;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::#=zf5JVrq84WLAZPtRy4g==
	int32_t ___U23U3Dzf5JVrq84WLAZPtRy4gU3DU3D_117;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::#=zlpNrgFMBVTT81__gKA==
	int32_t ___U23U3DzlpNrgFMBVTT81__gKAU3DU3D_118;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::#=zf7fY5k2$RDspRfbuFw==
	int32_t ___U23U3Dzf7fY5k2U24RDspRfbuFwU3DU3D_119;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::#=zJx2CtSyDIS4sDNKd0oHTHIH$U0yT
	int32_t ___U23U3DzJx2CtSyDIS4sDNKd0oHTHIHU24U0yT_120;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::#=zKNn5W5xgVY0qpfkbArR3nhA=
	int32_t ___U23U3DzKNn5W5xgVY0qpfkbArR3nhAU3D_121;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::#=zD9JApHtXzS7k
	int32_t ___U23U3DzD9JApHtXzS7k_122;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::#=zDgmDJDdpeIH43MNIOXE9rOM=
	int32_t ___U23U3DzDgmDJDdpeIH43MNIOXE9rOMU3D_123;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::#=zoZ4V9Salbg54fKz9ZN2$wp8=
	int32_t ___U23U3DzoZ4V9Salbg54fKz9ZN2U24wp8U3D_124;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::#=zRkWhHeZI5CEb
	int32_t ___U23U3DzRkWhHeZI5CEb_125;
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::#=zsVFGVy17LrIO
	int32_t ___U23U3DzsVFGVy17LrIO_126;
	// UnityEngine.Texture2D Microsoft.Maps.Unity.MapRendererBase::#=zz2E5U6SNwniS
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___U23U3Dzz2E5U6SNwniS_127;
	// #=zz2WQAsO2UUEplIiiNuE7oQk= Microsoft.Maps.Unity.MapRendererBase::#=zreEnTofAT$DCpHxeVg==
	U23U3Dzz2WQAsO2UUEplIiiNuE7oQkU3D_t0EE83925EB2ADE849F30C026B3E102D9250CCA6F * ___U23U3DzreEnTofATU24DCpHxeVgU3DU3D_128;
	// System.Collections.Generic.List`1<#=ziuJgwfIQN7Cq3ebdm5MMOxI9zsHK> Microsoft.Maps.Unity.MapRendererBase::#=z0FIVAoiwIYc$8digYnCRKNs=
	List_1_t33758A17F9C5272569ADB02F8230576D4AF1E6D6 * ___U23U3Dz0FIVAoiwIYcU248digYnCRKNsU3D_129;
	// System.Collections.Generic.List`1<#=zXT6PAmOt3SpWxcIyXtV0HZNYSGH4> Microsoft.Maps.Unity.MapRendererBase::#=zoZsBrxdUtCvN6rmQ0Sdd$BW4a3SoLI0iYA==
	List_1_t9784882413F9EEDBD78A33DB4E900C033610AF29 * ___U23U3DzoZsBrxdUtCvN6rmQ0SddU24BW4a3SoLI0iYAU3DU3D_130;
	// System.Collections.Generic.List`1<#=zcn8lNm8$im3OCUjLCJDAQvsHGNji> Microsoft.Maps.Unity.MapRendererBase::#=znIYyFhREtYmg1P5LUsg5WXQ=
	List_1_tA1AC911A62FB80716188A6C2E74EC1CDA333C070 * ___U23U3DznIYyFhREtYmg1P5LUsg5WXQU3D_131;
	// System.Collections.Generic.List`1<#=zCZTNcCQIQyHmdF3yzrf99HvCI3Q8> Microsoft.Maps.Unity.MapRendererBase::#=zjAEKP41cMa26mK1WHmvT_obC$Nb7
	List_1_t3583F7E200CA31239569F517D46EC6A79785FE7D * ___U23U3DzjAEKP41cMa26mK1WHmvT_obCU24Nb7_132;
	// System.Collections.Generic.List`1<Microsoft.Geospatial.TileId> Microsoft.Maps.Unity.MapRendererBase::#=zArvDp8QoaN_$rUHAEQ==
	List_1_tE8B748F7F3B1B8182E2BEC12CFC14A94D030D267 * ___U23U3DzArvDp8QoaN_U24rUHAEQU3DU3D_133;
	// UnityEngine.Vector4[] Microsoft.Maps.Unity.MapRendererBase::#=zqmewxhIrNjasEbniEw==
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ___U23U3DzqmewxhIrNjasEbniEwU3DU3D_134;
	// System.Collections.Generic.Dictionary`2<Microsoft.Geospatial.TileId,#=z0MnGekwpRgFU7$iVW8X5$xonhEZvRaHEMXVHPyh9aO2kc52YdA==> Microsoft.Maps.Unity.MapRendererBase::#=z5M1FRXD$gLHWxwCIYw==
	Dictionary_2_t049AB000068AC79B45EED8BCCAE47B23B0B18B72 * ___U23U3Dz5M1FRXDU24gLHWxwCIYwU3DU3D_135;
	// System.Collections.Generic.Dictionary`2<Microsoft.Geospatial.TileId,#=zG9WBI4m7na9OshAewdvflELclh5D> Microsoft.Maps.Unity.MapRendererBase::#=zCmJRGE8fZ8dIE5$50Iz4TK6D58dC
	Dictionary_2_tD7BA2A0D4A15ABAD76816CADA4A47E4EED50BB77 * ___U23U3DzCmJRGE8fZ8dIE5U2450Iz4TK6D58dC_136;
	// System.Boolean Microsoft.Maps.Unity.MapRendererBase::#=z8xZAEAcKvnXQAkbKePRTyv4=
	bool ___U23U3Dz8xZAEAcKvnXQAkbKePRTyv4U3D_137;

public:
	inline static int32_t get_offset_of_U23U3DzyvWJptMsGvQYOmwzQQU3DU3D_5() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzyvWJptMsGvQYOmwzQQU3DU3D_5)); }
	inline List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B * get_U23U3DzyvWJptMsGvQYOmwzQQU3DU3D_5() const { return ___U23U3DzyvWJptMsGvQYOmwzQQU3DU3D_5; }
	inline List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B ** get_address_of_U23U3DzyvWJptMsGvQYOmwzQQU3DU3D_5() { return &___U23U3DzyvWJptMsGvQYOmwzQQU3DU3D_5; }
	inline void set_U23U3DzyvWJptMsGvQYOmwzQQU3DU3D_5(List_1_tC4F348E4AB2D2B0C505D1B56D6CBE2CFDB59784B * value)
	{
		___U23U3DzyvWJptMsGvQYOmwzQQU3DU3D_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzyvWJptMsGvQYOmwzQQU3DU3D_5), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzgLYW_oB1Bmf8_9() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzgLYW_oB1Bmf8_9)); }
	inline bool get_U23U3DzgLYW_oB1Bmf8_9() const { return ___U23U3DzgLYW_oB1Bmf8_9; }
	inline bool* get_address_of_U23U3DzgLYW_oB1Bmf8_9() { return &___U23U3DzgLYW_oB1Bmf8_9; }
	inline void set_U23U3DzgLYW_oB1Bmf8_9(bool value)
	{
		___U23U3DzgLYW_oB1Bmf8_9 = value;
	}

	inline static int32_t get_offset_of__version_11() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____version_11)); }
	inline int32_t get__version_11() const { return ____version_11; }
	inline int32_t* get_address_of__version_11() { return &____version_11; }
	inline void set__version_11(int32_t value)
	{
		____version_11 = value;
	}

	inline static int32_t get_offset_of__mapSession_12() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____mapSession_12)); }
	inline MapSession_t250FD50789E1C78E85BD85621AFB52FB62A9023E * get__mapSession_12() const { return ____mapSession_12; }
	inline MapSession_t250FD50789E1C78E85BD85621AFB52FB62A9023E ** get_address_of__mapSession_12() { return &____mapSession_12; }
	inline void set__mapSession_12(MapSession_t250FD50789E1C78E85BD85621AFB52FB62A9023E * value)
	{
		____mapSession_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mapSession_12), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3Dzilyv5B6UxfpN_13() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dzilyv5B6UxfpN_13)); }
	inline MapSession_t250FD50789E1C78E85BD85621AFB52FB62A9023E * get_U23U3Dzilyv5B6UxfpN_13() const { return ___U23U3Dzilyv5B6UxfpN_13; }
	inline MapSession_t250FD50789E1C78E85BD85621AFB52FB62A9023E ** get_address_of_U23U3Dzilyv5B6UxfpN_13() { return &___U23U3Dzilyv5B6UxfpN_13; }
	inline void set_U23U3Dzilyv5B6UxfpN_13(MapSession_t250FD50789E1C78E85BD85621AFB52FB62A9023E * value)
	{
		___U23U3Dzilyv5B6UxfpN_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3Dzilyv5B6UxfpN_13), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzIwlFIzVTk1bahUD98wU3DU3D_14() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzIwlFIzVTk1bahUD98wU3DU3D_14)); }
	inline String_t* get_U23U3DzIwlFIzVTk1bahUD98wU3DU3D_14() const { return ___U23U3DzIwlFIzVTk1bahUD98wU3DU3D_14; }
	inline String_t** get_address_of_U23U3DzIwlFIzVTk1bahUD98wU3DU3D_14() { return &___U23U3DzIwlFIzVTk1bahUD98wU3DU3D_14; }
	inline void set_U23U3DzIwlFIzVTk1bahUD98wU3DU3D_14(String_t* value)
	{
		___U23U3DzIwlFIzVTk1bahUD98wU3DU3D_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzIwlFIzVTk1bahUD98wU3DU3D_14), (void*)value);
	}

	inline static int32_t get_offset_of__mapEdgeColor_15() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____mapEdgeColor_15)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__mapEdgeColor_15() const { return ____mapEdgeColor_15; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__mapEdgeColor_15() { return &____mapEdgeColor_15; }
	inline void set__mapEdgeColor_15(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____mapEdgeColor_15 = value;
	}

	inline static int32_t get_offset_of__mapEdgeColorFadeDistance_16() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____mapEdgeColorFadeDistance_16)); }
	inline float get__mapEdgeColorFadeDistance_16() const { return ____mapEdgeColorFadeDistance_16; }
	inline float* get_address_of__mapEdgeColorFadeDistance_16() { return &____mapEdgeColorFadeDistance_16; }
	inline void set__mapEdgeColorFadeDistance_16(float value)
	{
		____mapEdgeColorFadeDistance_16 = value;
	}

	inline static int32_t get_offset_of__detailOffset_17() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____detailOffset_17)); }
	inline float get__detailOffset_17() const { return ____detailOffset_17; }
	inline float* get_address_of__detailOffset_17() { return &____detailOffset_17; }
	inline void set__detailOffset_17(float value)
	{
		____detailOffset_17 = value;
	}

	inline static int32_t get_offset_of__center_18() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____center_18)); }
	inline LatLonWrapper_tAECAE12B0A62DE49E57EC25734C8938758F716FE  get__center_18() const { return ____center_18; }
	inline LatLonWrapper_tAECAE12B0A62DE49E57EC25734C8938758F716FE * get_address_of__center_18() { return &____center_18; }
	inline void set__center_18(LatLonWrapper_tAECAE12B0A62DE49E57EC25734C8938758F716FE  value)
	{
		____center_18 = value;
	}

	inline static int32_t get_offset_of__zoomLevel_19() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____zoomLevel_19)); }
	inline float get__zoomLevel_19() const { return ____zoomLevel_19; }
	inline float* get_address_of__zoomLevel_19() { return &____zoomLevel_19; }
	inline void set__zoomLevel_19(float value)
	{
		____zoomLevel_19 = value;
	}

	inline static int32_t get_offset_of__minimumZoomLevel_20() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____minimumZoomLevel_20)); }
	inline float get__minimumZoomLevel_20() const { return ____minimumZoomLevel_20; }
	inline float* get_address_of__minimumZoomLevel_20() { return &____minimumZoomLevel_20; }
	inline void set__minimumZoomLevel_20(float value)
	{
		____minimumZoomLevel_20 = value;
	}

	inline static int32_t get_offset_of__maximumZoomLevel_21() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____maximumZoomLevel_21)); }
	inline float get__maximumZoomLevel_21() const { return ____maximumZoomLevel_21; }
	inline float* get_address_of__maximumZoomLevel_21() { return &____maximumZoomLevel_21; }
	inline void set__maximumZoomLevel_21(float value)
	{
		____maximumZoomLevel_21 = value;
	}

	inline static int32_t get_offset_of__mapTerrainType_22() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____mapTerrainType_22)); }
	inline int32_t get__mapTerrainType_22() const { return ____mapTerrainType_22; }
	inline int32_t* get_address_of__mapTerrainType_22() { return &____mapTerrainType_22; }
	inline void set__mapTerrainType_22(int32_t value)
	{
		____mapTerrainType_22 = value;
	}

	inline static int32_t get_offset_of__mapShape_23() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____mapShape_23)); }
	inline int32_t get__mapShape_23() const { return ____mapShape_23; }
	inline int32_t* get_address_of__mapShape_23() { return &____mapShape_23; }
	inline void set__mapShape_23(int32_t value)
	{
		____mapShape_23 = value;
	}

	inline static int32_t get_offset_of_U23U3DzglzrU24NfYA8gy8qXUGy7jTpoU3D_24() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzglzrU24NfYA8gy8qXUGy7jTpoU3D_24)); }
	inline double get_U23U3DzglzrU24NfYA8gy8qXUGy7jTpoU3D_24() const { return ___U23U3DzglzrU24NfYA8gy8qXUGy7jTpoU3D_24; }
	inline double* get_address_of_U23U3DzglzrU24NfYA8gy8qXUGy7jTpoU3D_24() { return &___U23U3DzglzrU24NfYA8gy8qXUGy7jTpoU3D_24; }
	inline void set_U23U3DzglzrU24NfYA8gy8qXUGy7jTpoU3D_24(double value)
	{
		___U23U3DzglzrU24NfYA8gy8qXUGy7jTpoU3D_24 = value;
	}

	inline static int32_t get_offset_of__localMapDimension_25() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____localMapDimension_25)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get__localMapDimension_25() const { return ____localMapDimension_25; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of__localMapDimension_25() { return &____localMapDimension_25; }
	inline void set__localMapDimension_25(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		____localMapDimension_25 = value;
	}

	inline static int32_t get_offset_of__localMapRadius_26() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____localMapRadius_26)); }
	inline float get__localMapRadius_26() const { return ____localMapRadius_26; }
	inline float* get_address_of__localMapRadius_26() { return &____localMapRadius_26; }
	inline void set__localMapRadius_26(float value)
	{
		____localMapRadius_26 = value;
	}

	inline static int32_t get_offset_of__localMapBaseHeight_27() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____localMapBaseHeight_27)); }
	inline float get__localMapBaseHeight_27() const { return ____localMapBaseHeight_27; }
	inline float* get_address_of__localMapBaseHeight_27() { return &____localMapBaseHeight_27; }
	inline void set__localMapBaseHeight_27(float value)
	{
		____localMapBaseHeight_27 = value;
	}

	inline static int32_t get_offset_of_U23U3DzqKyyv6nTzCzyiBh8bHEY6NcU3D_28() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzqKyyv6nTzCzyiBh8bHEY6NcU3D_28)); }
	inline float get_U23U3DzqKyyv6nTzCzyiBh8bHEY6NcU3D_28() const { return ___U23U3DzqKyyv6nTzCzyiBh8bHEY6NcU3D_28; }
	inline float* get_address_of_U23U3DzqKyyv6nTzCzyiBh8bHEY6NcU3D_28() { return &___U23U3DzqKyyv6nTzCzyiBh8bHEY6NcU3D_28; }
	inline void set_U23U3DzqKyyv6nTzCzyiBh8bHEY6NcU3D_28(float value)
	{
		___U23U3DzqKyyv6nTzCzyiBh8bHEY6NcU3D_28 = value;
	}

	inline static int32_t get_offset_of_U23U3DzGUWZE_0nMZYj_29() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzGUWZE_0nMZYj_29)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_U23U3DzGUWZE_0nMZYj_29() const { return ___U23U3DzGUWZE_0nMZYj_29; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_U23U3DzGUWZE_0nMZYj_29() { return &___U23U3DzGUWZE_0nMZYj_29; }
	inline void set_U23U3DzGUWZE_0nMZYj_29(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___U23U3DzGUWZE_0nMZYj_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzGUWZE_0nMZYj_29), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3Dzp9lbXTWvMSmA0k_TEQU3DU3D_30() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dzp9lbXTWvMSmA0k_TEQU3DU3D_30)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_U23U3Dzp9lbXTWvMSmA0k_TEQU3DU3D_30() const { return ___U23U3Dzp9lbXTWvMSmA0k_TEQU3DU3D_30; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_U23U3Dzp9lbXTWvMSmA0k_TEQU3DU3D_30() { return &___U23U3Dzp9lbXTWvMSmA0k_TEQU3DU3D_30; }
	inline void set_U23U3Dzp9lbXTWvMSmA0k_TEQU3DU3D_30(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___U23U3Dzp9lbXTWvMSmA0k_TEQU3DU3D_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3Dzp9lbXTWvMSmA0k_TEQU3DU3D_30), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzL3vZk1pnYgEWKBlf_wU3DU3D_31() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzL3vZk1pnYgEWKBlf_wU3DU3D_31)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_U23U3DzL3vZk1pnYgEWKBlf_wU3DU3D_31() const { return ___U23U3DzL3vZk1pnYgEWKBlf_wU3DU3D_31; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_U23U3DzL3vZk1pnYgEWKBlf_wU3DU3D_31() { return &___U23U3DzL3vZk1pnYgEWKBlf_wU3DU3D_31; }
	inline void set_U23U3DzL3vZk1pnYgEWKBlf_wU3DU3D_31(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___U23U3DzL3vZk1pnYgEWKBlf_wU3DU3D_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzL3vZk1pnYgEWKBlf_wU3DU3D_31), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzBLfz2MYFueU24U24l2UvVgU3DU3D_32() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzBLfz2MYFueU24U24l2UvVgU3DU3D_32)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_U23U3DzBLfz2MYFueU24U24l2UvVgU3DU3D_32() const { return ___U23U3DzBLfz2MYFueU24U24l2UvVgU3DU3D_32; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_U23U3DzBLfz2MYFueU24U24l2UvVgU3DU3D_32() { return &___U23U3DzBLfz2MYFueU24U24l2UvVgU3DU3D_32; }
	inline void set_U23U3DzBLfz2MYFueU24U24l2UvVgU3DU3D_32(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___U23U3DzBLfz2MYFueU24U24l2UvVgU3DU3D_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzBLfz2MYFueU24U24l2UvVgU3DU3D_32), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzIIQnC376dsSOzdD8EQU3DU3D_33() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzIIQnC376dsSOzdD8EQU3DU3D_33)); }
	inline GeoBoundingBox_t1E8B92C76B1F3F64468713C93BC6B184D116B756  get_U23U3DzIIQnC376dsSOzdD8EQU3DU3D_33() const { return ___U23U3DzIIQnC376dsSOzdD8EQU3DU3D_33; }
	inline GeoBoundingBox_t1E8B92C76B1F3F64468713C93BC6B184D116B756 * get_address_of_U23U3DzIIQnC376dsSOzdD8EQU3DU3D_33() { return &___U23U3DzIIQnC376dsSOzdD8EQU3DU3D_33; }
	inline void set_U23U3DzIIQnC376dsSOzdD8EQU3DU3D_33(GeoBoundingBox_t1E8B92C76B1F3F64468713C93BC6B184D116B756  value)
	{
		___U23U3DzIIQnC376dsSOzdD8EQU3DU3D_33 = value;
	}

	inline static int32_t get_offset_of_U23U3Dz8POMnU2KO6Ye_34() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dz8POMnU2KO6Ye_34)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_U23U3Dz8POMnU2KO6Ye_34() const { return ___U23U3Dz8POMnU2KO6Ye_34; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_U23U3Dz8POMnU2KO6Ye_34() { return &___U23U3Dz8POMnU2KO6Ye_34; }
	inline void set_U23U3Dz8POMnU2KO6Ye_34(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___U23U3Dz8POMnU2KO6Ye_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3Dz8POMnU2KO6Ye_34), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3Dz9VIXQ0bkqz8rsspyOvsw1RMU3D_35() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dz9VIXQ0bkqz8rsspyOvsw1RMU3D_35)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_U23U3Dz9VIXQ0bkqz8rsspyOvsw1RMU3D_35() const { return ___U23U3Dz9VIXQ0bkqz8rsspyOvsw1RMU3D_35; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_U23U3Dz9VIXQ0bkqz8rsspyOvsw1RMU3D_35() { return &___U23U3Dz9VIXQ0bkqz8rsspyOvsw1RMU3D_35; }
	inline void set_U23U3Dz9VIXQ0bkqz8rsspyOvsw1RMU3D_35(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___U23U3Dz9VIXQ0bkqz8rsspyOvsw1RMU3D_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3Dz9VIXQ0bkqz8rsspyOvsw1RMU3D_35), (void*)value);
	}

	inline static int32_t get_offset_of__elevationScale_36() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____elevationScale_36)); }
	inline float get__elevationScale_36() const { return ____elevationScale_36; }
	inline float* get_address_of__elevationScale_36() { return &____elevationScale_36; }
	inline void set__elevationScale_36(float value)
	{
		____elevationScale_36 = value;
	}

	inline static int32_t get_offset_of__castShadows_37() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____castShadows_37)); }
	inline bool get__castShadows_37() const { return ____castShadows_37; }
	inline bool* get_address_of__castShadows_37() { return &____castShadows_37; }
	inline void set__castShadows_37(bool value)
	{
		____castShadows_37 = value;
	}

	inline static int32_t get_offset_of__receiveShadows_38() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____receiveShadows_38)); }
	inline bool get__receiveShadows_38() const { return ____receiveShadows_38; }
	inline bool* get_address_of__receiveShadows_38() { return &____receiveShadows_38; }
	inline void set__receiveShadows_38(bool value)
	{
		____receiveShadows_38 = value;
	}

	inline static int32_t get_offset_of__enableMrtkMaterialIntegration_39() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____enableMrtkMaterialIntegration_39)); }
	inline bool get__enableMrtkMaterialIntegration_39() const { return ____enableMrtkMaterialIntegration_39; }
	inline bool* get_address_of__enableMrtkMaterialIntegration_39() { return &____enableMrtkMaterialIntegration_39; }
	inline void set__enableMrtkMaterialIntegration_39(bool value)
	{
		____enableMrtkMaterialIntegration_39 = value;
	}

	inline static int32_t get_offset_of__terrainMaterial_40() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____terrainMaterial_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get__terrainMaterial_40() const { return ____terrainMaterial_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of__terrainMaterial_40() { return &____terrainMaterial_40; }
	inline void set__terrainMaterial_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		____terrainMaterial_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____terrainMaterial_40), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzWyvPN7olV3vQtg7OafwQtU24AU3D_41() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzWyvPN7olV3vQtg7OafwQtU24AU3D_41)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U23U3DzWyvPN7olV3vQtg7OafwQtU24AU3D_41() const { return ___U23U3DzWyvPN7olV3vQtg7OafwQtU24AU3D_41; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U23U3DzWyvPN7olV3vQtg7OafwQtU24AU3D_41() { return &___U23U3DzWyvPN7olV3vQtg7OafwQtU24AU3D_41; }
	inline void set_U23U3DzWyvPN7olV3vQtg7OafwQtU24AU3D_41(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U23U3DzWyvPN7olV3vQtg7OafwQtU24AU3D_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzWyvPN7olV3vQtg7OafwQtU24AU3D_41), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzcbOZrgU6I1H2jVMKcvPfgKAU3D_42() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzcbOZrgU6I1H2jVMKcvPfgKAU3D_42)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U23U3DzcbOZrgU6I1H2jVMKcvPfgKAU3D_42() const { return ___U23U3DzcbOZrgU6I1H2jVMKcvPfgKAU3D_42; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U23U3DzcbOZrgU6I1H2jVMKcvPfgKAU3D_42() { return &___U23U3DzcbOZrgU6I1H2jVMKcvPfgKAU3D_42; }
	inline void set_U23U3DzcbOZrgU6I1H2jVMKcvPfgKAU3D_42(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U23U3DzcbOZrgU6I1H2jVMKcvPfgKAU3D_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzcbOZrgU6I1H2jVMKcvPfgKAU3D_42), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzcWzpUwpbuVFGtArGRhP7wTEU3D_43() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzcWzpUwpbuVFGtArGRhP7wTEU3D_43)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U23U3DzcWzpUwpbuVFGtArGRhP7wTEU3D_43() const { return ___U23U3DzcWzpUwpbuVFGtArGRhP7wTEU3D_43; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U23U3DzcWzpUwpbuVFGtArGRhP7wTEU3D_43() { return &___U23U3DzcWzpUwpbuVFGtArGRhP7wTEU3D_43; }
	inline void set_U23U3DzcWzpUwpbuVFGtArGRhP7wTEU3D_43(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U23U3DzcWzpUwpbuVFGtArGRhP7wTEU3D_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzcWzpUwpbuVFGtArGRhP7wTEU3D_43), (void*)value);
	}

	inline static int32_t get_offset_of__isClippingVolumeWallEnabled_44() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____isClippingVolumeWallEnabled_44)); }
	inline bool get__isClippingVolumeWallEnabled_44() const { return ____isClippingVolumeWallEnabled_44; }
	inline bool* get_address_of__isClippingVolumeWallEnabled_44() { return &____isClippingVolumeWallEnabled_44; }
	inline void set__isClippingVolumeWallEnabled_44(bool value)
	{
		____isClippingVolumeWallEnabled_44 = value;
	}

	inline static int32_t get_offset_of__clippingVolumeMaterial_45() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____clippingVolumeMaterial_45)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get__clippingVolumeMaterial_45() const { return ____clippingVolumeMaterial_45; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of__clippingVolumeMaterial_45() { return &____clippingVolumeMaterial_45; }
	inline void set__clippingVolumeMaterial_45(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		____clippingVolumeMaterial_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____clippingVolumeMaterial_45), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzniRhOY9yyJnMhhhG8alvSLxfxueK_46() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzniRhOY9yyJnMhhhG8alvSLxfxueK_46)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U23U3DzniRhOY9yyJnMhhhG8alvSLxfxueK_46() const { return ___U23U3DzniRhOY9yyJnMhhhG8alvSLxfxueK_46; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U23U3DzniRhOY9yyJnMhhhG8alvSLxfxueK_46() { return &___U23U3DzniRhOY9yyJnMhhhG8alvSLxfxueK_46; }
	inline void set_U23U3DzniRhOY9yyJnMhhhG8alvSLxfxueK_46(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U23U3DzniRhOY9yyJnMhhhG8alvSLxfxueK_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzniRhOY9yyJnMhhhG8alvSLxfxueK_46), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzTIqKs1aEHRHU24U24jWntQU3DU3D_47() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzTIqKs1aEHRHU24U24jWntQU3DU3D_47)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U23U3DzTIqKs1aEHRHU24U24jWntQU3DU3D_47() const { return ___U23U3DzTIqKs1aEHRHU24U24jWntQU3DU3D_47; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U23U3DzTIqKs1aEHRHU24U24jWntQU3DU3D_47() { return &___U23U3DzTIqKs1aEHRHU24U24jWntQU3DU3D_47; }
	inline void set_U23U3DzTIqKs1aEHRHU24U24jWntQU3DU3D_47(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U23U3DzTIqKs1aEHRHU24U24jWntQU3DU3D_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzTIqKs1aEHRHU24U24jWntQU3DU3D_47), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzbjjNK00sLTMIej8v8QU3DU3D_48() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzbjjNK00sLTMIej8v8QU3DU3D_48)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U23U3DzbjjNK00sLTMIej8v8QU3DU3D_48() const { return ___U23U3DzbjjNK00sLTMIej8v8QU3DU3D_48; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U23U3DzbjjNK00sLTMIej8v8QU3DU3D_48() { return &___U23U3DzbjjNK00sLTMIej8v8QU3DU3D_48; }
	inline void set_U23U3DzbjjNK00sLTMIej8v8QU3DU3D_48(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U23U3DzbjjNK00sLTMIej8v8QU3DU3D_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzbjjNK00sLTMIej8v8QU3DU3D_48), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzDq5QGH7IlHPX_49() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzDq5QGH7IlHPX_49)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U23U3DzDq5QGH7IlHPX_49() const { return ___U23U3DzDq5QGH7IlHPX_49; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U23U3DzDq5QGH7IlHPX_49() { return &___U23U3DzDq5QGH7IlHPX_49; }
	inline void set_U23U3DzDq5QGH7IlHPX_49(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U23U3DzDq5QGH7IlHPX_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzDq5QGH7IlHPX_49), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzWU24qNkR8ZJBhllEacyKnc00YU3D_50() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzWU24qNkR8ZJBhllEacyKnc00YU3D_50)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U23U3DzWU24qNkR8ZJBhllEacyKnc00YU3D_50() const { return ___U23U3DzWU24qNkR8ZJBhllEacyKnc00YU3D_50; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U23U3DzWU24qNkR8ZJBhllEacyKnc00YU3D_50() { return &___U23U3DzWU24qNkR8ZJBhllEacyKnc00YU3D_50; }
	inline void set_U23U3DzWU24qNkR8ZJBhllEacyKnc00YU3D_50(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U23U3DzWU24qNkR8ZJBhllEacyKnc00YU3D_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzWU24qNkR8ZJBhllEacyKnc00YU3D_50), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzuNJT9UHX8n8U24tWNM59cHigEU3D_51() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzuNJT9UHX8n8U24tWNM59cHigEU3D_51)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U23U3DzuNJT9UHX8n8U24tWNM59cHigEU3D_51() const { return ___U23U3DzuNJT9UHX8n8U24tWNM59cHigEU3D_51; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U23U3DzuNJT9UHX8n8U24tWNM59cHigEU3D_51() { return &___U23U3DzuNJT9UHX8n8U24tWNM59cHigEU3D_51; }
	inline void set_U23U3DzuNJT9UHX8n8U24tWNM59cHigEU3D_51(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U23U3DzuNJT9UHX8n8U24tWNM59cHigEU3D_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzuNJT9UHX8n8U24tWNM59cHigEU3D_51), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzGXUfOHV4rxXf_52() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzGXUfOHV4rxXf_52)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U23U3DzGXUfOHV4rxXf_52() const { return ___U23U3DzGXUfOHV4rxXf_52; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U23U3DzGXUfOHV4rxXf_52() { return &___U23U3DzGXUfOHV4rxXf_52; }
	inline void set_U23U3DzGXUfOHV4rxXf_52(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U23U3DzGXUfOHV4rxXf_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzGXUfOHV4rxXf_52), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3Dz8dqN2EFS8IXkhgqvugU3DU3D_53() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dz8dqN2EFS8IXkhgqvugU3DU3D_53)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U23U3Dz8dqN2EFS8IXkhgqvugU3DU3D_53() const { return ___U23U3Dz8dqN2EFS8IXkhgqvugU3DU3D_53; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U23U3Dz8dqN2EFS8IXkhgqvugU3DU3D_53() { return &___U23U3Dz8dqN2EFS8IXkhgqvugU3DU3D_53; }
	inline void set_U23U3Dz8dqN2EFS8IXkhgqvugU3DU3D_53(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U23U3Dz8dqN2EFS8IXkhgqvugU3DU3D_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3Dz8dqN2EFS8IXkhgqvugU3DU3D_53), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzT9JVwRpOhamZ4lMrKzqNo12gx0JN_54() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzT9JVwRpOhamZ4lMrKzqNo12gx0JN_54)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_U23U3DzT9JVwRpOhamZ4lMrKzqNo12gx0JN_54() const { return ___U23U3DzT9JVwRpOhamZ4lMrKzqNo12gx0JN_54; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_U23U3DzT9JVwRpOhamZ4lMrKzqNo12gx0JN_54() { return &___U23U3DzT9JVwRpOhamZ4lMrKzqNo12gx0JN_54; }
	inline void set_U23U3DzT9JVwRpOhamZ4lMrKzqNo12gx0JN_54(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___U23U3DzT9JVwRpOhamZ4lMrKzqNo12gx0JN_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzT9JVwRpOhamZ4lMrKzqNo12gx0JN_54), (void*)value);
	}

	inline static int32_t get_offset_of__clippingVolumeDistanceTextureResolution_55() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____clippingVolumeDistanceTextureResolution_55)); }
	inline int32_t get__clippingVolumeDistanceTextureResolution_55() const { return ____clippingVolumeDistanceTextureResolution_55; }
	inline int32_t* get_address_of__clippingVolumeDistanceTextureResolution_55() { return &____clippingVolumeDistanceTextureResolution_55; }
	inline void set__clippingVolumeDistanceTextureResolution_55(int32_t value)
	{
		____clippingVolumeDistanceTextureResolution_55 = value;
	}

	inline static int32_t get_offset_of_U23U3Dz1X5BSg16x38NSSZZqh1i0r0U3D_56() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dz1X5BSg16x38NSSZZqh1i0r0U3D_56)); }
	inline int32_t get_U23U3Dz1X5BSg16x38NSSZZqh1i0r0U3D_56() const { return ___U23U3Dz1X5BSg16x38NSSZZqh1i0r0U3D_56; }
	inline int32_t* get_address_of_U23U3Dz1X5BSg16x38NSSZZqh1i0r0U3D_56() { return &___U23U3Dz1X5BSg16x38NSSZZqh1i0r0U3D_56; }
	inline void set_U23U3Dz1X5BSg16x38NSSZZqh1i0r0U3D_56(int32_t value)
	{
		___U23U3Dz1X5BSg16x38NSSZZqh1i0r0U3D_56 = value;
	}

	inline static int32_t get_offset_of__textureTileLayers_57() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____textureTileLayers_57)); }
	inline TextureTileLayerList_tEF7045D4A8E00005129C46B1B064FF11D37689F8 * get__textureTileLayers_57() const { return ____textureTileLayers_57; }
	inline TextureTileLayerList_tEF7045D4A8E00005129C46B1B064FF11D37689F8 ** get_address_of__textureTileLayers_57() { return &____textureTileLayers_57; }
	inline void set__textureTileLayers_57(TextureTileLayerList_tEF7045D4A8E00005129C46B1B064FF11D37689F8 * value)
	{
		____textureTileLayers_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____textureTileLayers_57), (void*)value);
	}

	inline static int32_t get_offset_of__elevationTileLayers_59() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____elevationTileLayers_59)); }
	inline ElevationTileLayerList_t3EEC2F8696DA2541B15517E87F3C2B3EFC6E6B13 * get__elevationTileLayers_59() const { return ____elevationTileLayers_59; }
	inline ElevationTileLayerList_t3EEC2F8696DA2541B15517E87F3C2B3EFC6E6B13 ** get_address_of__elevationTileLayers_59() { return &____elevationTileLayers_59; }
	inline void set__elevationTileLayers_59(ElevationTileLayerList_t3EEC2F8696DA2541B15517E87F3C2B3EFC6E6B13 * value)
	{
		____elevationTileLayers_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____elevationTileLayers_59), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3Dzmti9cAx_YIgb_60() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dzmti9cAx_YIgb_60)); }
	inline U23U3DzSGAjct8w61XD9NwbVtcamQwAVN4i_t63810C266FCF7349E740FEF3D49697C18C74AACC * get_U23U3Dzmti9cAx_YIgb_60() const { return ___U23U3Dzmti9cAx_YIgb_60; }
	inline U23U3DzSGAjct8w61XD9NwbVtcamQwAVN4i_t63810C266FCF7349E740FEF3D49697C18C74AACC ** get_address_of_U23U3Dzmti9cAx_YIgb_60() { return &___U23U3Dzmti9cAx_YIgb_60; }
	inline void set_U23U3Dzmti9cAx_YIgb_60(U23U3DzSGAjct8w61XD9NwbVtcamQwAVN4i_t63810C266FCF7349E740FEF3D49697C18C74AACC * value)
	{
		___U23U3Dzmti9cAx_YIgb_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3Dzmti9cAx_YIgb_60), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzBIBiHxvhve7ilGYGNQU3DU3D_61() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzBIBiHxvhve7ilGYGNQU3DU3D_61)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U23U3DzBIBiHxvhve7ilGYGNQU3DU3D_61() const { return ___U23U3DzBIBiHxvhve7ilGYGNQU3DU3D_61; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U23U3DzBIBiHxvhve7ilGYGNQU3DU3D_61() { return &___U23U3DzBIBiHxvhve7ilGYGNQU3DU3D_61; }
	inline void set_U23U3DzBIBiHxvhve7ilGYGNQU3DU3D_61(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U23U3DzBIBiHxvhve7ilGYGNQU3DU3D_61 = value;
	}

	inline static int32_t get_offset_of__hideTileLayerComponents_62() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ____hideTileLayerComponents_62)); }
	inline bool get__hideTileLayerComponents_62() const { return ____hideTileLayerComponents_62; }
	inline bool* get_address_of__hideTileLayerComponents_62() { return &____hideTileLayerComponents_62; }
	inline void set__hideTileLayerComponents_62(bool value)
	{
		____hideTileLayerComponents_62 = value;
	}

	inline static int32_t get_offset_of_U23U3Dz6jYcfOgU3D_63() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dz6jYcfOgU3D_63)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_U23U3Dz6jYcfOgU3D_63() const { return ___U23U3Dz6jYcfOgU3D_63; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_U23U3Dz6jYcfOgU3D_63() { return &___U23U3Dz6jYcfOgU3D_63; }
	inline void set_U23U3Dz6jYcfOgU3D_63(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___U23U3Dz6jYcfOgU3D_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3Dz6jYcfOgU3D_63), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3Dz6liJx8R_Bl8G_64() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dz6liJx8R_Bl8G_64)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_U23U3Dz6liJx8R_Bl8G_64() const { return ___U23U3Dz6liJx8R_Bl8G_64; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_U23U3Dz6liJx8R_Bl8G_64() { return &___U23U3Dz6liJx8R_Bl8G_64; }
	inline void set_U23U3Dz6liJx8R_Bl8G_64(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___U23U3Dz6liJx8R_Bl8G_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3Dz6liJx8R_Bl8G_64), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzkMk5z3BcGtOV_65() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzkMk5z3BcGtOV_65)); }
	inline EventHandler_1_t5A44536C29E4E6D13AE3EFBF556A08847DFE96DC * get_U23U3DzkMk5z3BcGtOV_65() const { return ___U23U3DzkMk5z3BcGtOV_65; }
	inline EventHandler_1_t5A44536C29E4E6D13AE3EFBF556A08847DFE96DC ** get_address_of_U23U3DzkMk5z3BcGtOV_65() { return &___U23U3DzkMk5z3BcGtOV_65; }
	inline void set_U23U3DzkMk5z3BcGtOV_65(EventHandler_1_t5A44536C29E4E6D13AE3EFBF556A08847DFE96DC * value)
	{
		___U23U3DzkMk5z3BcGtOV_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzkMk5z3BcGtOV_65), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzQbmqyqiS3L5Sj_vxiHXXeZ8U3D_66() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzQbmqyqiS3L5Sj_vxiHXXeZ8U3D_66)); }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * get_U23U3DzQbmqyqiS3L5Sj_vxiHXXeZ8U3D_66() const { return ___U23U3DzQbmqyqiS3L5Sj_vxiHXXeZ8U3D_66; }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 ** get_address_of_U23U3DzQbmqyqiS3L5Sj_vxiHXXeZ8U3D_66() { return &___U23U3DzQbmqyqiS3L5Sj_vxiHXXeZ8U3D_66; }
	inline void set_U23U3DzQbmqyqiS3L5Sj_vxiHXXeZ8U3D_66(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * value)
	{
		___U23U3DzQbmqyqiS3L5Sj_vxiHXXeZ8U3D_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzQbmqyqiS3L5Sj_vxiHXXeZ8U3D_66), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzmwiOFXn7lCHUEqUzKcBXlP1beBhN_67() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzmwiOFXn7lCHUEqUzKcBXlP1beBhN_67)); }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * get_U23U3DzmwiOFXn7lCHUEqUzKcBXlP1beBhN_67() const { return ___U23U3DzmwiOFXn7lCHUEqUzKcBXlP1beBhN_67; }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 ** get_address_of_U23U3DzmwiOFXn7lCHUEqUzKcBXlP1beBhN_67() { return &___U23U3DzmwiOFXn7lCHUEqUzKcBXlP1beBhN_67; }
	inline void set_U23U3DzmwiOFXn7lCHUEqUzKcBXlP1beBhN_67(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * value)
	{
		___U23U3DzmwiOFXn7lCHUEqUzKcBXlP1beBhN_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzmwiOFXn7lCHUEqUzKcBXlP1beBhN_67), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzAndzma3OFyUrYCgJAQqWdrk0IRPE_70() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzAndzma3OFyUrYCgJAQqWdrk0IRPE_70)); }
	inline int32_t get_U23U3DzAndzma3OFyUrYCgJAQqWdrk0IRPE_70() const { return ___U23U3DzAndzma3OFyUrYCgJAQqWdrk0IRPE_70; }
	inline int32_t* get_address_of_U23U3DzAndzma3OFyUrYCgJAQqWdrk0IRPE_70() { return &___U23U3DzAndzma3OFyUrYCgJAQqWdrk0IRPE_70; }
	inline void set_U23U3DzAndzma3OFyUrYCgJAQqWdrk0IRPE_70(int32_t value)
	{
		___U23U3DzAndzma3OFyUrYCgJAQqWdrk0IRPE_70 = value;
	}

	inline static int32_t get_offset_of_U23U3Dze1sqwcaKaOLnVQsmEnmgbsIU3D_71() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dze1sqwcaKaOLnVQsmEnmgbsIU3D_71)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_U23U3Dze1sqwcaKaOLnVQsmEnmgbsIU3D_71() const { return ___U23U3Dze1sqwcaKaOLnVQsmEnmgbsIU3D_71; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_U23U3Dze1sqwcaKaOLnVQsmEnmgbsIU3D_71() { return &___U23U3Dze1sqwcaKaOLnVQsmEnmgbsIU3D_71; }
	inline void set_U23U3Dze1sqwcaKaOLnVQsmEnmgbsIU3D_71(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___U23U3Dze1sqwcaKaOLnVQsmEnmgbsIU3D_71 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3Dze1sqwcaKaOLnVQsmEnmgbsIU3D_71), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzGW3SHu0LTmVV9doR7SU24umdBQ5DxA_72() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzGW3SHu0LTmVV9doR7SU24umdBQ5DxA_72)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U23U3DzGW3SHu0LTmVV9doR7SU24umdBQ5DxA_72() const { return ___U23U3DzGW3SHu0LTmVV9doR7SU24umdBQ5DxA_72; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U23U3DzGW3SHu0LTmVV9doR7SU24umdBQ5DxA_72() { return &___U23U3DzGW3SHu0LTmVV9doR7SU24umdBQ5DxA_72; }
	inline void set_U23U3DzGW3SHu0LTmVV9doR7SU24umdBQ5DxA_72(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U23U3DzGW3SHu0LTmVV9doR7SU24umdBQ5DxA_72 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzGW3SHu0LTmVV9doR7SU24umdBQ5DxA_72), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DznBC6tEc5L7YpnfvWNsJ74e9Le_vA_73() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DznBC6tEc5L7YpnfvWNsJ74e9Le_vA_73)); }
	inline CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * get_U23U3DznBC6tEc5L7YpnfvWNsJ74e9Le_vA_73() const { return ___U23U3DznBC6tEc5L7YpnfvWNsJ74e9Le_vA_73; }
	inline CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 ** get_address_of_U23U3DznBC6tEc5L7YpnfvWNsJ74e9Le_vA_73() { return &___U23U3DznBC6tEc5L7YpnfvWNsJ74e9Le_vA_73; }
	inline void set_U23U3DznBC6tEc5L7YpnfvWNsJ74e9Le_vA_73(CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * value)
	{
		___U23U3DznBC6tEc5L7YpnfvWNsJ74e9Le_vA_73 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DznBC6tEc5L7YpnfvWNsJ74e9Le_vA_73), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3Dzq044YgL5TU24U24TLOcGtihvFzoU3D_74() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dzq044YgL5TU24U24TLOcGtihvFzoU3D_74)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_U23U3Dzq044YgL5TU24U24TLOcGtihvFzoU3D_74() const { return ___U23U3Dzq044YgL5TU24U24TLOcGtihvFzoU3D_74; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_U23U3Dzq044YgL5TU24U24TLOcGtihvFzoU3D_74() { return &___U23U3Dzq044YgL5TU24U24TLOcGtihvFzoU3D_74; }
	inline void set_U23U3Dzq044YgL5TU24U24TLOcGtihvFzoU3D_74(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___U23U3Dzq044YgL5TU24U24TLOcGtihvFzoU3D_74 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3Dzq044YgL5TU24U24TLOcGtihvFzoU3D_74), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzajU24xoH5w7vU24C_75() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzajU24xoH5w7vU24C_75)); }
	inline RuntimeObject * get_U23U3DzajU24xoH5w7vU24C_75() const { return ___U23U3DzajU24xoH5w7vU24C_75; }
	inline RuntimeObject ** get_address_of_U23U3DzajU24xoH5w7vU24C_75() { return &___U23U3DzajU24xoH5w7vU24C_75; }
	inline void set_U23U3DzajU24xoH5w7vU24C_75(RuntimeObject * value)
	{
		___U23U3DzajU24xoH5w7vU24C_75 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzajU24xoH5w7vU24C_75), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzZXj3U2430dbmxb_76() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzZXj3U2430dbmxb_76)); }
	inline U23U3Dzslffm3rEpcrDGeF0LnKQktUU3D_tF0EE0F1F72AE6E41707DB83400FD2C4A7245F2A4 * get_U23U3DzZXj3U2430dbmxb_76() const { return ___U23U3DzZXj3U2430dbmxb_76; }
	inline U23U3Dzslffm3rEpcrDGeF0LnKQktUU3D_tF0EE0F1F72AE6E41707DB83400FD2C4A7245F2A4 ** get_address_of_U23U3DzZXj3U2430dbmxb_76() { return &___U23U3DzZXj3U2430dbmxb_76; }
	inline void set_U23U3DzZXj3U2430dbmxb_76(U23U3Dzslffm3rEpcrDGeF0LnKQktUU3D_tF0EE0F1F72AE6E41707DB83400FD2C4A7245F2A4 * value)
	{
		___U23U3DzZXj3U2430dbmxb_76 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzZXj3U2430dbmxb_76), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzCSl6lpg_zQnK_77() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzCSl6lpg_zQnK_77)); }
	inline U23U3DzxNi94QYCEvGCRwW2p7FSSls0nuoJ_t8F6C966885732C368324D29C66D74D034151A8E2 * get_U23U3DzCSl6lpg_zQnK_77() const { return ___U23U3DzCSl6lpg_zQnK_77; }
	inline U23U3DzxNi94QYCEvGCRwW2p7FSSls0nuoJ_t8F6C966885732C368324D29C66D74D034151A8E2 ** get_address_of_U23U3DzCSl6lpg_zQnK_77() { return &___U23U3DzCSl6lpg_zQnK_77; }
	inline void set_U23U3DzCSl6lpg_zQnK_77(U23U3DzxNi94QYCEvGCRwW2p7FSSls0nuoJ_t8F6C966885732C368324D29C66D74D034151A8E2 * value)
	{
		___U23U3DzCSl6lpg_zQnK_77 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzCSl6lpg_zQnK_77), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DznYMlaPjRU24LEd40z3ZDU24WzyIU3D_78() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DznYMlaPjRU24LEd40z3ZDU24WzyIU3D_78)); }
	inline U23U3DzreTq2aMiQHwa4PeFRZDv3dFu3_uL_tD47C36C75E1BD177F00903A320F6D2DBD6AD678C * get_U23U3DznYMlaPjRU24LEd40z3ZDU24WzyIU3D_78() const { return ___U23U3DznYMlaPjRU24LEd40z3ZDU24WzyIU3D_78; }
	inline U23U3DzreTq2aMiQHwa4PeFRZDv3dFu3_uL_tD47C36C75E1BD177F00903A320F6D2DBD6AD678C ** get_address_of_U23U3DznYMlaPjRU24LEd40z3ZDU24WzyIU3D_78() { return &___U23U3DznYMlaPjRU24LEd40z3ZDU24WzyIU3D_78; }
	inline void set_U23U3DznYMlaPjRU24LEd40z3ZDU24WzyIU3D_78(U23U3DzreTq2aMiQHwa4PeFRZDv3dFu3_uL_tD47C36C75E1BD177F00903A320F6D2DBD6AD678C * value)
	{
		___U23U3DznYMlaPjRU24LEd40z3ZDU24WzyIU3D_78 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DznYMlaPjRU24LEd40z3ZDU24WzyIU3D_78), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzmgnslVO2h8hT_79() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzmgnslVO2h8hT_79)); }
	inline U23U3DzEgwucroqHQ3qyhQOBFU248hhRKBtqV_t975EF43C9578F598D9B1A0A4F8EBE23AA2100D30 * get_U23U3DzmgnslVO2h8hT_79() const { return ___U23U3DzmgnslVO2h8hT_79; }
	inline U23U3DzEgwucroqHQ3qyhQOBFU248hhRKBtqV_t975EF43C9578F598D9B1A0A4F8EBE23AA2100D30 ** get_address_of_U23U3DzmgnslVO2h8hT_79() { return &___U23U3DzmgnslVO2h8hT_79; }
	inline void set_U23U3DzmgnslVO2h8hT_79(U23U3DzEgwucroqHQ3qyhQOBFU248hhRKBtqV_t975EF43C9578F598D9B1A0A4F8EBE23AA2100D30 * value)
	{
		___U23U3DzmgnslVO2h8hT_79 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzmgnslVO2h8hT_79), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3Dzq90mNM3UU24G0SLAq6b5y_DKRn8wAe_80() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dzq90mNM3UU24G0SLAq6b5y_DKRn8wAe_80)); }
	inline bool get_U23U3Dzq90mNM3UU24G0SLAq6b5y_DKRn8wAe_80() const { return ___U23U3Dzq90mNM3UU24G0SLAq6b5y_DKRn8wAe_80; }
	inline bool* get_address_of_U23U3Dzq90mNM3UU24G0SLAq6b5y_DKRn8wAe_80() { return &___U23U3Dzq90mNM3UU24G0SLAq6b5y_DKRn8wAe_80; }
	inline void set_U23U3Dzq90mNM3UU24G0SLAq6b5y_DKRn8wAe_80(bool value)
	{
		___U23U3Dzq90mNM3UU24G0SLAq6b5y_DKRn8wAe_80 = value;
	}

	inline static int32_t get_offset_of_U23U3Dz77IlqDE4FhBi_81() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dz77IlqDE4FhBi_81)); }
	inline MapLabelLayer_tA1A1A075D41B9606B44B32386433CF9B4725A5A5 * get_U23U3Dz77IlqDE4FhBi_81() const { return ___U23U3Dz77IlqDE4FhBi_81; }
	inline MapLabelLayer_tA1A1A075D41B9606B44B32386433CF9B4725A5A5 ** get_address_of_U23U3Dz77IlqDE4FhBi_81() { return &___U23U3Dz77IlqDE4FhBi_81; }
	inline void set_U23U3Dz77IlqDE4FhBi_81(MapLabelLayer_tA1A1A075D41B9606B44B32386433CF9B4725A5A5 * value)
	{
		___U23U3Dz77IlqDE4FhBi_81 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3Dz77IlqDE4FhBi_81), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzwwPGp4vA29TV_82() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzwwPGp4vA29TV_82)); }
	inline MapLabelLayer_tA1A1A075D41B9606B44B32386433CF9B4725A5A5 * get_U23U3DzwwPGp4vA29TV_82() const { return ___U23U3DzwwPGp4vA29TV_82; }
	inline MapLabelLayer_tA1A1A075D41B9606B44B32386433CF9B4725A5A5 ** get_address_of_U23U3DzwwPGp4vA29TV_82() { return &___U23U3DzwwPGp4vA29TV_82; }
	inline void set_U23U3DzwwPGp4vA29TV_82(MapLabelLayer_tA1A1A075D41B9606B44B32386433CF9B4725A5A5 * value)
	{
		___U23U3DzwwPGp4vA29TV_82 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzwwPGp4vA29TV_82), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzXiU24QkIanoVsG_83() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzXiU24QkIanoVsG_83)); }
	inline U23U3DzxNi94QYCEvGCRwW2p7FSSls0nuoJ_t8F6C966885732C368324D29C66D74D034151A8E2 * get_U23U3DzXiU24QkIanoVsG_83() const { return ___U23U3DzXiU24QkIanoVsG_83; }
	inline U23U3DzxNi94QYCEvGCRwW2p7FSSls0nuoJ_t8F6C966885732C368324D29C66D74D034151A8E2 ** get_address_of_U23U3DzXiU24QkIanoVsG_83() { return &___U23U3DzXiU24QkIanoVsG_83; }
	inline void set_U23U3DzXiU24QkIanoVsG_83(U23U3DzxNi94QYCEvGCRwW2p7FSSls0nuoJ_t8F6C966885732C368324D29C66D74D034151A8E2 * value)
	{
		___U23U3DzXiU24QkIanoVsG_83 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzXiU24QkIanoVsG_83), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzemVScALLWE3T_84() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzemVScALLWE3T_84)); }
	inline int32_t get_U23U3DzemVScALLWE3T_84() const { return ___U23U3DzemVScALLWE3T_84; }
	inline int32_t* get_address_of_U23U3DzemVScALLWE3T_84() { return &___U23U3DzemVScALLWE3T_84; }
	inline void set_U23U3DzemVScALLWE3T_84(int32_t value)
	{
		___U23U3DzemVScALLWE3T_84 = value;
	}

	inline static int32_t get_offset_of_U23U3DzhXpG8M8_9USWjMVlSRkD_mB7RdAuUMjx8wU3DU3D_85() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzhXpG8M8_9USWjMVlSRkD_mB7RdAuUMjx8wU3DU3D_85)); }
	inline MercatorBoundingBox_t56EA742B88F9B43443F7771A6A6990886855BC03  get_U23U3DzhXpG8M8_9USWjMVlSRkD_mB7RdAuUMjx8wU3DU3D_85() const { return ___U23U3DzhXpG8M8_9USWjMVlSRkD_mB7RdAuUMjx8wU3DU3D_85; }
	inline MercatorBoundingBox_t56EA742B88F9B43443F7771A6A6990886855BC03 * get_address_of_U23U3DzhXpG8M8_9USWjMVlSRkD_mB7RdAuUMjx8wU3DU3D_85() { return &___U23U3DzhXpG8M8_9USWjMVlSRkD_mB7RdAuUMjx8wU3DU3D_85; }
	inline void set_U23U3DzhXpG8M8_9USWjMVlSRkD_mB7RdAuUMjx8wU3DU3D_85(MercatorBoundingBox_t56EA742B88F9B43443F7771A6A6990886855BC03  value)
	{
		___U23U3DzhXpG8M8_9USWjMVlSRkD_mB7RdAuUMjx8wU3DU3D_85 = value;
	}

	inline static int32_t get_offset_of_U23U3DznaTvLz6wHTrYa_ncy0MlTLpd7BQP_86() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DznaTvLz6wHTrYa_ncy0MlTLpd7BQP_86)); }
	inline MercatorBoundingBox_t56EA742B88F9B43443F7771A6A6990886855BC03  get_U23U3DznaTvLz6wHTrYa_ncy0MlTLpd7BQP_86() const { return ___U23U3DznaTvLz6wHTrYa_ncy0MlTLpd7BQP_86; }
	inline MercatorBoundingBox_t56EA742B88F9B43443F7771A6A6990886855BC03 * get_address_of_U23U3DznaTvLz6wHTrYa_ncy0MlTLpd7BQP_86() { return &___U23U3DznaTvLz6wHTrYa_ncy0MlTLpd7BQP_86; }
	inline void set_U23U3DznaTvLz6wHTrYa_ncy0MlTLpd7BQP_86(MercatorBoundingBox_t56EA742B88F9B43443F7771A6A6990886855BC03  value)
	{
		___U23U3DznaTvLz6wHTrYa_ncy0MlTLpd7BQP_86 = value;
	}

	inline static int32_t get_offset_of_U23U3DzeXHsd4LrUynFhW1F918cjuBHFQdmDPhCPraRLAcU3D_87() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzeXHsd4LrUynFhW1F918cjuBHFQdmDPhCPraRLAcU3D_87)); }
	inline MercatorBoundingCircle_tE867DD349AF18A40F8DD44C3C4864AD15FF3248C  get_U23U3DzeXHsd4LrUynFhW1F918cjuBHFQdmDPhCPraRLAcU3D_87() const { return ___U23U3DzeXHsd4LrUynFhW1F918cjuBHFQdmDPhCPraRLAcU3D_87; }
	inline MercatorBoundingCircle_tE867DD349AF18A40F8DD44C3C4864AD15FF3248C * get_address_of_U23U3DzeXHsd4LrUynFhW1F918cjuBHFQdmDPhCPraRLAcU3D_87() { return &___U23U3DzeXHsd4LrUynFhW1F918cjuBHFQdmDPhCPraRLAcU3D_87; }
	inline void set_U23U3DzeXHsd4LrUynFhW1F918cjuBHFQdmDPhCPraRLAcU3D_87(MercatorBoundingCircle_tE867DD349AF18A40F8DD44C3C4864AD15FF3248C  value)
	{
		___U23U3DzeXHsd4LrUynFhW1F918cjuBHFQdmDPhCPraRLAcU3D_87 = value;
	}

	inline static int32_t get_offset_of_U23U3DzvDxjcsI3cFacBKDQXFrmmjUzOqCY_88() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzvDxjcsI3cFacBKDQXFrmmjUzOqCY_88)); }
	inline List_1_tE8B748F7F3B1B8182E2BEC12CFC14A94D030D267 * get_U23U3DzvDxjcsI3cFacBKDQXFrmmjUzOqCY_88() const { return ___U23U3DzvDxjcsI3cFacBKDQXFrmmjUzOqCY_88; }
	inline List_1_tE8B748F7F3B1B8182E2BEC12CFC14A94D030D267 ** get_address_of_U23U3DzvDxjcsI3cFacBKDQXFrmmjUzOqCY_88() { return &___U23U3DzvDxjcsI3cFacBKDQXFrmmjUzOqCY_88; }
	inline void set_U23U3DzvDxjcsI3cFacBKDQXFrmmjUzOqCY_88(List_1_tE8B748F7F3B1B8182E2BEC12CFC14A94D030D267 * value)
	{
		___U23U3DzvDxjcsI3cFacBKDQXFrmmjUzOqCY_88 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzvDxjcsI3cFacBKDQXFrmmjUzOqCY_88), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzhDTqzU24x5f0jFsAHPVAU3DU3D_89() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzhDTqzU24x5f0jFsAHPVAU3DU3D_89)); }
	inline double get_U23U3DzhDTqzU24x5f0jFsAHPVAU3DU3D_89() const { return ___U23U3DzhDTqzU24x5f0jFsAHPVAU3DU3D_89; }
	inline double* get_address_of_U23U3DzhDTqzU24x5f0jFsAHPVAU3DU3D_89() { return &___U23U3DzhDTqzU24x5f0jFsAHPVAU3DU3D_89; }
	inline void set_U23U3DzhDTqzU24x5f0jFsAHPVAU3DU3D_89(double value)
	{
		___U23U3DzhDTqzU24x5f0jFsAHPVAU3DU3D_89 = value;
	}

	inline static int32_t get_offset_of_U23U3Dzy5KnEEq2ZWAaQDAFdAU3DU3D_90() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dzy5KnEEq2ZWAaQDAFdAU3DU3D_90)); }
	inline double get_U23U3Dzy5KnEEq2ZWAaQDAFdAU3DU3D_90() const { return ___U23U3Dzy5KnEEq2ZWAaQDAFdAU3DU3D_90; }
	inline double* get_address_of_U23U3Dzy5KnEEq2ZWAaQDAFdAU3DU3D_90() { return &___U23U3Dzy5KnEEq2ZWAaQDAFdAU3DU3D_90; }
	inline void set_U23U3Dzy5KnEEq2ZWAaQDAFdAU3DU3D_90(double value)
	{
		___U23U3Dzy5KnEEq2ZWAaQDAFdAU3DU3D_90 = value;
	}

	inline static int32_t get_offset_of_U23U3Dzvho7ZuVajrwVbdC_oAU3DU3D_91() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dzvho7ZuVajrwVbdC_oAU3DU3D_91)); }
	inline LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99  get_U23U3Dzvho7ZuVajrwVbdC_oAU3DU3D_91() const { return ___U23U3Dzvho7ZuVajrwVbdC_oAU3DU3D_91; }
	inline LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99 * get_address_of_U23U3Dzvho7ZuVajrwVbdC_oAU3DU3D_91() { return &___U23U3Dzvho7ZuVajrwVbdC_oAU3DU3D_91; }
	inline void set_U23U3Dzvho7ZuVajrwVbdC_oAU3DU3D_91(LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99  value)
	{
		___U23U3Dzvho7ZuVajrwVbdC_oAU3DU3D_91 = value;
	}

	inline static int32_t get_offset_of_U23U3DzJQU24gEU2405cgguU24FQ3ogU3DU3D_92() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzJQU24gEU2405cgguU24FQ3ogU3DU3D_92)); }
	inline LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99  get_U23U3DzJQU24gEU2405cgguU24FQ3ogU3DU3D_92() const { return ___U23U3DzJQU24gEU2405cgguU24FQ3ogU3DU3D_92; }
	inline LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99 * get_address_of_U23U3DzJQU24gEU2405cgguU24FQ3ogU3DU3D_92() { return &___U23U3DzJQU24gEU2405cgguU24FQ3ogU3DU3D_92; }
	inline void set_U23U3DzJQU24gEU2405cgguU24FQ3ogU3DU3D_92(LatLon_tE9A70899458342651ED455A45F69AF4A8B9C2F99  value)
	{
		___U23U3DzJQU24gEU2405cgguU24FQ3ogU3DU3D_92 = value;
	}

	inline static int32_t get_offset_of_U23U3DzWWpXU24AUc1vs_WSIS8VpAg8wQBxs2_93() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzWWpXU24AUc1vs_WSIS8VpAg8wQBxs2_93)); }
	inline MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  get_U23U3DzWWpXU24AUc1vs_WSIS8VpAg8wQBxs2_93() const { return ___U23U3DzWWpXU24AUc1vs_WSIS8VpAg8wQBxs2_93; }
	inline MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36 * get_address_of_U23U3DzWWpXU24AUc1vs_WSIS8VpAg8wQBxs2_93() { return &___U23U3DzWWpXU24AUc1vs_WSIS8VpAg8wQBxs2_93; }
	inline void set_U23U3DzWWpXU24AUc1vs_WSIS8VpAg8wQBxs2_93(MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  value)
	{
		___U23U3DzWWpXU24AUc1vs_WSIS8VpAg8wQBxs2_93 = value;
	}

	inline static int32_t get_offset_of_U23U3DzMguBcD9hUhNK4NeLbitbPtJmA1gOcc2I_MqnhPsU3D_94() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzMguBcD9hUhNK4NeLbitbPtJmA1gOcc2I_MqnhPsU3D_94)); }
	inline MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  get_U23U3DzMguBcD9hUhNK4NeLbitbPtJmA1gOcc2I_MqnhPsU3D_94() const { return ___U23U3DzMguBcD9hUhNK4NeLbitbPtJmA1gOcc2I_MqnhPsU3D_94; }
	inline MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36 * get_address_of_U23U3DzMguBcD9hUhNK4NeLbitbPtJmA1gOcc2I_MqnhPsU3D_94() { return &___U23U3DzMguBcD9hUhNK4NeLbitbPtJmA1gOcc2I_MqnhPsU3D_94; }
	inline void set_U23U3DzMguBcD9hUhNK4NeLbitbPtJmA1gOcc2I_MqnhPsU3D_94(MercatorCoordinate_tC4AF02D8AAAD939A6620432E49BBCEB559306D36  value)
	{
		___U23U3DzMguBcD9hUhNK4NeLbitbPtJmA1gOcc2I_MqnhPsU3D_94 = value;
	}

	inline static int32_t get_offset_of_U23U3Dz0SS3O_7_EgadxOLfXWQq__wLfcwe_95() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dz0SS3O_7_EgadxOLfXWQq__wLfcwe_95)); }
	inline double get_U23U3Dz0SS3O_7_EgadxOLfXWQq__wLfcwe_95() const { return ___U23U3Dz0SS3O_7_EgadxOLfXWQq__wLfcwe_95; }
	inline double* get_address_of_U23U3Dz0SS3O_7_EgadxOLfXWQq__wLfcwe_95() { return &___U23U3Dz0SS3O_7_EgadxOLfXWQq__wLfcwe_95; }
	inline void set_U23U3Dz0SS3O_7_EgadxOLfXWQq__wLfcwe_95(double value)
	{
		___U23U3Dz0SS3O_7_EgadxOLfXWQq__wLfcwe_95 = value;
	}

	inline static int32_t get_offset_of_U23U3DzQ6eEh7xBkeLApFoK_nNUx3yAdEzoKP4v7nvzWjMU3D_96() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzQ6eEh7xBkeLApFoK_nNUx3yAdEzoKP4v7nvzWjMU3D_96)); }
	inline double get_U23U3DzQ6eEh7xBkeLApFoK_nNUx3yAdEzoKP4v7nvzWjMU3D_96() const { return ___U23U3DzQ6eEh7xBkeLApFoK_nNUx3yAdEzoKP4v7nvzWjMU3D_96; }
	inline double* get_address_of_U23U3DzQ6eEh7xBkeLApFoK_nNUx3yAdEzoKP4v7nvzWjMU3D_96() { return &___U23U3DzQ6eEh7xBkeLApFoK_nNUx3yAdEzoKP4v7nvzWjMU3D_96; }
	inline void set_U23U3DzQ6eEh7xBkeLApFoK_nNUx3yAdEzoKP4v7nvzWjMU3D_96(double value)
	{
		___U23U3DzQ6eEh7xBkeLApFoK_nNUx3yAdEzoKP4v7nvzWjMU3D_96 = value;
	}

	inline static int32_t get_offset_of_U23U3DzF7zGt23XKU24W9_XKLI7O5fmcQ6_XRA32utQU3DU3D_97() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzF7zGt23XKU24W9_XKLI7O5fmcQ6_XRA32utQU3DU3D_97)); }
	inline double get_U23U3DzF7zGt23XKU24W9_XKLI7O5fmcQ6_XRA32utQU3DU3D_97() const { return ___U23U3DzF7zGt23XKU24W9_XKLI7O5fmcQ6_XRA32utQU3DU3D_97; }
	inline double* get_address_of_U23U3DzF7zGt23XKU24W9_XKLI7O5fmcQ6_XRA32utQU3DU3D_97() { return &___U23U3DzF7zGt23XKU24W9_XKLI7O5fmcQ6_XRA32utQU3DU3D_97; }
	inline void set_U23U3DzF7zGt23XKU24W9_XKLI7O5fmcQ6_XRA32utQU3DU3D_97(double value)
	{
		___U23U3DzF7zGt23XKU24W9_XKLI7O5fmcQ6_XRA32utQU3DU3D_97 = value;
	}

	inline static int32_t get_offset_of_U23U3DzI20pFJEuZbxFS3brVAU3DU3D_98() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzI20pFJEuZbxFS3brVAU3DU3D_98)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U23U3DzI20pFJEuZbxFS3brVAU3DU3D_98() const { return ___U23U3DzI20pFJEuZbxFS3brVAU3DU3D_98; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U23U3DzI20pFJEuZbxFS3brVAU3DU3D_98() { return &___U23U3DzI20pFJEuZbxFS3brVAU3DU3D_98; }
	inline void set_U23U3DzI20pFJEuZbxFS3brVAU3DU3D_98(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U23U3DzI20pFJEuZbxFS3brVAU3DU3D_98 = value;
	}

	inline static int32_t get_offset_of_U23U3DzrqXqU245WTq17VXFtVAgU3DU3D_99() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzrqXqU245WTq17VXFtVAgU3DU3D_99)); }
	inline float get_U23U3DzrqXqU245WTq17VXFtVAgU3DU3D_99() const { return ___U23U3DzrqXqU245WTq17VXFtVAgU3DU3D_99; }
	inline float* get_address_of_U23U3DzrqXqU245WTq17VXFtVAgU3DU3D_99() { return &___U23U3DzrqXqU245WTq17VXFtVAgU3DU3D_99; }
	inline void set_U23U3DzrqXqU245WTq17VXFtVAgU3DU3D_99(float value)
	{
		___U23U3DzrqXqU245WTq17VXFtVAgU3DU3D_99 = value;
	}

	inline static int32_t get_offset_of_U23U3DzIjH1r19CxdnhXhQRRgU3DU3D_100() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzIjH1r19CxdnhXhQRRgU3DU3D_100)); }
	inline float get_U23U3DzIjH1r19CxdnhXhQRRgU3DU3D_100() const { return ___U23U3DzIjH1r19CxdnhXhQRRgU3DU3D_100; }
	inline float* get_address_of_U23U3DzIjH1r19CxdnhXhQRRgU3DU3D_100() { return &___U23U3DzIjH1r19CxdnhXhQRRgU3DU3D_100; }
	inline void set_U23U3DzIjH1r19CxdnhXhQRRgU3DU3D_100(float value)
	{
		___U23U3DzIjH1r19CxdnhXhQRRgU3DU3D_100 = value;
	}

	inline static int32_t get_offset_of_U23U3DzEiWXvGQUryvxQkqIN_4SDcUU3D_101() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzEiWXvGQUryvxQkqIN_4SDcUU3D_101)); }
	inline U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  get_U23U3DzEiWXvGQUryvxQkqIN_4SDcUU3D_101() const { return ___U23U3DzEiWXvGQUryvxQkqIN_4SDcUU3D_101; }
	inline U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D * get_address_of_U23U3DzEiWXvGQUryvxQkqIN_4SDcUU3D_101() { return &___U23U3DzEiWXvGQUryvxQkqIN_4SDcUU3D_101; }
	inline void set_U23U3DzEiWXvGQUryvxQkqIN_4SDcUU3D_101(U23U3Dzn_NNyU24QPYYrSfVMkU1dRxdU24kZDxkiyBTBQU3DU3D_t84D3DF8085728944064DA906E0D7B37F004EB48D  value)
	{
		___U23U3DzEiWXvGQUryvxQkqIN_4SDcUU3D_101 = value;
	}

	inline static int32_t get_offset_of_U23U3DzSdCM6PN23WfyeImkTVNB3V8U3D_102() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzSdCM6PN23WfyeImkTVNB3V8U3D_102)); }
	inline U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B  get_U23U3DzSdCM6PN23WfyeImkTVNB3V8U3D_102() const { return ___U23U3DzSdCM6PN23WfyeImkTVNB3V8U3D_102; }
	inline U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B * get_address_of_U23U3DzSdCM6PN23WfyeImkTVNB3V8U3D_102() { return &___U23U3DzSdCM6PN23WfyeImkTVNB3V8U3D_102; }
	inline void set_U23U3DzSdCM6PN23WfyeImkTVNB3V8U3D_102(U23U3Dzx3tU24Ywc43kbsOaG0AXioDCrhuipBg7CuIHomClwU3D_tB37F502EA52B49D7EBED2188F948F4C45572E20B  value)
	{
		___U23U3DzSdCM6PN23WfyeImkTVNB3V8U3D_102 = value;
	}

	inline static int32_t get_offset_of_U23U3Dz5WrGpL_yNVbmrOX47xbU24MyeUEyOY_103() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dz5WrGpL_yNVbmrOX47xbU24MyeUEyOY_103)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U23U3Dz5WrGpL_yNVbmrOX47xbU24MyeUEyOY_103() const { return ___U23U3Dz5WrGpL_yNVbmrOX47xbU24MyeUEyOY_103; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U23U3Dz5WrGpL_yNVbmrOX47xbU24MyeUEyOY_103() { return &___U23U3Dz5WrGpL_yNVbmrOX47xbU24MyeUEyOY_103; }
	inline void set_U23U3Dz5WrGpL_yNVbmrOX47xbU24MyeUEyOY_103(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U23U3Dz5WrGpL_yNVbmrOX47xbU24MyeUEyOY_103 = value;
	}

	inline static int32_t get_offset_of_U23U3DzU24pcLGu4Njq_L1RuEaoIj6v0U3D_104() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzU24pcLGu4Njq_L1RuEaoIj6v0U3D_104)); }
	inline double get_U23U3DzU24pcLGu4Njq_L1RuEaoIj6v0U3D_104() const { return ___U23U3DzU24pcLGu4Njq_L1RuEaoIj6v0U3D_104; }
	inline double* get_address_of_U23U3DzU24pcLGu4Njq_L1RuEaoIj6v0U3D_104() { return &___U23U3DzU24pcLGu4Njq_L1RuEaoIj6v0U3D_104; }
	inline void set_U23U3DzU24pcLGu4Njq_L1RuEaoIj6v0U3D_104(double value)
	{
		___U23U3DzU24pcLGu4Njq_L1RuEaoIj6v0U3D_104 = value;
	}

	inline static int32_t get_offset_of_U23U3Dz297PU24HkTtI6U24MLGRDkHQZVEU3D_105() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dz297PU24HkTtI6U24MLGRDkHQZVEU3D_105)); }
	inline double get_U23U3Dz297PU24HkTtI6U24MLGRDkHQZVEU3D_105() const { return ___U23U3Dz297PU24HkTtI6U24MLGRDkHQZVEU3D_105; }
	inline double* get_address_of_U23U3Dz297PU24HkTtI6U24MLGRDkHQZVEU3D_105() { return &___U23U3Dz297PU24HkTtI6U24MLGRDkHQZVEU3D_105; }
	inline void set_U23U3Dz297PU24HkTtI6U24MLGRDkHQZVEU3D_105(double value)
	{
		___U23U3Dz297PU24HkTtI6U24MLGRDkHQZVEU3D_105 = value;
	}

	inline static int32_t get_offset_of_U23U3DzR9GU24gMZJGslLE4yeoAU3DU3D_106() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzR9GU24gMZJGslLE4yeoAU3DU3D_106)); }
	inline float get_U23U3DzR9GU24gMZJGslLE4yeoAU3DU3D_106() const { return ___U23U3DzR9GU24gMZJGslLE4yeoAU3DU3D_106; }
	inline float* get_address_of_U23U3DzR9GU24gMZJGslLE4yeoAU3DU3D_106() { return &___U23U3DzR9GU24gMZJGslLE4yeoAU3DU3D_106; }
	inline void set_U23U3DzR9GU24gMZJGslLE4yeoAU3DU3D_106(float value)
	{
		___U23U3DzR9GU24gMZJGslLE4yeoAU3DU3D_106 = value;
	}

	inline static int32_t get_offset_of_U23U3DztXNDWQsHkpo1z_TEJunTj40U3D_107() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DztXNDWQsHkpo1z_TEJunTj40U3D_107)); }
	inline float get_U23U3DztXNDWQsHkpo1z_TEJunTj40U3D_107() const { return ___U23U3DztXNDWQsHkpo1z_TEJunTj40U3D_107; }
	inline float* get_address_of_U23U3DztXNDWQsHkpo1z_TEJunTj40U3D_107() { return &___U23U3DztXNDWQsHkpo1z_TEJunTj40U3D_107; }
	inline void set_U23U3DztXNDWQsHkpo1z_TEJunTj40U3D_107(float value)
	{
		___U23U3DztXNDWQsHkpo1z_TEJunTj40U3D_107 = value;
	}

	inline static int32_t get_offset_of_U23U3DzZvtfcKEIhrS48URVJd1Ezr8U3D_108() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzZvtfcKEIhrS48URVJd1Ezr8U3D_108)); }
	inline U23U3DziUh6YegtXaMaYaPcfnx5SfHo6eWY_tE0409A728C125BC78CE1210283AB619D7FE1B2D9  get_U23U3DzZvtfcKEIhrS48URVJd1Ezr8U3D_108() const { return ___U23U3DzZvtfcKEIhrS48URVJd1Ezr8U3D_108; }
	inline U23U3DziUh6YegtXaMaYaPcfnx5SfHo6eWY_tE0409A728C125BC78CE1210283AB619D7FE1B2D9 * get_address_of_U23U3DzZvtfcKEIhrS48URVJd1Ezr8U3D_108() { return &___U23U3DzZvtfcKEIhrS48URVJd1Ezr8U3D_108; }
	inline void set_U23U3DzZvtfcKEIhrS48URVJd1Ezr8U3D_108(U23U3DziUh6YegtXaMaYaPcfnx5SfHo6eWY_tE0409A728C125BC78CE1210283AB619D7FE1B2D9  value)
	{
		___U23U3DzZvtfcKEIhrS48URVJd1Ezr8U3D_108 = value;
	}

	inline static int32_t get_offset_of_U23U3DzBlrl2rmQWqzFOvoFQg6R4E0U3D_109() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzBlrl2rmQWqzFOvoFQg6R4E0U3D_109)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U23U3DzBlrl2rmQWqzFOvoFQg6R4E0U3D_109() const { return ___U23U3DzBlrl2rmQWqzFOvoFQg6R4E0U3D_109; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U23U3DzBlrl2rmQWqzFOvoFQg6R4E0U3D_109() { return &___U23U3DzBlrl2rmQWqzFOvoFQg6R4E0U3D_109; }
	inline void set_U23U3DzBlrl2rmQWqzFOvoFQg6R4E0U3D_109(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U23U3DzBlrl2rmQWqzFOvoFQg6R4E0U3D_109 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzBlrl2rmQWqzFOvoFQg6R4E0U3D_109), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzYcr5tmTLFR2U24tQCtqU24EvqeEU3D_110() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzYcr5tmTLFR2U24tQCtqU24EvqeEU3D_110)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U23U3DzYcr5tmTLFR2U24tQCtqU24EvqeEU3D_110() const { return ___U23U3DzYcr5tmTLFR2U24tQCtqU24EvqeEU3D_110; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U23U3DzYcr5tmTLFR2U24tQCtqU24EvqeEU3D_110() { return &___U23U3DzYcr5tmTLFR2U24tQCtqU24EvqeEU3D_110; }
	inline void set_U23U3DzYcr5tmTLFR2U24tQCtqU24EvqeEU3D_110(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U23U3DzYcr5tmTLFR2U24tQCtqU24EvqeEU3D_110 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzYcr5tmTLFR2U24tQCtqU24EvqeEU3D_110), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3Dz4WgwZkn2I81GxWAvxwU3DU3D_111() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dz4WgwZkn2I81GxWAvxwU3DU3D_111)); }
	inline bool get_U23U3Dz4WgwZkn2I81GxWAvxwU3DU3D_111() const { return ___U23U3Dz4WgwZkn2I81GxWAvxwU3DU3D_111; }
	inline bool* get_address_of_U23U3Dz4WgwZkn2I81GxWAvxwU3DU3D_111() { return &___U23U3Dz4WgwZkn2I81GxWAvxwU3DU3D_111; }
	inline void set_U23U3Dz4WgwZkn2I81GxWAvxwU3DU3D_111(bool value)
	{
		___U23U3Dz4WgwZkn2I81GxWAvxwU3DU3D_111 = value;
	}

	inline static int32_t get_offset_of_U23U3Dz9MQ6wF3U24JrGjI3S6r1jeU24MwbmgMJ_112() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dz9MQ6wF3U24JrGjI3S6r1jeU24MwbmgMJ_112)); }
	inline int32_t get_U23U3Dz9MQ6wF3U24JrGjI3S6r1jeU24MwbmgMJ_112() const { return ___U23U3Dz9MQ6wF3U24JrGjI3S6r1jeU24MwbmgMJ_112; }
	inline int32_t* get_address_of_U23U3Dz9MQ6wF3U24JrGjI3S6r1jeU24MwbmgMJ_112() { return &___U23U3Dz9MQ6wF3U24JrGjI3S6r1jeU24MwbmgMJ_112; }
	inline void set_U23U3Dz9MQ6wF3U24JrGjI3S6r1jeU24MwbmgMJ_112(int32_t value)
	{
		___U23U3Dz9MQ6wF3U24JrGjI3S6r1jeU24MwbmgMJ_112 = value;
	}

	inline static int32_t get_offset_of_U23U3DzPccfKmXdast_gctwgd32VJDbJUwXXhct8AU3DU3D_113() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzPccfKmXdast_gctwgd32VJDbJUwXXhct8AU3DU3D_113)); }
	inline int32_t get_U23U3DzPccfKmXdast_gctwgd32VJDbJUwXXhct8AU3DU3D_113() const { return ___U23U3DzPccfKmXdast_gctwgd32VJDbJUwXXhct8AU3DU3D_113; }
	inline int32_t* get_address_of_U23U3DzPccfKmXdast_gctwgd32VJDbJUwXXhct8AU3DU3D_113() { return &___U23U3DzPccfKmXdast_gctwgd32VJDbJUwXXhct8AU3DU3D_113; }
	inline void set_U23U3DzPccfKmXdast_gctwgd32VJDbJUwXXhct8AU3DU3D_113(int32_t value)
	{
		___U23U3DzPccfKmXdast_gctwgd32VJDbJUwXXhct8AU3DU3D_113 = value;
	}

	inline static int32_t get_offset_of_U23U3DzptUnw_Y0toZvB70nCiuMWQYU3D_114() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzptUnw_Y0toZvB70nCiuMWQYU3D_114)); }
	inline int32_t get_U23U3DzptUnw_Y0toZvB70nCiuMWQYU3D_114() const { return ___U23U3DzptUnw_Y0toZvB70nCiuMWQYU3D_114; }
	inline int32_t* get_address_of_U23U3DzptUnw_Y0toZvB70nCiuMWQYU3D_114() { return &___U23U3DzptUnw_Y0toZvB70nCiuMWQYU3D_114; }
	inline void set_U23U3DzptUnw_Y0toZvB70nCiuMWQYU3D_114(int32_t value)
	{
		___U23U3DzptUnw_Y0toZvB70nCiuMWQYU3D_114 = value;
	}

	inline static int32_t get_offset_of_U23U3DzWgobBQev2_2N_115() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzWgobBQev2_2N_115)); }
	inline int32_t get_U23U3DzWgobBQev2_2N_115() const { return ___U23U3DzWgobBQev2_2N_115; }
	inline int32_t* get_address_of_U23U3DzWgobBQev2_2N_115() { return &___U23U3DzWgobBQev2_2N_115; }
	inline void set_U23U3DzWgobBQev2_2N_115(int32_t value)
	{
		___U23U3DzWgobBQev2_2N_115 = value;
	}

	inline static int32_t get_offset_of_U23U3DzWy6Ib_RKRbTJMtiXMQU3DU3D_116() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzWy6Ib_RKRbTJMtiXMQU3DU3D_116)); }
	inline int32_t get_U23U3DzWy6Ib_RKRbTJMtiXMQU3DU3D_116() const { return ___U23U3DzWy6Ib_RKRbTJMtiXMQU3DU3D_116; }
	inline int32_t* get_address_of_U23U3DzWy6Ib_RKRbTJMtiXMQU3DU3D_116() { return &___U23U3DzWy6Ib_RKRbTJMtiXMQU3DU3D_116; }
	inline void set_U23U3DzWy6Ib_RKRbTJMtiXMQU3DU3D_116(int32_t value)
	{
		___U23U3DzWy6Ib_RKRbTJMtiXMQU3DU3D_116 = value;
	}

	inline static int32_t get_offset_of_U23U3Dzf5JVrq84WLAZPtRy4gU3DU3D_117() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dzf5JVrq84WLAZPtRy4gU3DU3D_117)); }
	inline int32_t get_U23U3Dzf5JVrq84WLAZPtRy4gU3DU3D_117() const { return ___U23U3Dzf5JVrq84WLAZPtRy4gU3DU3D_117; }
	inline int32_t* get_address_of_U23U3Dzf5JVrq84WLAZPtRy4gU3DU3D_117() { return &___U23U3Dzf5JVrq84WLAZPtRy4gU3DU3D_117; }
	inline void set_U23U3Dzf5JVrq84WLAZPtRy4gU3DU3D_117(int32_t value)
	{
		___U23U3Dzf5JVrq84WLAZPtRy4gU3DU3D_117 = value;
	}

	inline static int32_t get_offset_of_U23U3DzlpNrgFMBVTT81__gKAU3DU3D_118() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzlpNrgFMBVTT81__gKAU3DU3D_118)); }
	inline int32_t get_U23U3DzlpNrgFMBVTT81__gKAU3DU3D_118() const { return ___U23U3DzlpNrgFMBVTT81__gKAU3DU3D_118; }
	inline int32_t* get_address_of_U23U3DzlpNrgFMBVTT81__gKAU3DU3D_118() { return &___U23U3DzlpNrgFMBVTT81__gKAU3DU3D_118; }
	inline void set_U23U3DzlpNrgFMBVTT81__gKAU3DU3D_118(int32_t value)
	{
		___U23U3DzlpNrgFMBVTT81__gKAU3DU3D_118 = value;
	}

	inline static int32_t get_offset_of_U23U3Dzf7fY5k2U24RDspRfbuFwU3DU3D_119() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dzf7fY5k2U24RDspRfbuFwU3DU3D_119)); }
	inline int32_t get_U23U3Dzf7fY5k2U24RDspRfbuFwU3DU3D_119() const { return ___U23U3Dzf7fY5k2U24RDspRfbuFwU3DU3D_119; }
	inline int32_t* get_address_of_U23U3Dzf7fY5k2U24RDspRfbuFwU3DU3D_119() { return &___U23U3Dzf7fY5k2U24RDspRfbuFwU3DU3D_119; }
	inline void set_U23U3Dzf7fY5k2U24RDspRfbuFwU3DU3D_119(int32_t value)
	{
		___U23U3Dzf7fY5k2U24RDspRfbuFwU3DU3D_119 = value;
	}

	inline static int32_t get_offset_of_U23U3DzJx2CtSyDIS4sDNKd0oHTHIHU24U0yT_120() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzJx2CtSyDIS4sDNKd0oHTHIHU24U0yT_120)); }
	inline int32_t get_U23U3DzJx2CtSyDIS4sDNKd0oHTHIHU24U0yT_120() const { return ___U23U3DzJx2CtSyDIS4sDNKd0oHTHIHU24U0yT_120; }
	inline int32_t* get_address_of_U23U3DzJx2CtSyDIS4sDNKd0oHTHIHU24U0yT_120() { return &___U23U3DzJx2CtSyDIS4sDNKd0oHTHIHU24U0yT_120; }
	inline void set_U23U3DzJx2CtSyDIS4sDNKd0oHTHIHU24U0yT_120(int32_t value)
	{
		___U23U3DzJx2CtSyDIS4sDNKd0oHTHIHU24U0yT_120 = value;
	}

	inline static int32_t get_offset_of_U23U3DzKNn5W5xgVY0qpfkbArR3nhAU3D_121() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzKNn5W5xgVY0qpfkbArR3nhAU3D_121)); }
	inline int32_t get_U23U3DzKNn5W5xgVY0qpfkbArR3nhAU3D_121() const { return ___U23U3DzKNn5W5xgVY0qpfkbArR3nhAU3D_121; }
	inline int32_t* get_address_of_U23U3DzKNn5W5xgVY0qpfkbArR3nhAU3D_121() { return &___U23U3DzKNn5W5xgVY0qpfkbArR3nhAU3D_121; }
	inline void set_U23U3DzKNn5W5xgVY0qpfkbArR3nhAU3D_121(int32_t value)
	{
		___U23U3DzKNn5W5xgVY0qpfkbArR3nhAU3D_121 = value;
	}

	inline static int32_t get_offset_of_U23U3DzD9JApHtXzS7k_122() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzD9JApHtXzS7k_122)); }
	inline int32_t get_U23U3DzD9JApHtXzS7k_122() const { return ___U23U3DzD9JApHtXzS7k_122; }
	inline int32_t* get_address_of_U23U3DzD9JApHtXzS7k_122() { return &___U23U3DzD9JApHtXzS7k_122; }
	inline void set_U23U3DzD9JApHtXzS7k_122(int32_t value)
	{
		___U23U3DzD9JApHtXzS7k_122 = value;
	}

	inline static int32_t get_offset_of_U23U3DzDgmDJDdpeIH43MNIOXE9rOMU3D_123() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzDgmDJDdpeIH43MNIOXE9rOMU3D_123)); }
	inline int32_t get_U23U3DzDgmDJDdpeIH43MNIOXE9rOMU3D_123() const { return ___U23U3DzDgmDJDdpeIH43MNIOXE9rOMU3D_123; }
	inline int32_t* get_address_of_U23U3DzDgmDJDdpeIH43MNIOXE9rOMU3D_123() { return &___U23U3DzDgmDJDdpeIH43MNIOXE9rOMU3D_123; }
	inline void set_U23U3DzDgmDJDdpeIH43MNIOXE9rOMU3D_123(int32_t value)
	{
		___U23U3DzDgmDJDdpeIH43MNIOXE9rOMU3D_123 = value;
	}

	inline static int32_t get_offset_of_U23U3DzoZ4V9Salbg54fKz9ZN2U24wp8U3D_124() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzoZ4V9Salbg54fKz9ZN2U24wp8U3D_124)); }
	inline int32_t get_U23U3DzoZ4V9Salbg54fKz9ZN2U24wp8U3D_124() const { return ___U23U3DzoZ4V9Salbg54fKz9ZN2U24wp8U3D_124; }
	inline int32_t* get_address_of_U23U3DzoZ4V9Salbg54fKz9ZN2U24wp8U3D_124() { return &___U23U3DzoZ4V9Salbg54fKz9ZN2U24wp8U3D_124; }
	inline void set_U23U3DzoZ4V9Salbg54fKz9ZN2U24wp8U3D_124(int32_t value)
	{
		___U23U3DzoZ4V9Salbg54fKz9ZN2U24wp8U3D_124 = value;
	}

	inline static int32_t get_offset_of_U23U3DzRkWhHeZI5CEb_125() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzRkWhHeZI5CEb_125)); }
	inline int32_t get_U23U3DzRkWhHeZI5CEb_125() const { return ___U23U3DzRkWhHeZI5CEb_125; }
	inline int32_t* get_address_of_U23U3DzRkWhHeZI5CEb_125() { return &___U23U3DzRkWhHeZI5CEb_125; }
	inline void set_U23U3DzRkWhHeZI5CEb_125(int32_t value)
	{
		___U23U3DzRkWhHeZI5CEb_125 = value;
	}

	inline static int32_t get_offset_of_U23U3DzsVFGVy17LrIO_126() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzsVFGVy17LrIO_126)); }
	inline int32_t get_U23U3DzsVFGVy17LrIO_126() const { return ___U23U3DzsVFGVy17LrIO_126; }
	inline int32_t* get_address_of_U23U3DzsVFGVy17LrIO_126() { return &___U23U3DzsVFGVy17LrIO_126; }
	inline void set_U23U3DzsVFGVy17LrIO_126(int32_t value)
	{
		___U23U3DzsVFGVy17LrIO_126 = value;
	}

	inline static int32_t get_offset_of_U23U3Dzz2E5U6SNwniS_127() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dzz2E5U6SNwniS_127)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_U23U3Dzz2E5U6SNwniS_127() const { return ___U23U3Dzz2E5U6SNwniS_127; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_U23U3Dzz2E5U6SNwniS_127() { return &___U23U3Dzz2E5U6SNwniS_127; }
	inline void set_U23U3Dzz2E5U6SNwniS_127(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___U23U3Dzz2E5U6SNwniS_127 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3Dzz2E5U6SNwniS_127), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzreEnTofATU24DCpHxeVgU3DU3D_128() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzreEnTofATU24DCpHxeVgU3DU3D_128)); }
	inline U23U3Dzz2WQAsO2UUEplIiiNuE7oQkU3D_t0EE83925EB2ADE849F30C026B3E102D9250CCA6F * get_U23U3DzreEnTofATU24DCpHxeVgU3DU3D_128() const { return ___U23U3DzreEnTofATU24DCpHxeVgU3DU3D_128; }
	inline U23U3Dzz2WQAsO2UUEplIiiNuE7oQkU3D_t0EE83925EB2ADE849F30C026B3E102D9250CCA6F ** get_address_of_U23U3DzreEnTofATU24DCpHxeVgU3DU3D_128() { return &___U23U3DzreEnTofATU24DCpHxeVgU3DU3D_128; }
	inline void set_U23U3DzreEnTofATU24DCpHxeVgU3DU3D_128(U23U3Dzz2WQAsO2UUEplIiiNuE7oQkU3D_t0EE83925EB2ADE849F30C026B3E102D9250CCA6F * value)
	{
		___U23U3DzreEnTofATU24DCpHxeVgU3DU3D_128 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzreEnTofATU24DCpHxeVgU3DU3D_128), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3Dz0FIVAoiwIYcU248digYnCRKNsU3D_129() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dz0FIVAoiwIYcU248digYnCRKNsU3D_129)); }
	inline List_1_t33758A17F9C5272569ADB02F8230576D4AF1E6D6 * get_U23U3Dz0FIVAoiwIYcU248digYnCRKNsU3D_129() const { return ___U23U3Dz0FIVAoiwIYcU248digYnCRKNsU3D_129; }
	inline List_1_t33758A17F9C5272569ADB02F8230576D4AF1E6D6 ** get_address_of_U23U3Dz0FIVAoiwIYcU248digYnCRKNsU3D_129() { return &___U23U3Dz0FIVAoiwIYcU248digYnCRKNsU3D_129; }
	inline void set_U23U3Dz0FIVAoiwIYcU248digYnCRKNsU3D_129(List_1_t33758A17F9C5272569ADB02F8230576D4AF1E6D6 * value)
	{
		___U23U3Dz0FIVAoiwIYcU248digYnCRKNsU3D_129 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3Dz0FIVAoiwIYcU248digYnCRKNsU3D_129), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzoZsBrxdUtCvN6rmQ0SddU24BW4a3SoLI0iYAU3DU3D_130() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzoZsBrxdUtCvN6rmQ0SddU24BW4a3SoLI0iYAU3DU3D_130)); }
	inline List_1_t9784882413F9EEDBD78A33DB4E900C033610AF29 * get_U23U3DzoZsBrxdUtCvN6rmQ0SddU24BW4a3SoLI0iYAU3DU3D_130() const { return ___U23U3DzoZsBrxdUtCvN6rmQ0SddU24BW4a3SoLI0iYAU3DU3D_130; }
	inline List_1_t9784882413F9EEDBD78A33DB4E900C033610AF29 ** get_address_of_U23U3DzoZsBrxdUtCvN6rmQ0SddU24BW4a3SoLI0iYAU3DU3D_130() { return &___U23U3DzoZsBrxdUtCvN6rmQ0SddU24BW4a3SoLI0iYAU3DU3D_130; }
	inline void set_U23U3DzoZsBrxdUtCvN6rmQ0SddU24BW4a3SoLI0iYAU3DU3D_130(List_1_t9784882413F9EEDBD78A33DB4E900C033610AF29 * value)
	{
		___U23U3DzoZsBrxdUtCvN6rmQ0SddU24BW4a3SoLI0iYAU3DU3D_130 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzoZsBrxdUtCvN6rmQ0SddU24BW4a3SoLI0iYAU3DU3D_130), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DznIYyFhREtYmg1P5LUsg5WXQU3D_131() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DznIYyFhREtYmg1P5LUsg5WXQU3D_131)); }
	inline List_1_tA1AC911A62FB80716188A6C2E74EC1CDA333C070 * get_U23U3DznIYyFhREtYmg1P5LUsg5WXQU3D_131() const { return ___U23U3DznIYyFhREtYmg1P5LUsg5WXQU3D_131; }
	inline List_1_tA1AC911A62FB80716188A6C2E74EC1CDA333C070 ** get_address_of_U23U3DznIYyFhREtYmg1P5LUsg5WXQU3D_131() { return &___U23U3DznIYyFhREtYmg1P5LUsg5WXQU3D_131; }
	inline void set_U23U3DznIYyFhREtYmg1P5LUsg5WXQU3D_131(List_1_tA1AC911A62FB80716188A6C2E74EC1CDA333C070 * value)
	{
		___U23U3DznIYyFhREtYmg1P5LUsg5WXQU3D_131 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DznIYyFhREtYmg1P5LUsg5WXQU3D_131), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzjAEKP41cMa26mK1WHmvT_obCU24Nb7_132() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzjAEKP41cMa26mK1WHmvT_obCU24Nb7_132)); }
	inline List_1_t3583F7E200CA31239569F517D46EC6A79785FE7D * get_U23U3DzjAEKP41cMa26mK1WHmvT_obCU24Nb7_132() const { return ___U23U3DzjAEKP41cMa26mK1WHmvT_obCU24Nb7_132; }
	inline List_1_t3583F7E200CA31239569F517D46EC6A79785FE7D ** get_address_of_U23U3DzjAEKP41cMa26mK1WHmvT_obCU24Nb7_132() { return &___U23U3DzjAEKP41cMa26mK1WHmvT_obCU24Nb7_132; }
	inline void set_U23U3DzjAEKP41cMa26mK1WHmvT_obCU24Nb7_132(List_1_t3583F7E200CA31239569F517D46EC6A79785FE7D * value)
	{
		___U23U3DzjAEKP41cMa26mK1WHmvT_obCU24Nb7_132 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzjAEKP41cMa26mK1WHmvT_obCU24Nb7_132), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzArvDp8QoaN_U24rUHAEQU3DU3D_133() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzArvDp8QoaN_U24rUHAEQU3DU3D_133)); }
	inline List_1_tE8B748F7F3B1B8182E2BEC12CFC14A94D030D267 * get_U23U3DzArvDp8QoaN_U24rUHAEQU3DU3D_133() const { return ___U23U3DzArvDp8QoaN_U24rUHAEQU3DU3D_133; }
	inline List_1_tE8B748F7F3B1B8182E2BEC12CFC14A94D030D267 ** get_address_of_U23U3DzArvDp8QoaN_U24rUHAEQU3DU3D_133() { return &___U23U3DzArvDp8QoaN_U24rUHAEQU3DU3D_133; }
	inline void set_U23U3DzArvDp8QoaN_U24rUHAEQU3DU3D_133(List_1_tE8B748F7F3B1B8182E2BEC12CFC14A94D030D267 * value)
	{
		___U23U3DzArvDp8QoaN_U24rUHAEQU3DU3D_133 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzArvDp8QoaN_U24rUHAEQU3DU3D_133), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzqmewxhIrNjasEbniEwU3DU3D_134() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzqmewxhIrNjasEbniEwU3DU3D_134)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get_U23U3DzqmewxhIrNjasEbniEwU3DU3D_134() const { return ___U23U3DzqmewxhIrNjasEbniEwU3DU3D_134; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of_U23U3DzqmewxhIrNjasEbniEwU3DU3D_134() { return &___U23U3DzqmewxhIrNjasEbniEwU3DU3D_134; }
	inline void set_U23U3DzqmewxhIrNjasEbniEwU3DU3D_134(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		___U23U3DzqmewxhIrNjasEbniEwU3DU3D_134 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzqmewxhIrNjasEbniEwU3DU3D_134), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3Dz5M1FRXDU24gLHWxwCIYwU3DU3D_135() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dz5M1FRXDU24gLHWxwCIYwU3DU3D_135)); }
	inline Dictionary_2_t049AB000068AC79B45EED8BCCAE47B23B0B18B72 * get_U23U3Dz5M1FRXDU24gLHWxwCIYwU3DU3D_135() const { return ___U23U3Dz5M1FRXDU24gLHWxwCIYwU3DU3D_135; }
	inline Dictionary_2_t049AB000068AC79B45EED8BCCAE47B23B0B18B72 ** get_address_of_U23U3Dz5M1FRXDU24gLHWxwCIYwU3DU3D_135() { return &___U23U3Dz5M1FRXDU24gLHWxwCIYwU3DU3D_135; }
	inline void set_U23U3Dz5M1FRXDU24gLHWxwCIYwU3DU3D_135(Dictionary_2_t049AB000068AC79B45EED8BCCAE47B23B0B18B72 * value)
	{
		___U23U3Dz5M1FRXDU24gLHWxwCIYwU3DU3D_135 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3Dz5M1FRXDU24gLHWxwCIYwU3DU3D_135), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzCmJRGE8fZ8dIE5U2450Iz4TK6D58dC_136() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3DzCmJRGE8fZ8dIE5U2450Iz4TK6D58dC_136)); }
	inline Dictionary_2_tD7BA2A0D4A15ABAD76816CADA4A47E4EED50BB77 * get_U23U3DzCmJRGE8fZ8dIE5U2450Iz4TK6D58dC_136() const { return ___U23U3DzCmJRGE8fZ8dIE5U2450Iz4TK6D58dC_136; }
	inline Dictionary_2_tD7BA2A0D4A15ABAD76816CADA4A47E4EED50BB77 ** get_address_of_U23U3DzCmJRGE8fZ8dIE5U2450Iz4TK6D58dC_136() { return &___U23U3DzCmJRGE8fZ8dIE5U2450Iz4TK6D58dC_136; }
	inline void set_U23U3DzCmJRGE8fZ8dIE5U2450Iz4TK6D58dC_136(Dictionary_2_tD7BA2A0D4A15ABAD76816CADA4A47E4EED50BB77 * value)
	{
		___U23U3DzCmJRGE8fZ8dIE5U2450Iz4TK6D58dC_136 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzCmJRGE8fZ8dIE5U2450Iz4TK6D58dC_136), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3Dz8xZAEAcKvnXQAkbKePRTyv4U3D_137() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E, ___U23U3Dz8xZAEAcKvnXQAkbKePRTyv4U3D_137)); }
	inline bool get_U23U3Dz8xZAEAcKvnXQAkbKePRTyv4U3D_137() const { return ___U23U3Dz8xZAEAcKvnXQAkbKePRTyv4U3D_137; }
	inline bool* get_address_of_U23U3Dz8xZAEAcKvnXQAkbKePRTyv4U3D_137() { return &___U23U3Dz8xZAEAcKvnXQAkbKePRTyv4U3D_137; }
	inline void set_U23U3Dz8xZAEAcKvnXQAkbKePRTyv4U3D_137(bool value)
	{
		___U23U3Dz8xZAEAcKvnXQAkbKePRTyv4U3D_137 = value;
	}
};

struct MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E_StaticFields
{
public:
	// System.Int32 Microsoft.Maps.Unity.MapRendererBase::#=zZK0NGiSrhmqWxM883dLqzCc=
	int32_t ___U23U3DzZK0NGiSrhmqWxM883dLqzCcU3D_4;
	// UnityEngine.Vector4 Microsoft.Maps.Unity.MapRendererBase::#=zarNE$Eo3TaEq
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___U23U3DzarNEU24Eo3TaEq_6;
	// UnityEngine.Vector4[] Microsoft.Maps.Unity.MapRendererBase::#=zOKoBm4ptVYAw
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ___U23U3DzOKoBm4ptVYAw_7;
	// Microsoft.Geospatial.TileId[] Microsoft.Maps.Unity.MapRendererBase::#=znhcFo87j$bVhk9B5UXDpxpo=
	TileIdU5BU5D_tC3C41979AF33FB8BA28A821B4FCE3507F85E37B0* ___U23U3DznhcFo87jU24bVhk9B5UXDpxpoU3D_8;
	// System.Int32[] Microsoft.Maps.Unity.MapRendererBase::#=zIR4s3$6qob3hRrzQFg==
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___U23U3DzIR4s3U246qob3hRrzQFgU3DU3D_68;
	// System.Int32[] Microsoft.Maps.Unity.MapRendererBase::#=zqr7OagjczdNsTZJ65qc6aGI=
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___U23U3Dzqr7OagjczdNsTZJ65qc6aGIU3D_69;
	// UnityEngine.Vector3[] Microsoft.Maps.Unity.MapRendererBase::#=z6gHO_9ErE4ryiadCFb4vsnQ=
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___U23U3Dz6gHO_9ErE4ryiadCFb4vsnQU3D_138;
	// #=zG9WBI4m7na9OshAewdvflELclh5D Microsoft.Maps.Unity.MapRendererBase::#=zZJQz4lF60wzg
	U23U3DzG9WBI4m7na9OshAewdvflELclh5D_t4FCDFA6C716769365ABE1DBACA7528030D717DC3 * ___U23U3DzZJQz4lF60wzg_139;
	// UnityEngine.Vector2[] Microsoft.Maps.Unity.MapRendererBase::#=zphuOuP$FTruL
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___U23U3DzphuOuPU24FTruL_140;

public:
	inline static int32_t get_offset_of_U23U3DzZK0NGiSrhmqWxM883dLqzCcU3D_4() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E_StaticFields, ___U23U3DzZK0NGiSrhmqWxM883dLqzCcU3D_4)); }
	inline int32_t get_U23U3DzZK0NGiSrhmqWxM883dLqzCcU3D_4() const { return ___U23U3DzZK0NGiSrhmqWxM883dLqzCcU3D_4; }
	inline int32_t* get_address_of_U23U3DzZK0NGiSrhmqWxM883dLqzCcU3D_4() { return &___U23U3DzZK0NGiSrhmqWxM883dLqzCcU3D_4; }
	inline void set_U23U3DzZK0NGiSrhmqWxM883dLqzCcU3D_4(int32_t value)
	{
		___U23U3DzZK0NGiSrhmqWxM883dLqzCcU3D_4 = value;
	}

	inline static int32_t get_offset_of_U23U3DzarNEU24Eo3TaEq_6() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E_StaticFields, ___U23U3DzarNEU24Eo3TaEq_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_U23U3DzarNEU24Eo3TaEq_6() const { return ___U23U3DzarNEU24Eo3TaEq_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_U23U3DzarNEU24Eo3TaEq_6() { return &___U23U3DzarNEU24Eo3TaEq_6; }
	inline void set_U23U3DzarNEU24Eo3TaEq_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___U23U3DzarNEU24Eo3TaEq_6 = value;
	}

	inline static int32_t get_offset_of_U23U3DzOKoBm4ptVYAw_7() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E_StaticFields, ___U23U3DzOKoBm4ptVYAw_7)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get_U23U3DzOKoBm4ptVYAw_7() const { return ___U23U3DzOKoBm4ptVYAw_7; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of_U23U3DzOKoBm4ptVYAw_7() { return &___U23U3DzOKoBm4ptVYAw_7; }
	inline void set_U23U3DzOKoBm4ptVYAw_7(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		___U23U3DzOKoBm4ptVYAw_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzOKoBm4ptVYAw_7), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DznhcFo87jU24bVhk9B5UXDpxpoU3D_8() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E_StaticFields, ___U23U3DznhcFo87jU24bVhk9B5UXDpxpoU3D_8)); }
	inline TileIdU5BU5D_tC3C41979AF33FB8BA28A821B4FCE3507F85E37B0* get_U23U3DznhcFo87jU24bVhk9B5UXDpxpoU3D_8() const { return ___U23U3DznhcFo87jU24bVhk9B5UXDpxpoU3D_8; }
	inline TileIdU5BU5D_tC3C41979AF33FB8BA28A821B4FCE3507F85E37B0** get_address_of_U23U3DznhcFo87jU24bVhk9B5UXDpxpoU3D_8() { return &___U23U3DznhcFo87jU24bVhk9B5UXDpxpoU3D_8; }
	inline void set_U23U3DznhcFo87jU24bVhk9B5UXDpxpoU3D_8(TileIdU5BU5D_tC3C41979AF33FB8BA28A821B4FCE3507F85E37B0* value)
	{
		___U23U3DznhcFo87jU24bVhk9B5UXDpxpoU3D_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DznhcFo87jU24bVhk9B5UXDpxpoU3D_8), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzIR4s3U246qob3hRrzQFgU3DU3D_68() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E_StaticFields, ___U23U3DzIR4s3U246qob3hRrzQFgU3DU3D_68)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_U23U3DzIR4s3U246qob3hRrzQFgU3DU3D_68() const { return ___U23U3DzIR4s3U246qob3hRrzQFgU3DU3D_68; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_U23U3DzIR4s3U246qob3hRrzQFgU3DU3D_68() { return &___U23U3DzIR4s3U246qob3hRrzQFgU3DU3D_68; }
	inline void set_U23U3DzIR4s3U246qob3hRrzQFgU3DU3D_68(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___U23U3DzIR4s3U246qob3hRrzQFgU3DU3D_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzIR4s3U246qob3hRrzQFgU3DU3D_68), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3Dzqr7OagjczdNsTZJ65qc6aGIU3D_69() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E_StaticFields, ___U23U3Dzqr7OagjczdNsTZJ65qc6aGIU3D_69)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_U23U3Dzqr7OagjczdNsTZJ65qc6aGIU3D_69() const { return ___U23U3Dzqr7OagjczdNsTZJ65qc6aGIU3D_69; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_U23U3Dzqr7OagjczdNsTZJ65qc6aGIU3D_69() { return &___U23U3Dzqr7OagjczdNsTZJ65qc6aGIU3D_69; }
	inline void set_U23U3Dzqr7OagjczdNsTZJ65qc6aGIU3D_69(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___U23U3Dzqr7OagjczdNsTZJ65qc6aGIU3D_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3Dzqr7OagjczdNsTZJ65qc6aGIU3D_69), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3Dz6gHO_9ErE4ryiadCFb4vsnQU3D_138() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E_StaticFields, ___U23U3Dz6gHO_9ErE4ryiadCFb4vsnQU3D_138)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_U23U3Dz6gHO_9ErE4ryiadCFb4vsnQU3D_138() const { return ___U23U3Dz6gHO_9ErE4ryiadCFb4vsnQU3D_138; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_U23U3Dz6gHO_9ErE4ryiadCFb4vsnQU3D_138() { return &___U23U3Dz6gHO_9ErE4ryiadCFb4vsnQU3D_138; }
	inline void set_U23U3Dz6gHO_9ErE4ryiadCFb4vsnQU3D_138(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___U23U3Dz6gHO_9ErE4ryiadCFb4vsnQU3D_138 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3Dz6gHO_9ErE4ryiadCFb4vsnQU3D_138), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzZJQz4lF60wzg_139() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E_StaticFields, ___U23U3DzZJQz4lF60wzg_139)); }
	inline U23U3DzG9WBI4m7na9OshAewdvflELclh5D_t4FCDFA6C716769365ABE1DBACA7528030D717DC3 * get_U23U3DzZJQz4lF60wzg_139() const { return ___U23U3DzZJQz4lF60wzg_139; }
	inline U23U3DzG9WBI4m7na9OshAewdvflELclh5D_t4FCDFA6C716769365ABE1DBACA7528030D717DC3 ** get_address_of_U23U3DzZJQz4lF60wzg_139() { return &___U23U3DzZJQz4lF60wzg_139; }
	inline void set_U23U3DzZJQz4lF60wzg_139(U23U3DzG9WBI4m7na9OshAewdvflELclh5D_t4FCDFA6C716769365ABE1DBACA7528030D717DC3 * value)
	{
		___U23U3DzZJQz4lF60wzg_139 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzZJQz4lF60wzg_139), (void*)value);
	}

	inline static int32_t get_offset_of_U23U3DzphuOuPU24FTruL_140() { return static_cast<int32_t>(offsetof(MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E_StaticFields, ___U23U3DzphuOuPU24FTruL_140)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_U23U3DzphuOuPU24FTruL_140() const { return ___U23U3DzphuOuPU24FTruL_140; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_U23U3DzphuOuPU24FTruL_140() { return &___U23U3DzphuOuPU24FTruL_140; }
	inline void set_U23U3DzphuOuPU24FTruL_140(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___U23U3DzphuOuPU24FTruL_140 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U23U3DzphuOuPU24FTruL_140), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem
struct MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2  : public BaseDataProviderAccessCoreSystem_t7A7B0A8F1AA8A4A6F16E2590B1A5125C9D6B6B47
{
public:
	// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_20;
	// System.UInt32 Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_21;
	// System.String Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_22;
	// Microsoft.MixedReality.Toolkit.CameraSystem.DisplayType Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::currentDisplayType
	int32_t ___currentDisplayType_23;
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::cameraOpaqueLastFrame
	bool ___cameraOpaqueLastFrame_24;
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::useFallbackBehavior
	bool ___useFallbackBehavior_25;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2, ___U3CNameU3Ek__BackingField_20)); }
	inline String_t* get_U3CNameU3Ek__BackingField_20() const { return ___U3CNameU3Ek__BackingField_20; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_20() { return &___U3CNameU3Ek__BackingField_20; }
	inline void set_U3CNameU3Ek__BackingField_20(String_t* value)
	{
		___U3CNameU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2, ___U3CSourceIdU3Ek__BackingField_21)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_21() const { return ___U3CSourceIdU3Ek__BackingField_21; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_21() { return &___U3CSourceIdU3Ek__BackingField_21; }
	inline void set_U3CSourceIdU3Ek__BackingField_21(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2, ___U3CSourceNameU3Ek__BackingField_22)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_22() const { return ___U3CSourceNameU3Ek__BackingField_22; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_22() { return &___U3CSourceNameU3Ek__BackingField_22; }
	inline void set_U3CSourceNameU3Ek__BackingField_22(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_currentDisplayType_23() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2, ___currentDisplayType_23)); }
	inline int32_t get_currentDisplayType_23() const { return ___currentDisplayType_23; }
	inline int32_t* get_address_of_currentDisplayType_23() { return &___currentDisplayType_23; }
	inline void set_currentDisplayType_23(int32_t value)
	{
		___currentDisplayType_23 = value;
	}

	inline static int32_t get_offset_of_cameraOpaqueLastFrame_24() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2, ___cameraOpaqueLastFrame_24)); }
	inline bool get_cameraOpaqueLastFrame_24() const { return ___cameraOpaqueLastFrame_24; }
	inline bool* get_address_of_cameraOpaqueLastFrame_24() { return &___cameraOpaqueLastFrame_24; }
	inline void set_cameraOpaqueLastFrame_24(bool value)
	{
		___cameraOpaqueLastFrame_24 = value;
	}

	inline static int32_t get_offset_of_useFallbackBehavior_25() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2, ___useFallbackBehavior_25)); }
	inline bool get_useFallbackBehavior_25() const { return ___useFallbackBehavior_25; }
	inline bool* get_address_of_useFallbackBehavior_25() { return &___useFallbackBehavior_25; }
	inline void set_useFallbackBehavior_25(bool value)
	{
		___useFallbackBehavior_25 = value;
	}
};

struct MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_26;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForOpaquePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplySettingsForOpaquePerfMarker_27;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem::ApplySettingsForTransparentPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ApplySettingsForTransparentPerfMarker_28;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_26() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2_StaticFields, ___UpdatePerfMarker_26)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_26() const { return ___UpdatePerfMarker_26; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_26() { return &___UpdatePerfMarker_26; }
	inline void set_UpdatePerfMarker_26(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_26 = value;
	}

	inline static int32_t get_offset_of_ApplySettingsForOpaquePerfMarker_27() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2_StaticFields, ___ApplySettingsForOpaquePerfMarker_27)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplySettingsForOpaquePerfMarker_27() const { return ___ApplySettingsForOpaquePerfMarker_27; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplySettingsForOpaquePerfMarker_27() { return &___ApplySettingsForOpaquePerfMarker_27; }
	inline void set_ApplySettingsForOpaquePerfMarker_27(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplySettingsForOpaquePerfMarker_27 = value;
	}

	inline static int32_t get_offset_of_ApplySettingsForTransparentPerfMarker_28() { return static_cast<int32_t>(offsetof(MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2_StaticFields, ___ApplySettingsForTransparentPerfMarker_28)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ApplySettingsForTransparentPerfMarker_28() const { return ___ApplySettingsForTransparentPerfMarker_28; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ApplySettingsForTransparentPerfMarker_28() { return &___ApplySettingsForTransparentPerfMarker_28; }
	inline void set_ApplySettingsForTransparentPerfMarker_28(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ApplySettingsForTransparentPerfMarker_28 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem
struct MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC  : public BaseDataProviderAccessCoreSystem_t7A7B0A8F1AA8A4A6F16E2590B1A5125C9D6B6B47
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_21;
	// System.Action Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::InputEnabled
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___InputEnabled_22;
	// System.Action Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::InputDisabled
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___InputDisabled_23;
	// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<DetectedInputSources>k__BackingField
	HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944 * ___U3CDetectedInputSourcesU3Ek__BackingField_24;
	// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<DetectedControllers>k__BackingField
	HashSet_1_tB517370B36B1616B4EBF2636DBC0FB76ED989826 * ___U3CDetectedControllersU3Ek__BackingField_25;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::inputSystemProfile
	MixedRealityInputSystemProfile_t31C758089592D55A720AF9AABFF0B95B989740E7 * ___inputSystemProfile_26;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProvider Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<GazeProvider>k__BackingField
	RuntimeObject* ___U3CGazeProviderU3Ek__BackingField_27;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityEyeGazeProvider Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<EyeGazeProvider>k__BackingField
	RuntimeObject* ___U3CEyeGazeProviderU3Ek__BackingField_28;
	// System.Collections.Generic.Stack`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::modalInputStack
	Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * ___modalInputStack_29;
	// System.Collections.Generic.Stack`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::fallbackInputStack
	Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * ___fallbackInputStack_30;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::disabledRefCount
	int32_t ___disabledRefCount_31;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::isInputModuleAdded
	bool ___isInputModuleAdded_32;
	// Microsoft.MixedReality.Toolkit.Input.SourceStateEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourceStateEventData
	SourceStateEventData_t98ADEA28B57F43D9889BA9E98876F6D7685D1E69 * ___sourceStateEventData_33;
	// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.TrackingState> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourceTrackingEventData
	SourcePoseEventData_1_t93B64FA6890DA53EE729AF86DB0A28D8D2DF6237 * ___sourceTrackingEventData_34;
	// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector2> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourceVector2EventData
	SourcePoseEventData_1_t2563FDACCC27400A28715E96CB3B25880150DBB8 * ___sourceVector2EventData_35;
	// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourcePositionEventData
	SourcePoseEventData_1_tBC103FBA20596670CA31FDCDEB31D1E9411AEE0A * ___sourcePositionEventData_36;
	// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<UnityEngine.Quaternion> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourceRotationEventData
	SourcePoseEventData_1_t62FBE40FF45DB019D531E85782BEB7801DD3DCDC * ___sourceRotationEventData_37;
	// Microsoft.MixedReality.Toolkit.Input.SourcePoseEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::sourcePoseEventData
	SourcePoseEventData_1_tD500DD60037038B0256A85F515AC203F8B5FD7A5 * ___sourcePoseEventData_38;
	// Microsoft.MixedReality.Toolkit.Input.FocusEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::focusEventData
	FocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D * ___focusEventData_39;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::inputEventData
	InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * ___inputEventData_40;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::pointerEventData
	MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B * ___pointerEventData_41;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Single> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::floatInputEventData
	InputEventData_1_t3311F6FA584F0F3689AF220E22C7EB910A3B4CEC * ___floatInputEventData_42;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector2> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::vector2InputEventData
	InputEventData_1_t087726847A7755115A9464A201CE76C01156D000 * ___vector2InputEventData_43;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::positionInputEventData
	InputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E * ___positionInputEventData_44;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<UnityEngine.Quaternion> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::rotationInputEventData
	InputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2 * ___rotationInputEventData_45;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::poseInputEventData
	InputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4 * ___poseInputEventData_46;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::jointPoseInputEventData
	InputEventData_1_t51D8897349D68573795ABC1D041110873F021DDE * ___jointPoseInputEventData_47;
	// Microsoft.MixedReality.Toolkit.Input.InputEventData`1<Microsoft.MixedReality.Toolkit.Input.HandMeshInfo> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::handMeshInputEventData
	InputEventData_1_t27A9E42F8C4750017CCF75B72B28AF7426CA29E9 * ___handMeshInputEventData_48;
	// Microsoft.MixedReality.Toolkit.Input.SpeechEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::speechEventData
	SpeechEventData_t9922EE268A5F18C835C491A80700AB1B073AC5AE * ___speechEventData_49;
	// Microsoft.MixedReality.Toolkit.Input.DictationEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::dictationEventData
	DictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD * ___dictationEventData_50;
	// Microsoft.MixedReality.Toolkit.Input.HandTrackingInputEventData Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::handTrackingInputEventData
	HandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C * ___handTrackingInputEventData_51;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionRulesProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::<CurrentInputActionRulesProfile>k__BackingField
	MixedRealityInputActionRulesProfile_t92E2FDE69469BC16B8FFD33677466320A63D9ECD * ___U3CCurrentInputActionRulesProfileU3Ek__BackingField_52;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::inputModuleChecked
	bool ___inputModuleChecked_53;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::inputModule
	MixedRealityInputModule_t846C494ECBA395077B5AAE96CA25B69E9243679F * ___inputModule_54;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___U3CNameU3Ek__BackingField_21)); }
	inline String_t* get_U3CNameU3Ek__BackingField_21() const { return ___U3CNameU3Ek__BackingField_21; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_21() { return &___U3CNameU3Ek__BackingField_21; }
	inline void set_U3CNameU3Ek__BackingField_21(String_t* value)
	{
		___U3CNameU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_21), (void*)value);
	}

	inline static int32_t get_offset_of_InputEnabled_22() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___InputEnabled_22)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_InputEnabled_22() const { return ___InputEnabled_22; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_InputEnabled_22() { return &___InputEnabled_22; }
	inline void set_InputEnabled_22(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___InputEnabled_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputEnabled_22), (void*)value);
	}

	inline static int32_t get_offset_of_InputDisabled_23() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___InputDisabled_23)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_InputDisabled_23() const { return ___InputDisabled_23; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_InputDisabled_23() { return &___InputDisabled_23; }
	inline void set_InputDisabled_23(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___InputDisabled_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputDisabled_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDetectedInputSourcesU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___U3CDetectedInputSourcesU3Ek__BackingField_24)); }
	inline HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944 * get_U3CDetectedInputSourcesU3Ek__BackingField_24() const { return ___U3CDetectedInputSourcesU3Ek__BackingField_24; }
	inline HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944 ** get_address_of_U3CDetectedInputSourcesU3Ek__BackingField_24() { return &___U3CDetectedInputSourcesU3Ek__BackingField_24; }
	inline void set_U3CDetectedInputSourcesU3Ek__BackingField_24(HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944 * value)
	{
		___U3CDetectedInputSourcesU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDetectedInputSourcesU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDetectedControllersU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___U3CDetectedControllersU3Ek__BackingField_25)); }
	inline HashSet_1_tB517370B36B1616B4EBF2636DBC0FB76ED989826 * get_U3CDetectedControllersU3Ek__BackingField_25() const { return ___U3CDetectedControllersU3Ek__BackingField_25; }
	inline HashSet_1_tB517370B36B1616B4EBF2636DBC0FB76ED989826 ** get_address_of_U3CDetectedControllersU3Ek__BackingField_25() { return &___U3CDetectedControllersU3Ek__BackingField_25; }
	inline void set_U3CDetectedControllersU3Ek__BackingField_25(HashSet_1_tB517370B36B1616B4EBF2636DBC0FB76ED989826 * value)
	{
		___U3CDetectedControllersU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDetectedControllersU3Ek__BackingField_25), (void*)value);
	}

	inline static int32_t get_offset_of_inputSystemProfile_26() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___inputSystemProfile_26)); }
	inline MixedRealityInputSystemProfile_t31C758089592D55A720AF9AABFF0B95B989740E7 * get_inputSystemProfile_26() const { return ___inputSystemProfile_26; }
	inline MixedRealityInputSystemProfile_t31C758089592D55A720AF9AABFF0B95B989740E7 ** get_address_of_inputSystemProfile_26() { return &___inputSystemProfile_26; }
	inline void set_inputSystemProfile_26(MixedRealityInputSystemProfile_t31C758089592D55A720AF9AABFF0B95B989740E7 * value)
	{
		___inputSystemProfile_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSystemProfile_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGazeProviderU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___U3CGazeProviderU3Ek__BackingField_27)); }
	inline RuntimeObject* get_U3CGazeProviderU3Ek__BackingField_27() const { return ___U3CGazeProviderU3Ek__BackingField_27; }
	inline RuntimeObject** get_address_of_U3CGazeProviderU3Ek__BackingField_27() { return &___U3CGazeProviderU3Ek__BackingField_27; }
	inline void set_U3CGazeProviderU3Ek__BackingField_27(RuntimeObject* value)
	{
		___U3CGazeProviderU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGazeProviderU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEyeGazeProviderU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___U3CEyeGazeProviderU3Ek__BackingField_28)); }
	inline RuntimeObject* get_U3CEyeGazeProviderU3Ek__BackingField_28() const { return ___U3CEyeGazeProviderU3Ek__BackingField_28; }
	inline RuntimeObject** get_address_of_U3CEyeGazeProviderU3Ek__BackingField_28() { return &___U3CEyeGazeProviderU3Ek__BackingField_28; }
	inline void set_U3CEyeGazeProviderU3Ek__BackingField_28(RuntimeObject* value)
	{
		___U3CEyeGazeProviderU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEyeGazeProviderU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of_modalInputStack_29() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___modalInputStack_29)); }
	inline Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * get_modalInputStack_29() const { return ___modalInputStack_29; }
	inline Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE ** get_address_of_modalInputStack_29() { return &___modalInputStack_29; }
	inline void set_modalInputStack_29(Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * value)
	{
		___modalInputStack_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___modalInputStack_29), (void*)value);
	}

	inline static int32_t get_offset_of_fallbackInputStack_30() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___fallbackInputStack_30)); }
	inline Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * get_fallbackInputStack_30() const { return ___fallbackInputStack_30; }
	inline Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE ** get_address_of_fallbackInputStack_30() { return &___fallbackInputStack_30; }
	inline void set_fallbackInputStack_30(Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * value)
	{
		___fallbackInputStack_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallbackInputStack_30), (void*)value);
	}

	inline static int32_t get_offset_of_disabledRefCount_31() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___disabledRefCount_31)); }
	inline int32_t get_disabledRefCount_31() const { return ___disabledRefCount_31; }
	inline int32_t* get_address_of_disabledRefCount_31() { return &___disabledRefCount_31; }
	inline void set_disabledRefCount_31(int32_t value)
	{
		___disabledRefCount_31 = value;
	}

	inline static int32_t get_offset_of_isInputModuleAdded_32() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___isInputModuleAdded_32)); }
	inline bool get_isInputModuleAdded_32() const { return ___isInputModuleAdded_32; }
	inline bool* get_address_of_isInputModuleAdded_32() { return &___isInputModuleAdded_32; }
	inline void set_isInputModuleAdded_32(bool value)
	{
		___isInputModuleAdded_32 = value;
	}

	inline static int32_t get_offset_of_sourceStateEventData_33() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___sourceStateEventData_33)); }
	inline SourceStateEventData_t98ADEA28B57F43D9889BA9E98876F6D7685D1E69 * get_sourceStateEventData_33() const { return ___sourceStateEventData_33; }
	inline SourceStateEventData_t98ADEA28B57F43D9889BA9E98876F6D7685D1E69 ** get_address_of_sourceStateEventData_33() { return &___sourceStateEventData_33; }
	inline void set_sourceStateEventData_33(SourceStateEventData_t98ADEA28B57F43D9889BA9E98876F6D7685D1E69 * value)
	{
		___sourceStateEventData_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceStateEventData_33), (void*)value);
	}

	inline static int32_t get_offset_of_sourceTrackingEventData_34() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___sourceTrackingEventData_34)); }
	inline SourcePoseEventData_1_t93B64FA6890DA53EE729AF86DB0A28D8D2DF6237 * get_sourceTrackingEventData_34() const { return ___sourceTrackingEventData_34; }
	inline SourcePoseEventData_1_t93B64FA6890DA53EE729AF86DB0A28D8D2DF6237 ** get_address_of_sourceTrackingEventData_34() { return &___sourceTrackingEventData_34; }
	inline void set_sourceTrackingEventData_34(SourcePoseEventData_1_t93B64FA6890DA53EE729AF86DB0A28D8D2DF6237 * value)
	{
		___sourceTrackingEventData_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceTrackingEventData_34), (void*)value);
	}

	inline static int32_t get_offset_of_sourceVector2EventData_35() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___sourceVector2EventData_35)); }
	inline SourcePoseEventData_1_t2563FDACCC27400A28715E96CB3B25880150DBB8 * get_sourceVector2EventData_35() const { return ___sourceVector2EventData_35; }
	inline SourcePoseEventData_1_t2563FDACCC27400A28715E96CB3B25880150DBB8 ** get_address_of_sourceVector2EventData_35() { return &___sourceVector2EventData_35; }
	inline void set_sourceVector2EventData_35(SourcePoseEventData_1_t2563FDACCC27400A28715E96CB3B25880150DBB8 * value)
	{
		___sourceVector2EventData_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceVector2EventData_35), (void*)value);
	}

	inline static int32_t get_offset_of_sourcePositionEventData_36() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___sourcePositionEventData_36)); }
	inline SourcePoseEventData_1_tBC103FBA20596670CA31FDCDEB31D1E9411AEE0A * get_sourcePositionEventData_36() const { return ___sourcePositionEventData_36; }
	inline SourcePoseEventData_1_tBC103FBA20596670CA31FDCDEB31D1E9411AEE0A ** get_address_of_sourcePositionEventData_36() { return &___sourcePositionEventData_36; }
	inline void set_sourcePositionEventData_36(SourcePoseEventData_1_tBC103FBA20596670CA31FDCDEB31D1E9411AEE0A * value)
	{
		___sourcePositionEventData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourcePositionEventData_36), (void*)value);
	}

	inline static int32_t get_offset_of_sourceRotationEventData_37() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___sourceRotationEventData_37)); }
	inline SourcePoseEventData_1_t62FBE40FF45DB019D531E85782BEB7801DD3DCDC * get_sourceRotationEventData_37() const { return ___sourceRotationEventData_37; }
	inline SourcePoseEventData_1_t62FBE40FF45DB019D531E85782BEB7801DD3DCDC ** get_address_of_sourceRotationEventData_37() { return &___sourceRotationEventData_37; }
	inline void set_sourceRotationEventData_37(SourcePoseEventData_1_t62FBE40FF45DB019D531E85782BEB7801DD3DCDC * value)
	{
		___sourceRotationEventData_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceRotationEventData_37), (void*)value);
	}

	inline static int32_t get_offset_of_sourcePoseEventData_38() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___sourcePoseEventData_38)); }
	inline SourcePoseEventData_1_tD500DD60037038B0256A85F515AC203F8B5FD7A5 * get_sourcePoseEventData_38() const { return ___sourcePoseEventData_38; }
	inline SourcePoseEventData_1_tD500DD60037038B0256A85F515AC203F8B5FD7A5 ** get_address_of_sourcePoseEventData_38() { return &___sourcePoseEventData_38; }
	inline void set_sourcePoseEventData_38(SourcePoseEventData_1_tD500DD60037038B0256A85F515AC203F8B5FD7A5 * value)
	{
		___sourcePoseEventData_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourcePoseEventData_38), (void*)value);
	}

	inline static int32_t get_offset_of_focusEventData_39() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___focusEventData_39)); }
	inline FocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D * get_focusEventData_39() const { return ___focusEventData_39; }
	inline FocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D ** get_address_of_focusEventData_39() { return &___focusEventData_39; }
	inline void set_focusEventData_39(FocusEventData_t9746D58B619A7670D4ED4AE7AFE0427728FC4C4D * value)
	{
		___focusEventData_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___focusEventData_39), (void*)value);
	}

	inline static int32_t get_offset_of_inputEventData_40() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___inputEventData_40)); }
	inline InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * get_inputEventData_40() const { return ___inputEventData_40; }
	inline InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 ** get_address_of_inputEventData_40() { return &___inputEventData_40; }
	inline void set_inputEventData_40(InputEventData_t0EFF0E29525E104F4D04DFD71BB8FE065323D7D9 * value)
	{
		___inputEventData_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputEventData_40), (void*)value);
	}

	inline static int32_t get_offset_of_pointerEventData_41() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___pointerEventData_41)); }
	inline MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B * get_pointerEventData_41() const { return ___pointerEventData_41; }
	inline MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B ** get_address_of_pointerEventData_41() { return &___pointerEventData_41; }
	inline void set_pointerEventData_41(MixedRealityPointerEventData_t237B049FD09144DB6EA2642667D9D549C3DE029B * value)
	{
		___pointerEventData_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerEventData_41), (void*)value);
	}

	inline static int32_t get_offset_of_floatInputEventData_42() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___floatInputEventData_42)); }
	inline InputEventData_1_t3311F6FA584F0F3689AF220E22C7EB910A3B4CEC * get_floatInputEventData_42() const { return ___floatInputEventData_42; }
	inline InputEventData_1_t3311F6FA584F0F3689AF220E22C7EB910A3B4CEC ** get_address_of_floatInputEventData_42() { return &___floatInputEventData_42; }
	inline void set_floatInputEventData_42(InputEventData_1_t3311F6FA584F0F3689AF220E22C7EB910A3B4CEC * value)
	{
		___floatInputEventData_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___floatInputEventData_42), (void*)value);
	}

	inline static int32_t get_offset_of_vector2InputEventData_43() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___vector2InputEventData_43)); }
	inline InputEventData_1_t087726847A7755115A9464A201CE76C01156D000 * get_vector2InputEventData_43() const { return ___vector2InputEventData_43; }
	inline InputEventData_1_t087726847A7755115A9464A201CE76C01156D000 ** get_address_of_vector2InputEventData_43() { return &___vector2InputEventData_43; }
	inline void set_vector2InputEventData_43(InputEventData_1_t087726847A7755115A9464A201CE76C01156D000 * value)
	{
		___vector2InputEventData_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vector2InputEventData_43), (void*)value);
	}

	inline static int32_t get_offset_of_positionInputEventData_44() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___positionInputEventData_44)); }
	inline InputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E * get_positionInputEventData_44() const { return ___positionInputEventData_44; }
	inline InputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E ** get_address_of_positionInputEventData_44() { return &___positionInputEventData_44; }
	inline void set_positionInputEventData_44(InputEventData_1_tDAE8FE860E7EA3BE36EAEC90D5A24A317DB3476E * value)
	{
		___positionInputEventData_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positionInputEventData_44), (void*)value);
	}

	inline static int32_t get_offset_of_rotationInputEventData_45() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___rotationInputEventData_45)); }
	inline InputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2 * get_rotationInputEventData_45() const { return ___rotationInputEventData_45; }
	inline InputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2 ** get_address_of_rotationInputEventData_45() { return &___rotationInputEventData_45; }
	inline void set_rotationInputEventData_45(InputEventData_1_tC369B3CE18BB257A31A23E3F322DAC2F636E47C2 * value)
	{
		___rotationInputEventData_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rotationInputEventData_45), (void*)value);
	}

	inline static int32_t get_offset_of_poseInputEventData_46() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___poseInputEventData_46)); }
	inline InputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4 * get_poseInputEventData_46() const { return ___poseInputEventData_46; }
	inline InputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4 ** get_address_of_poseInputEventData_46() { return &___poseInputEventData_46; }
	inline void set_poseInputEventData_46(InputEventData_1_t2152DAB6FC76DB9F27E15ECD686348385C95E0F4 * value)
	{
		___poseInputEventData_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___poseInputEventData_46), (void*)value);
	}

	inline static int32_t get_offset_of_jointPoseInputEventData_47() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___jointPoseInputEventData_47)); }
	inline InputEventData_1_t51D8897349D68573795ABC1D041110873F021DDE * get_jointPoseInputEventData_47() const { return ___jointPoseInputEventData_47; }
	inline InputEventData_1_t51D8897349D68573795ABC1D041110873F021DDE ** get_address_of_jointPoseInputEventData_47() { return &___jointPoseInputEventData_47; }
	inline void set_jointPoseInputEventData_47(InputEventData_1_t51D8897349D68573795ABC1D041110873F021DDE * value)
	{
		___jointPoseInputEventData_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jointPoseInputEventData_47), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshInputEventData_48() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___handMeshInputEventData_48)); }
	inline InputEventData_1_t27A9E42F8C4750017CCF75B72B28AF7426CA29E9 * get_handMeshInputEventData_48() const { return ___handMeshInputEventData_48; }
	inline InputEventData_1_t27A9E42F8C4750017CCF75B72B28AF7426CA29E9 ** get_address_of_handMeshInputEventData_48() { return &___handMeshInputEventData_48; }
	inline void set_handMeshInputEventData_48(InputEventData_1_t27A9E42F8C4750017CCF75B72B28AF7426CA29E9 * value)
	{
		___handMeshInputEventData_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshInputEventData_48), (void*)value);
	}

	inline static int32_t get_offset_of_speechEventData_49() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___speechEventData_49)); }
	inline SpeechEventData_t9922EE268A5F18C835C491A80700AB1B073AC5AE * get_speechEventData_49() const { return ___speechEventData_49; }
	inline SpeechEventData_t9922EE268A5F18C835C491A80700AB1B073AC5AE ** get_address_of_speechEventData_49() { return &___speechEventData_49; }
	inline void set_speechEventData_49(SpeechEventData_t9922EE268A5F18C835C491A80700AB1B073AC5AE * value)
	{
		___speechEventData_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speechEventData_49), (void*)value);
	}

	inline static int32_t get_offset_of_dictationEventData_50() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___dictationEventData_50)); }
	inline DictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD * get_dictationEventData_50() const { return ___dictationEventData_50; }
	inline DictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD ** get_address_of_dictationEventData_50() { return &___dictationEventData_50; }
	inline void set_dictationEventData_50(DictationEventData_t76D844B7FD5AAC9A67E7D6827962471632C7F9AD * value)
	{
		___dictationEventData_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictationEventData_50), (void*)value);
	}

	inline static int32_t get_offset_of_handTrackingInputEventData_51() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___handTrackingInputEventData_51)); }
	inline HandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C * get_handTrackingInputEventData_51() const { return ___handTrackingInputEventData_51; }
	inline HandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C ** get_address_of_handTrackingInputEventData_51() { return &___handTrackingInputEventData_51; }
	inline void set_handTrackingInputEventData_51(HandTrackingInputEventData_tE74F8D41C8B78FCA540815163B8DC9E60B862C1C * value)
	{
		___handTrackingInputEventData_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handTrackingInputEventData_51), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentInputActionRulesProfileU3Ek__BackingField_52() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___U3CCurrentInputActionRulesProfileU3Ek__BackingField_52)); }
	inline MixedRealityInputActionRulesProfile_t92E2FDE69469BC16B8FFD33677466320A63D9ECD * get_U3CCurrentInputActionRulesProfileU3Ek__BackingField_52() const { return ___U3CCurrentInputActionRulesProfileU3Ek__BackingField_52; }
	inline MixedRealityInputActionRulesProfile_t92E2FDE69469BC16B8FFD33677466320A63D9ECD ** get_address_of_U3CCurrentInputActionRulesProfileU3Ek__BackingField_52() { return &___U3CCurrentInputActionRulesProfileU3Ek__BackingField_52; }
	inline void set_U3CCurrentInputActionRulesProfileU3Ek__BackingField_52(MixedRealityInputActionRulesProfile_t92E2FDE69469BC16B8FFD33677466320A63D9ECD * value)
	{
		___U3CCurrentInputActionRulesProfileU3Ek__BackingField_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentInputActionRulesProfileU3Ek__BackingField_52), (void*)value);
	}

	inline static int32_t get_offset_of_inputModuleChecked_53() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___inputModuleChecked_53)); }
	inline bool get_inputModuleChecked_53() const { return ___inputModuleChecked_53; }
	inline bool* get_address_of_inputModuleChecked_53() { return &___inputModuleChecked_53; }
	inline void set_inputModuleChecked_53(bool value)
	{
		___inputModuleChecked_53 = value;
	}

	inline static int32_t get_offset_of_inputModule_54() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC, ___inputModule_54)); }
	inline MixedRealityInputModule_t846C494ECBA395077B5AAE96CA25B69E9243679F * get_inputModule_54() const { return ___inputModule_54; }
	inline MixedRealityInputModule_t846C494ECBA395077B5AAE96CA25B69E9243679F ** get_address_of_inputModule_54() { return &___inputModule_54; }
	inline void set_inputModule_54(MixedRealityInputModule_t846C494ECBA395077B5AAE96CA25B69E9243679F * value)
	{
		___inputModule_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputModule_54), (void*)value);
	}
};

struct MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::ExecuteHierarchyPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ExecuteHierarchyPerfMarker_20;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::HandleEventPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___HandleEventPerfMarker_55;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::HandleFocusChangedEventsPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___HandleFocusChangedEventsPerfMarker_56;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::HandleFocusEventPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___HandleFocusEventPerfMarker_57;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::HandlePointerEventPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___HandlePointerEventPerfMarker_58;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::DispatchEventToGlobalListenersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DispatchEventToGlobalListenersPerfMarker_59;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::DispatchEventToFallbackHandlersPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DispatchEventToFallbackHandlersPerfMarker_60;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::DispatchEventToObjectFocusedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DispatchEventToObjectFocusedPerfMarker_61;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::DispatchModalEventPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___DispatchModalEventPerfMarker_62;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourceDetectedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourceDetectedPerfMarker_63;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourceDetectedEventHandler
	EventFunction_1_tC25248F4120420D70DBE7C0E2CE8203E96093880 * ___OnSourceDetectedEventHandler_64;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourceLostPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourceLostPerfMarker_65;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourceStateHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourceLostEventHandler
	EventFunction_1_tC25248F4120420D70DBE7C0E2CE8203E96093880 * ___OnSourceLostEventHandler_66;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourceTrackingStateChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourceTrackingStateChangedPerfMarker_67;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourceTrackingChangedEventHandler
	EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * ___OnSourceTrackingChangedEventHandler_68;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourcePositionChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourcePositionChangedPerfMarker_69;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourcePoseVector2ChangedEventHandler
	EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * ___OnSourcePoseVector2ChangedEventHandler_70;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourcePositionChangedEventHandler
	EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * ___OnSourcePositionChangedEventHandler_71;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourceRotationChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourceRotationChangedPerfMarker_72;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourceRotationChangedEventHandler
	EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * ___OnSourceRotationChangedEventHandler_73;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSourcePoseChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSourcePoseChangedPerfMarker_74;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySourcePoseHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSourcePoseChangedEventHandler
	EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * ___OnSourcePoseChangedEventHandler_75;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePreFocusChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePreFocusChangedPerfMarker_76;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPreFocusChangedHandler
	EventFunction_1_t2717B4BEEC8F13851D1A3B0BD2C00F24A0D7B3F5 * ___OnPreFocusChangedHandler_77;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseFocusChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseFocusChangedPerfMarker_78;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusChangedHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnFocusChangedHandler
	EventFunction_1_t2717B4BEEC8F13851D1A3B0BD2C00F24A0D7B3F5 * ___OnFocusChangedHandler_79;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseFocusEnterPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseFocusEnterPerfMarker_80;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnFocusEnterEventHandler
	EventFunction_1_t8A66D1428C54D47DE7C3767C8336D7D738E4CFD7 * ___OnFocusEnterEventHandler_81;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseFocusExitPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseFocusExitPerfMarker_82;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnFocusExitEventHandler
	EventFunction_1_t8A66D1428C54D47DE7C3767C8336D7D738E4CFD7 * ___OnFocusExitEventHandler_83;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPointerDownEventHandler
	EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 * ___OnPointerDownEventHandler_84;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePointerDownPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePointerDownPerfMarker_85;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPointerDraggedEventHandler
	EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 * ___OnPointerDraggedEventHandler_86;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePointerDraggedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePointerDraggedPerfMarker_87;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnInputClickedEventHandler
	EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 * ___OnInputClickedEventHandler_88;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePointerClickedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePointerClickedPerfMarker_89;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointerHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPointerUpEventHandler
	EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 * ___OnPointerUpEventHandler_90;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePointerUpPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePointerUpPerfMarker_91;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnInputDownEventHandler
	EventFunction_1_t6A301BBD7AE53D439749F7D768B738644EEE54F4 * ___OnInputDownEventHandler_92;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnInputDownWithActionEventHandler
	EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * ___OnInputDownWithActionEventHandler_93;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseOnInputDownPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseOnInputDownPerfMarker_94;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnInputUpEventHandler
	EventFunction_1_t6A301BBD7AE53D439749F7D768B738644EEE54F4 * ___OnInputUpEventHandler_95;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnInputUpWithActionEventHandler
	EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * ___OnInputUpWithActionEventHandler_96;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseOnInputUpPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseOnInputUpPerfMarker_97;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<System.Single>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnFloatInputChanged
	EventFunction_1_tE53387E5C9435C87B00E3776C1284FACDAF828DD * ___OnFloatInputChanged_98;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseFloatInputChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseFloatInputChangedPerfMarker_99;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector2>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnTwoDoFInputChanged
	EventFunction_1_tBDD479D195AB503216CA2C141279707876E2CE6B * ___OnTwoDoFInputChanged_100;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePositionInputChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePositionInputChangedPerfMarker_101;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Vector3>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPositionInputChanged
	EventFunction_1_t0A490D6A60344ECB31239B80D7A64B857DECE37A * ___OnPositionInputChanged_102;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<UnityEngine.Quaternion>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnRotationInputChanged
	EventFunction_1_tC82499C2264931E95E922A73BE558B8B1000DEBF * ___OnRotationInputChanged_103;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseRotationInputChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseRotationInputChangedPerfMarker_104;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnPoseInputChanged
	EventFunction_1_t1560006E71599AFE4A68DB24BD17A244C2C42B5E * ___OnPoseInputChanged_105;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaisePoseInputChangedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaisePoseInputChangedPerfMarker_106;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureStarted
	EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB * ___OnGestureStarted_107;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureStartedWithAction
	EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * ___OnGestureStartedWithAction_108;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseGestureStartedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseGestureStartedPerfMarker_109;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureUpdated
	EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB * ___OnGestureUpdated_110;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseGestureUpdatedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseGestureUpdatedPerfMarker_111;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureVector2PositionUpdated
	EventFunction_1_tE5C222AE72719E5202DC74DF6E9F245C703FA987 * ___OnGestureVector2PositionUpdated_112;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGesturePositionUpdated
	EventFunction_1_t76159F6E13D48C7588ADA8FE915484A89BCBD0AC * ___OnGesturePositionUpdated_113;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureRotationUpdated
	EventFunction_1_t9D9637F452B6DE98AB382482491DC9DD5A47CC5D * ___OnGestureRotationUpdated_114;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGesturePoseUpdated
	EventFunction_1_t0F9FDBA279A6B752B2CB31C8D5A4E5BE54438A68 * ___OnGesturePoseUpdated_115;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureCompleted
	EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB * ___OnGestureCompleted_116;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureCompletedWithAction
	EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * ___OnGestureCompletedWithAction_117;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseGestureCompletedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseGestureCompletedPerfMarker_118;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector2>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureVector2PositionCompleted
	EventFunction_1_tE5C222AE72719E5202DC74DF6E9F245C703FA987 * ___OnGestureVector2PositionCompleted_119;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Vector3>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGesturePositionCompleted
	EventFunction_1_t76159F6E13D48C7588ADA8FE915484A89BCBD0AC * ___OnGesturePositionCompleted_120;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<UnityEngine.Quaternion>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureRotationCompleted
	EventFunction_1_t9D9637F452B6DE98AB382482491DC9DD5A47CC5D * ___OnGestureRotationCompleted_121;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler`1<Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGesturePoseCompleted
	EventFunction_1_t0F9FDBA279A6B752B2CB31C8D5A4E5BE54438A68 * ___OnGesturePoseCompleted_122;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityGestureHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnGestureCanceled
	EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB * ___OnGestureCanceled_123;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseGestureCanceledPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseGestureCanceledPerfMarker_124;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealitySpeechHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSpeechKeywordRecognizedEventHandler
	EventFunction_1_t6A1B7B8EE1A910A06AEC85165DE92D36EADF88E6 * ___OnSpeechKeywordRecognizedEventHandler_125;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityBaseInputHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnSpeechKeywordRecognizedWithActionEventHandler
	EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * ___OnSpeechKeywordRecognizedWithActionEventHandler_126;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseSpeechCommandRecognizedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseSpeechCommandRecognizedPerfMarker_127;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnDictationHypothesisEventHandler
	EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 * ___OnDictationHypothesisEventHandler_128;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseDictationHypothesisPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseDictationHypothesisPerfMarker_129;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnDictationResultEventHandler
	EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 * ___OnDictationResultEventHandler_130;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseDictationResultPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseDictationResultPerfMarker_131;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnDictationCompleteEventHandler
	EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 * ___OnDictationCompleteEventHandler_132;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseDictationCompletePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseDictationCompletePerfMarker_133;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityDictationHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnDictationErrorEventHandler
	EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 * ___OnDictationErrorEventHandler_134;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseDictationErrorPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseDictationErrorPerfMarker_135;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnHandJointsUpdatedEventHandler
	EventFunction_1_tC180EC34C0F84626214501D36C59A6D96F3BAE9A * ___OnHandJointsUpdatedEventHandler_136;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseHandJointsUpdatedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseHandJointsUpdatedPerfMarker_137;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandMeshHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnHandMeshUpdatedEventHandler
	EventFunction_1_tDA972648D941D55D8F76F1DF59415693FAE31F4A * ___OnHandMeshUpdatedEventHandler_138;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseHandMeshUpdatedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseHandMeshUpdatedPerfMarker_139;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnTouchStartedEventHandler
	EventFunction_1_t3185DCA90F112F51BD30605E3CE96271ECB077ED * ___OnTouchStartedEventHandler_140;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseOnTouchStartedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseOnTouchStartedPerfMarker_141;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnTouchCompletedEventHandler
	EventFunction_1_t3185DCA90F112F51BD30605E3CE96271ECB077ED * ___OnTouchCompletedEventHandler_142;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseOnTouchCompletedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseOnTouchCompletedPerfMarker_143;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityTouchHandler> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::OnTouchUpdatedEventHandler
	EventFunction_1_t3185DCA90F112F51BD30605E3CE96271ECB077ED * ___OnTouchUpdatedEventHandler_144;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::RaiseOnTouchUpdatedPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___RaiseOnTouchUpdatedPerfMarker_145;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem::ProcessRulesInternalPerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___ProcessRulesInternalPerfMarker_146;

public:
	inline static int32_t get_offset_of_ExecuteHierarchyPerfMarker_20() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___ExecuteHierarchyPerfMarker_20)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ExecuteHierarchyPerfMarker_20() const { return ___ExecuteHierarchyPerfMarker_20; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ExecuteHierarchyPerfMarker_20() { return &___ExecuteHierarchyPerfMarker_20; }
	inline void set_ExecuteHierarchyPerfMarker_20(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ExecuteHierarchyPerfMarker_20 = value;
	}

	inline static int32_t get_offset_of_HandleEventPerfMarker_55() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___HandleEventPerfMarker_55)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_HandleEventPerfMarker_55() const { return ___HandleEventPerfMarker_55; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_HandleEventPerfMarker_55() { return &___HandleEventPerfMarker_55; }
	inline void set_HandleEventPerfMarker_55(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___HandleEventPerfMarker_55 = value;
	}

	inline static int32_t get_offset_of_HandleFocusChangedEventsPerfMarker_56() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___HandleFocusChangedEventsPerfMarker_56)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_HandleFocusChangedEventsPerfMarker_56() const { return ___HandleFocusChangedEventsPerfMarker_56; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_HandleFocusChangedEventsPerfMarker_56() { return &___HandleFocusChangedEventsPerfMarker_56; }
	inline void set_HandleFocusChangedEventsPerfMarker_56(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___HandleFocusChangedEventsPerfMarker_56 = value;
	}

	inline static int32_t get_offset_of_HandleFocusEventPerfMarker_57() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___HandleFocusEventPerfMarker_57)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_HandleFocusEventPerfMarker_57() const { return ___HandleFocusEventPerfMarker_57; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_HandleFocusEventPerfMarker_57() { return &___HandleFocusEventPerfMarker_57; }
	inline void set_HandleFocusEventPerfMarker_57(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___HandleFocusEventPerfMarker_57 = value;
	}

	inline static int32_t get_offset_of_HandlePointerEventPerfMarker_58() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___HandlePointerEventPerfMarker_58)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_HandlePointerEventPerfMarker_58() const { return ___HandlePointerEventPerfMarker_58; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_HandlePointerEventPerfMarker_58() { return &___HandlePointerEventPerfMarker_58; }
	inline void set_HandlePointerEventPerfMarker_58(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___HandlePointerEventPerfMarker_58 = value;
	}

	inline static int32_t get_offset_of_DispatchEventToGlobalListenersPerfMarker_59() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___DispatchEventToGlobalListenersPerfMarker_59)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DispatchEventToGlobalListenersPerfMarker_59() const { return ___DispatchEventToGlobalListenersPerfMarker_59; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DispatchEventToGlobalListenersPerfMarker_59() { return &___DispatchEventToGlobalListenersPerfMarker_59; }
	inline void set_DispatchEventToGlobalListenersPerfMarker_59(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DispatchEventToGlobalListenersPerfMarker_59 = value;
	}

	inline static int32_t get_offset_of_DispatchEventToFallbackHandlersPerfMarker_60() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___DispatchEventToFallbackHandlersPerfMarker_60)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DispatchEventToFallbackHandlersPerfMarker_60() const { return ___DispatchEventToFallbackHandlersPerfMarker_60; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DispatchEventToFallbackHandlersPerfMarker_60() { return &___DispatchEventToFallbackHandlersPerfMarker_60; }
	inline void set_DispatchEventToFallbackHandlersPerfMarker_60(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DispatchEventToFallbackHandlersPerfMarker_60 = value;
	}

	inline static int32_t get_offset_of_DispatchEventToObjectFocusedPerfMarker_61() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___DispatchEventToObjectFocusedPerfMarker_61)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DispatchEventToObjectFocusedPerfMarker_61() const { return ___DispatchEventToObjectFocusedPerfMarker_61; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DispatchEventToObjectFocusedPerfMarker_61() { return &___DispatchEventToObjectFocusedPerfMarker_61; }
	inline void set_DispatchEventToObjectFocusedPerfMarker_61(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DispatchEventToObjectFocusedPerfMarker_61 = value;
	}

	inline static int32_t get_offset_of_DispatchModalEventPerfMarker_62() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___DispatchModalEventPerfMarker_62)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_DispatchModalEventPerfMarker_62() const { return ___DispatchModalEventPerfMarker_62; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_DispatchModalEventPerfMarker_62() { return &___DispatchModalEventPerfMarker_62; }
	inline void set_DispatchModalEventPerfMarker_62(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___DispatchModalEventPerfMarker_62 = value;
	}

	inline static int32_t get_offset_of_RaiseSourceDetectedPerfMarker_63() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseSourceDetectedPerfMarker_63)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourceDetectedPerfMarker_63() const { return ___RaiseSourceDetectedPerfMarker_63; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourceDetectedPerfMarker_63() { return &___RaiseSourceDetectedPerfMarker_63; }
	inline void set_RaiseSourceDetectedPerfMarker_63(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourceDetectedPerfMarker_63 = value;
	}

	inline static int32_t get_offset_of_OnSourceDetectedEventHandler_64() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnSourceDetectedEventHandler_64)); }
	inline EventFunction_1_tC25248F4120420D70DBE7C0E2CE8203E96093880 * get_OnSourceDetectedEventHandler_64() const { return ___OnSourceDetectedEventHandler_64; }
	inline EventFunction_1_tC25248F4120420D70DBE7C0E2CE8203E96093880 ** get_address_of_OnSourceDetectedEventHandler_64() { return &___OnSourceDetectedEventHandler_64; }
	inline void set_OnSourceDetectedEventHandler_64(EventFunction_1_tC25248F4120420D70DBE7C0E2CE8203E96093880 * value)
	{
		___OnSourceDetectedEventHandler_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourceDetectedEventHandler_64), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseSourceLostPerfMarker_65() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseSourceLostPerfMarker_65)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourceLostPerfMarker_65() const { return ___RaiseSourceLostPerfMarker_65; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourceLostPerfMarker_65() { return &___RaiseSourceLostPerfMarker_65; }
	inline void set_RaiseSourceLostPerfMarker_65(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourceLostPerfMarker_65 = value;
	}

	inline static int32_t get_offset_of_OnSourceLostEventHandler_66() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnSourceLostEventHandler_66)); }
	inline EventFunction_1_tC25248F4120420D70DBE7C0E2CE8203E96093880 * get_OnSourceLostEventHandler_66() const { return ___OnSourceLostEventHandler_66; }
	inline EventFunction_1_tC25248F4120420D70DBE7C0E2CE8203E96093880 ** get_address_of_OnSourceLostEventHandler_66() { return &___OnSourceLostEventHandler_66; }
	inline void set_OnSourceLostEventHandler_66(EventFunction_1_tC25248F4120420D70DBE7C0E2CE8203E96093880 * value)
	{
		___OnSourceLostEventHandler_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourceLostEventHandler_66), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseSourceTrackingStateChangedPerfMarker_67() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseSourceTrackingStateChangedPerfMarker_67)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourceTrackingStateChangedPerfMarker_67() const { return ___RaiseSourceTrackingStateChangedPerfMarker_67; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourceTrackingStateChangedPerfMarker_67() { return &___RaiseSourceTrackingStateChangedPerfMarker_67; }
	inline void set_RaiseSourceTrackingStateChangedPerfMarker_67(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourceTrackingStateChangedPerfMarker_67 = value;
	}

	inline static int32_t get_offset_of_OnSourceTrackingChangedEventHandler_68() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnSourceTrackingChangedEventHandler_68)); }
	inline EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * get_OnSourceTrackingChangedEventHandler_68() const { return ___OnSourceTrackingChangedEventHandler_68; }
	inline EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 ** get_address_of_OnSourceTrackingChangedEventHandler_68() { return &___OnSourceTrackingChangedEventHandler_68; }
	inline void set_OnSourceTrackingChangedEventHandler_68(EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * value)
	{
		___OnSourceTrackingChangedEventHandler_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourceTrackingChangedEventHandler_68), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseSourcePositionChangedPerfMarker_69() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseSourcePositionChangedPerfMarker_69)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourcePositionChangedPerfMarker_69() const { return ___RaiseSourcePositionChangedPerfMarker_69; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourcePositionChangedPerfMarker_69() { return &___RaiseSourcePositionChangedPerfMarker_69; }
	inline void set_RaiseSourcePositionChangedPerfMarker_69(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourcePositionChangedPerfMarker_69 = value;
	}

	inline static int32_t get_offset_of_OnSourcePoseVector2ChangedEventHandler_70() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnSourcePoseVector2ChangedEventHandler_70)); }
	inline EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * get_OnSourcePoseVector2ChangedEventHandler_70() const { return ___OnSourcePoseVector2ChangedEventHandler_70; }
	inline EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 ** get_address_of_OnSourcePoseVector2ChangedEventHandler_70() { return &___OnSourcePoseVector2ChangedEventHandler_70; }
	inline void set_OnSourcePoseVector2ChangedEventHandler_70(EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * value)
	{
		___OnSourcePoseVector2ChangedEventHandler_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourcePoseVector2ChangedEventHandler_70), (void*)value);
	}

	inline static int32_t get_offset_of_OnSourcePositionChangedEventHandler_71() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnSourcePositionChangedEventHandler_71)); }
	inline EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * get_OnSourcePositionChangedEventHandler_71() const { return ___OnSourcePositionChangedEventHandler_71; }
	inline EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 ** get_address_of_OnSourcePositionChangedEventHandler_71() { return &___OnSourcePositionChangedEventHandler_71; }
	inline void set_OnSourcePositionChangedEventHandler_71(EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * value)
	{
		___OnSourcePositionChangedEventHandler_71 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourcePositionChangedEventHandler_71), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseSourceRotationChangedPerfMarker_72() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseSourceRotationChangedPerfMarker_72)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourceRotationChangedPerfMarker_72() const { return ___RaiseSourceRotationChangedPerfMarker_72; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourceRotationChangedPerfMarker_72() { return &___RaiseSourceRotationChangedPerfMarker_72; }
	inline void set_RaiseSourceRotationChangedPerfMarker_72(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourceRotationChangedPerfMarker_72 = value;
	}

	inline static int32_t get_offset_of_OnSourceRotationChangedEventHandler_73() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnSourceRotationChangedEventHandler_73)); }
	inline EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * get_OnSourceRotationChangedEventHandler_73() const { return ___OnSourceRotationChangedEventHandler_73; }
	inline EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 ** get_address_of_OnSourceRotationChangedEventHandler_73() { return &___OnSourceRotationChangedEventHandler_73; }
	inline void set_OnSourceRotationChangedEventHandler_73(EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * value)
	{
		___OnSourceRotationChangedEventHandler_73 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourceRotationChangedEventHandler_73), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseSourcePoseChangedPerfMarker_74() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseSourcePoseChangedPerfMarker_74)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSourcePoseChangedPerfMarker_74() const { return ___RaiseSourcePoseChangedPerfMarker_74; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSourcePoseChangedPerfMarker_74() { return &___RaiseSourcePoseChangedPerfMarker_74; }
	inline void set_RaiseSourcePoseChangedPerfMarker_74(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSourcePoseChangedPerfMarker_74 = value;
	}

	inline static int32_t get_offset_of_OnSourcePoseChangedEventHandler_75() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnSourcePoseChangedEventHandler_75)); }
	inline EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * get_OnSourcePoseChangedEventHandler_75() const { return ___OnSourcePoseChangedEventHandler_75; }
	inline EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 ** get_address_of_OnSourcePoseChangedEventHandler_75() { return &___OnSourcePoseChangedEventHandler_75; }
	inline void set_OnSourcePoseChangedEventHandler_75(EventFunction_1_t05251661A765ED51CE66112F1A5F0603BE33C9B6 * value)
	{
		___OnSourcePoseChangedEventHandler_75 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSourcePoseChangedEventHandler_75), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePreFocusChangedPerfMarker_76() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaisePreFocusChangedPerfMarker_76)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePreFocusChangedPerfMarker_76() const { return ___RaisePreFocusChangedPerfMarker_76; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePreFocusChangedPerfMarker_76() { return &___RaisePreFocusChangedPerfMarker_76; }
	inline void set_RaisePreFocusChangedPerfMarker_76(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePreFocusChangedPerfMarker_76 = value;
	}

	inline static int32_t get_offset_of_OnPreFocusChangedHandler_77() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnPreFocusChangedHandler_77)); }
	inline EventFunction_1_t2717B4BEEC8F13851D1A3B0BD2C00F24A0D7B3F5 * get_OnPreFocusChangedHandler_77() const { return ___OnPreFocusChangedHandler_77; }
	inline EventFunction_1_t2717B4BEEC8F13851D1A3B0BD2C00F24A0D7B3F5 ** get_address_of_OnPreFocusChangedHandler_77() { return &___OnPreFocusChangedHandler_77; }
	inline void set_OnPreFocusChangedHandler_77(EventFunction_1_t2717B4BEEC8F13851D1A3B0BD2C00F24A0D7B3F5 * value)
	{
		___OnPreFocusChangedHandler_77 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreFocusChangedHandler_77), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseFocusChangedPerfMarker_78() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseFocusChangedPerfMarker_78)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseFocusChangedPerfMarker_78() const { return ___RaiseFocusChangedPerfMarker_78; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseFocusChangedPerfMarker_78() { return &___RaiseFocusChangedPerfMarker_78; }
	inline void set_RaiseFocusChangedPerfMarker_78(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseFocusChangedPerfMarker_78 = value;
	}

	inline static int32_t get_offset_of_OnFocusChangedHandler_79() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnFocusChangedHandler_79)); }
	inline EventFunction_1_t2717B4BEEC8F13851D1A3B0BD2C00F24A0D7B3F5 * get_OnFocusChangedHandler_79() const { return ___OnFocusChangedHandler_79; }
	inline EventFunction_1_t2717B4BEEC8F13851D1A3B0BD2C00F24A0D7B3F5 ** get_address_of_OnFocusChangedHandler_79() { return &___OnFocusChangedHandler_79; }
	inline void set_OnFocusChangedHandler_79(EventFunction_1_t2717B4BEEC8F13851D1A3B0BD2C00F24A0D7B3F5 * value)
	{
		___OnFocusChangedHandler_79 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFocusChangedHandler_79), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseFocusEnterPerfMarker_80() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseFocusEnterPerfMarker_80)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseFocusEnterPerfMarker_80() const { return ___RaiseFocusEnterPerfMarker_80; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseFocusEnterPerfMarker_80() { return &___RaiseFocusEnterPerfMarker_80; }
	inline void set_RaiseFocusEnterPerfMarker_80(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseFocusEnterPerfMarker_80 = value;
	}

	inline static int32_t get_offset_of_OnFocusEnterEventHandler_81() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnFocusEnterEventHandler_81)); }
	inline EventFunction_1_t8A66D1428C54D47DE7C3767C8336D7D738E4CFD7 * get_OnFocusEnterEventHandler_81() const { return ___OnFocusEnterEventHandler_81; }
	inline EventFunction_1_t8A66D1428C54D47DE7C3767C8336D7D738E4CFD7 ** get_address_of_OnFocusEnterEventHandler_81() { return &___OnFocusEnterEventHandler_81; }
	inline void set_OnFocusEnterEventHandler_81(EventFunction_1_t8A66D1428C54D47DE7C3767C8336D7D738E4CFD7 * value)
	{
		___OnFocusEnterEventHandler_81 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFocusEnterEventHandler_81), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseFocusExitPerfMarker_82() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseFocusExitPerfMarker_82)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseFocusExitPerfMarker_82() const { return ___RaiseFocusExitPerfMarker_82; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseFocusExitPerfMarker_82() { return &___RaiseFocusExitPerfMarker_82; }
	inline void set_RaiseFocusExitPerfMarker_82(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseFocusExitPerfMarker_82 = value;
	}

	inline static int32_t get_offset_of_OnFocusExitEventHandler_83() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnFocusExitEventHandler_83)); }
	inline EventFunction_1_t8A66D1428C54D47DE7C3767C8336D7D738E4CFD7 * get_OnFocusExitEventHandler_83() const { return ___OnFocusExitEventHandler_83; }
	inline EventFunction_1_t8A66D1428C54D47DE7C3767C8336D7D738E4CFD7 ** get_address_of_OnFocusExitEventHandler_83() { return &___OnFocusExitEventHandler_83; }
	inline void set_OnFocusExitEventHandler_83(EventFunction_1_t8A66D1428C54D47DE7C3767C8336D7D738E4CFD7 * value)
	{
		___OnFocusExitEventHandler_83 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFocusExitEventHandler_83), (void*)value);
	}

	inline static int32_t get_offset_of_OnPointerDownEventHandler_84() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnPointerDownEventHandler_84)); }
	inline EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 * get_OnPointerDownEventHandler_84() const { return ___OnPointerDownEventHandler_84; }
	inline EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 ** get_address_of_OnPointerDownEventHandler_84() { return &___OnPointerDownEventHandler_84; }
	inline void set_OnPointerDownEventHandler_84(EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 * value)
	{
		___OnPointerDownEventHandler_84 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPointerDownEventHandler_84), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePointerDownPerfMarker_85() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaisePointerDownPerfMarker_85)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePointerDownPerfMarker_85() const { return ___RaisePointerDownPerfMarker_85; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePointerDownPerfMarker_85() { return &___RaisePointerDownPerfMarker_85; }
	inline void set_RaisePointerDownPerfMarker_85(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePointerDownPerfMarker_85 = value;
	}

	inline static int32_t get_offset_of_OnPointerDraggedEventHandler_86() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnPointerDraggedEventHandler_86)); }
	inline EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 * get_OnPointerDraggedEventHandler_86() const { return ___OnPointerDraggedEventHandler_86; }
	inline EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 ** get_address_of_OnPointerDraggedEventHandler_86() { return &___OnPointerDraggedEventHandler_86; }
	inline void set_OnPointerDraggedEventHandler_86(EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 * value)
	{
		___OnPointerDraggedEventHandler_86 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPointerDraggedEventHandler_86), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePointerDraggedPerfMarker_87() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaisePointerDraggedPerfMarker_87)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePointerDraggedPerfMarker_87() const { return ___RaisePointerDraggedPerfMarker_87; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePointerDraggedPerfMarker_87() { return &___RaisePointerDraggedPerfMarker_87; }
	inline void set_RaisePointerDraggedPerfMarker_87(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePointerDraggedPerfMarker_87 = value;
	}

	inline static int32_t get_offset_of_OnInputClickedEventHandler_88() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnInputClickedEventHandler_88)); }
	inline EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 * get_OnInputClickedEventHandler_88() const { return ___OnInputClickedEventHandler_88; }
	inline EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 ** get_address_of_OnInputClickedEventHandler_88() { return &___OnInputClickedEventHandler_88; }
	inline void set_OnInputClickedEventHandler_88(EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 * value)
	{
		___OnInputClickedEventHandler_88 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInputClickedEventHandler_88), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePointerClickedPerfMarker_89() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaisePointerClickedPerfMarker_89)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePointerClickedPerfMarker_89() const { return ___RaisePointerClickedPerfMarker_89; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePointerClickedPerfMarker_89() { return &___RaisePointerClickedPerfMarker_89; }
	inline void set_RaisePointerClickedPerfMarker_89(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePointerClickedPerfMarker_89 = value;
	}

	inline static int32_t get_offset_of_OnPointerUpEventHandler_90() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnPointerUpEventHandler_90)); }
	inline EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 * get_OnPointerUpEventHandler_90() const { return ___OnPointerUpEventHandler_90; }
	inline EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 ** get_address_of_OnPointerUpEventHandler_90() { return &___OnPointerUpEventHandler_90; }
	inline void set_OnPointerUpEventHandler_90(EventFunction_1_t191CD85F892D8F6FD8E3BE624390A0EDDDCEAA59 * value)
	{
		___OnPointerUpEventHandler_90 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPointerUpEventHandler_90), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePointerUpPerfMarker_91() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaisePointerUpPerfMarker_91)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePointerUpPerfMarker_91() const { return ___RaisePointerUpPerfMarker_91; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePointerUpPerfMarker_91() { return &___RaisePointerUpPerfMarker_91; }
	inline void set_RaisePointerUpPerfMarker_91(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePointerUpPerfMarker_91 = value;
	}

	inline static int32_t get_offset_of_OnInputDownEventHandler_92() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnInputDownEventHandler_92)); }
	inline EventFunction_1_t6A301BBD7AE53D439749F7D768B738644EEE54F4 * get_OnInputDownEventHandler_92() const { return ___OnInputDownEventHandler_92; }
	inline EventFunction_1_t6A301BBD7AE53D439749F7D768B738644EEE54F4 ** get_address_of_OnInputDownEventHandler_92() { return &___OnInputDownEventHandler_92; }
	inline void set_OnInputDownEventHandler_92(EventFunction_1_t6A301BBD7AE53D439749F7D768B738644EEE54F4 * value)
	{
		___OnInputDownEventHandler_92 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInputDownEventHandler_92), (void*)value);
	}

	inline static int32_t get_offset_of_OnInputDownWithActionEventHandler_93() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnInputDownWithActionEventHandler_93)); }
	inline EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * get_OnInputDownWithActionEventHandler_93() const { return ___OnInputDownWithActionEventHandler_93; }
	inline EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A ** get_address_of_OnInputDownWithActionEventHandler_93() { return &___OnInputDownWithActionEventHandler_93; }
	inline void set_OnInputDownWithActionEventHandler_93(EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * value)
	{
		___OnInputDownWithActionEventHandler_93 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInputDownWithActionEventHandler_93), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseOnInputDownPerfMarker_94() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseOnInputDownPerfMarker_94)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseOnInputDownPerfMarker_94() const { return ___RaiseOnInputDownPerfMarker_94; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseOnInputDownPerfMarker_94() { return &___RaiseOnInputDownPerfMarker_94; }
	inline void set_RaiseOnInputDownPerfMarker_94(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseOnInputDownPerfMarker_94 = value;
	}

	inline static int32_t get_offset_of_OnInputUpEventHandler_95() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnInputUpEventHandler_95)); }
	inline EventFunction_1_t6A301BBD7AE53D439749F7D768B738644EEE54F4 * get_OnInputUpEventHandler_95() const { return ___OnInputUpEventHandler_95; }
	inline EventFunction_1_t6A301BBD7AE53D439749F7D768B738644EEE54F4 ** get_address_of_OnInputUpEventHandler_95() { return &___OnInputUpEventHandler_95; }
	inline void set_OnInputUpEventHandler_95(EventFunction_1_t6A301BBD7AE53D439749F7D768B738644EEE54F4 * value)
	{
		___OnInputUpEventHandler_95 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInputUpEventHandler_95), (void*)value);
	}

	inline static int32_t get_offset_of_OnInputUpWithActionEventHandler_96() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnInputUpWithActionEventHandler_96)); }
	inline EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * get_OnInputUpWithActionEventHandler_96() const { return ___OnInputUpWithActionEventHandler_96; }
	inline EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A ** get_address_of_OnInputUpWithActionEventHandler_96() { return &___OnInputUpWithActionEventHandler_96; }
	inline void set_OnInputUpWithActionEventHandler_96(EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * value)
	{
		___OnInputUpWithActionEventHandler_96 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInputUpWithActionEventHandler_96), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseOnInputUpPerfMarker_97() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseOnInputUpPerfMarker_97)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseOnInputUpPerfMarker_97() const { return ___RaiseOnInputUpPerfMarker_97; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseOnInputUpPerfMarker_97() { return &___RaiseOnInputUpPerfMarker_97; }
	inline void set_RaiseOnInputUpPerfMarker_97(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseOnInputUpPerfMarker_97 = value;
	}

	inline static int32_t get_offset_of_OnFloatInputChanged_98() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnFloatInputChanged_98)); }
	inline EventFunction_1_tE53387E5C9435C87B00E3776C1284FACDAF828DD * get_OnFloatInputChanged_98() const { return ___OnFloatInputChanged_98; }
	inline EventFunction_1_tE53387E5C9435C87B00E3776C1284FACDAF828DD ** get_address_of_OnFloatInputChanged_98() { return &___OnFloatInputChanged_98; }
	inline void set_OnFloatInputChanged_98(EventFunction_1_tE53387E5C9435C87B00E3776C1284FACDAF828DD * value)
	{
		___OnFloatInputChanged_98 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFloatInputChanged_98), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseFloatInputChangedPerfMarker_99() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseFloatInputChangedPerfMarker_99)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseFloatInputChangedPerfMarker_99() const { return ___RaiseFloatInputChangedPerfMarker_99; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseFloatInputChangedPerfMarker_99() { return &___RaiseFloatInputChangedPerfMarker_99; }
	inline void set_RaiseFloatInputChangedPerfMarker_99(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseFloatInputChangedPerfMarker_99 = value;
	}

	inline static int32_t get_offset_of_OnTwoDoFInputChanged_100() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnTwoDoFInputChanged_100)); }
	inline EventFunction_1_tBDD479D195AB503216CA2C141279707876E2CE6B * get_OnTwoDoFInputChanged_100() const { return ___OnTwoDoFInputChanged_100; }
	inline EventFunction_1_tBDD479D195AB503216CA2C141279707876E2CE6B ** get_address_of_OnTwoDoFInputChanged_100() { return &___OnTwoDoFInputChanged_100; }
	inline void set_OnTwoDoFInputChanged_100(EventFunction_1_tBDD479D195AB503216CA2C141279707876E2CE6B * value)
	{
		___OnTwoDoFInputChanged_100 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTwoDoFInputChanged_100), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePositionInputChangedPerfMarker_101() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaisePositionInputChangedPerfMarker_101)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePositionInputChangedPerfMarker_101() const { return ___RaisePositionInputChangedPerfMarker_101; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePositionInputChangedPerfMarker_101() { return &___RaisePositionInputChangedPerfMarker_101; }
	inline void set_RaisePositionInputChangedPerfMarker_101(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePositionInputChangedPerfMarker_101 = value;
	}

	inline static int32_t get_offset_of_OnPositionInputChanged_102() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnPositionInputChanged_102)); }
	inline EventFunction_1_t0A490D6A60344ECB31239B80D7A64B857DECE37A * get_OnPositionInputChanged_102() const { return ___OnPositionInputChanged_102; }
	inline EventFunction_1_t0A490D6A60344ECB31239B80D7A64B857DECE37A ** get_address_of_OnPositionInputChanged_102() { return &___OnPositionInputChanged_102; }
	inline void set_OnPositionInputChanged_102(EventFunction_1_t0A490D6A60344ECB31239B80D7A64B857DECE37A * value)
	{
		___OnPositionInputChanged_102 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPositionInputChanged_102), (void*)value);
	}

	inline static int32_t get_offset_of_OnRotationInputChanged_103() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnRotationInputChanged_103)); }
	inline EventFunction_1_tC82499C2264931E95E922A73BE558B8B1000DEBF * get_OnRotationInputChanged_103() const { return ___OnRotationInputChanged_103; }
	inline EventFunction_1_tC82499C2264931E95E922A73BE558B8B1000DEBF ** get_address_of_OnRotationInputChanged_103() { return &___OnRotationInputChanged_103; }
	inline void set_OnRotationInputChanged_103(EventFunction_1_tC82499C2264931E95E922A73BE558B8B1000DEBF * value)
	{
		___OnRotationInputChanged_103 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRotationInputChanged_103), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseRotationInputChangedPerfMarker_104() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseRotationInputChangedPerfMarker_104)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseRotationInputChangedPerfMarker_104() const { return ___RaiseRotationInputChangedPerfMarker_104; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseRotationInputChangedPerfMarker_104() { return &___RaiseRotationInputChangedPerfMarker_104; }
	inline void set_RaiseRotationInputChangedPerfMarker_104(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseRotationInputChangedPerfMarker_104 = value;
	}

	inline static int32_t get_offset_of_OnPoseInputChanged_105() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnPoseInputChanged_105)); }
	inline EventFunction_1_t1560006E71599AFE4A68DB24BD17A244C2C42B5E * get_OnPoseInputChanged_105() const { return ___OnPoseInputChanged_105; }
	inline EventFunction_1_t1560006E71599AFE4A68DB24BD17A244C2C42B5E ** get_address_of_OnPoseInputChanged_105() { return &___OnPoseInputChanged_105; }
	inline void set_OnPoseInputChanged_105(EventFunction_1_t1560006E71599AFE4A68DB24BD17A244C2C42B5E * value)
	{
		___OnPoseInputChanged_105 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPoseInputChanged_105), (void*)value);
	}

	inline static int32_t get_offset_of_RaisePoseInputChangedPerfMarker_106() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaisePoseInputChangedPerfMarker_106)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaisePoseInputChangedPerfMarker_106() const { return ___RaisePoseInputChangedPerfMarker_106; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaisePoseInputChangedPerfMarker_106() { return &___RaisePoseInputChangedPerfMarker_106; }
	inline void set_RaisePoseInputChangedPerfMarker_106(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaisePoseInputChangedPerfMarker_106 = value;
	}

	inline static int32_t get_offset_of_OnGestureStarted_107() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnGestureStarted_107)); }
	inline EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB * get_OnGestureStarted_107() const { return ___OnGestureStarted_107; }
	inline EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB ** get_address_of_OnGestureStarted_107() { return &___OnGestureStarted_107; }
	inline void set_OnGestureStarted_107(EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB * value)
	{
		___OnGestureStarted_107 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureStarted_107), (void*)value);
	}

	inline static int32_t get_offset_of_OnGestureStartedWithAction_108() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnGestureStartedWithAction_108)); }
	inline EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * get_OnGestureStartedWithAction_108() const { return ___OnGestureStartedWithAction_108; }
	inline EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A ** get_address_of_OnGestureStartedWithAction_108() { return &___OnGestureStartedWithAction_108; }
	inline void set_OnGestureStartedWithAction_108(EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * value)
	{
		___OnGestureStartedWithAction_108 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureStartedWithAction_108), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseGestureStartedPerfMarker_109() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseGestureStartedPerfMarker_109)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseGestureStartedPerfMarker_109() const { return ___RaiseGestureStartedPerfMarker_109; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseGestureStartedPerfMarker_109() { return &___RaiseGestureStartedPerfMarker_109; }
	inline void set_RaiseGestureStartedPerfMarker_109(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseGestureStartedPerfMarker_109 = value;
	}

	inline static int32_t get_offset_of_OnGestureUpdated_110() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnGestureUpdated_110)); }
	inline EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB * get_OnGestureUpdated_110() const { return ___OnGestureUpdated_110; }
	inline EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB ** get_address_of_OnGestureUpdated_110() { return &___OnGestureUpdated_110; }
	inline void set_OnGestureUpdated_110(EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB * value)
	{
		___OnGestureUpdated_110 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureUpdated_110), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseGestureUpdatedPerfMarker_111() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseGestureUpdatedPerfMarker_111)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseGestureUpdatedPerfMarker_111() const { return ___RaiseGestureUpdatedPerfMarker_111; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseGestureUpdatedPerfMarker_111() { return &___RaiseGestureUpdatedPerfMarker_111; }
	inline void set_RaiseGestureUpdatedPerfMarker_111(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseGestureUpdatedPerfMarker_111 = value;
	}

	inline static int32_t get_offset_of_OnGestureVector2PositionUpdated_112() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnGestureVector2PositionUpdated_112)); }
	inline EventFunction_1_tE5C222AE72719E5202DC74DF6E9F245C703FA987 * get_OnGestureVector2PositionUpdated_112() const { return ___OnGestureVector2PositionUpdated_112; }
	inline EventFunction_1_tE5C222AE72719E5202DC74DF6E9F245C703FA987 ** get_address_of_OnGestureVector2PositionUpdated_112() { return &___OnGestureVector2PositionUpdated_112; }
	inline void set_OnGestureVector2PositionUpdated_112(EventFunction_1_tE5C222AE72719E5202DC74DF6E9F245C703FA987 * value)
	{
		___OnGestureVector2PositionUpdated_112 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureVector2PositionUpdated_112), (void*)value);
	}

	inline static int32_t get_offset_of_OnGesturePositionUpdated_113() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnGesturePositionUpdated_113)); }
	inline EventFunction_1_t76159F6E13D48C7588ADA8FE915484A89BCBD0AC * get_OnGesturePositionUpdated_113() const { return ___OnGesturePositionUpdated_113; }
	inline EventFunction_1_t76159F6E13D48C7588ADA8FE915484A89BCBD0AC ** get_address_of_OnGesturePositionUpdated_113() { return &___OnGesturePositionUpdated_113; }
	inline void set_OnGesturePositionUpdated_113(EventFunction_1_t76159F6E13D48C7588ADA8FE915484A89BCBD0AC * value)
	{
		___OnGesturePositionUpdated_113 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGesturePositionUpdated_113), (void*)value);
	}

	inline static int32_t get_offset_of_OnGestureRotationUpdated_114() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnGestureRotationUpdated_114)); }
	inline EventFunction_1_t9D9637F452B6DE98AB382482491DC9DD5A47CC5D * get_OnGestureRotationUpdated_114() const { return ___OnGestureRotationUpdated_114; }
	inline EventFunction_1_t9D9637F452B6DE98AB382482491DC9DD5A47CC5D ** get_address_of_OnGestureRotationUpdated_114() { return &___OnGestureRotationUpdated_114; }
	inline void set_OnGestureRotationUpdated_114(EventFunction_1_t9D9637F452B6DE98AB382482491DC9DD5A47CC5D * value)
	{
		___OnGestureRotationUpdated_114 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureRotationUpdated_114), (void*)value);
	}

	inline static int32_t get_offset_of_OnGesturePoseUpdated_115() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnGesturePoseUpdated_115)); }
	inline EventFunction_1_t0F9FDBA279A6B752B2CB31C8D5A4E5BE54438A68 * get_OnGesturePoseUpdated_115() const { return ___OnGesturePoseUpdated_115; }
	inline EventFunction_1_t0F9FDBA279A6B752B2CB31C8D5A4E5BE54438A68 ** get_address_of_OnGesturePoseUpdated_115() { return &___OnGesturePoseUpdated_115; }
	inline void set_OnGesturePoseUpdated_115(EventFunction_1_t0F9FDBA279A6B752B2CB31C8D5A4E5BE54438A68 * value)
	{
		___OnGesturePoseUpdated_115 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGesturePoseUpdated_115), (void*)value);
	}

	inline static int32_t get_offset_of_OnGestureCompleted_116() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnGestureCompleted_116)); }
	inline EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB * get_OnGestureCompleted_116() const { return ___OnGestureCompleted_116; }
	inline EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB ** get_address_of_OnGestureCompleted_116() { return &___OnGestureCompleted_116; }
	inline void set_OnGestureCompleted_116(EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB * value)
	{
		___OnGestureCompleted_116 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureCompleted_116), (void*)value);
	}

	inline static int32_t get_offset_of_OnGestureCompletedWithAction_117() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnGestureCompletedWithAction_117)); }
	inline EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * get_OnGestureCompletedWithAction_117() const { return ___OnGestureCompletedWithAction_117; }
	inline EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A ** get_address_of_OnGestureCompletedWithAction_117() { return &___OnGestureCompletedWithAction_117; }
	inline void set_OnGestureCompletedWithAction_117(EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * value)
	{
		___OnGestureCompletedWithAction_117 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureCompletedWithAction_117), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseGestureCompletedPerfMarker_118() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseGestureCompletedPerfMarker_118)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseGestureCompletedPerfMarker_118() const { return ___RaiseGestureCompletedPerfMarker_118; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseGestureCompletedPerfMarker_118() { return &___RaiseGestureCompletedPerfMarker_118; }
	inline void set_RaiseGestureCompletedPerfMarker_118(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseGestureCompletedPerfMarker_118 = value;
	}

	inline static int32_t get_offset_of_OnGestureVector2PositionCompleted_119() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnGestureVector2PositionCompleted_119)); }
	inline EventFunction_1_tE5C222AE72719E5202DC74DF6E9F245C703FA987 * get_OnGestureVector2PositionCompleted_119() const { return ___OnGestureVector2PositionCompleted_119; }
	inline EventFunction_1_tE5C222AE72719E5202DC74DF6E9F245C703FA987 ** get_address_of_OnGestureVector2PositionCompleted_119() { return &___OnGestureVector2PositionCompleted_119; }
	inline void set_OnGestureVector2PositionCompleted_119(EventFunction_1_tE5C222AE72719E5202DC74DF6E9F245C703FA987 * value)
	{
		___OnGestureVector2PositionCompleted_119 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureVector2PositionCompleted_119), (void*)value);
	}

	inline static int32_t get_offset_of_OnGesturePositionCompleted_120() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnGesturePositionCompleted_120)); }
	inline EventFunction_1_t76159F6E13D48C7588ADA8FE915484A89BCBD0AC * get_OnGesturePositionCompleted_120() const { return ___OnGesturePositionCompleted_120; }
	inline EventFunction_1_t76159F6E13D48C7588ADA8FE915484A89BCBD0AC ** get_address_of_OnGesturePositionCompleted_120() { return &___OnGesturePositionCompleted_120; }
	inline void set_OnGesturePositionCompleted_120(EventFunction_1_t76159F6E13D48C7588ADA8FE915484A89BCBD0AC * value)
	{
		___OnGesturePositionCompleted_120 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGesturePositionCompleted_120), (void*)value);
	}

	inline static int32_t get_offset_of_OnGestureRotationCompleted_121() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnGestureRotationCompleted_121)); }
	inline EventFunction_1_t9D9637F452B6DE98AB382482491DC9DD5A47CC5D * get_OnGestureRotationCompleted_121() const { return ___OnGestureRotationCompleted_121; }
	inline EventFunction_1_t9D9637F452B6DE98AB382482491DC9DD5A47CC5D ** get_address_of_OnGestureRotationCompleted_121() { return &___OnGestureRotationCompleted_121; }
	inline void set_OnGestureRotationCompleted_121(EventFunction_1_t9D9637F452B6DE98AB382482491DC9DD5A47CC5D * value)
	{
		___OnGestureRotationCompleted_121 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureRotationCompleted_121), (void*)value);
	}

	inline static int32_t get_offset_of_OnGesturePoseCompleted_122() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnGesturePoseCompleted_122)); }
	inline EventFunction_1_t0F9FDBA279A6B752B2CB31C8D5A4E5BE54438A68 * get_OnGesturePoseCompleted_122() const { return ___OnGesturePoseCompleted_122; }
	inline EventFunction_1_t0F9FDBA279A6B752B2CB31C8D5A4E5BE54438A68 ** get_address_of_OnGesturePoseCompleted_122() { return &___OnGesturePoseCompleted_122; }
	inline void set_OnGesturePoseCompleted_122(EventFunction_1_t0F9FDBA279A6B752B2CB31C8D5A4E5BE54438A68 * value)
	{
		___OnGesturePoseCompleted_122 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGesturePoseCompleted_122), (void*)value);
	}

	inline static int32_t get_offset_of_OnGestureCanceled_123() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnGestureCanceled_123)); }
	inline EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB * get_OnGestureCanceled_123() const { return ___OnGestureCanceled_123; }
	inline EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB ** get_address_of_OnGestureCanceled_123() { return &___OnGestureCanceled_123; }
	inline void set_OnGestureCanceled_123(EventFunction_1_tE5F82287C6D4A21CDAE028149AF64699BF70A7AB * value)
	{
		___OnGestureCanceled_123 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnGestureCanceled_123), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseGestureCanceledPerfMarker_124() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseGestureCanceledPerfMarker_124)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseGestureCanceledPerfMarker_124() const { return ___RaiseGestureCanceledPerfMarker_124; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseGestureCanceledPerfMarker_124() { return &___RaiseGestureCanceledPerfMarker_124; }
	inline void set_RaiseGestureCanceledPerfMarker_124(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseGestureCanceledPerfMarker_124 = value;
	}

	inline static int32_t get_offset_of_OnSpeechKeywordRecognizedEventHandler_125() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnSpeechKeywordRecognizedEventHandler_125)); }
	inline EventFunction_1_t6A1B7B8EE1A910A06AEC85165DE92D36EADF88E6 * get_OnSpeechKeywordRecognizedEventHandler_125() const { return ___OnSpeechKeywordRecognizedEventHandler_125; }
	inline EventFunction_1_t6A1B7B8EE1A910A06AEC85165DE92D36EADF88E6 ** get_address_of_OnSpeechKeywordRecognizedEventHandler_125() { return &___OnSpeechKeywordRecognizedEventHandler_125; }
	inline void set_OnSpeechKeywordRecognizedEventHandler_125(EventFunction_1_t6A1B7B8EE1A910A06AEC85165DE92D36EADF88E6 * value)
	{
		___OnSpeechKeywordRecognizedEventHandler_125 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSpeechKeywordRecognizedEventHandler_125), (void*)value);
	}

	inline static int32_t get_offset_of_OnSpeechKeywordRecognizedWithActionEventHandler_126() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnSpeechKeywordRecognizedWithActionEventHandler_126)); }
	inline EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * get_OnSpeechKeywordRecognizedWithActionEventHandler_126() const { return ___OnSpeechKeywordRecognizedWithActionEventHandler_126; }
	inline EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A ** get_address_of_OnSpeechKeywordRecognizedWithActionEventHandler_126() { return &___OnSpeechKeywordRecognizedWithActionEventHandler_126; }
	inline void set_OnSpeechKeywordRecognizedWithActionEventHandler_126(EventFunction_1_t1E6C4AB2D098276BEC9F0A49619C6EDC926F087A * value)
	{
		___OnSpeechKeywordRecognizedWithActionEventHandler_126 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSpeechKeywordRecognizedWithActionEventHandler_126), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseSpeechCommandRecognizedPerfMarker_127() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseSpeechCommandRecognizedPerfMarker_127)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseSpeechCommandRecognizedPerfMarker_127() const { return ___RaiseSpeechCommandRecognizedPerfMarker_127; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseSpeechCommandRecognizedPerfMarker_127() { return &___RaiseSpeechCommandRecognizedPerfMarker_127; }
	inline void set_RaiseSpeechCommandRecognizedPerfMarker_127(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseSpeechCommandRecognizedPerfMarker_127 = value;
	}

	inline static int32_t get_offset_of_OnDictationHypothesisEventHandler_128() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnDictationHypothesisEventHandler_128)); }
	inline EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 * get_OnDictationHypothesisEventHandler_128() const { return ___OnDictationHypothesisEventHandler_128; }
	inline EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 ** get_address_of_OnDictationHypothesisEventHandler_128() { return &___OnDictationHypothesisEventHandler_128; }
	inline void set_OnDictationHypothesisEventHandler_128(EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 * value)
	{
		___OnDictationHypothesisEventHandler_128 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDictationHypothesisEventHandler_128), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseDictationHypothesisPerfMarker_129() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseDictationHypothesisPerfMarker_129)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseDictationHypothesisPerfMarker_129() const { return ___RaiseDictationHypothesisPerfMarker_129; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseDictationHypothesisPerfMarker_129() { return &___RaiseDictationHypothesisPerfMarker_129; }
	inline void set_RaiseDictationHypothesisPerfMarker_129(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseDictationHypothesisPerfMarker_129 = value;
	}

	inline static int32_t get_offset_of_OnDictationResultEventHandler_130() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnDictationResultEventHandler_130)); }
	inline EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 * get_OnDictationResultEventHandler_130() const { return ___OnDictationResultEventHandler_130; }
	inline EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 ** get_address_of_OnDictationResultEventHandler_130() { return &___OnDictationResultEventHandler_130; }
	inline void set_OnDictationResultEventHandler_130(EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 * value)
	{
		___OnDictationResultEventHandler_130 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDictationResultEventHandler_130), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseDictationResultPerfMarker_131() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseDictationResultPerfMarker_131)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseDictationResultPerfMarker_131() const { return ___RaiseDictationResultPerfMarker_131; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseDictationResultPerfMarker_131() { return &___RaiseDictationResultPerfMarker_131; }
	inline void set_RaiseDictationResultPerfMarker_131(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseDictationResultPerfMarker_131 = value;
	}

	inline static int32_t get_offset_of_OnDictationCompleteEventHandler_132() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnDictationCompleteEventHandler_132)); }
	inline EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 * get_OnDictationCompleteEventHandler_132() const { return ___OnDictationCompleteEventHandler_132; }
	inline EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 ** get_address_of_OnDictationCompleteEventHandler_132() { return &___OnDictationCompleteEventHandler_132; }
	inline void set_OnDictationCompleteEventHandler_132(EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 * value)
	{
		___OnDictationCompleteEventHandler_132 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDictationCompleteEventHandler_132), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseDictationCompletePerfMarker_133() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseDictationCompletePerfMarker_133)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseDictationCompletePerfMarker_133() const { return ___RaiseDictationCompletePerfMarker_133; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseDictationCompletePerfMarker_133() { return &___RaiseDictationCompletePerfMarker_133; }
	inline void set_RaiseDictationCompletePerfMarker_133(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseDictationCompletePerfMarker_133 = value;
	}

	inline static int32_t get_offset_of_OnDictationErrorEventHandler_134() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnDictationErrorEventHandler_134)); }
	inline EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 * get_OnDictationErrorEventHandler_134() const { return ___OnDictationErrorEventHandler_134; }
	inline EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 ** get_address_of_OnDictationErrorEventHandler_134() { return &___OnDictationErrorEventHandler_134; }
	inline void set_OnDictationErrorEventHandler_134(EventFunction_1_t8A9AF280CA686C0240B13FBE0EAE3923DACD5985 * value)
	{
		___OnDictationErrorEventHandler_134 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDictationErrorEventHandler_134), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseDictationErrorPerfMarker_135() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseDictationErrorPerfMarker_135)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseDictationErrorPerfMarker_135() const { return ___RaiseDictationErrorPerfMarker_135; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseDictationErrorPerfMarker_135() { return &___RaiseDictationErrorPerfMarker_135; }
	inline void set_RaiseDictationErrorPerfMarker_135(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseDictationErrorPerfMarker_135 = value;
	}

	inline static int32_t get_offset_of_OnHandJointsUpdatedEventHandler_136() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnHandJointsUpdatedEventHandler_136)); }
	inline EventFunction_1_tC180EC34C0F84626214501D36C59A6D96F3BAE9A * get_OnHandJointsUpdatedEventHandler_136() const { return ___OnHandJointsUpdatedEventHandler_136; }
	inline EventFunction_1_tC180EC34C0F84626214501D36C59A6D96F3BAE9A ** get_address_of_OnHandJointsUpdatedEventHandler_136() { return &___OnHandJointsUpdatedEventHandler_136; }
	inline void set_OnHandJointsUpdatedEventHandler_136(EventFunction_1_tC180EC34C0F84626214501D36C59A6D96F3BAE9A * value)
	{
		___OnHandJointsUpdatedEventHandler_136 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnHandJointsUpdatedEventHandler_136), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseHandJointsUpdatedPerfMarker_137() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseHandJointsUpdatedPerfMarker_137)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseHandJointsUpdatedPerfMarker_137() const { return ___RaiseHandJointsUpdatedPerfMarker_137; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseHandJointsUpdatedPerfMarker_137() { return &___RaiseHandJointsUpdatedPerfMarker_137; }
	inline void set_RaiseHandJointsUpdatedPerfMarker_137(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseHandJointsUpdatedPerfMarker_137 = value;
	}

	inline static int32_t get_offset_of_OnHandMeshUpdatedEventHandler_138() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnHandMeshUpdatedEventHandler_138)); }
	inline EventFunction_1_tDA972648D941D55D8F76F1DF59415693FAE31F4A * get_OnHandMeshUpdatedEventHandler_138() const { return ___OnHandMeshUpdatedEventHandler_138; }
	inline EventFunction_1_tDA972648D941D55D8F76F1DF59415693FAE31F4A ** get_address_of_OnHandMeshUpdatedEventHandler_138() { return &___OnHandMeshUpdatedEventHandler_138; }
	inline void set_OnHandMeshUpdatedEventHandler_138(EventFunction_1_tDA972648D941D55D8F76F1DF59415693FAE31F4A * value)
	{
		___OnHandMeshUpdatedEventHandler_138 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnHandMeshUpdatedEventHandler_138), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseHandMeshUpdatedPerfMarker_139() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseHandMeshUpdatedPerfMarker_139)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseHandMeshUpdatedPerfMarker_139() const { return ___RaiseHandMeshUpdatedPerfMarker_139; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseHandMeshUpdatedPerfMarker_139() { return &___RaiseHandMeshUpdatedPerfMarker_139; }
	inline void set_RaiseHandMeshUpdatedPerfMarker_139(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseHandMeshUpdatedPerfMarker_139 = value;
	}

	inline static int32_t get_offset_of_OnTouchStartedEventHandler_140() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnTouchStartedEventHandler_140)); }
	inline EventFunction_1_t3185DCA90F112F51BD30605E3CE96271ECB077ED * get_OnTouchStartedEventHandler_140() const { return ___OnTouchStartedEventHandler_140; }
	inline EventFunction_1_t3185DCA90F112F51BD30605E3CE96271ECB077ED ** get_address_of_OnTouchStartedEventHandler_140() { return &___OnTouchStartedEventHandler_140; }
	inline void set_OnTouchStartedEventHandler_140(EventFunction_1_t3185DCA90F112F51BD30605E3CE96271ECB077ED * value)
	{
		___OnTouchStartedEventHandler_140 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTouchStartedEventHandler_140), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseOnTouchStartedPerfMarker_141() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseOnTouchStartedPerfMarker_141)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseOnTouchStartedPerfMarker_141() const { return ___RaiseOnTouchStartedPerfMarker_141; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseOnTouchStartedPerfMarker_141() { return &___RaiseOnTouchStartedPerfMarker_141; }
	inline void set_RaiseOnTouchStartedPerfMarker_141(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseOnTouchStartedPerfMarker_141 = value;
	}

	inline static int32_t get_offset_of_OnTouchCompletedEventHandler_142() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnTouchCompletedEventHandler_142)); }
	inline EventFunction_1_t3185DCA90F112F51BD30605E3CE96271ECB077ED * get_OnTouchCompletedEventHandler_142() const { return ___OnTouchCompletedEventHandler_142; }
	inline EventFunction_1_t3185DCA90F112F51BD30605E3CE96271ECB077ED ** get_address_of_OnTouchCompletedEventHandler_142() { return &___OnTouchCompletedEventHandler_142; }
	inline void set_OnTouchCompletedEventHandler_142(EventFunction_1_t3185DCA90F112F51BD30605E3CE96271ECB077ED * value)
	{
		___OnTouchCompletedEventHandler_142 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTouchCompletedEventHandler_142), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseOnTouchCompletedPerfMarker_143() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseOnTouchCompletedPerfMarker_143)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseOnTouchCompletedPerfMarker_143() const { return ___RaiseOnTouchCompletedPerfMarker_143; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseOnTouchCompletedPerfMarker_143() { return &___RaiseOnTouchCompletedPerfMarker_143; }
	inline void set_RaiseOnTouchCompletedPerfMarker_143(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseOnTouchCompletedPerfMarker_143 = value;
	}

	inline static int32_t get_offset_of_OnTouchUpdatedEventHandler_144() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___OnTouchUpdatedEventHandler_144)); }
	inline EventFunction_1_t3185DCA90F112F51BD30605E3CE96271ECB077ED * get_OnTouchUpdatedEventHandler_144() const { return ___OnTouchUpdatedEventHandler_144; }
	inline EventFunction_1_t3185DCA90F112F51BD30605E3CE96271ECB077ED ** get_address_of_OnTouchUpdatedEventHandler_144() { return &___OnTouchUpdatedEventHandler_144; }
	inline void set_OnTouchUpdatedEventHandler_144(EventFunction_1_t3185DCA90F112F51BD30605E3CE96271ECB077ED * value)
	{
		___OnTouchUpdatedEventHandler_144 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTouchUpdatedEventHandler_144), (void*)value);
	}

	inline static int32_t get_offset_of_RaiseOnTouchUpdatedPerfMarker_145() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___RaiseOnTouchUpdatedPerfMarker_145)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_RaiseOnTouchUpdatedPerfMarker_145() const { return ___RaiseOnTouchUpdatedPerfMarker_145; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_RaiseOnTouchUpdatedPerfMarker_145() { return &___RaiseOnTouchUpdatedPerfMarker_145; }
	inline void set_RaiseOnTouchUpdatedPerfMarker_145(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___RaiseOnTouchUpdatedPerfMarker_145 = value;
	}

	inline static int32_t get_offset_of_ProcessRulesInternalPerfMarker_146() { return static_cast<int32_t>(offsetof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_StaticFields, ___ProcessRulesInternalPerfMarker_146)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_ProcessRulesInternalPerfMarker_146() const { return ___ProcessRulesInternalPerfMarker_146; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_ProcessRulesInternalPerfMarker_146() { return &___ProcessRulesInternalPerfMarker_146; }
	inline void set_ProcessRulesInternalPerfMarker_146(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___ProcessRulesInternalPerfMarker_146 = value;
	}
};


// Microsoft.Maps.Unity.MapRenderer
struct MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8  : public MapRendererBase_t91B2D56F302DFF171A31E0329EB37D827EDCB35E
{
public:
	// Microsoft.Maps.Unity.MapColliderType Microsoft.Maps.Unity.MapRenderer::_mapColliderType
	int32_t ____mapColliderType_141;
	// Microsoft.Maps.Unity.MapColliderType Microsoft.Maps.Unity.MapRenderer::_previousMapColliderType
	int32_t ____previousMapColliderType_142;
	// UnityEngine.Collider Microsoft.Maps.Unity.MapRenderer::_mapCollider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ____mapCollider_143;
	// UnityEngine.BoxCollider Microsoft.Maps.Unity.MapRenderer::_mapBoxCollider
	BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * ____mapBoxCollider_144;
	// Microsoft.Maps.Unity.IMapSceneAnimationController Microsoft.Maps.Unity.MapRenderer::_activeMapSceneAnimationController
	RuntimeObject* ____activeMapSceneAnimationController_145;
	// System.Boolean Microsoft.Maps.Unity.MapRenderer::_checkChildMapPins
	bool ____checkChildMapPins_146;
	// System.Collections.Generic.HashSet`1<Microsoft.Maps.Unity.MapPin> Microsoft.Maps.Unity.MapRenderer::_mapPinChildrenSet
	HashSet_1_t95A5C57A7B9892EBF521BC2C19F0EB9258FB974E * ____mapPinChildrenSet_147;
	// System.Collections.Generic.List`1<Microsoft.Maps.Unity.MapPin> Microsoft.Maps.Unity.MapRenderer::_lastMapPinsInView
	List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 * ____lastMapPinsInView_148;
	// System.Collections.Generic.List`1<Microsoft.Maps.Unity.MapPin> Microsoft.Maps.Unity.MapRenderer::_mapPinsInView
	List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 * ____mapPinsInView_149;
	// System.Collections.Generic.HashSet`1<Microsoft.Maps.Unity.MapPin> Microsoft.Maps.Unity.MapRenderer::_currentChildrenMapPins
	HashSet_1_t95A5C57A7B9892EBF521BC2C19F0EB9258FB974E * ____currentChildrenMapPins_150;
	// System.Collections.Generic.List`1<Microsoft.Maps.Unity.MapPin> Microsoft.Maps.Unity.MapRenderer::_mapPinChildrenToRemove
	List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 * ____mapPinChildrenToRemove_151;
	// System.EventHandler Microsoft.Maps.Unity.MapRenderer::AfterUpdate
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___AfterUpdate_152;

public:
	inline static int32_t get_offset_of__mapColliderType_141() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____mapColliderType_141)); }
	inline int32_t get__mapColliderType_141() const { return ____mapColliderType_141; }
	inline int32_t* get_address_of__mapColliderType_141() { return &____mapColliderType_141; }
	inline void set__mapColliderType_141(int32_t value)
	{
		____mapColliderType_141 = value;
	}

	inline static int32_t get_offset_of__previousMapColliderType_142() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____previousMapColliderType_142)); }
	inline int32_t get__previousMapColliderType_142() const { return ____previousMapColliderType_142; }
	inline int32_t* get_address_of__previousMapColliderType_142() { return &____previousMapColliderType_142; }
	inline void set__previousMapColliderType_142(int32_t value)
	{
		____previousMapColliderType_142 = value;
	}

	inline static int32_t get_offset_of__mapCollider_143() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____mapCollider_143)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get__mapCollider_143() const { return ____mapCollider_143; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of__mapCollider_143() { return &____mapCollider_143; }
	inline void set__mapCollider_143(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		____mapCollider_143 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mapCollider_143), (void*)value);
	}

	inline static int32_t get_offset_of__mapBoxCollider_144() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____mapBoxCollider_144)); }
	inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * get__mapBoxCollider_144() const { return ____mapBoxCollider_144; }
	inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 ** get_address_of__mapBoxCollider_144() { return &____mapBoxCollider_144; }
	inline void set__mapBoxCollider_144(BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * value)
	{
		____mapBoxCollider_144 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mapBoxCollider_144), (void*)value);
	}

	inline static int32_t get_offset_of__activeMapSceneAnimationController_145() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____activeMapSceneAnimationController_145)); }
	inline RuntimeObject* get__activeMapSceneAnimationController_145() const { return ____activeMapSceneAnimationController_145; }
	inline RuntimeObject** get_address_of__activeMapSceneAnimationController_145() { return &____activeMapSceneAnimationController_145; }
	inline void set__activeMapSceneAnimationController_145(RuntimeObject* value)
	{
		____activeMapSceneAnimationController_145 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeMapSceneAnimationController_145), (void*)value);
	}

	inline static int32_t get_offset_of__checkChildMapPins_146() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____checkChildMapPins_146)); }
	inline bool get__checkChildMapPins_146() const { return ____checkChildMapPins_146; }
	inline bool* get_address_of__checkChildMapPins_146() { return &____checkChildMapPins_146; }
	inline void set__checkChildMapPins_146(bool value)
	{
		____checkChildMapPins_146 = value;
	}

	inline static int32_t get_offset_of__mapPinChildrenSet_147() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____mapPinChildrenSet_147)); }
	inline HashSet_1_t95A5C57A7B9892EBF521BC2C19F0EB9258FB974E * get__mapPinChildrenSet_147() const { return ____mapPinChildrenSet_147; }
	inline HashSet_1_t95A5C57A7B9892EBF521BC2C19F0EB9258FB974E ** get_address_of__mapPinChildrenSet_147() { return &____mapPinChildrenSet_147; }
	inline void set__mapPinChildrenSet_147(HashSet_1_t95A5C57A7B9892EBF521BC2C19F0EB9258FB974E * value)
	{
		____mapPinChildrenSet_147 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mapPinChildrenSet_147), (void*)value);
	}

	inline static int32_t get_offset_of__lastMapPinsInView_148() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____lastMapPinsInView_148)); }
	inline List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 * get__lastMapPinsInView_148() const { return ____lastMapPinsInView_148; }
	inline List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 ** get_address_of__lastMapPinsInView_148() { return &____lastMapPinsInView_148; }
	inline void set__lastMapPinsInView_148(List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 * value)
	{
		____lastMapPinsInView_148 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastMapPinsInView_148), (void*)value);
	}

	inline static int32_t get_offset_of__mapPinsInView_149() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____mapPinsInView_149)); }
	inline List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 * get__mapPinsInView_149() const { return ____mapPinsInView_149; }
	inline List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 ** get_address_of__mapPinsInView_149() { return &____mapPinsInView_149; }
	inline void set__mapPinsInView_149(List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 * value)
	{
		____mapPinsInView_149 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mapPinsInView_149), (void*)value);
	}

	inline static int32_t get_offset_of__currentChildrenMapPins_150() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____currentChildrenMapPins_150)); }
	inline HashSet_1_t95A5C57A7B9892EBF521BC2C19F0EB9258FB974E * get__currentChildrenMapPins_150() const { return ____currentChildrenMapPins_150; }
	inline HashSet_1_t95A5C57A7B9892EBF521BC2C19F0EB9258FB974E ** get_address_of__currentChildrenMapPins_150() { return &____currentChildrenMapPins_150; }
	inline void set__currentChildrenMapPins_150(HashSet_1_t95A5C57A7B9892EBF521BC2C19F0EB9258FB974E * value)
	{
		____currentChildrenMapPins_150 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentChildrenMapPins_150), (void*)value);
	}

	inline static int32_t get_offset_of__mapPinChildrenToRemove_151() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ____mapPinChildrenToRemove_151)); }
	inline List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 * get__mapPinChildrenToRemove_151() const { return ____mapPinChildrenToRemove_151; }
	inline List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 ** get_address_of__mapPinChildrenToRemove_151() { return &____mapPinChildrenToRemove_151; }
	inline void set__mapPinChildrenToRemove_151(List_1_tBC711E4CCB3E0F1ABBDE453B730C5BCF35116115 * value)
	{
		____mapPinChildrenToRemove_151 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mapPinChildrenToRemove_151), (void*)value);
	}

	inline static int32_t get_offset_of_AfterUpdate_152() { return static_cast<int32_t>(offsetof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8, ___AfterUpdate_152)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_AfterUpdate_152() const { return ___AfterUpdate_152; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_AfterUpdate_152() { return &___AfterUpdate_152; }
	inline void set_AfterUpdate_152(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___AfterUpdate_152 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AfterUpdate_152), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);


// System.Byte System.Int32::System.IConvertible.ToByte(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Int32_System_IConvertible_ToByte_mF20DC676FA2B16FA587B48C46126FF3A510FC2FE (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int16 System.Int32::System.IConvertible.ToInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Int32_System_IConvertible_ToInt16_m546AEA11867A3FB43C753862D37C5E5D903A998A (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt16 System.Int32::System.IConvertible.ToUInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Int32_System_IConvertible_ToUInt16_m4F02D84F201B3DD4F14E0DB290FFDF6484186C1D (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt32 System.Int32::System.IConvertible.ToUInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Int32_System_IConvertible_ToUInt32_m32F7902EB35E916E5066F4F8F2A62C9EE4625F61 (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Int64 System.Int32::System.IConvertible.ToInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Int32_System_IConvertible_ToInt64_m8D333A53E7A5D76D06626647D5C323E3D7DEAF7F (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.UInt64 System.Int32::System.IConvertible.ToUInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Int32_System_IConvertible_ToUInt64_m624D1F3CF0A12FE5BA34183B454C4E87C4CA92F8 (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Single System.Int32::System.IConvertible.ToSingle(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Int32_System_IConvertible_ToSingle_mA4658FD9FC83A12B7A9F9D5C3663354BA768D12B (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.Double System.Int32::System.IConvertible.ToDouble(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Int32_System_IConvertible_ToDouble_mBE6FF400E38A132D26CA5C073F5DF78446C0FED1 (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);

// COM Callable Wrapper for System.Net.WebSockets.ManagedWebSocket
struct ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ManagedWebSocket_t3EE532001ABAA2367AA3AE4B1301B3BC4B1B1393_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.ManualResetEventSlim
struct ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ManualResetEventSlim_tDEDF52539E364C425BA581F3AAF42843AFAD366E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for MapRaycastProvider
struct MapRaycastProvider_t05A94D4749F82A250A4D8BD35FCB88FB5E770989_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MapRaycastProvider_t05A94D4749F82A250A4D8BD35FCB88FB5E770989_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MapRaycastProvider_t05A94D4749F82A250A4D8BD35FCB88FB5E770989_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MapRaycastProvider_t05A94D4749F82A250A4D8BD35FCB88FB5E770989_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MapRaycastProvider_t05A94D4749F82A250A4D8BD35FCB88FB5E770989(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MapRaycastProvider_t05A94D4749F82A250A4D8BD35FCB88FB5E770989_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MapRaycastProvider_t05A94D4749F82A250A4D8BD35FCB88FB5E770989_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.Maps.Unity.MapRenderer
struct MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MapRenderer_t26CF43E91112EA1256E31C561A03BEFD268A2FF8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.ComponentModel.MarshalByValueComponent
struct MarshalByValueComponent_t932153909102130DE1C7FE6F988139CD9FEF2E3D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MarshalByValueComponent_t932153909102130DE1C7FE6F988139CD9FEF2E3D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MarshalByValueComponent_t932153909102130DE1C7FE6F988139CD9FEF2E3D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MarshalByValueComponent_t932153909102130DE1C7FE6F988139CD9FEF2E3D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MarshalByValueComponent_t932153909102130DE1C7FE6F988139CD9FEF2E3D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MarshalByValueComponent_t932153909102130DE1C7FE6F988139CD9FEF2E3D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MarshalByValueComponent_t932153909102130DE1C7FE6F988139CD9FEF2E3D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.Metadata.MarshalingType
struct MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_ComCallableWrapper>, IReference_1_t073FCE60E00DC1FDAB8ACFF11F7AE2A9BA6F6D92, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_t073FCE60E00DC1FDAB8ACFF11F7AE2A9BA6F6D92::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t073FCE60E00DC1FDAB8ACFF11F7AE2A9BA6F6D92*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_t073FCE60E00DC1FDAB8ACFF11F7AE2A9BA6F6D92::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mB021045389972057F5036B2BEAF48C63CC75C2E0(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 20;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = true;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint8_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Byte");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
			}

			try
			{
				uint8_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToByte_mF20DC676FA2B16FA587B48C46126FF3A510FC2FE((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Byte");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int16_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
			try
			{
				int16_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToInt16_m546AEA11867A3FB43C753862D37C5E5D903A998A((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Int16");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint16_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt16");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
			}

			try
			{
				uint16_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToUInt16_m4F02D84F201B3DD4F14E0DB290FFDF6484186C1D((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt16");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt32");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
			}

			try
			{
				uint32_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToUInt32_m32F7902EB35E916E5066F4F8F2A62C9EE4625F61((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt32");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int64_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
			try
			{
				int64_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToInt64_m8D333A53E7A5D76D06626647D5C323E3D7DEAF7F((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Int64");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint64_t returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
			if (value < 0)
			{
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt64");
				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
			}

			try
			{
				uint64_t il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToUInt64_m624D1F3CF0A12FE5BA34183B454C4E87C4CA92F8((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "UInt64");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		float returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
			try
			{
				float il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToSingle_mA4658FD9FC83A12B7A9F9D5C3663354BA768D12B((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Single");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		double returnValue;
		try
		{
			int32_t value = *static_cast<int32_t*>(UnBox(GetManagedObjectInline(), MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_il2cpp_TypeInfo_var));
			try
			{
				double il2cppRetVal;
				il2cppRetVal = Int32_System_IConvertible_ToDouble_mBE6FF400E38A132D26CA5C073F5DF78446C0FED1((&value), NULL, NULL);
				returnValue = il2cppRetVal;
			}
			catch (const Il2CppExceptionWrapper& ex)
			{
				if (IsInst((RuntimeObject*)ex.ex, OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var))
				{
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion(GetManagedObjectInline(), "Other", "Double");
					return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
				}

				return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
			}
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MarshalingType_tBE6DC276644A260EFDCCF934C24310BD36FACB05_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Text.RegularExpressions.MatchCollection
struct MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatchCollection_tC2C84E59658F73C90FD36007DE73C869BADEFF3E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Numerics.Matrix4x4
struct Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_ComCallableWrapper>, IReference_1_t97B2873C86B7742F03D17D1D0BC7B456F90D09E2, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_t97B2873C86B7742F03D17D1D0BC7B456F90D09E2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t97B2873C86B7742F03D17D1D0BC7B456F90D09E2*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_t97B2873C86B7742F03D17D1D0BC7B456F90D09E2::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mA1E3E5D81B89D3EA702FD87A063F5C5CBDD3949B(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  returnValue;
		try
		{
			returnValue = *static_cast<Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 *>(UnBox(GetManagedObjectInline(), Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 20;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Windows.Foundation.Numerics.Matrix4x4
struct Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper>, IReference_1_t8A0A795D67A1984F24F971A8C797A86DDD5FD8D4, IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8
{
	inline Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IReference_1_t8A0A795D67A1984F24F971A8C797A86DDD5FD8D4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IReference_1_t8A0A795D67A1984F24F971A8C797A86DDD5FD8D4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IReference_1_t8A0A795D67A1984F24F971A8C797A86DDD5FD8D4::IID;
		interfaceIds[1] = IPropertyValue_t2D61E5557FBCC9F0476CC32B5738B21EFFA483E8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mB1385E16B3DF2EBB57B6A2953C5ACFFB0F57E766(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82 * comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82  returnValue;
		try
		{
			returnValue = *static_cast<Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82 *>(UnBox(GetManagedObjectInline(), Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_il2cpp_TypeInfo_var));
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m2BC440F5119A133BE4DD895657519ADAA3B34272(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			returnValue = 20;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_mC8DE97926668A5F2EA3F4A9B128E966CBC7B0D60(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			returnValue = false;
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m25D96C5F9AC133BF7B682C59FE83EE05A0075B05(uint8_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_mBE4A7DC8A2B92F83EE058AE7515E84DADFA206AE(int16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_mCF513D800195CA7050FD5AFB4E710FB0CFB531B5(uint16_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_mDE5543C20D3D3C9E773CB6EDBDBC789D12CC59BA(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_mD48C2097876EAE6D1E218D9123F58F168B374205(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4BAC154BEC3584DF3E34EDA6033EEF3DB6D4132E(int64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m981379F85C0C44EDBDD830A293693BE0BB3F62CA(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_mED031D57B17B0F7BD3B4B250821D070155889F1F(float* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_mA0880A7E89CE09C2639D6F8065B18E8F77EB082F(double* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m7B2226E30F72B0CCAE54B8EDB1AC4ACF1BE860A8(Il2CppChar* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m21FCEEA690B32CD86A36D40FB837FC7D894D5587(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m8D5702E4E1C67366D65DA23CA2812D6572DF819C(Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m885F2850B49DB4B046564BC5FE414256801D9A11(Guid_t * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m023A766ED6FC58B347CF6F777F5C18C6AE246A3C(DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTime");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m063CE76264EDAF37A1DA3CA5C9CF4AF85D8FC239(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m014D5E859273BA28DE642E38438EDCC64AB5C41B(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m0A952D186E59BEA03E6185EDEBAC26D544AFADAC(Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m0A96600149C7E6A493B8420CB316938AEF9A1A06(Rect_tC45F1DDF39812623644DE296D8057A4958176627 * comReturnValue) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m540E0503D8CFAE2579D449884B6AA883509C79D1(uint32_t* ___value0ArraySize, uint8_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Byte[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m279C289854DE8A2D45A6B6B09112DD9D2F0DF849(uint32_t* ___value0ArraySize, int16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m090AA712F6BB39F869BCC5CB90236377EE8673B1(uint32_t* ___value0ArraySize, uint16_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_mADF499B8CD16185128795A7B74D63E8CFE692B9A(uint32_t* ___value0ArraySize, int32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m9B44B8D2EA2907A9A96ED653ACEF04873D9483F8(uint32_t* ___value0ArraySize, uint32_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt32[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m9A04AC5F477463928280B42E2C40F13B15A1D564(uint32_t* ___value0ArraySize, int64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Int64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m776484C9C41D5A03991D89401FF84F9D425D6A5E(uint32_t* ___value0ArraySize, uint64_t** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "UInt64[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m1E9CE76FA942B3AFA8995FBAE605E84733917B57(uint32_t* ___value0ArraySize, float** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Single[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m5DAB086BEB4816CAF7553E325B91A4B0B07953A5(uint32_t* ___value0ArraySize, double** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Double[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m2C69248F68D7705FE44FA8F777B061FA77C706A1(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Char16[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m083CB5579BC465B4D1BD84CE8382CB747A9FCC8C(uint32_t* ___value0ArraySize, bool** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Boolean[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m680617C6226187D28C4978B710AFBB8581AAC98F(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "String[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m6DCBE370A8CAC129E6D6BD91C6503D14A8109F79(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Inspectable[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_mE9983D9B5EE9AC1935C3EBD2F9E82DC7188E1D07(uint32_t* ___value0ArraySize, Guid_t ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Guid[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_mEECFC6C321405CDBC425D321E2A8EF3E7BC306A7(uint32_t* ___value0ArraySize, DateTime_t7C967DBDDE4CAEAA8B5AEB61E36309BCD7D26B8C ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "DateTimeOffset[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_mEAF3CA18AA928DAF3046F0F530B9324711650167(uint32_t* ___value0ArraySize, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "TimeSpan[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_mD4ACB0F49C7BFEC1C03A4EE4263B23B2040CECD0(uint32_t* ___value0ArraySize, Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Point[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m3C079B4191330FAC3B2131D308C825BC72A5F0DC(uint32_t* ___value0ArraySize, Size_tDA924E69AB75296FE3B5E81811B78FD56173BB92 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Size[]");
	}

	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m09598924D31716E1E653AE941186F8B16EA11A87(uint32_t* ___value0ArraySize, Rect_tC45F1DDF39812623644DE296D8057A4958176627 ** ___value0) IL2CPP_OVERRIDE
	{
		return il2cpp_codegen_com_handle_invalid_iproperty_conversion("Other", "Rect[]");
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Matrix4x4_tCA3F3FDAF7C260FCEFC8AE7347180927246F3D82_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.AspNetCore.Internal.MemoryBufferWriter
struct MemoryBufferWriter_tB8B5606805E392BA65EA3A3B7AD167D47E16CBF7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MemoryBufferWriter_tB8B5606805E392BA65EA3A3B7AD167D47E16CBF7_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MemoryBufferWriter_tB8B5606805E392BA65EA3A3B7AD167D47E16CBF7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MemoryBufferWriter_tB8B5606805E392BA65EA3A3B7AD167D47E16CBF7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MemoryBufferWriter_tB8B5606805E392BA65EA3A3B7AD167D47E16CBF7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MemoryBufferWriter_tB8B5606805E392BA65EA3A3B7AD167D47E16CBF7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MemoryBufferWriter_tB8B5606805E392BA65EA3A3B7AD167D47E16CBF7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Buffers.MemoryHandle
struct MemoryHandle_tF1C21894564B908B077B28F482F188FC96B60A09_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MemoryHandle_tF1C21894564B908B077B28F482F188FC96B60A09_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MemoryHandle_tF1C21894564B908B077B28F482F188FC96B60A09_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MemoryHandle_tF1C21894564B908B077B28F482F188FC96B60A09_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MemoryHandle_tF1C21894564B908B077B28F482F188FC96B60A09(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MemoryHandle_tF1C21894564B908B077B28F482F188FC96B60A09_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MemoryHandle_tF1C21894564B908B077B28F482F188FC96B60A09_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.Remoting.Messaging.MessageDictionary
struct MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MessageDictionary_tF87E1D8408337642172945A13C9C116D7F9336BE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for MessagePack.MessagePackStreamReader
struct MessagePackStreamReader_t88B2D757E1A7D63091590D050E6D29C2A04F6968_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MessagePackStreamReader_t88B2D757E1A7D63091590D050E6D29C2A04F6968_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MessagePackStreamReader_t88B2D757E1A7D63091590D050E6D29C2A04F6968_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MessagePackStreamReader_t88B2D757E1A7D63091590D050E6D29C2A04F6968_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MessagePackStreamReader_t88B2D757E1A7D63091590D050E6D29C2A04F6968(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MessagePackStreamReader_t88B2D757E1A7D63091590D050E6D29C2A04F6968_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MessagePackStreamReader_t88B2D757E1A7D63091590D050E6D29C2A04F6968_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.Remoting.Messaging.MethodReturnDictionary
struct MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MethodReturnDictionary_tCD3B3B0F69F53EF7653CB5E6B175628E8FD54531_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.CameraSystem.MixedRealityCameraSystem
struct MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MixedRealityCameraSystem_tD4D74C89F72748EA3F923ED0ED967446BBADB8E2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsSystem
struct MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MixedRealityDiagnosticsSystem_tAD79F9737797FEE70B538678C16953869B02D1A9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystem
struct MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MixedRealityInputSystem_t12584C0C9736E4FF6EDED0BBC9E5A02BC0E7B3BC_ComCallableWrapper(obj));
}
