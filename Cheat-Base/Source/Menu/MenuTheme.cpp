#include "MenuTheme.h"
#include "../../Dependencies/imgui/imgui.h"

void MenuTheme() {
ImGuiStyle * style = &ImGui::GetStyle();
    ImVec4* colors = style->Colors;

    style->Alpha = 1.0f;
    style->DisabledAlpha = 1.0f;
    style->WindowPadding = ImVec2(20.0f, 16.89999961853027f);
    style->WindowRounding = 1.0f;
    style->WindowBorderSize = 0.0f;
    style->WindowMinSize = ImVec2(20.0f, 30.0f);
    style->WindowTitleAlign = ImVec2(0.5f, 0.5f);
    style->WindowMenuButtonPosition = ImGuiDir_Right;
    style->ChildRounding = 5.0f;
    style->ChildBorderSize = 1.0f;
    style->PopupRounding = 10.0f;
    style->PopupBorderSize = 0.0f;
    style->FramePadding = ImVec2(5.0f, 3.5f);
    style->FrameRounding = 5.0f;
    style->FrameBorderSize = 0.0f;
    style->ItemSpacing = ImVec2(5.0f, 4.0f);
    style->ItemInnerSpacing = ImVec2(5.0f, 5.0f);
    style->CellPadding = ImVec2(4.0f, 2.0f);
    style->IndentSpacing = 5.0f;
    style->ColumnsMinSpacing = 5.0f;
    style->ScrollbarSize = 15.0f;
    style->ScrollbarRounding = 9.0f;
    style->GrabMinSize = 15.0f;
    style->GrabRounding = 5.0f;
    style->TabRounding = 5.0f;
    style->TabBorderSize = 0.0f;
    style->TabMinWidthForCloseButton = 0.0f;
    style->ColorButtonPosition = ImGuiDir_Right;
    style->ButtonTextAlign = ImVec2(0.5f, 0.5f);
    style->SelectableTextAlign = ImVec2(0.0f, 0.0f);

    style->Colors[ImGuiCol_Text] =  ImVec4(0.0f, 1.0f, 0.1369047164916992f, 1.0f);
    style->Colors[ImGuiCol_TextDisabled] =  ImVec4(0.219491109251976f, 0.540772557258606f, 0.1856729984283447f, 1.0f);
    style->Colors[ImGuiCol_WindowBg] =  ImVec4(0.1587982773780823f, 0.1587966829538345f, 0.1587966829538345f, 1.0f);
    style->Colors[ImGuiCol_ChildBg] =  ImVec4(1.0f, 0.0f, 0.0f, 0.0f);
    style->Colors[ImGuiCol_PopupBg] =  ImVec4(0.09803921729326248f, 0.09803921729326248f, 0.09803921729326248f, 1.0f);
    style->Colors[ImGuiCol_Border] =  ImVec4(0.1350550055503845f, 0.1755409985780716f, 0.8068669438362122f, 1.0f);
    style->Colors[ImGuiCol_BorderShadow] = ImVec4(9.999914709624136e-07f, 9.999999974752427e-07f, 9.999899930335232e-07f, 0.0f);
    style->Colors[ImGuiCol_FrameBg] =  ImVec4(0.2746753692626953f, 0.2746767401695251f, 0.274678111076355f, 1.0f);
    style->Colors[ImGuiCol_FrameBgHovered] =  ImVec4(0.4133804738521576f, 0.572549045085907f, 0.3803921639919281f, 1.0f);
    style->Colors[ImGuiCol_FrameBgActive] =  ImVec4(0.5797694325447083f, 0.7686274647712708f, 0.5764706134796143f, 1.0f);
    style->Colors[ImGuiCol_TitleBg] =  ImVec4(0.09803921729326248f, 0.09803921729326248f, 0.09803921729326248f, 1.0f);
    style->Colors[ImGuiCol_TitleBgActive] =  ImVec4(0.09803921729326248f, 0.09803921729326248f, 0.09803921729326248f, 1.0f);
    style->Colors[ImGuiCol_TitleBgCollapsed] =  ImVec4(0.2588235437870026f, 0.2588235437870026f, 0.2588235437870026f, 0.0f);
    style->Colors[ImGuiCol_MenuBarBg] =  ImVec4(0.0f, 0.0f, 0.0f, 0.0f);
    style->Colors[ImGuiCol_ScrollbarBg] = ImVec4(0.1568627506494522f, 0.1568627506494522f, 0.1568627506494522f, 0.0f);
    style->Colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.2517905533313751f, 0.7596566677093506f, 0.1467148065567017f, 1.0f);
    style->Colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.3537549078464508f, 0.716738224029541f, 0.3859176933765411f, 1.0f);
    style->Colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.3529411852359772f, 0.7176470756530762f, 0.3843137323856354f, 1.0f);
    style->Colors[ImGuiCol_CheckMark] = ImVec4(0.0599568784236908f, 0.9313304424285889f, 0.1349136680364609f, 1.0f);
    style->Colors[ImGuiCol_SliderGrab] = ImVec4(0.599562406539917f, 0.7686274647712708f, 0.5764706134796143f, 1);
    style->Colors[ImGuiCol_SliderGrabActive] = ImVec4(0.4828970432281494f, 0.9699570536613464f, 0.4870769381523132f, 1.0f);
    style->Colors[ImGuiCol_Button] = ImVec4(0.326177567243576f, 0.3261770009994507f, 0.3261802792549133f, 1);
    style->Colors[ImGuiCol_ButtonHovered] = ImVec4(0.727105975151062f, 0.886274516582489f, 0.6941176652908325f, 1.0f);
    style->Colors[ImGuiCol_ButtonActive] = ImVec4(0.7906925678253174f, 0.9647058844566345f, 0.772549033164978f, 1.0f);
    style->Colors[ImGuiCol_Header] = ImVec4(0.5764706134796143f, 0.7686274647712708f, 0.6177059412002563f, 1.0f);
    style->Colors[ImGuiCol_HeaderHovered] = ImVec4(0.7221577167510986f, 0.886274516582489f, 0.6941176652908325f, 1.0f);
    style->Colors[ImGuiCol_HeaderActive] = ImVec4(0.775847852230072f, 0.9647058844566345f, 0.772549033164978f, 1.0f);
    style->Colors[ImGuiCol_Separator] = ImVec4(0.3686274588108063f, 0.3921568691730499f, 0.7607843279838562f, 1.0f);
    style->Colors[ImGuiCol_SeparatorHovered] = ImVec4(0.3686274588108063f, 0.3921568691730499f, 0.7607843279838562f, 1.0f);
    style->Colors[ImGuiCol_SeparatorActive] = ImVec4(0.2418200820684433f, 0.2090663015842438f, 0.9742489457130432f, 1.0f);
    style->Colors[ImGuiCol_ResizeGrip] = ImVec4(0.5764706134796143f, 0.5781200528144836f, 0.7686274647712708f, 1.0f);
    style->Colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.7372549176216125f, 0.6941176652908325f, 0.886274516582489f, 1.0f);
    style->Colors[ImGuiCol_ResizeGripActive] = ImVec4(0.8156862854957581f, 0.772549033164978f, 0.9647058844566345f, 1.0f);
    style->Colors[ImGuiCol_Tab] = ImVec4(0.2360491305589676f, 0.2360514998435974f, 0.2360496073961258f, 1.0f);

    style->Colors[ImGuiCol_TabHovered] = ImVec4(0.1350550055503845f, 0.1755409985780716f, 0.8068669438362122f, 1.0f);
    style->Colors[ImGuiCol_TabActive] = ImVec4(0.1350550055503845f, 0.1755409985780716f, 0.8068669438362122f, 1.0f);
    style->Colors[ImGuiCol_TabUnfocused] = ImVec4(0.0f, 0.3175966739654541f, 1.0f, 0.0f);
    style->Colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.1333333402872086f, 0.2588235437870026f, 0.4235294163227081f, 0.0f);
    style->Colors[ImGuiCol_PlotLines] = ImVec4(0.3133047223091125f, 0.3133015930652618f, 0.3133015930652618f, 1.0f);
    style->Colors[ImGuiCol_PlotLinesHovered] = ImVec4(0.7372549176216125f, 0.6941176652908325f, 0.886274516582489f, 1.0f);
    style->Colors[ImGuiCol_PlotHistogram] = ImVec4(0.5847176909446716f, 0.7686274647712708f, 0.5764706134796143f, 1.0f);
    style->Colors[ImGuiCol_PlotHistogramHovered] = ImVec4(0.7372549176216125f, 0.6941176652908325f, 0.886274516582489f, 1.0f);
    style->Colors[ImGuiCol_TableHeaderBg] = ImVec4(0.1882352977991104f, 0.1882352977991104f, 0.2000000029802322f, 1.0f);
    style->Colors[ImGuiCol_TableBorderStrong] = ImVec4(0.3356964290142059f, 0.2844038605690002f, 0.8283261656761169f, 1.0f);
    style->Colors[ImGuiCol_TableBorderLight] = ImVec4(0.4235294163227081f, 0.3803921639919281f, 0.572549045085907f, 1.0f);
    style->Colors[ImGuiCol_TableRowBg] = ImVec4(0.0f, 0.0f, 0.0f, 0.0f);
    style->Colors[ImGuiCol_TableRowBgAlt] = ImVec4(1.0f, 1.0f, 1.0f, 0.03433477878570557f);
    style->Colors[ImGuiCol_TextSelectedBg] = ImVec4(0.6974164843559265f, 0.886274516582489f, 0.6941176652908325f, 1.0f);
    style->Colors[ImGuiCol_DragDropTarget] = ImVec4(1.0f, 1.0f, 0.0f, 0.8999999761581421f);
    style->Colors[ImGuiCol_NavHighlight] = ImVec4(0.0f, 0.0f, 0.0f, 1.0f);
    style->Colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.0f, 1.0f, 1.0f, 0.699999988079071f);
    style->Colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.7510729432106018f, 0.7510654330253601f, 0.7510654330253601f, 1.0f);
    style->Colors[ImGuiCol_ModalWindowDimBg] = ImVec4(0.800000011920929f, 0.800000011920929f, 0.800000011920929f, 1.0f);

}