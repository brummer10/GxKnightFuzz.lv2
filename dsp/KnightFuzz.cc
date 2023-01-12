// generated from file './/KnightFuzz.dsp' by dsp2cc:
// Code generated with Faust 0.9.90 (http://faust.grame.fr)


namespace KnightFuzz {

struct table1d { // 1-dimensional function table
    float low;
    float high;
    float istep;
    int size;
    float data[];
};

template <int tab_size>
struct table1d_imp {
    float low;
    float high;
    float istep;
    int size;
    float data[tab_size];
    operator table1d&() const { return *(table1d*)this; }
};

static table1d_imp<100> clip1 __rt_data = {
	0.0,0.769813131784,101.97,100, {
	0.0,0.00603015075255,0.0180904522575,0.0301507537617,0.0422110552649,0.0542713567661,
	0.0663316582644,0.0783919597583,0.0904522612455,0.102512562723,0.114572864185,
	0.126633165625,0.138693467031,0.150753768388,0.162814069669,0.174874370839,
	0.186934671842,0.198994972595,0.211055272974,0.223115572796,0.235175871782,
	0.247236169522,0.259296465397,0.271356758486,0.283417047408,0.295477330103,
	0.307537603488,0.319597862958,0.331658101628,0.343718309203,0.3557784703,
	0.367838561921,0.379898549689,0.391958382223,0.404017982724,0.416077236409,
	0.428135971741,0.440193932392,0.452250735407,0.464305808797,0.476358298572,
	0.488406930473,0.500449804845,0.512484093473,0.52450559405,0.536508081033,
	0.548482372001,0.560415011246,0.572286469833,0.58406880165,0.595722828331,
	0.607195223197,0.618416376286,0.629300558395,0.639750242256,0.64966571619,
	0.658958839532,0.667566864631,0.675461119451,0.682647579023,0.689160379535,
	0.695051977325,0.700383596623,0.705217971535,0.709614777857,0.713628274534,
	0.717306443498,0.720691011494,0.723817922022,0.726717991172,0.729417598864,
	0.731939341041,0.734302611159,0.736524102405,0.738618233494,0.740597505834,
	0.742472801431,0.744253630739,0.745948338779,0.747564276749,0.749107945186,
	0.750585113719,0.752000921552,0.753359962067,0.754666354304,0.755923803588,
	0.757135653112,0.758304928018,0.759434373175,0.760526485687,0.761583542953,
	0.762607626974,0.763600645475,0.76456435032,0.765500353613,0.766410141819,
	0.767295088185,0.768156463695,0.768995446755,0.769813131784
	}
};

static table1d_imp<100> clip2 __rt_data = {
	0.0,0.394515179396,101.97,100, {
	0.0,0.00603015075129,0.0180904522522,0.0301507537469,0.0422110552265,0.0542713566722,
	0.0663316580417,0.0783919592408,0.0904522600592,0.102512560027,0.114572858094,
	0.126633151913,0.13869343624,0.15075369936,0.162813915089,0.174874024928,
	0.18693389817,0.198993242803,0.21105140661,0.223106933614,0.235156577432,
	0.247193118816,0.259200598174,0.271144190587,0.282950034925,0.294470641721,
	0.305445189377,0.315505844416,0.324302375812,0.331685149347,0.337749693783,
	0.34272268487,0.34684305184,0.350309449589,0.353272707062,0.355843964801,
	0.35810490171,0.360116111787,0.361923194669,0.363561013504,0.365056646443,
	0.366431442802,0.367702471426,0.368883554945,0.369986019104,0.371019243547,
	0.371991072367,0.372908124189,0.373776029317,0.374599613231,0.375383040109,
	0.37612992624,0.376843430486,0.377526327079,0.378181064683,0.37880981468,
	0.379414510938,0.379996882771,0.380558482439,0.381100708226,0.381624823916,
	0.382131975308,0.3826232043,0.38309946095,0.383561613855,0.384010459105,
	0.384446728066,0.38487109414,0.385284178678,0.385686556167,0.386078758778,
	0.386461280398,0.386834580178,0.387199085695,0.387555195759,0.387903282914,
	0.388243695683,0.38857676057,0.38890278387,0.389222053284,0.389534839388,
	0.389841396959,0.390141966168,0.390436773672,0.390726033604,0.39100994847,
	0.391288709974,0.391562499764,0.391831490126,0.392095844606,0.392355718592,
	0.392611259843,0.39286260898,0.393109899932,0.393353260356,0.393592812019,
	0.393828671151,0.394060948779,0.394289751025,0.394515179396
	}
};

class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	double 	fConst0;
	double 	fConst1;
	double 	fConst2;
	double 	fConst3;
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT	*fslider0_;
	double 	fRec1[2];
	double 	fConst4;
	double 	fConst5;
	double 	fConst6;
	double 	fConst7;
	double 	fConst8;
	double 	fConst9;
	double 	fConst10;
	double 	fConst11;
	double 	fConst12;
	double 	fConst13;
	double 	fConst14;
	double 	fConst15;
	double 	fConst16;
	double 	fConst17;
	double 	fConst18;
	double 	fConst19;
	double 	fConst20;
	double 	fConst21;
	double 	fConst22;
	double 	fConst23;
	double 	fConst24;
	double 	fConst25;
	double 	fRec2[5];
	double 	fConst26;
	double 	fConst27;
	double 	fConst28;
	double 	fConst29;
	double 	fConst30;
	double 	fConst31;
	double 	fConst32;
	double 	fRec0[2];
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT	*fslider1_;
	double 	fRec3[2];
	double 	fConst33;

	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);

	static void clear_state_f_static(PluginLV2*);
	static void init_static(uint32_t samplingFreq, PluginLV2*);
	static double asymclip(double x);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2*);
	static void del_instance(PluginLV2 *p);
	static void connect_static(uint32_t port,void* data, PluginLV2 *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginLV2() {
	version = PLUGINLV2_VERSION;
	id = "KnightFuzz";
	name = N_("KnightFuzz");
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	connect_ports = connect_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int i=0; i<2; i++) fRec1[i] = 0;
	for (int i=0; i<5; i++) fRec2[i] = 0;
	for (int i=0; i<2; i++) fRec0[i] = 0;
	for (int i=0; i<2; i++) fRec3[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = double(min(1.92e+05, max(1.0, (double)fSamplingFreq)));
	fConst1 = (2.08289939595918e-05 * fConst0);
	fConst2 = (0.000208289939595918 + fConst1);
	fConst3 = ((0.000208289939595918 - fConst1) / fConst2);
	fConst4 = (8.86211773084746e-21 * fConst0);
	fConst5 = ((fConst0 * ((fConst0 * (0 - (5.2515720488023e-17 + fConst4))) - 1.12141541064159e-14)) - 6.38198298091464e-13);
	fConst6 = (5.05140710658305e-20 * fConst0);
	fConst7 = (3.63773029912135e-12 + (fConst0 * (6.39206784065709e-14 + (fConst0 * (2.99339606781731e-16 + fConst6)))));
	fConst8 = (1.61079240619474e-19 * fConst0);
	fConst9 = (6.64948921112089e-12 + (fConst0 * (3.68727495792134e-14 + (fConst0 * (6.65294293852735e-17 + fConst8)))));
	fConst10 = (6.38198298091464e-13 + (fConst0 * ((fConst0 * (5.2515720488023e-17 - fConst4)) - 1.12141541064159e-14)));
	fConst11 = ((fConst0 * (6.39206784065709e-14 + (fConst0 * (fConst6 - 2.99339606781731e-16)))) - 3.63773029912135e-12);
	fConst12 = ((fConst0 * (3.68727495792134e-14 + (fConst0 * (fConst8 - 6.65294293852735e-17)))) - 6.64948921112089e-12);
	fConst13 = (3.54484709233898e-20 * fConst0);
	fConst14 = faustpower<2>(fConst0);
	fConst15 = (1.27639659618293e-12 + (fConst14 * (fConst13 - 1.05031440976046e-16)));
	fConst16 = (2.02056284263322e-19 * fConst0);
	fConst17 = ((fConst14 * (5.98679213563462e-16 - fConst16)) - 7.27546059824269e-12);
	fConst18 = (6.44316962477895e-19 * fConst0);
	fConst19 = ((fConst14 * (1.33058858770547e-16 - fConst18)) - 1.32989784222418e-11);
	fConst20 = ((fConst14 * (1.05031440976046e-16 + fConst13)) - 1.27639659618293e-12);
	fConst21 = (7.27546059824269e-12 + (fConst14 * (0 - (5.98679213563462e-16 + fConst16))));
	fConst22 = (1.32989784222418e-11 + (fConst14 * (0 - (1.33058858770547e-16 + fConst18))));
	fConst23 = (2.24283082128319e-14 - (5.31727063850847e-20 * fConst14));
	fConst24 = ((3.03084426394983e-19 * fConst14) - 1.27841356813142e-13);
	fConst25 = ((9.66475443716843e-19 * fConst14) - 7.37454991584267e-14);
	fConst26 = (2.79688088793211e-20 * fConst0);
	fConst27 = (0 - (2.97256865580817e-14 + fConst26));
	fConst28 = (1.11875235517284e-19 * fConst0);
	fConst29 = (5.94513731161633e-14 + fConst28);
	fConst30 = (fConst28 - 5.94513731161633e-14);
	fConst31 = (2.97256865580817e-14 - fConst26);
	fConst32 = faustpower<3>(fConst0);
	fConst33 = (fConst0 / fConst2);
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

double always_inline Dsp::asymclip(double x) {
    table1d& clipit = clip1;
    if (x<0) clipit = clip2;
    double f = fabs(x);
    f = f * clipit.istep;
    int i = static_cast<int>(f);
    if (i < 0) {
        f = clipit.data[0];
    } else if (i >= clipit.size-1) {
        f = clipit.data[clipit.size-1];
    } else {
	f -= i;
	f = clipit.data[i]*(1-f) + clipit.data[i+1]*f;
    }
    return copysign(f, x);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fslider0 (*fslider0_)
#define fslider1 (*fslider1_)
	double 	fSlow0 = (4.748558434412966e-05 * (exp((5 * double(fslider0))) - 1));
	double 	fSlow1 = (0.007000000000000006 * double(fslider1));
	for (int i=0; i<count; i++) {
		fRec1[0] = (fSlow0 + (0.993 * fRec1[1]));
		double fTemp0 = (3.63773029912134e-10 + (fConst0 * (fConst9 + (fRec1[0] * (fConst7 + (fConst5 * fRec1[0]))))));
		fRec2[0] = (((double)input0[i] * 2.0) - (((((fRec2[2] * (2.18263817947281e-09 + (fConst14 * (fConst25 + (fRec1[0] * (fConst24 + (fConst23 * fRec1[0]))))))) + (fRec2[1] * (1.45509211964854e-09 + (fConst0 * (fConst22 + (fRec1[0] * (fConst21 + (fConst20 * fRec1[0])))))))) + (fRec2[3] * (1.45509211964854e-09 + (fConst0 * (fConst19 + (fRec1[0] * (fConst17 + (fConst15 * fRec1[0])))))))) + (fRec2[4] * (3.63773029912134e-10 + (fConst0 * (fConst12 + (fRec1[0] * (fConst11 + (fConst10 * fRec1[0])))))))) / fTemp0));
		fRec0[0] = (asymclip((fConst32 * (((fConst0 * (fRec2[2] * (0 - (1.67812853275927e-19 * fRec1[0])))) + (fRec1[0] * ((((fConst31 * fRec2[0]) + (fConst30 * fRec2[1])) + (fConst29 * fRec2[3])) + (fConst27 * fRec2[4])))) / fTemp0))) - (fConst3 * fRec0[1]));
		fRec3[0] = (fSlow1 + (0.993 * fRec3[1]));
		output0[i] = (FAUSTFLOAT)(fConst33 * ((fRec0[1] * (0 - (2.08289939595918e-05 * fRec3[0]))) + (2.08289939595918e-05 * (fRec3[0] * fRec0[0]))));
		// post processing
		fRec3[1] = fRec3[0];
		fRec0[1] = fRec0[0];
		for (int i=4; i>0; i--) fRec2[i] = fRec2[i-1];
		fRec1[1] = fRec1[0];
	}
#undef fslider0
#undef fslider1
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case INPUT_: 
		fslider0_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case VOLUME: 
		fslider1_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	default:
		break;
	}
}

void Dsp::connect_static(uint32_t port,void* data, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->connect(port, data);
}


PluginLV2 *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginLV2 *p)
{
	delete static_cast<Dsp*>(p);
}

/*
typedef enum
{
   INPUT, 
   VOLUME, 
} PortIndex;
*/

} // end namespace KnightFuzz
