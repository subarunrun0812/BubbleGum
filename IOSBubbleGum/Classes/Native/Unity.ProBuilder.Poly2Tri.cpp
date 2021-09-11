﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t20C0141C3FEEDAA44BFE8521FEEDDF47289CB40B;
// System.Collections.Generic.IComparer`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>
struct IComparer_1_t5BCAA455F11D855A995A6A7748773CA3014E9EDD;
// System.Collections.Generic.IEnumerable`1<System.Boolean>
struct IEnumerable_1_t90AD96F2C518D6F04343C83B67B02220C715C642;
// System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>
struct IEnumerable_1_t8CFD113C54A85A1997FD6674905E807BBA85833B;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint>
struct IEnumerable_1_tC2C32E7E96CAF186D7326EE305DAFC3670023CF4;
// System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>
struct IEnumerable_1_t4BC8F98836D180321DC651B0CD065216FC07E04D;
// System.Collections.Generic.IEnumerator`1<System.Boolean>
struct IEnumerator_1_tD64DA1873BBF65E545905171348E0241A3B706C0;
// System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>
struct IList_1_t988D4BEA088714B09B16B06BE4AE736CAE91A5A4;
// System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint>
struct IList_1_t8081622741A2A61654EBD18C3AEEFCE9160ACA4B;
// System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>
struct IList_1_t7CD12B58C86A48390E90F56BB8F2D5DB3CA0A07F;
// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint>
struct List_1_t4C92CD4575EFD7FEC3CBE8B7B36CE69C2466C90D;
// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>
struct List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.Polygon>
struct List_1_tFDD914A6846665E3B49FEB2E66168F9018B3DF51;
// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>
struct List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint[]
struct DTSweepConstraintU5BU5D_t4B5D235649CD6A7A5E68109DFBE4BD112CAC37D7;
// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle[]
struct DelaunayTriangleU5BU5D_tE57942425E29436EA94C91516DAE5123320DDD08;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.ProBuilder.Poly2Tri.Polygon[]
struct PolygonU5BU5D_t69AEC5891375A624CC9524CE7624512462D5D6C5;
// UnityEngine.ProBuilder.Poly2Tri.PolygonPoint[]
struct PolygonPointU5BU5D_t9EE452CC0ABCCCCDFEFA006759E88CE6642C00FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint[]
struct TriangulationPointU5BU5D_t7778F403D9EB133E662DAA5D92BB284476C489F2;
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFront
struct AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5;
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode
struct AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// UnityEngine.ProBuilder.Poly2Tri.DTSweepBasin
struct DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F;
// UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint
struct DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE;
// UnityEngine.ProBuilder.Poly2Tri.DTSweepContext
struct DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6;
// UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext
struct DTSweepDebugContext_t1118374B297F625192528B23AD580B5AB9F9EDF5;
// UnityEngine.ProBuilder.Poly2Tri.DTSweepEdgeEvent
struct DTSweepEdgeEvent_t93472178B8E22740677AF3E5D255F96392BB8453;
// UnityEngine.ProBuilder.Poly2Tri.DTSweepPointComparator
struct DTSweepPointComparator_tA06245D62FBBEE946B1A620CC845F88B08BFF9A0;
// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle
struct DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A;
// System.Exception
struct Exception_t;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerable
struct IEnumerable_t47A618747A1BB2A868710316F7372094849163A2;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.ProBuilder.Poly2Tri.PointOnEdgeException
struct PointOnEdgeException_t4386B844F234AEDBCA71E45B92DF52B24899056C;
// UnityEngine.ProBuilder.Poly2Tri.PointSet
struct PointSet_t28416B695BA46DA0157C11A570D5871D41DCBC18;
// UnityEngine.ProBuilder.Poly2Tri.Polygon
struct Polygon_tCBEEF355994B422EB6585B902F8011F753D0C87D;
// UnityEngine.ProBuilder.Poly2Tri.PolygonPoint
struct PolygonPoint_t65F05B806EA33FEE1AFFDB2DC71F5445B3A5DEB5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.ProBuilder.Poly2Tri.Triangulatable
struct Triangulatable_t1EF1514C47E7572EEC4ADFD43DA1E6AC901E73CD;
// UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint
struct TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A;
// UnityEngine.ProBuilder.Poly2Tri.TriangulationContext
struct TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B;
// UnityEngine.ProBuilder.Poly2Tri.TriangulationDebugContext
struct TriangulationDebugContext_tB2690A971C0344C60D9E4DEBC8819ADE2D29F397;
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint
struct TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/<Enumerate>d__10
struct U3CEnumerateU3Ed__10_tB632C8EC1E46E07540D45000AF54B403F3DD27F2;

IL2CPP_EXTERN_C RuntimeClass* AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DTSweepDebugContext_t1118374B297F625192528B23AD580B5AB9F9EDF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DTSweepEdgeEvent_t93472178B8E22740677AF3E5D255F96392BB8453_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DTSweepPointComparator_tA06245D62FBBEE946B1A620CC845F88B08BFF9A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t0F8B6613C5D06260B7600F59A5E468A6F0C038D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t7647C6C852686AD647C99D53DAC0DE61097ADD3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tF6BAE27469480F96B5F9D4CD92627B417C08C23F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t8CFD113C54A85A1997FD6674905E807BBA85833B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t90AD96F2C518D6F04343C83B67B02220C715C642_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t83947C1F4B7ED9BA57DA6F5D0A390CB519AC7E4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t8081622741A2A61654EBD18C3AEEFCE9160ACA4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4C92CD4575EFD7FEC3CBE8B7B36CE69C2466C90D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tFDD914A6846665E3B49FEB2E66168F9018B3DF51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointOnEdgeException_t4386B844F234AEDBCA71E45B92DF52B24899056C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Triangulatable_t1EF1514C47E7572EEC4ADFD43DA1E6AC901E73CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEnumerateU3Ed__10_tB632C8EC1E46E07540D45000AF54B403F3DD27F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07AC1B1D6E5B09CAD55868C0EBA7C2B6EB0B16DF;
IL2CPP_EXTERN_C String_t* _stringLiteral0A6129D3AF4D923F94C2DF172F5DA64D92B3C03C;
IL2CPP_EXTERN_C String_t* _stringLiteral114E73D2A801F90DEB8FCCBE8B4B66E2C796CDD2;
IL2CPP_EXTERN_C String_t* _stringLiteral17A7BA088490CA1D9307C4F7F07BDC92703EDF51;
IL2CPP_EXTERN_C String_t* _stringLiteral22ED5FCE4A7B9417FAA18E0C31983A86F0BDAD99;
IL2CPP_EXTERN_C String_t* _stringLiteral237443D40E51BEB792E3255884B17F5F2A070555;
IL2CPP_EXTERN_C String_t* _stringLiteral3860603B88C3C33FCEFF25F72FA3E650D2B25876;
IL2CPP_EXTERN_C String_t* _stringLiteral56FEC330311BE1770446499D7CC29C5DBA8485E8;
IL2CPP_EXTERN_C String_t* _stringLiteral656D304F364B477202FBF443F2948662EBAB895C;
IL2CPP_EXTERN_C String_t* _stringLiteral88EB854C80D13C1F40F616EE53A1381BFF41639B;
IL2CPP_EXTERN_C String_t* _stringLiteral9B56FA96FE55F4A5B70E48AF16D59739F6389D3C;
IL2CPP_EXTERN_C String_t* _stringLiteralA29C437354A4DAC3895D74F1428508364E47293F;
IL2CPP_EXTERN_C String_t* _stringLiteralB4B67A1E3362EA84160157011F823BD6607D1E57;
IL2CPP_EXTERN_C String_t* _stringLiteralB80316C404349B7962BAC3B6CE7C7E7107C36CA1;
IL2CPP_EXTERN_C String_t* _stringLiteralBD0C9DBCA15AA768A26AA34FE93E331BE119D035;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC2C785F436B8C0C146A0CADB55F5E0E73F71B11D;
IL2CPP_EXTERN_C String_t* _stringLiteralC5029680EA7BBB6D128B64AE7F27E5CEC471A381;
IL2CPP_EXTERN_C String_t* _stringLiteralC5389BB78303E5DA7DBFA5E26F2ACCD912979149;
IL2CPP_EXTERN_C String_t* _stringLiteralD62066A98DDBC2159E65CC5B7BAC045F46AC043E;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralF4ED7D3F8F9EE650CA476597BCB717839ACBA38B;
IL2CPP_EXTERN_C const RuntimeMethod* AdvancingFront_LocatePoint_m670D5AB0C5273114BF896A38FC2F31C944FFF4E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DTSweep_EdgeEvent_m820916D4B17A0AB8C083F9441498EA82F1E7AB32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DTSweep_FlipEdgeEvent_m8EDDECF4B8FF820B92026F3DA51FF29D2211EAD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DTSweep_FlipScanEdgeEvent_mAC545BE0D9BD844053EB746202D98C21D39C6ADC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DTSweep_NextFlipPoint_m3FEDD2B15425AFC79E0103541A3E75A2A05F3A2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DelaunayTriangle_IndexOf_m6BCB717AAD454FA4C1BBBDC0ECDCAF661AE03C28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DelaunayTriangle_MarkNeighbor_m172FF46906F1199292847C7F69B2C165C65867FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DelaunayTriangle_MarkNeighbor_m285227BC79816BB67CE729657065E27173CAFFCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Cast_TisTriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10_mBB03BCF6EC9FD1B651A3996C5A0B0695A8CD8C72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisPolygonPoint_t65F05B806EA33FEE1AFFDB2DC71F5445B3A5DEB5_m0B5651C20D1CA93A7719810CFF9106ADE9EB13FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m30FA729B7A7A51E3E070CC925E53E7B830A18245_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m8D95288BE1FE9C3E64CD8839B94B267DFFFB5CD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mE3FC07A0B422A3B74C28DF9BE4D8FADF180BF90F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m0A6F9F37911DCA006E751E7703373EC01807BA3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m448402F75FF7214DFF16A5713279F17052475353_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m7F7D1D02D0A40C2816FDD39923536B62937029F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mA186985A5D675FEA828DDA51AC186940253A4A39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mAD1E55902FCF4A7BE0C623146BE7064E2F8423A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB22EBD5239C9A927E80044C4F084715C92B8C549_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FixedArray3_1_Clear_m87AFCDF5E433608D9B74CEF72D42EB82056AC4BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FixedArray3_1_Contains_m9DB004E73DDC1CE846CD0752B53E96E0601BDF4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FixedArray3_1_IndexOf_m8085D0B04FA38EA30610C60164BB83A03A7DE838_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FixedArray3_1_get_Item_m5EC6D4DA8D086DDC58E068ABA1B8F30C98E4D1CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FixedArray3_1_set_Item_m3E39BD962A4540BB857DA849B848A544F55C64A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FixedArray3_1_set_Item_mE30BF433CD2BE14F750A52FE2E653BFFB68BA905_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FixedBitArray3_get_Item_m8D1568A202E819BFCF3AEADA4CBF1661024202F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FixedBitArray3_set_Item_mE1DF6CC301313E76DBB57477F11DC4DE41BED620_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m7C6364D4BC7523571AD507620469747CBDF7C194_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mC2E5CF4FA59DECCCD954A2A90914217F7B1C417A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m62D2D60A23EE7E5FFE5B6AA0BAF8A7D6BA1E52D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC79ED8B7F5592526EB43C74882641423CC3E2FCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEB7C6700237B7CBD7B0A9F87B811C0D2D3CCC3FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m863A3092DEECFDD22703F6B331A2B235520F2AD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mD2B0280F9794A9899C7BB948CE9E2585D32C52CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m28CEC327F311D6DCEBDBA35FA101A6ECA119A987_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m2D689DD2438D265F432A7DF8B3ED5793765E6ADC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mFCD1B6D29C25D72C298C38DC45A6E3518EE917B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mCC33FE951C2F5B95887E8E03067CCF052A224C31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_m0143D618FF5567E8B804B320D90BFAB367A605FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m680F69753F4999862220339209395058E8D2C0A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7E99250D3F7EC991F7D43A0A24070E9D8000BE6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD634702CD0DC9A158892E97846D1B48F9EF8DF05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mEFEED8EB4D812139C21DDD4F8F0B675245610F03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF4A925958B5D6E175E10E9FCD929F56481228895_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mFD857813532D375291D0F94362904563AC680D7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m9B7C9FC5FABEF16AED60E58722815716AAD10784_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE06167D06E964FADCFCA04A29A837372026B8F58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Polygon__ctor_mE36F5C9F43B17E76CAEB61494832C9B83C35DE1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEnumerateU3Ed__10_System_Collections_IEnumerator_Reset_m0C9395A5CC3BBCB0C514290EF0655A19B4BA30E9_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct PolygonPointU5BU5D_t9EE452CC0ABCCCCDFEFA006759E88CE6642C00FA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF2F71245FF56F78FF3B81C9743CD14B26ACD9BE4 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint>
struct List_1_t4C92CD4575EFD7FEC3CBE8B7B36CE69C2466C90D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DTSweepConstraintU5BU5D_t4B5D235649CD6A7A5E68109DFBE4BD112CAC37D7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4C92CD4575EFD7FEC3CBE8B7B36CE69C2466C90D, ____items_1)); }
	inline DTSweepConstraintU5BU5D_t4B5D235649CD6A7A5E68109DFBE4BD112CAC37D7* get__items_1() const { return ____items_1; }
	inline DTSweepConstraintU5BU5D_t4B5D235649CD6A7A5E68109DFBE4BD112CAC37D7** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DTSweepConstraintU5BU5D_t4B5D235649CD6A7A5E68109DFBE4BD112CAC37D7* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4C92CD4575EFD7FEC3CBE8B7B36CE69C2466C90D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4C92CD4575EFD7FEC3CBE8B7B36CE69C2466C90D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4C92CD4575EFD7FEC3CBE8B7B36CE69C2466C90D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t4C92CD4575EFD7FEC3CBE8B7B36CE69C2466C90D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DTSweepConstraintU5BU5D_t4B5D235649CD6A7A5E68109DFBE4BD112CAC37D7* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4C92CD4575EFD7FEC3CBE8B7B36CE69C2466C90D_StaticFields, ____emptyArray_5)); }
	inline DTSweepConstraintU5BU5D_t4B5D235649CD6A7A5E68109DFBE4BD112CAC37D7* get__emptyArray_5() const { return ____emptyArray_5; }
	inline DTSweepConstraintU5BU5D_t4B5D235649CD6A7A5E68109DFBE4BD112CAC37D7** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(DTSweepConstraintU5BU5D_t4B5D235649CD6A7A5E68109DFBE4BD112CAC37D7* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>
struct List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DelaunayTriangleU5BU5D_tE57942425E29436EA94C91516DAE5123320DDD08* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977, ____items_1)); }
	inline DelaunayTriangleU5BU5D_tE57942425E29436EA94C91516DAE5123320DDD08* get__items_1() const { return ____items_1; }
	inline DelaunayTriangleU5BU5D_tE57942425E29436EA94C91516DAE5123320DDD08** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DelaunayTriangleU5BU5D_tE57942425E29436EA94C91516DAE5123320DDD08* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DelaunayTriangleU5BU5D_tE57942425E29436EA94C91516DAE5123320DDD08* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977_StaticFields, ____emptyArray_5)); }
	inline DelaunayTriangleU5BU5D_tE57942425E29436EA94C91516DAE5123320DDD08* get__emptyArray_5() const { return ____emptyArray_5; }
	inline DelaunayTriangleU5BU5D_tE57942425E29436EA94C91516DAE5123320DDD08** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(DelaunayTriangleU5BU5D_tE57942425E29436EA94C91516DAE5123320DDD08* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.Polygon>
struct List_1_tFDD914A6846665E3B49FEB2E66168F9018B3DF51  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PolygonU5BU5D_t69AEC5891375A624CC9524CE7624512462D5D6C5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFDD914A6846665E3B49FEB2E66168F9018B3DF51, ____items_1)); }
	inline PolygonU5BU5D_t69AEC5891375A624CC9524CE7624512462D5D6C5* get__items_1() const { return ____items_1; }
	inline PolygonU5BU5D_t69AEC5891375A624CC9524CE7624512462D5D6C5** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PolygonU5BU5D_t69AEC5891375A624CC9524CE7624512462D5D6C5* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFDD914A6846665E3B49FEB2E66168F9018B3DF51, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFDD914A6846665E3B49FEB2E66168F9018B3DF51, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFDD914A6846665E3B49FEB2E66168F9018B3DF51, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFDD914A6846665E3B49FEB2E66168F9018B3DF51_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PolygonU5BU5D_t69AEC5891375A624CC9524CE7624512462D5D6C5* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFDD914A6846665E3B49FEB2E66168F9018B3DF51_StaticFields, ____emptyArray_5)); }
	inline PolygonU5BU5D_t69AEC5891375A624CC9524CE7624512462D5D6C5* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PolygonU5BU5D_t69AEC5891375A624CC9524CE7624512462D5D6C5** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PolygonU5BU5D_t69AEC5891375A624CC9524CE7624512462D5D6C5* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>
struct List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TriangulationPointU5BU5D_t7778F403D9EB133E662DAA5D92BB284476C489F2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2, ____items_1)); }
	inline TriangulationPointU5BU5D_t7778F403D9EB133E662DAA5D92BB284476C489F2* get__items_1() const { return ____items_1; }
	inline TriangulationPointU5BU5D_t7778F403D9EB133E662DAA5D92BB284476C489F2** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TriangulationPointU5BU5D_t7778F403D9EB133E662DAA5D92BB284476C489F2* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TriangulationPointU5BU5D_t7778F403D9EB133E662DAA5D92BB284476C489F2* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2_StaticFields, ____emptyArray_5)); }
	inline TriangulationPointU5BU5D_t7778F403D9EB133E662DAA5D92BB284476C489F2* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TriangulationPointU5BU5D_t7778F403D9EB133E662DAA5D92BB284476C489F2** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TriangulationPointU5BU5D_t7778F403D9EB133E662DAA5D92BB284476C489F2* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UnityEngine.ProBuilder.Poly2Tri.AdvancingFront
struct AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5  : public RuntimeObject
{
public:
	// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::Head
	AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___Head_0;
	// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::Tail
	AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___Tail_1;
	// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::Search
	AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___Search_2;

public:
	inline static int32_t get_offset_of_Head_0() { return static_cast<int32_t>(offsetof(AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5, ___Head_0)); }
	inline AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * get_Head_0() const { return ___Head_0; }
	inline AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 ** get_address_of_Head_0() { return &___Head_0; }
	inline void set_Head_0(AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * value)
	{
		___Head_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Head_0), (void*)value);
	}

	inline static int32_t get_offset_of_Tail_1() { return static_cast<int32_t>(offsetof(AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5, ___Tail_1)); }
	inline AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * get_Tail_1() const { return ___Tail_1; }
	inline AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 ** get_address_of_Tail_1() { return &___Tail_1; }
	inline void set_Tail_1(AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * value)
	{
		___Tail_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tail_1), (void*)value);
	}

	inline static int32_t get_offset_of_Search_2() { return static_cast<int32_t>(offsetof(AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5, ___Search_2)); }
	inline AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * get_Search_2() const { return ___Search_2; }
	inline AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 ** get_address_of_Search_2() { return &___Search_2; }
	inline void set_Search_2(AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * value)
	{
		___Search_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Search_2), (void*)value);
	}
};


// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode
struct AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70  : public RuntimeObject
{
public:
	// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode::Next
	AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___Next_0;
	// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode::Prev
	AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___Prev_1;
	// System.Double UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode::Value
	double ___Value_2;
	// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode::Point
	TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___Point_3;
	// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode::Triangle
	DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___Triangle_4;

public:
	inline static int32_t get_offset_of_Next_0() { return static_cast<int32_t>(offsetof(AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70, ___Next_0)); }
	inline AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * get_Next_0() const { return ___Next_0; }
	inline AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 ** get_address_of_Next_0() { return &___Next_0; }
	inline void set_Next_0(AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * value)
	{
		___Next_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Next_0), (void*)value);
	}

	inline static int32_t get_offset_of_Prev_1() { return static_cast<int32_t>(offsetof(AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70, ___Prev_1)); }
	inline AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * get_Prev_1() const { return ___Prev_1; }
	inline AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 ** get_address_of_Prev_1() { return &___Prev_1; }
	inline void set_Prev_1(AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * value)
	{
		___Prev_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Prev_1), (void*)value);
	}

	inline static int32_t get_offset_of_Value_2() { return static_cast<int32_t>(offsetof(AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70, ___Value_2)); }
	inline double get_Value_2() const { return ___Value_2; }
	inline double* get_address_of_Value_2() { return &___Value_2; }
	inline void set_Value_2(double value)
	{
		___Value_2 = value;
	}

	inline static int32_t get_offset_of_Point_3() { return static_cast<int32_t>(offsetof(AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70, ___Point_3)); }
	inline TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * get_Point_3() const { return ___Point_3; }
	inline TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 ** get_address_of_Point_3() { return &___Point_3; }
	inline void set_Point_3(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * value)
	{
		___Point_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Point_3), (void*)value);
	}

	inline static int32_t get_offset_of_Triangle_4() { return static_cast<int32_t>(offsetof(AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70, ___Triangle_4)); }
	inline DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * get_Triangle_4() const { return ___Triangle_4; }
	inline DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A ** get_address_of_Triangle_4() { return &___Triangle_4; }
	inline void set_Triangle_4(DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * value)
	{
		___Triangle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Triangle_4), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.ProBuilder.Poly2Tri.DTSweep
struct DTSweep_t6B84A004A5936AC303C331EA5A302B95E2002B94  : public RuntimeObject
{
public:

public:
};


// UnityEngine.ProBuilder.Poly2Tri.DTSweepBasin
struct DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F  : public RuntimeObject
{
public:
	// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.DTSweepBasin::leftNode
	AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___leftNode_0;
	// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.DTSweepBasin::bottomNode
	AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___bottomNode_1;
	// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.DTSweepBasin::rightNode
	AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___rightNode_2;
	// System.Double UnityEngine.ProBuilder.Poly2Tri.DTSweepBasin::width
	double ___width_3;
	// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DTSweepBasin::leftHighest
	bool ___leftHighest_4;

public:
	inline static int32_t get_offset_of_leftNode_0() { return static_cast<int32_t>(offsetof(DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F, ___leftNode_0)); }
	inline AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * get_leftNode_0() const { return ___leftNode_0; }
	inline AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 ** get_address_of_leftNode_0() { return &___leftNode_0; }
	inline void set_leftNode_0(AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * value)
	{
		___leftNode_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leftNode_0), (void*)value);
	}

	inline static int32_t get_offset_of_bottomNode_1() { return static_cast<int32_t>(offsetof(DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F, ___bottomNode_1)); }
	inline AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * get_bottomNode_1() const { return ___bottomNode_1; }
	inline AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 ** get_address_of_bottomNode_1() { return &___bottomNode_1; }
	inline void set_bottomNode_1(AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * value)
	{
		___bottomNode_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bottomNode_1), (void*)value);
	}

	inline static int32_t get_offset_of_rightNode_2() { return static_cast<int32_t>(offsetof(DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F, ___rightNode_2)); }
	inline AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * get_rightNode_2() const { return ___rightNode_2; }
	inline AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 ** get_address_of_rightNode_2() { return &___rightNode_2; }
	inline void set_rightNode_2(AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * value)
	{
		___rightNode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rightNode_2), (void*)value);
	}

	inline static int32_t get_offset_of_width_3() { return static_cast<int32_t>(offsetof(DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F, ___width_3)); }
	inline double get_width_3() const { return ___width_3; }
	inline double* get_address_of_width_3() { return &___width_3; }
	inline void set_width_3(double value)
	{
		___width_3 = value;
	}

	inline static int32_t get_offset_of_leftHighest_4() { return static_cast<int32_t>(offsetof(DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F, ___leftHighest_4)); }
	inline bool get_leftHighest_4() const { return ___leftHighest_4; }
	inline bool* get_address_of_leftHighest_4() { return &___leftHighest_4; }
	inline void set_leftHighest_4(bool value)
	{
		___leftHighest_4 = value;
	}
};


// UnityEngine.ProBuilder.Poly2Tri.DTSweepEdgeEvent
struct DTSweepEdgeEvent_t93472178B8E22740677AF3E5D255F96392BB8453  : public RuntimeObject
{
public:
	// UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint UnityEngine.ProBuilder.Poly2Tri.DTSweepEdgeEvent::ConstrainedEdge
	DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * ___ConstrainedEdge_0;
	// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DTSweepEdgeEvent::Right
	bool ___Right_1;

public:
	inline static int32_t get_offset_of_ConstrainedEdge_0() { return static_cast<int32_t>(offsetof(DTSweepEdgeEvent_t93472178B8E22740677AF3E5D255F96392BB8453, ___ConstrainedEdge_0)); }
	inline DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * get_ConstrainedEdge_0() const { return ___ConstrainedEdge_0; }
	inline DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE ** get_address_of_ConstrainedEdge_0() { return &___ConstrainedEdge_0; }
	inline void set_ConstrainedEdge_0(DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * value)
	{
		___ConstrainedEdge_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConstrainedEdge_0), (void*)value);
	}

	inline static int32_t get_offset_of_Right_1() { return static_cast<int32_t>(offsetof(DTSweepEdgeEvent_t93472178B8E22740677AF3E5D255F96392BB8453, ___Right_1)); }
	inline bool get_Right_1() const { return ___Right_1; }
	inline bool* get_address_of_Right_1() { return &___Right_1; }
	inline void set_Right_1(bool value)
	{
		___Right_1 = value;
	}
};


// UnityEngine.ProBuilder.Poly2Tri.DTSweepPointComparator
struct DTSweepPointComparator_tA06245D62FBBEE946B1A620CC845F88B08BFF9A0  : public RuntimeObject
{
public:

public:
};


// UnityEngine.ProBuilder.Poly2Tri.PointSet
struct PointSet_t28416B695BA46DA0157C11A570D5871D41DCBC18  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> UnityEngine.ProBuilder.Poly2Tri.PointSet::<Points>k__BackingField
	RuntimeObject* ___U3CPointsU3Ek__BackingField_0;
	// System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> UnityEngine.ProBuilder.Poly2Tri.PointSet::<Triangles>k__BackingField
	RuntimeObject* ___U3CTrianglesU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CPointsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PointSet_t28416B695BA46DA0157C11A570D5871D41DCBC18, ___U3CPointsU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CPointsU3Ek__BackingField_0() const { return ___U3CPointsU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CPointsU3Ek__BackingField_0() { return &___U3CPointsU3Ek__BackingField_0; }
	inline void set_U3CPointsU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CPointsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointsU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTrianglesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PointSet_t28416B695BA46DA0157C11A570D5871D41DCBC18, ___U3CTrianglesU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CTrianglesU3Ek__BackingField_1() const { return ___U3CTrianglesU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CTrianglesU3Ek__BackingField_1() { return &___U3CTrianglesU3Ek__BackingField_1; }
	inline void set_U3CTrianglesU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CTrianglesU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrianglesU3Ek__BackingField_1), (void*)value);
	}
};


// UnityEngine.ProBuilder.Poly2Tri.Polygon
struct Polygon_tCBEEF355994B422EB6585B902F8011F753D0C87D  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> UnityEngine.ProBuilder.Poly2Tri.Polygon::_points
	List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * ____points_0;
	// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> UnityEngine.ProBuilder.Poly2Tri.Polygon::_steinerPoints
	List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * ____steinerPoints_1;
	// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.Polygon> UnityEngine.ProBuilder.Poly2Tri.Polygon::_holes
	List_1_tFDD914A6846665E3B49FEB2E66168F9018B3DF51 * ____holes_2;
	// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> UnityEngine.ProBuilder.Poly2Tri.Polygon::_triangles
	List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977 * ____triangles_3;

public:
	inline static int32_t get_offset_of__points_0() { return static_cast<int32_t>(offsetof(Polygon_tCBEEF355994B422EB6585B902F8011F753D0C87D, ____points_0)); }
	inline List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * get__points_0() const { return ____points_0; }
	inline List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 ** get_address_of__points_0() { return &____points_0; }
	inline void set__points_0(List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * value)
	{
		____points_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____points_0), (void*)value);
	}

	inline static int32_t get_offset_of__steinerPoints_1() { return static_cast<int32_t>(offsetof(Polygon_tCBEEF355994B422EB6585B902F8011F753D0C87D, ____steinerPoints_1)); }
	inline List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * get__steinerPoints_1() const { return ____steinerPoints_1; }
	inline List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 ** get_address_of__steinerPoints_1() { return &____steinerPoints_1; }
	inline void set__steinerPoints_1(List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * value)
	{
		____steinerPoints_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____steinerPoints_1), (void*)value);
	}

	inline static int32_t get_offset_of__holes_2() { return static_cast<int32_t>(offsetof(Polygon_tCBEEF355994B422EB6585B902F8011F753D0C87D, ____holes_2)); }
	inline List_1_tFDD914A6846665E3B49FEB2E66168F9018B3DF51 * get__holes_2() const { return ____holes_2; }
	inline List_1_tFDD914A6846665E3B49FEB2E66168F9018B3DF51 ** get_address_of__holes_2() { return &____holes_2; }
	inline void set__holes_2(List_1_tFDD914A6846665E3B49FEB2E66168F9018B3DF51 * value)
	{
		____holes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____holes_2), (void*)value);
	}

	inline static int32_t get_offset_of__triangles_3() { return static_cast<int32_t>(offsetof(Polygon_tCBEEF355994B422EB6585B902F8011F753D0C87D, ____triangles_3)); }
	inline List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977 * get__triangles_3() const { return ____triangles_3; }
	inline List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977 ** get_address_of__triangles_3() { return &____triangles_3; }
	inline void set__triangles_3(List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977 * value)
	{
		____triangles_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____triangles_3), (void*)value);
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


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint
struct TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A  : public RuntimeObject
{
public:
	// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint::P
	TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___P_0;
	// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint::Q
	TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___Q_1;

public:
	inline static int32_t get_offset_of_P_0() { return static_cast<int32_t>(offsetof(TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A, ___P_0)); }
	inline TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * get_P_0() const { return ___P_0; }
	inline TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 ** get_address_of_P_0() { return &___P_0; }
	inline void set_P_0(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * value)
	{
		___P_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___P_0), (void*)value);
	}

	inline static int32_t get_offset_of_Q_1() { return static_cast<int32_t>(offsetof(TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A, ___Q_1)); }
	inline TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * get_Q_1() const { return ___Q_1; }
	inline TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 ** get_address_of_Q_1() { return &___Q_1; }
	inline void set_Q_1(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * value)
	{
		___Q_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Q_1), (void*)value);
	}
};


// UnityEngine.ProBuilder.Poly2Tri.TriangulationDebugContext
struct TriangulationDebugContext_tB2690A971C0344C60D9E4DEBC8819ADE2D29F397  : public RuntimeObject
{
public:
	// UnityEngine.ProBuilder.Poly2Tri.TriangulationContext UnityEngine.ProBuilder.Poly2Tri.TriangulationDebugContext::_tcx
	TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * ____tcx_0;

public:
	inline static int32_t get_offset_of__tcx_0() { return static_cast<int32_t>(offsetof(TriangulationDebugContext_tB2690A971C0344C60D9E4DEBC8819ADE2D29F397, ____tcx_0)); }
	inline TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * get__tcx_0() const { return ____tcx_0; }
	inline TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B ** get_address_of__tcx_0() { return &____tcx_0; }
	inline void set__tcx_0(TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * value)
	{
		____tcx_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tcx_0), (void*)value);
	}
};


// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint
struct TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint> UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::<Edges>k__BackingField
	List_1_t4C92CD4575EFD7FEC3CBE8B7B36CE69C2466C90D * ___U3CEdgesU3Ek__BackingField_0;
	// System.Double UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::X
	double ___X_1;
	// System.Double UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::Y
	double ___Y_2;
	// System.Int32 UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::Index
	int32_t ___Index_3;

public:
	inline static int32_t get_offset_of_U3CEdgesU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10, ___U3CEdgesU3Ek__BackingField_0)); }
	inline List_1_t4C92CD4575EFD7FEC3CBE8B7B36CE69C2466C90D * get_U3CEdgesU3Ek__BackingField_0() const { return ___U3CEdgesU3Ek__BackingField_0; }
	inline List_1_t4C92CD4575EFD7FEC3CBE8B7B36CE69C2466C90D ** get_address_of_U3CEdgesU3Ek__BackingField_0() { return &___U3CEdgesU3Ek__BackingField_0; }
	inline void set_U3CEdgesU3Ek__BackingField_0(List_1_t4C92CD4575EFD7FEC3CBE8B7B36CE69C2466C90D * value)
	{
		___U3CEdgesU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEdgesU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_X_1() { return static_cast<int32_t>(offsetof(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10, ___X_1)); }
	inline double get_X_1() const { return ___X_1; }
	inline double* get_address_of_X_1() { return &___X_1; }
	inline void set_X_1(double value)
	{
		___X_1 = value;
	}

	inline static int32_t get_offset_of_Y_2() { return static_cast<int32_t>(offsetof(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10, ___Y_2)); }
	inline double get_Y_2() const { return ___Y_2; }
	inline double* get_address_of_Y_2() { return &___Y_2; }
	inline void set_Y_2(double value)
	{
		___Y_2 = value;
	}

	inline static int32_t get_offset_of_Index_3() { return static_cast<int32_t>(offsetof(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10, ___Index_3)); }
	inline int32_t get_Index_3() const { return ___Index_3; }
	inline int32_t* get_address_of_Index_3() { return &___Index_3; }
	inline void set_Index_3(int32_t value)
	{
		___Index_3 = value;
	}
};


// UnityEngine.ProBuilder.Poly2Tri.TriangulationUtil
struct TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC  : public RuntimeObject
{
public:

public:
};

struct TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_StaticFields
{
public:
	// System.Double UnityEngine.ProBuilder.Poly2Tri.TriangulationUtil::EPSILON
	double ___EPSILON_0;

public:
	inline static int32_t get_offset_of_EPSILON_0() { return static_cast<int32_t>(offsetof(TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_StaticFields, ___EPSILON_0)); }
	inline double get_EPSILON_0() const { return ___EPSILON_0; }
	inline double* get_address_of_EPSILON_0() { return &___EPSILON_0; }
	inline void set_EPSILON_0(double value)
	{
		___EPSILON_0 = value;
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

// System.Collections.Generic.List`1/Enumerator<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint>
struct Enumerator_tC99C2EF25B7D2F943A44864B2803657E90082810 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t4C92CD4575EFD7FEC3CBE8B7B36CE69C2466C90D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tC99C2EF25B7D2F943A44864B2803657E90082810, ___list_0)); }
	inline List_1_t4C92CD4575EFD7FEC3CBE8B7B36CE69C2466C90D * get_list_0() const { return ___list_0; }
	inline List_1_t4C92CD4575EFD7FEC3CBE8B7B36CE69C2466C90D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t4C92CD4575EFD7FEC3CBE8B7B36CE69C2466C90D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tC99C2EF25B7D2F943A44864B2803657E90082810, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tC99C2EF25B7D2F943A44864B2803657E90082810, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tC99C2EF25B7D2F943A44864B2803657E90082810, ___current_3)); }
	inline DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * get_current_3() const { return ___current_3; }
	inline DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.ProBuilder.Poly2Tri.Polygon>
struct Enumerator_t1F94FA57AA2D3F577B34F7889158B05F1BD00CDB 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tFDD914A6846665E3B49FEB2E66168F9018B3DF51 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Polygon_tCBEEF355994B422EB6585B902F8011F753D0C87D * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t1F94FA57AA2D3F577B34F7889158B05F1BD00CDB, ___list_0)); }
	inline List_1_tFDD914A6846665E3B49FEB2E66168F9018B3DF51 * get_list_0() const { return ___list_0; }
	inline List_1_tFDD914A6846665E3B49FEB2E66168F9018B3DF51 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tFDD914A6846665E3B49FEB2E66168F9018B3DF51 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t1F94FA57AA2D3F577B34F7889158B05F1BD00CDB, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t1F94FA57AA2D3F577B34F7889158B05F1BD00CDB, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1F94FA57AA2D3F577B34F7889158B05F1BD00CDB, ___current_3)); }
	inline Polygon_tCBEEF355994B422EB6585B902F8011F753D0C87D * get_current_3() const { return ___current_3; }
	inline Polygon_tCBEEF355994B422EB6585B902F8011F753D0C87D ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Polygon_tCBEEF355994B422EB6585B902F8011F753D0C87D * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>
struct Enumerator_tCB7700EF6C700D919B5681132CA978C465D2C1C9 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tCB7700EF6C700D919B5681132CA978C465D2C1C9, ___list_0)); }
	inline List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * get_list_0() const { return ___list_0; }
	inline List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tCB7700EF6C700D919B5681132CA978C465D2C1C9, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tCB7700EF6C700D919B5681132CA978C465D2C1C9, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tCB7700EF6C700D919B5681132CA978C465D2C1C9, ___current_3)); }
	inline TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * get_current_3() const { return ___current_3; }
	inline TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>
struct FixedArray3_1_tDB222AD5E30A16C9D8C257978FFD6780A962B922 
{
public:
	// T UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1::_0
	DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ____0_0;
	// T UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1::_1
	DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ____1_1;
	// T UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1::_2
	DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ____2_2;

public:
	inline static int32_t get_offset_of__0_0() { return static_cast<int32_t>(offsetof(FixedArray3_1_tDB222AD5E30A16C9D8C257978FFD6780A962B922, ____0_0)); }
	inline DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * get__0_0() const { return ____0_0; }
	inline DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A ** get_address_of__0_0() { return &____0_0; }
	inline void set__0_0(DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * value)
	{
		____0_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____0_0), (void*)value);
	}

	inline static int32_t get_offset_of__1_1() { return static_cast<int32_t>(offsetof(FixedArray3_1_tDB222AD5E30A16C9D8C257978FFD6780A962B922, ____1_1)); }
	inline DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * get__1_1() const { return ____1_1; }
	inline DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A ** get_address_of__1_1() { return &____1_1; }
	inline void set__1_1(DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * value)
	{
		____1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____1_1), (void*)value);
	}

	inline static int32_t get_offset_of__2_2() { return static_cast<int32_t>(offsetof(FixedArray3_1_tDB222AD5E30A16C9D8C257978FFD6780A962B922, ____2_2)); }
	inline DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * get__2_2() const { return ____2_2; }
	inline DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A ** get_address_of__2_2() { return &____2_2; }
	inline void set__2_2(DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * value)
	{
		____2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____2_2), (void*)value);
	}
};


// UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<System.Object>
struct FixedArray3_1_t1C8F0CB8469C067F80F60694B513299DC4C2E48E 
{
public:
	// T UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1::_0
	RuntimeObject * ____0_0;
	// T UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1::_1
	RuntimeObject * ____1_1;
	// T UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1::_2
	RuntimeObject * ____2_2;

public:
	inline static int32_t get_offset_of__0_0() { return static_cast<int32_t>(offsetof(FixedArray3_1_t1C8F0CB8469C067F80F60694B513299DC4C2E48E, ____0_0)); }
	inline RuntimeObject * get__0_0() const { return ____0_0; }
	inline RuntimeObject ** get_address_of__0_0() { return &____0_0; }
	inline void set__0_0(RuntimeObject * value)
	{
		____0_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____0_0), (void*)value);
	}

	inline static int32_t get_offset_of__1_1() { return static_cast<int32_t>(offsetof(FixedArray3_1_t1C8F0CB8469C067F80F60694B513299DC4C2E48E, ____1_1)); }
	inline RuntimeObject * get__1_1() const { return ____1_1; }
	inline RuntimeObject ** get_address_of__1_1() { return &____1_1; }
	inline void set__1_1(RuntimeObject * value)
	{
		____1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____1_1), (void*)value);
	}

	inline static int32_t get_offset_of__2_2() { return static_cast<int32_t>(offsetof(FixedArray3_1_t1C8F0CB8469C067F80F60694B513299DC4C2E48E, ____2_2)); }
	inline RuntimeObject * get__2_2() const { return ____2_2; }
	inline RuntimeObject ** get_address_of__2_2() { return &____2_2; }
	inline void set__2_2(RuntimeObject * value)
	{
		____2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____2_2), (void*)value);
	}
};


// UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>
struct FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 
{
public:
	// T UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1::_0
	TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ____0_0;
	// T UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1::_1
	TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ____1_1;
	// T UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1::_2
	TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ____2_2;

public:
	inline static int32_t get_offset_of__0_0() { return static_cast<int32_t>(offsetof(FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5, ____0_0)); }
	inline TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * get__0_0() const { return ____0_0; }
	inline TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 ** get_address_of__0_0() { return &____0_0; }
	inline void set__0_0(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * value)
	{
		____0_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____0_0), (void*)value);
	}

	inline static int32_t get_offset_of__1_1() { return static_cast<int32_t>(offsetof(FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5, ____1_1)); }
	inline TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * get__1_1() const { return ____1_1; }
	inline TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 ** get_address_of__1_1() { return &____1_1; }
	inline void set__1_1(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * value)
	{
		____1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____1_1), (void*)value);
	}

	inline static int32_t get_offset_of__2_2() { return static_cast<int32_t>(offsetof(FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5, ____2_2)); }
	inline TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * get__2_2() const { return ____2_2; }
	inline TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 ** get_address_of__2_2() { return &____2_2; }
	inline void set__2_2(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * value)
	{
		____2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____2_2), (void*)value);
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


// UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint
struct DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE  : public TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A
{
public:

public:
};


// UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext
struct DTSweepDebugContext_t1118374B297F625192528B23AD580B5AB9F9EDF5  : public TriangulationDebugContext_tB2690A971C0344C60D9E4DEBC8819ADE2D29F397
{
public:
	// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::_primaryTriangle
	DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ____primaryTriangle_1;
	// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::_secondaryTriangle
	DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ____secondaryTriangle_2;
	// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::_activePoint
	TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ____activePoint_3;
	// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::_activeNode
	AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ____activeNode_4;
	// UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::_activeConstraint
	DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * ____activeConstraint_5;

public:
	inline static int32_t get_offset_of__primaryTriangle_1() { return static_cast<int32_t>(offsetof(DTSweepDebugContext_t1118374B297F625192528B23AD580B5AB9F9EDF5, ____primaryTriangle_1)); }
	inline DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * get__primaryTriangle_1() const { return ____primaryTriangle_1; }
	inline DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A ** get_address_of__primaryTriangle_1() { return &____primaryTriangle_1; }
	inline void set__primaryTriangle_1(DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * value)
	{
		____primaryTriangle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____primaryTriangle_1), (void*)value);
	}

	inline static int32_t get_offset_of__secondaryTriangle_2() { return static_cast<int32_t>(offsetof(DTSweepDebugContext_t1118374B297F625192528B23AD580B5AB9F9EDF5, ____secondaryTriangle_2)); }
	inline DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * get__secondaryTriangle_2() const { return ____secondaryTriangle_2; }
	inline DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A ** get_address_of__secondaryTriangle_2() { return &____secondaryTriangle_2; }
	inline void set__secondaryTriangle_2(DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * value)
	{
		____secondaryTriangle_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____secondaryTriangle_2), (void*)value);
	}

	inline static int32_t get_offset_of__activePoint_3() { return static_cast<int32_t>(offsetof(DTSweepDebugContext_t1118374B297F625192528B23AD580B5AB9F9EDF5, ____activePoint_3)); }
	inline TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * get__activePoint_3() const { return ____activePoint_3; }
	inline TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 ** get_address_of__activePoint_3() { return &____activePoint_3; }
	inline void set__activePoint_3(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * value)
	{
		____activePoint_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activePoint_3), (void*)value);
	}

	inline static int32_t get_offset_of__activeNode_4() { return static_cast<int32_t>(offsetof(DTSweepDebugContext_t1118374B297F625192528B23AD580B5AB9F9EDF5, ____activeNode_4)); }
	inline AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * get__activeNode_4() const { return ____activeNode_4; }
	inline AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 ** get_address_of__activeNode_4() { return &____activeNode_4; }
	inline void set__activeNode_4(AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * value)
	{
		____activeNode_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeNode_4), (void*)value);
	}

	inline static int32_t get_offset_of__activeConstraint_5() { return static_cast<int32_t>(offsetof(DTSweepDebugContext_t1118374B297F625192528B23AD580B5AB9F9EDF5, ____activeConstraint_5)); }
	inline DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * get__activeConstraint_5() const { return ____activeConstraint_5; }
	inline DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE ** get_address_of__activeConstraint_5() { return &____activeConstraint_5; }
	inline void set__activeConstraint_5(DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * value)
	{
		____activeConstraint_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeConstraint_5), (void*)value);
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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

// UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3
struct FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 
{
public:
	// System.Boolean UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::_0
	bool ____0_0;
	// System.Boolean UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::_1
	bool ____1_1;
	// System.Boolean UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::_2
	bool ____2_2;

public:
	inline static int32_t get_offset_of__0_0() { return static_cast<int32_t>(offsetof(FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4, ____0_0)); }
	inline bool get__0_0() const { return ____0_0; }
	inline bool* get_address_of__0_0() { return &____0_0; }
	inline void set__0_0(bool value)
	{
		____0_0 = value;
	}

	inline static int32_t get_offset_of__1_1() { return static_cast<int32_t>(offsetof(FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4, ____1_1)); }
	inline bool get__1_1() const { return ____1_1; }
	inline bool* get_address_of__1_1() { return &____1_1; }
	inline void set__1_1(bool value)
	{
		____1_1 = value;
	}

	inline static int32_t get_offset_of__2_2() { return static_cast<int32_t>(offsetof(FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4, ____2_2)); }
	inline bool get__2_2() const { return ____2_2; }
	inline bool* get_address_of__2_2() { return &____2_2; }
	inline void set__2_2(bool value)
	{
		____2_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3
struct FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4_marshaled_pinvoke
{
	int32_t ____0_0;
	int32_t ____1_1;
	int32_t ____2_2;
};
// Native definition for COM marshalling of UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3
struct FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4_marshaled_com
{
	int32_t ____0_0;
	int32_t ____1_1;
	int32_t ____2_2;
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


// UnityEngine.ProBuilder.Poly2Tri.PolygonPoint
struct PolygonPoint_t65F05B806EA33FEE1AFFDB2DC71F5445B3A5DEB5  : public TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10
{
public:

public:
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle
struct DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A  : public RuntimeObject
{
public:
	// UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::Points
	FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5  ___Points_0;
	// UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::Neighbors
	FixedArray3_1_tDB222AD5E30A16C9D8C257978FFD6780A962B922  ___Neighbors_1;
	// UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3 UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::EdgeIsConstrained
	FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4  ___EdgeIsConstrained_2;
	// UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3 UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::EdgeIsDelaunay
	FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4  ___EdgeIsDelaunay_3;
	// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::<IsInterior>k__BackingField
	bool ___U3CIsInteriorU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_Points_0() { return static_cast<int32_t>(offsetof(DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A, ___Points_0)); }
	inline FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5  get_Points_0() const { return ___Points_0; }
	inline FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 * get_address_of_Points_0() { return &___Points_0; }
	inline void set_Points_0(FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5  value)
	{
		___Points_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Points_0))->____0_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Points_0))->____1_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Points_0))->____2_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Neighbors_1() { return static_cast<int32_t>(offsetof(DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A, ___Neighbors_1)); }
	inline FixedArray3_1_tDB222AD5E30A16C9D8C257978FFD6780A962B922  get_Neighbors_1() const { return ___Neighbors_1; }
	inline FixedArray3_1_tDB222AD5E30A16C9D8C257978FFD6780A962B922 * get_address_of_Neighbors_1() { return &___Neighbors_1; }
	inline void set_Neighbors_1(FixedArray3_1_tDB222AD5E30A16C9D8C257978FFD6780A962B922  value)
	{
		___Neighbors_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Neighbors_1))->____0_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Neighbors_1))->____1_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Neighbors_1))->____2_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_EdgeIsConstrained_2() { return static_cast<int32_t>(offsetof(DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A, ___EdgeIsConstrained_2)); }
	inline FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4  get_EdgeIsConstrained_2() const { return ___EdgeIsConstrained_2; }
	inline FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * get_address_of_EdgeIsConstrained_2() { return &___EdgeIsConstrained_2; }
	inline void set_EdgeIsConstrained_2(FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4  value)
	{
		___EdgeIsConstrained_2 = value;
	}

	inline static int32_t get_offset_of_EdgeIsDelaunay_3() { return static_cast<int32_t>(offsetof(DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A, ___EdgeIsDelaunay_3)); }
	inline FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4  get_EdgeIsDelaunay_3() const { return ___EdgeIsDelaunay_3; }
	inline FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * get_address_of_EdgeIsDelaunay_3() { return &___EdgeIsDelaunay_3; }
	inline void set_EdgeIsDelaunay_3(FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4  value)
	{
		___EdgeIsDelaunay_3 = value;
	}

	inline static int32_t get_offset_of_U3CIsInteriorU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A, ___U3CIsInteriorU3Ek__BackingField_4)); }
	inline bool get_U3CIsInteriorU3Ek__BackingField_4() const { return ___U3CIsInteriorU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsInteriorU3Ek__BackingField_4() { return &___U3CIsInteriorU3Ek__BackingField_4; }
	inline void set_U3CIsInteriorU3Ek__BackingField_4(bool value)
	{
		___U3CIsInteriorU3Ek__BackingField_4 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.ProBuilder.Poly2Tri.Orientation
struct Orientation_tEADE2F280C162533840E8939307C8BA32F591D64 
{
public:
	// System.Int32 UnityEngine.ProBuilder.Poly2Tri.Orientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Orientation_tEADE2F280C162533840E8939307C8BA32F591D64, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ProBuilder.Poly2Tri.TriangulationMode
struct TriangulationMode_tF230B0B233F228DCD0B5DF3EBD6AB97A55FAE400 
{
public:
	// System.Int32 UnityEngine.ProBuilder.Poly2Tri.TriangulationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TriangulationMode_tF230B0B233F228DCD0B5DF3EBD6AB97A55FAE400, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/<Enumerate>d__10
struct U3CEnumerateU3Ed__10_tB632C8EC1E46E07540D45000AF54B403F3DD27F2  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/<Enumerate>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Boolean UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/<Enumerate>d__10::<>2__current
	bool ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/<Enumerate>d__10::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3 UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/<Enumerate>d__10::<>4__this
	FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4  ___U3CU3E4__this_3;
	// UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3 UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/<Enumerate>d__10::<>3__<>4__this
	FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4  ___U3CU3E3__U3CU3E4__this_4;
	// System.Int32 UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/<Enumerate>d__10::<i>5__2
	int32_t ___U3CiU3E5__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEnumerateU3Ed__10_tB632C8EC1E46E07540D45000AF54B403F3DD27F2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CEnumerateU3Ed__10_tB632C8EC1E46E07540D45000AF54B403F3DD27F2, ___U3CU3E2__current_1)); }
	inline bool get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline bool* get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(bool value)
	{
		___U3CU3E2__current_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CEnumerateU3Ed__10_tB632C8EC1E46E07540D45000AF54B403F3DD27F2, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CEnumerateU3Ed__10_tB632C8EC1E46E07540D45000AF54B403F3DD27F2, ___U3CU3E4__this_3)); }
	inline FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4  get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4  value)
	{
		___U3CU3E4__this_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CEnumerateU3Ed__10_tB632C8EC1E46E07540D45000AF54B403F3DD27F2, ___U3CU3E3__U3CU3E4__this_4)); }
	inline FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4  get_U3CU3E3__U3CU3E4__this_4() const { return ___U3CU3E3__U3CU3E4__this_4; }
	inline FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * get_address_of_U3CU3E3__U3CU3E4__this_4() { return &___U3CU3E3__U3CU3E4__this_4; }
	inline void set_U3CU3E3__U3CU3E4__this_4(FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4  value)
	{
		___U3CU3E3__U3CU3E4__this_4 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CEnumerateU3Ed__10_tB632C8EC1E46E07540D45000AF54B403F3DD27F2, ___U3CiU3E5__2_5)); }
	inline int32_t get_U3CiU3E5__2_5() const { return ___U3CiU3E5__2_5; }
	inline int32_t* get_address_of_U3CiU3E5__2_5() { return &___U3CiU3E5__2_5; }
	inline void set_U3CiU3E5__2_5(int32_t value)
	{
		___U3CiU3E5__2_5 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.ProBuilder.Poly2Tri.TriangulationContext
struct TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B  : public RuntimeObject
{
public:
	// UnityEngine.ProBuilder.Poly2Tri.TriangulationDebugContext UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::<DebugContext>k__BackingField
	TriangulationDebugContext_tB2690A971C0344C60D9E4DEBC8819ADE2D29F397 * ___U3CDebugContextU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::Triangles
	List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977 * ___Triangles_1;
	// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::Points
	List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * ___Points_2;
	// UnityEngine.ProBuilder.Poly2Tri.TriangulationMode UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::<TriangulationMode>k__BackingField
	int32_t ___U3CTriangulationModeU3Ek__BackingField_3;
	// UnityEngine.ProBuilder.Poly2Tri.Triangulatable UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::<Triangulatable>k__BackingField
	RuntimeObject* ___U3CTriangulatableU3Ek__BackingField_4;
	// System.Int32 UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::<StepCount>k__BackingField
	int32_t ___U3CStepCountU3Ek__BackingField_5;
	// System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::<IsDebugEnabled>k__BackingField
	bool ___U3CIsDebugEnabledU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CDebugContextU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B, ___U3CDebugContextU3Ek__BackingField_0)); }
	inline TriangulationDebugContext_tB2690A971C0344C60D9E4DEBC8819ADE2D29F397 * get_U3CDebugContextU3Ek__BackingField_0() const { return ___U3CDebugContextU3Ek__BackingField_0; }
	inline TriangulationDebugContext_tB2690A971C0344C60D9E4DEBC8819ADE2D29F397 ** get_address_of_U3CDebugContextU3Ek__BackingField_0() { return &___U3CDebugContextU3Ek__BackingField_0; }
	inline void set_U3CDebugContextU3Ek__BackingField_0(TriangulationDebugContext_tB2690A971C0344C60D9E4DEBC8819ADE2D29F397 * value)
	{
		___U3CDebugContextU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDebugContextU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_Triangles_1() { return static_cast<int32_t>(offsetof(TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B, ___Triangles_1)); }
	inline List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977 * get_Triangles_1() const { return ___Triangles_1; }
	inline List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977 ** get_address_of_Triangles_1() { return &___Triangles_1; }
	inline void set_Triangles_1(List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977 * value)
	{
		___Triangles_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Triangles_1), (void*)value);
	}

	inline static int32_t get_offset_of_Points_2() { return static_cast<int32_t>(offsetof(TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B, ___Points_2)); }
	inline List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * get_Points_2() const { return ___Points_2; }
	inline List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 ** get_address_of_Points_2() { return &___Points_2; }
	inline void set_Points_2(List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * value)
	{
		___Points_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Points_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTriangulationModeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B, ___U3CTriangulationModeU3Ek__BackingField_3)); }
	inline int32_t get_U3CTriangulationModeU3Ek__BackingField_3() const { return ___U3CTriangulationModeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CTriangulationModeU3Ek__BackingField_3() { return &___U3CTriangulationModeU3Ek__BackingField_3; }
	inline void set_U3CTriangulationModeU3Ek__BackingField_3(int32_t value)
	{
		___U3CTriangulationModeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTriangulatableU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B, ___U3CTriangulatableU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CTriangulatableU3Ek__BackingField_4() const { return ___U3CTriangulatableU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CTriangulatableU3Ek__BackingField_4() { return &___U3CTriangulatableU3Ek__BackingField_4; }
	inline void set_U3CTriangulatableU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CTriangulatableU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTriangulatableU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStepCountU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B, ___U3CStepCountU3Ek__BackingField_5)); }
	inline int32_t get_U3CStepCountU3Ek__BackingField_5() const { return ___U3CStepCountU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CStepCountU3Ek__BackingField_5() { return &___U3CStepCountU3Ek__BackingField_5; }
	inline void set_U3CStepCountU3Ek__BackingField_5(int32_t value)
	{
		___U3CStepCountU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CIsDebugEnabledU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B, ___U3CIsDebugEnabledU3Ek__BackingField_6)); }
	inline bool get_U3CIsDebugEnabledU3Ek__BackingField_6() const { return ___U3CIsDebugEnabledU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CIsDebugEnabledU3Ek__BackingField_6() { return &___U3CIsDebugEnabledU3Ek__BackingField_6; }
	inline void set_U3CIsDebugEnabledU3Ek__BackingField_6(bool value)
	{
		___U3CIsDebugEnabledU3Ek__BackingField_6 = value;
	}
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// UnityEngine.ProBuilder.Poly2Tri.DTSweepContext
struct DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6  : public TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B
{
public:
	// System.Single UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::ALPHA
	float ___ALPHA_7;
	// UnityEngine.ProBuilder.Poly2Tri.AdvancingFront UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::Front
	AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5 * ___Front_8;
	// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::<Head>k__BackingField
	TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___U3CHeadU3Ek__BackingField_9;
	// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::<Tail>k__BackingField
	TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___U3CTailU3Ek__BackingField_10;
	// UnityEngine.ProBuilder.Poly2Tri.DTSweepBasin UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::Basin
	DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F * ___Basin_11;
	// UnityEngine.ProBuilder.Poly2Tri.DTSweepEdgeEvent UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::EdgeEvent
	DTSweepEdgeEvent_t93472178B8E22740677AF3E5D255F96392BB8453 * ___EdgeEvent_12;
	// UnityEngine.ProBuilder.Poly2Tri.DTSweepPointComparator UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::_comparator
	DTSweepPointComparator_tA06245D62FBBEE946B1A620CC845F88B08BFF9A0 * ____comparator_13;

public:
	inline static int32_t get_offset_of_ALPHA_7() { return static_cast<int32_t>(offsetof(DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6, ___ALPHA_7)); }
	inline float get_ALPHA_7() const { return ___ALPHA_7; }
	inline float* get_address_of_ALPHA_7() { return &___ALPHA_7; }
	inline void set_ALPHA_7(float value)
	{
		___ALPHA_7 = value;
	}

	inline static int32_t get_offset_of_Front_8() { return static_cast<int32_t>(offsetof(DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6, ___Front_8)); }
	inline AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5 * get_Front_8() const { return ___Front_8; }
	inline AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5 ** get_address_of_Front_8() { return &___Front_8; }
	inline void set_Front_8(AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5 * value)
	{
		___Front_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Front_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHeadU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6, ___U3CHeadU3Ek__BackingField_9)); }
	inline TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * get_U3CHeadU3Ek__BackingField_9() const { return ___U3CHeadU3Ek__BackingField_9; }
	inline TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 ** get_address_of_U3CHeadU3Ek__BackingField_9() { return &___U3CHeadU3Ek__BackingField_9; }
	inline void set_U3CHeadU3Ek__BackingField_9(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * value)
	{
		___U3CHeadU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHeadU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTailU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6, ___U3CTailU3Ek__BackingField_10)); }
	inline TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * get_U3CTailU3Ek__BackingField_10() const { return ___U3CTailU3Ek__BackingField_10; }
	inline TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 ** get_address_of_U3CTailU3Ek__BackingField_10() { return &___U3CTailU3Ek__BackingField_10; }
	inline void set_U3CTailU3Ek__BackingField_10(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * value)
	{
		___U3CTailU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTailU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_Basin_11() { return static_cast<int32_t>(offsetof(DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6, ___Basin_11)); }
	inline DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F * get_Basin_11() const { return ___Basin_11; }
	inline DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F ** get_address_of_Basin_11() { return &___Basin_11; }
	inline void set_Basin_11(DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F * value)
	{
		___Basin_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Basin_11), (void*)value);
	}

	inline static int32_t get_offset_of_EdgeEvent_12() { return static_cast<int32_t>(offsetof(DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6, ___EdgeEvent_12)); }
	inline DTSweepEdgeEvent_t93472178B8E22740677AF3E5D255F96392BB8453 * get_EdgeEvent_12() const { return ___EdgeEvent_12; }
	inline DTSweepEdgeEvent_t93472178B8E22740677AF3E5D255F96392BB8453 ** get_address_of_EdgeEvent_12() { return &___EdgeEvent_12; }
	inline void set_EdgeEvent_12(DTSweepEdgeEvent_t93472178B8E22740677AF3E5D255F96392BB8453 * value)
	{
		___EdgeEvent_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EdgeEvent_12), (void*)value);
	}

	inline static int32_t get_offset_of__comparator_13() { return static_cast<int32_t>(offsetof(DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6, ____comparator_13)); }
	inline DTSweepPointComparator_tA06245D62FBBEE946B1A620CC845F88B08BFF9A0 * get__comparator_13() const { return ____comparator_13; }
	inline DTSweepPointComparator_tA06245D62FBBEE946B1A620CC845F88B08BFF9A0 ** get_address_of__comparator_13() { return &____comparator_13; }
	inline void set__comparator_13(DTSweepPointComparator_tA06245D62FBBEE946B1A620CC845F88B08BFF9A0 * value)
	{
		____comparator_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparator_13), (void*)value);
	}
};


// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.ProBuilder.Poly2Tri.PointOnEdgeException
struct PointOnEdgeException_t4386B844F234AEDBCA71E45B92DF52B24899056C  : public NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6
{
public:
	// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.PointOnEdgeException::A
	TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___A_17;
	// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.PointOnEdgeException::B
	TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___B_18;
	// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.PointOnEdgeException::C
	TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___C_19;

public:
	inline static int32_t get_offset_of_A_17() { return static_cast<int32_t>(offsetof(PointOnEdgeException_t4386B844F234AEDBCA71E45B92DF52B24899056C, ___A_17)); }
	inline TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * get_A_17() const { return ___A_17; }
	inline TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 ** get_address_of_A_17() { return &___A_17; }
	inline void set_A_17(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * value)
	{
		___A_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___A_17), (void*)value);
	}

	inline static int32_t get_offset_of_B_18() { return static_cast<int32_t>(offsetof(PointOnEdgeException_t4386B844F234AEDBCA71E45B92DF52B24899056C, ___B_18)); }
	inline TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * get_B_18() const { return ___B_18; }
	inline TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 ** get_address_of_B_18() { return &___B_18; }
	inline void set_B_18(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * value)
	{
		___B_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___B_18), (void*)value);
	}

	inline static int32_t get_offset_of_C_19() { return static_cast<int32_t>(offsetof(PointOnEdgeException_t4386B844F234AEDBCA71E45B92DF52B24899056C, ___C_19)); }
	inline TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * get_C_19() const { return ___C_19; }
	inline TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 ** get_address_of_C_19() { return &___C_19; }
	inline void set_C_19(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * value)
	{
		___C_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___C_19), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.ProBuilder.Poly2Tri.PolygonPoint[]
struct PolygonPointU5BU5D_t9EE452CC0ABCCCCDFEFA006759E88CE6642C00FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PolygonPoint_t65F05B806EA33FEE1AFFDB2DC71F5445B3A5DEB5 * m_Items[1];

public:
	inline PolygonPoint_t65F05B806EA33FEE1AFFDB2DC71F5445B3A5DEB5 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PolygonPoint_t65F05B806EA33FEE1AFFDB2DC71F5445B3A5DEB5 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PolygonPoint_t65F05B806EA33FEE1AFFDB2DC71F5445B3A5DEB5 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PolygonPoint_t65F05B806EA33FEE1AFFDB2DC71F5445B3A5DEB5 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PolygonPoint_t65F05B806EA33FEE1AFFDB2DC71F5445B3A5DEB5 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PolygonPoint_t65F05B806EA33FEE1AFFDB2DC71F5445B3A5DEB5 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// T UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * FixedArray3_1_get_Item_mF31B728D9A568BCFDE2334318DEF06E533818CF0_gshared (FixedArray3_1_t1C8F0CB8469C067F80F60694B513299DC4C2E48E * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedArray3_1_Clear_mC0F91C76AC72B4321BCA01666C5DFE26680C57A9_gshared (FixedArray3_1_t1C8F0CB8469C067F80F60694B513299DC4C2E48E * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Collections.Generic.IComparer`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mE77C107ECF54AE2B83D6CA1BEFE9D5B45F69D332_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedArray3_1_set_Item_mE2830DBC4D69E187B7DB80CEBE8689E62C61C08A_gshared (FixedArray3_1_t1C8F0CB8469C067F80F60694B513299DC4C2E48E * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Int32 UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FixedArray3_1_IndexOf_mD26D2C044BD440C349733BD6523F1D9F534D8B5E_gshared (FixedArray3_1_t1C8F0CB8469C067F80F60694B513299DC4C2E48E * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FixedArray3_1_Contains_mC9E472FD38FA7534DF986F0F28036C1B83541EE9_gshared (FixedArray3_1_t1C8F0CB8469C067F80F60694B513299DC4C2E48E * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Cast<System.Object>(System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Cast_TisRuntimeObject_mA62FD77428C83396A58C8D112B0E7D2D6A1467A4_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::AddNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancingFront_AddNode_m60F733E1BA7F895B3C41E5898DEB155A3BEEB6FC (AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5 * __this, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___node0, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m7AB8F81608D77A17FF201F39EE04A2E417C86995 (StringBuilder_t * __this, double ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::LocateNode(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * AdvancingFront_LocateNode_mB9F6321C761D88AD19D51C2678B866EF912E6BB2 (AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5 * __this, double ___x0, const RuntimeMethod* method);
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::FindSearchNode(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * AdvancingFront_FindSearchNode_m99E2AB5B7019507B236DD0974913948D3FA7615D_inline (AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5 * __this, double ___x0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::CreateAdvancingFront()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_CreateAdvancingFront_mA3A418782FCDB858C81C5C283D32C49E3BEC0481 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::Sweep(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_Sweep_m9E22D9307289E85F42EAA3BDE6AF171BDA247C91 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, const RuntimeMethod* method);
// UnityEngine.ProBuilder.Poly2Tri.TriangulationMode UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_TriangulationMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TriangulationContext_get_TriangulationMode_mEC24ABA5BBC324647459584EB532096611657E7F_inline (TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FinalizationPolygon(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FinalizationPolygon_m16F981BC268AB90FE6795C066A1F0F50105DB02F (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FinalizationConvexHull(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FinalizationConvexHull_mAC472E0C158ABEAE4335006581F53F430753146E (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::Done()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_Done_m65B0BC2606220F855765B1DB1606970127583A3F (TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::get_Item(System.Int32)
inline TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * List_1_get_Item_mE06167D06E964FADCFCA04A29A837372026B8F58_inline (List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * (*) (List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.DTSweep::PointEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * DTSweep_PointEvent_m4ADE57F102C34B4E2EF2CE40D8681F52F2F57945 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___point1, const RuntimeMethod* method);
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::get_HasEdges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriangulationPoint_get_HasEdges_mBE4B610C0C057267AB792718C06B483ADD2E114E (TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint> UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::get_Edges()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t4C92CD4575EFD7FEC3CBE8B7B36CE69C2466C90D * TriangulationPoint_get_Edges_m05131177AD065973F26F9ED35B2BBA500925ACAD_inline (TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint>::GetEnumerator()
inline Enumerator_tC99C2EF25B7D2F943A44864B2803657E90082810  List_1_GetEnumerator_m2D689DD2438D265F432A7DF8B3ED5793765E6ADC (List_1_t4C92CD4575EFD7FEC3CBE8B7B36CE69C2466C90D * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC99C2EF25B7D2F943A44864B2803657E90082810  (*) (List_1_t4C92CD4575EFD7FEC3CBE8B7B36CE69C2466C90D *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint>::get_Current()
inline DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * Enumerator_get_Current_mB22EBD5239C9A927E80044C4F084715C92B8C549_inline (Enumerator_tC99C2EF25B7D2F943A44864B2803657E90082810 * __this, const RuntimeMethod* method)
{
	return ((  DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * (*) (Enumerator_tC99C2EF25B7D2F943A44864B2803657E90082810 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_DTDebugContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DTSweepDebugContext_t1118374B297F625192528B23AD580B5AB9F9EDF5 * TriangulationContext_get_DTDebugContext_mEB43D96C7FD8DF25879619B69D1537270A134AD5 (TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::set_ActiveConstraint(UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_set_ActiveConstraint_m95F1078CB89E202814AB38B164802036D4F025CF (DTSweepDebugContext_t1118374B297F625192528B23AD580B5AB9F9EDF5 * __this, DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::EdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_EdgeEvent_mF05EF3FB350D8392B0E079E6208F025431149DF0 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * ___edge1, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___node2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint>::MoveNext()
inline bool Enumerator_MoveNext_m0A6F9F37911DCA006E751E7703373EC01807BA3C (Enumerator_tC99C2EF25B7D2F943A44864B2803657E90082810 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC99C2EF25B7D2F943A44864B2803657E90082810 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint>::Dispose()
inline void Enumerator_Dispose_mE3FC07A0B422A3B74C28DF9BE4D8FADF180BF90F (Enumerator_tC99C2EF25B7D2F943A44864B2803657E90082810 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC99C2EF25B7D2F943A44864B2803657E90082810 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::Update(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_Update_m40FD753CAF54F292C95C884B8F719A9E58E3845A (TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::get_Count()
inline int32_t List_1_get_Count_m9B7C9FC5FABEF16AED60E58722815716AAD10784_inline (List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::TurnAdvancingFrontConvex(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_TurnAdvancingFrontConvex_mC5A72313FC5E2B964FBA05FADC0BE655C7259119 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___b1, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___c2, const RuntimeMethod* method);
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::Contains(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_Contains_m9095AF9E942F7EA944FE21C567086C6890A9B2BF (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p0, const RuntimeMethod* method);
// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::NeighborAcrossFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * DelaunayTriangle_NeighborAcrossFrom_m0CF00F9AF2656B9E6B3FB590AB2DABF2DA946252 (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___point0, const RuntimeMethod* method);
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::OppositePoint(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * DelaunayTriangle_OppositePoint_mCCD125CD7C6BE7113AAC180FF37066F9802967CE (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___t0, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p1, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::RotateTrianglePair(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_RotateTrianglePair_m3450E956082B91F301372C30E9C2545454C495F4 (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___t0, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p1, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___ot2, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___op3, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::MapTriangleToNodes(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_MapTriangleToNodes_m88F0ECE533C928433E975FC7409E8A63A39B89FB (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * __this, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___t0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::RemoveFromList(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_RemoveFromList_m576659B7DB18CC2646B15A5C471B42A79FD32A73 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * __this, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___triangle0, const RuntimeMethod* method);
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::PointCCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * DelaunayTriangle_PointCCWFrom_m701498FBCC2D5A858262F0D9A21BF2DAAB6EDF60 (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___point0, const RuntimeMethod* method);
// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::NeighborCCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * DelaunayTriangle_NeighborCCWFrom_mFC8DC101483E5DA3FA8D4FFC3E724529DDFB79A4 (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___point0, const RuntimeMethod* method);
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::PointCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * DelaunayTriangle_PointCWFrom_m7F83BA541E2E5F811A73467832BB7A7FE557FBB4 (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___point0, const RuntimeMethod* method);
// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::NeighborCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * DelaunayTriangle_NeighborCWFrom_m02FE93F770765BFFB25A2366C267C2D3FC97C91D (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___point0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::FinalizeTriangulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_FinalizeTriangulation_mF13CC7740664B3ED71D8A264B93D2DC66386FEE9 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::set_ActiveNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_set_ActiveNode_m8CEF7E12336372A4DDA30B90BBDF1C210E2A7D18 (DTSweepDebugContext_t1118374B297F625192528B23AD580B5AB9F9EDF5 * __this, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___value0, const RuntimeMethod* method);
// UnityEngine.ProBuilder.Poly2Tri.Orientation UnityEngine.ProBuilder.Poly2Tri.TriangulationUtil::Orient2d(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TriangulationUtil_Orient2d_m2CDE17B5E70FD361C8BA5DF3764136DC172C5996 (TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___pa0, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___pb1, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___pc2, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::Fill(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_Fill_mE575B5EEFBF91F9BF0D8A94D08D7E6C72653A191 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___node1, const RuntimeMethod* method);
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::GetConstrainedEdgeCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_GetConstrainedEdgeCW_mE2064A27D685D45643A3BC58481B69ABB9FAC298 (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::MeshClean(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_MeshClean_m5D3779C14BD179543317D5954689197E1C8E4E9C (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * __this, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___triangle0, const RuntimeMethod* method);
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::LocateNode(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * DTSweepContext_LocateNode_m20AABA18D57E08A62008463F29A4CAF039BA26B6 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___point0, const RuntimeMethod* method);
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.DTSweep::NewFrontTriangle(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * DTSweep_NewFrontTriangle_m3B65F6147E9842FFB86FEB7F79B9792995F74D83 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___point1, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___node2, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::AddNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_AddNode_m9796D7A28F9F8E594F9AA12FAD3B41277597C8D3 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * __this, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___node0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillAdvancingFront(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillAdvancingFront_m609926E19EBAA69F6BFE6B36F45EA77FFABB586D (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___n1, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::.ctor(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle__ctor_mFF50163C04BA34186ADB11D7B63F8904F2E09F7C (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p10, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p21, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p32, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::MarkNeighbor(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_MarkNeighbor_m285227BC79816BB67CE729657065E27173CAFFCB (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___t0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>::Add(!0)
inline void List_1_Add_m62D2D60A23EE7E5FFE5B6AA0BAF8A7D6BA1E52D7 (List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977 * __this, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977 *, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode::.ctor(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancingFrontNode__ctor_m54212F4AF6A60211FC0CC17FE28C24A63C79D69A (AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___point0, const RuntimeMethod* method);
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DTSweep::Legalize(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DTSweep_Legalize_m9CA920D196E94FA30CB8AF44E61C834983219960 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___t1, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::set_PrimaryTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_set_PrimaryTriangle_mB948F030C8DC7369C96D02BF8A8CB79BA4B47F24 (DTSweepDebugContext_t1118374B297F625192528B23AD580B5AB9F9EDF5 * __this, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DTSweep::IsEdgeSideOfTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DTSweep_IsEdgeSideOfTriangle_m910E59F71540D478E47EE9549BCC2EA6687610D2 (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___triangle0, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___ep1, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___eq2, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillEdgeEvent_mC6CA0FD6CAD8582512C429DC4086414D765EB8C8 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * ___edge1, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___node2, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::EdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_EdgeEvent_m820916D4B17A0AB8C083F9441498EA82F1E7AB32 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___ep1, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___eq2, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___triangle3, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___point4, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillRightAboveEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillRightAboveEdgeEvent_m42262C37FC4B63074EEB5AF8ED678E175A6D5C84 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * ___edge1, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___node2, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillLeftAboveEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillLeftAboveEdgeEvent_mEF257C979D572EAE6F7A95A21F45CCF90FB282EA (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * ___edge1, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___node2, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillRightConcaveEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillRightConcaveEdgeEvent_m8BC03DD3198C355EBC5A1457A4578FB3DD689B9E (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * ___edge1, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___node2, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillRightConvexEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillRightConvexEdgeEvent_mBE903B7CB7F8D055341779DEB57C6976095E5872 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * ___edge1, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___node2, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillRightBelowEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillRightBelowEdgeEvent_m525E37427D7BCF5E33B57C94F3E87C2C2DC3B64A (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * ___edge1, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___node2, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillLeftConcaveEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillLeftConcaveEdgeEvent_m39EAB53A01445193AFF7895BF5A3578A944EA781 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * ___edge1, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___node2, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillLeftConvexEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillLeftConvexEdgeEvent_m4D0934D67D23E00991151A0596ABB81F07F32D75 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * ___edge1, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___node2, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillLeftBelowEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillLeftBelowEdgeEvent_m3DBB6FD18BE7661F5BF3B5CDAD2C0C6FDB31A283 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * ___edge1, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___node2, const RuntimeMethod* method);
// System.Int32 UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::EdgeIndex(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DelaunayTriangle_EdgeIndex_m77EB021F9878EB52690AE793D2473F7856938F04 (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p10, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p21, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::MarkConstrainedEdge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_MarkConstrainedEdge_mD5F5305BEFB685C1FC80AB2E1E44DCC602B2CDF3 (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, int32_t ___index0, const RuntimeMethod* method);
// T UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>::get_Item(System.Int32)
inline DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * FixedArray3_1_get_Item_m5EC6D4DA8D086DDC58E068ABA1B8F30C98E4D1CA (FixedArray3_1_tDB222AD5E30A16C9D8C257978FFD6780A962B922 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * (*) (FixedArray3_1_tDB222AD5E30A16C9D8C257978FFD6780A962B922 *, int32_t, const RuntimeMethod*))FixedArray3_1_get_Item_mF31B728D9A568BCFDE2334318DEF06E533818CF0_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::MarkConstrainedEdge(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_MarkConstrainedEdge_m07868BE5BF7BBFE8810779495460DF9524FB5219 (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p0, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___q1, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.PointOnEdgeException::.ctor(System.String,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointOnEdgeException__ctor_mA50E0D3502E354A1708F96720F24878F5FC7EE72 (PointOnEdgeException_t4386B844F234AEDBCA71E45B92DF52B24899056C * __this, String_t* ___message0, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___a1, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___b2, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___c3, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FlipEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FlipEdgeEvent_m8EDDECF4B8FF820B92026F3DA51FF29D2211EAD2 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___ep1, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___eq2, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___t3, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p4, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::set_SecondaryTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_set_SecondaryTriangle_m0B5449D47E7722E6B0F8869E167862C6C0022EAD (DTSweepDebugContext_t1118374B297F625192528B23AD580B5AB9F9EDF5 * __this, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationUtil::InScanArea(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriangulationUtil_InScanArea_m0410D0FD71FC8E22EB0D6B9128B72778A5AABC60 (TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___pa0, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___pb1, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___pc2, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___pd3, const RuntimeMethod* method);
// System.Void System.Console::WriteLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_WriteLine_mE9EEA95C541D41E36A0F4844153A67EAAA0D12F7 (String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle UnityEngine.ProBuilder.Poly2Tri.DTSweep::NextFlipTriangle(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.Orientation,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * DTSweep_NextFlipTriangle_mD958DB4F11E0B8EE2C99D52A5CC42B429F99830E (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, int32_t ___o1, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___t2, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___ot3, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p4, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___op5, const RuntimeMethod* method);
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DTSweep::NextFlipPoint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * DTSweep_NextFlipPoint_m3FEDD2B15425AFC79E0103541A3E75A2A05F3A2A (TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___ep0, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___eq1, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___ot2, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___op3, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FlipScanEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FlipScanEdgeEvent_mAC545BE0D9BD844053EB746202D98C21D39C6ADC (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___ep1, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___eq2, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___flipTriangle3, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___t4, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p5, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8A9AA4499614A5BC57DD21713D0720630C130AEB (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::set_Item(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedBitArray3_set_Item_mE1DF6CC301313E76DBB57477F11DC4DE41BED620 (FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * __this, int32_t ___index0, bool ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedBitArray3_Clear_m3EB290806E96B94C74D04D944BD6501FBCC89696 (FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * __this, const RuntimeMethod* method);
// System.Double UnityEngine.ProBuilder.Poly2Tri.DTSweep::HoleAngle(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double DTSweep_HoleAngle_m0AFE3CDC5748C27E7729EDA981BA97E695E83F95 (AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___node0, const RuntimeMethod* method);
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode::get_HasNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdvancingFrontNode_get_HasNext_m405B1A3BF18783AB2494DF7C47D1E4A34ACBF546 (AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode::get_HasPrev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdvancingFrontNode_get_HasPrev_m1D837180F5BC57D61286BB0084C794BBA91825F5 (AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * __this, const RuntimeMethod* method);
// System.Double UnityEngine.ProBuilder.Poly2Tri.DTSweep::BasinAngle(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double DTSweep_BasinAngle_mA5F862BFBC2E0F3B1A57D195F883ED9C6A07CCD8 (AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___node0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillBasin(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillBasin_m02629657BEAFAC60C9F2CCACEC536E8BAD144A5C (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___node1, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillBasinReq(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillBasinReq_m81151DDC92103ACDAD0D03486B0EFB1AD67A0D27 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___node1, const RuntimeMethod* method);
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DTSweep::IsShallow(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DTSweep_IsShallow_mB2BB317ED6DB44FF1F751861FC72E765A4D7AD01 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___node1, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::RemoveNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_RemoveNode_mB40B2110E119D78E65A20BC1CF2B4BF71CDBBD2C (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * __this, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___node0, const RuntimeMethod* method);
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FixedBitArray3_get_Item_m8D1568A202E819BFCF3AEADA4CBF1661024202F9 (FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * __this, int32_t ___index0, const RuntimeMethod* method);
// T UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::get_Item(System.Int32)
inline TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194 (FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * (*) (FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 *, int32_t, const RuntimeMethod*))FixedArray3_1_get_Item_mF31B728D9A568BCFDE2334318DEF06E533818CF0_gshared)(__this, ___index0, method);
}
// System.Int32 UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::IndexOf(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DelaunayTriangle_IndexOf_m6BCB717AAD454FA4C1BBBDC0ECDCAF661AE03C28 (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationUtil::SmartIncircle(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriangulationUtil_SmartIncircle_m3CE2F3FC7F1F8E48BF83AA5B6E6418FE84C6350B (TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___pa0, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___pb1, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___pc2, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___pd3, const RuntimeMethod* method);
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::GetConstrainedEdgeCCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_GetConstrainedEdgeCCW_m3DC304D59FAE4EF048270297C27E9A1E1A9670B1 (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::GetDelaunayEdgeCCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_GetDelaunayEdgeCCW_m227568FC0CCAFF32B1734AF2B51CEAFFADFE2473 (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::GetDelaunayEdgeCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_GetDelaunayEdgeCW_m1ED1DD14D1427DE77DFF40D9B277B59D7FE12E5C (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::Legalize(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_Legalize_mB5724EDB6D934EA120F603A00FD03FA58FF1C0A6 (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___oPoint0, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___nPoint1, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::SetDelaunayEdgeCCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_SetDelaunayEdgeCCW_mF3C7C3D377FCC42EB6C0579811239268AFCC3910 (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p0, bool ___ce1, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::SetDelaunayEdgeCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_SetDelaunayEdgeCW_m69E2B9285730F7589EF0EF654C40B1293C9D9A1F (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p0, bool ___ce1, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::SetConstrainedEdgeCCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_SetConstrainedEdgeCCW_m2572187034377571822BC00D3D8DD7301685B998 (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p0, bool ___ce1, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::SetConstrainedEdgeCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_SetConstrainedEdgeCW_mCF6EE193DD79D94338CBA160ACF193AE936803A2 (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p0, bool ___ce1, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>::Clear()
inline void FixedArray3_1_Clear_m87AFCDF5E433608D9B74CEF72D42EB82056AC4BA (FixedArray3_1_tDB222AD5E30A16C9D8C257978FFD6780A962B922 * __this, const RuntimeMethod* method)
{
	((  void (*) (FixedArray3_1_tDB222AD5E30A16C9D8C257978FFD6780A962B922 *, const RuntimeMethod*))FixedArray3_1_Clear_mC0F91C76AC72B4321BCA01666C5DFE26680C57A9_gshared)(__this, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationConstraint__ctor_m5F6D0518ADA1B37E23BA3952B3376D0A95208FC4 (TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::AddEdge(UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationPoint_AddEdge_m6E74DA90A1DDEBDA48DD4E30450B7872D9FFA668 (TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * __this, DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * ___e0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepBasin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepBasin__ctor_mF1A6D90C18129FADCC4C6DC56AFF825EC3DEC2A3 (DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepEdgeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepEdgeEvent__ctor_m12AEE65B03999D9E769BE13913761062CEC3FF40 (DTSweepEdgeEvent_t93472178B8E22740677AF3E5D255F96392BB8453 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepPointComparator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepPointComparator__ctor_mB3BC631FB28C5B61DBB14B65047BEBAA0FBB0ACC (DTSweepPointComparator_tA06245D62FBBEE946B1A620CC845F88B08BFF9A0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext__ctor_m1D431BC62D99FB0A6B76E27A4C5630BFAFE15219 (TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TriangulationContext_get_IsDebugEnabled_mB588E97116825F0BF8B424AA329DA89394CA7B4B_inline (TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>::Remove(!0)
inline bool List_1_Remove_mCC33FE951C2F5B95887E8E03067CCF052A224C31 (List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977 * __this, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977 *, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::MeshCleanReq(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_MeshCleanReq_m4A9A93EDBF20D04911F505305602D9475F548FEE (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * __this, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___triangle0, const RuntimeMethod* method);
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::get_IsInterior()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DelaunayTriangle_get_IsInterior_m4CD9DD161937111148252D31D6B54BED24C786AD_inline (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::set_IsInterior(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DelaunayTriangle_set_IsInterior_m0597F66983E07892CB01C418704B985223723C6F_inline (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.ProBuilder.Poly2Tri.Triangulatable UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_Triangulatable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TriangulationContext_get_Triangulatable_mEEA9131F5A5B1B07B03F883D36BBA6971F59E54C_inline (TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_Clear_m9005CBB1B42C4183908A74BC225AE9E1856F82C7 (TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>::Clear()
inline void List_1_Clear_m863A3092DEECFDD22703F6B331A2B235520F2AD5 (List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::RemoveNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancingFront_RemoveNode_m93B858B266DC7FED65FCC073BED3371230D3A9E8 (AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5 * __this, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___node0, const RuntimeMethod* method);
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::LocateNode(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * AdvancingFront_LocateNode_m3026C657A485B7F04D9E1A4156E752983AAF8D55 (AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5 * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___point0, const RuntimeMethod* method);
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::get_Tail()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * DTSweepContext_get_Tail_mA33F0BE5B349C0D50FADA8195F60C45B8C4CD588_inline (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * __this, const RuntimeMethod* method);
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::get_Head()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * DTSweepContext_get_Head_mA11E321587EF7EA818C12222EE3E25F1B05A49BB_inline (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::.ctor(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancingFront__ctor_m3353218BB24D87269ED563150ED15B46AF97A4EA (AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5 * __this, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___head0, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___tail1, const RuntimeMethod* method);
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::LocatePoint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * AdvancingFront_LocatePoint_m670D5AB0C5273114BF896A38FC2F31C944FFF4E3 (AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5 * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___point0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::PrepareTriangulation(UnityEngine.ProBuilder.Poly2Tri.Triangulatable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_PrepareTriangulation_mED56579E890E721D2E3BE829BDDBDC8E47114E4D (TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * __this, RuntimeObject* ___t0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::GetEnumerator()
inline Enumerator_tCB7700EF6C700D919B5681132CA978C465D2C1C9  List_1_GetEnumerator_m28CEC327F311D6DCEBDBA35FA101A6ECA119A987 (List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCB7700EF6C700D919B5681132CA978C465D2C1C9  (*) (List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::get_Current()
inline TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * Enumerator_get_Current_mA186985A5D675FEA828DDA51AC186940253A4A39_inline (Enumerator_tCB7700EF6C700D919B5681132CA978C465D2C1C9 * __this, const RuntimeMethod* method)
{
	return ((  TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * (*) (Enumerator_tCB7700EF6C700D919B5681132CA978C465D2C1C9 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::MoveNext()
inline bool Enumerator_MoveNext_m7F7D1D02D0A40C2816FDD39923536B62937029F9 (Enumerator_tCB7700EF6C700D919B5681132CA978C465D2C1C9 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCB7700EF6C700D919B5681132CA978C465D2C1C9 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::Dispose()
inline void Enumerator_Dispose_m30FA729B7A7A51E3E070CC925E53E7B830A18245 (Enumerator_tCB7700EF6C700D919B5681132CA978C465D2C1C9 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCB7700EF6C700D919B5681132CA978C465D2C1C9 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::.ctor(System.Double,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationPoint__ctor_m19991687F91CB02AAA27D2D67EE2F412CFFF4F34 (TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * __this, double ___x0, double ___y1, int32_t ___index2, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::set_Head(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DTSweepContext_set_Head_mFAF735C4137345C84587C4BF2C32E4E584847C9E_inline (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::set_Tail(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DTSweepContext_set_Tail_m6FFFE304B826B407005CC262435E36A21F8BC77B_inline (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::Sort(System.Collections.Generic.IComparer`1<!0>)
inline void List_1_Sort_m0143D618FF5567E8B804B320D90BFAB367A605FC (List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 *, RuntimeObject*, const RuntimeMethod*))List_1_Sort_mE77C107ECF54AE2B83D6CA1BEFE9D5B45F69D332_gshared)(__this, ___comparer0, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint::.ctor(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepConstraint__ctor_m233D63E48829740D15B743D30C85B04152B21F26 (DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p10, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p21, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::set_ActivePoint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_set_ActivePoint_m365F37AC439B9AEB456EFAD9B41FBCA57054A2F4 (DTSweepDebugContext_t1118374B297F625192528B23AD580B5AB9F9EDF5 * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::set_Item(System.Int32,T)
inline void FixedArray3_1_set_Item_mE30BF433CD2BE14F750A52FE2E653BFFB68BA905 (FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 * __this, int32_t ___index0, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 *, int32_t, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 *, const RuntimeMethod*))FixedArray3_1_set_Item_mE2830DBC4D69E187B7DB80CEBE8689E62C61C08A_gshared)(__this, ___index0, ___value1, method);
}
// System.Int32 UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::IndexOf(T)
inline int32_t FixedArray3_1_IndexOf_m8085D0B04FA38EA30610C60164BB83A03A7DE838 (FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___value0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 *, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 *, const RuntimeMethod*))FixedArray3_1_IndexOf_mD26D2C044BD440C349733BD6523F1D9F534D8B5E_gshared)(__this, ___value0, method);
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::Contains(T)
inline bool FixedArray3_1_Contains_m9DB004E73DDC1CE846CD0752B53E96E0601BDF4A (FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___value0, const RuntimeMethod* method)
{
	return ((  bool (*) (FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 *, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 *, const RuntimeMethod*))FixedArray3_1_Contains_mC9E472FD38FA7534DF986F0F28036C1B83541EE9_gshared)(__this, ___value0, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>::set_Item(System.Int32,T)
inline void FixedArray3_1_set_Item_m3E39BD962A4540BB857DA849B848A544F55C64A1 (FixedArray3_1_tDB222AD5E30A16C9D8C257978FFD6780A962B922 * __this, int32_t ___index0, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___value1, const RuntimeMethod* method)
{
	((  void (*) (FixedArray3_1_tDB222AD5E30A16C9D8C257978FFD6780A962B922 *, int32_t, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A *, const RuntimeMethod*))FixedArray3_1_set_Item_mE2830DBC4D69E187B7DB80CEBE8689E62C61C08A_gshared)(__this, ___index0, ___value1, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::MarkNeighbor(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_MarkNeighbor_m172FF46906F1199292847C7F69B2C165C65867FF (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p10, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p21, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::RotateCW()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_RotateCW_m8F514995965FFE85811B543310D9E21B8DCF3C11 (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::IndexCCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DelaunayTriangle_IndexCCWFrom_mC19C42734AD70ABB9F3BB5915652F7A87A34103E (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523 (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/<Enumerate>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__10__ctor_m61B12FBBE681A532005BED0A0682870F1A238AF9 (U3CEnumerateU3Ed__10_tB632C8EC1E46E07540D45000AF54B403F3DD27F2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Boolean> UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::Enumerate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FixedBitArray3_Enumerate_mC98B64F0506E3EEA4045BF330207C76B074A5549 (FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Boolean> UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FixedBitArray3_GetEnumerator_mE95C0A75A6E092134C15BFA45E4DC84EEA68C4CF (FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FixedBitArray3_System_Collections_IEnumerable_GetEnumerator_m3DDFBD8C30CBD1C643ED355BC618A8B771400E6D (FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_m680F69753F4999862220339209395058E8D2C0A3 (List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared)(__this, ___collection0, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.PointSet::set_Points(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointSet_set_Points_mE9E79785A3BC1645B2DFF463BFA436584219ED14_inline (PointSet_t28416B695BA46DA0157C11A570D5871D41DCBC18 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> UnityEngine.ProBuilder.Poly2Tri.PointSet::get_Triangles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PointSet_get_Triangles_m7D2051C22E3A59F5F0FB0326797A481E1B1AE51B_inline (PointSet_t28416B695BA46DA0157C11A570D5871D41DCBC18 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> UnityEngine.ProBuilder.Poly2Tri.PointSet::get_Points()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PointSet_get_Points_m666716840BC6FBD67904828D5EB2A8A1A2026878_inline (PointSet_t28416B695BA46DA0157C11A570D5871D41DCBC18 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>::.ctor(System.Int32)
inline void List_1__ctor_mD634702CD0DC9A158892E97846D1B48F9EF8DF05 (List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977 *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.PointSet::set_Triangles(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointSet_set_Triangles_mA6863D1F11ABB70D1914A26ACA4E102E45DDF4CB_inline (PointSet_t28416B695BA46DA0157C11A570D5871D41DCBC18 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_mC2E5CF4FA59DECCCD954A2A90914217F7B1C417A (List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::.ctor()
inline void List_1__ctor_mF4A925958B5D6E175E10E9FCD929F56481228895 (List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Cast<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>(System.Collections.IEnumerable)
inline RuntimeObject* Enumerable_Cast_TisTriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10_mBB03BCF6EC9FD1B651A3996C5A0B0695A8CD8C72 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Cast_TisRuntimeObject_mA62FD77428C83396A58C8D112B0E7D2D6A1467A4_gshared)(___source0, method);
}
// !!0[] System.Linq.Enumerable::ToArray<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint>(System.Collections.Generic.IEnumerable`1<!!0>)
inline PolygonPointU5BU5D_t9EE452CC0ABCCCCDFEFA006759E88CE6642C00FA* Enumerable_ToArray_TisPolygonPoint_t65F05B806EA33FEE1AFFDB2DC71F5445B3A5DEB5_m0B5651C20D1CA93A7719810CFF9106ADE9EB13FF (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  PolygonPointU5BU5D_t9EE452CC0ABCCCCDFEFA006759E88CE6642C00FA* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared)(___source0, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.Polygon::.ctor(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon__ctor_mE36F5C9F43B17E76CAEB61494832C9B83C35DE1B (Polygon_tCBEEF355994B422EB6585B902F8011F753D0C87D * __this, RuntimeObject* ___points0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.Polygon>::.ctor()
inline void List_1__ctor_mEFEED8EB4D812139C21DDD4F8F0B675245610F03 (List_1_tFDD914A6846665E3B49FEB2E66168F9018B3DF51 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFDD914A6846665E3B49FEB2E66168F9018B3DF51 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.Polygon>::Add(!0)
inline void List_1_Add_mEB7C6700237B7CBD7B0A9F87B811C0D2D3CCC3FF (List_1_tFDD914A6846665E3B49FEB2E66168F9018B3DF51 * __this, Polygon_tCBEEF355994B422EB6585B902F8011F753D0C87D * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFDD914A6846665E3B49FEB2E66168F9018B3DF51 *, Polygon_tCBEEF355994B422EB6585B902F8011F753D0C87D *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m7C6364D4BC7523571AD507620469747CBDF7C194 (List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared)(__this, ___collection0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.Polygon>::GetEnumerator()
inline Enumerator_t1F94FA57AA2D3F577B34F7889158B05F1BD00CDB  List_1_GetEnumerator_mFCD1B6D29C25D72C298C38DC45A6E3518EE917B5 (List_1_tFDD914A6846665E3B49FEB2E66168F9018B3DF51 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1F94FA57AA2D3F577B34F7889158B05F1BD00CDB  (*) (List_1_tFDD914A6846665E3B49FEB2E66168F9018B3DF51 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.ProBuilder.Poly2Tri.Polygon>::get_Current()
inline Polygon_tCBEEF355994B422EB6585B902F8011F753D0C87D * Enumerator_get_Current_mAD1E55902FCF4A7BE0C623146BE7064E2F8423A1_inline (Enumerator_t1F94FA57AA2D3F577B34F7889158B05F1BD00CDB * __this, const RuntimeMethod* method)
{
	return ((  Polygon_tCBEEF355994B422EB6585B902F8011F753D0C87D * (*) (Enumerator_t1F94FA57AA2D3F577B34F7889158B05F1BD00CDB *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.ProBuilder.Poly2Tri.Polygon>::MoveNext()
inline bool Enumerator_MoveNext_m448402F75FF7214DFF16A5713279F17052475353 (Enumerator_t1F94FA57AA2D3F577B34F7889158B05F1BD00CDB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1F94FA57AA2D3F577B34F7889158B05F1BD00CDB *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.ProBuilder.Poly2Tri.Polygon>::Dispose()
inline void Enumerator_Dispose_m8D95288BE1FE9C3E64CD8839B94B267DFFFB5CD3 (Enumerator_t1F94FA57AA2D3F577B34F7889158B05F1BD00CDB * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1F94FA57AA2D3F577B34F7889158B05F1BD00CDB *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Int32 UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_StepCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TriangulationContext_get_StepCount_m3492A95A6CEF01FF2EC47AD2615F4C1172EE7BA8_inline (TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::set_StepCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TriangulationContext_set_StepCount_m998A18536E32A116A5403015AB628BBB1FFD208D_inline (TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::set_Triangulatable(UnityEngine.ProBuilder.Poly2Tri.Triangulatable)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TriangulationContext_set_Triangulatable_m18792811D1A0CAF4964E29C808695B9F345FE7A1_inline (TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::set_TriangulationMode(UnityEngine.ProBuilder.Poly2Tri.TriangulationMode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TriangulationContext_set_TriangulationMode_mD02349A0A30C62CA151D4D1B198C3FF672CE9F34_inline (TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::Clear()
inline void List_1_Clear_mD2B0280F9794A9899C7BB948CE9E2585D32C52CB (List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// UnityEngine.ProBuilder.Poly2Tri.TriangulationDebugContext UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_DebugContext()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TriangulationDebugContext_tB2690A971C0344C60D9E4DEBC8819ADE2D29F397 * TriangulationContext_get_DebugContext_m8A21EA50372C69937197D9A9DDB7B3C83A7EC7FA_inline (TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>::.ctor()
inline void List_1__ctor_m7E99250D3F7EC991F7D43A0A24070E9D8000BE6B (List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.String System.Double::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D (double* __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint>::.ctor()
inline void List_1__ctor_mFD857813532D375291D0F94362904563AC680D7F (List_1_t4C92CD4575EFD7FEC3CBE8B7B36CE69C2466C90D * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4C92CD4575EFD7FEC3CBE8B7B36CE69C2466C90D *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::set_Edges(System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TriangulationPoint_set_Edges_m5FBC473066E33A2155763E170A3A62A50CCC608B_inline (TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * __this, List_1_t4C92CD4575EFD7FEC3CBE8B7B36CE69C2466C90D * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint>::Add(!0)
inline void List_1_Add_mC79ED8B7F5592526EB43C74882641423CC3E2FCC (List_1_t4C92CD4575EFD7FEC3CBE8B7B36CE69C2466C90D * __this, DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4C92CD4575EFD7FEC3CBE8B7B36CE69C2466C90D *, DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D (const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Boolean> UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/<Enumerate>d__10::System.Collections.Generic.IEnumerable<System.Boolean>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__10_System_Collections_Generic_IEnumerableU3CSystem_BooleanU3E_GetEnumerator_mDAC26B322938C93936A58D36FD8238A262428A8B (U3CEnumerateU3Ed__10_tB632C8EC1E46E07540D45000AF54B403F3DD27F2 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::.ctor(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancingFront__ctor_m3353218BB24D87269ED563150ED15B46AF97A4EA (AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5 * __this, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___head0, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___tail1, const RuntimeMethod* method)
{
	{
		// public AdvancingFront( AdvancingFrontNode head, AdvancingFrontNode tail ) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.Head = head;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_0 = ___head0;
		__this->set_Head_0(L_0);
		// this.Tail = tail;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_1 = ___tail1;
		__this->set_Tail_1(L_1);
		// this.Search = head;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_2 = ___head0;
		__this->set_Search_2(L_2);
		// AddNode(head);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_3 = ___head0;
		AdvancingFront_AddNode_m60F733E1BA7F895B3C41E5898DEB155A3BEEB6FC(__this, L_3, /*hidden argument*/NULL);
		// AddNode(tail);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_4 = ___tail1;
		AdvancingFront_AddNode_m60F733E1BA7F895B3C41E5898DEB155A3BEEB6FC(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::AddNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancingFront_AddNode_m60F733E1BA7F895B3C41E5898DEB155A3BEEB6FC (AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5 * __this, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___node0, const RuntimeMethod* method)
{
	{
		// public void AddNode( AdvancingFrontNode node ) { }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::RemoveNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancingFront_RemoveNode_m93B858B266DC7FED65FCC073BED3371230D3A9E8 (AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5 * __this, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___node0, const RuntimeMethod* method)
{
	{
		// public void RemoveNode( AdvancingFrontNode node ) { }
		return;
	}
}
// System.String UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdvancingFront_ToString_m0C72C5734FD67265CC0A0D85A1889A12888B4EE8 (AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3860603B88C3C33FCEFF25F72FA3E650D2B25876);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * V_1 = NULL;
	{
		// StringBuilder sb = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// AdvancingFrontNode node = Head;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_1 = __this->get_Head_0();
		V_1 = L_1;
		goto IL_0032;
	}

IL_000f:
	{
		// sb.Append(node.Point.X).Append("->");
		StringBuilder_t * L_2 = V_0;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_3 = V_1;
		NullCheck(L_3);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_4 = L_3->get_Point_3();
		NullCheck(L_4);
		double L_5 = L_4->get_X_1();
		NullCheck(L_2);
		StringBuilder_t * L_6;
		L_6 = StringBuilder_Append_m7AB8F81608D77A17FF201F39EE04A2E417C86995(L_2, L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		StringBuilder_t * L_7;
		L_7 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_6, _stringLiteral3860603B88C3C33FCEFF25F72FA3E650D2B25876, /*hidden argument*/NULL);
		// node = node.Next;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_8 = V_1;
		NullCheck(L_8);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_9 = L_8->get_Next_0();
		V_1 = L_9;
	}

IL_0032:
	{
		// while (node != Tail) {
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_10 = V_1;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_11 = __this->get_Tail_1();
		if ((!(((RuntimeObject*)(AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 *)L_10) == ((RuntimeObject*)(AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 *)L_11))))
		{
			goto IL_000f;
		}
	}
	{
		// sb.Append(Tail.Point.X);
		StringBuilder_t * L_12 = V_0;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_13 = __this->get_Tail_1();
		NullCheck(L_13);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_14 = L_13->get_Point_3();
		NullCheck(L_14);
		double L_15 = L_14->get_X_1();
		NullCheck(L_12);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_m7AB8F81608D77A17FF201F39EE04A2E417C86995(L_12, L_15, /*hidden argument*/NULL);
		// return sb.ToString();
		StringBuilder_t * L_17 = V_0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_17);
		return L_18;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::FindSearchNode(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * AdvancingFront_FindSearchNode_m99E2AB5B7019507B236DD0974913948D3FA7615D (AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5 * __this, double ___x0, const RuntimeMethod* method)
{
	{
		// return Search;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_0 = __this->get_Search_2();
		return L_0;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::LocateNode(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * AdvancingFront_LocateNode_m3026C657A485B7F04D9E1A4156E752983AAF8D55 (AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5 * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___point0, const RuntimeMethod* method)
{
	{
		// return LocateNode(point.X);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_0 = ___point0;
		NullCheck(L_0);
		double L_1 = L_0->get_X_1();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_2;
		L_2 = AdvancingFront_LocateNode_mB9F6321C761D88AD19D51C2678B866EF912E6BB2(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::LocateNode(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * AdvancingFront_LocateNode_mB9F6321C761D88AD19D51C2678B866EF912E6BB2 (AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5 * __this, double ___x0, const RuntimeMethod* method)
{
	AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * V_0 = NULL;
	{
		// AdvancingFrontNode node = FindSearchNode(x);
		double L_0 = ___x0;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_1;
		L_1 = AdvancingFront_FindSearchNode_m99E2AB5B7019507B236DD0974913948D3FA7615D_inline(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (x < node.Value) {
		double L_2 = ___x0;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_3 = V_0;
		NullCheck(L_3);
		double L_4 = L_3->get_Value_2();
		if ((!(((double)L_2) < ((double)L_4))))
		{
			goto IL_004d;
		}
	}
	{
		goto IL_0025;
	}

IL_0013:
	{
		// if (x >= node.Value) {
		double L_5 = ___x0;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_6 = V_0;
		NullCheck(L_6);
		double L_7 = L_6->get_Value_2();
		if ((!(((double)L_5) >= ((double)L_7))))
		{
			goto IL_0025;
		}
	}
	{
		// Search = node;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_8 = V_0;
		__this->set_Search_2(L_8);
		// return node;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_9 = V_0;
		return L_9;
	}

IL_0025:
	{
		// while ((node = node.Prev) != null)
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_10 = V_0;
		NullCheck(L_10);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_11 = L_10->get_Prev_1();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_12 = L_11;
		V_0 = L_12;
		if (L_12)
		{
			goto IL_0013;
		}
	}
	{
		// } else {
		goto IL_0057;
	}

IL_0031:
	{
		// if (x < node.Value) {
		double L_13 = ___x0;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_14 = V_0;
		NullCheck(L_14);
		double L_15 = L_14->get_Value_2();
		if ((!(((double)L_13) < ((double)L_15))))
		{
			goto IL_004d;
		}
	}
	{
		// Search = node.Prev;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_16 = V_0;
		NullCheck(L_16);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_17 = L_16->get_Prev_1();
		__this->set_Search_2(L_17);
		// return node.Prev;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_18 = V_0;
		NullCheck(L_18);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_19 = L_18->get_Prev_1();
		return L_19;
	}

IL_004d:
	{
		// while ((node = node.Next) != null)
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_20 = V_0;
		NullCheck(L_20);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_21 = L_20->get_Next_0();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_22 = L_21;
		V_0 = L_22;
		if (L_22)
		{
			goto IL_0031;
		}
	}

IL_0057:
	{
		// return null;
		return (AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 *)NULL;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.AdvancingFront::LocatePoint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * AdvancingFront_LocatePoint_m670D5AB0C5273114BF896A38FC2F31C944FFF4E3 (AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5 * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___point0, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * V_1 = NULL;
	double V_2 = 0.0;
	{
		// double px = point.X;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_0 = ___point0;
		NullCheck(L_0);
		double L_1 = L_0->get_X_1();
		V_0 = L_1;
		// AdvancingFrontNode node = FindSearchNode(px);
		double L_2 = V_0;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_3;
		L_3 = AdvancingFront_FindSearchNode_m99E2AB5B7019507B236DD0974913948D3FA7615D_inline(__this, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// double nx = node.Point.X;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_4 = V_1;
		NullCheck(L_4);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_5 = L_4->get_Point_3();
		NullCheck(L_5);
		double L_6 = L_5->get_X_1();
		V_2 = L_6;
		// if (px == nx) {
		double L_7 = V_0;
		double L_8 = V_2;
		if ((!(((double)L_7) == ((double)L_8))))
		{
			goto IL_0061;
		}
	}
	{
		// if (point != node.Point) {
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_9 = ___point0;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_10 = V_1;
		NullCheck(L_10);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_11 = L_10->get_Point_3();
		if ((((RuntimeObject*)(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 *)L_9) == ((RuntimeObject*)(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 *)L_11)))
		{
			goto IL_008f;
		}
	}
	{
		// if (point == node.Prev.Point) {
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_12 = ___point0;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_13 = V_1;
		NullCheck(L_13);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_14 = L_13->get_Prev_1();
		NullCheck(L_14);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_15 = L_14->get_Point_3();
		if ((!(((RuntimeObject*)(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 *)L_12) == ((RuntimeObject*)(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 *)L_15))))
		{
			goto IL_003f;
		}
	}
	{
		// node = node.Prev;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_16 = V_1;
		NullCheck(L_16);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_17 = L_16->get_Prev_1();
		V_1 = L_17;
		// } else if (point == node.Next.Point) {
		goto IL_008f;
	}

IL_003f:
	{
		// } else if (point == node.Next.Point) {
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_18 = ___point0;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_19 = V_1;
		NullCheck(L_19);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_20 = L_19->get_Next_0();
		NullCheck(L_20);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_21 = L_20->get_Point_3();
		if ((!(((RuntimeObject*)(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 *)L_18) == ((RuntimeObject*)(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 *)L_21))))
		{
			goto IL_0056;
		}
	}
	{
		// node = node.Next;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_22 = V_1;
		NullCheck(L_22);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_23 = L_22->get_Next_0();
		V_1 = L_23;
		// } else {
		goto IL_008f;
	}

IL_0056:
	{
		// throw new Exception("Failed to find Node for given afront point");
		Exception_t * L_24 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_24, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A6129D3AF4D923F94C2DF172F5DA64D92B3C03C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AdvancingFront_LocatePoint_m670D5AB0C5273114BF896A38FC2F31C944FFF4E3_RuntimeMethod_var)));
	}

IL_0061:
	{
		// } else if (px < nx) {
		double L_25 = V_0;
		double L_26 = V_2;
		if ((!(((double)L_25) < ((double)L_26))))
		{
			goto IL_0085;
		}
	}
	{
		goto IL_0070;
	}

IL_0067:
	{
		// while ((node = node.Prev) != null) if (point == node.Point) break;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_27 = ___point0;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_28 = V_1;
		NullCheck(L_28);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_29 = L_28->get_Point_3();
		if ((((RuntimeObject*)(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 *)L_27) == ((RuntimeObject*)(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 *)L_29)))
		{
			goto IL_008f;
		}
	}

IL_0070:
	{
		// while ((node = node.Prev) != null) if (point == node.Point) break;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_30 = V_1;
		NullCheck(L_30);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_31 = L_30->get_Prev_1();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_32 = L_31;
		V_1 = L_32;
		if (L_32)
		{
			goto IL_0067;
		}
	}
	{
		// } else {
		goto IL_008f;
	}

IL_007c:
	{
		// while ((node = node.Next) != null) if (point == node.Point) break;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_33 = ___point0;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_34 = V_1;
		NullCheck(L_34);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_35 = L_34->get_Point_3();
		if ((((RuntimeObject*)(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 *)L_33) == ((RuntimeObject*)(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 *)L_35)))
		{
			goto IL_008f;
		}
	}

IL_0085:
	{
		// while ((node = node.Next) != null) if (point == node.Point) break;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_36 = V_1;
		NullCheck(L_36);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_37 = L_36->get_Next_0();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_38 = L_37;
		V_1 = L_38;
		if (L_38)
		{
			goto IL_007c;
		}
	}

IL_008f:
	{
		// Search = node;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_39 = V_1;
		__this->set_Search_2(L_39);
		// return node;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_40 = V_1;
		return L_40;
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
// System.Void UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode::.ctor(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancingFrontNode__ctor_m54212F4AF6A60211FC0CC17FE28C24A63C79D69A (AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___point0, const RuntimeMethod* method)
{
	{
		// public AdvancingFrontNode(TriangulationPoint point) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.Point = point;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_0 = ___point0;
		__this->set_Point_3(L_0);
		// Value = point.X;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_1 = ___point0;
		NullCheck(L_1);
		double L_2 = L_1->get_X_1();
		__this->set_Value_2(L_2);
		// }
		return;
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode::get_HasNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdvancingFrontNode_get_HasNext_m405B1A3BF18783AB2494DF7C47D1E4A34ACBF546 (AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * __this, const RuntimeMethod* method)
{
	{
		// public bool HasNext { get { return Next != null; } }
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_0 = __this->get_Next_0();
		return (bool)((!(((RuntimeObject*)(AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode::get_HasPrev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdvancingFrontNode_get_HasPrev_m1D837180F5BC57D61286BB0084C794BBA91825F5 (AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * __this, const RuntimeMethod* method)
{
	{
		// public bool HasPrev { get { return Prev != null; } }
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_0 = __this->get_Prev_1();
		return (bool)((!(((RuntimeObject*)(AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
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
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::Triangulate(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_Triangulate_m69B89A19F987E809DCB867BD84DC8C48F1BF2B82 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, const RuntimeMethod* method)
{
	{
		// tcx.CreateAdvancingFront();
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_0 = ___tcx0;
		NullCheck(L_0);
		DTSweepContext_CreateAdvancingFront_mA3A418782FCDB858C81C5C283D32C49E3BEC0481(L_0, /*hidden argument*/NULL);
		// Sweep(tcx);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_1 = ___tcx0;
		DTSweep_Sweep_m9E22D9307289E85F42EAA3BDE6AF171BDA247C91(L_1, /*hidden argument*/NULL);
		// if (tcx.TriangulationMode == TriangulationMode.Polygon) {
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_2 = ___tcx0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = TriangulationContext_get_TriangulationMode_mEC24ABA5BBC324647459584EB532096611657E7F_inline(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_001d;
		}
	}
	{
		// FinalizationPolygon(tcx);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_4 = ___tcx0;
		DTSweep_FinalizationPolygon_m16F981BC268AB90FE6795C066A1F0F50105DB02F(L_4, /*hidden argument*/NULL);
		// } else {
		goto IL_0023;
	}

IL_001d:
	{
		// FinalizationConvexHull(tcx);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_5 = ___tcx0;
		DTSweep_FinalizationConvexHull_mAC472E0C158ABEAE4335006581F53F430753146E(L_5, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// tcx.Done();
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_6 = ___tcx0;
		NullCheck(L_6);
		TriangulationContext_Done_m65B0BC2606220F855765B1DB1606970127583A3F(L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::Sweep(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_Sweep_m9E22D9307289E85F42EAA3BDE6AF171BDA247C91 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE3FC07A0B422A3B74C28DF9BE4D8FADF180BF90F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m0A6F9F37911DCA006E751E7703373EC01807BA3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB22EBD5239C9A927E80044C4F084715C92B8C549_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2D689DD2438D265F432A7DF8B3ED5793765E6ADC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9B7C9FC5FABEF16AED60E58722815716AAD10784_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE06167D06E964FADCFCA04A29A837372026B8F58_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * V_0 = NULL;
	TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * V_1 = NULL;
	AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * V_2 = NULL;
	int32_t V_3 = 0;
	Enumerator_tC99C2EF25B7D2F943A44864B2803657E90082810  V_4;
	memset((&V_4), 0, sizeof(V_4));
	DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var points = tcx.Points;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_0 = ___tcx0;
		NullCheck(L_0);
		List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * L_1 = ((TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B *)L_0)->get_Points_2();
		V_0 = L_1;
		// for (int i = 1; i < points.Count; i++) {
		V_3 = 1;
		goto IL_007d;
	}

IL_000b:
	{
		// point = points[i];
		List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * L_2 = V_0;
		int32_t L_3 = V_3;
		NullCheck(L_2);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_4;
		L_4 = List_1_get_Item_mE06167D06E964FADCFCA04A29A837372026B8F58_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_mE06167D06E964FADCFCA04A29A837372026B8F58_RuntimeMethod_var);
		V_1 = L_4;
		// node = PointEvent(tcx, point);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_5 = ___tcx0;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_6 = V_1;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_7;
		L_7 = DTSweep_PointEvent_m4ADE57F102C34B4E2EF2CE40D8681F52F2F57945(L_5, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		// if (point.HasEdges) foreach (DTSweepConstraint e in point.Edges) {
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_8 = V_1;
		NullCheck(L_8);
		bool L_9;
		L_9 = TriangulationPoint_get_HasEdges_mBE4B610C0C057267AB792718C06B483ADD2E114E(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0072;
		}
	}
	{
		// if (point.HasEdges) foreach (DTSweepConstraint e in point.Edges) {
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_10 = V_1;
		NullCheck(L_10);
		List_1_t4C92CD4575EFD7FEC3CBE8B7B36CE69C2466C90D * L_11;
		L_11 = TriangulationPoint_get_Edges_m05131177AD065973F26F9ED35B2BBA500925ACAD_inline(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Enumerator_tC99C2EF25B7D2F943A44864B2803657E90082810  L_12;
		L_12 = List_1_GetEnumerator_m2D689DD2438D265F432A7DF8B3ED5793765E6ADC(L_11, /*hidden argument*/List_1_GetEnumerator_m2D689DD2438D265F432A7DF8B3ED5793765E6ADC_RuntimeMethod_var);
		V_4 = L_12;
	}

IL_0030:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0059;
		}

IL_0032:
		{
			// if (point.HasEdges) foreach (DTSweepConstraint e in point.Edges) {
			DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_13;
			L_13 = Enumerator_get_Current_mB22EBD5239C9A927E80044C4F084715C92B8C549_inline((Enumerator_tC99C2EF25B7D2F943A44864B2803657E90082810 *)(&V_4), /*hidden argument*/Enumerator_get_Current_mB22EBD5239C9A927E80044C4F084715C92B8C549_RuntimeMethod_var);
			V_5 = L_13;
			// if (tcx.IsDebugEnabled) tcx.DTDebugContext.ActiveConstraint = e;
			DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_14 = ___tcx0;
			NullCheck(L_14);
			bool L_15;
			L_15 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_14);
			if (!L_15)
			{
				goto IL_0050;
			}
		}

IL_0043:
		{
			// if (tcx.IsDebugEnabled) tcx.DTDebugContext.ActiveConstraint = e;
			DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_16 = ___tcx0;
			NullCheck(L_16);
			DTSweepDebugContext_t1118374B297F625192528B23AD580B5AB9F9EDF5 * L_17;
			L_17 = TriangulationContext_get_DTDebugContext_mEB43D96C7FD8DF25879619B69D1537270A134AD5(L_16, /*hidden argument*/NULL);
			DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_18 = V_5;
			NullCheck(L_17);
			DTSweepDebugContext_set_ActiveConstraint_m95F1078CB89E202814AB38B164802036D4F025CF(L_17, L_18, /*hidden argument*/NULL);
		}

IL_0050:
		{
			// EdgeEvent(tcx, e, node);
			DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_19 = ___tcx0;
			DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_20 = V_5;
			AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_21 = V_2;
			DTSweep_EdgeEvent_mF05EF3FB350D8392B0E079E6208F025431149DF0(L_19, L_20, L_21, /*hidden argument*/NULL);
		}

IL_0059:
		{
			// if (point.HasEdges) foreach (DTSweepConstraint e in point.Edges) {
			bool L_22;
			L_22 = Enumerator_MoveNext_m0A6F9F37911DCA006E751E7703373EC01807BA3C((Enumerator_tC99C2EF25B7D2F943A44864B2803657E90082810 *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m0A6F9F37911DCA006E751E7703373EC01807BA3C_RuntimeMethod_var);
			if (L_22)
			{
				goto IL_0032;
			}
		}

IL_0062:
		{
			IL2CPP_LEAVE(0x72, FINALLY_0064);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0064;
	}

FINALLY_0064:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mE3FC07A0B422A3B74C28DF9BE4D8FADF180BF90F((Enumerator_tC99C2EF25B7D2F943A44864B2803657E90082810 *)(&V_4), /*hidden argument*/Enumerator_Dispose_mE3FC07A0B422A3B74C28DF9BE4D8FADF180BF90F_RuntimeMethod_var);
		IL2CPP_END_FINALLY(100)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(100)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x72, IL_0072)
	}

IL_0072:
	{
		// tcx.Update(null);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_23 = ___tcx0;
		NullCheck(L_23);
		TriangulationContext_Update_m40FD753CAF54F292C95C884B8F719A9E58E3845A(L_23, (String_t*)NULL, /*hidden argument*/NULL);
		// for (int i = 1; i < points.Count; i++) {
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_007d:
	{
		// for (int i = 1; i < points.Count; i++) {
		int32_t L_25 = V_3;
		List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = List_1_get_Count_m9B7C9FC5FABEF16AED60E58722815716AAD10784_inline(L_26, /*hidden argument*/List_1_get_Count_m9B7C9FC5FABEF16AED60E58722815716AAD10784_RuntimeMethod_var);
		if ((((int32_t)L_25) < ((int32_t)L_27)))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FinalizationConvexHull(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FinalizationConvexHull_mAC472E0C158ABEAE4335006581F53F430753146E (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, const RuntimeMethod* method)
{
	AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * V_0 = NULL;
	AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * V_1 = NULL;
	DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * V_2 = NULL;
	TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * V_3 = NULL;
	TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * V_4 = NULL;
	{
		// n1 = tcx.Front.Head.Next;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_0 = ___tcx0;
		NullCheck(L_0);
		AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5 * L_1 = L_0->get_Front_8();
		NullCheck(L_1);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_2 = L_1->get_Head_0();
		NullCheck(L_2);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_3 = L_2->get_Next_0();
		V_0 = L_3;
		// n2 = n1.Next;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_4 = V_0;
		NullCheck(L_4);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_5 = L_4->get_Next_0();
		V_1 = L_5;
		// first = n1.Point;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_6 = V_0;
		NullCheck(L_6);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_7 = L_6->get_Point_3();
		V_3 = L_7;
		// TurnAdvancingFrontConvex(tcx, n1, n2);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_8 = ___tcx0;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_9 = V_0;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_10 = V_1;
		DTSweep_TurnAdvancingFrontConvex_mC5A72313FC5E2B964FBA05FADC0BE655C7259119(L_8, L_9, L_10, /*hidden argument*/NULL);
		// n1 = tcx.Front.Tail.Prev;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_11 = ___tcx0;
		NullCheck(L_11);
		AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5 * L_12 = L_11->get_Front_8();
		NullCheck(L_12);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_13 = L_12->get_Tail_1();
		NullCheck(L_13);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_14 = L_13->get_Prev_1();
		V_0 = L_14;
		// if (n1.Triangle.Contains(n1.Next.Point) && n1.Triangle.Contains(n1.Prev.Point)) {
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_15 = V_0;
		NullCheck(L_15);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_16 = L_15->get_Triangle_4();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_17 = V_0;
		NullCheck(L_17);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_18 = L_17->get_Next_0();
		NullCheck(L_18);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_19 = L_18->get_Point_3();
		NullCheck(L_16);
		bool L_20;
		L_20 = DelaunayTriangle_Contains_m9095AF9E942F7EA944FE21C567086C6890A9B2BF(L_16, L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00b1;
		}
	}
	{
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_21 = V_0;
		NullCheck(L_21);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_22 = L_21->get_Triangle_4();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_23 = V_0;
		NullCheck(L_23);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_24 = L_23->get_Prev_1();
		NullCheck(L_24);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_25 = L_24->get_Point_3();
		NullCheck(L_22);
		bool L_26;
		L_26 = DelaunayTriangle_Contains_m9095AF9E942F7EA944FE21C567086C6890A9B2BF(L_22, L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00b1;
		}
	}
	{
		// t1 = n1.Triangle.NeighborAcrossFrom(n1.Point);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_27 = V_0;
		NullCheck(L_27);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_28 = L_27->get_Triangle_4();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_29 = V_0;
		NullCheck(L_29);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_30 = L_29->get_Point_3();
		NullCheck(L_28);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_31;
		L_31 = DelaunayTriangle_NeighborAcrossFrom_m0CF00F9AF2656B9E6B3FB590AB2DABF2DA946252(L_28, L_30, /*hidden argument*/NULL);
		V_2 = L_31;
		// RotateTrianglePair(n1.Triangle, n1.Point, t1, t1.OppositePoint(n1.Triangle, n1.Point));
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_32 = V_0;
		NullCheck(L_32);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_33 = L_32->get_Triangle_4();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_34 = V_0;
		NullCheck(L_34);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_35 = L_34->get_Point_3();
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_36 = V_2;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_37 = V_2;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_38 = V_0;
		NullCheck(L_38);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_39 = L_38->get_Triangle_4();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_40 = V_0;
		NullCheck(L_40);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_41 = L_40->get_Point_3();
		NullCheck(L_37);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_42;
		L_42 = DelaunayTriangle_OppositePoint_mCCD125CD7C6BE7113AAC180FF37066F9802967CE(L_37, L_39, L_41, /*hidden argument*/NULL);
		DTSweep_RotateTrianglePair_m3450E956082B91F301372C30E9C2545454C495F4(L_33, L_35, L_36, L_42, /*hidden argument*/NULL);
		// tcx.MapTriangleToNodes(n1.Triangle);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_43 = ___tcx0;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_44 = V_0;
		NullCheck(L_44);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_45 = L_44->get_Triangle_4();
		NullCheck(L_43);
		DTSweepContext_MapTriangleToNodes_m88F0ECE533C928433E975FC7409E8A63A39B89FB(L_43, L_45, /*hidden argument*/NULL);
		// tcx.MapTriangleToNodes(t1);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_46 = ___tcx0;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_47 = V_2;
		NullCheck(L_46);
		DTSweepContext_MapTriangleToNodes_m88F0ECE533C928433E975FC7409E8A63A39B89FB(L_46, L_47, /*hidden argument*/NULL);
	}

IL_00b1:
	{
		// n1 = tcx.Front.Head.Next;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_48 = ___tcx0;
		NullCheck(L_48);
		AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5 * L_49 = L_48->get_Front_8();
		NullCheck(L_49);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_50 = L_49->get_Head_0();
		NullCheck(L_50);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_51 = L_50->get_Next_0();
		V_0 = L_51;
		// if (n1.Triangle.Contains(n1.Prev.Point) && n1.Triangle.Contains(n1.Next.Point)) {
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_52 = V_0;
		NullCheck(L_52);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_53 = L_52->get_Triangle_4();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_54 = V_0;
		NullCheck(L_54);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_55 = L_54->get_Prev_1();
		NullCheck(L_55);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_56 = L_55->get_Point_3();
		NullCheck(L_53);
		bool L_57;
		L_57 = DelaunayTriangle_Contains_m9095AF9E942F7EA944FE21C567086C6890A9B2BF(L_53, L_56, /*hidden argument*/NULL);
		if (!L_57)
		{
			goto IL_013b;
		}
	}
	{
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_58 = V_0;
		NullCheck(L_58);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_59 = L_58->get_Triangle_4();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_60 = V_0;
		NullCheck(L_60);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_61 = L_60->get_Next_0();
		NullCheck(L_61);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_62 = L_61->get_Point_3();
		NullCheck(L_59);
		bool L_63;
		L_63 = DelaunayTriangle_Contains_m9095AF9E942F7EA944FE21C567086C6890A9B2BF(L_59, L_62, /*hidden argument*/NULL);
		if (!L_63)
		{
			goto IL_013b;
		}
	}
	{
		// t1 = n1.Triangle.NeighborAcrossFrom(n1.Point);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_64 = V_0;
		NullCheck(L_64);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_65 = L_64->get_Triangle_4();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_66 = V_0;
		NullCheck(L_66);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_67 = L_66->get_Point_3();
		NullCheck(L_65);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_68;
		L_68 = DelaunayTriangle_NeighborAcrossFrom_m0CF00F9AF2656B9E6B3FB590AB2DABF2DA946252(L_65, L_67, /*hidden argument*/NULL);
		V_2 = L_68;
		// RotateTrianglePair(n1.Triangle, n1.Point, t1, t1.OppositePoint(n1.Triangle, n1.Point));
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_69 = V_0;
		NullCheck(L_69);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_70 = L_69->get_Triangle_4();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_71 = V_0;
		NullCheck(L_71);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_72 = L_71->get_Point_3();
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_73 = V_2;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_74 = V_2;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_75 = V_0;
		NullCheck(L_75);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_76 = L_75->get_Triangle_4();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_77 = V_0;
		NullCheck(L_77);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_78 = L_77->get_Point_3();
		NullCheck(L_74);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_79;
		L_79 = DelaunayTriangle_OppositePoint_mCCD125CD7C6BE7113AAC180FF37066F9802967CE(L_74, L_76, L_78, /*hidden argument*/NULL);
		DTSweep_RotateTrianglePair_m3450E956082B91F301372C30E9C2545454C495F4(L_70, L_72, L_73, L_79, /*hidden argument*/NULL);
		// tcx.MapTriangleToNodes(n1.Triangle);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_80 = ___tcx0;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_81 = V_0;
		NullCheck(L_81);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_82 = L_81->get_Triangle_4();
		NullCheck(L_80);
		DTSweepContext_MapTriangleToNodes_m88F0ECE533C928433E975FC7409E8A63A39B89FB(L_80, L_82, /*hidden argument*/NULL);
		// tcx.MapTriangleToNodes(t1);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_83 = ___tcx0;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_84 = V_2;
		NullCheck(L_83);
		DTSweepContext_MapTriangleToNodes_m88F0ECE533C928433E975FC7409E8A63A39B89FB(L_83, L_84, /*hidden argument*/NULL);
	}

IL_013b:
	{
		// first = tcx.Front.Head.Point;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_85 = ___tcx0;
		NullCheck(L_85);
		AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5 * L_86 = L_85->get_Front_8();
		NullCheck(L_86);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_87 = L_86->get_Head_0();
		NullCheck(L_87);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_88 = L_87->get_Point_3();
		V_3 = L_88;
		// n2 = tcx.Front.Tail.Prev;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_89 = ___tcx0;
		NullCheck(L_89);
		AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5 * L_90 = L_89->get_Front_8();
		NullCheck(L_90);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_91 = L_90->get_Tail_1();
		NullCheck(L_91);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_92 = L_91->get_Prev_1();
		V_1 = L_92;
		// t1 = n2.Triangle;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_93 = V_1;
		NullCheck(L_93);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_94 = L_93->get_Triangle_4();
		V_2 = L_94;
		// p1 = n2.Point;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_95 = V_1;
		NullCheck(L_95);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_96 = L_95->get_Point_3();
		V_4 = L_96;
	}

IL_016c:
	{
		// tcx.RemoveFromList(t1);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_97 = ___tcx0;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_98 = V_2;
		NullCheck(L_97);
		DTSweepContext_RemoveFromList_m576659B7DB18CC2646B15A5C471B42A79FD32A73(L_97, L_98, /*hidden argument*/NULL);
		// p1 = t1.PointCCWFrom(p1);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_99 = V_2;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_100 = V_4;
		NullCheck(L_99);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_101;
		L_101 = DelaunayTriangle_PointCCWFrom_m701498FBCC2D5A858262F0D9A21BF2DAAB6EDF60(L_99, L_100, /*hidden argument*/NULL);
		V_4 = L_101;
		// if (p1 == first) break;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_102 = V_4;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_103 = V_3;
		if ((((RuntimeObject*)(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 *)L_102) == ((RuntimeObject*)(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 *)L_103)))
		{
			goto IL_018d;
		}
	}
	{
		// t1 = t1.NeighborCCWFrom(p1);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_104 = V_2;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_105 = V_4;
		NullCheck(L_104);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_106;
		L_106 = DelaunayTriangle_NeighborCCWFrom_mFC8DC101483E5DA3FA8D4FFC3E724529DDFB79A4(L_104, L_105, /*hidden argument*/NULL);
		V_2 = L_106;
		// } while (true);
		goto IL_016c;
	}

IL_018d:
	{
		// first = tcx.Front.Head.Next.Point;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_107 = ___tcx0;
		NullCheck(L_107);
		AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5 * L_108 = L_107->get_Front_8();
		NullCheck(L_108);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_109 = L_108->get_Head_0();
		NullCheck(L_109);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_110 = L_109->get_Next_0();
		NullCheck(L_110);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_111 = L_110->get_Point_3();
		V_3 = L_111;
		// p1 = t1.PointCWFrom(tcx.Front.Head.Point);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_112 = V_2;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_113 = ___tcx0;
		NullCheck(L_113);
		AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5 * L_114 = L_113->get_Front_8();
		NullCheck(L_114);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_115 = L_114->get_Head_0();
		NullCheck(L_115);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_116 = L_115->get_Point_3();
		NullCheck(L_112);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_117;
		L_117 = DelaunayTriangle_PointCWFrom_m7F83BA541E2E5F811A73467832BB7A7FE557FBB4(L_112, L_116, /*hidden argument*/NULL);
		V_4 = L_117;
		// t1 = t1.NeighborCWFrom(tcx.Front.Head.Point);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_118 = V_2;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_119 = ___tcx0;
		NullCheck(L_119);
		AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5 * L_120 = L_119->get_Front_8();
		NullCheck(L_120);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_121 = L_120->get_Head_0();
		NullCheck(L_121);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_122 = L_121->get_Point_3();
		NullCheck(L_118);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_123;
		L_123 = DelaunayTriangle_NeighborCWFrom_m02FE93F770765BFFB25A2366C267C2D3FC97C91D(L_118, L_122, /*hidden argument*/NULL);
		V_2 = L_123;
	}

IL_01d2:
	{
		// tcx.RemoveFromList(t1);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_124 = ___tcx0;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_125 = V_2;
		NullCheck(L_124);
		DTSweepContext_RemoveFromList_m576659B7DB18CC2646B15A5C471B42A79FD32A73(L_124, L_125, /*hidden argument*/NULL);
		// p1 = t1.PointCCWFrom(p1);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_126 = V_2;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_127 = V_4;
		NullCheck(L_126);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_128;
		L_128 = DelaunayTriangle_PointCCWFrom_m701498FBCC2D5A858262F0D9A21BF2DAAB6EDF60(L_126, L_127, /*hidden argument*/NULL);
		V_4 = L_128;
		// t1 = t1.NeighborCCWFrom(p1);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_129 = V_2;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_130 = V_4;
		NullCheck(L_129);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_131;
		L_131 = DelaunayTriangle_NeighborCCWFrom_mFC8DC101483E5DA3FA8D4FFC3E724529DDFB79A4(L_129, L_130, /*hidden argument*/NULL);
		V_2 = L_131;
		// } while (p1 != first);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_132 = V_4;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_133 = V_3;
		if ((!(((RuntimeObject*)(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 *)L_132) == ((RuntimeObject*)(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 *)L_133))))
		{
			goto IL_01d2;
		}
	}
	{
		// tcx.FinalizeTriangulation();
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_134 = ___tcx0;
		NullCheck(L_134);
		DTSweepContext_FinalizeTriangulation_mF13CC7740664B3ED71D8A264B93D2DC66386FEE9(L_134, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::TurnAdvancingFrontConvex(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_TurnAdvancingFrontConvex_mC5A72313FC5E2B964FBA05FADC0BE655C7259119 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___b1, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___c2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * V_0 = NULL;
	{
		// AdvancingFrontNode first = b;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_0 = ___b1;
		V_0 = L_0;
		goto IL_008a;
	}

IL_0007:
	{
		// if (tcx.IsDebugEnabled) tcx.DTDebugContext.ActiveNode = c;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_1 = ___tcx0;
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_1);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// if (tcx.IsDebugEnabled) tcx.DTDebugContext.ActiveNode = c;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_3 = ___tcx0;
		NullCheck(L_3);
		DTSweepDebugContext_t1118374B297F625192528B23AD580B5AB9F9EDF5 * L_4;
		L_4 = TriangulationContext_get_DTDebugContext_mEB43D96C7FD8DF25879619B69D1537270A134AD5(L_3, /*hidden argument*/NULL);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_5 = ___c2;
		NullCheck(L_4);
		DTSweepDebugContext_set_ActiveNode_m8CEF7E12336372A4DDA30B90BBDF1C210E2A7D18(L_4, L_5, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// if (TriangulationUtil.Orient2d(b.Point, c.Point, c.Next.Point) == Orientation.CCW) {
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_6 = ___b1;
		NullCheck(L_6);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_7 = L_6->get_Point_3();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_8 = ___c2;
		NullCheck(L_8);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_9 = L_8->get_Point_3();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_10 = ___c2;
		NullCheck(L_10);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_11 = L_10->get_Next_0();
		NullCheck(L_11);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_12 = L_11->get_Point_3();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		int32_t L_13;
		L_13 = TriangulationUtil_Orient2d_m2CDE17B5E70FD361C8BA5DF3764136DC172C5996(L_7, L_9, L_12, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)1))))
		{
			goto IL_004b;
		}
	}
	{
		// Fill(tcx, c);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_14 = ___tcx0;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_15 = ___c2;
		DTSweep_Fill_mE575B5EEFBF91F9BF0D8A94D08D7E6C72653A191(L_14, L_15, /*hidden argument*/NULL);
		// c = c.Next;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_16 = ___c2;
		NullCheck(L_16);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_17 = L_16->get_Next_0();
		___c2 = L_17;
		// } else {
		goto IL_008a;
	}

IL_004b:
	{
		// if (b != first && TriangulationUtil.Orient2d(b.Prev.Point, b.Point, c.Point) == Orientation.CCW) {
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_18 = ___b1;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_19 = V_0;
		if ((((RuntimeObject*)(AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 *)L_18) == ((RuntimeObject*)(AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 *)L_19)))
		{
			goto IL_007f;
		}
	}
	{
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_20 = ___b1;
		NullCheck(L_20);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_21 = L_20->get_Prev_1();
		NullCheck(L_21);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_22 = L_21->get_Point_3();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_23 = ___b1;
		NullCheck(L_23);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_24 = L_23->get_Point_3();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_25 = ___c2;
		NullCheck(L_25);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_26 = L_25->get_Point_3();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		int32_t L_27;
		L_27 = TriangulationUtil_Orient2d_m2CDE17B5E70FD361C8BA5DF3764136DC172C5996(L_22, L_24, L_26, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_27) == ((uint32_t)1))))
		{
			goto IL_007f;
		}
	}
	{
		// Fill(tcx, b);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_28 = ___tcx0;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_29 = ___b1;
		DTSweep_Fill_mE575B5EEFBF91F9BF0D8A94D08D7E6C72653A191(L_28, L_29, /*hidden argument*/NULL);
		// b = b.Prev;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_30 = ___b1;
		NullCheck(L_30);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_31 = L_30->get_Prev_1();
		___b1 = L_31;
		// } else {
		goto IL_008a;
	}

IL_007f:
	{
		// b = c;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_32 = ___c2;
		___b1 = L_32;
		// c = c.Next;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_33 = ___c2;
		NullCheck(L_33);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_34 = L_33->get_Next_0();
		___c2 = L_34;
	}

IL_008a:
	{
		// while (c != tcx.Front.Tail) {
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_35 = ___c2;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_36 = ___tcx0;
		NullCheck(L_36);
		AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5 * L_37 = L_36->get_Front_8();
		NullCheck(L_37);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_38 = L_37->get_Tail_1();
		if ((!(((RuntimeObject*)(AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 *)L_35) == ((RuntimeObject*)(AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 *)L_38))))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FinalizationPolygon(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FinalizationPolygon_m16F981BC268AB90FE6795C066A1F0F50105DB02F (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, const RuntimeMethod* method)
{
	DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * V_0 = NULL;
	TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * V_1 = NULL;
	{
		// DelaunayTriangle t = tcx.Front.Head.Next.Triangle;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_0 = ___tcx0;
		NullCheck(L_0);
		AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5 * L_1 = L_0->get_Front_8();
		NullCheck(L_1);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_2 = L_1->get_Head_0();
		NullCheck(L_2);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_3 = L_2->get_Next_0();
		NullCheck(L_3);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_4 = L_3->get_Triangle_4();
		V_0 = L_4;
		// TriangulationPoint p = tcx.Front.Head.Next.Point;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_5 = ___tcx0;
		NullCheck(L_5);
		AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5 * L_6 = L_5->get_Front_8();
		NullCheck(L_6);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_7 = L_6->get_Head_0();
		NullCheck(L_7);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_8 = L_7->get_Next_0();
		NullCheck(L_8);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_9 = L_8->get_Point_3();
		V_1 = L_9;
		goto IL_0036;
	}

IL_002e:
	{
		// while (!t.GetConstrainedEdgeCW(p)) t = t.NeighborCCWFrom(p);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_10 = V_0;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_11 = V_1;
		NullCheck(L_10);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_12;
		L_12 = DelaunayTriangle_NeighborCCWFrom_mFC8DC101483E5DA3FA8D4FFC3E724529DDFB79A4(L_10, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
	}

IL_0036:
	{
		// while (!t.GetConstrainedEdgeCW(p)) t = t.NeighborCCWFrom(p);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_13 = V_0;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_14 = V_1;
		NullCheck(L_13);
		bool L_15;
		L_15 = DelaunayTriangle_GetConstrainedEdgeCW_mE2064A27D685D45643A3BC58481B69ABB9FAC298(L_13, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_002e;
		}
	}
	{
		// tcx.MeshClean(t);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_16 = ___tcx0;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_17 = V_0;
		NullCheck(L_16);
		DTSweepContext_MeshClean_m5D3779C14BD179543317D5954689197E1C8E4E9C(L_16, L_17, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.DTSweep::PointEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * DTSweep_PointEvent_m4ADE57F102C34B4E2EF2CE40D8681F52F2F57945 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___point1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * V_0 = NULL;
	AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * V_1 = NULL;
	{
		// node = tcx.LocateNode(point);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_0 = ___tcx0;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_1 = ___point1;
		NullCheck(L_0);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_2;
		L_2 = DTSweepContext_LocateNode_m20AABA18D57E08A62008463F29A4CAF039BA26B6(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (tcx.IsDebugEnabled) tcx.DTDebugContext.ActiveNode = node;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_3 = ___tcx0;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_3);
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		// if (tcx.IsDebugEnabled) tcx.DTDebugContext.ActiveNode = node;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_5 = ___tcx0;
		NullCheck(L_5);
		DTSweepDebugContext_t1118374B297F625192528B23AD580B5AB9F9EDF5 * L_6;
		L_6 = TriangulationContext_get_DTDebugContext_mEB43D96C7FD8DF25879619B69D1537270A134AD5(L_5, /*hidden argument*/NULL);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_7 = V_0;
		NullCheck(L_6);
		DTSweepDebugContext_set_ActiveNode_m8CEF7E12336372A4DDA30B90BBDF1C210E2A7D18(L_6, L_7, /*hidden argument*/NULL);
	}

IL_001c:
	{
		// newNode = NewFrontTriangle(tcx, point, node);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_8 = ___tcx0;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_9 = ___point1;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_10 = V_0;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_11;
		L_11 = DTSweep_NewFrontTriangle_m3B65F6147E9842FFB86FEB7F79B9792995F74D83(L_8, L_9, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		// if (point.X <= node.Point.X + TriangulationUtil.EPSILON) Fill(tcx, node);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_12 = ___point1;
		NullCheck(L_12);
		double L_13 = L_12->get_X_1();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_14 = V_0;
		NullCheck(L_14);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_15 = L_14->get_Point_3();
		NullCheck(L_15);
		double L_16 = L_15->get_X_1();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		double L_17 = ((TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_StaticFields*)il2cpp_codegen_static_fields_for(TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var))->get_EPSILON_0();
		if ((!(((double)L_13) <= ((double)((double)il2cpp_codegen_add((double)L_16, (double)L_17))))))
		{
			goto IL_0045;
		}
	}
	{
		// if (point.X <= node.Point.X + TriangulationUtil.EPSILON) Fill(tcx, node);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_18 = ___tcx0;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_19 = V_0;
		DTSweep_Fill_mE575B5EEFBF91F9BF0D8A94D08D7E6C72653A191(L_18, L_19, /*hidden argument*/NULL);
	}

IL_0045:
	{
		// tcx.AddNode(newNode);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_20 = ___tcx0;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_21 = V_1;
		NullCheck(L_20);
		DTSweepContext_AddNode_m9796D7A28F9F8E594F9AA12FAD3B41277597C8D3(L_20, L_21, /*hidden argument*/NULL);
		// FillAdvancingFront(tcx, newNode);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_22 = ___tcx0;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_23 = V_1;
		DTSweep_FillAdvancingFront_m609926E19EBAA69F6BFE6B36F45EA77FFABB586D(L_22, L_23, /*hidden argument*/NULL);
		// return newNode;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_24 = V_1;
		return L_24;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.DTSweep::NewFrontTriangle(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * DTSweep_NewFrontTriangle_m3B65F6147E9842FFB86FEB7F79B9792995F74D83 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___point1, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___node2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m62D2D60A23EE7E5FFE5B6AA0BAF8A7D6BA1E52D7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * V_0 = NULL;
	DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * V_1 = NULL;
	{
		// triangle = new DelaunayTriangle(point, node.Point, node.Next.Point);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_0 = ___point1;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_1 = ___node2;
		NullCheck(L_1);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_2 = L_1->get_Point_3();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_3 = ___node2;
		NullCheck(L_3);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_4 = L_3->get_Next_0();
		NullCheck(L_4);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_5 = L_4->get_Point_3();
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_6 = (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A *)il2cpp_codegen_object_new(DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A_il2cpp_TypeInfo_var);
		DelaunayTriangle__ctor_mFF50163C04BA34186ADB11D7B63F8904F2E09F7C(L_6, L_0, L_2, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// triangle.MarkNeighbor(node.Triangle);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_7 = V_1;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_8 = ___node2;
		NullCheck(L_8);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_9 = L_8->get_Triangle_4();
		NullCheck(L_7);
		DelaunayTriangle_MarkNeighbor_m285227BC79816BB67CE729657065E27173CAFFCB(L_7, L_9, /*hidden argument*/NULL);
		// tcx.Triangles.Add(triangle);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_10 = ___tcx0;
		NullCheck(L_10);
		List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977 * L_11 = ((TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B *)L_10)->get_Triangles_1();
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_12 = V_1;
		NullCheck(L_11);
		List_1_Add_m62D2D60A23EE7E5FFE5B6AA0BAF8A7D6BA1E52D7(L_11, L_12, /*hidden argument*/List_1_Add_m62D2D60A23EE7E5FFE5B6AA0BAF8A7D6BA1E52D7_RuntimeMethod_var);
		// newNode = new AdvancingFrontNode(point);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_13 = ___point1;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_14 = (AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 *)il2cpp_codegen_object_new(AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70_il2cpp_TypeInfo_var);
		AdvancingFrontNode__ctor_m54212F4AF6A60211FC0CC17FE28C24A63C79D69A(L_14, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		// newNode.Next = node.Next;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_15 = V_0;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_16 = ___node2;
		NullCheck(L_16);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_17 = L_16->get_Next_0();
		NullCheck(L_15);
		L_15->set_Next_0(L_17);
		// newNode.Prev = node;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_18 = V_0;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_19 = ___node2;
		NullCheck(L_18);
		L_18->set_Prev_1(L_19);
		// node.Next.Prev = newNode;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_20 = ___node2;
		NullCheck(L_20);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_21 = L_20->get_Next_0();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_22 = V_0;
		NullCheck(L_21);
		L_21->set_Prev_1(L_22);
		// node.Next = newNode;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_23 = ___node2;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_24 = V_0;
		NullCheck(L_23);
		L_23->set_Next_0(L_24);
		// tcx.AddNode(newNode); // XXX: BST
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_25 = ___tcx0;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_26 = V_0;
		NullCheck(L_25);
		DTSweepContext_AddNode_m9796D7A28F9F8E594F9AA12FAD3B41277597C8D3(L_25, L_26, /*hidden argument*/NULL);
		// if (tcx.IsDebugEnabled) tcx.DTDebugContext.ActiveNode = newNode;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_27 = ___tcx0;
		NullCheck(L_27);
		bool L_28;
		L_28 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_27);
		if (!L_28)
		{
			goto IL_0078;
		}
	}
	{
		// if (tcx.IsDebugEnabled) tcx.DTDebugContext.ActiveNode = newNode;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_29 = ___tcx0;
		NullCheck(L_29);
		DTSweepDebugContext_t1118374B297F625192528B23AD580B5AB9F9EDF5 * L_30;
		L_30 = TriangulationContext_get_DTDebugContext_mEB43D96C7FD8DF25879619B69D1537270A134AD5(L_29, /*hidden argument*/NULL);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_31 = V_0;
		NullCheck(L_30);
		DTSweepDebugContext_set_ActiveNode_m8CEF7E12336372A4DDA30B90BBDF1C210E2A7D18(L_30, L_31, /*hidden argument*/NULL);
	}

IL_0078:
	{
		// if (!Legalize(tcx, triangle)) tcx.MapTriangleToNodes(triangle);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_32 = ___tcx0;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_33 = V_1;
		bool L_34;
		L_34 = DTSweep_Legalize_m9CA920D196E94FA30CB8AF44E61C834983219960(L_32, L_33, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_0088;
		}
	}
	{
		// if (!Legalize(tcx, triangle)) tcx.MapTriangleToNodes(triangle);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_35 = ___tcx0;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_36 = V_1;
		NullCheck(L_35);
		DTSweepContext_MapTriangleToNodes_m88F0ECE533C928433E975FC7409E8A63A39B89FB(L_35, L_36, /*hidden argument*/NULL);
	}

IL_0088:
	{
		// return newNode;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_37 = V_0;
		return L_37;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::EdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_EdgeEvent_mF05EF3FB350D8392B0E079E6208F025431149DF0 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * ___edge1, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___node2, const RuntimeMethod* method)
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// tcx.EdgeEvent.ConstrainedEdge = edge;
			DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_0 = ___tcx0;
			NullCheck(L_0);
			DTSweepEdgeEvent_t93472178B8E22740677AF3E5D255F96392BB8453 * L_1 = L_0->get_EdgeEvent_12();
			DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_2 = ___edge1;
			NullCheck(L_1);
			L_1->set_ConstrainedEdge_0(L_2);
			// tcx.EdgeEvent.Right = edge.P.X > edge.Q.X;
			DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_3 = ___tcx0;
			NullCheck(L_3);
			DTSweepEdgeEvent_t93472178B8E22740677AF3E5D255F96392BB8453 * L_4 = L_3->get_EdgeEvent_12();
			DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_5 = ___edge1;
			NullCheck(L_5);
			TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_6 = ((TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A *)L_5)->get_P_0();
			NullCheck(L_6);
			double L_7 = L_6->get_X_1();
			DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_8 = ___edge1;
			NullCheck(L_8);
			TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_9 = ((TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A *)L_8)->get_Q_1();
			NullCheck(L_9);
			double L_10 = L_9->get_X_1();
			NullCheck(L_4);
			L_4->set_Right_1((bool)((((double)L_7) > ((double)L_10))? 1 : 0));
			// if (tcx.IsDebugEnabled) { tcx.DTDebugContext.PrimaryTriangle = node.Triangle; }
			DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_11 = ___tcx0;
			NullCheck(L_11);
			bool L_12;
			L_12 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_11);
			if (!L_12)
			{
				goto IL_0048;
			}
		}

IL_0037:
		{
			// if (tcx.IsDebugEnabled) { tcx.DTDebugContext.PrimaryTriangle = node.Triangle; }
			DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_13 = ___tcx0;
			NullCheck(L_13);
			DTSweepDebugContext_t1118374B297F625192528B23AD580B5AB9F9EDF5 * L_14;
			L_14 = TriangulationContext_get_DTDebugContext_mEB43D96C7FD8DF25879619B69D1537270A134AD5(L_13, /*hidden argument*/NULL);
			AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_15 = ___node2;
			NullCheck(L_15);
			DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_16 = L_15->get_Triangle_4();
			NullCheck(L_14);
			DTSweepDebugContext_set_PrimaryTriangle_mB948F030C8DC7369C96D02BF8A8CB79BA4B47F24(L_14, L_16, /*hidden argument*/NULL);
		}

IL_0048:
		{
			// if (IsEdgeSideOfTriangle(node.Triangle, edge.P, edge.Q))
			AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_17 = ___node2;
			NullCheck(L_17);
			DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_18 = L_17->get_Triangle_4();
			DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_19 = ___edge1;
			NullCheck(L_19);
			TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_20 = ((TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A *)L_19)->get_P_0();
			DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_21 = ___edge1;
			NullCheck(L_21);
			TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_22 = ((TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A *)L_21)->get_Q_1();
			bool L_23;
			L_23 = DTSweep_IsEdgeSideOfTriangle_m910E59F71540D478E47EE9549BCC2EA6687610D2(L_18, L_20, L_22, /*hidden argument*/NULL);
			if (!L_23)
			{
				goto IL_0063;
			}
		}

IL_0061:
		{
			// return;
			goto IL_008e;
		}

IL_0063:
		{
			// FillEdgeEvent(tcx, edge, node);
			DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_24 = ___tcx0;
			DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_25 = ___edge1;
			AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_26 = ___node2;
			DTSweep_FillEdgeEvent_mC6CA0FD6CAD8582512C429DC4086414D765EB8C8(L_24, L_25, L_26, /*hidden argument*/NULL);
			// EdgeEvent(tcx, edge.P, edge.Q, node.Triangle, edge.Q);
			DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_27 = ___tcx0;
			DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_28 = ___edge1;
			NullCheck(L_28);
			TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_29 = ((TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A *)L_28)->get_P_0();
			DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_30 = ___edge1;
			NullCheck(L_30);
			TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_31 = ((TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A *)L_30)->get_Q_1();
			AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_32 = ___node2;
			NullCheck(L_32);
			DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_33 = L_32->get_Triangle_4();
			DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_34 = ___edge1;
			NullCheck(L_34);
			TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_35 = ((TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A *)L_34)->get_Q_1();
			DTSweep_EdgeEvent_m820916D4B17A0AB8C083F9441498EA82F1E7AB32(L_27, L_29, L_31, L_33, L_35, /*hidden argument*/NULL);
			// }
			goto IL_008e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008b;
		}
		throw e;
	}

CATCH_008b:
	{ // begin catch(System.Object)
		// catch { }
		// catch { }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_008e;
	} // end catch (depth: 1)

IL_008e:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillEdgeEvent_mC6CA0FD6CAD8582512C429DC4086414D765EB8C8 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * ___edge1, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___node2, const RuntimeMethod* method)
{
	{
		// if (tcx.EdgeEvent.Right) {
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_0 = ___tcx0;
		NullCheck(L_0);
		DTSweepEdgeEvent_t93472178B8E22740677AF3E5D255F96392BB8453 * L_1 = L_0->get_EdgeEvent_12();
		NullCheck(L_1);
		bool L_2 = L_1->get_Right_1();
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// FillRightAboveEdgeEvent(tcx, edge, node);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_3 = ___tcx0;
		DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_4 = ___edge1;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_5 = ___node2;
		DTSweep_FillRightAboveEdgeEvent_m42262C37FC4B63074EEB5AF8ED678E175A6D5C84(L_3, L_4, L_5, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_0016:
	{
		// FillLeftAboveEdgeEvent(tcx, edge, node);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_6 = ___tcx0;
		DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_7 = ___edge1;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_8 = ___node2;
		DTSweep_FillLeftAboveEdgeEvent_mEF257C979D572EAE6F7A95A21F45CCF90FB282EA(L_6, L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillRightConcaveEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillRightConcaveEdgeEvent_m8BC03DD3198C355EBC5A1457A4578FB3DD689B9E (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * ___edge1, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___node2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Fill(tcx, node.Next);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_0 = ___tcx0;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_1 = ___node2;
		NullCheck(L_1);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_2 = L_1->get_Next_0();
		DTSweep_Fill_mE575B5EEFBF91F9BF0D8A94D08D7E6C72653A191(L_0, L_2, /*hidden argument*/NULL);
		// if (node.Next.Point != edge.P) {
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_3 = ___node2;
		NullCheck(L_3);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_4 = L_3->get_Next_0();
		NullCheck(L_4);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_5 = L_4->get_Point_3();
		DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_6 = ___edge1;
		NullCheck(L_6);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_7 = ((TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A *)L_6)->get_P_0();
		if ((((RuntimeObject*)(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 *)L_5) == ((RuntimeObject*)(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 *)L_7)))
		{
			goto IL_006f;
		}
	}
	{
		// if (TriangulationUtil.Orient2d(edge.Q, node.Next.Point, edge.P) == Orientation.CCW) {
		DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_8 = ___edge1;
		NullCheck(L_8);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_9 = ((TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A *)L_8)->get_Q_1();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_10 = ___node2;
		NullCheck(L_10);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_11 = L_10->get_Next_0();
		NullCheck(L_11);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_12 = L_11->get_Point_3();
		DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_13 = ___edge1;
		NullCheck(L_13);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_14 = ((TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A *)L_13)->get_P_0();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		int32_t L_15;
		L_15 = TriangulationUtil_Orient2d_m2CDE17B5E70FD361C8BA5DF3764136DC172C5996(L_9, L_12, L_14, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_006f;
		}
	}
	{
		// if (TriangulationUtil.Orient2d(node.Point, node.Next.Point, node.Next.Next.Point) == Orientation.CCW) {
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_16 = ___node2;
		NullCheck(L_16);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_17 = L_16->get_Point_3();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_18 = ___node2;
		NullCheck(L_18);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_19 = L_18->get_Next_0();
		NullCheck(L_19);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_20 = L_19->get_Point_3();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_21 = ___node2;
		NullCheck(L_21);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_22 = L_21->get_Next_0();
		NullCheck(L_22);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_23 = L_22->get_Next_0();
		NullCheck(L_23);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_24 = L_23->get_Point_3();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		int32_t L_25;
		L_25 = TriangulationUtil_Orient2d_m2CDE17B5E70FD361C8BA5DF3764136DC172C5996(L_17, L_20, L_24, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_25) == ((uint32_t)1))))
		{
			goto IL_006f;
		}
	}
	{
		// FillRightConcaveEdgeEvent(tcx, edge, node);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_26 = ___tcx0;
		DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_27 = ___edge1;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_28 = ___node2;
		DTSweep_FillRightConcaveEdgeEvent_m8BC03DD3198C355EBC5A1457A4578FB3DD689B9E(L_26, L_27, L_28, /*hidden argument*/NULL);
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillRightConvexEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillRightConvexEdgeEvent_mBE903B7CB7F8D055341779DEB57C6976095E5872 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * ___edge1, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___node2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (TriangulationUtil.Orient2d(node.Next.Point, node.Next.Next.Point, node.Next.Next.Next.Point) == Orientation.CCW) {
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_0 = ___node2;
		NullCheck(L_0);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_1 = L_0->get_Next_0();
		NullCheck(L_1);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_2 = L_1->get_Point_3();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_3 = ___node2;
		NullCheck(L_3);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_4 = L_3->get_Next_0();
		NullCheck(L_4);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_5 = L_4->get_Next_0();
		NullCheck(L_5);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_6 = L_5->get_Point_3();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_7 = ___node2;
		NullCheck(L_7);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_8 = L_7->get_Next_0();
		NullCheck(L_8);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_9 = L_8->get_Next_0();
		NullCheck(L_9);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_10 = L_9->get_Next_0();
		NullCheck(L_10);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_11 = L_10->get_Point_3();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = TriangulationUtil_Orient2d_m2CDE17B5E70FD361C8BA5DF3764136DC172C5996(L_2, L_6, L_11, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0046;
		}
	}
	{
		// FillRightConcaveEdgeEvent(tcx, edge, node.Next);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_13 = ___tcx0;
		DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_14 = ___edge1;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_15 = ___node2;
		NullCheck(L_15);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_16 = L_15->get_Next_0();
		DTSweep_FillRightConcaveEdgeEvent_m8BC03DD3198C355EBC5A1457A4578FB3DD689B9E(L_13, L_14, L_16, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_0046:
	{
		// if (TriangulationUtil.Orient2d(edge.Q, node.Next.Next.Point, edge.P) == Orientation.CCW) {
		DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_17 = ___edge1;
		NullCheck(L_17);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_18 = ((TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A *)L_17)->get_Q_1();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_19 = ___node2;
		NullCheck(L_19);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_20 = L_19->get_Next_0();
		NullCheck(L_20);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_21 = L_20->get_Next_0();
		NullCheck(L_21);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_22 = L_21->get_Point_3();
		DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_23 = ___edge1;
		NullCheck(L_23);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_24 = ((TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A *)L_23)->get_P_0();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		int32_t L_25;
		L_25 = TriangulationUtil_Orient2d_m2CDE17B5E70FD361C8BA5DF3764136DC172C5996(L_18, L_22, L_24, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_25) == ((uint32_t)1))))
		{
			goto IL_0077;
		}
	}
	{
		// FillRightConvexEdgeEvent(tcx, edge, node.Next);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_26 = ___tcx0;
		DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_27 = ___edge1;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_28 = ___node2;
		NullCheck(L_28);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_29 = L_28->get_Next_0();
		DTSweep_FillRightConvexEdgeEvent_mBE903B7CB7F8D055341779DEB57C6976095E5872(L_26, L_27, L_29, /*hidden argument*/NULL);
	}

IL_0077:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillRightBelowEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillRightBelowEdgeEvent_m525E37427D7BCF5E33B57C94F3E87C2C2DC3B64A (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * ___edge1, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___node2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (tcx.IsDebugEnabled) tcx.DTDebugContext.ActiveNode = node;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_0 = ___tcx0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (tcx.IsDebugEnabled) tcx.DTDebugContext.ActiveNode = node;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_2 = ___tcx0;
		NullCheck(L_2);
		DTSweepDebugContext_t1118374B297F625192528B23AD580B5AB9F9EDF5 * L_3;
		L_3 = TriangulationContext_get_DTDebugContext_mEB43D96C7FD8DF25879619B69D1537270A134AD5(L_2, /*hidden argument*/NULL);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_4 = ___node2;
		NullCheck(L_3);
		DTSweepDebugContext_set_ActiveNode_m8CEF7E12336372A4DDA30B90BBDF1C210E2A7D18(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// if (node.Point.X < edge.P.X) { // needed?
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_5 = ___node2;
		NullCheck(L_5);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_6 = L_5->get_Point_3();
		NullCheck(L_6);
		double L_7 = L_6->get_X_1();
		DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_8 = ___edge1;
		NullCheck(L_8);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_9 = ((TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A *)L_8)->get_P_0();
		NullCheck(L_9);
		double L_10 = L_9->get_X_1();
		if ((!(((double)L_7) < ((double)L_10))))
		{
			goto IL_006e;
		}
	}
	{
		// if (TriangulationUtil.Orient2d(node.Point, node.Next.Point, node.Next.Next.Point) == Orientation.CCW) {
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_11 = ___node2;
		NullCheck(L_11);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_12 = L_11->get_Point_3();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_13 = ___node2;
		NullCheck(L_13);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_14 = L_13->get_Next_0();
		NullCheck(L_14);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_15 = L_14->get_Point_3();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_16 = ___node2;
		NullCheck(L_16);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_17 = L_16->get_Next_0();
		NullCheck(L_17);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_18 = L_17->get_Next_0();
		NullCheck(L_18);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_19 = L_18->get_Point_3();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		int32_t L_20;
		L_20 = TriangulationUtil_Orient2d_m2CDE17B5E70FD361C8BA5DF3764136DC172C5996(L_12, L_15, L_19, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)1))))
		{
			goto IL_005e;
		}
	}
	{
		// FillRightConcaveEdgeEvent(tcx, edge, node);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_21 = ___tcx0;
		DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_22 = ___edge1;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_23 = ___node2;
		DTSweep_FillRightConcaveEdgeEvent_m8BC03DD3198C355EBC5A1457A4578FB3DD689B9E(L_21, L_22, L_23, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_005e:
	{
		// FillRightConvexEdgeEvent(tcx, edge, node);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_24 = ___tcx0;
		DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_25 = ___edge1;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_26 = ___node2;
		DTSweep_FillRightConvexEdgeEvent_mBE903B7CB7F8D055341779DEB57C6976095E5872(L_24, L_25, L_26, /*hidden argument*/NULL);
		// FillRightBelowEdgeEvent(tcx, edge, node);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_27 = ___tcx0;
		DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_28 = ___edge1;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_29 = ___node2;
		DTSweep_FillRightBelowEdgeEvent_m525E37427D7BCF5E33B57C94F3E87C2C2DC3B64A(L_27, L_28, L_29, /*hidden argument*/NULL);
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillRightAboveEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillRightAboveEdgeEvent_m42262C37FC4B63074EEB5AF8ED678E175A6D5C84 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * ___edge1, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___node2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0047;
	}

IL_0002:
	{
		// if (tcx.IsDebugEnabled) { tcx.DTDebugContext.ActiveNode = node; }
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_0 = ___tcx0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_0);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// if (tcx.IsDebugEnabled) { tcx.DTDebugContext.ActiveNode = node; }
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_2 = ___tcx0;
		NullCheck(L_2);
		DTSweepDebugContext_t1118374B297F625192528B23AD580B5AB9F9EDF5 * L_3;
		L_3 = TriangulationContext_get_DTDebugContext_mEB43D96C7FD8DF25879619B69D1537270A134AD5(L_2, /*hidden argument*/NULL);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_4 = ___node2;
		NullCheck(L_3);
		DTSweepDebugContext_set_ActiveNode_m8CEF7E12336372A4DDA30B90BBDF1C210E2A7D18(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// Orientation o1 = TriangulationUtil.Orient2d(edge.Q, node.Next.Point, edge.P);
		DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_5 = ___edge1;
		NullCheck(L_5);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_6 = ((TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A *)L_5)->get_Q_1();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_7 = ___node2;
		NullCheck(L_7);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_8 = L_7->get_Next_0();
		NullCheck(L_8);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_9 = L_8->get_Point_3();
		DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_10 = ___edge1;
		NullCheck(L_10);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_11 = ((TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A *)L_10)->get_P_0();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = TriangulationUtil_Orient2d_m2CDE17B5E70FD361C8BA5DF3764136DC172C5996(L_6, L_9, L_11, /*hidden argument*/NULL);
		// if (o1 == Orientation.CCW) {
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_003f;
		}
	}
	{
		// FillRightBelowEdgeEvent(tcx, edge, node);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_13 = ___tcx0;
		DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_14 = ___edge1;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_15 = ___node2;
		DTSweep_FillRightBelowEdgeEvent_m525E37427D7BCF5E33B57C94F3E87C2C2DC3B64A(L_13, L_14, L_15, /*hidden argument*/NULL);
		// } else {
		goto IL_0047;
	}

IL_003f:
	{
		// node = node.Next;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_16 = ___node2;
		NullCheck(L_16);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_17 = L_16->get_Next_0();
		___node2 = L_17;
	}

IL_0047:
	{
		// while (node.Next.Point.X < edge.P.X) {
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_18 = ___node2;
		NullCheck(L_18);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_19 = L_18->get_Next_0();
		NullCheck(L_19);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_20 = L_19->get_Point_3();
		NullCheck(L_20);
		double L_21 = L_20->get_X_1();
		DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_22 = ___edge1;
		NullCheck(L_22);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_23 = ((TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A *)L_22)->get_P_0();
		NullCheck(L_23);
		double L_24 = L_23->get_X_1();
		if ((((double)L_21) < ((double)L_24)))
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillLeftConvexEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillLeftConvexEdgeEvent_m4D0934D67D23E00991151A0596ABB81F07F32D75 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * ___edge1, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___node2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (TriangulationUtil.Orient2d(node.Prev.Point, node.Prev.Prev.Point, node.Prev.Prev.Prev.Point) == Orientation.CW) {
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_0 = ___node2;
		NullCheck(L_0);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_1 = L_0->get_Prev_1();
		NullCheck(L_1);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_2 = L_1->get_Point_3();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_3 = ___node2;
		NullCheck(L_3);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_4 = L_3->get_Prev_1();
		NullCheck(L_4);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_5 = L_4->get_Prev_1();
		NullCheck(L_5);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_6 = L_5->get_Point_3();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_7 = ___node2;
		NullCheck(L_7);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_8 = L_7->get_Prev_1();
		NullCheck(L_8);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_9 = L_8->get_Prev_1();
		NullCheck(L_9);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_10 = L_9->get_Prev_1();
		NullCheck(L_10);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_11 = L_10->get_Point_3();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = TriangulationUtil_Orient2d_m2CDE17B5E70FD361C8BA5DF3764136DC172C5996(L_2, L_6, L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0045;
		}
	}
	{
		// FillLeftConcaveEdgeEvent(tcx, edge, node.Prev);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_13 = ___tcx0;
		DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_14 = ___edge1;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_15 = ___node2;
		NullCheck(L_15);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_16 = L_15->get_Prev_1();
		DTSweep_FillLeftConcaveEdgeEvent_m39EAB53A01445193AFF7895BF5A3578A944EA781(L_13, L_14, L_16, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_0045:
	{
		// if (TriangulationUtil.Orient2d(edge.Q, node.Prev.Prev.Point, edge.P) == Orientation.CW) {
		DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_17 = ___edge1;
		NullCheck(L_17);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_18 = ((TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A *)L_17)->get_Q_1();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_19 = ___node2;
		NullCheck(L_19);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_20 = L_19->get_Prev_1();
		NullCheck(L_20);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_21 = L_20->get_Prev_1();
		NullCheck(L_21);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_22 = L_21->get_Point_3();
		DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_23 = ___edge1;
		NullCheck(L_23);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_24 = ((TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A *)L_23)->get_P_0();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		int32_t L_25;
		L_25 = TriangulationUtil_Orient2d_m2CDE17B5E70FD361C8BA5DF3764136DC172C5996(L_18, L_22, L_24, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_0075;
		}
	}
	{
		// FillLeftConvexEdgeEvent(tcx, edge, node.Prev);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_26 = ___tcx0;
		DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_27 = ___edge1;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_28 = ___node2;
		NullCheck(L_28);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_29 = L_28->get_Prev_1();
		DTSweep_FillLeftConvexEdgeEvent_m4D0934D67D23E00991151A0596ABB81F07F32D75(L_26, L_27, L_29, /*hidden argument*/NULL);
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillLeftConcaveEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillLeftConcaveEdgeEvent_m39EAB53A01445193AFF7895BF5A3578A944EA781 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * ___edge1, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___node2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Fill(tcx, node.Prev);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_0 = ___tcx0;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_1 = ___node2;
		NullCheck(L_1);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_2 = L_1->get_Prev_1();
		DTSweep_Fill_mE575B5EEFBF91F9BF0D8A94D08D7E6C72653A191(L_0, L_2, /*hidden argument*/NULL);
		// if (node.Prev.Point != edge.P) {
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_3 = ___node2;
		NullCheck(L_3);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_4 = L_3->get_Prev_1();
		NullCheck(L_4);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_5 = L_4->get_Point_3();
		DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_6 = ___edge1;
		NullCheck(L_6);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_7 = ((TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A *)L_6)->get_P_0();
		if ((((RuntimeObject*)(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 *)L_5) == ((RuntimeObject*)(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 *)L_7)))
		{
			goto IL_006d;
		}
	}
	{
		// if (TriangulationUtil.Orient2d(edge.Q, node.Prev.Point, edge.P) == Orientation.CW) {
		DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_8 = ___edge1;
		NullCheck(L_8);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_9 = ((TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A *)L_8)->get_Q_1();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_10 = ___node2;
		NullCheck(L_10);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_11 = L_10->get_Prev_1();
		NullCheck(L_11);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_12 = L_11->get_Point_3();
		DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_13 = ___edge1;
		NullCheck(L_13);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_14 = ((TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A *)L_13)->get_P_0();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		int32_t L_15;
		L_15 = TriangulationUtil_Orient2d_m2CDE17B5E70FD361C8BA5DF3764136DC172C5996(L_9, L_12, L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_006d;
		}
	}
	{
		// if (TriangulationUtil.Orient2d(node.Point, node.Prev.Point, node.Prev.Prev.Point) == Orientation.CW) {
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_16 = ___node2;
		NullCheck(L_16);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_17 = L_16->get_Point_3();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_18 = ___node2;
		NullCheck(L_18);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_19 = L_18->get_Prev_1();
		NullCheck(L_19);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_20 = L_19->get_Point_3();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_21 = ___node2;
		NullCheck(L_21);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_22 = L_21->get_Prev_1();
		NullCheck(L_22);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_23 = L_22->get_Prev_1();
		NullCheck(L_23);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_24 = L_23->get_Point_3();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		int32_t L_25;
		L_25 = TriangulationUtil_Orient2d_m2CDE17B5E70FD361C8BA5DF3764136DC172C5996(L_17, L_20, L_24, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_006d;
		}
	}
	{
		// FillLeftConcaveEdgeEvent(tcx, edge, node);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_26 = ___tcx0;
		DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_27 = ___edge1;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_28 = ___node2;
		DTSweep_FillLeftConcaveEdgeEvent_m39EAB53A01445193AFF7895BF5A3578A944EA781(L_26, L_27, L_28, /*hidden argument*/NULL);
	}

IL_006d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillLeftBelowEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillLeftBelowEdgeEvent_m3DBB6FD18BE7661F5BF3B5CDAD2C0C6FDB31A283 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * ___edge1, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___node2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (tcx.IsDebugEnabled) tcx.DTDebugContext.ActiveNode = node;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_0 = ___tcx0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (tcx.IsDebugEnabled) tcx.DTDebugContext.ActiveNode = node;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_2 = ___tcx0;
		NullCheck(L_2);
		DTSweepDebugContext_t1118374B297F625192528B23AD580B5AB9F9EDF5 * L_3;
		L_3 = TriangulationContext_get_DTDebugContext_mEB43D96C7FD8DF25879619B69D1537270A134AD5(L_2, /*hidden argument*/NULL);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_4 = ___node2;
		NullCheck(L_3);
		DTSweepDebugContext_set_ActiveNode_m8CEF7E12336372A4DDA30B90BBDF1C210E2A7D18(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// if (node.Point.X > edge.P.X) {
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_5 = ___node2;
		NullCheck(L_5);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_6 = L_5->get_Point_3();
		NullCheck(L_6);
		double L_7 = L_6->get_X_1();
		DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_8 = ___edge1;
		NullCheck(L_8);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_9 = ((TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A *)L_8)->get_P_0();
		NullCheck(L_9);
		double L_10 = L_9->get_X_1();
		if ((!(((double)L_7) > ((double)L_10))))
		{
			goto IL_006d;
		}
	}
	{
		// if (TriangulationUtil.Orient2d(node.Point, node.Prev.Point, node.Prev.Prev.Point) == Orientation.CW) {
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_11 = ___node2;
		NullCheck(L_11);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_12 = L_11->get_Point_3();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_13 = ___node2;
		NullCheck(L_13);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_14 = L_13->get_Prev_1();
		NullCheck(L_14);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_15 = L_14->get_Point_3();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_16 = ___node2;
		NullCheck(L_16);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_17 = L_16->get_Prev_1();
		NullCheck(L_17);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_18 = L_17->get_Prev_1();
		NullCheck(L_18);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_19 = L_18->get_Point_3();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		int32_t L_20;
		L_20 = TriangulationUtil_Orient2d_m2CDE17B5E70FD361C8BA5DF3764136DC172C5996(L_12, L_15, L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_005d;
		}
	}
	{
		// FillLeftConcaveEdgeEvent(tcx, edge, node);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_21 = ___tcx0;
		DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_22 = ___edge1;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_23 = ___node2;
		DTSweep_FillLeftConcaveEdgeEvent_m39EAB53A01445193AFF7895BF5A3578A944EA781(L_21, L_22, L_23, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_005d:
	{
		// FillLeftConvexEdgeEvent(tcx, edge, node);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_24 = ___tcx0;
		DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_25 = ___edge1;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_26 = ___node2;
		DTSweep_FillLeftConvexEdgeEvent_m4D0934D67D23E00991151A0596ABB81F07F32D75(L_24, L_25, L_26, /*hidden argument*/NULL);
		// FillLeftBelowEdgeEvent(tcx, edge, node);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_27 = ___tcx0;
		DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_28 = ___edge1;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_29 = ___node2;
		DTSweep_FillLeftBelowEdgeEvent_m3DBB6FD18BE7661F5BF3B5CDAD2C0C6FDB31A283(L_27, L_28, L_29, /*hidden argument*/NULL);
	}

IL_006d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillLeftAboveEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillLeftAboveEdgeEvent_mEF257C979D572EAE6F7A95A21F45CCF90FB282EA (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * ___edge1, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___node2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0046;
	}

IL_0002:
	{
		// if (tcx.IsDebugEnabled) tcx.DTDebugContext.ActiveNode = node;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_0 = ___tcx0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_0);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// if (tcx.IsDebugEnabled) tcx.DTDebugContext.ActiveNode = node;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_2 = ___tcx0;
		NullCheck(L_2);
		DTSweepDebugContext_t1118374B297F625192528B23AD580B5AB9F9EDF5 * L_3;
		L_3 = TriangulationContext_get_DTDebugContext_mEB43D96C7FD8DF25879619B69D1537270A134AD5(L_2, /*hidden argument*/NULL);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_4 = ___node2;
		NullCheck(L_3);
		DTSweepDebugContext_set_ActiveNode_m8CEF7E12336372A4DDA30B90BBDF1C210E2A7D18(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// Orientation o1 = TriangulationUtil.Orient2d(edge.Q, node.Prev.Point, edge.P);
		DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_5 = ___edge1;
		NullCheck(L_5);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_6 = ((TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A *)L_5)->get_Q_1();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_7 = ___node2;
		NullCheck(L_7);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_8 = L_7->get_Prev_1();
		NullCheck(L_8);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_9 = L_8->get_Point_3();
		DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_10 = ___edge1;
		NullCheck(L_10);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_11 = ((TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A *)L_10)->get_P_0();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = TriangulationUtil_Orient2d_m2CDE17B5E70FD361C8BA5DF3764136DC172C5996(L_6, L_9, L_11, /*hidden argument*/NULL);
		// if (o1 == Orientation.CW) {
		if (L_12)
		{
			goto IL_003e;
		}
	}
	{
		// FillLeftBelowEdgeEvent(tcx, edge, node);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_13 = ___tcx0;
		DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_14 = ___edge1;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_15 = ___node2;
		DTSweep_FillLeftBelowEdgeEvent_m3DBB6FD18BE7661F5BF3B5CDAD2C0C6FDB31A283(L_13, L_14, L_15, /*hidden argument*/NULL);
		// } else {
		goto IL_0046;
	}

IL_003e:
	{
		// node = node.Prev;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_16 = ___node2;
		NullCheck(L_16);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_17 = L_16->get_Prev_1();
		___node2 = L_17;
	}

IL_0046:
	{
		// while (node.Prev.Point.X > edge.P.X) {
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_18 = ___node2;
		NullCheck(L_18);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_19 = L_18->get_Prev_1();
		NullCheck(L_19);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_20 = L_19->get_Point_3();
		NullCheck(L_20);
		double L_21 = L_20->get_X_1();
		DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_22 = ___edge1;
		NullCheck(L_22);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_23 = ((TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A *)L_22)->get_P_0();
		NullCheck(L_23);
		double L_24 = L_23->get_X_1();
		if ((((double)L_21) > ((double)L_24)))
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DTSweep::IsEdgeSideOfTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DTSweep_IsEdgeSideOfTriangle_m910E59F71540D478E47EE9549BCC2EA6687610D2 (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___triangle0, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___ep1, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___eq2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_m5EC6D4DA8D086DDC58E068ABA1B8F30C98E4D1CA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int index = triangle.EdgeIndex(ep, eq);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_0 = ___triangle0;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_1 = ___ep1;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_2 = ___eq2;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = DelaunayTriangle_EdgeIndex_m77EB021F9878EB52690AE793D2473F7856938F04(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if ( index == -1 ) return false;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_000f;
		}
	}
	{
		// if ( index == -1 ) return false;
		return (bool)0;
	}

IL_000f:
	{
		// triangle.MarkConstrainedEdge(index);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_5 = ___triangle0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		DelaunayTriangle_MarkConstrainedEdge_mD5F5305BEFB685C1FC80AB2E1E44DCC602B2CDF3(L_5, L_6, /*hidden argument*/NULL);
		// triangle = triangle.Neighbors[index];
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_7 = ___triangle0;
		NullCheck(L_7);
		FixedArray3_1_tDB222AD5E30A16C9D8C257978FFD6780A962B922 * L_8 = L_7->get_address_of_Neighbors_1();
		int32_t L_9 = V_0;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_10;
		L_10 = FixedArray3_1_get_Item_m5EC6D4DA8D086DDC58E068ABA1B8F30C98E4D1CA((FixedArray3_1_tDB222AD5E30A16C9D8C257978FFD6780A962B922 *)L_8, L_9, /*hidden argument*/FixedArray3_1_get_Item_m5EC6D4DA8D086DDC58E068ABA1B8F30C98E4D1CA_RuntimeMethod_var);
		___triangle0 = L_10;
		// if (triangle != null) triangle.MarkConstrainedEdge(ep, eq);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_11 = ___triangle0;
		if (!L_11)
		{
			goto IL_002f;
		}
	}
	{
		// if (triangle != null) triangle.MarkConstrainedEdge(ep, eq);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_12 = ___triangle0;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_13 = ___ep1;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_14 = ___eq2;
		NullCheck(L_12);
		DelaunayTriangle_MarkConstrainedEdge_m07868BE5BF7BBFE8810779495460DF9524FB5219(L_12, L_13, L_14, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::EdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_EdgeEvent_m820916D4B17A0AB8C083F9441498EA82F1E7AB32 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___ep1, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___eq2, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___triangle3, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___point4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * V_0 = NULL;
	TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// if (tcx.IsDebugEnabled) tcx.DTDebugContext.PrimaryTriangle=triangle;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_0 = ___tcx0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (tcx.IsDebugEnabled) tcx.DTDebugContext.PrimaryTriangle=triangle;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_2 = ___tcx0;
		NullCheck(L_2);
		DTSweepDebugContext_t1118374B297F625192528B23AD580B5AB9F9EDF5 * L_3;
		L_3 = TriangulationContext_get_DTDebugContext_mEB43D96C7FD8DF25879619B69D1537270A134AD5(L_2, /*hidden argument*/NULL);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_4 = ___triangle3;
		NullCheck(L_3);
		DTSweepDebugContext_set_PrimaryTriangle_mB948F030C8DC7369C96D02BF8A8CB79BA4B47F24(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// if (IsEdgeSideOfTriangle(triangle, ep, eq)) return;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_5 = ___triangle3;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_6 = ___ep1;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_7 = ___eq2;
		bool L_8;
		L_8 = DTSweep_IsEdgeSideOfTriangle_m910E59F71540D478E47EE9549BCC2EA6687610D2(L_5, L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_001f;
		}
	}
	{
		// if (IsEdgeSideOfTriangle(triangle, ep, eq)) return;
		return;
	}

IL_001f:
	{
		// p1 = triangle.PointCCWFrom(point);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_9 = ___triangle3;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_10 = ___point4;
		NullCheck(L_9);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_11;
		L_11 = DelaunayTriangle_PointCCWFrom_m701498FBCC2D5A858262F0D9A21BF2DAAB6EDF60(L_9, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		// Orientation o1 = TriangulationUtil.Orient2d(eq, p1, ep);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_12 = ___eq2;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_13 = V_0;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_14 = ___ep1;
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		int32_t L_15;
		L_15 = TriangulationUtil_Orient2d_m2CDE17B5E70FD361C8BA5DF3764136DC172C5996(L_12, L_13, L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		// if (o1 == Orientation.Collinear) {
		int32_t L_16 = V_2;
		if ((!(((uint32_t)L_16) == ((uint32_t)2))))
		{
			goto IL_0043;
		}
	}
	{
		// throw new PointOnEdgeException("EdgeEvent - Point on constrained edge not supported yet",eq,p1,ep);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_17 = ___eq2;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_18 = V_0;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_19 = ___ep1;
		PointOnEdgeException_t4386B844F234AEDBCA71E45B92DF52B24899056C * L_20 = (PointOnEdgeException_t4386B844F234AEDBCA71E45B92DF52B24899056C *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PointOnEdgeException_t4386B844F234AEDBCA71E45B92DF52B24899056C_il2cpp_TypeInfo_var)));
		PointOnEdgeException__ctor_mA50E0D3502E354A1708F96720F24878F5FC7EE72(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral56FEC330311BE1770446499D7CC29C5DBA8485E8)), L_17, L_18, L_19, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DTSweep_EdgeEvent_m820916D4B17A0AB8C083F9441498EA82F1E7AB32_RuntimeMethod_var)));
	}

IL_0043:
	{
		// p2 = triangle.PointCWFrom(point);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_21 = ___triangle3;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_22 = ___point4;
		NullCheck(L_21);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_23;
		L_23 = DelaunayTriangle_PointCWFrom_m7F83BA541E2E5F811A73467832BB7A7FE557FBB4(L_21, L_22, /*hidden argument*/NULL);
		V_1 = L_23;
		// Orientation o2 = TriangulationUtil.Orient2d(eq, p2, ep);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_24 = ___eq2;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_25 = V_1;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_26 = ___ep1;
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		int32_t L_27;
		L_27 = TriangulationUtil_Orient2d_m2CDE17B5E70FD361C8BA5DF3764136DC172C5996(L_24, L_25, L_26, /*hidden argument*/NULL);
		V_3 = L_27;
		// if (o2 == Orientation.Collinear) {
		int32_t L_28 = V_3;
		if ((!(((uint32_t)L_28) == ((uint32_t)2))))
		{
			goto IL_0067;
		}
	}
	{
		// throw new PointOnEdgeException("EdgeEvent - Point on constrained edge not supported yet",eq,p2,ep);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_29 = ___eq2;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_30 = V_1;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_31 = ___ep1;
		PointOnEdgeException_t4386B844F234AEDBCA71E45B92DF52B24899056C * L_32 = (PointOnEdgeException_t4386B844F234AEDBCA71E45B92DF52B24899056C *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PointOnEdgeException_t4386B844F234AEDBCA71E45B92DF52B24899056C_il2cpp_TypeInfo_var)));
		PointOnEdgeException__ctor_mA50E0D3502E354A1708F96720F24878F5FC7EE72(L_32, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral56FEC330311BE1770446499D7CC29C5DBA8485E8)), L_29, L_30, L_31, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DTSweep_EdgeEvent_m820916D4B17A0AB8C083F9441498EA82F1E7AB32_RuntimeMethod_var)));
	}

IL_0067:
	{
		// if (o1 == o2) {
		int32_t L_33 = V_2;
		int32_t L_34 = V_3;
		if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
		{
			goto IL_0090;
		}
	}
	{
		// if (o1 == Orientation.CW) {
		int32_t L_35 = V_2;
		if (L_35)
		{
			goto IL_007a;
		}
	}
	{
		// triangle = triangle.NeighborCCWFrom(point);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_36 = ___triangle3;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_37 = ___point4;
		NullCheck(L_36);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_38;
		L_38 = DelaunayTriangle_NeighborCCWFrom_mFC8DC101483E5DA3FA8D4FFC3E724529DDFB79A4(L_36, L_37, /*hidden argument*/NULL);
		___triangle3 = L_38;
		// } else {
		goto IL_0084;
	}

IL_007a:
	{
		// triangle = triangle.NeighborCWFrom(point);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_39 = ___triangle3;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_40 = ___point4;
		NullCheck(L_39);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_41;
		L_41 = DelaunayTriangle_NeighborCWFrom_m02FE93F770765BFFB25A2366C267C2D3FC97C91D(L_39, L_40, /*hidden argument*/NULL);
		___triangle3 = L_41;
	}

IL_0084:
	{
		// EdgeEvent(tcx, ep, eq, triangle, point);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_42 = ___tcx0;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_43 = ___ep1;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_44 = ___eq2;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_45 = ___triangle3;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_46 = ___point4;
		DTSweep_EdgeEvent_m820916D4B17A0AB8C083F9441498EA82F1E7AB32(L_42, L_43, L_44, L_45, L_46, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_0090:
	{
		// FlipEdgeEvent(tcx, ep, eq, triangle, point);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_47 = ___tcx0;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_48 = ___ep1;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_49 = ___eq2;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_50 = ___triangle3;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_51 = ___point4;
		DTSweep_FlipEdgeEvent_m8EDDECF4B8FF820B92026F3DA51FF29D2211EAD2(L_47, L_48, L_49, L_50, L_51, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FlipEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FlipEdgeEvent_m8EDDECF4B8FF820B92026F3DA51FF29D2211EAD2 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___ep1, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___eq2, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___t3, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral114E73D2A801F90DEB8FCCBE8B4B66E2C796CDD2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22ED5FCE4A7B9417FAA18E0C31983A86F0BDAD99);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5029680EA7BBB6D128B64AE7F27E5CEC471A381);
		s_Il2CppMethodInitialized = true;
	}
	DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * V_0 = NULL;
	TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * V_1 = NULL;
	int32_t V_2 = 0;
	TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * V_3 = NULL;
	{
		// DelaunayTriangle ot = t.NeighborAcrossFrom(p);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_0 = ___t3;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_1 = ___p4;
		NullCheck(L_0);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_2;
		L_2 = DelaunayTriangle_NeighborAcrossFrom_m0CF00F9AF2656B9E6B3FB590AB2DABF2DA946252(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// TriangulationPoint op = ot.OppositePoint(t, p);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_3 = V_0;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_4 = ___t3;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_5 = ___p4;
		NullCheck(L_3);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_6;
		L_6 = DelaunayTriangle_OppositePoint_mCCD125CD7C6BE7113AAC180FF37066F9802967CE(L_3, L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// if (ot == null) {
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_7 = V_0;
		if (L_7)
		{
			goto IL_0021;
		}
	}
	{
		// throw new InvalidOperationException("[BUG:FIXME] FLIP failed due to missing triangle");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_8 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07AC1B1D6E5B09CAD55868C0EBA7C2B6EB0B16DF)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DTSweep_FlipEdgeEvent_m8EDDECF4B8FF820B92026F3DA51FF29D2211EAD2_RuntimeMethod_var)));
	}

IL_0021:
	{
		// if (tcx.IsDebugEnabled) {
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_9 = ___tcx0;
		NullCheck(L_9);
		bool L_10;
		L_10 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_9);
		if (!L_10)
		{
			goto IL_0041;
		}
	}
	{
		// tcx.DTDebugContext.PrimaryTriangle   = t;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_11 = ___tcx0;
		NullCheck(L_11);
		DTSweepDebugContext_t1118374B297F625192528B23AD580B5AB9F9EDF5 * L_12;
		L_12 = TriangulationContext_get_DTDebugContext_mEB43D96C7FD8DF25879619B69D1537270A134AD5(L_11, /*hidden argument*/NULL);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_13 = ___t3;
		NullCheck(L_12);
		DTSweepDebugContext_set_PrimaryTriangle_mB948F030C8DC7369C96D02BF8A8CB79BA4B47F24(L_12, L_13, /*hidden argument*/NULL);
		// tcx.DTDebugContext.SecondaryTriangle = ot;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_14 = ___tcx0;
		NullCheck(L_14);
		DTSweepDebugContext_t1118374B297F625192528B23AD580B5AB9F9EDF5 * L_15;
		L_15 = TriangulationContext_get_DTDebugContext_mEB43D96C7FD8DF25879619B69D1537270A134AD5(L_14, /*hidden argument*/NULL);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_16 = V_0;
		NullCheck(L_15);
		DTSweepDebugContext_set_SecondaryTriangle_m0B5449D47E7722E6B0F8869E167862C6C0022EAD(L_15, L_16, /*hidden argument*/NULL);
	}

IL_0041:
	{
		// bool inScanArea = TriangulationUtil.InScanArea(p, t.PointCCWFrom(p), t.PointCWFrom(p), op);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_17 = ___p4;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_18 = ___t3;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_19 = ___p4;
		NullCheck(L_18);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_20;
		L_20 = DelaunayTriangle_PointCCWFrom_m701498FBCC2D5A858262F0D9A21BF2DAAB6EDF60(L_18, L_19, /*hidden argument*/NULL);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_21 = ___t3;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_22 = ___p4;
		NullCheck(L_21);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_23;
		L_23 = DelaunayTriangle_PointCWFrom_m7F83BA541E2E5F811A73467832BB7A7FE557FBB4(L_21, L_22, /*hidden argument*/NULL);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_24 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = TriangulationUtil_InScanArea_m0410D0FD71FC8E22EB0D6B9128B72778A5AABC60(L_17, L_20, L_23, L_24, /*hidden argument*/NULL);
		// if (inScanArea) {
		if (!L_25)
		{
			goto IL_0120;
		}
	}
	{
		// RotateTrianglePair(t, p, ot, op);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_26 = ___t3;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_27 = ___p4;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_28 = V_0;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_29 = V_1;
		DTSweep_RotateTrianglePair_m3450E956082B91F301372C30E9C2545454C495F4(L_26, L_27, L_28, L_29, /*hidden argument*/NULL);
		// tcx.MapTriangleToNodes(t);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_30 = ___tcx0;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_31 = ___t3;
		NullCheck(L_30);
		DTSweepContext_MapTriangleToNodes_m88F0ECE533C928433E975FC7409E8A63A39B89FB(L_30, L_31, /*hidden argument*/NULL);
		// tcx.MapTriangleToNodes(ot);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_32 = ___tcx0;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_33 = V_0;
		NullCheck(L_32);
		DTSweepContext_MapTriangleToNodes_m88F0ECE533C928433E975FC7409E8A63A39B89FB(L_32, L_33, /*hidden argument*/NULL);
		// if (p == eq && op == ep) {
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_34 = ___p4;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_35 = ___eq2;
		if ((!(((RuntimeObject*)(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 *)L_34) == ((RuntimeObject*)(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 *)L_35))))
		{
			goto IL_00eb;
		}
	}
	{
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_36 = V_1;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_37 = ___ep1;
		if ((!(((RuntimeObject*)(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 *)L_36) == ((RuntimeObject*)(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 *)L_37))))
		{
			goto IL_00eb;
		}
	}
	{
		// if (eq == tcx.EdgeEvent.ConstrainedEdge.Q
		//     && ep == tcx.EdgeEvent.ConstrainedEdge.P) {
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_38 = ___eq2;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_39 = ___tcx0;
		NullCheck(L_39);
		DTSweepEdgeEvent_t93472178B8E22740677AF3E5D255F96392BB8453 * L_40 = L_39->get_EdgeEvent_12();
		NullCheck(L_40);
		DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_41 = L_40->get_ConstrainedEdge_0();
		NullCheck(L_41);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_42 = ((TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A *)L_41)->get_Q_1();
		if ((!(((RuntimeObject*)(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 *)L_38) == ((RuntimeObject*)(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 *)L_42))))
		{
			goto IL_00d8;
		}
	}
	{
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_43 = ___ep1;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_44 = ___tcx0;
		NullCheck(L_44);
		DTSweepEdgeEvent_t93472178B8E22740677AF3E5D255F96392BB8453 * L_45 = L_44->get_EdgeEvent_12();
		NullCheck(L_45);
		DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_46 = L_45->get_ConstrainedEdge_0();
		NullCheck(L_46);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_47 = ((TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A *)L_46)->get_P_0();
		if ((!(((RuntimeObject*)(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 *)L_43) == ((RuntimeObject*)(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 *)L_47))))
		{
			goto IL_00d8;
		}
	}
	{
		// if (tcx.IsDebugEnabled) Console.WriteLine("[FLIP] - constrained edge done"); // TODO: remove
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_48 = ___tcx0;
		NullCheck(L_48);
		bool L_49;
		L_49 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_48);
		if (!L_49)
		{
			goto IL_00b7;
		}
	}
	{
		// if (tcx.IsDebugEnabled) Console.WriteLine("[FLIP] - constrained edge done"); // TODO: remove
		IL2CPP_RUNTIME_CLASS_INIT(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var);
		Console_WriteLine_mE9EEA95C541D41E36A0F4844153A67EAAA0D12F7(_stringLiteral22ED5FCE4A7B9417FAA18E0C31983A86F0BDAD99, /*hidden argument*/NULL);
	}

IL_00b7:
	{
		// t.MarkConstrainedEdge(ep, eq);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_50 = ___t3;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_51 = ___ep1;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_52 = ___eq2;
		NullCheck(L_50);
		DelaunayTriangle_MarkConstrainedEdge_m07868BE5BF7BBFE8810779495460DF9524FB5219(L_50, L_51, L_52, /*hidden argument*/NULL);
		// ot.MarkConstrainedEdge(ep, eq);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_53 = V_0;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_54 = ___ep1;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_55 = ___eq2;
		NullCheck(L_53);
		DelaunayTriangle_MarkConstrainedEdge_m07868BE5BF7BBFE8810779495460DF9524FB5219(L_53, L_54, L_55, /*hidden argument*/NULL);
		// Legalize(tcx, t);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_56 = ___tcx0;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_57 = ___t3;
		bool L_58;
		L_58 = DTSweep_Legalize_m9CA920D196E94FA30CB8AF44E61C834983219960(L_56, L_57, /*hidden argument*/NULL);
		// Legalize(tcx, ot);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_59 = ___tcx0;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_60 = V_0;
		bool L_61;
		L_61 = DTSweep_Legalize_m9CA920D196E94FA30CB8AF44E61C834983219960(L_59, L_60, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_00d8:
	{
		// if (tcx.IsDebugEnabled) Console.WriteLine("[FLIP] - subedge done"); // TODO: remove
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_62 = ___tcx0;
		NullCheck(L_62);
		bool L_63;
		L_63 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_62);
		if (!L_63)
		{
			goto IL_0140;
		}
	}
	{
		// if (tcx.IsDebugEnabled) Console.WriteLine("[FLIP] - subedge done"); // TODO: remove
		IL2CPP_RUNTIME_CLASS_INIT(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var);
		Console_WriteLine_mE9EEA95C541D41E36A0F4844153A67EAAA0D12F7(_stringLiteralC5029680EA7BBB6D128B64AE7F27E5CEC471A381, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_00eb:
	{
		// if (tcx.IsDebugEnabled) Console.WriteLine("[FLIP] - flipping and continuing with triangle still crossing edge"); // TODO: remove
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_64 = ___tcx0;
		NullCheck(L_64);
		bool L_65;
		L_65 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_64);
		if (!L_65)
		{
			goto IL_00fd;
		}
	}
	{
		// if (tcx.IsDebugEnabled) Console.WriteLine("[FLIP] - flipping and continuing with triangle still crossing edge"); // TODO: remove
		IL2CPP_RUNTIME_CLASS_INIT(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var);
		Console_WriteLine_mE9EEA95C541D41E36A0F4844153A67EAAA0D12F7(_stringLiteral114E73D2A801F90DEB8FCCBE8B4B66E2C796CDD2, /*hidden argument*/NULL);
	}

IL_00fd:
	{
		// Orientation o = TriangulationUtil.Orient2d(eq, op, ep);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_66 = ___eq2;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_67 = V_1;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_68 = ___ep1;
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		int32_t L_69;
		L_69 = TriangulationUtil_Orient2d_m2CDE17B5E70FD361C8BA5DF3764136DC172C5996(L_66, L_67, L_68, /*hidden argument*/NULL);
		V_2 = L_69;
		// t = NextFlipTriangle(tcx, o, t, ot, p, op);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_70 = ___tcx0;
		int32_t L_71 = V_2;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_72 = ___t3;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_73 = V_0;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_74 = ___p4;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_75 = V_1;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_76;
		L_76 = DTSweep_NextFlipTriangle_mD958DB4F11E0B8EE2C99D52A5CC42B429F99830E(L_70, L_71, L_72, L_73, L_74, L_75, /*hidden argument*/NULL);
		___t3 = L_76;
		// FlipEdgeEvent(tcx, ep, eq, t, p);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_77 = ___tcx0;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_78 = ___ep1;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_79 = ___eq2;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_80 = ___t3;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_81 = ___p4;
		DTSweep_FlipEdgeEvent_m8EDDECF4B8FF820B92026F3DA51FF29D2211EAD2(L_77, L_78, L_79, L_80, L_81, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_0120:
	{
		// TriangulationPoint newP = NextFlipPoint(ep, eq, ot, op);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_82 = ___ep1;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_83 = ___eq2;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_84 = V_0;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_85 = V_1;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_86;
		L_86 = DTSweep_NextFlipPoint_m3FEDD2B15425AFC79E0103541A3E75A2A05F3A2A(L_82, L_83, L_84, L_85, /*hidden argument*/NULL);
		V_3 = L_86;
		// FlipScanEdgeEvent(tcx, ep, eq, t, ot, newP);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_87 = ___tcx0;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_88 = ___ep1;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_89 = ___eq2;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_90 = ___t3;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_91 = V_0;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_92 = V_3;
		DTSweep_FlipScanEdgeEvent_mAC545BE0D9BD844053EB746202D98C21D39C6ADC(L_87, L_88, L_89, L_90, L_91, L_92, /*hidden argument*/NULL);
		// EdgeEvent(tcx, ep, eq, t, p);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_93 = ___tcx0;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_94 = ___ep1;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_95 = ___eq2;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_96 = ___t3;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_97 = ___p4;
		DTSweep_EdgeEvent_m820916D4B17A0AB8C083F9441498EA82F1E7AB32(L_93, L_94, L_95, L_96, L_97, /*hidden argument*/NULL);
	}

IL_0140:
	{
		// }
		return;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DTSweep::NextFlipPoint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * DTSweep_NextFlipPoint_m3FEDD2B15425AFC79E0103541A3E75A2A05F3A2A (TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___ep0, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___eq1, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___ot2, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___op3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Orientation o2d = TriangulationUtil.Orient2d(eq, op, ep);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_0 = ___eq1;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_1 = ___op3;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_2 = ___ep0;
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = TriangulationUtil_Orient2d_m2CDE17B5E70FD361C8BA5DF3764136DC172C5996(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		switch (L_4)
		{
			case 0:
			{
				goto IL_001d;
			}
			case 1:
			{
				goto IL_0025;
			}
			case 2:
			{
				goto IL_002d;
			}
		}
	}
	{
		goto IL_003b;
	}

IL_001d:
	{
		// case Orientation.CW: return ot.PointCCWFrom(op);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_5 = ___ot2;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_6 = ___op3;
		NullCheck(L_5);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_7;
		L_7 = DelaunayTriangle_PointCCWFrom_m701498FBCC2D5A858262F0D9A21BF2DAAB6EDF60(L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0025:
	{
		// case Orientation.CCW: return ot.PointCWFrom(op);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_8 = ___ot2;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_9 = ___op3;
		NullCheck(L_8);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_10;
		L_10 = DelaunayTriangle_PointCWFrom_m7F83BA541E2E5F811A73467832BB7A7FE557FBB4(L_8, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_002d:
	{
		// throw new PointOnEdgeException("Point on constrained edge not supported yet",eq,op,ep);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_11 = ___eq1;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_12 = ___op3;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_13 = ___ep0;
		PointOnEdgeException_t4386B844F234AEDBCA71E45B92DF52B24899056C * L_14 = (PointOnEdgeException_t4386B844F234AEDBCA71E45B92DF52B24899056C *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PointOnEdgeException_t4386B844F234AEDBCA71E45B92DF52B24899056C_il2cpp_TypeInfo_var)));
		PointOnEdgeException__ctor_mA50E0D3502E354A1708F96720F24878F5FC7EE72(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0C9DBCA15AA768A26AA34FE93E331BE119D035)), L_11, L_12, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DTSweep_NextFlipPoint_m3FEDD2B15425AFC79E0103541A3E75A2A05F3A2A_RuntimeMethod_var)));
	}

IL_003b:
	{
		// throw new NotImplementedException("Orientation not handled");
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_15 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_m8A9AA4499614A5BC57DD21713D0720630C130AEB(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC2C785F436B8C0C146A0CADB55F5E0E73F71B11D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DTSweep_NextFlipPoint_m3FEDD2B15425AFC79E0103541A3E75A2A05F3A2A_RuntimeMethod_var)));
	}
}
// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle UnityEngine.ProBuilder.Poly2Tri.DTSweep::NextFlipTriangle(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.Orientation,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * DTSweep_NextFlipTriangle_mD958DB4F11E0B8EE2C99D52A5CC42B429F99830E (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, int32_t ___o1, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___t2, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___ot3, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p4, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___op5, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (o == Orientation.CCW) {
		int32_t L_0 = ___o1;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0031;
		}
	}
	{
		// edgeIndex = ot.EdgeIndex(p, op);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_1 = ___ot3;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_2 = ___p4;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_3 = ___op5;
		NullCheck(L_1);
		int32_t L_4;
		L_4 = DelaunayTriangle_EdgeIndex_m77EB021F9878EB52690AE793D2473F7856938F04(L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// ot.EdgeIsDelaunay[edgeIndex] = true;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_5 = ___ot3;
		NullCheck(L_5);
		FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * L_6 = L_5->get_address_of_EdgeIsDelaunay_3();
		int32_t L_7 = V_0;
		FixedBitArray3_set_Item_mE1DF6CC301313E76DBB57477F11DC4DE41BED620((FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 *)L_6, L_7, (bool)1, /*hidden argument*/NULL);
		// Legalize(tcx, ot);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_8 = ___tcx0;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_9 = ___ot3;
		bool L_10;
		L_10 = DTSweep_Legalize_m9CA920D196E94FA30CB8AF44E61C834983219960(L_8, L_9, /*hidden argument*/NULL);
		// ot.EdgeIsDelaunay.Clear();
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_11 = ___ot3;
		NullCheck(L_11);
		FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * L_12 = L_11->get_address_of_EdgeIsDelaunay_3();
		FixedBitArray3_Clear_m3EB290806E96B94C74D04D944BD6501FBCC89696((FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 *)L_12, /*hidden argument*/NULL);
		// return t;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_13 = ___t2;
		return L_13;
	}

IL_0031:
	{
		// edgeIndex = t.EdgeIndex(p, op);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_14 = ___t2;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_15 = ___p4;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_16 = ___op5;
		NullCheck(L_14);
		int32_t L_17;
		L_17 = DelaunayTriangle_EdgeIndex_m77EB021F9878EB52690AE793D2473F7856938F04(L_14, L_15, L_16, /*hidden argument*/NULL);
		V_0 = L_17;
		// t.EdgeIsDelaunay[edgeIndex] = true;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_18 = ___t2;
		NullCheck(L_18);
		FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * L_19 = L_18->get_address_of_EdgeIsDelaunay_3();
		int32_t L_20 = V_0;
		FixedBitArray3_set_Item_mE1DF6CC301313E76DBB57477F11DC4DE41BED620((FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 *)L_19, L_20, (bool)1, /*hidden argument*/NULL);
		// Legalize(tcx, t);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_21 = ___tcx0;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_22 = ___t2;
		bool L_23;
		L_23 = DTSweep_Legalize_m9CA920D196E94FA30CB8AF44E61C834983219960(L_21, L_22, /*hidden argument*/NULL);
		// t.EdgeIsDelaunay.Clear();
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_24 = ___t2;
		NullCheck(L_24);
		FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * L_25 = L_24->get_address_of_EdgeIsDelaunay_3();
		FixedBitArray3_Clear_m3EB290806E96B94C74D04D944BD6501FBCC89696((FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 *)L_25, /*hidden argument*/NULL);
		// return ot;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_26 = ___ot3;
		return L_26;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FlipScanEdgeEvent(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FlipScanEdgeEvent_mAC545BE0D9BD844053EB746202D98C21D39C6ADC (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___ep1, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___eq2, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___flipTriangle3, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___t4, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD62066A98DDBC2159E65CC5B7BAC045F46AC043E);
		s_Il2CppMethodInitialized = true;
	}
	DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * V_0 = NULL;
	TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * V_1 = NULL;
	TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * V_2 = NULL;
	{
		// ot = t.NeighborAcrossFrom(p);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_0 = ___t4;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_1 = ___p5;
		NullCheck(L_0);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_2;
		L_2 = DelaunayTriangle_NeighborAcrossFrom_m0CF00F9AF2656B9E6B3FB590AB2DABF2DA946252(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// op = ot.OppositePoint(t, p);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_3 = V_0;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_4 = ___t4;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_5 = ___p5;
		NullCheck(L_3);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_6;
		L_6 = DelaunayTriangle_OppositePoint_mCCD125CD7C6BE7113AAC180FF37066F9802967CE(L_3, L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// if (ot == null) {
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_7 = V_0;
		if (L_7)
		{
			goto IL_0023;
		}
	}
	{
		// throw new Exception("[BUG:FIXME] FLIP failed due to missing triangle");
		Exception_t * L_8 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07AC1B1D6E5B09CAD55868C0EBA7C2B6EB0B16DF)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DTSweep_FlipScanEdgeEvent_mAC545BE0D9BD844053EB746202D98C21D39C6ADC_RuntimeMethod_var)));
	}

IL_0023:
	{
		// if (tcx.IsDebugEnabled) {
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_9 = ___tcx0;
		NullCheck(L_9);
		bool L_10;
		L_10 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled() */, L_9);
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		// Console.WriteLine("[FLIP:SCAN] - scan next point"); // TODO: remove
		IL2CPP_RUNTIME_CLASS_INIT(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var);
		Console_WriteLine_mE9EEA95C541D41E36A0F4844153A67EAAA0D12F7(_stringLiteralD62066A98DDBC2159E65CC5B7BAC045F46AC043E, /*hidden argument*/NULL);
		// tcx.DTDebugContext.PrimaryTriangle = t;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_11 = ___tcx0;
		NullCheck(L_11);
		DTSweepDebugContext_t1118374B297F625192528B23AD580B5AB9F9EDF5 * L_12;
		L_12 = TriangulationContext_get_DTDebugContext_mEB43D96C7FD8DF25879619B69D1537270A134AD5(L_11, /*hidden argument*/NULL);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_13 = ___t4;
		NullCheck(L_12);
		DTSweepDebugContext_set_PrimaryTriangle_mB948F030C8DC7369C96D02BF8A8CB79BA4B47F24(L_12, L_13, /*hidden argument*/NULL);
		// tcx.DTDebugContext.SecondaryTriangle = ot;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_14 = ___tcx0;
		NullCheck(L_14);
		DTSweepDebugContext_t1118374B297F625192528B23AD580B5AB9F9EDF5 * L_15;
		L_15 = TriangulationContext_get_DTDebugContext_mEB43D96C7FD8DF25879619B69D1537270A134AD5(L_14, /*hidden argument*/NULL);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_16 = V_0;
		NullCheck(L_15);
		DTSweepDebugContext_set_SecondaryTriangle_m0B5449D47E7722E6B0F8869E167862C6C0022EAD(L_15, L_16, /*hidden argument*/NULL);
	}

IL_004e:
	{
		// inScanArea = TriangulationUtil.InScanArea(eq, flipTriangle.PointCCWFrom(eq), flipTriangle.PointCWFrom(eq), op);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_17 = ___eq2;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_18 = ___flipTriangle3;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_19 = ___eq2;
		NullCheck(L_18);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_20;
		L_20 = DelaunayTriangle_PointCCWFrom_m701498FBCC2D5A858262F0D9A21BF2DAAB6EDF60(L_18, L_19, /*hidden argument*/NULL);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_21 = ___flipTriangle3;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_22 = ___eq2;
		NullCheck(L_21);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_23;
		L_23 = DelaunayTriangle_PointCWFrom_m7F83BA541E2E5F811A73467832BB7A7FE557FBB4(L_21, L_22, /*hidden argument*/NULL);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_24 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = TriangulationUtil_InScanArea_m0410D0FD71FC8E22EB0D6B9128B72778A5AABC60(L_17, L_20, L_23, L_24, /*hidden argument*/NULL);
		// if (inScanArea) {
		if (!L_25)
		{
			goto IL_0070;
		}
	}
	{
		// FlipEdgeEvent(tcx, eq, op, ot, op);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_26 = ___tcx0;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_27 = ___eq2;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_28 = V_1;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_29 = V_0;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_30 = V_1;
		DTSweep_FlipEdgeEvent_m8EDDECF4B8FF820B92026F3DA51FF29D2211EAD2(L_26, L_27, L_28, L_29, L_30, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_0070:
	{
		// newP = NextFlipPoint(ep, eq, ot, op);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_31 = ___ep1;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_32 = ___eq2;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_33 = V_0;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_34 = V_1;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_35;
		L_35 = DTSweep_NextFlipPoint_m3FEDD2B15425AFC79E0103541A3E75A2A05F3A2A(L_31, L_32, L_33, L_34, /*hidden argument*/NULL);
		V_2 = L_35;
		// FlipScanEdgeEvent(tcx, ep, eq, flipTriangle, ot, newP);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_36 = ___tcx0;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_37 = ___ep1;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_38 = ___eq2;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_39 = ___flipTriangle3;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_40 = V_0;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_41 = V_2;
		DTSweep_FlipScanEdgeEvent_mAC545BE0D9BD844053EB746202D98C21D39C6ADC(L_36, L_37, L_38, L_39, L_40, L_41, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillAdvancingFront(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillAdvancingFront_m609926E19EBAA69F6BFE6B36F45EA77FFABB586D (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___n1, const RuntimeMethod* method)
{
	AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * V_0 = NULL;
	double V_1 = 0.0;
	{
		// node = n.Next;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_0 = ___n1;
		NullCheck(L_0);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_1 = L_0->get_Next_0();
		V_0 = L_1;
		goto IL_0036;
	}

IL_0009:
	{
		// angle = HoleAngle(node);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_2 = V_0;
		double L_3;
		L_3 = DTSweep_HoleAngle_m0AFE3CDC5748C27E7729EDA981BA97E695E83F95(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// if (angle > PI_div2 || angle < -PI_div2) break;
		double L_4 = V_1;
		if ((((double)L_4) > ((double)(1.5707963267948966))))
		{
			goto IL_003e;
		}
	}
	{
		double L_5 = V_1;
		if ((((double)L_5) < ((double)(-1.5707963267948966))))
		{
			goto IL_003e;
		}
	}
	{
		// Fill(tcx, node);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_6 = ___tcx0;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_7 = V_0;
		DTSweep_Fill_mE575B5EEFBF91F9BF0D8A94D08D7E6C72653A191(L_6, L_7, /*hidden argument*/NULL);
		// node = node.Next;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_8 = V_0;
		NullCheck(L_8);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_9 = L_8->get_Next_0();
		V_0 = L_9;
	}

IL_0036:
	{
		// while (node.HasNext) {
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_10 = V_0;
		NullCheck(L_10);
		bool L_11;
		L_11 = AdvancingFrontNode_get_HasNext_m405B1A3BF18783AB2494DF7C47D1E4A34ACBF546(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0009;
		}
	}

IL_003e:
	{
		// node = n.Prev;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_12 = ___n1;
		NullCheck(L_12);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_13 = L_12->get_Prev_1();
		V_0 = L_13;
		goto IL_0074;
	}

IL_0047:
	{
		// angle = HoleAngle(node);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_14 = V_0;
		double L_15;
		L_15 = DTSweep_HoleAngle_m0AFE3CDC5748C27E7729EDA981BA97E695E83F95(L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		// if (angle > PI_div2 || angle < -PI_div2) break;
		double L_16 = V_1;
		if ((((double)L_16) > ((double)(1.5707963267948966))))
		{
			goto IL_007c;
		}
	}
	{
		double L_17 = V_1;
		if ((((double)L_17) < ((double)(-1.5707963267948966))))
		{
			goto IL_007c;
		}
	}
	{
		// Fill(tcx, node);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_18 = ___tcx0;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_19 = V_0;
		DTSweep_Fill_mE575B5EEFBF91F9BF0D8A94D08D7E6C72653A191(L_18, L_19, /*hidden argument*/NULL);
		// node = node.Prev;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_20 = V_0;
		NullCheck(L_20);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_21 = L_20->get_Prev_1();
		V_0 = L_21;
	}

IL_0074:
	{
		// while (node.HasPrev) {
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_22 = V_0;
		NullCheck(L_22);
		bool L_23;
		L_23 = AdvancingFrontNode_get_HasPrev_m1D837180F5BC57D61286BB0084C794BBA91825F5(L_22, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_0047;
		}
	}

IL_007c:
	{
		// if (n.HasNext && n.Next.HasNext) {
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_24 = ___n1;
		NullCheck(L_24);
		bool L_25;
		L_25 = AdvancingFrontNode_get_HasNext_m405B1A3BF18783AB2494DF7C47D1E4A34ACBF546(L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00ab;
		}
	}
	{
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_26 = ___n1;
		NullCheck(L_26);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_27 = L_26->get_Next_0();
		NullCheck(L_27);
		bool L_28;
		L_28 = AdvancingFrontNode_get_HasNext_m405B1A3BF18783AB2494DF7C47D1E4A34ACBF546(L_27, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00ab;
		}
	}
	{
		// angle = BasinAngle(n);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_29 = ___n1;
		double L_30;
		L_30 = DTSweep_BasinAngle_mA5F862BFBC2E0F3B1A57D195F883ED9C6A07CCD8(L_29, /*hidden argument*/NULL);
		V_1 = L_30;
		// if (angle < PI_3div4) FillBasin(tcx, n);
		double L_31 = V_1;
		if ((!(((double)L_31) < ((double)(2.3561944901923448)))))
		{
			goto IL_00ab;
		}
	}
	{
		// if (angle < PI_3div4) FillBasin(tcx, n);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_32 = ___tcx0;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_33 = ___n1;
		DTSweep_FillBasin_m02629657BEAFAC60C9F2CCACEC536E8BAD144A5C(L_32, L_33, /*hidden argument*/NULL);
	}

IL_00ab:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillBasin(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillBasin_m02629657BEAFAC60C9F2CCACEC536E8BAD144A5C (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___node1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (TriangulationUtil.Orient2d(node.Point, node.Next.Point, node.Next.Next.Point) == Orientation.CCW) {
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_0 = ___node1;
		NullCheck(L_0);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_1 = L_0->get_Point_3();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_2 = ___node1;
		NullCheck(L_2);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_3 = L_2->get_Next_0();
		NullCheck(L_3);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_4 = L_3->get_Point_3();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_5 = ___node1;
		NullCheck(L_5);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_6 = L_5->get_Next_0();
		NullCheck(L_6);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_7 = L_6->get_Next_0();
		NullCheck(L_7);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_8 = L_7->get_Point_3();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = TriangulationUtil_Orient2d_m2CDE17B5E70FD361C8BA5DF3764136DC172C5996(L_1, L_4, L_8, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		// tcx.Basin.leftNode = node;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_10 = ___tcx0;
		NullCheck(L_10);
		DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F * L_11 = L_10->get_Basin_11();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_12 = ___node1;
		NullCheck(L_11);
		L_11->set_leftNode_0(L_12);
		// } else {
		goto IL_0048;
	}

IL_0037:
	{
		// tcx.Basin.leftNode = node.Next;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_13 = ___tcx0;
		NullCheck(L_13);
		DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F * L_14 = L_13->get_Basin_11();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_15 = ___node1;
		NullCheck(L_15);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_16 = L_15->get_Next_0();
		NullCheck(L_14);
		L_14->set_leftNode_0(L_16);
	}

IL_0048:
	{
		// tcx.Basin.bottomNode = tcx.Basin.leftNode;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_17 = ___tcx0;
		NullCheck(L_17);
		DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F * L_18 = L_17->get_Basin_11();
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_19 = ___tcx0;
		NullCheck(L_19);
		DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F * L_20 = L_19->get_Basin_11();
		NullCheck(L_20);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_21 = L_20->get_leftNode_0();
		NullCheck(L_18);
		L_18->set_bottomNode_1(L_21);
		goto IL_007b;
	}

IL_0060:
	{
		// while (tcx.Basin.bottomNode.HasNext && tcx.Basin.bottomNode.Point.Y >= tcx.Basin.bottomNode.Next.Point.Y) tcx.Basin.bottomNode = tcx.Basin.bottomNode.Next;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_22 = ___tcx0;
		NullCheck(L_22);
		DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F * L_23 = L_22->get_Basin_11();
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_24 = ___tcx0;
		NullCheck(L_24);
		DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F * L_25 = L_24->get_Basin_11();
		NullCheck(L_25);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_26 = L_25->get_bottomNode_1();
		NullCheck(L_26);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_27 = L_26->get_Next_0();
		NullCheck(L_23);
		L_23->set_bottomNode_1(L_27);
	}

IL_007b:
	{
		// while (tcx.Basin.bottomNode.HasNext && tcx.Basin.bottomNode.Point.Y >= tcx.Basin.bottomNode.Next.Point.Y) tcx.Basin.bottomNode = tcx.Basin.bottomNode.Next;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_28 = ___tcx0;
		NullCheck(L_28);
		DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F * L_29 = L_28->get_Basin_11();
		NullCheck(L_29);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_30 = L_29->get_bottomNode_1();
		NullCheck(L_30);
		bool L_31;
		L_31 = AdvancingFrontNode_get_HasNext_m405B1A3BF18783AB2494DF7C47D1E4A34ACBF546(L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00be;
		}
	}
	{
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_32 = ___tcx0;
		NullCheck(L_32);
		DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F * L_33 = L_32->get_Basin_11();
		NullCheck(L_33);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_34 = L_33->get_bottomNode_1();
		NullCheck(L_34);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_35 = L_34->get_Point_3();
		NullCheck(L_35);
		double L_36 = L_35->get_Y_2();
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_37 = ___tcx0;
		NullCheck(L_37);
		DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F * L_38 = L_37->get_Basin_11();
		NullCheck(L_38);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_39 = L_38->get_bottomNode_1();
		NullCheck(L_39);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_40 = L_39->get_Next_0();
		NullCheck(L_40);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_41 = L_40->get_Point_3();
		NullCheck(L_41);
		double L_42 = L_41->get_Y_2();
		if ((((double)L_36) >= ((double)L_42)))
		{
			goto IL_0060;
		}
	}

IL_00be:
	{
		// if (tcx.Basin.bottomNode == tcx.Basin.leftNode) return; // No valid basin
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_43 = ___tcx0;
		NullCheck(L_43);
		DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F * L_44 = L_43->get_Basin_11();
		NullCheck(L_44);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_45 = L_44->get_bottomNode_1();
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_46 = ___tcx0;
		NullCheck(L_46);
		DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F * L_47 = L_46->get_Basin_11();
		NullCheck(L_47);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_48 = L_47->get_leftNode_0();
		if ((!(((RuntimeObject*)(AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 *)L_45) == ((RuntimeObject*)(AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 *)L_48))))
		{
			goto IL_00d7;
		}
	}
	{
		// if (tcx.Basin.bottomNode == tcx.Basin.leftNode) return; // No valid basin
		return;
	}

IL_00d7:
	{
		// tcx.Basin.rightNode = tcx.Basin.bottomNode;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_49 = ___tcx0;
		NullCheck(L_49);
		DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F * L_50 = L_49->get_Basin_11();
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_51 = ___tcx0;
		NullCheck(L_51);
		DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F * L_52 = L_51->get_Basin_11();
		NullCheck(L_52);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_53 = L_52->get_bottomNode_1();
		NullCheck(L_50);
		L_50->set_rightNode_2(L_53);
		goto IL_010a;
	}

IL_00ef:
	{
		// while (tcx.Basin.rightNode.HasNext && tcx.Basin.rightNode.Point.Y < tcx.Basin.rightNode.Next.Point.Y) tcx.Basin.rightNode = tcx.Basin.rightNode.Next;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_54 = ___tcx0;
		NullCheck(L_54);
		DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F * L_55 = L_54->get_Basin_11();
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_56 = ___tcx0;
		NullCheck(L_56);
		DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F * L_57 = L_56->get_Basin_11();
		NullCheck(L_57);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_58 = L_57->get_rightNode_2();
		NullCheck(L_58);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_59 = L_58->get_Next_0();
		NullCheck(L_55);
		L_55->set_rightNode_2(L_59);
	}

IL_010a:
	{
		// while (tcx.Basin.rightNode.HasNext && tcx.Basin.rightNode.Point.Y < tcx.Basin.rightNode.Next.Point.Y) tcx.Basin.rightNode = tcx.Basin.rightNode.Next;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_60 = ___tcx0;
		NullCheck(L_60);
		DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F * L_61 = L_60->get_Basin_11();
		NullCheck(L_61);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_62 = L_61->get_rightNode_2();
		NullCheck(L_62);
		bool L_63;
		L_63 = AdvancingFrontNode_get_HasNext_m405B1A3BF18783AB2494DF7C47D1E4A34ACBF546(L_62, /*hidden argument*/NULL);
		if (!L_63)
		{
			goto IL_014d;
		}
	}
	{
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_64 = ___tcx0;
		NullCheck(L_64);
		DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F * L_65 = L_64->get_Basin_11();
		NullCheck(L_65);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_66 = L_65->get_rightNode_2();
		NullCheck(L_66);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_67 = L_66->get_Point_3();
		NullCheck(L_67);
		double L_68 = L_67->get_Y_2();
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_69 = ___tcx0;
		NullCheck(L_69);
		DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F * L_70 = L_69->get_Basin_11();
		NullCheck(L_70);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_71 = L_70->get_rightNode_2();
		NullCheck(L_71);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_72 = L_71->get_Next_0();
		NullCheck(L_72);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_73 = L_72->get_Point_3();
		NullCheck(L_73);
		double L_74 = L_73->get_Y_2();
		if ((((double)L_68) < ((double)L_74)))
		{
			goto IL_00ef;
		}
	}

IL_014d:
	{
		// if (tcx.Basin.rightNode == tcx.Basin.bottomNode) return; // No valid basins
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_75 = ___tcx0;
		NullCheck(L_75);
		DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F * L_76 = L_75->get_Basin_11();
		NullCheck(L_76);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_77 = L_76->get_rightNode_2();
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_78 = ___tcx0;
		NullCheck(L_78);
		DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F * L_79 = L_78->get_Basin_11();
		NullCheck(L_79);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_80 = L_79->get_bottomNode_1();
		if ((!(((RuntimeObject*)(AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 *)L_77) == ((RuntimeObject*)(AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 *)L_80))))
		{
			goto IL_0166;
		}
	}
	{
		// if (tcx.Basin.rightNode == tcx.Basin.bottomNode) return; // No valid basins
		return;
	}

IL_0166:
	{
		// tcx.Basin.width = tcx.Basin.rightNode.Point.X - tcx.Basin.leftNode.Point.X;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_81 = ___tcx0;
		NullCheck(L_81);
		DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F * L_82 = L_81->get_Basin_11();
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_83 = ___tcx0;
		NullCheck(L_83);
		DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F * L_84 = L_83->get_Basin_11();
		NullCheck(L_84);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_85 = L_84->get_rightNode_2();
		NullCheck(L_85);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_86 = L_85->get_Point_3();
		NullCheck(L_86);
		double L_87 = L_86->get_X_1();
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_88 = ___tcx0;
		NullCheck(L_88);
		DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F * L_89 = L_88->get_Basin_11();
		NullCheck(L_89);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_90 = L_89->get_leftNode_0();
		NullCheck(L_90);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_91 = L_90->get_Point_3();
		NullCheck(L_91);
		double L_92 = L_91->get_X_1();
		NullCheck(L_82);
		L_82->set_width_3(((double)il2cpp_codegen_subtract((double)L_87, (double)L_92)));
		// tcx.Basin.leftHighest = tcx.Basin.leftNode.Point.Y > tcx.Basin.rightNode.Point.Y;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_93 = ___tcx0;
		NullCheck(L_93);
		DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F * L_94 = L_93->get_Basin_11();
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_95 = ___tcx0;
		NullCheck(L_95);
		DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F * L_96 = L_95->get_Basin_11();
		NullCheck(L_96);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_97 = L_96->get_leftNode_0();
		NullCheck(L_97);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_98 = L_97->get_Point_3();
		NullCheck(L_98);
		double L_99 = L_98->get_Y_2();
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_100 = ___tcx0;
		NullCheck(L_100);
		DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F * L_101 = L_100->get_Basin_11();
		NullCheck(L_101);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_102 = L_101->get_rightNode_2();
		NullCheck(L_102);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_103 = L_102->get_Point_3();
		NullCheck(L_103);
		double L_104 = L_103->get_Y_2();
		NullCheck(L_94);
		L_94->set_leftHighest_4((bool)((((double)L_99) > ((double)L_104))? 1 : 0));
		// FillBasinReq(tcx, tcx.Basin.bottomNode);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_105 = ___tcx0;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_106 = ___tcx0;
		NullCheck(L_106);
		DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F * L_107 = L_106->get_Basin_11();
		NullCheck(L_107);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_108 = L_107->get_bottomNode_1();
		DTSweep_FillBasinReq_m81151DDC92103ACDAD0D03486B0EFB1AD67A0D27(L_105, L_108, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::FillBasinReq(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_FillBasinReq_m81151DDC92103ACDAD0D03486B0EFB1AD67A0D27 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___node1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsShallow(tcx, node)) return; // if shallow stop filling
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_0 = ___tcx0;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_1 = ___node1;
		bool L_2;
		L_2 = DTSweep_IsShallow_mB2BB317ED6DB44FF1F751861FC72E765A4D7AD01(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_000a;
		}
	}
	{
		// if (IsShallow(tcx, node)) return; // if shallow stop filling
		return;
	}

IL_000a:
	{
		// Fill(tcx, node);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_3 = ___tcx0;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_4 = ___node1;
		DTSweep_Fill_mE575B5EEFBF91F9BF0D8A94D08D7E6C72653A191(L_3, L_4, /*hidden argument*/NULL);
		// if (node.Prev == tcx.Basin.leftNode && node.Next == tcx.Basin.rightNode) {
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_5 = ___node1;
		NullCheck(L_5);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_6 = L_5->get_Prev_1();
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_7 = ___tcx0;
		NullCheck(L_7);
		DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F * L_8 = L_7->get_Basin_11();
		NullCheck(L_8);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_9 = L_8->get_leftNode_0();
		if ((!(((RuntimeObject*)(AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 *)L_6) == ((RuntimeObject*)(AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 *)L_9))))
		{
			goto IL_0038;
		}
	}
	{
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_10 = ___node1;
		NullCheck(L_10);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_11 = L_10->get_Next_0();
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_12 = ___tcx0;
		NullCheck(L_12);
		DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F * L_13 = L_12->get_Basin_11();
		NullCheck(L_13);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_14 = L_13->get_rightNode_2();
		if ((!(((RuntimeObject*)(AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 *)L_11) == ((RuntimeObject*)(AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 *)L_14))))
		{
			goto IL_0038;
		}
	}
	{
		// return;
		return;
	}

IL_0038:
	{
		// } else if (node.Prev == tcx.Basin.leftNode) {
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_15 = ___node1;
		NullCheck(L_15);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_16 = L_15->get_Prev_1();
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_17 = ___tcx0;
		NullCheck(L_17);
		DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F * L_18 = L_17->get_Basin_11();
		NullCheck(L_18);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_19 = L_18->get_leftNode_0();
		if ((!(((RuntimeObject*)(AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 *)L_16) == ((RuntimeObject*)(AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 *)L_19))))
		{
			goto IL_007e;
		}
	}
	{
		// Orientation o = TriangulationUtil.Orient2d(node.Point, node.Next.Point, node.Next.Next.Point);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_20 = ___node1;
		NullCheck(L_20);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_21 = L_20->get_Point_3();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_22 = ___node1;
		NullCheck(L_22);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_23 = L_22->get_Next_0();
		NullCheck(L_23);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_24 = L_23->get_Point_3();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_25 = ___node1;
		NullCheck(L_25);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_26 = L_25->get_Next_0();
		NullCheck(L_26);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_27 = L_26->get_Next_0();
		NullCheck(L_27);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_28 = L_27->get_Point_3();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		int32_t L_29;
		L_29 = TriangulationUtil_Orient2d_m2CDE17B5E70FD361C8BA5DF3764136DC172C5996(L_21, L_24, L_28, /*hidden argument*/NULL);
		// if (o == Orientation.CW) return;
		if (L_29)
		{
			goto IL_0074;
		}
	}
	{
		// if (o == Orientation.CW) return;
		return;
	}

IL_0074:
	{
		// node = node.Next;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_30 = ___node1;
		NullCheck(L_30);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_31 = L_30->get_Next_0();
		___node1 = L_31;
		// } else if (node.Next == tcx.Basin.rightNode) {
		goto IL_00f9;
	}

IL_007e:
	{
		// } else if (node.Next == tcx.Basin.rightNode) {
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_32 = ___node1;
		NullCheck(L_32);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_33 = L_32->get_Next_0();
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_34 = ___tcx0;
		NullCheck(L_34);
		DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F * L_35 = L_34->get_Basin_11();
		NullCheck(L_35);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_36 = L_35->get_rightNode_2();
		if ((!(((RuntimeObject*)(AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 *)L_33) == ((RuntimeObject*)(AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 *)L_36))))
		{
			goto IL_00c5;
		}
	}
	{
		// Orientation o = TriangulationUtil.Orient2d(node.Point, node.Prev.Point, node.Prev.Prev.Point);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_37 = ___node1;
		NullCheck(L_37);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_38 = L_37->get_Point_3();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_39 = ___node1;
		NullCheck(L_39);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_40 = L_39->get_Prev_1();
		NullCheck(L_40);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_41 = L_40->get_Point_3();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_42 = ___node1;
		NullCheck(L_42);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_43 = L_42->get_Prev_1();
		NullCheck(L_43);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_44 = L_43->get_Prev_1();
		NullCheck(L_44);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_45 = L_44->get_Point_3();
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		int32_t L_46;
		L_46 = TriangulationUtil_Orient2d_m2CDE17B5E70FD361C8BA5DF3764136DC172C5996(L_38, L_41, L_45, /*hidden argument*/NULL);
		// if (o == Orientation.CCW) return;
		if ((!(((uint32_t)L_46) == ((uint32_t)1))))
		{
			goto IL_00bb;
		}
	}
	{
		// if (o == Orientation.CCW) return;
		return;
	}

IL_00bb:
	{
		// node = node.Prev;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_47 = ___node1;
		NullCheck(L_47);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_48 = L_47->get_Prev_1();
		___node1 = L_48;
		// } else {
		goto IL_00f9;
	}

IL_00c5:
	{
		// if (node.Prev.Point.Y < node.Next.Point.Y) {
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_49 = ___node1;
		NullCheck(L_49);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_50 = L_49->get_Prev_1();
		NullCheck(L_50);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_51 = L_50->get_Point_3();
		NullCheck(L_51);
		double L_52 = L_51->get_Y_2();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_53 = ___node1;
		NullCheck(L_53);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_54 = L_53->get_Next_0();
		NullCheck(L_54);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_55 = L_54->get_Point_3();
		NullCheck(L_55);
		double L_56 = L_55->get_Y_2();
		if ((!(((double)L_52) < ((double)L_56))))
		{
			goto IL_00f1;
		}
	}
	{
		// node = node.Prev;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_57 = ___node1;
		NullCheck(L_57);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_58 = L_57->get_Prev_1();
		___node1 = L_58;
		// } else {
		goto IL_00f9;
	}

IL_00f1:
	{
		// node = node.Next;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_59 = ___node1;
		NullCheck(L_59);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_60 = L_59->get_Next_0();
		___node1 = L_60;
	}

IL_00f9:
	{
		// FillBasinReq(tcx, node);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_61 = ___tcx0;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_62 = ___node1;
		DTSweep_FillBasinReq_m81151DDC92103ACDAD0D03486B0EFB1AD67A0D27(L_61, L_62, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DTSweep::IsShallow(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DTSweep_IsShallow_mB2BB317ED6DB44FF1F751861FC72E765A4D7AD01 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___node1, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		// if (tcx.Basin.leftHighest) {
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_0 = ___tcx0;
		NullCheck(L_0);
		DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F * L_1 = L_0->get_Basin_11();
		NullCheck(L_1);
		bool L_2 = L_1->get_leftHighest_4();
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		// height = tcx.Basin.leftNode.Point.Y - node.Point.Y;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_3 = ___tcx0;
		NullCheck(L_3);
		DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F * L_4 = L_3->get_Basin_11();
		NullCheck(L_4);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_5 = L_4->get_leftNode_0();
		NullCheck(L_5);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_6 = L_5->get_Point_3();
		NullCheck(L_6);
		double L_7 = L_6->get_Y_2();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_8 = ___node1;
		NullCheck(L_8);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_9 = L_8->get_Point_3();
		NullCheck(L_9);
		double L_10 = L_9->get_Y_2();
		V_0 = ((double)il2cpp_codegen_subtract((double)L_7, (double)L_10));
		// } else {
		goto IL_0053;
	}

IL_0031:
	{
		// height = tcx.Basin.rightNode.Point.Y - node.Point.Y;
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_11 = ___tcx0;
		NullCheck(L_11);
		DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F * L_12 = L_11->get_Basin_11();
		NullCheck(L_12);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_13 = L_12->get_rightNode_2();
		NullCheck(L_13);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_14 = L_13->get_Point_3();
		NullCheck(L_14);
		double L_15 = L_14->get_Y_2();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_16 = ___node1;
		NullCheck(L_16);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_17 = L_16->get_Point_3();
		NullCheck(L_17);
		double L_18 = L_17->get_Y_2();
		V_0 = ((double)il2cpp_codegen_subtract((double)L_15, (double)L_18));
	}

IL_0053:
	{
		// if (tcx.Basin.width > height) {
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_19 = ___tcx0;
		NullCheck(L_19);
		DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F * L_20 = L_19->get_Basin_11();
		NullCheck(L_20);
		double L_21 = L_20->get_width_3();
		double L_22 = V_0;
		if ((!(((double)L_21) > ((double)L_22))))
		{
			goto IL_0063;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0063:
	{
		// return false;
		return (bool)0;
	}
}
// System.Double UnityEngine.ProBuilder.Poly2Tri.DTSweep::HoleAngle(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double DTSweep_HoleAngle_m0AFE3CDC5748C27E7729EDA981BA97E695E83F95 (AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	{
		// double px = node.Point.X;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_0 = ___node0;
		NullCheck(L_0);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_1 = L_0->get_Point_3();
		NullCheck(L_1);
		double L_2 = L_1->get_X_1();
		V_0 = L_2;
		// double py = node.Point.Y;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_3 = ___node0;
		NullCheck(L_3);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_4 = L_3->get_Point_3();
		NullCheck(L_4);
		double L_5 = L_4->get_Y_2();
		V_1 = L_5;
		// double ax = node.Next.Point.X - px;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_6 = ___node0;
		NullCheck(L_6);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_7 = L_6->get_Next_0();
		NullCheck(L_7);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_8 = L_7->get_Point_3();
		NullCheck(L_8);
		double L_9 = L_8->get_X_1();
		double L_10 = V_0;
		V_2 = ((double)il2cpp_codegen_subtract((double)L_9, (double)L_10));
		// double ay = node.Next.Point.Y - py;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_11 = ___node0;
		NullCheck(L_11);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_12 = L_11->get_Next_0();
		NullCheck(L_12);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_13 = L_12->get_Point_3();
		NullCheck(L_13);
		double L_14 = L_13->get_Y_2();
		double L_15 = V_1;
		V_3 = ((double)il2cpp_codegen_subtract((double)L_14, (double)L_15));
		// double bx = node.Prev.Point.X - px;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_16 = ___node0;
		NullCheck(L_16);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_17 = L_16->get_Prev_1();
		NullCheck(L_17);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_18 = L_17->get_Point_3();
		NullCheck(L_18);
		double L_19 = L_18->get_X_1();
		double L_20 = V_0;
		V_4 = ((double)il2cpp_codegen_subtract((double)L_19, (double)L_20));
		// double by = node.Prev.Point.Y - py;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_21 = ___node0;
		NullCheck(L_21);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_22 = L_21->get_Prev_1();
		NullCheck(L_22);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_23 = L_22->get_Point_3();
		NullCheck(L_23);
		double L_24 = L_23->get_Y_2();
		double L_25 = V_1;
		V_5 = ((double)il2cpp_codegen_subtract((double)L_24, (double)L_25));
		// return Math.Atan2(ax * by - ay * bx, ax * bx + ay * by);
		double L_26 = V_2;
		double L_27 = V_5;
		double L_28 = V_3;
		double L_29 = V_4;
		double L_30 = V_2;
		double L_31 = V_4;
		double L_32 = V_3;
		double L_33 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_34;
		L_34 = atan2(((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_26, (double)L_27)), (double)((double)il2cpp_codegen_multiply((double)L_28, (double)L_29)))), ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_30, (double)L_31)), (double)((double)il2cpp_codegen_multiply((double)L_32, (double)L_33)))));
		return L_34;
	}
}
// System.Double UnityEngine.ProBuilder.Poly2Tri.DTSweep::BasinAngle(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double DTSweep_BasinAngle_mA5F862BFBC2E0F3B1A57D195F883ED9C6A07CCD8 (AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		// double ax = node.Point.X - node.Next.Next.Point.X;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_0 = ___node0;
		NullCheck(L_0);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_1 = L_0->get_Point_3();
		NullCheck(L_1);
		double L_2 = L_1->get_X_1();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_3 = ___node0;
		NullCheck(L_3);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_4 = L_3->get_Next_0();
		NullCheck(L_4);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_5 = L_4->get_Next_0();
		NullCheck(L_5);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_6 = L_5->get_Point_3();
		NullCheck(L_6);
		double L_7 = L_6->get_X_1();
		V_0 = ((double)il2cpp_codegen_subtract((double)L_2, (double)L_7));
		// double ay = node.Point.Y - node.Next.Next.Point.Y;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_8 = ___node0;
		NullCheck(L_8);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_9 = L_8->get_Point_3();
		NullCheck(L_9);
		double L_10 = L_9->get_Y_2();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_11 = ___node0;
		NullCheck(L_11);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_12 = L_11->get_Next_0();
		NullCheck(L_12);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_13 = L_12->get_Next_0();
		NullCheck(L_13);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_14 = L_13->get_Point_3();
		NullCheck(L_14);
		double L_15 = L_14->get_Y_2();
		// return Math.Atan2(ay, ax);
		double L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_17;
		L_17 = atan2(((double)il2cpp_codegen_subtract((double)L_10, (double)L_15)), L_16);
		return L_17;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::Fill(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_Fill_mE575B5EEFBF91F9BF0D8A94D08D7E6C72653A191 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___node1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m62D2D60A23EE7E5FFE5B6AA0BAF8A7D6BA1E52D7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * V_0 = NULL;
	{
		// DelaunayTriangle triangle = new DelaunayTriangle(node.Prev.Point, node.Point, node.Next.Point);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_0 = ___node1;
		NullCheck(L_0);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_1 = L_0->get_Prev_1();
		NullCheck(L_1);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_2 = L_1->get_Point_3();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_3 = ___node1;
		NullCheck(L_3);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_4 = L_3->get_Point_3();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_5 = ___node1;
		NullCheck(L_5);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_6 = L_5->get_Next_0();
		NullCheck(L_6);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_7 = L_6->get_Point_3();
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_8 = (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A *)il2cpp_codegen_object_new(DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A_il2cpp_TypeInfo_var);
		DelaunayTriangle__ctor_mFF50163C04BA34186ADB11D7B63F8904F2E09F7C(L_8, L_2, L_4, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		// triangle.MarkNeighbor(node.Prev.Triangle);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_9 = V_0;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_10 = ___node1;
		NullCheck(L_10);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_11 = L_10->get_Prev_1();
		NullCheck(L_11);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_12 = L_11->get_Triangle_4();
		NullCheck(L_9);
		DelaunayTriangle_MarkNeighbor_m285227BC79816BB67CE729657065E27173CAFFCB(L_9, L_12, /*hidden argument*/NULL);
		// triangle.MarkNeighbor(node.Triangle);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_13 = V_0;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_14 = ___node1;
		NullCheck(L_14);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_15 = L_14->get_Triangle_4();
		NullCheck(L_13);
		DelaunayTriangle_MarkNeighbor_m285227BC79816BB67CE729657065E27173CAFFCB(L_13, L_15, /*hidden argument*/NULL);
		// tcx.Triangles.Add(triangle);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_16 = ___tcx0;
		NullCheck(L_16);
		List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977 * L_17 = ((TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B *)L_16)->get_Triangles_1();
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_18 = V_0;
		NullCheck(L_17);
		List_1_Add_m62D2D60A23EE7E5FFE5B6AA0BAF8A7D6BA1E52D7(L_17, L_18, /*hidden argument*/List_1_Add_m62D2D60A23EE7E5FFE5B6AA0BAF8A7D6BA1E52D7_RuntimeMethod_var);
		// node.Prev.Next = node.Next;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_19 = ___node1;
		NullCheck(L_19);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_20 = L_19->get_Prev_1();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_21 = ___node1;
		NullCheck(L_21);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_22 = L_21->get_Next_0();
		NullCheck(L_20);
		L_20->set_Next_0(L_22);
		// node.Next.Prev = node.Prev;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_23 = ___node1;
		NullCheck(L_23);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_24 = L_23->get_Next_0();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_25 = ___node1;
		NullCheck(L_25);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_26 = L_25->get_Prev_1();
		NullCheck(L_24);
		L_24->set_Prev_1(L_26);
		// tcx.RemoveNode(node);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_27 = ___tcx0;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_28 = ___node1;
		NullCheck(L_27);
		DTSweepContext_RemoveNode_mB40B2110E119D78E65A20BC1CF2B4BF71CDBBD2C(L_27, L_28, /*hidden argument*/NULL);
		// if (!Legalize(tcx, triangle)) tcx.MapTriangleToNodes(triangle);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_29 = ___tcx0;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_30 = V_0;
		bool L_31;
		L_31 = DTSweep_Legalize_m9CA920D196E94FA30CB8AF44E61C834983219960(L_29, L_30, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_0084;
		}
	}
	{
		// if (!Legalize(tcx, triangle)) tcx.MapTriangleToNodes(triangle);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_32 = ___tcx0;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_33 = V_0;
		NullCheck(L_32);
		DTSweepContext_MapTriangleToNodes_m88F0ECE533C928433E975FC7409E8A63A39B89FB(L_32, L_33, /*hidden argument*/NULL);
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DTSweep::Legalize(UnityEngine.ProBuilder.Poly2Tri.DTSweepContext,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DTSweep_Legalize_m9CA920D196E94FA30CB8AF44E61C834983219960 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * ___tcx0, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___t1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_m5EC6D4DA8D086DDC58E068ABA1B8F30C98E4D1CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * V_1 = NULL;
	TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * V_2 = NULL;
	TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * V_3 = NULL;
	int32_t V_4 = 0;
	{
		// for (int i = 0; i < 3; i++) {
		V_0 = 0;
		goto IL_00ff;
	}

IL_0007:
	{
		// if (t.EdgeIsDelaunay[i]) continue;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_0 = ___t1;
		NullCheck(L_0);
		FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * L_1 = L_0->get_address_of_EdgeIsDelaunay_3();
		int32_t L_2 = V_0;
		bool L_3;
		L_3 = FixedBitArray3_get_Item_m8D1568A202E819BFCF3AEADA4CBF1661024202F9((FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 *)L_1, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_00fb;
		}
	}
	{
		// DelaunayTriangle ot = t.Neighbors[i];
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_4 = ___t1;
		NullCheck(L_4);
		FixedArray3_1_tDB222AD5E30A16C9D8C257978FFD6780A962B922 * L_5 = L_4->get_address_of_Neighbors_1();
		int32_t L_6 = V_0;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_7;
		L_7 = FixedArray3_1_get_Item_m5EC6D4DA8D086DDC58E068ABA1B8F30C98E4D1CA((FixedArray3_1_tDB222AD5E30A16C9D8C257978FFD6780A962B922 *)L_5, L_6, /*hidden argument*/FixedArray3_1_get_Item_m5EC6D4DA8D086DDC58E068ABA1B8F30C98E4D1CA_RuntimeMethod_var);
		V_1 = L_7;
		// if (ot == null) continue;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_8 = V_1;
		if (!L_8)
		{
			goto IL_00fb;
		}
	}
	{
		// TriangulationPoint p = t.Points[i];
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_9 = ___t1;
		NullCheck(L_9);
		FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 * L_10 = L_9->get_address_of_Points_0();
		int32_t L_11 = V_0;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_12;
		L_12 = FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194((FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 *)L_10, L_11, /*hidden argument*/FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194_RuntimeMethod_var);
		V_2 = L_12;
		// TriangulationPoint op = ot.OppositePoint(t, p);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_13 = V_1;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_14 = ___t1;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_15 = V_2;
		NullCheck(L_13);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_16;
		L_16 = DelaunayTriangle_OppositePoint_mCCD125CD7C6BE7113AAC180FF37066F9802967CE(L_13, L_14, L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		// int oi = ot.IndexOf(op);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_17 = V_1;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19;
		L_19 = DelaunayTriangle_IndexOf_m6BCB717AAD454FA4C1BBBDC0ECDCAF661AE03C28(L_17, L_18, /*hidden argument*/NULL);
		V_4 = L_19;
		// if (ot.EdgeIsConstrained[oi] || ot.EdgeIsDelaunay[oi]) {
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_20 = V_1;
		NullCheck(L_20);
		FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * L_21 = L_20->get_address_of_EdgeIsConstrained_2();
		int32_t L_22 = V_4;
		bool L_23;
		L_23 = FixedBitArray3_get_Item_m8D1568A202E819BFCF3AEADA4CBF1661024202F9((FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 *)L_21, L_22, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_0068;
		}
	}
	{
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_24 = V_1;
		NullCheck(L_24);
		FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * L_25 = L_24->get_address_of_EdgeIsDelaunay_3();
		int32_t L_26 = V_4;
		bool L_27;
		L_27 = FixedBitArray3_get_Item_m8D1568A202E819BFCF3AEADA4CBF1661024202F9((FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 *)L_25, L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_0083;
		}
	}

IL_0068:
	{
		// t.EdgeIsConstrained[i] = ot.EdgeIsConstrained[oi]; // XXX: have no good way of setting this property when creating new triangles so lets set it here
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_28 = ___t1;
		NullCheck(L_28);
		FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * L_29 = L_28->get_address_of_EdgeIsConstrained_2();
		int32_t L_30 = V_0;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_31 = V_1;
		NullCheck(L_31);
		FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * L_32 = L_31->get_address_of_EdgeIsConstrained_2();
		int32_t L_33 = V_4;
		bool L_34;
		L_34 = FixedBitArray3_get_Item_m8D1568A202E819BFCF3AEADA4CBF1661024202F9((FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 *)L_32, L_33, /*hidden argument*/NULL);
		FixedBitArray3_set_Item_mE1DF6CC301313E76DBB57477F11DC4DE41BED620((FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 *)L_29, L_30, L_34, /*hidden argument*/NULL);
		// continue;
		goto IL_00fb;
	}

IL_0083:
	{
		// if (!TriangulationUtil.SmartIncircle(p,t.PointCCWFrom(p),t.PointCWFrom(p),op)) continue;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_35 = V_2;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_36 = ___t1;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_37 = V_2;
		NullCheck(L_36);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_38;
		L_38 = DelaunayTriangle_PointCCWFrom_m701498FBCC2D5A858262F0D9A21BF2DAAB6EDF60(L_36, L_37, /*hidden argument*/NULL);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_39 = ___t1;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_40 = V_2;
		NullCheck(L_39);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_41;
		L_41 = DelaunayTriangle_PointCWFrom_m7F83BA541E2E5F811A73467832BB7A7FE557FBB4(L_39, L_40, /*hidden argument*/NULL);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_42 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = TriangulationUtil_SmartIncircle_m3CE2F3FC7F1F8E48BF83AA5B6E6418FE84C6350B(L_35, L_38, L_41, L_42, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_00fb;
		}
	}
	{
		// t.EdgeIsDelaunay[i] = true;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_44 = ___t1;
		NullCheck(L_44);
		FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * L_45 = L_44->get_address_of_EdgeIsDelaunay_3();
		int32_t L_46 = V_0;
		FixedBitArray3_set_Item_mE1DF6CC301313E76DBB57477F11DC4DE41BED620((FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 *)L_45, L_46, (bool)1, /*hidden argument*/NULL);
		// ot.EdgeIsDelaunay[oi] = true;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_47 = V_1;
		NullCheck(L_47);
		FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * L_48 = L_47->get_address_of_EdgeIsDelaunay_3();
		int32_t L_49 = V_4;
		FixedBitArray3_set_Item_mE1DF6CC301313E76DBB57477F11DC4DE41BED620((FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 *)L_48, L_49, (bool)1, /*hidden argument*/NULL);
		// RotateTrianglePair(t, p, ot, op);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_50 = ___t1;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_51 = V_2;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_52 = V_1;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_53 = V_3;
		DTSweep_RotateTrianglePair_m3450E956082B91F301372C30E9C2545454C495F4(L_50, L_51, L_52, L_53, /*hidden argument*/NULL);
		// if (!Legalize(tcx, t)) tcx.MapTriangleToNodes(t);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_54 = ___tcx0;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_55 = ___t1;
		bool L_56;
		L_56 = DTSweep_Legalize_m9CA920D196E94FA30CB8AF44E61C834983219960(L_54, L_55, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_00ce;
		}
	}
	{
		// if (!Legalize(tcx, t)) tcx.MapTriangleToNodes(t);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_57 = ___tcx0;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_58 = ___t1;
		NullCheck(L_57);
		DTSweepContext_MapTriangleToNodes_m88F0ECE533C928433E975FC7409E8A63A39B89FB(L_57, L_58, /*hidden argument*/NULL);
	}

IL_00ce:
	{
		// if (!Legalize(tcx, ot)) tcx.MapTriangleToNodes(ot);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_59 = ___tcx0;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_60 = V_1;
		bool L_61;
		L_61 = DTSweep_Legalize_m9CA920D196E94FA30CB8AF44E61C834983219960(L_59, L_60, /*hidden argument*/NULL);
		if (L_61)
		{
			goto IL_00de;
		}
	}
	{
		// if (!Legalize(tcx, ot)) tcx.MapTriangleToNodes(ot);
		DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * L_62 = ___tcx0;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_63 = V_1;
		NullCheck(L_62);
		DTSweepContext_MapTriangleToNodes_m88F0ECE533C928433E975FC7409E8A63A39B89FB(L_62, L_63, /*hidden argument*/NULL);
	}

IL_00de:
	{
		// t.EdgeIsDelaunay[i] = false;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_64 = ___t1;
		NullCheck(L_64);
		FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * L_65 = L_64->get_address_of_EdgeIsDelaunay_3();
		int32_t L_66 = V_0;
		FixedBitArray3_set_Item_mE1DF6CC301313E76DBB57477F11DC4DE41BED620((FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 *)L_65, L_66, (bool)0, /*hidden argument*/NULL);
		// ot.EdgeIsDelaunay[oi] = false;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_67 = V_1;
		NullCheck(L_67);
		FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * L_68 = L_67->get_address_of_EdgeIsDelaunay_3();
		int32_t L_69 = V_4;
		FixedBitArray3_set_Item_mE1DF6CC301313E76DBB57477F11DC4DE41BED620((FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 *)L_68, L_69, (bool)0, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_00fb:
	{
		// for (int i = 0; i < 3; i++) {
		int32_t L_70 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
	}

IL_00ff:
	{
		// for (int i = 0; i < 3; i++) {
		int32_t L_71 = V_0;
		if ((((int32_t)L_71) < ((int32_t)3)))
		{
			goto IL_0007;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweep::RotateTrianglePair(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweep_RotateTrianglePair_m3450E956082B91F301372C30E9C2545454C495F4 (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___t0, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p1, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___ot2, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___op3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_Clear_m87AFCDF5E433608D9B74CEF72D42EB82056AC4BA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * V_0 = NULL;
	DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * V_1 = NULL;
	DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * V_2 = NULL;
	DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	{
		// n1 = t.NeighborCCWFrom(p);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_0 = ___t0;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_1 = ___p1;
		NullCheck(L_0);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_2;
		L_2 = DelaunayTriangle_NeighborCCWFrom_mFC8DC101483E5DA3FA8D4FFC3E724529DDFB79A4(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// n2 = t.NeighborCWFrom(p);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_3 = ___t0;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_4 = ___p1;
		NullCheck(L_3);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_5;
		L_5 = DelaunayTriangle_NeighborCWFrom_m02FE93F770765BFFB25A2366C267C2D3FC97C91D(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// n3 = ot.NeighborCCWFrom(op);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_6 = ___ot2;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_7 = ___op3;
		NullCheck(L_6);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_8;
		L_8 = DelaunayTriangle_NeighborCCWFrom_mFC8DC101483E5DA3FA8D4FFC3E724529DDFB79A4(L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		// n4 = ot.NeighborCWFrom(op);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_9 = ___ot2;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_10 = ___op3;
		NullCheck(L_9);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_11;
		L_11 = DelaunayTriangle_NeighborCWFrom_m02FE93F770765BFFB25A2366C267C2D3FC97C91D(L_9, L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		// ce1 = t.GetConstrainedEdgeCCW(p);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_12 = ___t0;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_13 = ___p1;
		NullCheck(L_12);
		bool L_14;
		L_14 = DelaunayTriangle_GetConstrainedEdgeCCW_m3DC304D59FAE4EF048270297C27E9A1E1A9670B1(L_12, L_13, /*hidden argument*/NULL);
		V_4 = L_14;
		// ce2 = t.GetConstrainedEdgeCW(p);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_15 = ___t0;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_16 = ___p1;
		NullCheck(L_15);
		bool L_17;
		L_17 = DelaunayTriangle_GetConstrainedEdgeCW_mE2064A27D685D45643A3BC58481B69ABB9FAC298(L_15, L_16, /*hidden argument*/NULL);
		V_5 = L_17;
		// ce3 = ot.GetConstrainedEdgeCCW(op);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_18 = ___ot2;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_19 = ___op3;
		NullCheck(L_18);
		bool L_20;
		L_20 = DelaunayTriangle_GetConstrainedEdgeCCW_m3DC304D59FAE4EF048270297C27E9A1E1A9670B1(L_18, L_19, /*hidden argument*/NULL);
		V_6 = L_20;
		// ce4 = ot.GetConstrainedEdgeCW(op);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_21 = ___ot2;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_22 = ___op3;
		NullCheck(L_21);
		bool L_23;
		L_23 = DelaunayTriangle_GetConstrainedEdgeCW_mE2064A27D685D45643A3BC58481B69ABB9FAC298(L_21, L_22, /*hidden argument*/NULL);
		V_7 = L_23;
		// de1 = t.GetDelaunayEdgeCCW(p);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_24 = ___t0;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_25 = ___p1;
		NullCheck(L_24);
		bool L_26;
		L_26 = DelaunayTriangle_GetDelaunayEdgeCCW_m227568FC0CCAFF32B1734AF2B51CEAFFADFE2473(L_24, L_25, /*hidden argument*/NULL);
		V_8 = L_26;
		// de2 = t.GetDelaunayEdgeCW(p);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_27 = ___t0;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_28 = ___p1;
		NullCheck(L_27);
		bool L_29;
		L_29 = DelaunayTriangle_GetDelaunayEdgeCW_m1ED1DD14D1427DE77DFF40D9B277B59D7FE12E5C(L_27, L_28, /*hidden argument*/NULL);
		V_9 = L_29;
		// de3 = ot.GetDelaunayEdgeCCW(op);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_30 = ___ot2;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_31 = ___op3;
		NullCheck(L_30);
		bool L_32;
		L_32 = DelaunayTriangle_GetDelaunayEdgeCCW_m227568FC0CCAFF32B1734AF2B51CEAFFADFE2473(L_30, L_31, /*hidden argument*/NULL);
		V_10 = L_32;
		// de4 = ot.GetDelaunayEdgeCW(op);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_33 = ___ot2;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_34 = ___op3;
		NullCheck(L_33);
		bool L_35;
		L_35 = DelaunayTriangle_GetDelaunayEdgeCW_m1ED1DD14D1427DE77DFF40D9B277B59D7FE12E5C(L_33, L_34, /*hidden argument*/NULL);
		V_11 = L_35;
		// t.Legalize(p, op);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_36 = ___t0;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_37 = ___p1;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_38 = ___op3;
		NullCheck(L_36);
		DelaunayTriangle_Legalize_mB5724EDB6D934EA120F603A00FD03FA58FF1C0A6(L_36, L_37, L_38, /*hidden argument*/NULL);
		// ot.Legalize(op, p);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_39 = ___ot2;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_40 = ___op3;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_41 = ___p1;
		NullCheck(L_39);
		DelaunayTriangle_Legalize_mB5724EDB6D934EA120F603A00FD03FA58FF1C0A6(L_39, L_40, L_41, /*hidden argument*/NULL);
		// ot.SetDelaunayEdgeCCW(p, de1);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_42 = ___ot2;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_43 = ___p1;
		bool L_44 = V_8;
		NullCheck(L_42);
		DelaunayTriangle_SetDelaunayEdgeCCW_mF3C7C3D377FCC42EB6C0579811239268AFCC3910(L_42, L_43, L_44, /*hidden argument*/NULL);
		// t.SetDelaunayEdgeCW(p, de2);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_45 = ___t0;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_46 = ___p1;
		bool L_47 = V_9;
		NullCheck(L_45);
		DelaunayTriangle_SetDelaunayEdgeCW_m69E2B9285730F7589EF0EF654C40B1293C9D9A1F(L_45, L_46, L_47, /*hidden argument*/NULL);
		// t.SetDelaunayEdgeCCW(op, de3);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_48 = ___t0;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_49 = ___op3;
		bool L_50 = V_10;
		NullCheck(L_48);
		DelaunayTriangle_SetDelaunayEdgeCCW_mF3C7C3D377FCC42EB6C0579811239268AFCC3910(L_48, L_49, L_50, /*hidden argument*/NULL);
		// ot.SetDelaunayEdgeCW(op, de4);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_51 = ___ot2;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_52 = ___op3;
		bool L_53 = V_11;
		NullCheck(L_51);
		DelaunayTriangle_SetDelaunayEdgeCW_m69E2B9285730F7589EF0EF654C40B1293C9D9A1F(L_51, L_52, L_53, /*hidden argument*/NULL);
		// ot.SetConstrainedEdgeCCW(p, ce1);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_54 = ___ot2;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_55 = ___p1;
		bool L_56 = V_4;
		NullCheck(L_54);
		DelaunayTriangle_SetConstrainedEdgeCCW_m2572187034377571822BC00D3D8DD7301685B998(L_54, L_55, L_56, /*hidden argument*/NULL);
		// t.SetConstrainedEdgeCW(p, ce2);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_57 = ___t0;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_58 = ___p1;
		bool L_59 = V_5;
		NullCheck(L_57);
		DelaunayTriangle_SetConstrainedEdgeCW_mCF6EE193DD79D94338CBA160ACF193AE936803A2(L_57, L_58, L_59, /*hidden argument*/NULL);
		// t.SetConstrainedEdgeCCW(op, ce3);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_60 = ___t0;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_61 = ___op3;
		bool L_62 = V_6;
		NullCheck(L_60);
		DelaunayTriangle_SetConstrainedEdgeCCW_m2572187034377571822BC00D3D8DD7301685B998(L_60, L_61, L_62, /*hidden argument*/NULL);
		// ot.SetConstrainedEdgeCW(op, ce4);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_63 = ___ot2;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_64 = ___op3;
		bool L_65 = V_7;
		NullCheck(L_63);
		DelaunayTriangle_SetConstrainedEdgeCW_mCF6EE193DD79D94338CBA160ACF193AE936803A2(L_63, L_64, L_65, /*hidden argument*/NULL);
		// t.Neighbors.Clear();
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_66 = ___t0;
		NullCheck(L_66);
		FixedArray3_1_tDB222AD5E30A16C9D8C257978FFD6780A962B922 * L_67 = L_66->get_address_of_Neighbors_1();
		FixedArray3_1_Clear_m87AFCDF5E433608D9B74CEF72D42EB82056AC4BA((FixedArray3_1_tDB222AD5E30A16C9D8C257978FFD6780A962B922 *)L_67, /*hidden argument*/FixedArray3_1_Clear_m87AFCDF5E433608D9B74CEF72D42EB82056AC4BA_RuntimeMethod_var);
		// ot.Neighbors.Clear();
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_68 = ___ot2;
		NullCheck(L_68);
		FixedArray3_1_tDB222AD5E30A16C9D8C257978FFD6780A962B922 * L_69 = L_68->get_address_of_Neighbors_1();
		FixedArray3_1_Clear_m87AFCDF5E433608D9B74CEF72D42EB82056AC4BA((FixedArray3_1_tDB222AD5E30A16C9D8C257978FFD6780A962B922 *)L_69, /*hidden argument*/FixedArray3_1_Clear_m87AFCDF5E433608D9B74CEF72D42EB82056AC4BA_RuntimeMethod_var);
		// if (n1 != null) ot.MarkNeighbor(n1);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_70 = V_0;
		if (!L_70)
		{
			goto IL_00e0;
		}
	}
	{
		// if (n1 != null) ot.MarkNeighbor(n1);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_71 = ___ot2;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_72 = V_0;
		NullCheck(L_71);
		DelaunayTriangle_MarkNeighbor_m285227BC79816BB67CE729657065E27173CAFFCB(L_71, L_72, /*hidden argument*/NULL);
	}

IL_00e0:
	{
		// if (n2 != null) t.MarkNeighbor(n2);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_73 = V_1;
		if (!L_73)
		{
			goto IL_00ea;
		}
	}
	{
		// if (n2 != null) t.MarkNeighbor(n2);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_74 = ___t0;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_75 = V_1;
		NullCheck(L_74);
		DelaunayTriangle_MarkNeighbor_m285227BC79816BB67CE729657065E27173CAFFCB(L_74, L_75, /*hidden argument*/NULL);
	}

IL_00ea:
	{
		// if (n3 != null) t.MarkNeighbor(n3);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_76 = V_2;
		if (!L_76)
		{
			goto IL_00f4;
		}
	}
	{
		// if (n3 != null) t.MarkNeighbor(n3);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_77 = ___t0;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_78 = V_2;
		NullCheck(L_77);
		DelaunayTriangle_MarkNeighbor_m285227BC79816BB67CE729657065E27173CAFFCB(L_77, L_78, /*hidden argument*/NULL);
	}

IL_00f4:
	{
		// if (n4 != null) ot.MarkNeighbor(n4);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_79 = V_3;
		if (!L_79)
		{
			goto IL_00fe;
		}
	}
	{
		// if (n4 != null) ot.MarkNeighbor(n4);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_80 = ___ot2;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_81 = V_3;
		NullCheck(L_80);
		DelaunayTriangle_MarkNeighbor_m285227BC79816BB67CE729657065E27173CAFFCB(L_80, L_81, /*hidden argument*/NULL);
	}

IL_00fe:
	{
		// t.MarkNeighbor(ot);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_82 = ___t0;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_83 = ___ot2;
		NullCheck(L_82);
		DelaunayTriangle_MarkNeighbor_m285227BC79816BB67CE729657065E27173CAFFCB(L_82, L_83, /*hidden argument*/NULL);
		// }
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
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepBasin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepBasin__ctor_mF1A6D90C18129FADCC4C6DC56AFF825EC3DEC2A3 (DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint::.ctor(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepConstraint__ctor_m233D63E48829740D15B743D30C85B04152B21F26 (DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p10, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p21, const RuntimeMethod* method)
{
	{
		// public DTSweepConstraint( TriangulationPoint p1, TriangulationPoint p2 ) {
		TriangulationConstraint__ctor_m5F6D0518ADA1B37E23BA3952B3376D0A95208FC4(__this, /*hidden argument*/NULL);
		// P = p1;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_0 = ___p10;
		((TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A *)__this)->set_P_0(L_0);
		// Q = p2;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_1 = ___p21;
		((TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A *)__this)->set_Q_1(L_1);
		// if (p1.Y > p2.Y) {
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_2 = ___p10;
		NullCheck(L_2);
		double L_3 = L_2->get_Y_2();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_4 = ___p21;
		NullCheck(L_4);
		double L_5 = L_4->get_Y_2();
		if ((!(((double)L_3) > ((double)L_5))))
		{
			goto IL_0032;
		}
	}
	{
		// Q = p1;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_6 = ___p10;
		((TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A *)__this)->set_Q_1(L_6);
		// P = p2;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_7 = ___p21;
		((TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A *)__this)->set_P_0(L_7);
		// } else if (p1.Y == p2.Y) {
		goto IL_006c;
	}

IL_0032:
	{
		// } else if (p1.Y == p2.Y) {
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_8 = ___p10;
		NullCheck(L_8);
		double L_9 = L_8->get_Y_2();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_10 = ___p21;
		NullCheck(L_10);
		double L_11 = L_10->get_Y_2();
		if ((!(((double)L_9) == ((double)L_11))))
		{
			goto IL_006c;
		}
	}
	{
		// if (p1.X > p2.X) {
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_12 = ___p10;
		NullCheck(L_12);
		double L_13 = L_12->get_X_1();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_14 = ___p21;
		NullCheck(L_14);
		double L_15 = L_14->get_X_1();
		if ((!(((double)L_13) > ((double)L_15))))
		{
			goto IL_005e;
		}
	}
	{
		// Q = p1;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_16 = ___p10;
		((TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A *)__this)->set_Q_1(L_16);
		// P = p2;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_17 = ___p21;
		((TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A *)__this)->set_P_0(L_17);
		// } else if (p1.X == p2.X) {
		goto IL_006c;
	}

IL_005e:
	{
		// } else if (p1.X == p2.X) {
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_18 = ___p10;
		NullCheck(L_18);
		double L_19 = L_18->get_X_1();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_20 = ___p21;
		NullCheck(L_20);
		double L_21 = L_20->get_X_1();
	}

IL_006c:
	{
		// Q.AddEdge(this);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_22 = ((TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A *)__this)->get_Q_1();
		NullCheck(L_22);
		TriangulationPoint_AddEdge_m6E74DA90A1DDEBDA48DD4E30450B7872D9FFA668(L_22, __this, /*hidden argument*/NULL);
		// }
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
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::get_Head()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * DTSweepContext_get_Head_mA11E321587EF7EA818C12222EE3E25F1B05A49BB (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * __this, const RuntimeMethod* method)
{
	{
		// public TriangulationPoint Head { get; set; }
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_0 = __this->get_U3CHeadU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::set_Head(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_set_Head_mFAF735C4137345C84587C4BF2C32E4E584847C9E (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___value0, const RuntimeMethod* method)
{
	{
		// public TriangulationPoint Head { get; set; }
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_0 = ___value0;
		__this->set_U3CHeadU3Ek__BackingField_9(L_0);
		return;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::get_Tail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * DTSweepContext_get_Tail_mA33F0BE5B349C0D50FADA8195F60C45B8C4CD588 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * __this, const RuntimeMethod* method)
{
	{
		// public TriangulationPoint Tail { get; set; }
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_0 = __this->get_U3CTailU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::set_Tail(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_set_Tail_m6FFFE304B826B407005CC262435E36A21F8BC77B (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___value0, const RuntimeMethod* method)
{
	{
		// public TriangulationPoint Tail { get; set; }
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_0 = ___value0;
		__this->set_U3CTailU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext__ctor_m8B88792395AC7FAAF0E6A36E968B7BFC1C931BFF (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DTSweepEdgeEvent_t93472178B8E22740677AF3E5D255F96392BB8453_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DTSweepPointComparator_tA06245D62FBBEE946B1A620CC845F88B08BFF9A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly float ALPHA = 0.3f;
		__this->set_ALPHA_7((0.300000012f));
		// public DTSweepBasin     Basin     = new DTSweepBasin();
		DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F * L_0 = (DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F *)il2cpp_codegen_object_new(DTSweepBasin_t5C04AB4F98CF464F4602CA7D7A84A8FF77EDEF9F_il2cpp_TypeInfo_var);
		DTSweepBasin__ctor_mF1A6D90C18129FADCC4C6DC56AFF825EC3DEC2A3(L_0, /*hidden argument*/NULL);
		__this->set_Basin_11(L_0);
		// public DTSweepEdgeEvent EdgeEvent = new DTSweepEdgeEvent();
		DTSweepEdgeEvent_t93472178B8E22740677AF3E5D255F96392BB8453 * L_1 = (DTSweepEdgeEvent_t93472178B8E22740677AF3E5D255F96392BB8453 *)il2cpp_codegen_object_new(DTSweepEdgeEvent_t93472178B8E22740677AF3E5D255F96392BB8453_il2cpp_TypeInfo_var);
		DTSweepEdgeEvent__ctor_m12AEE65B03999D9E769BE13913761062CEC3FF40(L_1, /*hidden argument*/NULL);
		__this->set_EdgeEvent_12(L_1);
		// private DTSweepPointComparator _comparator = new DTSweepPointComparator();
		DTSweepPointComparator_tA06245D62FBBEE946B1A620CC845F88B08BFF9A0 * L_2 = (DTSweepPointComparator_tA06245D62FBBEE946B1A620CC845F88B08BFF9A0 *)il2cpp_codegen_object_new(DTSweepPointComparator_tA06245D62FBBEE946B1A620CC845F88B08BFF9A0_il2cpp_TypeInfo_var);
		DTSweepPointComparator__ctor_mB3BC631FB28C5B61DBB14B65047BEBAA0FBB0ACC(L_2, /*hidden argument*/NULL);
		__this->set__comparator_13(L_2);
		// public DTSweepContext() {
		TriangulationContext__ctor_m1D431BC62D99FB0A6B76E27A4C5630BFAFE15219(__this, /*hidden argument*/NULL);
		// Clear();
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::Clear() */, __this);
		// }
		return;
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::get_IsDebugEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DTSweepContext_get_IsDebugEnabled_mB6068341336E933CD91850DA3A8A1D93031AD71C (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * __this, const RuntimeMethod* method)
{
	{
		// return base.IsDebugEnabled;
		bool L_0;
		L_0 = TriangulationContext_get_IsDebugEnabled_mB588E97116825F0BF8B424AA329DA89394CA7B4B_inline(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::RemoveFromList(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_RemoveFromList_m576659B7DB18CC2646B15A5C471B42A79FD32A73 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * __this, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___triangle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mCC33FE951C2F5B95887E8E03067CCF052A224C31_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Triangles.Remove(triangle);
		List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977 * L_0 = ((TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B *)__this)->get_Triangles_1();
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_1 = ___triangle0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_mCC33FE951C2F5B95887E8E03067CCF052A224C31(L_0, L_1, /*hidden argument*/List_1_Remove_mCC33FE951C2F5B95887E8E03067CCF052A224C31_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::MeshClean(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_MeshClean_m5D3779C14BD179543317D5954689197E1C8E4E9C (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * __this, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___triangle0, const RuntimeMethod* method)
{
	{
		// MeshCleanReq(triangle);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_0 = ___triangle0;
		DTSweepContext_MeshCleanReq_m4A9A93EDBF20D04911F505305602D9475F548FEE(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::MeshCleanReq(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_MeshCleanReq_m4A9A93EDBF20D04911F505305602D9475F548FEE (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * __this, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___triangle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_m5EC6D4DA8D086DDC58E068ABA1B8F30C98E4D1CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Triangulatable_t1EF1514C47E7572EEC4ADFD43DA1E6AC901E73CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (triangle != null && !triangle.IsInterior) {
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_0 = ___triangle0;
		if (!L_0)
		{
			goto IL_004a;
		}
	}
	{
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_1 = ___triangle0;
		NullCheck(L_1);
		bool L_2;
		L_2 = DelaunayTriangle_get_IsInterior_m4CD9DD161937111148252D31D6B54BED24C786AD_inline(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_004a;
		}
	}
	{
		// triangle.IsInterior = true;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_3 = ___triangle0;
		NullCheck(L_3);
		DelaunayTriangle_set_IsInterior_m0597F66983E07892CB01C418704B985223723C6F_inline(L_3, (bool)1, /*hidden argument*/NULL);
		// Triangulatable.AddTriangle(triangle);
		RuntimeObject* L_4;
		L_4 = TriangulationContext_get_Triangulatable_mEEA9131F5A5B1B07B03F883D36BBA6971F59E54C_inline(__this, /*hidden argument*/NULL);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_5 = ___triangle0;
		NullCheck(L_4);
		InterfaceActionInvoker1< DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * >::Invoke(2 /* System.Void UnityEngine.ProBuilder.Poly2Tri.Triangulatable::AddTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle) */, Triangulatable_t1EF1514C47E7572EEC4ADFD43DA1E6AC901E73CD_il2cpp_TypeInfo_var, L_4, L_5);
		// for (int i = 0; i < 3; i++)
		V_0 = 0;
		goto IL_0046;
	}

IL_0022:
	{
		// if (!triangle.EdgeIsConstrained[i])
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_6 = ___triangle0;
		NullCheck(L_6);
		FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * L_7 = L_6->get_address_of_EdgeIsConstrained_2();
		int32_t L_8 = V_0;
		bool L_9;
		L_9 = FixedBitArray3_get_Item_m8D1568A202E819BFCF3AEADA4CBF1661024202F9((FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 *)L_7, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0042;
		}
	}
	{
		// MeshCleanReq(triangle.Neighbors[i]);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_10 = ___triangle0;
		NullCheck(L_10);
		FixedArray3_1_tDB222AD5E30A16C9D8C257978FFD6780A962B922 * L_11 = L_10->get_address_of_Neighbors_1();
		int32_t L_12 = V_0;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_13;
		L_13 = FixedArray3_1_get_Item_m5EC6D4DA8D086DDC58E068ABA1B8F30C98E4D1CA((FixedArray3_1_tDB222AD5E30A16C9D8C257978FFD6780A962B922 *)L_11, L_12, /*hidden argument*/FixedArray3_1_get_Item_m5EC6D4DA8D086DDC58E068ABA1B8F30C98E4D1CA_RuntimeMethod_var);
		DTSweepContext_MeshCleanReq_m4A9A93EDBF20D04911F505305602D9475F548FEE(__this, L_13, /*hidden argument*/NULL);
	}

IL_0042:
	{
		// for (int i = 0; i < 3; i++)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0046:
	{
		// for (int i = 0; i < 3; i++)
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)3)))
		{
			goto IL_0022;
		}
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_Clear_m1339C247EAD2585398C8BAFB8C6291F63587E96F (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m863A3092DEECFDD22703F6B331A2B235520F2AD5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Clear();
		TriangulationContext_Clear_m9005CBB1B42C4183908A74BC225AE9E1856F82C7(__this, /*hidden argument*/NULL);
		// Triangles.Clear();
		List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977 * L_0 = ((TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B *)__this)->get_Triangles_1();
		NullCheck(L_0);
		List_1_Clear_m863A3092DEECFDD22703F6B331A2B235520F2AD5(L_0, /*hidden argument*/List_1_Clear_m863A3092DEECFDD22703F6B331A2B235520F2AD5_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::AddNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_AddNode_m9796D7A28F9F8E594F9AA12FAD3B41277597C8D3 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * __this, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___node0, const RuntimeMethod* method)
{
	{
		// Front.AddNode(node);
		AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5 * L_0 = __this->get_Front_8();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_1 = ___node0;
		NullCheck(L_0);
		AdvancingFront_AddNode_m60F733E1BA7F895B3C41E5898DEB155A3BEEB6FC(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::RemoveNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_RemoveNode_mB40B2110E119D78E65A20BC1CF2B4BF71CDBBD2C (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * __this, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___node0, const RuntimeMethod* method)
{
	{
		// Front.RemoveNode(node);
		AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5 * L_0 = __this->get_Front_8();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_1 = ___node0;
		NullCheck(L_0);
		AdvancingFront_RemoveNode_m93B858B266DC7FED65FCC073BED3371230D3A9E8(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::LocateNode(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * DTSweepContext_LocateNode_m20AABA18D57E08A62008463F29A4CAF039BA26B6 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___point0, const RuntimeMethod* method)
{
	{
		// return Front.LocateNode(point);
		AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5 * L_0 = __this->get_Front_8();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_1 = ___point0;
		NullCheck(L_0);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_2;
		L_2 = AdvancingFront_LocateNode_m3026C657A485B7F04D9E1A4156E752983AAF8D55(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::CreateAdvancingFront()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_CreateAdvancingFront_mA3A418782FCDB858C81C5C283D32C49E3BEC0481 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m62D2D60A23EE7E5FFE5B6AA0BAF8A7D6BA1E52D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE06167D06E964FADCFCA04A29A837372026B8F58_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * V_0 = NULL;
	AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * V_1 = NULL;
	AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * V_2 = NULL;
	DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * V_3 = NULL;
	{
		// DelaunayTriangle iTriangle = new DelaunayTriangle(Points[0], Tail, Head);
		List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * L_0 = ((TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B *)__this)->get_Points_2();
		NullCheck(L_0);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_1;
		L_1 = List_1_get_Item_mE06167D06E964FADCFCA04A29A837372026B8F58_inline(L_0, 0, /*hidden argument*/List_1_get_Item_mE06167D06E964FADCFCA04A29A837372026B8F58_RuntimeMethod_var);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_2;
		L_2 = DTSweepContext_get_Tail_mA33F0BE5B349C0D50FADA8195F60C45B8C4CD588_inline(__this, /*hidden argument*/NULL);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_3;
		L_3 = DTSweepContext_get_Head_mA11E321587EF7EA818C12222EE3E25F1B05A49BB_inline(__this, /*hidden argument*/NULL);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_4 = (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A *)il2cpp_codegen_object_new(DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A_il2cpp_TypeInfo_var);
		DelaunayTriangle__ctor_mFF50163C04BA34186ADB11D7B63F8904F2E09F7C(L_4, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		// Triangles.Add(iTriangle);
		List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977 * L_5 = ((TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B *)__this)->get_Triangles_1();
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_6 = V_3;
		NullCheck(L_5);
		List_1_Add_m62D2D60A23EE7E5FFE5B6AA0BAF8A7D6BA1E52D7(L_5, L_6, /*hidden argument*/List_1_Add_m62D2D60A23EE7E5FFE5B6AA0BAF8A7D6BA1E52D7_RuntimeMethod_var);
		// head = new AdvancingFrontNode(iTriangle.Points[1]);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_7 = V_3;
		NullCheck(L_7);
		FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 * L_8 = L_7->get_address_of_Points_0();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_9;
		L_9 = FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194((FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 *)L_8, 1, /*hidden argument*/FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194_RuntimeMethod_var);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_10 = (AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 *)il2cpp_codegen_object_new(AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70_il2cpp_TypeInfo_var);
		AdvancingFrontNode__ctor_m54212F4AF6A60211FC0CC17FE28C24A63C79D69A(L_10, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		// head.Triangle = iTriangle;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_11 = V_0;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_12 = V_3;
		NullCheck(L_11);
		L_11->set_Triangle_4(L_12);
		// middle = new AdvancingFrontNode(iTriangle.Points[0]);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_13 = V_3;
		NullCheck(L_13);
		FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 * L_14 = L_13->get_address_of_Points_0();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_15;
		L_15 = FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194((FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 *)L_14, 0, /*hidden argument*/FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194_RuntimeMethod_var);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_16 = (AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 *)il2cpp_codegen_object_new(AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70_il2cpp_TypeInfo_var);
		AdvancingFrontNode__ctor_m54212F4AF6A60211FC0CC17FE28C24A63C79D69A(L_16, L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		// middle.Triangle = iTriangle;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_17 = V_2;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_18 = V_3;
		NullCheck(L_17);
		L_17->set_Triangle_4(L_18);
		// tail = new AdvancingFrontNode(iTriangle.Points[2]);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_19 = V_3;
		NullCheck(L_19);
		FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 * L_20 = L_19->get_address_of_Points_0();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_21;
		L_21 = FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194((FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 *)L_20, 2, /*hidden argument*/FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194_RuntimeMethod_var);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_22 = (AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 *)il2cpp_codegen_object_new(AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70_il2cpp_TypeInfo_var);
		AdvancingFrontNode__ctor_m54212F4AF6A60211FC0CC17FE28C24A63C79D69A(L_22, L_21, /*hidden argument*/NULL);
		V_1 = L_22;
		// Front = new AdvancingFront(head, tail);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_23 = V_0;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_24 = V_1;
		AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5 * L_25 = (AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5 *)il2cpp_codegen_object_new(AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5_il2cpp_TypeInfo_var);
		AdvancingFront__ctor_m3353218BB24D87269ED563150ED15B46AF97A4EA(L_25, L_23, L_24, /*hidden argument*/NULL);
		__this->set_Front_8(L_25);
		// Front.AddNode(middle);
		AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5 * L_26 = __this->get_Front_8();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_27 = V_2;
		NullCheck(L_26);
		AdvancingFront_AddNode_m60F733E1BA7F895B3C41E5898DEB155A3BEEB6FC(L_26, L_27, /*hidden argument*/NULL);
		// Front.Head.Next = middle;
		AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5 * L_28 = __this->get_Front_8();
		NullCheck(L_28);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_29 = L_28->get_Head_0();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_30 = V_2;
		NullCheck(L_29);
		L_29->set_Next_0(L_30);
		// middle.Next = Front.Tail;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_31 = V_2;
		AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5 * L_32 = __this->get_Front_8();
		NullCheck(L_32);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_33 = L_32->get_Tail_1();
		NullCheck(L_31);
		L_31->set_Next_0(L_33);
		// middle.Prev = Front.Head;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_34 = V_2;
		AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5 * L_35 = __this->get_Front_8();
		NullCheck(L_35);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_36 = L_35->get_Head_0();
		NullCheck(L_34);
		L_34->set_Prev_1(L_36);
		// Front.Tail.Prev = middle;
		AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5 * L_37 = __this->get_Front_8();
		NullCheck(L_37);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_38 = L_37->get_Tail_1();
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_39 = V_2;
		NullCheck(L_38);
		L_38->set_Prev_1(L_39);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::MapTriangleToNodes(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_MapTriangleToNodes_m88F0ECE533C928433E975FC7409E8A63A39B89FB (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * __this, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_m5EC6D4DA8D086DDC58E068ABA1B8F30C98E4D1CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * V_1 = NULL;
	{
		// for (int i = 0; i < 3; i++)
		V_0 = 0;
		goto IL_003e;
	}

IL_0004:
	{
		// if (t.Neighbors[i] == null)
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_0 = ___t0;
		NullCheck(L_0);
		FixedArray3_1_tDB222AD5E30A16C9D8C257978FFD6780A962B922 * L_1 = L_0->get_address_of_Neighbors_1();
		int32_t L_2 = V_0;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_3;
		L_3 = FixedArray3_1_get_Item_m5EC6D4DA8D086DDC58E068ABA1B8F30C98E4D1CA((FixedArray3_1_tDB222AD5E30A16C9D8C257978FFD6780A962B922 *)L_1, L_2, /*hidden argument*/FixedArray3_1_get_Item_m5EC6D4DA8D086DDC58E068ABA1B8F30C98E4D1CA_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_003a;
		}
	}
	{
		// AdvancingFrontNode n = Front.LocatePoint(t.PointCWFrom(t.Points[i]));
		AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5 * L_4 = __this->get_Front_8();
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_5 = ___t0;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_6 = ___t0;
		NullCheck(L_6);
		FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 * L_7 = L_6->get_address_of_Points_0();
		int32_t L_8 = V_0;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_9;
		L_9 = FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194((FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 *)L_7, L_8, /*hidden argument*/FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194_RuntimeMethod_var);
		NullCheck(L_5);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_10;
		L_10 = DelaunayTriangle_PointCWFrom_m7F83BA541E2E5F811A73467832BB7A7FE557FBB4(L_5, L_9, /*hidden argument*/NULL);
		NullCheck(L_4);
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_11;
		L_11 = AdvancingFront_LocatePoint_m670D5AB0C5273114BF896A38FC2F31C944FFF4E3(L_4, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		// if (n != null) n.Triangle = t;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_12 = V_1;
		if (!L_12)
		{
			goto IL_003a;
		}
	}
	{
		// if (n != null) n.Triangle = t;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_13 = V_1;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_14 = ___t0;
		NullCheck(L_13);
		L_13->set_Triangle_4(L_14);
	}

IL_003a:
	{
		// for (int i = 0; i < 3; i++)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_003e:
	{
		// for (int i = 0; i < 3; i++)
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) < ((int32_t)3)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::PrepareTriangulation(UnityEngine.ProBuilder.Poly2Tri.Triangulatable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_PrepareTriangulation_m67E85DA5C06AD00A40C1F8F79CDA20CA698D8810 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * __this, RuntimeObject* ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m30FA729B7A7A51E3E070CC925E53E7B830A18245_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7F7D1D02D0A40C2816FDD39923536B62937029F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA186985A5D675FEA828DDA51AC186940253A4A39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m28CEC327F311D6DCEBDBA35FA101A6ECA119A987_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_m0143D618FF5567E8B804B320D90BFAB367A605FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE06167D06E964FADCFCA04A29A837372026B8F58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * V_6 = NULL;
	TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * V_7 = NULL;
	Enumerator_tCB7700EF6C700D919B5681132CA978C465D2C1C9  V_8;
	memset((&V_8), 0, sizeof(V_8));
	TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * V_9 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// base.PrepareTriangulation(t);
		RuntimeObject* L_0 = ___t0;
		TriangulationContext_PrepareTriangulation_mED56579E890E721D2E3BE829BDDBDC8E47114E4D(__this, L_0, /*hidden argument*/NULL);
		// xmax = xmin = Points[0].X;
		List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * L_1 = ((TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B *)__this)->get_Points_2();
		NullCheck(L_1);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_2;
		L_2 = List_1_get_Item_mE06167D06E964FADCFCA04A29A837372026B8F58_inline(L_1, 0, /*hidden argument*/List_1_get_Item_mE06167D06E964FADCFCA04A29A837372026B8F58_RuntimeMethod_var);
		NullCheck(L_2);
		double L_3 = L_2->get_X_1();
		double L_4 = L_3;
		V_1 = L_4;
		V_0 = L_4;
		// ymax = ymin = Points[0].Y;
		List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * L_5 = ((TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B *)__this)->get_Points_2();
		NullCheck(L_5);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_6;
		L_6 = List_1_get_Item_mE06167D06E964FADCFCA04A29A837372026B8F58_inline(L_5, 0, /*hidden argument*/List_1_get_Item_mE06167D06E964FADCFCA04A29A837372026B8F58_RuntimeMethod_var);
		NullCheck(L_6);
		double L_7 = L_6->get_Y_2();
		double L_8 = L_7;
		V_3 = L_8;
		V_2 = L_8;
		// foreach (TriangulationPoint p in Points) {
		List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * L_9 = ((TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B *)__this)->get_Points_2();
		NullCheck(L_9);
		Enumerator_tCB7700EF6C700D919B5681132CA978C465D2C1C9  L_10;
		L_10 = List_1_GetEnumerator_m28CEC327F311D6DCEBDBA35FA101A6ECA119A987(L_9, /*hidden argument*/List_1_GetEnumerator_m28CEC327F311D6DCEBDBA35FA101A6ECA119A987_RuntimeMethod_var);
		V_8 = L_10;
	}

IL_003c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_008f;
		}

IL_003e:
		{
			// foreach (TriangulationPoint p in Points) {
			TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_11;
			L_11 = Enumerator_get_Current_mA186985A5D675FEA828DDA51AC186940253A4A39_inline((Enumerator_tCB7700EF6C700D919B5681132CA978C465D2C1C9 *)(&V_8), /*hidden argument*/Enumerator_get_Current_mA186985A5D675FEA828DDA51AC186940253A4A39_RuntimeMethod_var);
			V_9 = L_11;
			// if (p.X > xmax) xmax = p.X;
			TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_12 = V_9;
			NullCheck(L_12);
			double L_13 = L_12->get_X_1();
			double L_14 = V_0;
			if ((!(((double)L_13) > ((double)L_14))))
			{
				goto IL_0059;
			}
		}

IL_0051:
		{
			// if (p.X > xmax) xmax = p.X;
			TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_15 = V_9;
			NullCheck(L_15);
			double L_16 = L_15->get_X_1();
			V_0 = L_16;
		}

IL_0059:
		{
			// if (p.X < xmin) xmin = p.X;
			TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_17 = V_9;
			NullCheck(L_17);
			double L_18 = L_17->get_X_1();
			double L_19 = V_1;
			if ((!(((double)L_18) < ((double)L_19))))
			{
				goto IL_006b;
			}
		}

IL_0063:
		{
			// if (p.X < xmin) xmin = p.X;
			TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_20 = V_9;
			NullCheck(L_20);
			double L_21 = L_20->get_X_1();
			V_1 = L_21;
		}

IL_006b:
		{
			// if (p.Y > ymax) ymax = p.Y;
			TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_22 = V_9;
			NullCheck(L_22);
			double L_23 = L_22->get_Y_2();
			double L_24 = V_2;
			if ((!(((double)L_23) > ((double)L_24))))
			{
				goto IL_007d;
			}
		}

IL_0075:
		{
			// if (p.Y > ymax) ymax = p.Y;
			TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_25 = V_9;
			NullCheck(L_25);
			double L_26 = L_25->get_Y_2();
			V_2 = L_26;
		}

IL_007d:
		{
			// if (p.Y < ymin) ymin = p.Y;
			TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_27 = V_9;
			NullCheck(L_27);
			double L_28 = L_27->get_Y_2();
			double L_29 = V_3;
			if ((!(((double)L_28) < ((double)L_29))))
			{
				goto IL_008f;
			}
		}

IL_0087:
		{
			// if (p.Y < ymin) ymin = p.Y;
			TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_30 = V_9;
			NullCheck(L_30);
			double L_31 = L_30->get_Y_2();
			V_3 = L_31;
		}

IL_008f:
		{
			// foreach (TriangulationPoint p in Points) {
			bool L_32;
			L_32 = Enumerator_MoveNext_m7F7D1D02D0A40C2816FDD39923536B62937029F9((Enumerator_tCB7700EF6C700D919B5681132CA978C465D2C1C9 *)(&V_8), /*hidden argument*/Enumerator_MoveNext_m7F7D1D02D0A40C2816FDD39923536B62937029F9_RuntimeMethod_var);
			if (L_32)
			{
				goto IL_003e;
			}
		}

IL_0098:
		{
			IL2CPP_LEAVE(0xA8, FINALLY_009a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009a;
	}

FINALLY_009a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m30FA729B7A7A51E3E070CC925E53E7B830A18245((Enumerator_tCB7700EF6C700D919B5681132CA978C465D2C1C9 *)(&V_8), /*hidden argument*/Enumerator_Dispose_m30FA729B7A7A51E3E070CC925E53E7B830A18245_RuntimeMethod_var);
		IL2CPP_END_FINALLY(154)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(154)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xA8, IL_00a8)
	}

IL_00a8:
	{
		// double deltaX = ALPHA * (xmax - xmin);
		float L_33 = __this->get_ALPHA_7();
		double L_34 = V_0;
		double L_35 = V_1;
		V_4 = ((double)il2cpp_codegen_multiply((double)((double)((double)L_33)), (double)((double)il2cpp_codegen_subtract((double)L_34, (double)L_35))));
		// double deltaY = ALPHA * (ymax - ymin);
		float L_36 = __this->get_ALPHA_7();
		double L_37 = V_2;
		double L_38 = V_3;
		V_5 = ((double)il2cpp_codegen_multiply((double)((double)((double)L_36)), (double)((double)il2cpp_codegen_subtract((double)L_37, (double)L_38))));
		// TriangulationPoint p1 = new TriangulationPoint(xmax + deltaX, ymin - deltaY, -1);
		double L_39 = V_0;
		double L_40 = V_4;
		double L_41 = V_3;
		double L_42 = V_5;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_43 = (TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 *)il2cpp_codegen_object_new(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10_il2cpp_TypeInfo_var);
		TriangulationPoint__ctor_m19991687F91CB02AAA27D2D67EE2F412CFFF4F34(L_43, ((double)il2cpp_codegen_add((double)L_39, (double)L_40)), ((double)il2cpp_codegen_subtract((double)L_41, (double)L_42)), (-1), /*hidden argument*/NULL);
		V_6 = L_43;
		// TriangulationPoint p2 = new TriangulationPoint(xmin - deltaX, ymin - deltaY, -1);
		double L_44 = V_1;
		double L_45 = V_4;
		double L_46 = V_3;
		double L_47 = V_5;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_48 = (TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 *)il2cpp_codegen_object_new(TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10_il2cpp_TypeInfo_var);
		TriangulationPoint__ctor_m19991687F91CB02AAA27D2D67EE2F412CFFF4F34(L_48, ((double)il2cpp_codegen_subtract((double)L_44, (double)L_45)), ((double)il2cpp_codegen_subtract((double)L_46, (double)L_47)), (-1), /*hidden argument*/NULL);
		V_7 = L_48;
		// Head = p1;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_49 = V_6;
		DTSweepContext_set_Head_mFAF735C4137345C84587C4BF2C32E4E584847C9E_inline(__this, L_49, /*hidden argument*/NULL);
		// Tail = p2;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_50 = V_7;
		DTSweepContext_set_Tail_m6FFFE304B826B407005CC262435E36A21F8BC77B_inline(__this, L_50, /*hidden argument*/NULL);
		// Points.Sort(_comparator);
		List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * L_51 = ((TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B *)__this)->get_Points_2();
		DTSweepPointComparator_tA06245D62FBBEE946B1A620CC845F88B08BFF9A0 * L_52 = __this->get__comparator_13();
		NullCheck(L_51);
		List_1_Sort_m0143D618FF5567E8B804B320D90BFAB367A605FC(L_51, L_52, /*hidden argument*/List_1_Sort_m0143D618FF5567E8B804B320D90BFAB367A605FC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::FinalizeTriangulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepContext_FinalizeTriangulation_mF13CC7740664B3ED71D8A264B93D2DC66386FEE9 (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m863A3092DEECFDD22703F6B331A2B235520F2AD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Triangulatable_t1EF1514C47E7572EEC4ADFD43DA1E6AC901E73CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Triangulatable.AddTriangles(Triangles);
		RuntimeObject* L_0;
		L_0 = TriangulationContext_get_Triangulatable_mEEA9131F5A5B1B07B03F883D36BBA6971F59E54C_inline(__this, /*hidden argument*/NULL);
		List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977 * L_1 = ((TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B *)__this)->get_Triangles_1();
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3 /* System.Void UnityEngine.ProBuilder.Poly2Tri.Triangulatable::AddTriangles(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>) */, Triangulatable_t1EF1514C47E7572EEC4ADFD43DA1E6AC901E73CD_il2cpp_TypeInfo_var, L_0, L_1);
		// Triangles.Clear();
		List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977 * L_2 = ((TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B *)__this)->get_Triangles_1();
		NullCheck(L_2);
		List_1_Clear_m863A3092DEECFDD22703F6B331A2B235520F2AD5(L_2, /*hidden argument*/List_1_Clear_m863A3092DEECFDD22703F6B331A2B235520F2AD5_RuntimeMethod_var);
		// }
		return;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint UnityEngine.ProBuilder.Poly2Tri.DTSweepContext::NewConstraint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A * DTSweepContext_NewConstraint_mFF1F19A896E1834750AE1C8B799665B93900C7EA (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___a0, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new DTSweepConstraint(a, b);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_0 = ___a0;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_1 = ___b1;
		DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_2 = (DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE *)il2cpp_codegen_object_new(DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE_il2cpp_TypeInfo_var);
		DTSweepConstraint__ctor_m233D63E48829740D15B743D30C85B04152B21F26(L_2, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::set_PrimaryTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_set_PrimaryTriangle_mB948F030C8DC7369C96D02BF8A8CB79BA4B47F24 (DTSweepDebugContext_t1118374B297F625192528B23AD580B5AB9F9EDF5 * __this, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B56FA96FE55F4A5B70E48AF16D59739F6389D3C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DelaunayTriangle   PrimaryTriangle   { get { return _primaryTriangle  ; } set { _primaryTriangle   = value; _tcx.Update("set PrimaryTriangle");   } }
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_0 = ___value0;
		__this->set__primaryTriangle_1(L_0);
		// public DelaunayTriangle   PrimaryTriangle   { get { return _primaryTriangle  ; } set { _primaryTriangle   = value; _tcx.Update("set PrimaryTriangle");   } }
		TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * L_1 = ((TriangulationDebugContext_tB2690A971C0344C60D9E4DEBC8819ADE2D29F397 *)__this)->get__tcx_0();
		NullCheck(L_1);
		TriangulationContext_Update_m40FD753CAF54F292C95C884B8F719A9E58E3845A(L_1, _stringLiteral9B56FA96FE55F4A5B70E48AF16D59739F6389D3C, /*hidden argument*/NULL);
		// public DelaunayTriangle   PrimaryTriangle   { get { return _primaryTriangle  ; } set { _primaryTriangle   = value; _tcx.Update("set PrimaryTriangle");   } }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::set_SecondaryTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_set_SecondaryTriangle_m0B5449D47E7722E6B0F8869E167862C6C0022EAD (DTSweepDebugContext_t1118374B297F625192528B23AD580B5AB9F9EDF5 * __this, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B67A1E3362EA84160157011F823BD6607D1E57);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DelaunayTriangle   SecondaryTriangle { get { return _secondaryTriangle; } set { _secondaryTriangle = value; _tcx.Update("set SecondaryTriangle"); } }
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_0 = ___value0;
		__this->set__secondaryTriangle_2(L_0);
		// public DelaunayTriangle   SecondaryTriangle { get { return _secondaryTriangle; } set { _secondaryTriangle = value; _tcx.Update("set SecondaryTriangle"); } }
		TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * L_1 = ((TriangulationDebugContext_tB2690A971C0344C60D9E4DEBC8819ADE2D29F397 *)__this)->get__tcx_0();
		NullCheck(L_1);
		TriangulationContext_Update_m40FD753CAF54F292C95C884B8F719A9E58E3845A(L_1, _stringLiteralB4B67A1E3362EA84160157011F823BD6607D1E57, /*hidden argument*/NULL);
		// public DelaunayTriangle   SecondaryTriangle { get { return _secondaryTriangle; } set { _secondaryTriangle = value; _tcx.Update("set SecondaryTriangle"); } }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::set_ActivePoint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_set_ActivePoint_m365F37AC439B9AEB456EFAD9B41FBCA57054A2F4 (DTSweepDebugContext_t1118374B297F625192528B23AD580B5AB9F9EDF5 * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral237443D40E51BEB792E3255884B17F5F2A070555);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TriangulationPoint ActivePoint       { get { return _activePoint      ; } set { _activePoint       = value; _tcx.Update("set ActivePoint");       } }
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_0 = ___value0;
		__this->set__activePoint_3(L_0);
		// public TriangulationPoint ActivePoint       { get { return _activePoint      ; } set { _activePoint       = value; _tcx.Update("set ActivePoint");       } }
		TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * L_1 = ((TriangulationDebugContext_tB2690A971C0344C60D9E4DEBC8819ADE2D29F397 *)__this)->get__tcx_0();
		NullCheck(L_1);
		TriangulationContext_Update_m40FD753CAF54F292C95C884B8F719A9E58E3845A(L_1, _stringLiteral237443D40E51BEB792E3255884B17F5F2A070555, /*hidden argument*/NULL);
		// public TriangulationPoint ActivePoint       { get { return _activePoint      ; } set { _activePoint       = value; _tcx.Update("set ActivePoint");       } }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::set_ActiveNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_set_ActiveNode_m8CEF7E12336372A4DDA30B90BBDF1C210E2A7D18 (DTSweepDebugContext_t1118374B297F625192528B23AD580B5AB9F9EDF5 * __this, AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88EB854C80D13C1F40F616EE53A1381BFF41639B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AdvancingFrontNode ActiveNode        { get { return _activeNode       ; } set { _activeNode        = value; _tcx.Update("set ActiveNode");        } }
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_0 = ___value0;
		__this->set__activeNode_4(L_0);
		// public AdvancingFrontNode ActiveNode        { get { return _activeNode       ; } set { _activeNode        = value; _tcx.Update("set ActiveNode");        } }
		TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * L_1 = ((TriangulationDebugContext_tB2690A971C0344C60D9E4DEBC8819ADE2D29F397 *)__this)->get__tcx_0();
		NullCheck(L_1);
		TriangulationContext_Update_m40FD753CAF54F292C95C884B8F719A9E58E3845A(L_1, _stringLiteral88EB854C80D13C1F40F616EE53A1381BFF41639B, /*hidden argument*/NULL);
		// public AdvancingFrontNode ActiveNode        { get { return _activeNode       ; } set { _activeNode        = value; _tcx.Update("set ActiveNode");        } }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::set_ActiveConstraint(UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_set_ActiveConstraint_m95F1078CB89E202814AB38B164802036D4F025CF (DTSweepDebugContext_t1118374B297F625192528B23AD580B5AB9F9EDF5 * __this, DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB80316C404349B7962BAC3B6CE7C7E7107C36CA1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DTSweepConstraint  ActiveConstraint  { get { return _activeConstraint ; } set { _activeConstraint  = value; _tcx.Update("set ActiveConstraint");  } }
		DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_0 = ___value0;
		__this->set__activeConstraint_5(L_0);
		// public DTSweepConstraint  ActiveConstraint  { get { return _activeConstraint ; } set { _activeConstraint  = value; _tcx.Update("set ActiveConstraint");  } }
		TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * L_1 = ((TriangulationDebugContext_tB2690A971C0344C60D9E4DEBC8819ADE2D29F397 *)__this)->get__tcx_0();
		NullCheck(L_1);
		TriangulationContext_Update_m40FD753CAF54F292C95C884B8F719A9E58E3845A(L_1, _stringLiteralB80316C404349B7962BAC3B6CE7C7E7107C36CA1, /*hidden argument*/NULL);
		// public DTSweepConstraint  ActiveConstraint  { get { return _activeConstraint ; } set { _activeConstraint  = value; _tcx.Update("set ActiveConstraint");  } }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepDebugContext_Clear_mC74365829D50EBA2997F224B38C9C5D1A6B66356 (DTSweepDebugContext_t1118374B297F625192528B23AD580B5AB9F9EDF5 * __this, const RuntimeMethod* method)
{
	{
		// PrimaryTriangle   = null;
		DTSweepDebugContext_set_PrimaryTriangle_mB948F030C8DC7369C96D02BF8A8CB79BA4B47F24(__this, (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A *)NULL, /*hidden argument*/NULL);
		// SecondaryTriangle = null;
		DTSweepDebugContext_set_SecondaryTriangle_m0B5449D47E7722E6B0F8869E167862C6C0022EAD(__this, (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A *)NULL, /*hidden argument*/NULL);
		// ActivePoint       = null;
		DTSweepDebugContext_set_ActivePoint_m365F37AC439B9AEB456EFAD9B41FBCA57054A2F4(__this, (TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 *)NULL, /*hidden argument*/NULL);
		// ActiveNode        = null;
		DTSweepDebugContext_set_ActiveNode_m8CEF7E12336372A4DDA30B90BBDF1C210E2A7D18(__this, (AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 *)NULL, /*hidden argument*/NULL);
		// ActiveConstraint  = null;
		DTSweepDebugContext_set_ActiveConstraint_m95F1078CB89E202814AB38B164802036D4F025CF(__this, (DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE *)NULL, /*hidden argument*/NULL);
		// }
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
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepEdgeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepEdgeEvent__ctor_m12AEE65B03999D9E769BE13913761062CEC3FF40 (DTSweepEdgeEvent_t93472178B8E22740677AF3E5D255F96392BB8453 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Int32 UnityEngine.ProBuilder.Poly2Tri.DTSweepPointComparator::Compare(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DTSweepPointComparator_Compare_m0C89BB4B771623A77D1F95C7948F5119152A1E9F (DTSweepPointComparator_tA06245D62FBBEE946B1A620CC845F88B08BFF9A0 * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p10, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p21, const RuntimeMethod* method)
{
	{
		// if (p1.Y < p2.Y) {
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_0 = ___p10;
		NullCheck(L_0);
		double L_1 = L_0->get_Y_2();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_2 = ___p21;
		NullCheck(L_2);
		double L_3 = L_2->get_Y_2();
		if ((!(((double)L_1) < ((double)L_3))))
		{
			goto IL_0010;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0010:
	{
		// } else if (p1.Y > p2.Y) {
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_4 = ___p10;
		NullCheck(L_4);
		double L_5 = L_4->get_Y_2();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_6 = ___p21;
		NullCheck(L_6);
		double L_7 = L_6->get_Y_2();
		if ((!(((double)L_5) > ((double)L_7))))
		{
			goto IL_0020;
		}
	}
	{
		// return 1;
		return 1;
	}

IL_0020:
	{
		// if (p1.X < p2.X) {
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_8 = ___p10;
		NullCheck(L_8);
		double L_9 = L_8->get_X_1();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_10 = ___p21;
		NullCheck(L_10);
		double L_11 = L_10->get_X_1();
		if ((!(((double)L_9) < ((double)L_11))))
		{
			goto IL_0030;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0030:
	{
		// } else if (p1.X > p2.X) {
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_12 = ___p10;
		NullCheck(L_12);
		double L_13 = L_12->get_X_1();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_14 = ___p21;
		NullCheck(L_14);
		double L_15 = L_14->get_X_1();
		if ((!(((double)L_13) > ((double)L_15))))
		{
			goto IL_0040;
		}
	}
	{
		// return 1;
		return 1;
	}

IL_0040:
	{
		// return 0;
		return 0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DTSweepPointComparator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTSweepPointComparator__ctor_mB3BC631FB28C5B61DBB14B65047BEBAA0FBB0ACC (DTSweepPointComparator_tA06245D62FBBEE946B1A620CC845F88B08BFF9A0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::get_IsInterior()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_get_IsInterior_m4CD9DD161937111148252D31D6B54BED24C786AD (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, const RuntimeMethod* method)
{
	{
		// public bool IsInterior { get; set; }
		bool L_0 = __this->get_U3CIsInteriorU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::set_IsInterior(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_set_IsInterior_m0597F66983E07892CB01C418704B985223723C6F (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsInterior { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CIsInteriorU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::.ctor(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle__ctor_mFF50163C04BA34186ADB11D7B63F8904F2E09F7C (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p10, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p21, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p32, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_set_Item_mE30BF433CD2BE14F750A52FE2E653BFFB68BA905_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DelaunayTriangle(TriangulationPoint p1, TriangulationPoint p2, TriangulationPoint p3) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Points[0] = p1;
		FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 * L_0 = __this->get_address_of_Points_0();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_1 = ___p10;
		FixedArray3_1_set_Item_mE30BF433CD2BE14F750A52FE2E653BFFB68BA905((FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 *)L_0, 0, L_1, /*hidden argument*/FixedArray3_1_set_Item_mE30BF433CD2BE14F750A52FE2E653BFFB68BA905_RuntimeMethod_var);
		// Points[1] = p2;
		FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 * L_2 = __this->get_address_of_Points_0();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_3 = ___p21;
		FixedArray3_1_set_Item_mE30BF433CD2BE14F750A52FE2E653BFFB68BA905((FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 *)L_2, 1, L_3, /*hidden argument*/FixedArray3_1_set_Item_mE30BF433CD2BE14F750A52FE2E653BFFB68BA905_RuntimeMethod_var);
		// Points[2] = p3;
		FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 * L_4 = __this->get_address_of_Points_0();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_5 = ___p32;
		FixedArray3_1_set_Item_mE30BF433CD2BE14F750A52FE2E653BFFB68BA905((FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 *)L_4, 2, L_5, /*hidden argument*/FixedArray3_1_set_Item_mE30BF433CD2BE14F750A52FE2E653BFFB68BA905_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Int32 UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::IndexOf(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DelaunayTriangle_IndexOf_m6BCB717AAD454FA4C1BBBDC0ECDCAF661AE03C28 (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_IndexOf_m8085D0B04FA38EA30610C60164BB83A03A7DE838_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	{
		// int i = Points.IndexOf(p);
		FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 * L_0 = __this->get_address_of_Points_0();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_1 = ___p0;
		int32_t L_2;
		L_2 = FixedArray3_1_IndexOf_m8085D0B04FA38EA30610C60164BB83A03A7DE838((FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 *)L_0, L_1, /*hidden argument*/FixedArray3_1_IndexOf_m8085D0B04FA38EA30610C60164BB83A03A7DE838_RuntimeMethod_var);
		// if (i==-1) throw new Exception("Calling index with a point that doesn't exist in triangle");
		int32_t L_3 = L_2;
		G_B1_0 = L_3;
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			G_B2_0 = L_3;
			goto IL_001b;
		}
	}
	{
		// if (i==-1) throw new Exception("Calling index with a point that doesn't exist in triangle");
		Exception_t * L_4 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF4ED7D3F8F9EE650CA476597BCB717839ACBA38B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DelaunayTriangle_IndexOf_m6BCB717AAD454FA4C1BBBDC0ECDCAF661AE03C28_RuntimeMethod_var)));
	}

IL_001b:
	{
		// return i;
		return G_B2_0;
	}
}
// System.Int32 UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::IndexCCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DelaunayTriangle_IndexCCWFrom_mC19C42734AD70ABB9F3BB5915652F7A87A34103E (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p0, const RuntimeMethod* method)
{
	{
		// public int IndexCCWFrom(TriangulationPoint p) { return (IndexOf(p)+1)%3; }
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_0 = ___p0;
		int32_t L_1;
		L_1 = DelaunayTriangle_IndexOf_m6BCB717AAD454FA4C1BBBDC0ECDCAF661AE03C28(__this, L_0, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1))%(int32_t)3));
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::Contains(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_Contains_m9095AF9E942F7EA944FE21C567086C6890A9B2BF (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_Contains_m9DB004E73DDC1CE846CD0752B53E96E0601BDF4A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool Contains(TriangulationPoint p) { return Points.Contains(p); }
		FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 * L_0 = __this->get_address_of_Points_0();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_1 = ___p0;
		bool L_2;
		L_2 = FixedArray3_1_Contains_m9DB004E73DDC1CE846CD0752B53E96E0601BDF4A((FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 *)L_0, L_1, /*hidden argument*/FixedArray3_1_Contains_m9DB004E73DDC1CE846CD0752B53E96E0601BDF4A_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::MarkNeighbor(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_MarkNeighbor_m172FF46906F1199292847C7F69B2C165C65867FF (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p10, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p21, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___t2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_set_Item_m3E39BD962A4540BB857DA849B848A544F55C64A1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int i = EdgeIndex(p1,p2);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_0 = ___p10;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_1 = ___p21;
		int32_t L_2;
		L_2 = DelaunayTriangle_EdgeIndex_m77EB021F9878EB52690AE793D2473F7856938F04(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if ( i==-1 ) throw new Exception( "Error marking neighbors -- t doesn't contain edge p1-p2!" );
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_0018;
		}
	}
	{
		// if ( i==-1 ) throw new Exception( "Error marking neighbors -- t doesn't contain edge p1-p2!" );
		Exception_t * L_4 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA29C437354A4DAC3895D74F1428508364E47293F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DelaunayTriangle_MarkNeighbor_m172FF46906F1199292847C7F69B2C165C65867FF_RuntimeMethod_var)));
	}

IL_0018:
	{
		// Neighbors[i] = t;
		FixedArray3_1_tDB222AD5E30A16C9D8C257978FFD6780A962B922 * L_5 = __this->get_address_of_Neighbors_1();
		int32_t L_6 = V_0;
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_7 = ___t2;
		FixedArray3_1_set_Item_m3E39BD962A4540BB857DA849B848A544F55C64A1((FixedArray3_1_tDB222AD5E30A16C9D8C257978FFD6780A962B922 *)L_5, L_6, L_7, /*hidden argument*/FixedArray3_1_set_Item_m3E39BD962A4540BB857DA849B848A544F55C64A1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::MarkNeighbor(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_MarkNeighbor_m285227BC79816BB67CE729657065E27173CAFFCB (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_set_Item_m3E39BD962A4540BB857DA849B848A544F55C64A1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// bool a = t.Contains(Points[0]);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_0 = ___t0;
		FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 * L_1 = __this->get_address_of_Points_0();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_2;
		L_2 = FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194((FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 *)L_1, 0, /*hidden argument*/FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_3;
		L_3 = DelaunayTriangle_Contains_m9095AF9E942F7EA944FE21C567086C6890A9B2BF(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// bool b = t.Contains(Points[1]);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_4 = ___t0;
		FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 * L_5 = __this->get_address_of_Points_0();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_6;
		L_6 = FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194((FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 *)L_5, 1, /*hidden argument*/FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194_RuntimeMethod_var);
		NullCheck(L_4);
		bool L_7;
		L_7 = DelaunayTriangle_Contains_m9095AF9E942F7EA944FE21C567086C6890A9B2BF(L_4, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		// bool c = t.Contains(Points[2]);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_8 = ___t0;
		FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 * L_9 = __this->get_address_of_Points_0();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_10;
		L_10 = FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194((FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 *)L_9, 2, /*hidden argument*/FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194_RuntimeMethod_var);
		NullCheck(L_8);
		bool L_11;
		L_11 = DelaunayTriangle_Contains_m9095AF9E942F7EA944FE21C567086C6890A9B2BF(L_8, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		// if      (b&&c) { Neighbors[0]=t; t.MarkNeighbor(Points[1],Points[2],this); }
		bool L_12 = V_1;
		bool L_13 = V_2;
		if (!((int32_t)((int32_t)L_12&(int32_t)L_13)))
		{
			goto IL_006b;
		}
	}
	{
		// if      (b&&c) { Neighbors[0]=t; t.MarkNeighbor(Points[1],Points[2],this); }
		FixedArray3_1_tDB222AD5E30A16C9D8C257978FFD6780A962B922 * L_14 = __this->get_address_of_Neighbors_1();
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_15 = ___t0;
		FixedArray3_1_set_Item_m3E39BD962A4540BB857DA849B848A544F55C64A1((FixedArray3_1_tDB222AD5E30A16C9D8C257978FFD6780A962B922 *)L_14, 0, L_15, /*hidden argument*/FixedArray3_1_set_Item_m3E39BD962A4540BB857DA849B848A544F55C64A1_RuntimeMethod_var);
		// if      (b&&c) { Neighbors[0]=t; t.MarkNeighbor(Points[1],Points[2],this); }
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_16 = ___t0;
		FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 * L_17 = __this->get_address_of_Points_0();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_18;
		L_18 = FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194((FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 *)L_17, 1, /*hidden argument*/FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194_RuntimeMethod_var);
		FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 * L_19 = __this->get_address_of_Points_0();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_20;
		L_20 = FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194((FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 *)L_19, 2, /*hidden argument*/FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194_RuntimeMethod_var);
		NullCheck(L_16);
		DelaunayTriangle_MarkNeighbor_m172FF46906F1199292847C7F69B2C165C65867FF(L_16, L_18, L_20, __this, /*hidden argument*/NULL);
		// if      (b&&c) { Neighbors[0]=t; t.MarkNeighbor(Points[1],Points[2],this); }
		return;
	}

IL_006b:
	{
		// else if (a&&c) { Neighbors[1]=t; t.MarkNeighbor(Points[0],Points[2],this); }
		bool L_21 = V_0;
		bool L_22 = V_2;
		if (!((int32_t)((int32_t)L_21&(int32_t)L_22)))
		{
			goto IL_009d;
		}
	}
	{
		// else if (a&&c) { Neighbors[1]=t; t.MarkNeighbor(Points[0],Points[2],this); }
		FixedArray3_1_tDB222AD5E30A16C9D8C257978FFD6780A962B922 * L_23 = __this->get_address_of_Neighbors_1();
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_24 = ___t0;
		FixedArray3_1_set_Item_m3E39BD962A4540BB857DA849B848A544F55C64A1((FixedArray3_1_tDB222AD5E30A16C9D8C257978FFD6780A962B922 *)L_23, 1, L_24, /*hidden argument*/FixedArray3_1_set_Item_m3E39BD962A4540BB857DA849B848A544F55C64A1_RuntimeMethod_var);
		// else if (a&&c) { Neighbors[1]=t; t.MarkNeighbor(Points[0],Points[2],this); }
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_25 = ___t0;
		FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 * L_26 = __this->get_address_of_Points_0();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_27;
		L_27 = FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194((FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 *)L_26, 0, /*hidden argument*/FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194_RuntimeMethod_var);
		FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 * L_28 = __this->get_address_of_Points_0();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_29;
		L_29 = FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194((FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 *)L_28, 2, /*hidden argument*/FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194_RuntimeMethod_var);
		NullCheck(L_25);
		DelaunayTriangle_MarkNeighbor_m172FF46906F1199292847C7F69B2C165C65867FF(L_25, L_27, L_29, __this, /*hidden argument*/NULL);
		// else if (a&&c) { Neighbors[1]=t; t.MarkNeighbor(Points[0],Points[2],this); }
		return;
	}

IL_009d:
	{
		// else if (a&&b) { Neighbors[2]=t; t.MarkNeighbor(Points[0],Points[1],this); }
		bool L_30 = V_0;
		bool L_31 = V_1;
		if (!((int32_t)((int32_t)L_30&(int32_t)L_31)))
		{
			goto IL_00cf;
		}
	}
	{
		// else if (a&&b) { Neighbors[2]=t; t.MarkNeighbor(Points[0],Points[1],this); }
		FixedArray3_1_tDB222AD5E30A16C9D8C257978FFD6780A962B922 * L_32 = __this->get_address_of_Neighbors_1();
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_33 = ___t0;
		FixedArray3_1_set_Item_m3E39BD962A4540BB857DA849B848A544F55C64A1((FixedArray3_1_tDB222AD5E30A16C9D8C257978FFD6780A962B922 *)L_32, 2, L_33, /*hidden argument*/FixedArray3_1_set_Item_m3E39BD962A4540BB857DA849B848A544F55C64A1_RuntimeMethod_var);
		// else if (a&&b) { Neighbors[2]=t; t.MarkNeighbor(Points[0],Points[1],this); }
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_34 = ___t0;
		FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 * L_35 = __this->get_address_of_Points_0();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_36;
		L_36 = FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194((FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 *)L_35, 0, /*hidden argument*/FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194_RuntimeMethod_var);
		FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 * L_37 = __this->get_address_of_Points_0();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_38;
		L_38 = FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194((FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 *)L_37, 1, /*hidden argument*/FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194_RuntimeMethod_var);
		NullCheck(L_34);
		DelaunayTriangle_MarkNeighbor_m172FF46906F1199292847C7F69B2C165C65867FF(L_34, L_36, L_38, __this, /*hidden argument*/NULL);
		// else if (a&&b) { Neighbors[2]=t; t.MarkNeighbor(Points[0],Points[1],this); }
		return;
	}

IL_00cf:
	{
		// else throw new Exception( "Failed to mark neighbor, doesn't share an edge!");
		Exception_t * L_39 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_39, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral656D304F364B477202FBF443F2948662EBAB895C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DelaunayTriangle_MarkNeighbor_m285227BC79816BB67CE729657065E27173CAFFCB_RuntimeMethod_var)));
	}
}
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::OppositePoint(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * DelaunayTriangle_OppositePoint_mCCD125CD7C6BE7113AAC180FF37066F9802967CE (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___t0, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p1, const RuntimeMethod* method)
{
	{
		// return PointCWFrom(t.PointCWFrom(p));
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_0 = ___t0;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_1 = ___p1;
		NullCheck(L_0);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_2;
		L_2 = DelaunayTriangle_PointCWFrom_m7F83BA541E2E5F811A73467832BB7A7FE557FBB4(L_0, L_1, /*hidden argument*/NULL);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_3;
		L_3 = DelaunayTriangle_PointCWFrom_m7F83BA541E2E5F811A73467832BB7A7FE557FBB4(__this, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::NeighborCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * DelaunayTriangle_NeighborCWFrom_m02FE93F770765BFFB25A2366C267C2D3FC97C91D (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___point0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_IndexOf_m8085D0B04FA38EA30610C60164BB83A03A7DE838_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_m5EC6D4DA8D086DDC58E068ABA1B8F30C98E4D1CA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DelaunayTriangle NeighborCWFrom    (TriangulationPoint point) { return Neighbors[(Points.IndexOf(point)+1)%3]; }
		FixedArray3_1_tDB222AD5E30A16C9D8C257978FFD6780A962B922 * L_0 = __this->get_address_of_Neighbors_1();
		FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 * L_1 = __this->get_address_of_Points_0();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_2 = ___point0;
		int32_t L_3;
		L_3 = FixedArray3_1_IndexOf_m8085D0B04FA38EA30610C60164BB83A03A7DE838((FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 *)L_1, L_2, /*hidden argument*/FixedArray3_1_IndexOf_m8085D0B04FA38EA30610C60164BB83A03A7DE838_RuntimeMethod_var);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_4;
		L_4 = FixedArray3_1_get_Item_m5EC6D4DA8D086DDC58E068ABA1B8F30C98E4D1CA((FixedArray3_1_tDB222AD5E30A16C9D8C257978FFD6780A962B922 *)L_0, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1))%(int32_t)3)), /*hidden argument*/FixedArray3_1_get_Item_m5EC6D4DA8D086DDC58E068ABA1B8F30C98E4D1CA_RuntimeMethod_var);
		return L_4;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::NeighborCCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * DelaunayTriangle_NeighborCCWFrom_mFC8DC101483E5DA3FA8D4FFC3E724529DDFB79A4 (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___point0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_IndexOf_m8085D0B04FA38EA30610C60164BB83A03A7DE838_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_m5EC6D4DA8D086DDC58E068ABA1B8F30C98E4D1CA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DelaunayTriangle NeighborCCWFrom   (TriangulationPoint point) { return Neighbors[(Points.IndexOf(point)+2)%3]; }
		FixedArray3_1_tDB222AD5E30A16C9D8C257978FFD6780A962B922 * L_0 = __this->get_address_of_Neighbors_1();
		FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 * L_1 = __this->get_address_of_Points_0();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_2 = ___point0;
		int32_t L_3;
		L_3 = FixedArray3_1_IndexOf_m8085D0B04FA38EA30610C60164BB83A03A7DE838((FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 *)L_1, L_2, /*hidden argument*/FixedArray3_1_IndexOf_m8085D0B04FA38EA30610C60164BB83A03A7DE838_RuntimeMethod_var);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_4;
		L_4 = FixedArray3_1_get_Item_m5EC6D4DA8D086DDC58E068ABA1B8F30C98E4D1CA((FixedArray3_1_tDB222AD5E30A16C9D8C257978FFD6780A962B922 *)L_0, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)2))%(int32_t)3)), /*hidden argument*/FixedArray3_1_get_Item_m5EC6D4DA8D086DDC58E068ABA1B8F30C98E4D1CA_RuntimeMethod_var);
		return L_4;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::NeighborAcrossFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * DelaunayTriangle_NeighborAcrossFrom_m0CF00F9AF2656B9E6B3FB590AB2DABF2DA946252 (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___point0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_IndexOf_m8085D0B04FA38EA30610C60164BB83A03A7DE838_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_m5EC6D4DA8D086DDC58E068ABA1B8F30C98E4D1CA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DelaunayTriangle NeighborAcrossFrom(TriangulationPoint point) { return Neighbors[ Points.IndexOf(point)     ]; }
		FixedArray3_1_tDB222AD5E30A16C9D8C257978FFD6780A962B922 * L_0 = __this->get_address_of_Neighbors_1();
		FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 * L_1 = __this->get_address_of_Points_0();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_2 = ___point0;
		int32_t L_3;
		L_3 = FixedArray3_1_IndexOf_m8085D0B04FA38EA30610C60164BB83A03A7DE838((FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 *)L_1, L_2, /*hidden argument*/FixedArray3_1_IndexOf_m8085D0B04FA38EA30610C60164BB83A03A7DE838_RuntimeMethod_var);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_4;
		L_4 = FixedArray3_1_get_Item_m5EC6D4DA8D086DDC58E068ABA1B8F30C98E4D1CA((FixedArray3_1_tDB222AD5E30A16C9D8C257978FFD6780A962B922 *)L_0, L_3, /*hidden argument*/FixedArray3_1_get_Item_m5EC6D4DA8D086DDC58E068ABA1B8F30C98E4D1CA_RuntimeMethod_var);
		return L_4;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::PointCCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * DelaunayTriangle_PointCCWFrom_m701498FBCC2D5A858262F0D9A21BF2DAAB6EDF60 (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___point0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TriangulationPoint PointCCWFrom(TriangulationPoint point) { return Points[(IndexOf(point)+1)%3]; }
		FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 * L_0 = __this->get_address_of_Points_0();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_1 = ___point0;
		int32_t L_2;
		L_2 = DelaunayTriangle_IndexOf_m6BCB717AAD454FA4C1BBBDC0ECDCAF661AE03C28(__this, L_1, /*hidden argument*/NULL);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_3;
		L_3 = FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194((FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 *)L_0, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1))%(int32_t)3)), /*hidden argument*/FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194_RuntimeMethod_var);
		return L_3;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::PointCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * DelaunayTriangle_PointCWFrom_m7F83BA541E2E5F811A73467832BB7A7FE557FBB4 (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___point0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TriangulationPoint PointCWFrom (TriangulationPoint point) { return Points[(IndexOf(point)+2)%3]; }
		FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 * L_0 = __this->get_address_of_Points_0();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_1 = ___point0;
		int32_t L_2;
		L_2 = DelaunayTriangle_IndexOf_m6BCB717AAD454FA4C1BBBDC0ECDCAF661AE03C28(__this, L_1, /*hidden argument*/NULL);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_3;
		L_3 = FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194((FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 *)L_0, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)2))%(int32_t)3)), /*hidden argument*/FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::RotateCW()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_RotateCW_m8F514995965FFE85811B543310D9E21B8DCF3C11 (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_set_Item_mE30BF433CD2BE14F750A52FE2E653BFFB68BA905_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * V_0 = NULL;
	{
		// var t = Points[2];
		FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 * L_0 = __this->get_address_of_Points_0();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_1;
		L_1 = FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194((FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 *)L_0, 2, /*hidden argument*/FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194_RuntimeMethod_var);
		V_0 = L_1;
		// Points[2] = Points[1];
		FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 * L_2 = __this->get_address_of_Points_0();
		FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 * L_3 = __this->get_address_of_Points_0();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_4;
		L_4 = FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194((FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 *)L_3, 1, /*hidden argument*/FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194_RuntimeMethod_var);
		FixedArray3_1_set_Item_mE30BF433CD2BE14F750A52FE2E653BFFB68BA905((FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 *)L_2, 2, L_4, /*hidden argument*/FixedArray3_1_set_Item_mE30BF433CD2BE14F750A52FE2E653BFFB68BA905_RuntimeMethod_var);
		// Points[1] = Points[0];
		FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 * L_5 = __this->get_address_of_Points_0();
		FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 * L_6 = __this->get_address_of_Points_0();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_7;
		L_7 = FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194((FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 *)L_6, 0, /*hidden argument*/FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194_RuntimeMethod_var);
		FixedArray3_1_set_Item_mE30BF433CD2BE14F750A52FE2E653BFFB68BA905((FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 *)L_5, 1, L_7, /*hidden argument*/FixedArray3_1_set_Item_mE30BF433CD2BE14F750A52FE2E653BFFB68BA905_RuntimeMethod_var);
		// Points[0] = t;
		FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 * L_8 = __this->get_address_of_Points_0();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_9 = V_0;
		FixedArray3_1_set_Item_mE30BF433CD2BE14F750A52FE2E653BFFB68BA905((FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 *)L_8, 0, L_9, /*hidden argument*/FixedArray3_1_set_Item_mE30BF433CD2BE14F750A52FE2E653BFFB68BA905_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::Legalize(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_Legalize_mB5724EDB6D934EA120F603A00FD03FA58FF1C0A6 (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___oPoint0, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___nPoint1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_set_Item_mE30BF433CD2BE14F750A52FE2E653BFFB68BA905_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RotateCW();
		DelaunayTriangle_RotateCW_m8F514995965FFE85811B543310D9E21B8DCF3C11(__this, /*hidden argument*/NULL);
		// Points[IndexCCWFrom(oPoint)] = nPoint;
		FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 * L_0 = __this->get_address_of_Points_0();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_1 = ___oPoint0;
		int32_t L_2;
		L_2 = DelaunayTriangle_IndexCCWFrom_mC19C42734AD70ABB9F3BB5915652F7A87A34103E(__this, L_1, /*hidden argument*/NULL);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_3 = ___nPoint1;
		FixedArray3_1_set_Item_mE30BF433CD2BE14F750A52FE2E653BFFB68BA905((FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 *)L_0, L_2, L_3, /*hidden argument*/FixedArray3_1_set_Item_mE30BF433CD2BE14F750A52FE2E653BFFB68BA905_RuntimeMethod_var);
		// }
		return;
	}
}
// System.String UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DelaunayTriangle_ToString_mDAE34D637601364FBB8859FB477C0C3258B398A4 (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_3 = NULL;
	TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_3 = NULL;
	TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_3 = NULL;
	TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_3 = NULL;
	TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_3 = NULL;
	TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_3 = NULL;
	String_t* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_3 = NULL;
	{
		// public override string ToString() { return Points[0] + "," + Points[1] + "," + Points[2]; }
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 * L_2 = __this->get_address_of_Points_0();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_3;
		L_3 = FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194((FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 *)L_2, 0, /*hidden argument*/FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194_RuntimeMethod_var);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = 0;
		G_B1_2 = L_1;
		G_B1_3 = L_1;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = 0;
			G_B2_2 = L_1;
			G_B2_3 = L_1;
			goto IL_001b;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		goto IL_0020;
	}

IL_001b:
	{
		NullCheck(G_B2_0);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_5;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
	}

IL_0020:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 * L_8 = __this->get_address_of_Points_0();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_9;
		L_9 = FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194((FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 *)L_8, 1, /*hidden argument*/FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194_RuntimeMethod_var);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_10 = L_9;
		G_B4_0 = L_10;
		G_B4_1 = 2;
		G_B4_2 = L_7;
		G_B4_3 = L_7;
		if (L_10)
		{
			G_B5_0 = L_10;
			G_B5_1 = 2;
			G_B5_2 = L_7;
			G_B5_3 = L_7;
			goto IL_003e;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_1;
		G_B6_2 = G_B4_2;
		G_B6_3 = G_B4_3;
		goto IL_0043;
	}

IL_003e:
	{
		NullCheck(G_B5_0);
		String_t* L_11;
		L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B5_0);
		G_B6_0 = L_11;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}

IL_0043:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_12;
		FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 * L_14 = __this->get_address_of_Points_0();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_15;
		L_15 = FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194((FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 *)L_14, 2, /*hidden argument*/FixedArray3_1_get_Item_mC162857E5BAB5608148562546E8C609749DDC194_RuntimeMethod_var);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_16 = L_15;
		G_B7_0 = L_16;
		G_B7_1 = 4;
		G_B7_2 = L_13;
		G_B7_3 = L_13;
		if (L_16)
		{
			G_B8_0 = L_16;
			G_B8_1 = 4;
			G_B8_2 = L_13;
			G_B8_3 = L_13;
			goto IL_0061;
		}
	}
	{
		G_B9_0 = ((String_t*)(NULL));
		G_B9_1 = G_B7_1;
		G_B9_2 = G_B7_2;
		G_B9_3 = G_B7_3;
		goto IL_0066;
	}

IL_0061:
	{
		NullCheck(G_B8_0);
		String_t* L_17;
		L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B8_0);
		G_B9_0 = L_17;
		G_B9_1 = G_B8_1;
		G_B9_2 = G_B8_2;
		G_B9_3 = G_B8_3;
	}

IL_0066:
	{
		NullCheck(G_B9_2);
		ArrayElementTypeCheck (G_B9_2, G_B9_0);
		(G_B9_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B9_1), (String_t*)G_B9_0);
		String_t* L_18;
		L_18 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(G_B9_3, /*hidden argument*/NULL);
		return L_18;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::MarkConstrainedEdge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_MarkConstrainedEdge_mD5F5305BEFB685C1FC80AB2E1E44DCC602B2CDF3 (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// EdgeIsConstrained[index] = true;
		FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * L_0 = __this->get_address_of_EdgeIsConstrained_2();
		int32_t L_1 = ___index0;
		FixedBitArray3_set_Item_mE1DF6CC301313E76DBB57477F11DC4DE41BED620((FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 *)L_0, L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::MarkConstrainedEdge(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_MarkConstrainedEdge_m07868BE5BF7BBFE8810779495460DF9524FB5219 (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p0, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___q1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int i = EdgeIndex(p,q);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_0 = ___p0;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_1 = ___q1;
		int32_t L_2;
		L_2 = DelaunayTriangle_EdgeIndex_m77EB021F9878EB52690AE793D2473F7856938F04(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if ( i != -1 ) EdgeIsConstrained[i] = true;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_001a;
		}
	}
	{
		// if ( i != -1 ) EdgeIsConstrained[i] = true;
		FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * L_4 = __this->get_address_of_EdgeIsConstrained_2();
		int32_t L_5 = V_0;
		FixedBitArray3_set_Item_mE1DF6CC301313E76DBB57477F11DC4DE41BED620((FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 *)L_4, L_5, (bool)1, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Int32 UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::EdgeIndex(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DelaunayTriangle_EdgeIndex_m77EB021F9878EB52690AE793D2473F7856938F04 (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p10, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedArray3_1_IndexOf_m8085D0B04FA38EA30610C60164BB83A03A7DE838_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	int32_t G_B9_0 = 0;
	{
		// int i1 = Points.IndexOf(p1);
		FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 * L_0 = __this->get_address_of_Points_0();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_1 = ___p10;
		int32_t L_2;
		L_2 = FixedArray3_1_IndexOf_m8085D0B04FA38EA30610C60164BB83A03A7DE838((FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 *)L_0, L_1, /*hidden argument*/FixedArray3_1_IndexOf_m8085D0B04FA38EA30610C60164BB83A03A7DE838_RuntimeMethod_var);
		// int i2 = Points.IndexOf(p2);
		FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 * L_3 = __this->get_address_of_Points_0();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_4 = ___p21;
		int32_t L_5;
		L_5 = FixedArray3_1_IndexOf_m8085D0B04FA38EA30610C60164BB83A03A7DE838((FixedArray3_1_t6B10772C27A2E7EA409DE4F99FAD55C029FB3EA5 *)L_3, L_4, /*hidden argument*/FixedArray3_1_IndexOf_m8085D0B04FA38EA30610C60164BB83A03A7DE838_RuntimeMethod_var);
		V_0 = L_5;
		// bool a = (i1==0 || i2==0);
		int32_t L_6 = L_2;
		G_B1_0 = L_6;
		if (!L_6)
		{
			G_B2_0 = L_6;
			goto IL_0022;
		}
	}
	{
		int32_t L_7 = V_0;
		G_B3_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0023:
	{
		V_1 = (bool)G_B3_0;
		// bool b = (i1==1 || i2==1);
		int32_t L_8 = G_B3_1;
		G_B4_0 = L_8;
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			G_B5_0 = L_8;
			goto IL_002e;
		}
	}
	{
		int32_t L_9 = V_0;
		G_B6_0 = ((((int32_t)L_9) == ((int32_t)1))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_002f;
	}

IL_002e:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_002f:
	{
		V_2 = (bool)G_B6_0;
		// bool c = (i1==2 || i2==2);
		if ((((int32_t)G_B6_1) == ((int32_t)2)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_10 = V_0;
		G_B9_0 = ((((int32_t)L_10) == ((int32_t)2))? 1 : 0);
		goto IL_003a;
	}

IL_0039:
	{
		G_B9_0 = 1;
	}

IL_003a:
	{
		V_3 = (bool)G_B9_0;
		// if (b&&c) return 0;
		bool L_11 = V_2;
		bool L_12 = V_3;
		if (!((int32_t)((int32_t)L_11&(int32_t)L_12)))
		{
			goto IL_0042;
		}
	}
	{
		// if (b&&c) return 0;
		return 0;
	}

IL_0042:
	{
		// if (a&&c) return 1;
		bool L_13 = V_1;
		bool L_14 = V_3;
		if (!((int32_t)((int32_t)L_13&(int32_t)L_14)))
		{
			goto IL_0049;
		}
	}
	{
		// if (a&&c) return 1;
		return 1;
	}

IL_0049:
	{
		// if (a&&b) return 2;
		bool L_15 = V_1;
		bool L_16 = V_2;
		if (!((int32_t)((int32_t)L_15&(int32_t)L_16)))
		{
			goto IL_0050;
		}
	}
	{
		// if (a&&b) return 2;
		return 2;
	}

IL_0050:
	{
		// return -1;
		return (-1);
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::GetConstrainedEdgeCCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_GetConstrainedEdgeCCW_m3DC304D59FAE4EF048270297C27E9A1E1A9670B1 (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p0, const RuntimeMethod* method)
{
	{
		// public bool GetConstrainedEdgeCCW   ( TriangulationPoint p ) { return EdgeIsConstrained[(IndexOf(p)+2)%3]; }
		FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * L_0 = __this->get_address_of_EdgeIsConstrained_2();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_1 = ___p0;
		int32_t L_2;
		L_2 = DelaunayTriangle_IndexOf_m6BCB717AAD454FA4C1BBBDC0ECDCAF661AE03C28(__this, L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = FixedBitArray3_get_Item_m8D1568A202E819BFCF3AEADA4CBF1661024202F9((FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 *)L_0, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)2))%(int32_t)3)), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::GetConstrainedEdgeCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_GetConstrainedEdgeCW_mE2064A27D685D45643A3BC58481B69ABB9FAC298 (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p0, const RuntimeMethod* method)
{
	{
		// public bool GetConstrainedEdgeCW    ( TriangulationPoint p ) { return EdgeIsConstrained[(IndexOf(p)+1)%3]; }
		FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * L_0 = __this->get_address_of_EdgeIsConstrained_2();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_1 = ___p0;
		int32_t L_2;
		L_2 = DelaunayTriangle_IndexOf_m6BCB717AAD454FA4C1BBBDC0ECDCAF661AE03C28(__this, L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = FixedBitArray3_get_Item_m8D1568A202E819BFCF3AEADA4CBF1661024202F9((FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 *)L_0, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1))%(int32_t)3)), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::SetConstrainedEdgeCCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_SetConstrainedEdgeCCW_m2572187034377571822BC00D3D8DD7301685B998 (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p0, bool ___ce1, const RuntimeMethod* method)
{
	{
		// public void SetConstrainedEdgeCCW   ( TriangulationPoint p, bool ce ) { EdgeIsConstrained[(IndexOf(p)+2)%3] = ce; }
		FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * L_0 = __this->get_address_of_EdgeIsConstrained_2();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_1 = ___p0;
		int32_t L_2;
		L_2 = DelaunayTriangle_IndexOf_m6BCB717AAD454FA4C1BBBDC0ECDCAF661AE03C28(__this, L_1, /*hidden argument*/NULL);
		bool L_3 = ___ce1;
		FixedBitArray3_set_Item_mE1DF6CC301313E76DBB57477F11DC4DE41BED620((FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 *)L_0, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)2))%(int32_t)3)), L_3, /*hidden argument*/NULL);
		// public void SetConstrainedEdgeCCW   ( TriangulationPoint p, bool ce ) { EdgeIsConstrained[(IndexOf(p)+2)%3] = ce; }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::SetConstrainedEdgeCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_SetConstrainedEdgeCW_mCF6EE193DD79D94338CBA160ACF193AE936803A2 (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p0, bool ___ce1, const RuntimeMethod* method)
{
	{
		// public void SetConstrainedEdgeCW    ( TriangulationPoint p, bool ce ) { EdgeIsConstrained[(IndexOf(p)+1)%3] = ce; }
		FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * L_0 = __this->get_address_of_EdgeIsConstrained_2();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_1 = ___p0;
		int32_t L_2;
		L_2 = DelaunayTriangle_IndexOf_m6BCB717AAD454FA4C1BBBDC0ECDCAF661AE03C28(__this, L_1, /*hidden argument*/NULL);
		bool L_3 = ___ce1;
		FixedBitArray3_set_Item_mE1DF6CC301313E76DBB57477F11DC4DE41BED620((FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 *)L_0, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1))%(int32_t)3)), L_3, /*hidden argument*/NULL);
		// public void SetConstrainedEdgeCW    ( TriangulationPoint p, bool ce ) { EdgeIsConstrained[(IndexOf(p)+1)%3] = ce; }
		return;
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::GetDelaunayEdgeCCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_GetDelaunayEdgeCCW_m227568FC0CCAFF32B1734AF2B51CEAFFADFE2473 (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p0, const RuntimeMethod* method)
{
	{
		// public bool GetDelaunayEdgeCCW   ( TriangulationPoint p ) { return EdgeIsDelaunay[(IndexOf(p)+2)%3]; }
		FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * L_0 = __this->get_address_of_EdgeIsDelaunay_3();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_1 = ___p0;
		int32_t L_2;
		L_2 = DelaunayTriangle_IndexOf_m6BCB717AAD454FA4C1BBBDC0ECDCAF661AE03C28(__this, L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = FixedBitArray3_get_Item_m8D1568A202E819BFCF3AEADA4CBF1661024202F9((FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 *)L_0, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)2))%(int32_t)3)), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::GetDelaunayEdgeCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelaunayTriangle_GetDelaunayEdgeCW_m1ED1DD14D1427DE77DFF40D9B277B59D7FE12E5C (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p0, const RuntimeMethod* method)
{
	{
		// public bool GetDelaunayEdgeCW    ( TriangulationPoint p ) { return EdgeIsDelaunay[(IndexOf(p)+1)%3]; }
		FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * L_0 = __this->get_address_of_EdgeIsDelaunay_3();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_1 = ___p0;
		int32_t L_2;
		L_2 = DelaunayTriangle_IndexOf_m6BCB717AAD454FA4C1BBBDC0ECDCAF661AE03C28(__this, L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = FixedBitArray3_get_Item_m8D1568A202E819BFCF3AEADA4CBF1661024202F9((FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 *)L_0, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1))%(int32_t)3)), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::SetDelaunayEdgeCCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_SetDelaunayEdgeCCW_mF3C7C3D377FCC42EB6C0579811239268AFCC3910 (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p0, bool ___ce1, const RuntimeMethod* method)
{
	{
		// public void SetDelaunayEdgeCCW   ( TriangulationPoint p, bool ce ) { EdgeIsDelaunay[(IndexOf(p)+2)%3] = ce; }
		FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * L_0 = __this->get_address_of_EdgeIsDelaunay_3();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_1 = ___p0;
		int32_t L_2;
		L_2 = DelaunayTriangle_IndexOf_m6BCB717AAD454FA4C1BBBDC0ECDCAF661AE03C28(__this, L_1, /*hidden argument*/NULL);
		bool L_3 = ___ce1;
		FixedBitArray3_set_Item_mE1DF6CC301313E76DBB57477F11DC4DE41BED620((FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 *)L_0, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)2))%(int32_t)3)), L_3, /*hidden argument*/NULL);
		// public void SetDelaunayEdgeCCW   ( TriangulationPoint p, bool ce ) { EdgeIsDelaunay[(IndexOf(p)+2)%3] = ce; }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle::SetDelaunayEdgeCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelaunayTriangle_SetDelaunayEdgeCW_m69E2B9285730F7589EF0EF654C40B1293C9D9A1F (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___p0, bool ___ce1, const RuntimeMethod* method)
{
	{
		// public void SetDelaunayEdgeCW    ( TriangulationPoint p, bool ce ) { EdgeIsDelaunay[(IndexOf(p)+1)%3] = ce; }
		FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * L_0 = __this->get_address_of_EdgeIsDelaunay_3();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_1 = ___p0;
		int32_t L_2;
		L_2 = DelaunayTriangle_IndexOf_m6BCB717AAD454FA4C1BBBDC0ECDCAF661AE03C28(__this, L_1, /*hidden argument*/NULL);
		bool L_3 = ___ce1;
		FixedBitArray3_set_Item_mE1DF6CC301313E76DBB57477F11DC4DE41BED620((FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 *)L_0, ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1))%(int32_t)3)), L_3, /*hidden argument*/NULL);
		// public void SetDelaunayEdgeCW    ( TriangulationPoint p, bool ce ) { EdgeIsDelaunay[(IndexOf(p)+1)%3] = ce; }
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
// Conversion methods for marshalling of: UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3
IL2CPP_EXTERN_C void FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4_marshal_pinvoke(const FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4& unmarshaled, FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4_marshaled_pinvoke& marshaled)
{
	marshaled.____0_0 = static_cast<int32_t>(unmarshaled.get__0_0());
	marshaled.____1_1 = static_cast<int32_t>(unmarshaled.get__1_1());
	marshaled.____2_2 = static_cast<int32_t>(unmarshaled.get__2_2());
}
IL2CPP_EXTERN_C void FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4_marshal_pinvoke_back(const FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4_marshaled_pinvoke& marshaled, FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4& unmarshaled)
{
	bool unmarshaled__0_temp_0 = false;
	unmarshaled__0_temp_0 = static_cast<bool>(marshaled.____0_0);
	unmarshaled.set__0_0(unmarshaled__0_temp_0);
	bool unmarshaled__1_temp_1 = false;
	unmarshaled__1_temp_1 = static_cast<bool>(marshaled.____1_1);
	unmarshaled.set__1_1(unmarshaled__1_temp_1);
	bool unmarshaled__2_temp_2 = false;
	unmarshaled__2_temp_2 = static_cast<bool>(marshaled.____2_2);
	unmarshaled.set__2_2(unmarshaled__2_temp_2);
}
// Conversion method for clean up from marshalling of: UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3
IL2CPP_EXTERN_C void FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4_marshal_pinvoke_cleanup(FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3
IL2CPP_EXTERN_C void FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4_marshal_com(const FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4& unmarshaled, FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4_marshaled_com& marshaled)
{
	marshaled.____0_0 = static_cast<int32_t>(unmarshaled.get__0_0());
	marshaled.____1_1 = static_cast<int32_t>(unmarshaled.get__1_1());
	marshaled.____2_2 = static_cast<int32_t>(unmarshaled.get__2_2());
}
IL2CPP_EXTERN_C void FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4_marshal_com_back(const FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4_marshaled_com& marshaled, FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4& unmarshaled)
{
	bool unmarshaled__0_temp_0 = false;
	unmarshaled__0_temp_0 = static_cast<bool>(marshaled.____0_0);
	unmarshaled.set__0_0(unmarshaled__0_temp_0);
	bool unmarshaled__1_temp_1 = false;
	unmarshaled__1_temp_1 = static_cast<bool>(marshaled.____1_1);
	unmarshaled.set__1_1(unmarshaled__1_temp_1);
	bool unmarshaled__2_temp_2 = false;
	unmarshaled__2_temp_2 = static_cast<bool>(marshaled.____2_2);
	unmarshaled.set__2_2(unmarshaled__2_temp_2);
}
// Conversion method for clean up from marshalling of: UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3
IL2CPP_EXTERN_C void FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4_marshal_com_cleanup(FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4_marshaled_com& marshaled)
{
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FixedBitArray3_get_Item_m8D1568A202E819BFCF3AEADA4CBF1661024202F9 (FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0014;
			}
			case 1:
			{
				goto IL_001b;
			}
			case 2:
			{
				goto IL_0022;
			}
		}
	}
	{
		goto IL_0029;
	}

IL_0014:
	{
		// case 0: return _0;
		bool L_1 = __this->get__0_0();
		return L_1;
	}

IL_001b:
	{
		// case 1: return _1;
		bool L_2 = __this->get__1_1();
		return L_2;
	}

IL_0022:
	{
		// case 2: return _2;
		bool L_3 = __this->get__2_2();
		return L_3;
	}

IL_0029:
	{
		// default: throw new IndexOutOfRangeException();
		IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * L_4 = (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523(L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FixedBitArray3_get_Item_m8D1568A202E819BFCF3AEADA4CBF1661024202F9_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  bool FixedBitArray3_get_Item_m8D1568A202E819BFCF3AEADA4CBF1661024202F9_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * _thisAdjusted = reinterpret_cast<FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 *>(__this + _offset);
	bool _returnValue;
	_returnValue = FixedBitArray3_get_Item_m8D1568A202E819BFCF3AEADA4CBF1661024202F9(_thisAdjusted, ___index0, method);
	return _returnValue;
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::set_Item(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedBitArray3_set_Item_mE1DF6CC301313E76DBB57477F11DC4DE41BED620 (FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * __this, int32_t ___index0, bool ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0014;
			}
			case 1:
			{
				goto IL_001c;
			}
			case 2:
			{
				goto IL_0024;
			}
		}
	}
	{
		goto IL_002c;
	}

IL_0014:
	{
		// case 0: _0 = value; break;
		bool L_1 = ___value1;
		__this->set__0_0(L_1);
		// case 0: _0 = value; break;
		return;
	}

IL_001c:
	{
		// case 1: _1 = value; break;
		bool L_2 = ___value1;
		__this->set__1_1(L_2);
		// case 1: _1 = value; break;
		return;
	}

IL_0024:
	{
		// case 2: _2 = value; break;
		bool L_3 = ___value1;
		__this->set__2_2(L_3);
		// case 2: _2 = value; break;
		return;
	}

IL_002c:
	{
		// default: throw new IndexOutOfRangeException();
		IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * L_4 = (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523(L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FixedBitArray3_set_Item_mE1DF6CC301313E76DBB57477F11DC4DE41BED620_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  void FixedBitArray3_set_Item_mE1DF6CC301313E76DBB57477F11DC4DE41BED620_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, bool ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * _thisAdjusted = reinterpret_cast<FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 *>(__this + _offset);
	FixedBitArray3_set_Item_mE1DF6CC301313E76DBB57477F11DC4DE41BED620(_thisAdjusted, ___index0, ___value1, method);
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedBitArray3_Clear_m3EB290806E96B94C74D04D944BD6501FBCC89696 (FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// _0=_1=_2=false;
		int32_t L_0 = 0;
		V_0 = (bool)L_0;
		__this->set__2_2((bool)L_0);
		bool L_1 = V_0;
		bool L_2 = L_1;
		V_0 = L_2;
		__this->set__1_1(L_2);
		bool L_3 = V_0;
		__this->set__0_0(L_3);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FixedBitArray3_Clear_m3EB290806E96B94C74D04D944BD6501FBCC89696_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * _thisAdjusted = reinterpret_cast<FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 *>(__this + _offset);
	FixedBitArray3_Clear_m3EB290806E96B94C74D04D944BD6501FBCC89696(_thisAdjusted, method);
}
// System.Collections.Generic.IEnumerable`1<System.Boolean> UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::Enumerate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FixedBitArray3_Enumerate_mC98B64F0506E3EEA4045BF330207C76B074A5549 (FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEnumerateU3Ed__10_tB632C8EC1E46E07540D45000AF54B403F3DD27F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CEnumerateU3Ed__10_tB632C8EC1E46E07540D45000AF54B403F3DD27F2 * L_0 = (U3CEnumerateU3Ed__10_tB632C8EC1E46E07540D45000AF54B403F3DD27F2 *)il2cpp_codegen_object_new(U3CEnumerateU3Ed__10_tB632C8EC1E46E07540D45000AF54B403F3DD27F2_il2cpp_TypeInfo_var);
		U3CEnumerateU3Ed__10__ctor_m61B12FBBE681A532005BED0A0682870F1A238AF9(L_0, ((int32_t)-2), /*hidden argument*/NULL);
		U3CEnumerateU3Ed__10_tB632C8EC1E46E07540D45000AF54B403F3DD27F2 * L_1 = L_0;
		FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4  L_2 = (*(FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 *)__this);
		NullCheck(L_1);
		L_1->set_U3CU3E3__U3CU3E4__this_4(L_2);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* FixedBitArray3_Enumerate_mC98B64F0506E3EEA4045BF330207C76B074A5549_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * _thisAdjusted = reinterpret_cast<FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 *>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = FixedBitArray3_Enumerate_mC98B64F0506E3EEA4045BF330207C76B074A5549(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.Generic.IEnumerator`1<System.Boolean> UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FixedBitArray3_GetEnumerator_mE95C0A75A6E092134C15BFA45E4DC84EEA68C4CF (FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t90AD96F2C518D6F04343C83B67B02220C715C642_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public IEnumerator<bool> GetEnumerator() { return Enumerate().GetEnumerator(); }
		RuntimeObject* L_0;
		L_0 = FixedBitArray3_Enumerate_mC98B64F0506E3EEA4045BF330207C76B074A5549((FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 *)__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Boolean>::GetEnumerator() */, IEnumerable_1_t90AD96F2C518D6F04343C83B67B02220C715C642_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* FixedBitArray3_GetEnumerator_mE95C0A75A6E092134C15BFA45E4DC84EEA68C4CF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * _thisAdjusted = reinterpret_cast<FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 *>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = FixedBitArray3_GetEnumerator_mE95C0A75A6E092134C15BFA45E4DC84EEA68C4CF(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.IEnumerator UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FixedBitArray3_System_Collections_IEnumerable_GetEnumerator_m3DDFBD8C30CBD1C643ED355BC618A8B771400E6D (FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * __this, const RuntimeMethod* method)
{
	{
		// IEnumerator IEnumerable.GetEnumerator() { return GetEnumerator(); }
		RuntimeObject* L_0;
		L_0 = FixedBitArray3_GetEnumerator_mE95C0A75A6E092134C15BFA45E4DC84EEA68C4CF((FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 *)__this, /*hidden argument*/NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* FixedBitArray3_System_Collections_IEnumerable_GetEnumerator_m3DDFBD8C30CBD1C643ED355BC618A8B771400E6D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * _thisAdjusted = reinterpret_cast<FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 *>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = FixedBitArray3_System_Collections_IEnumerable_GetEnumerator_m3DDFBD8C30CBD1C643ED355BC618A8B771400E6D(_thisAdjusted, method);
	return _returnValue;
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
// System.Void UnityEngine.ProBuilder.Poly2Tri.PointOnEdgeException::.ctor(System.String,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointOnEdgeException__ctor_mA50E0D3502E354A1708F96720F24878F5FC7EE72 (PointOnEdgeException_t4386B844F234AEDBCA71E45B92DF52B24899056C * __this, String_t* ___message0, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___a1, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___b2, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___c3, const RuntimeMethod* method)
{
	{
		// : base(message)
		String_t* L_0 = ___message0;
		NotImplementedException__ctor_m8A9AA4499614A5BC57DD21713D0720630C130AEB(__this, L_0, /*hidden argument*/NULL);
		// A=a;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_1 = ___a1;
		__this->set_A_17(L_1);
		// B=b;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_2 = ___b2;
		__this->set_B_18(L_2);
		// C=c;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_3 = ___c3;
		__this->set_C_19(L_3);
		// }
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
// System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> UnityEngine.ProBuilder.Poly2Tri.PointSet::get_Points()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PointSet_get_Points_m666716840BC6FBD67904828D5EB2A8A1A2026878 (PointSet_t28416B695BA46DA0157C11A570D5871D41DCBC18 * __this, const RuntimeMethod* method)
{
	{
		// public IList<TriangulationPoint> Points { get; private set; }
		RuntimeObject* L_0 = __this->get_U3CPointsU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.PointSet::set_Points(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointSet_set_Points_mE9E79785A3BC1645B2DFF463BFA436584219ED14 (PointSet_t28416B695BA46DA0157C11A570D5871D41DCBC18 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public IList<TriangulationPoint> Points { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CPointsU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> UnityEngine.ProBuilder.Poly2Tri.PointSet::get_Triangles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PointSet_get_Triangles_m7D2051C22E3A59F5F0FB0326797A481E1B1AE51B (PointSet_t28416B695BA46DA0157C11A570D5871D41DCBC18 * __this, const RuntimeMethod* method)
{
	{
		// public IList<DelaunayTriangle> Triangles { get; private set; }
		RuntimeObject* L_0 = __this->get_U3CTrianglesU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.PointSet::set_Triangles(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointSet_set_Triangles_mA6863D1F11ABB70D1914A26ACA4E102E45DDF4CB (PointSet_t28416B695BA46DA0157C11A570D5871D41DCBC18 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public IList<DelaunayTriangle> Triangles { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CTrianglesU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.PointSet::.ctor(System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointSet__ctor_m7737F334207C392A4B7E5895DBE3A7E7A8CC2DB4 (PointSet_t28416B695BA46DA0157C11A570D5871D41DCBC18 * __this, List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * ___points0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m680F69753F4999862220339209395058E8D2C0A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public PointSet(List<TriangulationPoint> points) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Points = new List<TriangulationPoint>(points);
		List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * L_0 = ___points0;
		List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * L_1 = (List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 *)il2cpp_codegen_object_new(List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2_il2cpp_TypeInfo_var);
		List_1__ctor_m680F69753F4999862220339209395058E8D2C0A3(L_1, L_0, /*hidden argument*/List_1__ctor_m680F69753F4999862220339209395058E8D2C0A3_RuntimeMethod_var);
		PointSet_set_Points_mE9E79785A3BC1645B2DFF463BFA436584219ED14_inline(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.TriangulationMode UnityEngine.ProBuilder.Poly2Tri.PointSet::get_TriangulationMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointSet_get_TriangulationMode_mB69B9598F4DA88DE8B64607E92200CB25FA793ED (PointSet_t28416B695BA46DA0157C11A570D5871D41DCBC18 * __this, const RuntimeMethod* method)
{
	{
		// public virtual TriangulationMode TriangulationMode { get { return TriangulationMode.Unconstrained; }}
		return (int32_t)(0);
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.PointSet::AddTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointSet_AddTriangle_mA3E23DDA85AC6210CF4795482BABC26A0F918330 (PointSet_t28416B695BA46DA0157C11A570D5871D41DCBC18 * __this, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t7647C6C852686AD647C99D53DAC0DE61097ADD3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Triangles.Add(t);
		RuntimeObject* L_0;
		L_0 = PointSet_get_Triangles_m7D2051C22E3A59F5F0FB0326797A481E1B1AE51B_inline(__this, /*hidden argument*/NULL);
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_1 = ___t0;
		NullCheck(L_0);
		InterfaceActionInvoker1< DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>::Add(!0) */, ICollection_1_t7647C6C852686AD647C99D53DAC0DE61097ADD3A_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.PointSet::AddTriangles(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointSet_AddTriangles_m8A3E1E7898F9372A7FABA7C0334F67021F00DFA4 (PointSet_t28416B695BA46DA0157C11A570D5871D41DCBC18 * __this, RuntimeObject* ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t7647C6C852686AD647C99D53DAC0DE61097ADD3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t8CFD113C54A85A1997FD6674905E807BBA85833B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t83947C1F4B7ED9BA57DA6F5D0A390CB519AC7E4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach ( var tri in list ) Triangles.Add(tri);
		RuntimeObject* L_0 = ___list0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>::GetEnumerator() */, IEnumerable_1_t8CFD113C54A85A1997FD6674905E807BBA85833B_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001c;
		}

IL_0009:
		{
			// foreach ( var tri in list ) Triangles.Add(tri);
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_3;
			L_3 = InterfaceFuncInvoker0< DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>::get_Current() */, IEnumerator_1_t83947C1F4B7ED9BA57DA6F5D0A390CB519AC7E4B_il2cpp_TypeInfo_var, L_2);
			V_1 = L_3;
			// foreach ( var tri in list ) Triangles.Add(tri);
			RuntimeObject* L_4;
			L_4 = PointSet_get_Triangles_m7D2051C22E3A59F5F0FB0326797A481E1B1AE51B_inline(__this, /*hidden argument*/NULL);
			DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_5 = V_1;
			NullCheck(L_4);
			InterfaceActionInvoker1< DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>::Add(!0) */, ICollection_1_t7647C6C852686AD647C99D53DAC0DE61097ADD3A_il2cpp_TypeInfo_var, L_4, L_5);
		}

IL_001c:
		{
			// foreach ( var tri in list ) Triangles.Add(tri);
			RuntimeObject* L_6 = V_0;
			NullCheck(L_6);
			bool L_7;
			L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_6);
			if (L_7)
			{
				goto IL_0009;
			}
		}

IL_0024:
		{
			IL2CPP_LEAVE(0x30, FINALLY_0026);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_8 = V_0;
			if (!L_8)
			{
				goto IL_002f;
			}
		}

IL_0029:
		{
			RuntimeObject* L_9 = V_0;
			NullCheck(L_9);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_9);
		}

IL_002f:
		{
			IL2CPP_END_FINALLY(38)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x30, IL_0030)
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.PointSet::Prepare(UnityEngine.ProBuilder.Poly2Tri.TriangulationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointSet_Prepare_m1C31B9B48F4DF917627EE34DC112145E22FBE7BF (PointSet_t28416B695BA46DA0157C11A570D5871D41DCBC18 * __this, TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * ___tcx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t0F8B6613C5D06260B7600F59A5E468A6F0C038D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t7647C6C852686AD647C99D53DAC0DE61097ADD3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mC2E5CF4FA59DECCCD954A2A90914217F7B1C417A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD634702CD0DC9A158892E97846D1B48F9EF8DF05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Triangles == null) {
		RuntimeObject* L_0;
		L_0 = PointSet_get_Triangles_m7D2051C22E3A59F5F0FB0326797A481E1B1AE51B_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		// Triangles = new List<DelaunayTriangle>(Points.Count);
		RuntimeObject* L_1;
		L_1 = PointSet_get_Points_m666716840BC6FBD67904828D5EB2A8A1A2026878_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint>::get_Count() */, ICollection_1_t0F8B6613C5D06260B7600F59A5E468A6F0C038D7_il2cpp_TypeInfo_var, L_1);
		List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977 * L_3 = (List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977 *)il2cpp_codegen_object_new(List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977_il2cpp_TypeInfo_var);
		List_1__ctor_mD634702CD0DC9A158892E97846D1B48F9EF8DF05(L_3, L_2, /*hidden argument*/List_1__ctor_mD634702CD0DC9A158892E97846D1B48F9EF8DF05_RuntimeMethod_var);
		PointSet_set_Triangles_mA6863D1F11ABB70D1914A26ACA4E102E45DDF4CB_inline(__this, L_3, /*hidden argument*/NULL);
		// } else {
		goto IL_002b;
	}

IL_0020:
	{
		// Triangles.Clear();
		RuntimeObject* L_4;
		L_4 = PointSet_get_Triangles_m7D2051C22E3A59F5F0FB0326797A481E1B1AE51B_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>::Clear() */, ICollection_1_t7647C6C852686AD647C99D53DAC0DE61097ADD3A_il2cpp_TypeInfo_var, L_4);
	}

IL_002b:
	{
		// tcx.Points.AddRange(Points);
		TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * L_5 = ___tcx0;
		NullCheck(L_5);
		List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * L_6 = L_5->get_Points_2();
		RuntimeObject* L_7;
		L_7 = PointSet_get_Points_m666716840BC6FBD67904828D5EB2A8A1A2026878_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		List_1_AddRange_mC2E5CF4FA59DECCCD954A2A90914217F7B1C417A(L_6, L_7, /*hidden argument*/List_1_AddRange_mC2E5CF4FA59DECCCD954A2A90914217F7B1C417A_RuntimeMethod_var);
		// }
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
// System.Void UnityEngine.ProBuilder.Poly2Tri.Polygon::.ctor(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon__ctor_mE36F5C9F43B17E76CAEB61494832C9B83C35DE1B (Polygon_tCBEEF355994B422EB6585B902F8011F753D0C87D * __this, RuntimeObject* ___points0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Cast_TisTriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10_mBB03BCF6EC9FD1B651A3996C5A0B0695A8CD8C72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tF6BAE27469480F96B5F9D4CD92627B417C08C23F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t8081622741A2A61654EBD18C3AEEFCE9160ACA4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mC2E5CF4FA59DECCCD954A2A90914217F7B1C417A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF4A925958B5D6E175E10E9FCD929F56481228895_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected List<TriangulationPoint> _points = new List<TriangulationPoint>();
		List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * L_0 = (List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 *)il2cpp_codegen_object_new(List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2_il2cpp_TypeInfo_var);
		List_1__ctor_mF4A925958B5D6E175E10E9FCD929F56481228895(L_0, /*hidden argument*/List_1__ctor_mF4A925958B5D6E175E10E9FCD929F56481228895_RuntimeMethod_var);
		__this->set__points_0(L_0);
		// public Polygon( IList<PolygonPoint> points ) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// if (points.Count < 3) throw new ArgumentException("List has fewer than 3 points", "points");
		RuntimeObject* L_1 = ___points0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint>::get_Count() */, ICollection_1_tF6BAE27469480F96B5F9D4CD92627B417C08C23F_il2cpp_TypeInfo_var, L_1);
		if ((((int32_t)L_2) >= ((int32_t)3)))
		{
			goto IL_002a;
		}
	}
	{
		// if (points.Count < 3) throw new ArgumentException("List has fewer than 3 points", "points");
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5389BB78303E5DA7DBFA5E26F2ACCD912979149)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral17A7BA088490CA1D9307C4F7F07BDC92703EDF51)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Polygon__ctor_mE36F5C9F43B17E76CAEB61494832C9B83C35DE1B_RuntimeMethod_var)));
	}

IL_002a:
	{
		// if (points[0].Equals(points[points.Count - 1])) points.RemoveAt(points.Count - 1);
		RuntimeObject* L_4 = ___points0;
		NullCheck(L_4);
		PolygonPoint_t65F05B806EA33FEE1AFFDB2DC71F5445B3A5DEB5 * L_5;
		L_5 = InterfaceFuncInvoker1< PolygonPoint_t65F05B806EA33FEE1AFFDB2DC71F5445B3A5DEB5 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint>::get_Item(System.Int32) */, IList_1_t8081622741A2A61654EBD18C3AEEFCE9160ACA4B_il2cpp_TypeInfo_var, L_4, 0);
		RuntimeObject* L_6 = ___points0;
		RuntimeObject* L_7 = ___points0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint>::get_Count() */, ICollection_1_tF6BAE27469480F96B5F9D4CD92627B417C08C23F_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_6);
		PolygonPoint_t65F05B806EA33FEE1AFFDB2DC71F5445B3A5DEB5 * L_9;
		L_9 = InterfaceFuncInvoker1< PolygonPoint_t65F05B806EA33FEE1AFFDB2DC71F5445B3A5DEB5 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint>::get_Item(System.Int32) */, IList_1_t8081622741A2A61654EBD18C3AEEFCE9160ACA4B_il2cpp_TypeInfo_var, L_6, ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)));
		NullCheck(L_5);
		bool L_10;
		L_10 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_5, L_9);
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		// if (points[0].Equals(points[points.Count - 1])) points.RemoveAt(points.Count - 1);
		RuntimeObject* L_11 = ___points0;
		RuntimeObject* L_12 = ___points0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint>::get_Count() */, ICollection_1_tF6BAE27469480F96B5F9D4CD92627B417C08C23F_il2cpp_TypeInfo_var, L_12);
		NullCheck(L_11);
		InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint>::RemoveAt(System.Int32) */, IList_1_t8081622741A2A61654EBD18C3AEEFCE9160ACA4B_il2cpp_TypeInfo_var, L_11, ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)));
	}

IL_0054:
	{
		// _points.AddRange(points.Cast<TriangulationPoint>());
		List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * L_14 = __this->get__points_0();
		RuntimeObject* L_15 = ___points0;
		RuntimeObject* L_16;
		L_16 = Enumerable_Cast_TisTriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10_mBB03BCF6EC9FD1B651A3996C5A0B0695A8CD8C72(L_15, /*hidden argument*/Enumerable_Cast_TisTriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10_mBB03BCF6EC9FD1B651A3996C5A0B0695A8CD8C72_RuntimeMethod_var);
		NullCheck(L_14);
		List_1_AddRange_mC2E5CF4FA59DECCCD954A2A90914217F7B1C417A(L_14, L_16, /*hidden argument*/List_1_AddRange_mC2E5CF4FA59DECCCD954A2A90914217F7B1C417A_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.Polygon::.ctor(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon__ctor_m9B3F2F23B3D14D6DFCC26C3D37B42D87F29608A0 (Polygon_tCBEEF355994B422EB6585B902F8011F753D0C87D * __this, RuntimeObject* ___points0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisPolygonPoint_t65F05B806EA33FEE1AFFDB2DC71F5445B3A5DEB5_m0B5651C20D1CA93A7719810CFF9106ADE9EB13FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t8081622741A2A61654EBD18C3AEEFCE9160ACA4B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	Polygon_tCBEEF355994B422EB6585B902F8011F753D0C87D * G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	Polygon_tCBEEF355994B422EB6585B902F8011F753D0C87D * G_B1_1 = NULL;
	{
		// public Polygon( IEnumerable<PolygonPoint> points ): this( (points as IList<PolygonPoint>) ?? points.ToArray() ) {}
		RuntimeObject* L_0 = ___points0;
		RuntimeObject* L_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_1_t8081622741A2A61654EBD18C3AEEFCE9160ACA4B_il2cpp_TypeInfo_var));
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = ___points0;
		PolygonPointU5BU5D_t9EE452CC0ABCCCCDFEFA006759E88CE6642C00FA* L_3;
		L_3 = Enumerable_ToArray_TisPolygonPoint_t65F05B806EA33FEE1AFFDB2DC71F5445B3A5DEB5_m0B5651C20D1CA93A7719810CFF9106ADE9EB13FF(L_2, /*hidden argument*/Enumerable_ToArray_TisPolygonPoint_t65F05B806EA33FEE1AFFDB2DC71F5445B3A5DEB5_m0B5651C20D1CA93A7719810CFF9106ADE9EB13FF_RuntimeMethod_var);
		G_B2_0 = ((RuntimeObject*)(L_3));
		G_B2_1 = G_B1_1;
	}

IL_0011:
	{
		NullCheck(G_B2_1);
		Polygon__ctor_mE36F5C9F43B17E76CAEB61494832C9B83C35DE1B(G_B2_1, G_B2_0, /*hidden argument*/NULL);
		// public Polygon( IEnumerable<PolygonPoint> points ): this( (points as IList<PolygonPoint>) ?? points.ToArray() ) {}
		return;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.TriangulationMode UnityEngine.ProBuilder.Poly2Tri.Polygon::get_TriangulationMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Polygon_get_TriangulationMode_m9B8D362BBEBD5AD451DE7F760B9031FD97595788 (Polygon_tCBEEF355994B422EB6585B902F8011F753D0C87D * __this, const RuntimeMethod* method)
{
	{
		// public TriangulationMode TriangulationMode { get { return TriangulationMode.Polygon; } }
		return (int32_t)(2);
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.Polygon::AddHole(UnityEngine.ProBuilder.Poly2Tri.Polygon)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon_AddHole_m03C89C26C103F0B0318492B7616C1B086B9F68AB (Polygon_tCBEEF355994B422EB6585B902F8011F753D0C87D * __this, Polygon_tCBEEF355994B422EB6585B902F8011F753D0C87D * ___poly0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEB7C6700237B7CBD7B0A9F87B811C0D2D3CCC3FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEFEED8EB4D812139C21DDD4F8F0B675245610F03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tFDD914A6846665E3B49FEB2E66168F9018B3DF51_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_holes == null) _holes = new List<Polygon>();
		List_1_tFDD914A6846665E3B49FEB2E66168F9018B3DF51 * L_0 = __this->get__holes_2();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (_holes == null) _holes = new List<Polygon>();
		List_1_tFDD914A6846665E3B49FEB2E66168F9018B3DF51 * L_1 = (List_1_tFDD914A6846665E3B49FEB2E66168F9018B3DF51 *)il2cpp_codegen_object_new(List_1_tFDD914A6846665E3B49FEB2E66168F9018B3DF51_il2cpp_TypeInfo_var);
		List_1__ctor_mEFEED8EB4D812139C21DDD4F8F0B675245610F03(L_1, /*hidden argument*/List_1__ctor_mEFEED8EB4D812139C21DDD4F8F0B675245610F03_RuntimeMethod_var);
		__this->set__holes_2(L_1);
	}

IL_0013:
	{
		// _holes.Add(poly);
		List_1_tFDD914A6846665E3B49FEB2E66168F9018B3DF51 * L_2 = __this->get__holes_2();
		Polygon_tCBEEF355994B422EB6585B902F8011F753D0C87D * L_3 = ___poly0;
		NullCheck(L_2);
		List_1_Add_mEB7C6700237B7CBD7B0A9F87B811C0D2D3CCC3FF(L_2, L_3, /*hidden argument*/List_1_Add_mEB7C6700237B7CBD7B0A9F87B811C0D2D3CCC3FF_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> UnityEngine.ProBuilder.Poly2Tri.Polygon::get_Triangles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Polygon_get_Triangles_m9C0CC56D70CC3481201D1C8D1CAC6225723C9401 (Polygon_tCBEEF355994B422EB6585B902F8011F753D0C87D * __this, const RuntimeMethod* method)
{
	{
		// public IList<DelaunayTriangle> Triangles { get { return _triangles; } }
		List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977 * L_0 = __this->get__triangles_3();
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.Polygon::AddTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon_AddTriangle_mDAF09C125A3C2C8E08DA14755D4213C726D63095 (Polygon_tCBEEF355994B422EB6585B902F8011F753D0C87D * __this, DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m62D2D60A23EE7E5FFE5B6AA0BAF8A7D6BA1E52D7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _triangles.Add(t);
		List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977 * L_0 = __this->get__triangles_3();
		DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * L_1 = ___t0;
		NullCheck(L_0);
		List_1_Add_m62D2D60A23EE7E5FFE5B6AA0BAF8A7D6BA1E52D7(L_0, L_1, /*hidden argument*/List_1_Add_m62D2D60A23EE7E5FFE5B6AA0BAF8A7D6BA1E52D7_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.Polygon::AddTriangles(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon_AddTriangles_mC3B971777CBB4AFD6B39042C26C0530FACB31B17 (Polygon_tCBEEF355994B422EB6585B902F8011F753D0C87D * __this, RuntimeObject* ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m7C6364D4BC7523571AD507620469747CBDF7C194_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _triangles.AddRange(list);
		List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977 * L_0 = __this->get__triangles_3();
		RuntimeObject* L_1 = ___list0;
		NullCheck(L_0);
		List_1_AddRange_m7C6364D4BC7523571AD507620469747CBDF7C194(L_0, L_1, /*hidden argument*/List_1_AddRange_m7C6364D4BC7523571AD507620469747CBDF7C194_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.Polygon::Prepare(UnityEngine.ProBuilder.Poly2Tri.TriangulationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Polygon_Prepare_mC0188815829B5932D9F8222CB579790F4AC74B2B (Polygon_tCBEEF355994B422EB6585B902F8011F753D0C87D * __this, TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * ___tcx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8D95288BE1FE9C3E64CD8839B94B267DFFFB5CD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m448402F75FF7214DFF16A5713279F17052475353_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mAD1E55902FCF4A7BE0C623146BE7064E2F8423A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mC2E5CF4FA59DECCCD954A2A90914217F7B1C417A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m863A3092DEECFDD22703F6B331A2B235520F2AD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mFCD1B6D29C25D72C298C38DC45A6E3518EE917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD634702CD0DC9A158892E97846D1B48F9EF8DF05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9B7C9FC5FABEF16AED60E58722815716AAD10784_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE06167D06E964FADCFCA04A29A837372026B8F58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t1F94FA57AA2D3F577B34F7889158B05F1BD00CDB  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Polygon_tCBEEF355994B422EB6585B902F8011F753D0C87D * V_2 = NULL;
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (_triangles == null) {
		List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977 * L_0 = __this->get__triangles_3();
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		// _triangles = new List<DelaunayTriangle>(_points.Count);
		List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * L_1 = __this->get__points_0();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m9B7C9FC5FABEF16AED60E58722815716AAD10784_inline(L_1, /*hidden argument*/List_1_get_Count_m9B7C9FC5FABEF16AED60E58722815716AAD10784_RuntimeMethod_var);
		List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977 * L_3 = (List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977 *)il2cpp_codegen_object_new(List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977_il2cpp_TypeInfo_var);
		List_1__ctor_mD634702CD0DC9A158892E97846D1B48F9EF8DF05(L_3, L_2, /*hidden argument*/List_1__ctor_mD634702CD0DC9A158892E97846D1B48F9EF8DF05_RuntimeMethod_var);
		__this->set__triangles_3(L_3);
		// } else {
		goto IL_002b;
	}

IL_0020:
	{
		// _triangles.Clear();
		List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977 * L_4 = __this->get__triangles_3();
		NullCheck(L_4);
		List_1_Clear_m863A3092DEECFDD22703F6B331A2B235520F2AD5(L_4, /*hidden argument*/List_1_Clear_m863A3092DEECFDD22703F6B331A2B235520F2AD5_RuntimeMethod_var);
	}

IL_002b:
	{
		// for (int i = 0; i < _points.Count - 1; i++) tcx.NewConstraint(_points[i], _points[i + 1]);
		V_0 = 0;
		goto IL_0054;
	}

IL_002f:
	{
		// for (int i = 0; i < _points.Count - 1; i++) tcx.NewConstraint(_points[i], _points[i + 1]);
		TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * L_5 = ___tcx0;
		List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * L_6 = __this->get__points_0();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_8;
		L_8 = List_1_get_Item_mE06167D06E964FADCFCA04A29A837372026B8F58_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_mE06167D06E964FADCFCA04A29A837372026B8F58_RuntimeMethod_var);
		List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * L_9 = __this->get__points_0();
		int32_t L_10 = V_0;
		NullCheck(L_9);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_11;
		L_11 = List_1_get_Item_mE06167D06E964FADCFCA04A29A837372026B8F58_inline(L_9, ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)), /*hidden argument*/List_1_get_Item_mE06167D06E964FADCFCA04A29A837372026B8F58_RuntimeMethod_var);
		NullCheck(L_5);
		TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A * L_12;
		L_12 = VirtFuncInvoker2< TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A *, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 *, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * >::Invoke(5 /* UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::NewConstraint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint) */, L_5, L_8, L_11);
		// for (int i = 0; i < _points.Count - 1; i++) tcx.NewConstraint(_points[i], _points[i + 1]);
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0054:
	{
		// for (int i = 0; i < _points.Count - 1; i++) tcx.NewConstraint(_points[i], _points[i + 1]);
		int32_t L_14 = V_0;
		List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * L_15 = __this->get__points_0();
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_m9B7C9FC5FABEF16AED60E58722815716AAD10784_inline(L_15, /*hidden argument*/List_1_get_Count_m9B7C9FC5FABEF16AED60E58722815716AAD10784_RuntimeMethod_var);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1)))))
		{
			goto IL_002f;
		}
	}
	{
		// tcx.NewConstraint(_points[0], _points[_points.Count - 1]);
		TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * L_17 = ___tcx0;
		List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * L_18 = __this->get__points_0();
		NullCheck(L_18);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_19;
		L_19 = List_1_get_Item_mE06167D06E964FADCFCA04A29A837372026B8F58_inline(L_18, 0, /*hidden argument*/List_1_get_Item_mE06167D06E964FADCFCA04A29A837372026B8F58_RuntimeMethod_var);
		List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * L_20 = __this->get__points_0();
		List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * L_21 = __this->get__points_0();
		NullCheck(L_21);
		int32_t L_22;
		L_22 = List_1_get_Count_m9B7C9FC5FABEF16AED60E58722815716AAD10784_inline(L_21, /*hidden argument*/List_1_get_Count_m9B7C9FC5FABEF16AED60E58722815716AAD10784_RuntimeMethod_var);
		NullCheck(L_20);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_23;
		L_23 = List_1_get_Item_mE06167D06E964FADCFCA04A29A837372026B8F58_inline(L_20, ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)1)), /*hidden argument*/List_1_get_Item_mE06167D06E964FADCFCA04A29A837372026B8F58_RuntimeMethod_var);
		NullCheck(L_17);
		TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A * L_24;
		L_24 = VirtFuncInvoker2< TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A *, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 *, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * >::Invoke(5 /* UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::NewConstraint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint) */, L_17, L_19, L_23);
		// tcx.Points.AddRange(_points);
		TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * L_25 = ___tcx0;
		NullCheck(L_25);
		List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * L_26 = L_25->get_Points_2();
		List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * L_27 = __this->get__points_0();
		NullCheck(L_26);
		List_1_AddRange_mC2E5CF4FA59DECCCD954A2A90914217F7B1C417A(L_26, L_27, /*hidden argument*/List_1_AddRange_mC2E5CF4FA59DECCCD954A2A90914217F7B1C417A_RuntimeMethod_var);
		// if (_holes != null) {
		List_1_tFDD914A6846665E3B49FEB2E66168F9018B3DF51 * L_28 = __this->get__holes_2();
		if (!L_28)
		{
			goto IL_0152;
		}
	}
	{
		// foreach (Polygon p in _holes) {
		List_1_tFDD914A6846665E3B49FEB2E66168F9018B3DF51 * L_29 = __this->get__holes_2();
		NullCheck(L_29);
		Enumerator_t1F94FA57AA2D3F577B34F7889158B05F1BD00CDB  L_30;
		L_30 = List_1_GetEnumerator_mFCD1B6D29C25D72C298C38DC45A6E3518EE917B5(L_29, /*hidden argument*/List_1_GetEnumerator_mFCD1B6D29C25D72C298C38DC45A6E3518EE917B5_RuntimeMethod_var);
		V_1 = L_30;
	}

IL_00b7:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0136;
		}

IL_00b9:
		{
			// foreach (Polygon p in _holes) {
			Polygon_tCBEEF355994B422EB6585B902F8011F753D0C87D * L_31;
			L_31 = Enumerator_get_Current_mAD1E55902FCF4A7BE0C623146BE7064E2F8423A1_inline((Enumerator_t1F94FA57AA2D3F577B34F7889158B05F1BD00CDB *)(&V_1), /*hidden argument*/Enumerator_get_Current_mAD1E55902FCF4A7BE0C623146BE7064E2F8423A1_RuntimeMethod_var);
			V_2 = L_31;
			// for (int i = 0; i < p._points.Count - 1; i++) tcx.NewConstraint(p._points[i], p._points[i + 1]);
			V_3 = 0;
			goto IL_00ea;
		}

IL_00c5:
		{
			// for (int i = 0; i < p._points.Count - 1; i++) tcx.NewConstraint(p._points[i], p._points[i + 1]);
			TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * L_32 = ___tcx0;
			Polygon_tCBEEF355994B422EB6585B902F8011F753D0C87D * L_33 = V_2;
			NullCheck(L_33);
			List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * L_34 = L_33->get__points_0();
			int32_t L_35 = V_3;
			NullCheck(L_34);
			TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_36;
			L_36 = List_1_get_Item_mE06167D06E964FADCFCA04A29A837372026B8F58_inline(L_34, L_35, /*hidden argument*/List_1_get_Item_mE06167D06E964FADCFCA04A29A837372026B8F58_RuntimeMethod_var);
			Polygon_tCBEEF355994B422EB6585B902F8011F753D0C87D * L_37 = V_2;
			NullCheck(L_37);
			List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * L_38 = L_37->get__points_0();
			int32_t L_39 = V_3;
			NullCheck(L_38);
			TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_40;
			L_40 = List_1_get_Item_mE06167D06E964FADCFCA04A29A837372026B8F58_inline(L_38, ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1)), /*hidden argument*/List_1_get_Item_mE06167D06E964FADCFCA04A29A837372026B8F58_RuntimeMethod_var);
			NullCheck(L_32);
			TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A * L_41;
			L_41 = VirtFuncInvoker2< TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A *, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 *, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * >::Invoke(5 /* UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::NewConstraint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint) */, L_32, L_36, L_40);
			// for (int i = 0; i < p._points.Count - 1; i++) tcx.NewConstraint(p._points[i], p._points[i + 1]);
			int32_t L_42 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
		}

IL_00ea:
		{
			// for (int i = 0; i < p._points.Count - 1; i++) tcx.NewConstraint(p._points[i], p._points[i + 1]);
			int32_t L_43 = V_3;
			Polygon_tCBEEF355994B422EB6585B902F8011F753D0C87D * L_44 = V_2;
			NullCheck(L_44);
			List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * L_45 = L_44->get__points_0();
			NullCheck(L_45);
			int32_t L_46;
			L_46 = List_1_get_Count_m9B7C9FC5FABEF16AED60E58722815716AAD10784_inline(L_45, /*hidden argument*/List_1_get_Count_m9B7C9FC5FABEF16AED60E58722815716AAD10784_RuntimeMethod_var);
			if ((((int32_t)L_43) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_46, (int32_t)1)))))
			{
				goto IL_00c5;
			}
		}

IL_00fa:
		{
			// tcx.NewConstraint(p._points[0], p._points[p._points.Count - 1]);
			TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * L_47 = ___tcx0;
			Polygon_tCBEEF355994B422EB6585B902F8011F753D0C87D * L_48 = V_2;
			NullCheck(L_48);
			List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * L_49 = L_48->get__points_0();
			NullCheck(L_49);
			TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_50;
			L_50 = List_1_get_Item_mE06167D06E964FADCFCA04A29A837372026B8F58_inline(L_49, 0, /*hidden argument*/List_1_get_Item_mE06167D06E964FADCFCA04A29A837372026B8F58_RuntimeMethod_var);
			Polygon_tCBEEF355994B422EB6585B902F8011F753D0C87D * L_51 = V_2;
			NullCheck(L_51);
			List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * L_52 = L_51->get__points_0();
			Polygon_tCBEEF355994B422EB6585B902F8011F753D0C87D * L_53 = V_2;
			NullCheck(L_53);
			List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * L_54 = L_53->get__points_0();
			NullCheck(L_54);
			int32_t L_55;
			L_55 = List_1_get_Count_m9B7C9FC5FABEF16AED60E58722815716AAD10784_inline(L_54, /*hidden argument*/List_1_get_Count_m9B7C9FC5FABEF16AED60E58722815716AAD10784_RuntimeMethod_var);
			NullCheck(L_52);
			TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_56;
			L_56 = List_1_get_Item_mE06167D06E964FADCFCA04A29A837372026B8F58_inline(L_52, ((int32_t)il2cpp_codegen_subtract((int32_t)L_55, (int32_t)1)), /*hidden argument*/List_1_get_Item_mE06167D06E964FADCFCA04A29A837372026B8F58_RuntimeMethod_var);
			NullCheck(L_47);
			TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A * L_57;
			L_57 = VirtFuncInvoker2< TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A *, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 *, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * >::Invoke(5 /* UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::NewConstraint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint) */, L_47, L_50, L_56);
			// tcx.Points.AddRange(p._points);
			TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * L_58 = ___tcx0;
			NullCheck(L_58);
			List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * L_59 = L_58->get_Points_2();
			Polygon_tCBEEF355994B422EB6585B902F8011F753D0C87D * L_60 = V_2;
			NullCheck(L_60);
			List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * L_61 = L_60->get__points_0();
			NullCheck(L_59);
			List_1_AddRange_mC2E5CF4FA59DECCCD954A2A90914217F7B1C417A(L_59, L_61, /*hidden argument*/List_1_AddRange_mC2E5CF4FA59DECCCD954A2A90914217F7B1C417A_RuntimeMethod_var);
		}

IL_0136:
		{
			// foreach (Polygon p in _holes) {
			bool L_62;
			L_62 = Enumerator_MoveNext_m448402F75FF7214DFF16A5713279F17052475353((Enumerator_t1F94FA57AA2D3F577B34F7889158B05F1BD00CDB *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m448402F75FF7214DFF16A5713279F17052475353_RuntimeMethod_var);
			if (L_62)
			{
				goto IL_00b9;
			}
		}

IL_0142:
		{
			IL2CPP_LEAVE(0x152, FINALLY_0144);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0144;
	}

FINALLY_0144:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m8D95288BE1FE9C3E64CD8839B94B267DFFFB5CD3((Enumerator_t1F94FA57AA2D3F577B34F7889158B05F1BD00CDB *)(&V_1), /*hidden argument*/Enumerator_Dispose_m8D95288BE1FE9C3E64CD8839B94B267DFFFB5CD3_RuntimeMethod_var);
		IL2CPP_END_FINALLY(324)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(324)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x152, IL_0152)
	}

IL_0152:
	{
		// if (_steinerPoints != null) {
		List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * L_63 = __this->get__steinerPoints_1();
		if (!L_63)
		{
			goto IL_016b;
		}
	}
	{
		// tcx.Points.AddRange(_steinerPoints);
		TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * L_64 = ___tcx0;
		NullCheck(L_64);
		List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * L_65 = L_64->get_Points_2();
		List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * L_66 = __this->get__steinerPoints_1();
		NullCheck(L_65);
		List_1_AddRange_mC2E5CF4FA59DECCCD954A2A90914217F7B1C417A(L_65, L_66, /*hidden argument*/List_1_AddRange_mC2E5CF4FA59DECCCD954A2A90914217F7B1C417A_RuntimeMethod_var);
	}

IL_016b:
	{
		// }
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
// System.Void UnityEngine.ProBuilder.Poly2Tri.PolygonPoint::.ctor(System.Double,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolygonPoint__ctor_mD51BC1C761DFE6869F6D93AB0FB92714B7F80366 (PolygonPoint_t65F05B806EA33FEE1AFFDB2DC71F5445B3A5DEB5 * __this, double ___x0, double ___y1, int32_t ___index2, const RuntimeMethod* method)
{
	{
		// public PolygonPoint( double x, double y, int index = INSERTED_INDEX ) : base(x, y, index) { }
		double L_0 = ___x0;
		double L_1 = ___y1;
		int32_t L_2 = ___index2;
		TriangulationPoint__ctor_m19991687F91CB02AAA27D2D67EE2F412CFFF4F34(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// public PolygonPoint( double x, double y, int index = INSERTED_INDEX ) : base(x, y, index) { }
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
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationConstraint__ctor_m5F6D0518ADA1B37E23BA3952B3376D0A95208FC4 (TriangulationConstraint_t37B04799D8402A252B9032C04A2E23E3F49B173A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// UnityEngine.ProBuilder.Poly2Tri.TriangulationDebugContext UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_DebugContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TriangulationDebugContext_tB2690A971C0344C60D9E4DEBC8819ADE2D29F397 * TriangulationContext_get_DebugContext_m8A21EA50372C69937197D9A9DDB7B3C83A7EC7FA (TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * __this, const RuntimeMethod* method)
{
	{
		// public TriangulationDebugContext DebugContext { get; protected set; }
		TriangulationDebugContext_tB2690A971C0344C60D9E4DEBC8819ADE2D29F397 * L_0 = __this->get_U3CDebugContextU3Ek__BackingField_0();
		return L_0;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.TriangulationMode UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_TriangulationMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TriangulationContext_get_TriangulationMode_mEC24ABA5BBC324647459584EB532096611657E7F (TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * __this, const RuntimeMethod* method)
{
	{
		// public TriangulationMode TriangulationMode { get; protected set; }
		int32_t L_0 = __this->get_U3CTriangulationModeU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::set_TriangulationMode(UnityEngine.ProBuilder.Poly2Tri.TriangulationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_set_TriangulationMode_mD02349A0A30C62CA151D4D1B198C3FF672CE9F34 (TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TriangulationMode TriangulationMode { get; protected set; }
		int32_t L_0 = ___value0;
		__this->set_U3CTriangulationModeU3Ek__BackingField_3(L_0);
		return;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.Triangulatable UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_Triangulatable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TriangulationContext_get_Triangulatable_mEEA9131F5A5B1B07B03F883D36BBA6971F59E54C (TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * __this, const RuntimeMethod* method)
{
	{
		// public Triangulatable Triangulatable { get; private set; }
		RuntimeObject* L_0 = __this->get_U3CTriangulatableU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::set_Triangulatable(UnityEngine.ProBuilder.Poly2Tri.Triangulatable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_set_Triangulatable_m18792811D1A0CAF4964E29C808695B9F345FE7A1 (TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public Triangulatable Triangulatable { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CTriangulatableU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Int32 UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_StepCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TriangulationContext_get_StepCount_m3492A95A6CEF01FF2EC47AD2615F4C1172EE7BA8 (TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * __this, const RuntimeMethod* method)
{
	{
		// public int StepCount { get; private set; }
		int32_t L_0 = __this->get_U3CStepCountU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::set_StepCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_set_StepCount_m998A18536E32A116A5403015AB628BBB1FFD208D (TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int StepCount { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CStepCountU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::Done()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_Done_m65B0BC2606220F855765B1DB1606970127583A3F (TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// StepCount++;
		int32_t L_0;
		L_0 = TriangulationContext_get_StepCount_m3492A95A6CEF01FF2EC47AD2615F4C1172EE7BA8_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		TriangulationContext_set_StepCount_m998A18536E32A116A5403015AB628BBB1FFD208D_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::PrepareTriangulation(UnityEngine.ProBuilder.Poly2Tri.Triangulatable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_PrepareTriangulation_mED56579E890E721D2E3BE829BDDBDC8E47114E4D (TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * __this, RuntimeObject* ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Triangulatable_t1EF1514C47E7572EEC4ADFD43DA1E6AC901E73CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Triangulatable = t;
		RuntimeObject* L_0 = ___t0;
		TriangulationContext_set_Triangulatable_m18792811D1A0CAF4964E29C808695B9F345FE7A1_inline(__this, L_0, /*hidden argument*/NULL);
		// TriangulationMode = t.TriangulationMode;
		RuntimeObject* L_1 = ___t0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* UnityEngine.ProBuilder.Poly2Tri.TriangulationMode UnityEngine.ProBuilder.Poly2Tri.Triangulatable::get_TriangulationMode() */, Triangulatable_t1EF1514C47E7572EEC4ADFD43DA1E6AC901E73CD_il2cpp_TypeInfo_var, L_1);
		TriangulationContext_set_TriangulationMode_mD02349A0A30C62CA151D4D1B198C3FF672CE9F34_inline(__this, L_2, /*hidden argument*/NULL);
		// t.Prepare(this);
		RuntimeObject* L_3 = ___t0;
		NullCheck(L_3);
		InterfaceActionInvoker1< TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * >::Invoke(0 /* System.Void UnityEngine.ProBuilder.Poly2Tri.Triangulatable::Prepare(UnityEngine.ProBuilder.Poly2Tri.TriangulationContext) */, Triangulatable_t1EF1514C47E7572EEC4ADFD43DA1E6AC901E73CD_il2cpp_TypeInfo_var, L_3, __this);
		// }
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::Update(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_Update_m40FD753CAF54F292C95C884B8F719A9E58E3845A (TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		// public void Update(string message) {}
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext_Clear_m9005CBB1B42C4183908A74BC225AE9E1856F82C7 (TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mD2B0280F9794A9899C7BB948CE9E2585D32C52CB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Points.Clear();
		List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * L_0 = __this->get_Points_2();
		NullCheck(L_0);
		List_1_Clear_mD2B0280F9794A9899C7BB948CE9E2585D32C52CB(L_0, /*hidden argument*/List_1_Clear_mD2B0280F9794A9899C7BB948CE9E2585D32C52CB_RuntimeMethod_var);
		// if (DebugContext != null) DebugContext.Clear();
		TriangulationDebugContext_tB2690A971C0344C60D9E4DEBC8819ADE2D29F397 * L_1;
		L_1 = TriangulationContext_get_DebugContext_m8A21EA50372C69937197D9A9DDB7B3C83A7EC7FA_inline(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// if (DebugContext != null) DebugContext.Clear();
		TriangulationDebugContext_tB2690A971C0344C60D9E4DEBC8819ADE2D29F397 * L_2;
		L_2 = TriangulationContext_get_DebugContext_m8A21EA50372C69937197D9A9DDB7B3C83A7EC7FA_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(4 /* System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationDebugContext::Clear() */, L_2);
	}

IL_001e:
	{
		// StepCount = 0;
		TriangulationContext_set_StepCount_m998A18536E32A116A5403015AB628BBB1FFD208D_inline(__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_IsDebugEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriangulationContext_get_IsDebugEnabled_mB588E97116825F0BF8B424AA329DA89394CA7B4B (TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * __this, const RuntimeMethod* method)
{
	{
		// public virtual bool IsDebugEnabled { get; protected set; }
		bool L_0 = __this->get_U3CIsDebugEnabledU3Ek__BackingField_6();
		return L_0;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::get_DTDebugContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DTSweepDebugContext_t1118374B297F625192528B23AD580B5AB9F9EDF5 * TriangulationContext_get_DTDebugContext_mEB43D96C7FD8DF25879619B69D1537270A134AD5 (TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DTSweepDebugContext_t1118374B297F625192528B23AD580B5AB9F9EDF5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DTSweepDebugContext DTDebugContext { get { return DebugContext as DTSweepDebugContext; } }
		TriangulationDebugContext_tB2690A971C0344C60D9E4DEBC8819ADE2D29F397 * L_0;
		L_0 = TriangulationContext_get_DebugContext_m8A21EA50372C69937197D9A9DDB7B3C83A7EC7FA_inline(__this, /*hidden argument*/NULL);
		return ((DTSweepDebugContext_t1118374B297F625192528B23AD580B5AB9F9EDF5 *)IsInstClass((RuntimeObject*)L_0, DTSweepDebugContext_t1118374B297F625192528B23AD580B5AB9F9EDF5_il2cpp_TypeInfo_var));
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationContext__ctor_m1D431BC62D99FB0A6B76E27A4C5630BFAFE15219 (TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7E99250D3F7EC991F7D43A0A24070E9D8000BE6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF4A925958B5D6E175E10E9FCD929F56481228895_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public readonly List<DelaunayTriangle> Triangles = new List<DelaunayTriangle>();
		List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977 * L_0 = (List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977 *)il2cpp_codegen_object_new(List_1_tB76A5228814B1A4CC313C2E40D99CACBACA85977_il2cpp_TypeInfo_var);
		List_1__ctor_m7E99250D3F7EC991F7D43A0A24070E9D8000BE6B(L_0, /*hidden argument*/List_1__ctor_m7E99250D3F7EC991F7D43A0A24070E9D8000BE6B_RuntimeMethod_var);
		__this->set_Triangles_1(L_0);
		// public readonly List<TriangulationPoint> Points = new List<TriangulationPoint>();
		List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 * L_1 = (List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2 *)il2cpp_codegen_object_new(List_1_tB6818E07FF69FBAF723BF7F37E74838D1CF127C2_il2cpp_TypeInfo_var);
		List_1__ctor_mF4A925958B5D6E175E10E9FCD929F56481228895(L_1, /*hidden argument*/List_1__ctor_mF4A925958B5D6E175E10E9FCD929F56481228895_RuntimeMethod_var);
		__this->set_Points_2(L_1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint> UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::get_Edges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t4C92CD4575EFD7FEC3CBE8B7B36CE69C2466C90D * TriangulationPoint_get_Edges_m05131177AD065973F26F9ED35B2BBA500925ACAD (TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * __this, const RuntimeMethod* method)
{
	{
		// public List<DTSweepConstraint> Edges { get; private set; }
		List_1_t4C92CD4575EFD7FEC3CBE8B7B36CE69C2466C90D * L_0 = __this->get_U3CEdgesU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::set_Edges(System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationPoint_set_Edges_m5FBC473066E33A2155763E170A3A62A50CCC608B (TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * __this, List_1_t4C92CD4575EFD7FEC3CBE8B7B36CE69C2466C90D * ___value0, const RuntimeMethod* method)
{
	{
		// public List<DTSweepConstraint> Edges { get; private set; }
		List_1_t4C92CD4575EFD7FEC3CBE8B7B36CE69C2466C90D * L_0 = ___value0;
		__this->set_U3CEdgesU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::.ctor(System.Double,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationPoint__ctor_m19991687F91CB02AAA27D2D67EE2F412CFFF4F34 (TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * __this, double ___x0, double ___y1, int32_t ___index2, const RuntimeMethod* method)
{
	{
		// public TriangulationPoint( double x, double y, int index = INSERTED_INDEX) { X=x; Y=y; Index = index; }
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public TriangulationPoint( double x, double y, int index = INSERTED_INDEX) { X=x; Y=y; Index = index; }
		double L_0 = ___x0;
		__this->set_X_1(L_0);
		// public TriangulationPoint( double x, double y, int index = INSERTED_INDEX) { X=x; Y=y; Index = index; }
		double L_1 = ___y1;
		__this->set_Y_2(L_1);
		// public TriangulationPoint( double x, double y, int index = INSERTED_INDEX) { X=x; Y=y; Index = index; }
		int32_t L_2 = ___index2;
		__this->set_Index_3(L_2);
		// public TriangulationPoint( double x, double y, int index = INSERTED_INDEX) { X=x; Y=y; Index = index; }
		return;
	}
}
// System.String UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TriangulationPoint_ToString_m658D442A2F49400929E4EE62629B1F38627CCBFF (TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "[" + X + "," + Y + "]";
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		double* L_3 = __this->get_address_of_X_1();
		String_t* L_4;
		L_4 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		double* L_7 = __this->get_address_of_Y_2();
		String_t* L_8;
		L_8 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_6;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		String_t* L_10;
		L_10 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::AddEdge(UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationPoint_AddEdge_m6E74DA90A1DDEBDA48DD4E30450B7872D9FFA668 (TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * __this, DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC79ED8B7F5592526EB43C74882641423CC3E2FCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mFD857813532D375291D0F94362904563AC680D7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4C92CD4575EFD7FEC3CBE8B7B36CE69C2466C90D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Edges == null) Edges = new List<DTSweepConstraint>();
		List_1_t4C92CD4575EFD7FEC3CBE8B7B36CE69C2466C90D * L_0;
		L_0 = TriangulationPoint_get_Edges_m05131177AD065973F26F9ED35B2BBA500925ACAD_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (Edges == null) Edges = new List<DTSweepConstraint>();
		List_1_t4C92CD4575EFD7FEC3CBE8B7B36CE69C2466C90D * L_1 = (List_1_t4C92CD4575EFD7FEC3CBE8B7B36CE69C2466C90D *)il2cpp_codegen_object_new(List_1_t4C92CD4575EFD7FEC3CBE8B7B36CE69C2466C90D_il2cpp_TypeInfo_var);
		List_1__ctor_mFD857813532D375291D0F94362904563AC680D7F(L_1, /*hidden argument*/List_1__ctor_mFD857813532D375291D0F94362904563AC680D7F_RuntimeMethod_var);
		TriangulationPoint_set_Edges_m5FBC473066E33A2155763E170A3A62A50CCC608B_inline(__this, L_1, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// Edges.Add(e);
		List_1_t4C92CD4575EFD7FEC3CBE8B7B36CE69C2466C90D * L_2;
		L_2 = TriangulationPoint_get_Edges_m05131177AD065973F26F9ED35B2BBA500925ACAD_inline(__this, /*hidden argument*/NULL);
		DTSweepConstraint_t08B2372CE103B2D52E9B6E123893635331D3E3FE * L_3 = ___e0;
		NullCheck(L_2);
		List_1_Add_mC79ED8B7F5592526EB43C74882641423CC3E2FCC(L_2, L_3, /*hidden argument*/List_1_Add_mC79ED8B7F5592526EB43C74882641423CC3E2FCC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint::get_HasEdges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriangulationPoint_get_HasEdges_mBE4B610C0C057267AB792718C06B483ADD2E114E (TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * __this, const RuntimeMethod* method)
{
	{
		// public bool HasEdges { get { return Edges != null; } }
		List_1_t4C92CD4575EFD7FEC3CBE8B7B36CE69C2466C90D * L_0;
		L_0 = TriangulationPoint_get_Edges_m05131177AD065973F26F9ED35B2BBA500925ACAD_inline(__this, /*hidden argument*/NULL);
		return (bool)((!(((RuntimeObject*)(List_1_t4C92CD4575EFD7FEC3CBE8B7B36CE69C2466C90D *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
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
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationUtil::SmartIncircle(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriangulationUtil_SmartIncircle_m3CE2F3FC7F1F8E48BF83AA5B6E6418FE84C6350B (TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___pa0, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___pb1, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___pc2, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___pd3, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	double V_9 = 0.0;
	double V_10 = 0.0;
	double V_11 = 0.0;
	double V_12 = 0.0;
	double V_13 = 0.0;
	double V_14 = 0.0;
	double V_15 = 0.0;
	{
		// double pdx = pd.X;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_0 = ___pd3;
		NullCheck(L_0);
		double L_1 = L_0->get_X_1();
		V_0 = L_1;
		// double pdy = pd.Y;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_2 = ___pd3;
		NullCheck(L_2);
		double L_3 = L_2->get_Y_2();
		V_1 = L_3;
		// double adx = pa.X - pdx;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_4 = ___pa0;
		NullCheck(L_4);
		double L_5 = L_4->get_X_1();
		double L_6 = V_0;
		V_2 = ((double)il2cpp_codegen_subtract((double)L_5, (double)L_6));
		// double ady = pa.Y - pdy;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_7 = ___pa0;
		NullCheck(L_7);
		double L_8 = L_7->get_Y_2();
		double L_9 = V_1;
		V_3 = ((double)il2cpp_codegen_subtract((double)L_8, (double)L_9));
		// double bdx = pb.X - pdx;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_10 = ___pb1;
		NullCheck(L_10);
		double L_11 = L_10->get_X_1();
		double L_12 = V_0;
		V_4 = ((double)il2cpp_codegen_subtract((double)L_11, (double)L_12));
		// double bdy = pb.Y - pdy;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_13 = ___pb1;
		NullCheck(L_13);
		double L_14 = L_13->get_Y_2();
		double L_15 = V_1;
		V_5 = ((double)il2cpp_codegen_subtract((double)L_14, (double)L_15));
		// double adxbdy = adx * bdy;
		double L_16 = V_2;
		double L_17 = V_5;
		// double bdxady = bdx * ady;
		double L_18 = V_4;
		double L_19 = V_3;
		V_6 = ((double)il2cpp_codegen_multiply((double)L_18, (double)L_19));
		// double oabd = adxbdy - bdxady;
		double L_20 = V_6;
		V_7 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_16, (double)L_17)), (double)L_20));
		// if (oabd <= 0) return false;
		double L_21 = V_7;
		if ((!(((double)L_21) <= ((double)(0.0)))))
		{
			goto IL_0052;
		}
	}
	{
		// if (oabd <= 0) return false;
		return (bool)0;
	}

IL_0052:
	{
		// double cdx = pc.X - pdx;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_22 = ___pc2;
		NullCheck(L_22);
		double L_23 = L_22->get_X_1();
		double L_24 = V_0;
		V_8 = ((double)il2cpp_codegen_subtract((double)L_23, (double)L_24));
		// double cdy = pc.Y - pdy;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_25 = ___pc2;
		NullCheck(L_25);
		double L_26 = L_25->get_Y_2();
		double L_27 = V_1;
		V_9 = ((double)il2cpp_codegen_subtract((double)L_26, (double)L_27));
		// double cdxady = cdx * ady;
		double L_28 = V_8;
		double L_29 = V_3;
		// double adxcdy = adx * cdy;
		double L_30 = V_2;
		double L_31 = V_9;
		V_10 = ((double)il2cpp_codegen_multiply((double)L_30, (double)L_31));
		// double ocad = cdxady - adxcdy;
		double L_32 = V_10;
		V_11 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_28, (double)L_29)), (double)L_32));
		// if (ocad <= 0) return false;
		double L_33 = V_11;
		if ((!(((double)L_33) <= ((double)(0.0)))))
		{
			goto IL_0084;
		}
	}
	{
		// if (ocad <= 0) return false;
		return (bool)0;
	}

IL_0084:
	{
		// double bdxcdy = bdx * cdy;
		double L_34 = V_4;
		double L_35 = V_9;
		V_12 = ((double)il2cpp_codegen_multiply((double)L_34, (double)L_35));
		// double cdxbdy = cdx * bdy;
		double L_36 = V_8;
		double L_37 = V_5;
		V_13 = ((double)il2cpp_codegen_multiply((double)L_36, (double)L_37));
		// double alift = adx * adx + ady * ady;
		double L_38 = V_2;
		double L_39 = V_2;
		double L_40 = V_3;
		double L_41 = V_3;
		// double blift = bdx * bdx + bdy * bdy;
		double L_42 = V_4;
		double L_43 = V_4;
		double L_44 = V_5;
		double L_45 = V_5;
		V_14 = ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_42, (double)L_43)), (double)((double)il2cpp_codegen_multiply((double)L_44, (double)L_45))));
		// double clift = cdx * cdx + cdy * cdy;
		double L_46 = V_8;
		double L_47 = V_8;
		double L_48 = V_9;
		double L_49 = V_9;
		V_15 = ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_46, (double)L_47)), (double)((double)il2cpp_codegen_multiply((double)L_48, (double)L_49))));
		// double det = alift * (bdxcdy - cdxbdy) + blift * ocad + clift * oabd;
		double L_50 = V_12;
		double L_51 = V_13;
		double L_52 = V_14;
		double L_53 = V_11;
		double L_54 = V_15;
		double L_55 = V_7;
		// return det > 0;
		return (bool)((((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_38, (double)L_39)), (double)((double)il2cpp_codegen_multiply((double)L_40, (double)L_41)))), (double)((double)il2cpp_codegen_subtract((double)L_50, (double)L_51)))), (double)((double)il2cpp_codegen_multiply((double)L_52, (double)L_53)))), (double)((double)il2cpp_codegen_multiply((double)L_54, (double)L_55))))) > ((double)(0.0)))? 1 : 0);
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.TriangulationUtil::InScanArea(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriangulationUtil_InScanArea_m0410D0FD71FC8E22EB0D6B9128B72778A5AABC60 (TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___pa0, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___pb1, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___pc2, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___pd3, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	{
		// double pdx = pd.X;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_0 = ___pd3;
		NullCheck(L_0);
		double L_1 = L_0->get_X_1();
		V_0 = L_1;
		// double pdy = pd.Y;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_2 = ___pd3;
		NullCheck(L_2);
		double L_3 = L_2->get_Y_2();
		V_1 = L_3;
		// double adx = pa.X - pdx;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_4 = ___pa0;
		NullCheck(L_4);
		double L_5 = L_4->get_X_1();
		double L_6 = V_0;
		V_2 = ((double)il2cpp_codegen_subtract((double)L_5, (double)L_6));
		// double ady = pa.Y - pdy;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_7 = ___pa0;
		NullCheck(L_7);
		double L_8 = L_7->get_Y_2();
		double L_9 = V_1;
		V_3 = ((double)il2cpp_codegen_subtract((double)L_8, (double)L_9));
		// double bdx = pb.X - pdx;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_10 = ___pb1;
		NullCheck(L_10);
		double L_11 = L_10->get_X_1();
		double L_12 = V_0;
		V_4 = ((double)il2cpp_codegen_subtract((double)L_11, (double)L_12));
		// double bdy = pb.Y - pdy;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_13 = ___pb1;
		NullCheck(L_13);
		double L_14 = L_13->get_Y_2();
		double L_15 = V_1;
		V_5 = ((double)il2cpp_codegen_subtract((double)L_14, (double)L_15));
		// double adxbdy = adx * bdy;
		double L_16 = V_2;
		double L_17 = V_5;
		// double bdxady = bdx * ady;
		double L_18 = V_4;
		double L_19 = V_3;
		V_6 = ((double)il2cpp_codegen_multiply((double)L_18, (double)L_19));
		// double oabd = adxbdy - bdxady;
		double L_20 = V_6;
		// if (oabd <= 0) {
		if ((!(((double)((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_16, (double)L_17)), (double)L_20))) <= ((double)(0.0)))))
		{
			goto IL_004e;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_004e:
	{
		// double cdx = pc.X - pdx;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_21 = ___pc2;
		NullCheck(L_21);
		double L_22 = L_21->get_X_1();
		double L_23 = V_0;
		// double cdy = pc.Y - pdy;
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_24 = ___pc2;
		NullCheck(L_24);
		double L_25 = L_24->get_Y_2();
		double L_26 = V_1;
		V_7 = ((double)il2cpp_codegen_subtract((double)L_25, (double)L_26));
		// double cdxady = cdx * ady;
		double L_27 = V_3;
		// double adxcdy = adx * cdy;
		double L_28 = V_2;
		double L_29 = V_7;
		V_8 = ((double)il2cpp_codegen_multiply((double)L_28, (double)L_29));
		// double ocad = cdxady - adxcdy;
		double L_30 = V_8;
		// if (ocad <= 0) {
		if ((!(((double)((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_22, (double)L_23)), (double)L_27)), (double)L_30))) <= ((double)(0.0)))))
		{
			goto IL_0078;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0078:
	{
		// return true;
		return (bool)1;
	}
}
// UnityEngine.ProBuilder.Poly2Tri.Orientation UnityEngine.ProBuilder.Poly2Tri.TriangulationUtil::Orient2d(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint,UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TriangulationUtil_Orient2d_m2CDE17B5E70FD361C8BA5DF3764136DC172C5996 (TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___pa0, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___pb1, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___pc2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	{
		// double detleft = (pa.X - pc.X) * (pb.Y - pc.Y);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_0 = ___pa0;
		NullCheck(L_0);
		double L_1 = L_0->get_X_1();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_2 = ___pc2;
		NullCheck(L_2);
		double L_3 = L_2->get_X_1();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_4 = ___pb1;
		NullCheck(L_4);
		double L_5 = L_4->get_Y_2();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_6 = ___pc2;
		NullCheck(L_6);
		double L_7 = L_6->get_Y_2();
		// double detright = (pa.Y - pc.Y) * (pb.X - pc.X);
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_8 = ___pa0;
		NullCheck(L_8);
		double L_9 = L_8->get_Y_2();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_10 = ___pc2;
		NullCheck(L_10);
		double L_11 = L_10->get_Y_2();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_12 = ___pb1;
		NullCheck(L_12);
		double L_13 = L_12->get_X_1();
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_14 = ___pc2;
		NullCheck(L_14);
		double L_15 = L_14->get_X_1();
		V_0 = ((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_9, (double)L_11)), (double)((double)il2cpp_codegen_subtract((double)L_13, (double)L_15))));
		// double val = detleft - detright;
		double L_16 = V_0;
		V_1 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)L_1, (double)L_3)), (double)((double)il2cpp_codegen_subtract((double)L_5, (double)L_7)))), (double)L_16));
		// if (val > -EPSILON && val < EPSILON) {
		double L_17 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		double L_18 = ((TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_StaticFields*)il2cpp_codegen_static_fields_for(TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var))->get_EPSILON_0();
		if ((!(((double)L_17) > ((double)((-L_18))))))
		{
			goto IL_004d;
		}
	}
	{
		double L_19 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		double L_20 = ((TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_StaticFields*)il2cpp_codegen_static_fields_for(TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var))->get_EPSILON_0();
		if ((!(((double)L_19) < ((double)L_20))))
		{
			goto IL_004d;
		}
	}
	{
		// return Orientation.Collinear;
		return (int32_t)(2);
	}

IL_004d:
	{
		// } else if (val > 0) {
		double L_21 = V_1;
		if ((!(((double)L_21) > ((double)(0.0)))))
		{
			goto IL_005b;
		}
	}
	{
		// return Orientation.CCW;
		return (int32_t)(1);
	}

IL_005b:
	{
		// return Orientation.CW;
		return (int32_t)(0);
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.TriangulationUtil::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangulationUtil__cctor_mE8A76BE1EBBCFDC156F5A38C209FC1E0B6FAFB2E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static double EPSILON = 1e-12;
		((TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_StaticFields*)il2cpp_codegen_static_fields_for(TriangulationUtil_t8A542845EA29341834BB83832E63BB0FBC92AAFC_il2cpp_TypeInfo_var))->set_EPSILON_0((9.9999999999999998E-13));
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
// System.Void UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/<Enumerate>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__10__ctor_m61B12FBBE681A532005BED0A0682870F1A238AF9 (U3CEnumerateU3Ed__10_tB632C8EC1E46E07540D45000AF54B403F3DD27F2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/<Enumerate>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__10_System_IDisposable_Dispose_mD207CD0D76702EDC38DCB11FAB7BE8EB0EAF1324 (U3CEnumerateU3Ed__10_tB632C8EC1E46E07540D45000AF54B403F3DD27F2 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/<Enumerate>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnumerateU3Ed__10_MoveNext_m13AEC803BB1DE8F5A36FF35600CC2771E6260AFE (U3CEnumerateU3Ed__10_tB632C8EC1E46E07540D45000AF54B403F3DD27F2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0040;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for ( int i=0 ; i<3 ; ++i ) yield return this[i];
		__this->set_U3CiU3E5__2_5(0);
		goto IL_0057;
	}

IL_0020:
	{
		// for ( int i=0 ; i<3 ; ++i ) yield return this[i];
		FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 * L_3 = __this->get_address_of_U3CU3E4__this_3();
		int32_t L_4 = __this->get_U3CiU3E5__2_5();
		bool L_5;
		L_5 = FixedBitArray3_get_Item_m8D1568A202E819BFCF3AEADA4CBF1661024202F9((FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4 *)L_3, L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0040:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for ( int i=0 ; i<3 ; ++i ) yield return this[i];
		int32_t L_6 = __this->get_U3CiU3E5__2_5();
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		int32_t L_7 = V_1;
		__this->set_U3CiU3E5__2_5(L_7);
	}

IL_0057:
	{
		// for ( int i=0 ; i<3 ; ++i ) yield return this[i];
		int32_t L_8 = __this->get_U3CiU3E5__2_5();
		if ((((int32_t)L_8) < ((int32_t)3)))
		{
			goto IL_0020;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Boolean UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/<Enumerate>d__10::System.Collections.Generic.IEnumerator<System.Boolean>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnumerateU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_BooleanU3E_get_Current_m94517DE906E39783A7AD7280A32A0363059110C3 (U3CEnumerateU3Ed__10_tB632C8EC1E46E07540D45000AF54B403F3DD27F2 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/<Enumerate>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnumerateU3Ed__10_System_Collections_IEnumerator_Reset_m0C9395A5CC3BBCB0C514290EF0655A19B4BA30E9 (U3CEnumerateU3Ed__10_tB632C8EC1E46E07540D45000AF54B403F3DD27F2 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEnumerateU3Ed__10_System_Collections_IEnumerator_Reset_m0C9395A5CC3BBCB0C514290EF0655A19B4BA30E9_RuntimeMethod_var)));
	}
}
// System.Object UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/<Enumerate>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CEnumerateU3Ed__10_System_Collections_IEnumerator_get_Current_m003840F6EC82635DA8EE0BE820E235FEA2FF53EB (U3CEnumerateU3Ed__10_tB632C8EC1E46E07540D45000AF54B403F3DD27F2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_U3CU3E2__current_1();
		bool L_1 = L_0;
		RuntimeObject * L_2 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Boolean> UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/<Enumerate>d__10::System.Collections.Generic.IEnumerable<System.Boolean>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__10_System_Collections_Generic_IEnumerableU3CSystem_BooleanU3E_GetEnumerator_mDAC26B322938C93936A58D36FD8238A262428A8B (U3CEnumerateU3Ed__10_tB632C8EC1E46E07540D45000AF54B403F3DD27F2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEnumerateU3Ed__10_tB632C8EC1E46E07540D45000AF54B403F3DD27F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CEnumerateU3Ed__10_tB632C8EC1E46E07540D45000AF54B403F3DD27F2 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CEnumerateU3Ed__10_tB632C8EC1E46E07540D45000AF54B403F3DD27F2 * L_3 = (U3CEnumerateU3Ed__10_tB632C8EC1E46E07540D45000AF54B403F3DD27F2 *)il2cpp_codegen_object_new(U3CEnumerateU3Ed__10_tB632C8EC1E46E07540D45000AF54B403F3DD27F2_il2cpp_TypeInfo_var);
		U3CEnumerateU3Ed__10__ctor_m61B12FBBE681A532005BED0A0682870F1A238AF9(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CEnumerateU3Ed__10_tB632C8EC1E46E07540D45000AF54B403F3DD27F2 * L_4 = V_0;
		FixedBitArray3_tEED315B1247810B1D858361D82C9A250237AF9C4  L_5 = __this->get_U3CU3E3__U3CU3E4__this_4();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
		U3CEnumerateU3Ed__10_tB632C8EC1E46E07540D45000AF54B403F3DD27F2 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/<Enumerate>d__10::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnumerateU3Ed__10_System_Collections_IEnumerable_GetEnumerator_m5E0A137DC5D7FE8E60DD80BCD67C464195C195A3 (U3CEnumerateU3Ed__10_tB632C8EC1E46E07540D45000AF54B403F3DD27F2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CEnumerateU3Ed__10_System_Collections_Generic_IEnumerableU3CSystem_BooleanU3E_GetEnumerator_mDAC26B322938C93936A58D36FD8238A262428A8B(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * AdvancingFront_FindSearchNode_m99E2AB5B7019507B236DD0974913948D3FA7615D_inline (AdvancingFront_tC8D4F8419CB6A1069306F32C2D55338CB9FD96E5 * __this, double ___x0, const RuntimeMethod* method)
{
	{
		// return Search;
		AdvancingFrontNode_t57BBD4E5BE88ED76FDB3889DA5A304EDC9728C70 * L_0 = __this->get_Search_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TriangulationContext_get_TriangulationMode_mEC24ABA5BBC324647459584EB532096611657E7F_inline (TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * __this, const RuntimeMethod* method)
{
	{
		// public TriangulationMode TriangulationMode { get; protected set; }
		int32_t L_0 = __this->get_U3CTriangulationModeU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t4C92CD4575EFD7FEC3CBE8B7B36CE69C2466C90D * TriangulationPoint_get_Edges_m05131177AD065973F26F9ED35B2BBA500925ACAD_inline (TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * __this, const RuntimeMethod* method)
{
	{
		// public List<DTSweepConstraint> Edges { get; private set; }
		List_1_t4C92CD4575EFD7FEC3CBE8B7B36CE69C2466C90D * L_0 = __this->get_U3CEdgesU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TriangulationContext_get_IsDebugEnabled_mB588E97116825F0BF8B424AA329DA89394CA7B4B_inline (TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * __this, const RuntimeMethod* method)
{
	{
		// public virtual bool IsDebugEnabled { get; protected set; }
		bool L_0 = __this->get_U3CIsDebugEnabledU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DelaunayTriangle_get_IsInterior_m4CD9DD161937111148252D31D6B54BED24C786AD_inline (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, const RuntimeMethod* method)
{
	{
		// public bool IsInterior { get; set; }
		bool L_0 = __this->get_U3CIsInteriorU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DelaunayTriangle_set_IsInterior_m0597F66983E07892CB01C418704B985223723C6F_inline (DelaunayTriangle_t57085D56FD31FE5DD504F60FB3836D9C98E7A46A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsInterior { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CIsInteriorU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TriangulationContext_get_Triangulatable_mEEA9131F5A5B1B07B03F883D36BBA6971F59E54C_inline (TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * __this, const RuntimeMethod* method)
{
	{
		// public Triangulatable Triangulatable { get; private set; }
		RuntimeObject* L_0 = __this->get_U3CTriangulatableU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * DTSweepContext_get_Tail_mA33F0BE5B349C0D50FADA8195F60C45B8C4CD588_inline (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * __this, const RuntimeMethod* method)
{
	{
		// public TriangulationPoint Tail { get; set; }
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_0 = __this->get_U3CTailU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * DTSweepContext_get_Head_mA11E321587EF7EA818C12222EE3E25F1B05A49BB_inline (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * __this, const RuntimeMethod* method)
{
	{
		// public TriangulationPoint Head { get; set; }
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_0 = __this->get_U3CHeadU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DTSweepContext_set_Head_mFAF735C4137345C84587C4BF2C32E4E584847C9E_inline (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___value0, const RuntimeMethod* method)
{
	{
		// public TriangulationPoint Head { get; set; }
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_0 = ___value0;
		__this->set_U3CHeadU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DTSweepContext_set_Tail_m6FFFE304B826B407005CC262435E36A21F8BC77B_inline (DTSweepContext_t70B28F0415B2910D78D35F1A55499A3DD7C9EDA6 * __this, TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * ___value0, const RuntimeMethod* method)
{
	{
		// public TriangulationPoint Tail { get; set; }
		TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * L_0 = ___value0;
		__this->set_U3CTailU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointSet_set_Points_mE9E79785A3BC1645B2DFF463BFA436584219ED14_inline (PointSet_t28416B695BA46DA0157C11A570D5871D41DCBC18 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public IList<TriangulationPoint> Points { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CPointsU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PointSet_get_Triangles_m7D2051C22E3A59F5F0FB0326797A481E1B1AE51B_inline (PointSet_t28416B695BA46DA0157C11A570D5871D41DCBC18 * __this, const RuntimeMethod* method)
{
	{
		// public IList<DelaunayTriangle> Triangles { get; private set; }
		RuntimeObject* L_0 = __this->get_U3CTrianglesU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PointSet_get_Points_m666716840BC6FBD67904828D5EB2A8A1A2026878_inline (PointSet_t28416B695BA46DA0157C11A570D5871D41DCBC18 * __this, const RuntimeMethod* method)
{
	{
		// public IList<TriangulationPoint> Points { get; private set; }
		RuntimeObject* L_0 = __this->get_U3CPointsU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointSet_set_Triangles_mA6863D1F11ABB70D1914A26ACA4E102E45DDF4CB_inline (PointSet_t28416B695BA46DA0157C11A570D5871D41DCBC18 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public IList<DelaunayTriangle> Triangles { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CTrianglesU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TriangulationContext_get_StepCount_m3492A95A6CEF01FF2EC47AD2615F4C1172EE7BA8_inline (TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * __this, const RuntimeMethod* method)
{
	{
		// public int StepCount { get; private set; }
		int32_t L_0 = __this->get_U3CStepCountU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TriangulationContext_set_StepCount_m998A18536E32A116A5403015AB628BBB1FFD208D_inline (TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int StepCount { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CStepCountU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TriangulationContext_set_Triangulatable_m18792811D1A0CAF4964E29C808695B9F345FE7A1_inline (TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public Triangulatable Triangulatable { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CTriangulatableU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TriangulationContext_set_TriangulationMode_mD02349A0A30C62CA151D4D1B198C3FF672CE9F34_inline (TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TriangulationMode TriangulationMode { get; protected set; }
		int32_t L_0 = ___value0;
		__this->set_U3CTriangulationModeU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TriangulationDebugContext_tB2690A971C0344C60D9E4DEBC8819ADE2D29F397 * TriangulationContext_get_DebugContext_m8A21EA50372C69937197D9A9DDB7B3C83A7EC7FA_inline (TriangulationContext_t9F04ADAF6D1EB8CB00AA40500B16303A1813293B * __this, const RuntimeMethod* method)
{
	{
		// public TriangulationDebugContext DebugContext { get; protected set; }
		TriangulationDebugContext_tB2690A971C0344C60D9E4DEBC8819ADE2D29F397 * L_0 = __this->get_U3CDebugContextU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TriangulationPoint_set_Edges_m5FBC473066E33A2155763E170A3A62A50CCC608B_inline (TriangulationPoint_t702B560662585C6DFE9671705EF0C2C2B9FC3B10 * __this, List_1_t4C92CD4575EFD7FEC3CBE8B7B36CE69C2466C90D * ___value0, const RuntimeMethod* method)
{
	{
		// public List<DTSweepConstraint> Edges { get; private set; }
		List_1_t4C92CD4575EFD7FEC3CBE8B7B36CE69C2466C90D * L_0 = ___value0;
		__this->set_U3CEdgesU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
