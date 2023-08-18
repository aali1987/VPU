


enum class VPU_Inputs
{
	SDI_A,
	SDI_B,
	SDI_C,
	SDI_D
	TPG
}

enum class VPU_Outputs
{
	Primary_SDI
}


enum class SDI_Formats
{
	SL_3G,   // singlelink
	SL_3G_x2,   // duallink
	SL_Quad   // quadlink
}


enum class Video_Resoultion
{
    R1080P, // progressive
	R720P,
	R480P,
	R360P
}

enum class SDI_Views
{
	FULL_SCREEN, // 1:4 single
	DUAL_SCREEN   // 2:4 dual
}

enum class TP_Formats
{
	TP0,
	TP1,
	TP2
}