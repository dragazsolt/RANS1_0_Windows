/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../RANS-32bit/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[180];
    char stringdata0[4677];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 15), // "SendNodeTabData"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 3), // "NID"
QT_MOC_LITERAL(4, 32, 2), // "x0"
QT_MOC_LITERAL(5, 35, 2), // "y0"
QT_MOC_LITERAL(6, 38, 2), // "z0"
QT_MOC_LITERAL(7, 41, 6), // "create"
QT_MOC_LITERAL(8, 48, 22), // "on_ImportSTL_triggered"
QT_MOC_LITERAL(9, 71, 29), // "on_ClearHistoryButton_clicked"
QT_MOC_LITERAL(10, 101, 29), // "on_actionFront_View_triggered"
QT_MOC_LITERAL(11, 131, 27), // "on_actionTop_View_triggered"
QT_MOC_LITERAL(12, 159, 28), // "on_actionLeft_View_triggered"
QT_MOC_LITERAL(13, 188, 30), // "on_actionBottom_View_triggered"
QT_MOC_LITERAL(14, 219, 29), // "on_actionRight_View_triggered"
QT_MOC_LITERAL(15, 249, 31), // "on_actionRight_View_2_triggered"
QT_MOC_LITERAL(16, 281, 28), // "on_actionWireFrame_triggered"
QT_MOC_LITERAL(17, 310, 29), // "on_actionShade_Mesh_triggered"
QT_MOC_LITERAL(18, 340, 24), // "on_actionSolid_triggered"
QT_MOC_LITERAL(19, 365, 30), // "on_actionSwap_Buffer_triggered"
QT_MOC_LITERAL(20, 396, 30), // "on_actionSelect_Part_triggered"
QT_MOC_LITERAL(21, 427, 17), // "GetSelectedPartID"
QT_MOC_LITERAL(22, 445, 2), // "ID"
QT_MOC_LITERAL(23, 448, 13), // "GetHidePartID"
QT_MOC_LITERAL(24, 462, 17), // "GetSelectedNodeID"
QT_MOC_LITERAL(25, 480, 22), // "GetOrigoby3NodesVector"
QT_MOC_LITERAL(26, 503, 1), // "x"
QT_MOC_LITERAL(27, 505, 1), // "y"
QT_MOC_LITERAL(28, 507, 1), // "z"
QT_MOC_LITERAL(29, 509, 18), // "DeleteSelectedPart"
QT_MOC_LITERAL(30, 528, 28), // "on_actionHide_Part_triggered"
QT_MOC_LITERAL(31, 557, 28), // "on_actionBy_Coords_triggered"
QT_MOC_LITERAL(32, 586, 27), // "on_NODE_Show_Button_clicked"
QT_MOC_LITERAL(33, 614, 22), // "on_SaveNodeTab_clicked"
QT_MOC_LITERAL(34, 637, 24), // "on_CancelNodeTab_clicked"
QT_MOC_LITERAL(35, 662, 23), // "on_CloseNodeTab_clicked"
QT_MOC_LITERAL(36, 686, 23), // "StatusBarActivePartName"
QT_MOC_LITERAL(37, 710, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(38, 727, 3), // "itm"
QT_MOC_LITERAL(39, 731, 3), // "col"
QT_MOC_LITERAL(40, 735, 23), // "GetVolumeRefinementData"
QT_MOC_LITERAL(41, 759, 16), // "VOLUMEREFINEMENT"
QT_MOC_LITERAL(42, 776, 21), // "GetPartTreeRefinement"
QT_MOC_LITERAL(43, 798, 3), // "PID"
QT_MOC_LITERAL(44, 802, 13), // "NumberofLayer"
QT_MOC_LITERAL(45, 816, 13), // "MinRefinement"
QT_MOC_LITERAL(46, 830, 13), // "MaxRefinement"
QT_MOC_LITERAL(47, 844, 36), // "on_actionRefinement_Volume_tr..."
QT_MOC_LITERAL(48, 881, 28), // "on_Tunnel_ShowButton_clicked"
QT_MOC_LITERAL(49, 910, 26), // "on_Tunnel_SAVE_TAB_clicked"
QT_MOC_LITERAL(50, 937, 27), // "on_Tunnel_CLEAR_TAB_clicked"
QT_MOC_LITERAL(51, 965, 27), // "on_Tunnel_CLOSE_TAB_clicked"
QT_MOC_LITERAL(52, 993, 36), // "on_actionRunning_BlockMesh_tr..."
QT_MOC_LITERAL(53, 1030, 33), // "on_SelectProjectDirectory_cli..."
QT_MOC_LITERAL(54, 1064, 27), // "on_CreateNew_Button_clicked"
QT_MOC_LITERAL(55, 1092, 29), // "on_CloseNewTab_Button_clicked"
QT_MOC_LITERAL(56, 1122, 25), // "on_Open_Project_triggered"
QT_MOC_LITERAL(57, 1148, 23), // "on_NewProject_triggered"
QT_MOC_LITERAL(58, 1172, 29), // "on_actionWindTunnel_triggered"
QT_MOC_LITERAL(59, 1202, 34), // "on_actionEnvironment_Set_trig..."
QT_MOC_LITERAL(60, 1237, 31), // "on_MovePart_Show_Button_clicked"
QT_MOC_LITERAL(61, 1269, 37), // "on_MovePart_SelectPart_Button..."
QT_MOC_LITERAL(62, 1307, 32), // "on_MovePart_Close_Button_clicked"
QT_MOC_LITERAL(63, 1340, 28), // "on_actionMove_Part_triggered"
QT_MOC_LITERAL(64, 1369, 35), // "on_actionChange_Part_Name_tri..."
QT_MOC_LITERAL(65, 1405, 36), // "on_actionChange_Part_Color_tr..."
QT_MOC_LITERAL(66, 1442, 33), // "on_actionShow_BlockMesh_trigg..."
QT_MOC_LITERAL(67, 1476, 33), // "on_actionHide_BlockMesh_trigg..."
QT_MOC_LITERAL(68, 1510, 34), // "on_actionClear_BlockMesh_trig..."
QT_MOC_LITERAL(69, 1545, 37), // "on_actionRefinement_Surface_t..."
QT_MOC_LITERAL(70, 1583, 42), // "on_actionSet_SnappyHexParamet..."
QT_MOC_LITERAL(71, 1626, 34), // "on_actionSnappyHexMesher_trig..."
QT_MOC_LITERAL(72, 1661, 34), // "on_actionNumerical_Setup_trig..."
QT_MOC_LITERAL(73, 1696, 38), // "on_actionWrite_SnappyHexFile_..."
QT_MOC_LITERAL(74, 1735, 28), // "on_actionDecompose_triggered"
QT_MOC_LITERAL(75, 1764, 40), // "on_actionExtract_Feature_Edge..."
QT_MOC_LITERAL(76, 1805, 36), // "on_actionShow_Future_Edges_tr..."
QT_MOC_LITERAL(77, 1842, 42), // "on_actionRefinement_Feature_E..."
QT_MOC_LITERAL(78, 1885, 27), // "on_actionRenumber_triggered"
QT_MOC_LITERAL(79, 1913, 37), // "on_actionCheck_Mesh_Quality_t..."
QT_MOC_LITERAL(80, 1951, 37), // "on_actionCheck_Surface_Mesh_t..."
QT_MOC_LITERAL(81, 1989, 22), // "on_ImportObj_triggered"
QT_MOC_LITERAL(82, 2012, 37), // "on_actionBoundary_Condition_t..."
QT_MOC_LITERAL(83, 2050, 18), // "SetTurbulenceModel"
QT_MOC_LITERAL(84, 2069, 15), // "TurbulenceModel"
QT_MOC_LITERAL(85, 2085, 8), // "solverid"
QT_MOC_LITERAL(86, 2094, 13), // "potentialfoam"
QT_MOC_LITERAL(87, 2108, 18), // "applyboundarylayer"
QT_MOC_LITERAL(88, 2127, 6), // "blayer"
QT_MOC_LITERAL(89, 2134, 19), // "TurbulenceIntensity"
QT_MOC_LITERAL(90, 2154, 9), // "Ch_Length"
QT_MOC_LITERAL(91, 2164, 9), // "CONDITION"
QT_MOC_LITERAL(92, 2174, 5), // "INLET"
QT_MOC_LITERAL(93, 2180, 6), // "GROUND"
QT_MOC_LITERAL(94, 2187, 7), // "TOPWALL"
QT_MOC_LITERAL(95, 2195, 8), // "LEFTWALL"
QT_MOC_LITERAL(96, 2204, 9), // "RIGHTWALL"
QT_MOC_LITERAL(97, 2214, 14), // "QList<QString>"
QT_MOC_LITERAL(98, 2229, 11), // "staticwalls"
QT_MOC_LITERAL(99, 2241, 19), // "QList<ROTATIONWALL>"
QT_MOC_LITERAL(100, 2261, 8), // "rotwalls"
QT_MOC_LITERAL(101, 2270, 37), // "on_actionReconstructParMesh_t..."
QT_MOC_LITERAL(102, 2308, 26), // "on_SAVE_ForceCoeff_clicked"
QT_MOC_LITERAL(103, 2335, 35), // "on_actionForce_Parameters_tri..."
QT_MOC_LITERAL(104, 2371, 27), // "on_CLOSE_ForceCoeff_clicked"
QT_MOC_LITERAL(105, 2399, 30), // "on_actionControlDict_triggered"
QT_MOC_LITERAL(106, 2430, 26), // "on_Save_ContolDict_clicked"
QT_MOC_LITERAL(107, 2457, 28), // "on_Close_ControlDict_clicked"
QT_MOC_LITERAL(108, 2486, 34), // "on_AddProbeLocation_Button_cl..."
QT_MOC_LITERAL(109, 2521, 25), // "on_actionProbes_triggered"
QT_MOC_LITERAL(110, 2547, 37), // "on_RemoveProbeLocation_Button..."
QT_MOC_LITERAL(111, 2585, 35), // "on_ShowProbeLocation_Button_c..."
QT_MOC_LITERAL(112, 2621, 24), // "on_Save_ProbeTab_clicked"
QT_MOC_LITERAL(113, 2646, 26), // "on_Close_Probe_Tab_clicked"
QT_MOC_LITERAL(114, 2673, 28), // "on_actionSubmitJob_triggered"
QT_MOC_LITERAL(115, 2702, 27), // "on_actionParaView_triggered"
QT_MOC_LITERAL(116, 2730, 32), // "on_actionResidual_Plot_triggered"
QT_MOC_LITERAL(117, 2763, 26), // "on_ImportNastran_triggered"
QT_MOC_LITERAL(118, 2790, 26), // "on_SaveMaterialTab_clicked"
QT_MOC_LITERAL(119, 2817, 27), // "on_actionMaterial_triggered"
QT_MOC_LITERAL(120, 2845, 26), // "on_QuitMaterialTab_clicked"
QT_MOC_LITERAL(121, 2872, 30), // "on_PartSetColor_Button_clicked"
QT_MOC_LITERAL(122, 2903, 29), // "on_SavePartSet_Button_clicked"
QT_MOC_LITERAL(123, 2933, 29), // "on_QuitPartSet_Button_clicked"
QT_MOC_LITERAL(124, 2963, 30), // "on_actionCreate_Part_triggered"
QT_MOC_LITERAL(125, 2994, 33), // "on_actionCOG_by_3_Nodes_trigg..."
QT_MOC_LITERAL(126, 3028, 25), // "on_Save_Project_triggered"
QT_MOC_LITERAL(127, 3054, 26), // "on_SelectOrigo_BTN_clicked"
QT_MOC_LITERAL(128, 3081, 30), // "on_ShowCoordSystem_BTN_clicked"
QT_MOC_LITERAL(129, 3112, 31), // "on_CoordSystem_Save_BTN_clicked"
QT_MOC_LITERAL(130, 3144, 32), // "on_CoordSystem_Close_Tab_clicked"
QT_MOC_LITERAL(131, 3177, 32), // "on_By3NodesCenter_Button_clicked"
QT_MOC_LITERAL(132, 3210, 30), // "on_actionCoordSystem_triggered"
QT_MOC_LITERAL(133, 3241, 37), // "on_actionHide_Feature_Edges_t..."
QT_MOC_LITERAL(134, 3279, 31), // "on_actionRefineMesh_2_triggered"
QT_MOC_LITERAL(135, 3311, 36), // "on_Close_Refinement_Cell_Ref_..."
QT_MOC_LITERAL(136, 3348, 35), // "on_Show_Refinement_Cell_Ref_c..."
QT_MOC_LITERAL(137, 3384, 35), // "on_Save_Refinement_Cell_Ref_c..."
QT_MOC_LITERAL(138, 3420, 27), // "on_ToposetColor_Set_clicked"
QT_MOC_LITERAL(139, 3448, 27), // "on_QuitMainWindow_triggered"
QT_MOC_LITERAL(140, 3476, 27), // "on_yplusCalc_Button_clicked"
QT_MOC_LITERAL(141, 3504, 31), // "on_actionY_Calculator_triggered"
QT_MOC_LITERAL(142, 3536, 30), // "on_YPlusTabExit_Button_clicked"
QT_MOC_LITERAL(143, 3567, 40), // "on_RefineWallEdgeRatioAdd_But..."
QT_MOC_LITERAL(144, 3608, 40), // "on_RefineWallEdgeRatioRmv_But..."
QT_MOC_LITERAL(145, 3649, 36), // "on_actionRefineWallLayer_2_tr..."
QT_MOC_LITERAL(146, 3686, 27), // "LoadPartWallLayerRefinement"
QT_MOC_LITERAL(147, 3714, 37), // "on_RefineWallLayerSaveRun_But..."
QT_MOC_LITERAL(148, 3752, 36), // "on_RefineWallLayer_Close_But_..."
QT_MOC_LITERAL(149, 3789, 34), // "on_RefineWallLayerSave_but_cl..."
QT_MOC_LITERAL(150, 3824, 27), // "on_actionClipView_triggered"
QT_MOC_LITERAL(151, 3852, 24), // "on_actionYPlus_triggered"
QT_MOC_LITERAL(152, 3877, 30), // "on_actionDelete_Part_triggered"
QT_MOC_LITERAL(153, 3908, 39), // "on_actionReplace_Part_By_Part..."
QT_MOC_LITERAL(154, 3948, 20), // "on_NACA_SHOW_clicked"
QT_MOC_LITERAL(155, 3969, 20), // "on_NACA_SAVE_clicked"
QT_MOC_LITERAL(156, 3990, 21), // "on_NACA_CLOSE_clicked"
QT_MOC_LITERAL(157, 4012, 28), // "on_actionNaca_Duct_triggered"
QT_MOC_LITERAL(158, 4041, 37), // "on_ForceCoeff_ShowCOFR_Button..."
QT_MOC_LITERAL(159, 4079, 21), // "COGInfoofSelectedPart"
QT_MOC_LITERAL(160, 4101, 34), // "on_Plane_Orientation_X_But_cl..."
QT_MOC_LITERAL(161, 4136, 34), // "on_Plane_Orientation_Y_But_cl..."
QT_MOC_LITERAL(162, 4171, 34), // "on_Plane_Orientation_Z_But_cl..."
QT_MOC_LITERAL(163, 4206, 25), // "on_Plane_Show_But_clicked"
QT_MOC_LITERAL(164, 4232, 25), // "on_Plane_Save_But_clicked"
QT_MOC_LITERAL(165, 4258, 26), // "on_Plane_Close_But_clicked"
QT_MOC_LITERAL(166, 4285, 30), // "on_actionCreatePlane_triggered"
QT_MOC_LITERAL(167, 4316, 24), // "GetActualIterationNumber"
QT_MOC_LITERAL(168, 4341, 26), // "on_actionTetMesh_triggered"
QT_MOC_LITERAL(169, 4368, 20), // "on_Save_As_triggered"
QT_MOC_LITERAL(170, 4389, 29), // "on_actionMovingBelt_triggered"
QT_MOC_LITERAL(171, 4419, 32), // "on_actionMBTopoSetDict_triggered"
QT_MOC_LITERAL(172, 4452, 32), // "on_actionMBCreatePatch_triggered"
QT_MOC_LITERAL(173, 4485, 31), // "on_RH_Show_F_MasterNode_clicked"
QT_MOC_LITERAL(174, 4517, 31), // "on_RH_Show_R_MasterNode_clicked"
QT_MOC_LITERAL(175, 4549, 25), // "on_RH_Set_Visible_clicked"
QT_MOC_LITERAL(176, 4575, 21), // "on_RH_Set_All_clicked"
QT_MOC_LITERAL(177, 4597, 19), // "on_RH_Close_clicked"
QT_MOC_LITERAL(178, 4617, 30), // "on_actionRide_Height_triggered"
QT_MOC_LITERAL(179, 4648, 28) // "on_actionSTLexport_triggered"

    },
    "MainWindow\0SendNodeTabData\0\0NID\0x0\0"
    "y0\0z0\0create\0on_ImportSTL_triggered\0"
    "on_ClearHistoryButton_clicked\0"
    "on_actionFront_View_triggered\0"
    "on_actionTop_View_triggered\0"
    "on_actionLeft_View_triggered\0"
    "on_actionBottom_View_triggered\0"
    "on_actionRight_View_triggered\0"
    "on_actionRight_View_2_triggered\0"
    "on_actionWireFrame_triggered\0"
    "on_actionShade_Mesh_triggered\0"
    "on_actionSolid_triggered\0"
    "on_actionSwap_Buffer_triggered\0"
    "on_actionSelect_Part_triggered\0"
    "GetSelectedPartID\0ID\0GetHidePartID\0"
    "GetSelectedNodeID\0GetOrigoby3NodesVector\0"
    "x\0y\0z\0DeleteSelectedPart\0"
    "on_actionHide_Part_triggered\0"
    "on_actionBy_Coords_triggered\0"
    "on_NODE_Show_Button_clicked\0"
    "on_SaveNodeTab_clicked\0on_CancelNodeTab_clicked\0"
    "on_CloseNodeTab_clicked\0StatusBarActivePartName\0"
    "QTreeWidgetItem*\0itm\0col\0"
    "GetVolumeRefinementData\0VOLUMEREFINEMENT\0"
    "GetPartTreeRefinement\0PID\0NumberofLayer\0"
    "MinRefinement\0MaxRefinement\0"
    "on_actionRefinement_Volume_triggered\0"
    "on_Tunnel_ShowButton_clicked\0"
    "on_Tunnel_SAVE_TAB_clicked\0"
    "on_Tunnel_CLEAR_TAB_clicked\0"
    "on_Tunnel_CLOSE_TAB_clicked\0"
    "on_actionRunning_BlockMesh_triggered\0"
    "on_SelectProjectDirectory_clicked\0"
    "on_CreateNew_Button_clicked\0"
    "on_CloseNewTab_Button_clicked\0"
    "on_Open_Project_triggered\0"
    "on_NewProject_triggered\0"
    "on_actionWindTunnel_triggered\0"
    "on_actionEnvironment_Set_triggered\0"
    "on_MovePart_Show_Button_clicked\0"
    "on_MovePart_SelectPart_Button_clicked\0"
    "on_MovePart_Close_Button_clicked\0"
    "on_actionMove_Part_triggered\0"
    "on_actionChange_Part_Name_triggered\0"
    "on_actionChange_Part_Color_triggered\0"
    "on_actionShow_BlockMesh_triggered\0"
    "on_actionHide_BlockMesh_triggered\0"
    "on_actionClear_BlockMesh_triggered\0"
    "on_actionRefinement_Surface_triggered\0"
    "on_actionSet_SnappyHexParameters_triggered\0"
    "on_actionSnappyHexMesher_triggered\0"
    "on_actionNumerical_Setup_triggered\0"
    "on_actionWrite_SnappyHexFile_triggered\0"
    "on_actionDecompose_triggered\0"
    "on_actionExtract_Feature_Edges_triggered\0"
    "on_actionShow_Future_Edges_triggered\0"
    "on_actionRefinement_Feature_Edge_triggered\0"
    "on_actionRenumber_triggered\0"
    "on_actionCheck_Mesh_Quality_triggered\0"
    "on_actionCheck_Surface_Mesh_triggered\0"
    "on_ImportObj_triggered\0"
    "on_actionBoundary_Condition_triggered\0"
    "SetTurbulenceModel\0TurbulenceModel\0"
    "solverid\0potentialfoam\0applyboundarylayer\0"
    "blayer\0TurbulenceIntensity\0Ch_Length\0"
    "CONDITION\0INLET\0GROUND\0TOPWALL\0LEFTWALL\0"
    "RIGHTWALL\0QList<QString>\0staticwalls\0"
    "QList<ROTATIONWALL>\0rotwalls\0"
    "on_actionReconstructParMesh_triggered\0"
    "on_SAVE_ForceCoeff_clicked\0"
    "on_actionForce_Parameters_triggered\0"
    "on_CLOSE_ForceCoeff_clicked\0"
    "on_actionControlDict_triggered\0"
    "on_Save_ContolDict_clicked\0"
    "on_Close_ControlDict_clicked\0"
    "on_AddProbeLocation_Button_clicked\0"
    "on_actionProbes_triggered\0"
    "on_RemoveProbeLocation_Button_clicked\0"
    "on_ShowProbeLocation_Button_clicked\0"
    "on_Save_ProbeTab_clicked\0"
    "on_Close_Probe_Tab_clicked\0"
    "on_actionSubmitJob_triggered\0"
    "on_actionParaView_triggered\0"
    "on_actionResidual_Plot_triggered\0"
    "on_ImportNastran_triggered\0"
    "on_SaveMaterialTab_clicked\0"
    "on_actionMaterial_triggered\0"
    "on_QuitMaterialTab_clicked\0"
    "on_PartSetColor_Button_clicked\0"
    "on_SavePartSet_Button_clicked\0"
    "on_QuitPartSet_Button_clicked\0"
    "on_actionCreate_Part_triggered\0"
    "on_actionCOG_by_3_Nodes_triggered\0"
    "on_Save_Project_triggered\0"
    "on_SelectOrigo_BTN_clicked\0"
    "on_ShowCoordSystem_BTN_clicked\0"
    "on_CoordSystem_Save_BTN_clicked\0"
    "on_CoordSystem_Close_Tab_clicked\0"
    "on_By3NodesCenter_Button_clicked\0"
    "on_actionCoordSystem_triggered\0"
    "on_actionHide_Feature_Edges_triggered\0"
    "on_actionRefineMesh_2_triggered\0"
    "on_Close_Refinement_Cell_Ref_clicked\0"
    "on_Show_Refinement_Cell_Ref_clicked\0"
    "on_Save_Refinement_Cell_Ref_clicked\0"
    "on_ToposetColor_Set_clicked\0"
    "on_QuitMainWindow_triggered\0"
    "on_yplusCalc_Button_clicked\0"
    "on_actionY_Calculator_triggered\0"
    "on_YPlusTabExit_Button_clicked\0"
    "on_RefineWallEdgeRatioAdd_Button_clicked\0"
    "on_RefineWallEdgeRatioRmv_Button_clicked\0"
    "on_actionRefineWallLayer_2_triggered\0"
    "LoadPartWallLayerRefinement\0"
    "on_RefineWallLayerSaveRun_But_clicked\0"
    "on_RefineWallLayer_Close_But_clicked\0"
    "on_RefineWallLayerSave_but_clicked\0"
    "on_actionClipView_triggered\0"
    "on_actionYPlus_triggered\0"
    "on_actionDelete_Part_triggered\0"
    "on_actionReplace_Part_By_Part_triggered\0"
    "on_NACA_SHOW_clicked\0on_NACA_SAVE_clicked\0"
    "on_NACA_CLOSE_clicked\0"
    "on_actionNaca_Duct_triggered\0"
    "on_ForceCoeff_ShowCOFR_Button_clicked\0"
    "COGInfoofSelectedPart\0"
    "on_Plane_Orientation_X_But_clicked\0"
    "on_Plane_Orientation_Y_But_clicked\0"
    "on_Plane_Orientation_Z_But_clicked\0"
    "on_Plane_Show_But_clicked\0"
    "on_Plane_Save_But_clicked\0"
    "on_Plane_Close_But_clicked\0"
    "on_actionCreatePlane_triggered\0"
    "GetActualIterationNumber\0"
    "on_actionTetMesh_triggered\0"
    "on_Save_As_triggered\0on_actionMovingBelt_triggered\0"
    "on_actionMBTopoSetDict_triggered\0"
    "on_actionMBCreatePatch_triggered\0"
    "on_RH_Show_F_MasterNode_clicked\0"
    "on_RH_Show_R_MasterNode_clicked\0"
    "on_RH_Set_Visible_clicked\0"
    "on_RH_Set_All_clicked\0on_RH_Close_clicked\0"
    "on_actionRide_Height_triggered\0"
    "on_actionSTLexport_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     144,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,  734,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,  745,    2, 0x08 /* Private */,
       9,    0,  746,    2, 0x08 /* Private */,
      10,    0,  747,    2, 0x08 /* Private */,
      11,    0,  748,    2, 0x08 /* Private */,
      12,    0,  749,    2, 0x08 /* Private */,
      13,    0,  750,    2, 0x08 /* Private */,
      14,    0,  751,    2, 0x08 /* Private */,
      15,    0,  752,    2, 0x08 /* Private */,
      16,    0,  753,    2, 0x08 /* Private */,
      17,    0,  754,    2, 0x08 /* Private */,
      18,    0,  755,    2, 0x08 /* Private */,
      19,    0,  756,    2, 0x08 /* Private */,
      20,    0,  757,    2, 0x08 /* Private */,
      21,    1,  758,    2, 0x08 /* Private */,
      23,    1,  761,    2, 0x08 /* Private */,
      24,    1,  764,    2, 0x08 /* Private */,
      25,    3,  767,    2, 0x08 /* Private */,
      29,    0,  774,    2, 0x08 /* Private */,
      30,    0,  775,    2, 0x08 /* Private */,
      31,    0,  776,    2, 0x08 /* Private */,
      32,    0,  777,    2, 0x08 /* Private */,
      33,    0,  778,    2, 0x08 /* Private */,
      34,    0,  779,    2, 0x08 /* Private */,
      35,    0,  780,    2, 0x08 /* Private */,
      36,    2,  781,    2, 0x08 /* Private */,
      40,    2,  786,    2, 0x08 /* Private */,
      42,    4,  791,    2, 0x08 /* Private */,
      47,    0,  800,    2, 0x08 /* Private */,
      48,    0,  801,    2, 0x08 /* Private */,
      49,    0,  802,    2, 0x08 /* Private */,
      50,    0,  803,    2, 0x08 /* Private */,
      51,    0,  804,    2, 0x08 /* Private */,
      52,    0,  805,    2, 0x08 /* Private */,
      53,    0,  806,    2, 0x08 /* Private */,
      54,    0,  807,    2, 0x08 /* Private */,
      55,    0,  808,    2, 0x08 /* Private */,
      56,    0,  809,    2, 0x08 /* Private */,
      57,    0,  810,    2, 0x08 /* Private */,
      58,    0,  811,    2, 0x08 /* Private */,
      59,    0,  812,    2, 0x08 /* Private */,
      60,    0,  813,    2, 0x08 /* Private */,
      61,    0,  814,    2, 0x08 /* Private */,
      62,    0,  815,    2, 0x08 /* Private */,
      63,    0,  816,    2, 0x08 /* Private */,
      64,    0,  817,    2, 0x08 /* Private */,
      65,    0,  818,    2, 0x08 /* Private */,
      66,    0,  819,    2, 0x08 /* Private */,
      67,    0,  820,    2, 0x08 /* Private */,
      68,    0,  821,    2, 0x08 /* Private */,
      69,    0,  822,    2, 0x08 /* Private */,
      70,    0,  823,    2, 0x08 /* Private */,
      71,    0,  824,    2, 0x08 /* Private */,
      72,    0,  825,    2, 0x08 /* Private */,
      73,    0,  826,    2, 0x08 /* Private */,
      74,    0,  827,    2, 0x08 /* Private */,
      75,    0,  828,    2, 0x08 /* Private */,
      76,    0,  829,    2, 0x08 /* Private */,
      77,    0,  830,    2, 0x08 /* Private */,
      78,    0,  831,    2, 0x08 /* Private */,
      79,    0,  832,    2, 0x08 /* Private */,
      80,    0,  833,    2, 0x08 /* Private */,
      81,    0,  834,    2, 0x08 /* Private */,
      82,    0,  835,    2, 0x08 /* Private */,
      83,   14,  836,    2, 0x08 /* Private */,
     101,    0,  865,    2, 0x08 /* Private */,
     102,    0,  866,    2, 0x08 /* Private */,
     103,    0,  867,    2, 0x08 /* Private */,
     104,    0,  868,    2, 0x08 /* Private */,
     105,    0,  869,    2, 0x08 /* Private */,
     106,    0,  870,    2, 0x08 /* Private */,
     107,    0,  871,    2, 0x08 /* Private */,
     108,    0,  872,    2, 0x08 /* Private */,
     109,    0,  873,    2, 0x08 /* Private */,
     110,    0,  874,    2, 0x08 /* Private */,
     111,    0,  875,    2, 0x08 /* Private */,
     112,    0,  876,    2, 0x08 /* Private */,
     113,    0,  877,    2, 0x08 /* Private */,
     114,    0,  878,    2, 0x08 /* Private */,
     115,    0,  879,    2, 0x08 /* Private */,
     116,    0,  880,    2, 0x08 /* Private */,
     117,    0,  881,    2, 0x08 /* Private */,
     118,    0,  882,    2, 0x08 /* Private */,
     119,    0,  883,    2, 0x08 /* Private */,
     120,    0,  884,    2, 0x08 /* Private */,
     121,    0,  885,    2, 0x08 /* Private */,
     122,    0,  886,    2, 0x08 /* Private */,
     123,    0,  887,    2, 0x08 /* Private */,
     124,    0,  888,    2, 0x08 /* Private */,
     125,    0,  889,    2, 0x08 /* Private */,
     126,    0,  890,    2, 0x08 /* Private */,
     127,    0,  891,    2, 0x08 /* Private */,
     128,    0,  892,    2, 0x08 /* Private */,
     129,    0,  893,    2, 0x08 /* Private */,
     130,    0,  894,    2, 0x08 /* Private */,
     131,    0,  895,    2, 0x08 /* Private */,
     132,    0,  896,    2, 0x08 /* Private */,
     133,    0,  897,    2, 0x08 /* Private */,
     134,    0,  898,    2, 0x08 /* Private */,
     135,    0,  899,    2, 0x08 /* Private */,
     136,    0,  900,    2, 0x08 /* Private */,
     137,    0,  901,    2, 0x08 /* Private */,
     138,    0,  902,    2, 0x08 /* Private */,
     139,    0,  903,    2, 0x08 /* Private */,
     140,    0,  904,    2, 0x08 /* Private */,
     141,    0,  905,    2, 0x08 /* Private */,
     142,    0,  906,    2, 0x08 /* Private */,
     143,    0,  907,    2, 0x08 /* Private */,
     144,    0,  908,    2, 0x08 /* Private */,
     145,    0,  909,    2, 0x08 /* Private */,
     146,    1,  910,    2, 0x08 /* Private */,
     147,    0,  913,    2, 0x08 /* Private */,
     148,    0,  914,    2, 0x08 /* Private */,
     149,    0,  915,    2, 0x08 /* Private */,
     150,    0,  916,    2, 0x08 /* Private */,
     151,    0,  917,    2, 0x08 /* Private */,
     152,    0,  918,    2, 0x08 /* Private */,
     153,    0,  919,    2, 0x08 /* Private */,
     154,    0,  920,    2, 0x08 /* Private */,
     155,    0,  921,    2, 0x08 /* Private */,
     156,    0,  922,    2, 0x08 /* Private */,
     157,    0,  923,    2, 0x08 /* Private */,
     158,    0,  924,    2, 0x08 /* Private */,
     159,    0,  925,    2, 0x08 /* Private */,
     160,    0,  926,    2, 0x08 /* Private */,
     161,    0,  927,    2, 0x08 /* Private */,
     162,    0,  928,    2, 0x08 /* Private */,
     163,    0,  929,    2, 0x08 /* Private */,
     164,    0,  930,    2, 0x08 /* Private */,
     165,    0,  931,    2, 0x08 /* Private */,
     166,    0,  932,    2, 0x08 /* Private */,
     167,    1,  933,    2, 0x08 /* Private */,
     168,    0,  936,    2, 0x08 /* Private */,
     169,    0,  937,    2, 0x08 /* Private */,
     170,    0,  938,    2, 0x08 /* Private */,
     171,    0,  939,    2, 0x08 /* Private */,
     172,    0,  940,    2, 0x08 /* Private */,
     173,    0,  941,    2, 0x08 /* Private */,
     174,    0,  942,    2, 0x08 /* Private */,
     175,    0,  943,    2, 0x08 /* Private */,
     176,    0,  944,    2, 0x08 /* Private */,
     177,    0,  945,    2, 0x08 /* Private */,
     178,    0,  946,    2, 0x08 /* Private */,
     179,    0,  947,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Bool,    3,    4,    5,    6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,   22,
    QMetaType::Void, QMetaType::UInt,   22,
    QMetaType::Void, QMetaType::UInt,   22,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,   26,   27,   28,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 37, QMetaType::Int,   38,   39,
    QMetaType::Void, 0x80000000 | 41, QMetaType::Char,   38,    7,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt,   43,   44,   45,   46,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::UInt, QMetaType::Bool, QMetaType::Bool, QMetaType::Float, QMetaType::Float, QMetaType::Float, 0x80000000 | 91, 0x80000000 | 91, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 97, 0x80000000 | 99,   84,   85,   86,   87,   88,   89,   90,   92,   93,   94,   95,   96,   98,  100,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SendNodeTabData((*reinterpret_cast< const uint(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2])),(*reinterpret_cast< const float(*)>(_a[3])),(*reinterpret_cast< const float(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 1: _t->on_ImportSTL_triggered(); break;
        case 2: _t->on_ClearHistoryButton_clicked(); break;
        case 3: _t->on_actionFront_View_triggered(); break;
        case 4: _t->on_actionTop_View_triggered(); break;
        case 5: _t->on_actionLeft_View_triggered(); break;
        case 6: _t->on_actionBottom_View_triggered(); break;
        case 7: _t->on_actionRight_View_triggered(); break;
        case 8: _t->on_actionRight_View_2_triggered(); break;
        case 9: _t->on_actionWireFrame_triggered(); break;
        case 10: _t->on_actionShade_Mesh_triggered(); break;
        case 11: _t->on_actionSolid_triggered(); break;
        case 12: _t->on_actionSwap_Buffer_triggered(); break;
        case 13: _t->on_actionSelect_Part_triggered(); break;
        case 14: _t->GetSelectedPartID((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 15: _t->GetHidePartID((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 16: _t->GetSelectedNodeID((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 17: _t->GetOrigoby3NodesVector((*reinterpret_cast< const float(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2])),(*reinterpret_cast< const float(*)>(_a[3]))); break;
        case 18: _t->DeleteSelectedPart(); break;
        case 19: _t->on_actionHide_Part_triggered(); break;
        case 20: _t->on_actionBy_Coords_triggered(); break;
        case 21: _t->on_NODE_Show_Button_clicked(); break;
        case 22: _t->on_SaveNodeTab_clicked(); break;
        case 23: _t->on_CancelNodeTab_clicked(); break;
        case 24: _t->on_CloseNodeTab_clicked(); break;
        case 25: _t->StatusBarActivePartName((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 26: _t->GetVolumeRefinementData((*reinterpret_cast< VOLUMEREFINEMENT(*)>(_a[1])),(*reinterpret_cast< const char(*)>(_a[2]))); break;
        case 27: _t->GetPartTreeRefinement((*reinterpret_cast< const uint(*)>(_a[1])),(*reinterpret_cast< const uint(*)>(_a[2])),(*reinterpret_cast< const uint(*)>(_a[3])),(*reinterpret_cast< const uint(*)>(_a[4]))); break;
        case 28: _t->on_actionRefinement_Volume_triggered(); break;
        case 29: _t->on_Tunnel_ShowButton_clicked(); break;
        case 30: _t->on_Tunnel_SAVE_TAB_clicked(); break;
        case 31: _t->on_Tunnel_CLEAR_TAB_clicked(); break;
        case 32: _t->on_Tunnel_CLOSE_TAB_clicked(); break;
        case 33: _t->on_actionRunning_BlockMesh_triggered(); break;
        case 34: _t->on_SelectProjectDirectory_clicked(); break;
        case 35: _t->on_CreateNew_Button_clicked(); break;
        case 36: _t->on_CloseNewTab_Button_clicked(); break;
        case 37: _t->on_Open_Project_triggered(); break;
        case 38: _t->on_NewProject_triggered(); break;
        case 39: _t->on_actionWindTunnel_triggered(); break;
        case 40: _t->on_actionEnvironment_Set_triggered(); break;
        case 41: _t->on_MovePart_Show_Button_clicked(); break;
        case 42: _t->on_MovePart_SelectPart_Button_clicked(); break;
        case 43: _t->on_MovePart_Close_Button_clicked(); break;
        case 44: _t->on_actionMove_Part_triggered(); break;
        case 45: _t->on_actionChange_Part_Name_triggered(); break;
        case 46: _t->on_actionChange_Part_Color_triggered(); break;
        case 47: _t->on_actionShow_BlockMesh_triggered(); break;
        case 48: _t->on_actionHide_BlockMesh_triggered(); break;
        case 49: _t->on_actionClear_BlockMesh_triggered(); break;
        case 50: _t->on_actionRefinement_Surface_triggered(); break;
        case 51: _t->on_actionSet_SnappyHexParameters_triggered(); break;
        case 52: _t->on_actionSnappyHexMesher_triggered(); break;
        case 53: _t->on_actionNumerical_Setup_triggered(); break;
        case 54: _t->on_actionWrite_SnappyHexFile_triggered(); break;
        case 55: _t->on_actionDecompose_triggered(); break;
        case 56: _t->on_actionExtract_Feature_Edges_triggered(); break;
        case 57: _t->on_actionShow_Future_Edges_triggered(); break;
        case 58: _t->on_actionRefinement_Feature_Edge_triggered(); break;
        case 59: _t->on_actionRenumber_triggered(); break;
        case 60: _t->on_actionCheck_Mesh_Quality_triggered(); break;
        case 61: _t->on_actionCheck_Surface_Mesh_triggered(); break;
        case 62: _t->on_ImportObj_triggered(); break;
        case 63: _t->on_actionBoundary_Condition_triggered(); break;
        case 64: _t->SetTurbulenceModel((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const uint(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< const float(*)>(_a[5])),(*reinterpret_cast< const float(*)>(_a[6])),(*reinterpret_cast< const float(*)>(_a[7])),(*reinterpret_cast< const CONDITION(*)>(_a[8])),(*reinterpret_cast< const CONDITION(*)>(_a[9])),(*reinterpret_cast< const QString(*)>(_a[10])),(*reinterpret_cast< const QString(*)>(_a[11])),(*reinterpret_cast< const QString(*)>(_a[12])),(*reinterpret_cast< const QList<QString>(*)>(_a[13])),(*reinterpret_cast< const QList<ROTATIONWALL>(*)>(_a[14]))); break;
        case 65: _t->on_actionReconstructParMesh_triggered(); break;
        case 66: _t->on_SAVE_ForceCoeff_clicked(); break;
        case 67: _t->on_actionForce_Parameters_triggered(); break;
        case 68: _t->on_CLOSE_ForceCoeff_clicked(); break;
        case 69: _t->on_actionControlDict_triggered(); break;
        case 70: _t->on_Save_ContolDict_clicked(); break;
        case 71: _t->on_Close_ControlDict_clicked(); break;
        case 72: _t->on_AddProbeLocation_Button_clicked(); break;
        case 73: _t->on_actionProbes_triggered(); break;
        case 74: _t->on_RemoveProbeLocation_Button_clicked(); break;
        case 75: _t->on_ShowProbeLocation_Button_clicked(); break;
        case 76: _t->on_Save_ProbeTab_clicked(); break;
        case 77: _t->on_Close_Probe_Tab_clicked(); break;
        case 78: _t->on_actionSubmitJob_triggered(); break;
        case 79: _t->on_actionParaView_triggered(); break;
        case 80: _t->on_actionResidual_Plot_triggered(); break;
        case 81: _t->on_ImportNastran_triggered(); break;
        case 82: _t->on_SaveMaterialTab_clicked(); break;
        case 83: _t->on_actionMaterial_triggered(); break;
        case 84: _t->on_QuitMaterialTab_clicked(); break;
        case 85: _t->on_PartSetColor_Button_clicked(); break;
        case 86: _t->on_SavePartSet_Button_clicked(); break;
        case 87: _t->on_QuitPartSet_Button_clicked(); break;
        case 88: _t->on_actionCreate_Part_triggered(); break;
        case 89: _t->on_actionCOG_by_3_Nodes_triggered(); break;
        case 90: _t->on_Save_Project_triggered(); break;
        case 91: _t->on_SelectOrigo_BTN_clicked(); break;
        case 92: _t->on_ShowCoordSystem_BTN_clicked(); break;
        case 93: _t->on_CoordSystem_Save_BTN_clicked(); break;
        case 94: _t->on_CoordSystem_Close_Tab_clicked(); break;
        case 95: _t->on_By3NodesCenter_Button_clicked(); break;
        case 96: _t->on_actionCoordSystem_triggered(); break;
        case 97: _t->on_actionHide_Feature_Edges_triggered(); break;
        case 98: _t->on_actionRefineMesh_2_triggered(); break;
        case 99: _t->on_Close_Refinement_Cell_Ref_clicked(); break;
        case 100: _t->on_Show_Refinement_Cell_Ref_clicked(); break;
        case 101: _t->on_Save_Refinement_Cell_Ref_clicked(); break;
        case 102: _t->on_ToposetColor_Set_clicked(); break;
        case 103: _t->on_QuitMainWindow_triggered(); break;
        case 104: _t->on_yplusCalc_Button_clicked(); break;
        case 105: _t->on_actionY_Calculator_triggered(); break;
        case 106: _t->on_YPlusTabExit_Button_clicked(); break;
        case 107: _t->on_RefineWallEdgeRatioAdd_Button_clicked(); break;
        case 108: _t->on_RefineWallEdgeRatioRmv_Button_clicked(); break;
        case 109: _t->on_actionRefineWallLayer_2_triggered(); break;
        case 110: _t->LoadPartWallLayerRefinement((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 111: _t->on_RefineWallLayerSaveRun_But_clicked(); break;
        case 112: _t->on_RefineWallLayer_Close_But_clicked(); break;
        case 113: _t->on_RefineWallLayerSave_but_clicked(); break;
        case 114: _t->on_actionClipView_triggered(); break;
        case 115: _t->on_actionYPlus_triggered(); break;
        case 116: _t->on_actionDelete_Part_triggered(); break;
        case 117: _t->on_actionReplace_Part_By_Part_triggered(); break;
        case 118: _t->on_NACA_SHOW_clicked(); break;
        case 119: _t->on_NACA_SAVE_clicked(); break;
        case 120: _t->on_NACA_CLOSE_clicked(); break;
        case 121: _t->on_actionNaca_Duct_triggered(); break;
        case 122: _t->on_ForceCoeff_ShowCOFR_Button_clicked(); break;
        case 123: _t->COGInfoofSelectedPart(); break;
        case 124: _t->on_Plane_Orientation_X_But_clicked(); break;
        case 125: _t->on_Plane_Orientation_Y_But_clicked(); break;
        case 126: _t->on_Plane_Orientation_Z_But_clicked(); break;
        case 127: _t->on_Plane_Show_But_clicked(); break;
        case 128: _t->on_Plane_Save_But_clicked(); break;
        case 129: _t->on_Plane_Close_But_clicked(); break;
        case 130: _t->on_actionCreatePlane_triggered(); break;
        case 131: _t->GetActualIterationNumber((*reinterpret_cast< const uint(*)>(_a[1]))); break;
        case 132: _t->on_actionTetMesh_triggered(); break;
        case 133: _t->on_Save_As_triggered(); break;
        case 134: _t->on_actionMovingBelt_triggered(); break;
        case 135: _t->on_actionMBTopoSetDict_triggered(); break;
        case 136: _t->on_actionMBCreatePatch_triggered(); break;
        case 137: _t->on_RH_Show_F_MasterNode_clicked(); break;
        case 138: _t->on_RH_Show_R_MasterNode_clicked(); break;
        case 139: _t->on_RH_Set_Visible_clicked(); break;
        case 140: _t->on_RH_Set_All_clicked(); break;
        case 141: _t->on_RH_Close_clicked(); break;
        case 142: _t->on_actionRide_Height_triggered(); break;
        case 143: _t->on_actionSTLexport_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 64:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 12:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QString> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)(const unsigned int & , const float & , const float & , const float & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::SendNodeTabData)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 144)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 144;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 144)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 144;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::SendNodeTabData(const unsigned int & _t1, const float & _t2, const float & _t3, const float & _t4, bool _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
