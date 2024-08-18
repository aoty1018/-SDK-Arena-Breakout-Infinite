																/* AB V1.0.0.59.0*/
																/* QQ 1787174068  */
																/* QQ 2278616922*/
// Enum  AkAudio.EAkCallbackType
enum class EAkCallbackType : uint8_t
{
    EndOfEvent                                     = 0,
    Marker                                         = 2,
    Duration                                       = 3,
    Starvation                                     = 5,
    MusicPlayStarted                               = 7,
    MusicSyncBeat                                  = 8,
    MusicSyncBar                                   = 9,
    MusicSyncEntry                                 = 10,
    MusicSyncExit                                  = 11,
    MusicSyncGrid                                  = 12,
    MusicSyncUserCue                               = 13,
    MusicSyncPoint                                 = 14,
    MIDIEvent                                      = 16,
    EAkCallbackType                                = 17

};


// Enum  CoreUObject.Default
enum class Default : uint8_t
{

};


// Enum  AkAudio.EAkResult
enum class EAkResult : uint8_t
{
    NotImplemented                                 = 0,
    Success                                        = 1,
    Fail                                           = 2,
    PartialSuccess                                 = 3,
    NotCompatible                                  = 4,
    AlreadyConnected                               = 5,
    InvalidFile                                    = 7,
    AudioFileHeaderTooLarge                        = 8,
    MaxReached                                     = 9,
    InvalidID                                      = 14,
    IDNotFound                                     = 15,
    InvalidInstanceID                              = 16,
    NoMoreData                                     = 17,
    InvalidStateGroup                              = 20,
    ChildAlreadyHasAParent                         = 21,
    InvalidLanguage                                = 22,
    CannotAddItseflAsAChild                        = 23,
    InvalidParameter                               = 31,
    ElementAlreadyInList                           = 35,
    PathNotFound                                   = 36,
    PathNoVertices                                 = 37,
    PathNotRunning                                 = 38,
    PathNotPaused                                  = 39,
    PathNodeAlreadyInList                          = 40,
    PathNodeNotInList                              = 41,
    DataNeeded                                     = 43,
    NoDataNeeded                                   = 44,
    DataReady                                      = 45,
    NoDataReady                                    = 46,
    InsufficientMemory                             = 52,
    Cancelled                                      = 53,
    UnknownBankID                                  = 54,
    BankReadError                                  = 56,
    InvalidSwitchType                              = 57,
    FormatNotReady                                 = 63,
    WrongBankVersion                               = 64,
    FileNotFound                                   = 66,
    DeviceNotReady                                 = 67,
    BankAlreadyLoaded                              = 69,
    RenderedFX                                     = 71,
    ProcessNeeded                                  = 72,
    ProcessDone                                    = 73,
    MemManagerNotInitialized                       = 74,
    StreamMgrNotInitialized                        = 75,
    SSEInstructionsNotSupported                    = 76,
    Busy                                           = 77,
    UnsupportedChannelConfig                       = 78,
    PluginMediaNotAvailable                        = 79,
    MustBeVirtualized                              = 80,
    CommandTooLarge                                = 81,
    RejectedByFilter                               = 82,
    InvalidCustomPlatformName                      = 83,
    DLLCannotLoad                                  = 84,
    DLLPathNotFound                                = 85,
    NoJavaVM                                       = 86,
    OpenSLError                                    = 87,
    PluginNotRegistered                            = 88,
    DataAlignmentError                             = 89,
    EAkResult                                      = 90

};


// Enum  CoreUObject.EInterpCurveMode
enum class EInterpCurveMode : uint8_t
{
    CIM                                            = 0,
    CIM                                            = 1,
    CIM                                            = 2,
    CIM                                            = 3,
    CIM                                            = 4,
    CIM                                            = 5,
    CIM                                            = 6

};


// Enum  CoreUObject.ERangeBoundTypes
enum class ERangeBoundTypes : uint8_t
{
    Exclusive                                      = 0,
    Inclusive                                      = 1,
    Open                                           = 2,
    ERangeBoundTypes                               = 3

};


// Enum  CoreUObject.ELocalizedTextSourceCategory
enum class ELocalizedTextSourceCategory : uint8_t
{
    Game                                           = 0,
    Engine                                         = 1,
    Editor                                         = 2,
    ELocalizedTextSourceCategory                   = 3

};


// Enum  CoreUObject.EAutomationEventType
enum class EAutomationEventType : uint8_t
{
    Info                                           = 0,
    Warning                                        = 1,
    Error                                          = 2,
    EAutomationEventType                           = 3

};


// Enum  AkAudio.EAkAndroidAudioAPI
enum class EAkAndroidAudioAPI : uint8_t
{
    AAudio                                         = 0,
    OpenSL                                         = 1,
    EAkAndroidAudioAPI                             = 2

};


// Enum  AkAudio.EAkAudioSessionMode
enum class EAkAudioSessionMode : uint8_t
{
    Default                                        = 0,
    VoiceChat                                      = 1,
    GameChat                                       = 2,
    VideoRecording                                 = 3,
    Measurement                                    = 4,
    MoviePlayback                                  = 5,
    VideoChat                                      = 6,
    EAkAudioSessionMode                            = 7

};


// Enum  AkAudio.EAkAudioSessionCategoryOptions
enum class EAkAudioSessionCategoryOptions : uint8_t
{
    MixWithOthers                                  = 0,
    DuckOthers                                     = 1,
    AllowBluetooth                                 = 2,
    DefaultToSpeaker                               = 3,
    EAkAudioSessionCategoryOptions                 = 4

};


// Enum  AkAudio.EAkAudioSessionCategory
enum class EAkAudioSessionCategory : uint8_t
{
    Ambient                                        = 0,
    SoloAmbient                                    = 1,
    PlayAndRecord                                  = 2,
    EAkAudioSessionCategory                        = 3

};


// Enum  AkAudio.EReflectionFilterBits
enum class EReflectionFilterBits : uint8_t
{
    Wall                                           = 0,
    Ceiling                                        = 1,
    Floor                                          = 2,
    EReflectionFilterBits                          = 3

};


// Enum  AkAudio.AkCodecId
enum class AkCodecId : uint8_t
{
    None                                           = 0,
    PCM                                            = 1,
    ADPCM                                          = 2,
    XMA                                            = 3,
    Vorbis                                         = 4,
    AAC                                            = 10,
    ATRAC9                                         = 12,
    OpusNX                                         = 17,
    AkOpus                                         = 19,
    AkOpusWEM                                      = 20,
    AkCodecId                                      = 21

};


// Enum  AkAudio.EAkMidiCcValues
enum class EAkMidiCcValues : uint8_t
{
    AkMidiCcBankSelectCoarse                       = 0,
    AkMidiCcModWheelCoarse                         = 1,
    AkMidiCcBreathCtrlCoarse                       = 2,
    AkMidiCcCtrl3Coarse                            = 3,
    AkMidiCcFootPedalCoarse                        = 4,
    AkMidiCcPortamentoCoarse                       = 5,
    AkMidiCcDataEntryCoarse                        = 6,
    AkMidiCcVolumeCoarse                           = 7,
    AkMidiCcBalanceCoarse                          = 8,
    AkMidiCcCtrl9Coarse                            = 9,
    AkMidiCcPanPositionCoarse                      = 10,
    AkMidiCcExpressionCoarse                       = 11,
    AkMidiCcEffectCtrl1Coarse                      = 12,
    AkMidiCcEffectCtrl2Coarse                      = 13,
    AkMidiCcCtrl14Coarse                           = 14,
    AkMidiCcCtrl15Coarse                           = 15,
    AkMidiCcGenSlider1                             = 16,
    AkMidiCcGenSlider2                             = 17,
    AkMidiCcGenSlider3                             = 18,
    AkMidiCcGenSlider4                             = 19,
    AkMidiCcCtrl20Coarse                           = 20,
    AkMidiCcCtrl21Coarse                           = 21,
    AkMidiCcCtrl22Coarse                           = 22,
    AkMidiCcCtrl23Coarse                           = 23,
    AkMidiCcCtrl24Coarse                           = 24,
    AkMidiCcCtrl25Coarse                           = 25,
    AkMidiCcCtrl26Coarse                           = 26,
    AkMidiCcCtrl27Coarse                           = 27,
    AkMidiCcCtrl28Coarse                           = 28,
    AkMidiCcCtrl29Coarse                           = 29,
    AkMidiCcCtrl30Coarse                           = 30,
    AkMidiCcCtrl31Coarse                           = 31,
    AkMidiCcBankSelectFine                         = 32,
    AkMidiCcModWheelFine                           = 33,
    AkMidiCcBreathCtrlFine                         = 34,
    AkMidiCcCtrl3Fine                              = 35,
    AkMidiCcFootPedalFine                          = 36,
    AkMidiCcPortamentoFine                         = 37,
    AkMidiCcDataEntryFine                          = 38,
    AkMidiCcVolumeFine                             = 39,
    AkMidiCcBalanceFine                            = 40,
    AkMidiCcCtrl9Fine                              = 41,
    AkMidiCcPanPositionFine                        = 42,
    AkMidiCcExpressionFine                         = 43,
    AkMidiCcEffectCtrl1Fine                        = 44,
    AkMidiCcEffectCtrl2Fine                        = 45,
    AkMidiCcCtrl14Fine                             = 46,
    AkMidiCcCtrl15Fine                             = 47,
    AkMidiCcCtrl20Fine                             = 52,
    AkMidiCcCtrl21Fine                             = 53,
    AkMidiCcCtrl22Fine                             = 54,
    AkMidiCcCtrl23Fine                             = 55,
    AkMidiCcCtrl24Fine                             = 56,
    AkMidiCcCtrl25Fine                             = 57,
    AkMidiCcCtrl26Fine                             = 58,
    AkMidiCcCtrl27Fine                             = 59,
    AkMidiCcCtrl28Fine                             = 60,
    AkMidiCcCtrl29Fine                             = 61,
    AkMidiCcCtrl30Fine                             = 62,
    AkMidiCcCtrl31Fine                             = 63,
    AkMidiCcHoldPedal                              = 64,
    AkMidiCcPortamentoOnOff                        = 65,
    AkMidiCcSustenutoPedal                         = 66,
    AkMidiCcSoftPedal                              = 67,
    AkMidiCcLegatoPedal                            = 68,
    AkMidiCcHoldPedal2                             = 69,
    AkMidiCcSoundVariation                         = 70,
    AkMidiCcSoundTimbre                            = 71,
    AkMidiCcSoundReleaseTime                       = 72,
    AkMidiCcSoundAttackTime                        = 73,
    AkMidiCcSoundBrightness                        = 74,
    AkMidiCcSoundCtrl6                             = 75,
    AkMidiCcSoundCtrl7                             = 76,
    AkMidiCcSoundCtrl8                             = 77,
    AkMidiCcSoundCtrl9                             = 78,
    AkMidiCcSoundCtrl10                            = 79,
    AkMidiCcGeneralButton1                         = 80,
    AkMidiCcGeneralButton2                         = 81,
    AkMidiCcGeneralButton3                         = 82,
    AkMidiCcGeneralButton4                         = 83,
    AkMidiCcReverbLevel                            = 91,
    AkMidiCcTremoloLevel                           = 92,
    AkMidiCcChorusLevel                            = 93,
    AkMidiCcCelesteLevel                           = 94,
    AkMidiCcPhaserLevel                            = 95,
    AkMidiCcDataButtonP1                           = 96,
    AkMidiCcDataButtonM1                           = 97,
    AkMidiCcNonRegisterCoarse                      = 98,
    AkMidiCcNonRegisterFine                        = 99,
    AkMidiCcAllSoundOff                            = 120,
    AkMidiCcAllControllersOff                      = 121,
    AkMidiCcLocalKeyboard                          = 122,
    AkMidiCcAllNotesOff                            = 123,
    AkMidiCcOmniModeOff                            = 124,
    AkMidiCcOmniModeOn                             = 125,
    AkMidiCcOmniMonophonicOn                       = 126,
    AkMidiCcOmniPolyphonicOn                       = 127,
    EAkMidiCcValues                                = 128

};


// Enum  AkAudio.EAkMidiEventType
enum class EAkMidiEventType : uint8_t
{
    AkMidiEventTypeInvalid                         = 0,
    AkMidiEventTypeNoteOff                         = 128,
    AkMidiEventTypeNoteOn                          = 144,
    AkMidiEventTypeNoteAftertouch                  = 160,
    AkMidiEventTypeController                      = 176,
    AkMidiEventTypeProgramChange                   = 192,
    AkMidiEventTypeChannelAftertouch               = 208,
    AkMidiEventTypePitchBend                       = 224,
    AkMidiEventTypeSysex                           = 240,
    AkMidiEventTypeEscape                          = 247,
    AkMidiEventTypeMeta                            = 255,
    EAkMidiEventType                               = 256

};


// Enum  AkAudio.ERTPCValueType
enum class ERTPCValueType : uint8_t
{
    Default                                        = 0,
    Global                                         = 1,
    GameObject                                     = 2,
    PlayingID                                      = 3,
    Unavailable                                    = 4,
    ERTPCValueType                                 = 5

};


// Enum  AkAudio.EAkCurveInterpolation
enum class EAkCurveInterpolation : uint8_t
{
    Log3                                           = 0,
    Sine                                           = 1,
    Log1                                           = 2,
    InvSCurve                                      = 3,
    Linear                                         = 4,
    SCurve                                         = 5,
    Exp1                                           = 6,
    SineRecip                                      = 7,
    Exp3                                           = 8,
    LastFadeCurve                                  = 8,
    Constant                                       = 9,
    EAkCurveInterpolation                          = 10

};


// Enum  AkAudio.AkActionOnEventType
enum class AkActionOnEventType : uint8_t
{
    Stop                                           = 0,
    Pause                                          = 1,
    Resume                                         = 2,
    Break                                          = 3,
    ReleaseEnvelope                                = 4,
    AkActionOnEventType                            = 5

};


// Enum  AkAudio.AkMultiPositionType
enum class AkMultiPositionType : uint8_t
{
    SingleSource                                   = 0,
    MultiSources                                   = 1,
    MultiDirections                                = 2,
    AkMultiPositionType                            = 3

};


// Enum  AkAudio.AkSpeakerConfiguration
enum class AkSpeakerConfiguration : uint8_t
{
    Ak                                             = 1,
    Ak                                             = 2,
    Ak                                             = 4,
    Ak                                             = 8,
    Ak                                             = 16,
    Ak                                             = 32,
    Ak                                             = 256,
    Ak                                             = 512,
    Ak                                             = 1024,
    Ak                                             = 2048,
    Ak                                             = 4096,
    Ak                                             = 8192,
    Ak                                             = 16384,
    Ak                                             = 32768,
    Ak                                             = 65536,
    Ak                                             = 131072,
    Ak                                             = 131073

};


// Enum  AkAudio.AkChannelConfiguration
enum class AkChannelConfiguration : uint8_t
{
    Ak                                             = 0,
    Ak                                             = 1,
    Ak                                             = 2,
    Ak                                             = 3,
    AK                                             = 4,
    Ak                                             = 5,
    Ak                                             = 6,
    Ak                                             = 7,
    Ak                                             = 8,
    Ak                                             = 9,
    Ak                                             = 10,
    Ak                                             = 11,
    Ak                                             = 12,
    Ak                                             = 13,
    Ak                                             = 14,
    Ak                                             = 15,
    Ak                                             = 16,
    Ak                                             = 17,
    Ak                                             = 18,
    Ak                                             = 19,
    Ak                                             = 20,
    Ak                                             = 21,
    Ak                                             = 22,
    Ak                                             = 23,
    Ak                                             = 24,
    Ak                                             = 25,
    Ak                                             = 26,
    AkChannelConfiguration                         = 27

};


// Enum  AkAudio.AkAcousticPortalState
enum class AkAcousticPortalState : uint8_t
{
    Closed                                         = 0,
    Open                                           = 1,
    AkAcousticPortalState                          = 2

};


// Enum  AkAudio.PanningRule
enum class PanningRule : uint8_t
{
    PanningRule                                    = 0,
    PanningRule                                    = 1,
    PanningRule                                    = 2

};


// Enum  AkAudio.EAkAudioContext
enum class EAkAudioContext : uint8_t
{
    Foreign                                        = 0,
    GameplayAudio                                  = 1,
    EditorAudio                                    = 2,
    AlwaysActive                                   = 3,
    EAkAudioContext                                = 4

};


// Enum  AkAudio.AkMeshType
enum class AkMeshType : uint8_t
{
    StaticMesh                                     = 0,
    CollisionMesh                                  = 1,
    AkMeshType                                     = 2

};


// Enum  AkAudio.EAkCommSystem
enum class EAkCommSystem : uint8_t
{
    Socket                                         = 0,
    HTCS                                           = 1,
    EAkCommSystem                                  = 2

};


// Enum  AkAudio.EAkChannelMask
enum class EAkChannelMask : uint8_t
{
    FrontLeft                                      = 0,
    FrontRight                                     = 1,
    FrontCenter                                    = 2,
    LowFrequency                                   = 3,
    BackLeft                                       = 4,
    BackRight                                      = 5,
    BackCenter                                     = 8,
    SideLeft                                       = 9,
    SideRight                                      = 10,
    Top                                            = 11,
    HeightFrontLeft                                = 12,
    HeightFrontCenter                              = 13,
    HeightFrontRight                               = 14,
    HeightBackLeft                                 = 15,
    HeightBackCenter                               = 16,
    HeightBackRight                                = 17,
    EAkChannelMask                                 = 18

};


// Enum  AkAudio.EAkChannelConfigType
enum class EAkChannelConfigType : uint8_t
{
    Anonymous                                      = 0,
    Standard                                       = 1,
    Ambisonic                                      = 2,
    EAkChannelConfigType                           = 3

};


// Enum  AkAudio.EAkPanningRule
enum class EAkPanningRule : uint8_t
{
    Speakers                                       = 0,
    Headphones                                     = 1,
    EAkPanningRule                                 = 2

};


// Enum  AkAudio.EAkFitToGeometryMode
enum class EAkFitToGeometryMode : uint8_t
{
    OrientedBox                                    = 0,
    AlignedBox                                     = 1,
    ConvexPolyhedron                               = 2,
    EAkFitToGeometryMode                           = 3

};


// Enum  AkAudio.AudioBankOperation
enum class AudioBankOperation : uint8_t
{
    LoadBank                                       = 0,
    UnloadBank                                     = 1,
    AudioBankOperation                             = 2

};


// Enum  AkAudio.AudioObjectType
enum class AudioObjectType : uint8_t
{
    SFX                                            = 0,
    Music                                          = 1,
    Voice                                          = 2,
    Switch                                         = 3,
    State                                          = 4,
    RTPC                                           = 5,
    Trigger                                        = 6,
    SoundBank                                      = 7,
    AudioPackage                                   = 8,
    AuxBus                                         = 9,
    Room                                           = 10,
    MIDI                                           = 11,
    Emitter                                        = 12,
    Listener                                       = 13,
    Language                                       = 14,
    Device                                         = 15,
    Portal                                         = 16,
    AudioObjectType                                = 17

};


// Enum  AkAudio.AudioAction
enum class AudioAction : uint8_t
{
    PostEvent                                      = 0,
    Stop                                           = 1,
    Break                                          = 2,
    Pause                                          = 3,
    Resume                                         = 4,
    Mute                                           = 5,
    Unmute                                         = 6,
    Load                                           = 7,
    Unload                                         = 8,
    Reload                                         = 9,
    SetValue                                       = 10,
    GetValue                                       = 11,
    Activate                                       = 12,
    Deactivate                                     = 13,
    AudioRegister                                  = 14,
    UnRegister                                     = 15,
    AudioAction                                    = 16

};


// Enum  AkAudio.AudioLogVerbosity
enum class AudioLogVerbosity : uint8_t
{
    Notification                                   = 0,
    Warning                                        = 1,
    Error                                          = 2,
    AudioLogVerbosity                              = 3

};


// Enum  AkAudio.EGeographicRTPCType
enum class EGeographicRTPCType : uint8_t
{
    Distance                                       = 0,
    Altitude                                       = 1,
    Longitude                                      = 2,
    Latitude                                       = 3,
    HeadSetDistance                                = 4,
    EGeographicRTPCType                            = 5

};


// Enum  ProceduralMeshComponent.EProcMeshSliceCapOption
enum class EProcMeshSliceCapOption : uint8_t
{
    NoCap                                          = 0,
    CreateNewSectionForCap                         = 1,
    UseLastSectionForCap                           = 2,
    EProcMeshSliceCapOption                        = 3

};


// Enum  Engine.ETextGender
enum class ETextGender : uint8_t
{
    Masculine                                      = 0,
    Feminine                                       = 1,
    Neuter                                         = 2,
    ETextGender                                    = 3

};


// Enum  Engine.EFormatArgumentType
enum class EFormatArgumentType : uint8_t
{
    Int                                            = 0,
    UInt                                           = 1,
    Float                                          = 2,
    Double                                         = 3,
    Text                                           = 4,
    Gender                                         = 5,
    EFormatArgumentType                            = 6

};


// Enum  InputCore.ETouchIndex
enum class ETouchIndex : uint8_t
{
    Touch1                                         = 0,
    Touch2                                         = 1,
    Touch3                                         = 2,
    Touch4                                         = 3,
    Touch5                                         = 4,
    Touch6                                         = 5,
    Touch7                                         = 6,
    Touch8                                         = 7,
    Touch9                                         = 8,
    Touch10                                        = 9,
    CursorPointerIndex                             = 10,
    MAX                                            = 11,
    ETouchIndex                                    = 12

};


// Enum  Engine.EEndPlayReason
enum class EEndPlayReason : uint8_t
{
    Destroyed                                      = 0,
    LevelTransition                                = 1,
    EndPlayInEditor                                = 2,
    RemovedFromWorld                               = 3,
    Quit                                           = 4,
    EEndPlayReason                                 = 5

};


// Enum  Engine.ETickingGroup
enum class ETickingGroup : uint8_t
{
    TG                                             = 0,
    TG                                             = 1,
    TG                                             = 2,
    TG                                             = 3,
    TG                                             = 4,
    TG                                             = 5,
    TG                                             = 6,
    TG                                             = 7,
    TG                                             = 8

};


// Enum  Engine.EComponentCreationMethod
enum class EComponentCreationMethod : uint8_t
{
    Native                                         = 0,
    SimpleConstructionScript                       = 1,
    UserConstructionScript                         = 2,
    Instance                                       = 3,
    EComponentCreationMethod                       = 4

};


// Enum  Engine.ESkippableTickMode
enum class ESkippableTickMode : uint8_t
{
    FollowTickGroup                                = 0,
    Skippable                                      = 1,
    UnSkippable                                    = 2,
    ESkippableTickMode                             = 3

};


// Enum  Engine.ETemperatureSeverityType
enum class ETemperatureSeverityType : uint8_t
{
    Unknown                                        = 0,
    Good                                           = 1,
    Bad                                            = 2,
    Serious                                        = 3,
    Critical                                       = 4,
    NumSeverities                                  = 5,
    ETemperatureSeverityType                       = 6

};


// Enum  Engine.EQuartzCommandQuantization
enum class EQuartzCommandQuantization : uint8_t
{
    Bar                                            = 0,
    Beat                                           = 1,
    ThirtySecondNote                               = 2,
    SixteenthNote                                  = 3,
    EighthNote                                     = 4,
    QuarterNote                                    = 5,
    HalfNote                                       = 6,
    WholeNote                                      = 7,
    DottedSixteenthNote                            = 8,
    DottedEighthNote                               = 9,
    DottedQuarterNote                              = 10,
    DottedHalfNote                                 = 11,
    DottedWholeNote                                = 12,
    SixteenthNoteTriplet                           = 13,
    EighthNoteTriplet                              = 14,
    QuarterNoteTriplet                             = 15,
    HalfNoteTriplet                                = 16,
    Tick                                           = 17,
    Count                                          = 18,
    EQuartzCommandQuantization                     = 19

};


// Enum  Engine.EQuartzCommandDelegateSubType
enum class EQuartzCommandDelegateSubType : uint8_t
{
    CommandOnFailedToQueue                         = 0,
    CommandOnQueued                                = 1,
    CommandOnCanceled                              = 2,
    CommandOnAboutToStart                          = 3,
    CommandOnStarted                               = 4,
    Count                                          = 5,
    EQuartzCommandDelegateSubType                  = 6

};


// Enum  Engine.EAudioComponentPlayState
enum class EAudioComponentPlayState : uint8_t
{
    Playing                                        = 0,
    Stopped                                        = 1,
    Paused                                         = 2,
    FadingIn                                       = 3,
    FadingOut                                      = 4,
    Count                                          = 5,
    EAudioComponentPlayState                       = 6

};


// Enum  Engine.EPlaneConstraintAxisSetting
enum class EPlaneConstraintAxisSetting : uint8_t
{
    Custom                                         = 0,
    X                                              = 1,
    Y                                              = 2,
    Z                                              = 3,
    UseGlobalPhysicsSetting                        = 4,
    EPlaneConstraintAxisSetting                    = 5

};


// Enum  Engine.EInterpToBehaviourType
enum class EInterpToBehaviourType : uint8_t
{
    OneShot                                        = 0,
    OneShot                                        = 1,
    Loop                                           = 2,
    PingPong                                       = 3,
    EInterpToBehaviourType                         = 4

};


// Enum  Engine.ETeleportType
enum class ETeleportType : uint8_t
{
    None                                           = 0,
    TeleportPhysics                                = 1,
    ResetPhysics                                   = 2,
    ETeleportType                                  = 3

};


// Enum  Engine.ERelativeTransformSpace
enum class ERelativeTransformSpace : uint8_t
{
    RTS                                            = 0,
    RTS                                            = 1,
    RTS                                            = 2,
    RTS                                            = 3,
    RTS                                            = 4

};


// Enum  Engine.EAttachLocation
enum class EAttachLocation : uint8_t
{
    KeepRelativeOffset                             = 0,
    KeepWorldPosition                              = 1,
    SnapToTarget                                   = 2,
    SnapToTargetIncludingScale                     = 3,
    EAttachLocation                                = 4

};


// Enum  Engine.EAttachmentRule
enum class EAttachmentRule : uint8_t
{
    KeepRelative                                   = 0,
    KeepWorld                                      = 1,
    SnapToTarget                                   = 2,
    EAttachmentRule                                = 3

};


// Enum  Engine.EDetachmentRule
enum class EDetachmentRule : uint8_t
{
    KeepRelative                                   = 0,
    KeepWorld                                      = 1,
    EDetachmentRule                                = 2

};


// Enum  Engine.EComponentMobility
enum class EComponentMobility : uint8_t
{
    Static                                         = 0,
    Stationary                                     = 1,
    Movable                                        = 2,
    EComponentMobility                             = 3

};


// Enum  Engine.EDetailMode
enum class EDetailMode : uint8_t
{
    DM                                             = 0,
    DM                                             = 1,
    DM                                             = 2,
    DM                                             = 3

};


// Enum  Engine.EPlatformInterfaceDataType
enum class EPlatformInterfaceDataType : uint8_t
{
    PIDT                                           = 0,
    PIDT                                           = 1,
    PIDT                                           = 2,
    PIDT                                           = 3,
    PIDT                                           = 4,
    PIDT                                           = 5,
    PIDT                                           = 6

};


// Enum  Engine.EMovementMode
enum class EMovementMode : uint8_t
{
    MOVE                                           = 0,
    MOVE                                           = 1,
    MOVE                                           = 2,
    MOVE                                           = 3,
    MOVE                                           = 4,
    MOVE                                           = 5,
    MOVE                                           = 6,
    MOVE                                           = 7

};


// Enum  Engine.ENetworkFailure
enum class ENetworkFailure : uint8_t
{
    NetDriverAlreadyExists                         = 0,
    NetDriverCreateFailure                         = 1,
    NetDriverListenFailure                         = 2,
    ConnectionLost                                 = 3,
    ConnectionTimeout                              = 4,
    FailureReceived                                = 5,
    OutdatedClient                                 = 6,
    OutdatedServer                                 = 7,
    PendingConnectionFailure                       = 8,
    NetGuidMismatch                                = 9,
    NetChecksumMismatch                            = 10,
    ENetworkFailure                                = 11

};


// Enum  Engine.ETravelFailure
enum class ETravelFailure : uint8_t
{
    NoLevel                                        = 0,
    LoadMapFailure                                 = 1,
    InvalidURL                                     = 2,
    PackageMissing                                 = 3,
    PackageVersion                                 = 4,
    NoDownload                                     = 5,
    TravelFailure                                  = 6,
    CheatCommands                                  = 7,
    PendingNetGameCreateFailure                    = 8,
    CloudSaveFailure                               = 9,
    ServerTravelFailure                            = 10,
    ClientTravelFailure                            = 11,
    ETravelFailure                                 = 12

};


// Enum  Engine.EScreenOrientation
enum class EScreenOrientation : uint8_t
{
    Unknown                                        = 0,
    Portrait                                       = 1,
    PortraitUpsideDown                             = 2,
    LandscapeLeft                                  = 3,
    LandscapeRight                                 = 4,
    FaceUp                                         = 5,
    FaceDown                                       = 6,
    EScreenOrientation                             = 7

};


// Enum  Engine.EApplicationState
enum class EApplicationState : uint8_t
{
    Unknown                                        = 0,
    Inactive                                       = 1,
    Background                                     = 2,
    Active                                         = 3,
    EApplicationState                              = 4

};


// Enum  Engine.EObjectTypeQuery
enum class EObjectTypeQuery : uint8_t
{
    ObjectTypeQuery1                               = 0,
    ObjectTypeQuery2                               = 1,
    ObjectTypeQuery3                               = 2,
    ObjectTypeQuery4                               = 3,
    ObjectTypeQuery5                               = 4,
    ObjectTypeQuery6                               = 5,
    ObjectTypeQuery7                               = 6,
    ObjectTypeQuery8                               = 7,
    ObjectTypeQuery9                               = 8,
    ObjectTypeQuery10                              = 9,
    ObjectTypeQuery11                              = 10,
    ObjectTypeQuery12                              = 11,
    ObjectTypeQuery13                              = 12,
    ObjectTypeQuery14                              = 13,
    ObjectTypeQuery15                              = 14,
    ObjectTypeQuery16                              = 15,
    ObjectTypeQuery17                              = 16,
    ObjectTypeQuery18                              = 17,
    ObjectTypeQuery19                              = 18,
    ObjectTypeQuery20                              = 19,
    ObjectTypeQuery21                              = 20,
    ObjectTypeQuery22                              = 21,
    ObjectTypeQuery23                              = 22,
    ObjectTypeQuery24                              = 23,
    ObjectTypeQuery25                              = 24,
    ObjectTypeQuery26                              = 25,
    ObjectTypeQuery27                              = 26,
    ObjectTypeQuery28                              = 27,
    ObjectTypeQuery29                              = 28,
    ObjectTypeQuery30                              = 29,
    ObjectTypeQuery31                              = 30,
    ObjectTypeQuery32                              = 31,
    ObjectTypeQuery                                = 32,
    EObjectTypeQuery                               = 33

};


// Enum  Engine.EDrawDebugTrace
enum class EDrawDebugTrace : uint8_t
{
    None                                           = 0,
    ForOneFrame                                    = 1,
    ForDuration                                    = 2,
    Persistent                                     = 3,
    EDrawDebugTrace                                = 4

};


// Enum  Engine.ETraceTypeQuery
enum class ETraceTypeQuery : uint8_t
{
    TraceTypeQuery1                                = 0,
    TraceTypeQuery2                                = 1,
    TraceTypeQuery3                                = 2,
    TraceTypeQuery4                                = 3,
    TraceTypeQuery5                                = 4,
    TraceTypeQuery6                                = 5,
    TraceTypeQuery7                                = 6,
    TraceTypeQuery8                                = 7,
    TraceTypeQuery9                                = 8,
    TraceTypeQuery10                               = 9,
    TraceTypeQuery11                               = 10,
    TraceTypeQuery12                               = 11,
    TraceTypeQuery13                               = 12,
    TraceTypeQuery14                               = 13,
    TraceTypeQuery15                               = 14,
    TraceTypeQuery16                               = 15,
    TraceTypeQuery17                               = 16,
    TraceTypeQuery18                               = 17,
    TraceTypeQuery19                               = 18,
    TraceTypeQuery20                               = 19,
    TraceTypeQuery21                               = 20,
    TraceTypeQuery22                               = 21,
    TraceTypeQuery23                               = 22,
    TraceTypeQuery24                               = 23,
    TraceTypeQuery25                               = 24,
    TraceTypeQuery26                               = 25,
    TraceTypeQuery27                               = 26,
    TraceTypeQuery28                               = 27,
    TraceTypeQuery29                               = 28,
    TraceTypeQuery30                               = 29,
    TraceTypeQuery31                               = 30,
    TraceTypeQuery32                               = 31,
    TraceTypeQuery                                 = 32,
    ETraceTypeQuery                                = 33

};


// Enum  Engine.EMoveComponentAction
enum class EMoveComponentAction : uint8_t
{
    Move                                           = 0,
    Stop                                           = 1,
    Return                                         = 2,
    EMoveComponentAction                           = 3

};


// Enum  Engine.EQuitPreference
enum class EQuitPreference : uint8_t
{
    Quit                                           = 0,
    Background                                     = 1,
    EQuitPreference                                = 2

};


// Enum  GameplayAbilities.EGameplayEffectGrantedAbilityRemovePolicy
enum class EGameplayEffectGrantedAbilityRemovePolicy : uint8_t
{
    CancelAbilityImmediately                       = 0,
    RemoveAbilityOnEnd                             = 1,
    DoNothing                                      = 2,
    EGameplayEffectGrantedAbilityRemovePolicy      = 3

};


// Enum  GameplayAbilities.EGameplayModsSelector
enum class EGameplayModsSelector : uint8_t
{
    Additive                                       = 0,
    Max                                            = 1,
    Min                                            = 2,
    Length                                         = 3

};


// Enum  GameplayAbilities.EGameplayEffectAttributeCaptureSource
enum class EGameplayEffectAttributeCaptureSource : uint8_t
{
    Source                                         = 0,
    Target                                         = 1,
    EGameplayEffectAttributeCaptureSource          = 2

};


// Enum  GameplayTasks.ETaskResourceOverlapPolicy
enum class ETaskResourceOverlapPolicy : uint8_t
{
    StartOnTop                                     = 0,
    StartAtEnd                                     = 1,
    ETaskResourceOverlapPolicy                     = 2

};


// Enum  GameplayTasks.EGameplayTaskRunResult
enum class EGameplayTaskRunResult : uint8_t
{
    Error                                          = 0,
    Failed                                         = 1,
    Success                                        = 2,
    Success                                        = 3,
    Success                                        = 4,
    EGameplayTaskRunResult                         = 5

};


// Enum  GameplayAbilities.EGameplayAbilityActivationMode
enum class EGameplayAbilityActivationMode : uint8_t
{
    Authority                                      = 0,
    NonAuthority                                   = 1,
    Predicting                                     = 2,
    Confirmed                                      = 3,
    Rejected                                       = 4,
    EGameplayAbilityActivationMode                 = 5

};


// Enum  GameplayAbilities.EAbilityGenericReplicatedEvent
enum class EAbilityGenericReplicatedEvent : uint8_t
{
    GenericConfirm                                 = 0,
    GenericCancel                                  = 1,
    InputPressed                                   = 2,
    InputReleased                                  = 3,
    GenericSignalFromClient                        = 4,
    GenericSignalFromServer                        = 5,
    GameCustom1                                    = 6,
    GameCustom2                                    = 7,
    GameCustom3                                    = 8,
    GameCustom4                                    = 9,
    GameCustom5                                    = 10,
    GameCustom6                                    = 11,
    MAX                                            = 12

};


// Enum  Engine.EFastArraySerializerDeltaFlags
enum class EFastArraySerializerDeltaFlags : uint8_t
{
    None                                           = 0,
    HasBeenSerialized                              = 1,
    HasDeltaBeenRequested                          = 2,
    IsUsingDeltaSerialization                      = 4,
    EFastArraySerializerDeltaFlags                 = 5

};


// Enum  GameplayAbilities.EGameplayEffectReplicationMode
enum class EGameplayEffectReplicationMode : uint8_t
{
    Minimal                                        = 0,
    Mixed                                          = 1,
    Full                                           = 2,
    EGameplayEffectReplicationMode                 = 3

};


// Enum  GameplayAbilities.EAbilityTaskWaitState
enum class EAbilityTaskWaitState : uint8_t
{
    WaitingOnGame                                  = 1,
    WaitingOnUser                                  = 2,
    WaitingOnAvatar                                = 4,
    EAbilityTaskWaitState                          = 5

};


// Enum  GameplayAbilities.ERootMotionMoveToActorTargetOffsetType
enum class ERootMotionMoveToActorTargetOffsetType : uint8_t
{
    AlignFromTargetToSource                        = 0,
    AlignToTargetForward                           = 1,
    AlignToWorldSpace                              = 2,
    ERootMotionMoveToActorTargetOffsetType         = 3

};


// Enum  GameplayAbilities.EAbilityTaskNetSyncType
enum class EAbilityTaskNetSyncType : uint8_t
{
    BothWait                                       = 0,
    OnlyServerWait                                 = 1,
    OnlyClientWait                                 = 2,
    EAbilityTaskNetSyncType                        = 3

};


// Enum  GameplayAbilities.EWaitAttributeChangeComparison
enum class EWaitAttributeChangeComparison : uint8_t
{
    None                                           = 0,
    GreaterThan                                    = 1,
    LessThan                                       = 2,
    GreaterThanOrEqualTo                           = 3,
    LessThanOrEqualTo                              = 4,
    NotEqualTo                                     = 5,
    ExactlyEqualTo                                 = 6,
    MAX                                            = 7

};


// Enum  GameplayAbilities.EGameplayAbilityInputBinds
enum class EGameplayAbilityInputBinds : uint8_t
{
    Ability1                                       = 0,
    Ability2                                       = 1,
    Ability3                                       = 2,
    Ability4                                       = 3,
    Ability5                                       = 4,
    Ability6                                       = 5,
    Ability7                                       = 6,
    Ability8                                       = 7,
    Ability9                                       = 8,
    EGameplayAbilityInputBinds                     = 9

};


// Enum  GameplayAbilities.ETargetDataFilterSelf
enum class ETargetDataFilterSelf : uint8_t
{
    TDFS                                           = 0,
    TDFS                                           = 1,
    TDFS                                           = 2,
    TDFS                                           = 3

};


// Enum  GameplayAbilities.EGameplayAbilityTargetingLocationType
enum class EGameplayAbilityTargetingLocationType : uint8_t
{
    LiteralTransform                               = 0,
    ActorTransform                                 = 1,
    SocketTransform                                = 2,
    EGameplayAbilityTargetingLocationType          = 3

};


// Enum  GameplayAbilities.EGameplayTargetingConfirmation
enum class EGameplayTargetingConfirmation : uint8_t
{
    Instant                                        = 0,
    UserConfirmed                                  = 1,
    Custom                                         = 2,
    CustomMulti                                    = 3,
    EGameplayTargetingConfirmation                 = 4

};


// Enum  GameplayAbilities.ERepAnimPositionMethod
enum class ERepAnimPositionMethod : uint8_t
{
    Position                                       = 0,
    CurrentSectionId                               = 1,
    ERepAnimPositionMethod                         = 2

};


// Enum  GameplayAbilities.EGameplayAbilityTriggerSource
enum class EGameplayAbilityTriggerSource : uint8_t
{
    GameplayEvent                                  = 0,
    OwnedTagAdded                                  = 1,
    OwnedTagPresent                                = 2,
    EGameplayAbilityTriggerSource                  = 3

};


// Enum  GameplayAbilities.EGameplayAbilityReplicationPolicy
enum class EGameplayAbilityReplicationPolicy : uint8_t
{
    ReplicateNo                                    = 0,
    ReplicateYes                                   = 1,
    EGameplayAbilityReplicationPolicy              = 2

};


// Enum  GameplayAbilities.EGameplayAbilityNetSecurityAdvancedPolicy
enum class EGameplayAbilityNetSecurityAdvancedPolicy : uint8_t
{
    None                                           = 0,
    DisallowClientCancelAbility                    = 1,
    DisallowClientEndAbility                       = 2,
    EGameplayAbilityNetSecurityAdvancedPolicy      = 3

};


// Enum  GameplayAbilities.EGameplayAbilityNetSecurityPolicy
enum class EGameplayAbilityNetSecurityPolicy : uint8_t
{
    ClientOrServer                                 = 0,
    ServerOnlyExecution                            = 1,
    ServerOnlyTermination                          = 2,
    ServerOnly                                     = 3,
    EGameplayAbilityNetSecurityPolicy              = 4

};


// Enum  GameplayAbilities.EGameplayAbilityNetExecutionPolicy
enum class EGameplayAbilityNetExecutionPolicy : uint8_t
{
    LocalPredicted                                 = 0,
    LocalOnly                                      = 1,
    ServerInitiated                                = 2,
    ServerOnly                                     = 3,
    Immediately                                    = 4,
    EGameplayAbilityNetExecutionPolicy             = 5

};


// Enum  GameplayAbilities.EGameplayAbilityInstancingPolicy
enum class EGameplayAbilityInstancingPolicy : uint8_t
{
    NonInstanced                                   = 0,
    InstancedPerActor                              = 1,
    InstancedPerExecution                          = 2,
    EGameplayAbilityInstancingPolicy               = 3

};


// Enum  GameplayAbilities.EGameplayCuePayloadType
enum class EGameplayCuePayloadType : uint8_t
{
    CueParameters                                  = 0,
    FromSpec                                       = 1,
    EGameplayCuePayloadType                        = 2

};


// Enum  GameplayAbilities.EGameplayEffectPeriodInhibitionRemovedPolicy
enum class EGameplayEffectPeriodInhibitionRemovedPolicy : uint8_t
{
    NeverReset                                     = 0,
    ResetPeriod                                    = 1,
    ExecuteAndResetPeriod                          = 2,
    EGameplayEffectPeriodInhibitionRemovedPolicy   = 3

};


// Enum  GameplayAbilities.EGameplayEffectStackingExpirationPolicy
enum class EGameplayEffectStackingExpirationPolicy : uint8_t
{
    ClearEntireStack                               = 0,
    RemoveSingleStackAndRefreshDuration            = 1,
    RefreshDuration                                = 2,
    EGameplayEffectStackingExpirationPolicy        = 3

};


// Enum  GameplayAbilities.EGameplayEffectStackingPeriodPolicy
enum class EGameplayEffectStackingPeriodPolicy : uint8_t
{
    ResetOnSuccessfulApplication                   = 0,
    NeverReset                                     = 1,
    EGameplayEffectStackingPeriodPolicy            = 2

};


// Enum  GameplayAbilities.EGameplayEffectStackingDurationPolicy
enum class EGameplayEffectStackingDurationPolicy : uint8_t
{
    RefreshOnSuccessfulApplication                 = 0,
    NeverRefresh                                   = 1,
    EGameplayEffectStackingDurationPolicy          = 2

};


// Enum  GameplayAbilities.EGameplayEffectDurationType
enum class EGameplayEffectDurationType : uint8_t
{
    Instant                                        = 0,
    Infinite                                       = 1,
    HasDuration                                    = 2,
    EGameplayEffectDurationType                    = 3

};


// Enum  GameplayAbilities.EGameplayEffectScopedModifierAggregatorType
enum class EGameplayEffectScopedModifierAggregatorType : uint8_t
{
    CapturedAttributeBacked                        = 0,
    Transient                                      = 1,
    EGameplayEffectScopedModifierAggregatorType    = 2

};


// Enum  GameplayAbilities.EAttributeBasedFloatCalculationType
enum class EAttributeBasedFloatCalculationType : uint8_t
{
    AttributeMagnitude                             = 0,
    AttributeBaseValue                             = 1,
    AttributeBonusMagnitude                        = 2,
    AttributeMagnitudeEvaluatedUpToChannel         = 3,
    EAttributeBasedFloatCalculationType            = 4

};


// Enum  GameplayAbilities.EGameplayEffectMagnitudeCalculation
enum class EGameplayEffectMagnitudeCalculation : uint8_t
{
    ScalableFloat                                  = 0,
    AttributeBased                                 = 1,
    CustomCalculationClass                         = 2,
    SetByCaller                                    = 3,
    EGameplayEffectMagnitudeCalculation            = 4

};


// Enum  GameplayAbilities.EGameplayTagEventType
enum class EGameplayTagEventType : uint8_t
{
    NewOrRemoved                                   = 0,
    AnyCountChange                                 = 1,
    EGameplayTagEventType                          = 2

};


// Enum  GameplayAbilities.EGameplayCueEvent
enum class EGameplayCueEvent : uint8_t
{
    OnActive                                       = 0,
    WhileActive                                    = 1,
    Executed                                       = 2,
    Removed                                        = 3,
    EGameplayCueEvent                              = 4

};


// Enum  GameplayAbilities.EGameplayEffectStackingType
enum class EGameplayEffectStackingType : uint8_t
{
    None                                           = 0,
    AggregateBySource                              = 1,
    AggregateByTarget                              = 2,
    EGameplayEffectStackingType                    = 3

};


// Enum  GameplayAbilities.EGameplayModOp
enum class EGameplayModOp : uint8_t
{
    Additive                                       = 0,
    Multiplicitive                                 = 1,
    Division                                       = 2,
    Override                                       = 3,
    Max                                            = 4

};


// Enum  GameplayAbilities.EGameplayModEvaluationChannel
enum class EGameplayModEvaluationChannel : uint8_t
{
    Channel0                                       = 0,
    Channel1                                       = 1,
    Channel2                                       = 2,
    Channel3                                       = 3,
    Channel4                                       = 4,
    Channel5                                       = 5,
    Channel6                                       = 6,
    Channel7                                       = 7,
    Channel8                                       = 8,
    Channel9                                       = 9,
    Channel                                        = 10,
    EGameplayModEvaluationChannel                  = 11

};


// Enum  EditableMesh.ETriangleTessellationMode
enum class ETriangleTessellationMode : uint8_t
{
    ThreeTriangles                                 = 0,
    FourTriangles                                  = 1,
    ETriangleTessellationMode                      = 2

};


// Enum  EditableMesh.EInsetPolygonsMode
enum class EInsetPolygonsMode : uint8_t
{
    All                                            = 0,
    CenterPolygonOnly                              = 1,
    SidePolygonsOnly                               = 2,
    EInsetPolygonsMode                             = 3

};


// Enum  EditableMesh.EPolygonEdgeHardness
enum class EPolygonEdgeHardness : uint8_t
{
    NewEdgesSoft                                   = 0,
    NewEdgesHard                                   = 1,
    AllEdgesSoft                                   = 2,
    AllEdgesHard                                   = 3,
    EPolygonEdgeHardness                           = 4

};


// Enum  EditableMesh.EMeshElementAttributeType
enum class EMeshElementAttributeType : uint8_t
{
    None                                           = 0,
    FVector4                                       = 1,
    FVector                                        = 2,
    FVector2D                                      = 3,
    Float                                          = 4,
    Int                                            = 5,
    Bool                                           = 6,
    FName                                          = 7,
    EMeshElementAttributeType                      = 8

};


// Enum  EditableMesh.EMeshTopologyChange
enum class EMeshTopologyChange : uint8_t
{
    NoTopologyChange                               = 0,
    TopologyChange                                 = 1,
    EMeshTopologyChange                            = 2

};


// Enum  EditableMesh.EMeshModificationType
enum class EMeshModificationType : uint8_t
{
    FirstInterim                                   = 0,
    Interim                                        = 1,
    Final                                          = 2,
    EMeshModificationType                          = 3

};


// Enum  UdpMessaging.EUdpMessageFormat
enum class EUdpMessageFormat : uint8_t
{
    None                                           = 0,
    Json                                           = 1,
    TaggedProperty                                 = 2,
    CborPlatformEndianness                         = 3,
    CborStandardEndianness                         = 4,
    EUdpMessageFormat                              = 5

};


// Enum  ControlRig.EControlRigComponentMapDirection
enum class EControlRigComponentMapDirection : uint8_t
{
    Input                                          = 0,
    Output                                         = 1,
    EControlRigComponentMapDirection               = 2

};


// Enum  ControlRig.EControlRigComponentSpace
enum class EControlRigComponentSpace : uint8_t
{
    WorldSpace                                     = 0,
    ActorSpace                                     = 1,
    ComponentSpace                                 = 2,
    RigSpace                                       = 3,
    LocalSpace                                     = 4,
    Max                                            = 5

};


// Enum  ControlRig.ERigExecutionType
enum class ERigExecutionType : uint8_t
{
    Runtime                                        = 0,
    Editing                                        = 1,
    Max                                            = 2

};


// Enum  ControlRig.EBoneGetterSetterMode
enum class EBoneGetterSetterMode : uint8_t
{
    LocalSpace                                     = 0,
    GlobalSpace                                    = 1,
    Max                                            = 2

};


// Enum  ControlRig.ETransformGetterType
enum class ETransformGetterType : uint8_t
{
    Initial                                        = 0,
    Current                                        = 1,
    Max                                            = 2

};


// Enum  ControlRig.EControlRigClampSpatialMode
enum class EControlRigClampSpatialMode : uint8_t
{
    Plane                                          = 0,
    Cylinder                                       = 1,
    Sphere                                         = 2,
    EControlRigClampSpatialMode                    = 3

};


// Enum  ControlRig.ETransformSpaceMode
enum class ETransformSpaceMode : uint8_t
{
    LocalSpace                                     = 0,
    GlobalSpace                                    = 1,
    BaseSpace                                      = 2,
    BaseJoint                                      = 3,
    Max                                            = 4

};


// Enum  ControlRig.EControlRigDrawSettings
enum class EControlRigDrawSettings : uint8_t
{
    Points                                         = 0,
    Lines                                          = 1,
    LineStrip                                      = 2,
    DynamicMesh                                    = 3,
    EControlRigDrawSettings                        = 4

};


// Enum  ControlRig.EControlRigDrawHierarchyMode
enum class EControlRigDrawHierarchyMode : uint8_t
{
    Axes                                           = 0,
    Max                                            = 1

};


// Enum  ControlRig.EControlRigAnimEasingType
enum class EControlRigAnimEasingType : uint8_t
{
    Linear                                         = 0,
    QuadraticEaseIn                                = 1,
    QuadraticEaseOut                               = 2,
    QuadraticEaseInOut                             = 3,
    CubicEaseIn                                    = 4,
    CubicEaseOut                                   = 5,
    CubicEaseInOut                                 = 6,
    QuarticEaseIn                                  = 7,
    QuarticEaseOut                                 = 8,
    QuarticEaseInOut                               = 9,
    QuinticEaseIn                                  = 10,
    QuinticEaseOut                                 = 11,
    QuinticEaseInOut                               = 12,
    SineEaseIn                                     = 13,
    SineEaseOut                                    = 14,
    SineEaseInOut                                  = 15,
    CircularEaseIn                                 = 16,
    CircularEaseOut                                = 17,
    CircularEaseInOut                              = 18,
    ExponentialEaseIn                              = 19,
    ExponentialEaseOut                             = 20,
    ExponentialEaseInOut                           = 21,
    ElasticEaseIn                                  = 22,
    ElasticEaseOut                                 = 23,
    ElasticEaseInOut                               = 24,
    BackEaseIn                                     = 25,
    BackEaseOut                                    = 26,
    BackEaseInOut                                  = 27,
    BounceEaseIn                                   = 28,
    BounceEaseOut                                  = 29,
    BounceEaseInOut                                = 30,
    EControlRigAnimEasingType                      = 31

};


// Enum  ControlRig.EControlRigRotationOrder
enum class EControlRigRotationOrder : uint8_t
{
    XYZ                                            = 0,
    XZY                                            = 1,
    YXZ                                            = 2,
    YZX                                            = 3,
    ZXY                                            = 4,
    ZYX                                            = 5,
    EControlRigRotationOrder                       = 6

};


// Enum  ControlRig.ECRSimPointIntegrateType
enum class ECRSimPointIntegrateType : uint8_t
{
    Verlet                                         = 0,
    SemiExplicitEuler                              = 1,
    ECRSimPointIntegrateType                       = 2

};


// Enum  ControlRig.ECRSimConstraintType
enum class ECRSimConstraintType : uint8_t
{
    Distance                                       = 0,
    DistanceFromA                                  = 1,
    DistanceFromB                                  = 2,
    Plane                                          = 3,
    ECRSimConstraintType                           = 4

};


// Enum  ControlRig.ECRSimPointForceType
enum class ECRSimPointForceType : uint8_t
{
    Direction                                      = 0,
    ECRSimPointForceType                           = 1

};


// Enum  ControlRig.ECRSimSoftCollisionType
enum class ECRSimSoftCollisionType : uint8_t
{
    Plane                                          = 0,
    Sphere                                         = 1,
    Cone                                           = 2,
    ECRSimSoftCollisionType                        = 3

};


// Enum  ControlRig.EControlRigFKRigExecuteMode
enum class EControlRigFKRigExecuteMode : uint8_t
{
    Replace                                        = 0,
    Additive                                       = 1,
    Max                                            = 2

};


// Enum  ControlRig.ERigBoneType
enum class ERigBoneType : uint8_t
{
    Imported                                       = 0,
    User                                           = 1,
    ERigBoneType                                   = 2

};


// Enum  ControlRig.ERigControlAxis
enum class ERigControlAxis : uint8_t
{
    X                                              = 0,
    Y                                              = 1,
    Z                                              = 2,
    ERigControlAxis                                = 3

};


// Enum  ControlRig.ERigControlValueType
enum class ERigControlValueType : uint8_t
{
    Initial                                        = 0,
    Current                                        = 1,
    Minimum                                        = 2,
    Maximum                                        = 3,
    ERigControlValueType                           = 4

};


// Enum  ControlRig.ERigControlType
enum class ERigControlType : uint8_t
{
    Bool                                           = 0,
    Float                                          = 1,
    Integer                                        = 2,
    Vector2D                                       = 3,
    Position                                       = 4,
    Scale                                          = 5,
    Rotator                                        = 6,
    Transform                                      = 7,
    TransformNoScale                               = 8,
    EulerTransform                                 = 9,
    ERigControlType                                = 10

};


// Enum  ControlRig.ERigHierarchyImportMode
enum class ERigHierarchyImportMode : uint8_t
{
    Append                                         = 0,
    Replace                                        = 1,
    ReplaceLocalTransform                          = 2,
    ReplaceGlobalTransform                         = 3,
    Max                                            = 4

};


// Enum  ControlRig.EControlRigSetKey
enum class EControlRigSetKey : uint8_t
{
    DoNotCare                                      = 0,
    Always                                         = 1,
    Never                                          = 2,
    EControlRigSetKey                              = 3

};


// Enum  ControlRig.ERigEvent
enum class ERigEvent : uint8_t
{
    None                                           = 0,
    RequestAutoKey                                 = 1,
    Max                                            = 2

};


// Enum  ControlRig.ERigElementType
enum class ERigElementType : uint8_t
{
    None                                           = 0,
    Bone                                           = 1,
    Space                                          = 2,
    Control                                        = 4,
    Curve                                          = 8,
    All                                            = 15,
    ERigElementType                                = 16

};


// Enum  ControlRig.ERigSpaceType
enum class ERigSpaceType : uint8_t
{
    Global                                         = 0,
    Bone                                           = 1,
    Control                                        = 2,
    Space                                          = 3,
    ERigSpaceType                                  = 4

};


// Enum  ControlRig.EAimMode
enum class EAimMode : uint8_t
{
    AimAtTarget                                    = 0,
    OrientToTarget                                 = 1,
    MAX                                            = 2

};


// Enum  ControlRig.EApplyTransformMode
enum class EApplyTransformMode : uint8_t
{
    Override                                       = 0,
    Additive                                       = 1,
    Max                                            = 2

};


// Enum  ControlRig.ERigUnitDebugPointMode
enum class ERigUnitDebugPointMode : uint8_t
{
    Point                                          = 0,
    Vector                                         = 1,
    Max                                            = 2

};


// Enum  ControlRig.ERigUnitDebugTransformMode
enum class ERigUnitDebugTransformMode : uint8_t
{
    Point                                          = 0,
    Axes                                           = 1,
    Box                                            = 2,
    Max                                            = 3

};


// Enum  ControlRig.EControlRigCurveAlignment
enum class EControlRigCurveAlignment : uint8_t
{
    Front                                          = 0,
    Stretched                                      = 1,
    EControlRigCurveAlignment                      = 2

};


// Enum  ControlRig.EControlRigVectorKind
enum class EControlRigVectorKind : uint8_t
{
    Direction                                      = 0,
    Location                                       = 1,
    EControlRigVectorKind                          = 2

};


// Enum  ControlRig.ERBFVectorDistanceType
enum class ERBFVectorDistanceType : uint8_t
{
    Euclidean                                      = 0,
    Manhattan                                      = 1,
    ArcLength                                      = 2,
    ERBFVectorDistanceType                         = 3

};


// Enum  ControlRig.ERBFQuatDistanceType
enum class ERBFQuatDistanceType : uint8_t
{
    Euclidean                                      = 0,
    ArcLength                                      = 1,
    SwingAngle                                     = 2,
    TwistAngle                                     = 3,
    ERBFQuatDistanceType                           = 4

};


// Enum  ControlRig.ERBFKernelType
enum class ERBFKernelType : uint8_t
{
    Gaussian                                       = 0,
    Exponential                                    = 1,
    Linear                                         = 2,
    Cubic                                          = 3,
    Quintic                                        = 4,
    ERBFKernelType                                 = 5

};


// Enum  ControlRig.EControlRigModifyBoneMode
enum class EControlRigModifyBoneMode : uint8_t
{
    OverrideLocal                                  = 0,
    OverrideGlobal                                 = 1,
    AdditiveLocal                                  = 2,
    AdditiveGlobal                                 = 3,
    Max                                            = 4

};


// Enum  ControlRig.ERigUnitVisualDebugPointMode
enum class ERigUnitVisualDebugPointMode : uint8_t
{
    Point                                          = 0,
    Vector                                         = 1,
    Max                                            = 2

};


// Enum  ControlRig.EControlRigState
enum class EControlRigState : uint8_t
{
    Init                                           = 0,
    Update                                         = 1,
    Invalid                                        = 2,
    EControlRigState                               = 3

};


// Enum  OBJPool.FOBJPoolSpawning
enum class FOBJPoolSpawning : uint8_t
{
    SpawnSuccessful                                = 0,
    SpawnFailed                                    = 1,
    FOBJPoolSpawning                               = 2

};


// Enum  OBJPool.EPoolCollisionType
enum class EPoolCollisionType : uint8_t
{
    NoCollision                                    = 0,
    QueryOnly                                      = 1,
    PhysicsOnly                                    = 2,
    QueryAndPhysics                                = 3,
    EPoolCollisionType                             = 4

};


// Enum  Niagara.ENiagaraSystemSpawnSectionEndBehavior
enum class ENiagaraSystemSpawnSectionEndBehavior : uint8_t
{
    SetSystemInactive                              = 0,
    Deactivate                                     = 1,
    None                                           = 2,
    ENiagaraSystemSpawnSectionEndBehavior          = 3

};


// Enum  Niagara.ENiagaraSystemSpawnSectionEvaluateBehavior
enum class ENiagaraSystemSpawnSectionEvaluateBehavior : uint8_t
{
    ActivateIfInactive                             = 0,
    None                                           = 1,
    ENiagaraSystemSpawnSectionEvaluateBehavior     = 2

};


// Enum  Niagara.ENiagaraSystemSpawnSectionStartBehavior
enum class ENiagaraSystemSpawnSectionStartBehavior : uint8_t
{
    Activate                                       = 0,
    ENiagaraSystemSpawnSectionStartBehavior        = 1

};


// Enum  Niagara.ENiagaraCollisionMode
enum class ENiagaraCollisionMode : uint8_t
{
    None                                           = 0,
    SceneGeometry                                  = 1,
    DepthBuffer                                    = 2,
    DistanceField                                  = 3,
    ENiagaraCollisionMode                          = 4

};


// Enum  Niagara.ENiagaraLegacyTrailWidthMode
enum class ENiagaraLegacyTrailWidthMode : uint8_t
{
    FromCentre                                     = 0,
    FromFirst                                      = 1,
    FromSecond                                     = 2,
    ENiagaraLegacyTrailWidthMode                   = 3

};


// Enum  Niagara.ENiagaraRendererSourceDataMode
enum class ENiagaraRendererSourceDataMode : uint8_t
{
    Particles                                      = 0,
    Emitter                                        = 1,
    ENiagaraRendererSourceDataMode                 = 2

};


// Enum  Niagara.ENiagaraBindingSource
enum class ENiagaraBindingSource : uint8_t
{
    ImplicitFromSource                             = 0,
    ExplicitParticles                              = 1,
    ExplicitEmitter                                = 2,
    ExplicitSystem                                 = 3,
    ExplicitUser                                   = 4,
    MaxBindingSource                               = 5,
    ENiagaraBindingSource                          = 6

};


// Enum  Niagara.ENiagaraIterationSource
enum class ENiagaraIterationSource : uint8_t
{
    Particles                                      = 0,
    DataInterface                                  = 1,
    ENiagaraIterationSource                        = 2

};


// Enum  Niagara.ENiagaraScriptGroup
enum class ENiagaraScriptGroup : uint8_t
{
    Particle                                       = 0,
    Emitter                                        = 1,
    System                                         = 2,
    Max                                            = 3

};


// Enum  Niagara.ENiagaraScriptContextStaticSwitch
enum class ENiagaraScriptContextStaticSwitch : uint8_t
{
    System                                         = 0,
    Emitter                                        = 1,
    Particle                                       = 2,
    ENiagaraScriptContextStaticSwitch              = 3

};


// Enum  Niagara.ENiagaraCompileUsageStaticSwitch
enum class ENiagaraCompileUsageStaticSwitch : uint8_t
{
    Spawn                                          = 0,
    Update                                         = 1,
    Event                                          = 2,
    SimulationStage                                = 3,
    Default                                        = 4,
    ENiagaraCompileUsageStaticSwitch               = 5

};


// Enum  Niagara.ENiagaraScriptUsage
enum class ENiagaraScriptUsage : uint8_t
{
    Function                                       = 0,
    Module                                         = 1,
    DynamicInput                                   = 2,
    ParticleSpawnScript                            = 3,
    ParticleSpawnScriptInterpolated                = 4,
    ParticleUpdateScript                           = 5,
    ParticleEventScript                            = 6,
    ParticleSimulationStageScript                  = 7,
    ParticleGPUComputeScript                       = 8,
    EmitterSpawnScript                             = 9,
    EmitterUpdateScript                            = 10,
    SystemSpawnScript                              = 11,
    SystemUpdateScript                             = 12,
    ENiagaraScriptUsage                            = 13

};


// Enum  Niagara.ENiagaraScriptCompileStatus
enum class ENiagaraScriptCompileStatus : uint8_t
{
    NCS                                            = 0,
    NCS                                            = 1,
    NCS                                            = 2,
    NCS                                            = 3,
    NCS                                            = 4,
    NCS                                            = 5,
    NCS                                            = 6,
    NCS                                            = 7

};


// Enum  Niagara.ENiagaraInputNodeUsage
enum class ENiagaraInputNodeUsage : uint8_t
{
    Undefined                                      = 0,
    Parameter                                      = 1,
    Attribute                                      = 2,
    SystemConstant                                 = 3,
    TranslatorConstant                             = 4,
    RapidIterationParameter                        = 5,
    ENiagaraInputNodeUsage                         = 6

};


// Enum  Niagara.ENiagaraDataSetType
enum class ENiagaraDataSetType : uint8_t
{
    ParticleData                                   = 0,
    Shared                                         = 1,
    Event                                          = 2,
    ENiagaraDataSetType                            = 3

};


// Enum  Niagara.ENiagaraStatDisplayMode
enum class ENiagaraStatDisplayMode : uint8_t
{
    Percent                                        = 0,
    Absolute                                       = 1,
    ENiagaraStatDisplayMode                        = 2

};


// Enum  Niagara.ENiagaraStatEvaluationType
enum class ENiagaraStatEvaluationType : uint8_t
{
    Average                                        = 0,
    Maximum                                        = 1,
    ENiagaraStatEvaluationType                     = 2

};


// Enum  Niagara.ENiagaraAgeUpdateMode
enum class ENiagaraAgeUpdateMode : uint8_t
{
    TickDeltaTime                                  = 0,
    DesiredAge                                     = 1,
    DesiredAgeNoSeek                               = 2,
    ENiagaraAgeUpdateMode                          = 3

};


// Enum  Niagara.ENiagaraSimTarget
enum class ENiagaraSimTarget : uint8_t
{
    CPUSim                                         = 0,
    GPUComputeSim                                  = 1,
    ENiagaraSimTarget                              = 2

};


// Enum  Niagara.ENiagaraDefaultMode
enum class ENiagaraDefaultMode : uint8_t
{
    Value                                          = 0,
    Binding                                        = 1,
    Custom                                         = 2,
    ENiagaraDefaultMode                            = 3

};


// Enum  Niagara.ENiagaraGpuBufferFormat
enum class ENiagaraGpuBufferFormat : uint8_t
{
    Float                                          = 0,
    HalfFloat                                      = 1,
    UnsignedNormalizedByte                         = 2,
    Max                                            = 3

};


// Enum  Niagara.ENiagaraTickBehavior
enum class ENiagaraTickBehavior : uint8_t
{
    UsePrereqs                                     = 0,
    UseComponentTickGroup                          = 1,
    ForceTickFirst                                 = 2,
    ForceTickLast                                  = 3,
    ENiagaraTickBehavior                           = 4

};


// Enum  Niagara.ENCPoolMethod
enum class ENCPoolMethod : uint8_t
{
    None                                           = 0,
    AutoRelease                                    = 1,
    ManualRelease                                  = 2,
    ManualRelease                                  = 3,
    FreeInPool                                     = 4,
    ENCPoolMethod                                  = 5

};


// Enum  Niagara.ENDIExport
enum class ENDIExport : uint8_t
{
    ENDIExport                                     = 0,
    ENDIExport                                     = 1,
    ENDIExport                                     = 2

};


// Enum  Niagara.ESetResolutionMethod
enum class ESetResolutionMethod : uint8_t
{
    Independent                                    = 0,
    MaxAxis                                        = 1,
    CellSize                                       = 2,
    ESetResolutionMethod                           = 3

};


// Enum  Niagara.ENDISkeletalMesh
enum class ENDISkeletalMesh : uint8_t
{
    ENDISkeletalMesh                               = 255,
    ENDISkeletalMesh                               = 0,
    ENDISkeletalMesh                               = 1,
    ENDISkeletalMesh                               = 2,
    ENDISkeletalMesh                               = 256

};


// Enum  Niagara.ENDISkeletalMesh
enum class ENDISkeletalMesh : uint8_t
{
    ENDISkeletalMesh                               = 0,
    ENDISkeletalMesh                               = 1,
    ENDISkeletalMesh                               = 2,
    ENDISkeletalMesh                               = 3

};


// Enum  Niagara.ENDIStaticMesh
enum class ENDIStaticMesh : uint8_t
{
    ENDIStaticMesh                                 = 0,
    ENDIStaticMesh                                 = 1,
    ENDIStaticMesh                                 = 2,
    ENDIStaticMesh                                 = 3,
    ENDIStaticMesh                                 = 4

};


// Enum  Niagara.ENiagaraScalabilityUpdateFrequency
enum class ENiagaraScalabilityUpdateFrequency : uint8_t
{
    SpawnOnly                                      = 0,
    Low                                            = 1,
    Medium                                         = 2,
    High                                           = 3,
    Continuous                                     = 4,
    ENiagaraScalabilityUpdateFrequency             = 5

};


// Enum  Niagara.ENiagaraCullReaction
enum class ENiagaraCullReaction : uint8_t
{
    Deactivate                                     = 0,
    DeactivateImmediate                            = 1,
    DeactivateResume                               = 2,
    DeactivateImmediateResume                      = 3,
    ENiagaraCullReaction                           = 4

};


// Enum  Niagara.EParticleAllocationMode
enum class EParticleAllocationMode : uint8_t
{
    AutomaticEstimate                              = 0,
    ManualEstimate                                 = 1,
    EParticleAllocationMode                        = 2

};


// Enum  Niagara.EScriptExecutionMode
enum class EScriptExecutionMode : uint8_t
{
    EveryParticle                                  = 0,
    SpawnedParticles                               = 1,
    SingleParticle                                 = 2,
    EScriptExecutionMode                           = 3

};


// Enum  Niagara.ENiagaraSortMode
enum class ENiagaraSortMode : uint8_t
{
    None                                           = 0,
    ViewDepth                                      = 1,
    ViewDistance                                   = 2,
    CustomAscending                                = 3,
    CustomDecending                                = 4,
    ENiagaraSortMode                               = 5

};


// Enum  Niagara.ENiagaraMeshLockedAxisSpace
enum class ENiagaraMeshLockedAxisSpace : uint8_t
{
    Simulation                                     = 0,
    World                                          = 1,
    Local                                          = 2,
    ENiagaraMeshLockedAxisSpace                    = 3

};


// Enum  Niagara.ENiagaraMeshPivotOffsetSpace
enum class ENiagaraMeshPivotOffsetSpace : uint8_t
{
    Mesh                                           = 0,
    Simulation                                     = 1,
    World                                          = 2,
    Local                                          = 3,
    ENiagaraMeshPivotOffsetSpace                   = 4

};


// Enum  Niagara.ENiagaraMeshFacingMode
enum class ENiagaraMeshFacingMode : uint8_t
{
    Default                                        = 0,
    Velocity                                       = 1,
    CameraPosition                                 = 2,
    CameraPlane                                    = 3,
    ENiagaraMeshFacingMode                         = 4

};


// Enum  Niagara.ENiagaraPlatformSetState
enum class ENiagaraPlatformSetState : uint8_t
{
    Disabled                                       = 0,
    Enabled                                        = 1,
    Active                                         = 2,
    Unknown                                        = 3,
    ENiagaraPlatformSetState                       = 4

};


// Enum  Niagara.ENiagaraPlatformSelectionState
enum class ENiagaraPlatformSelectionState : uint8_t
{
    Default                                        = 0,
    Enabled                                        = 1,
    Disabled                                       = 2,
    ENiagaraPlatformSelectionState                 = 3

};


// Enum  Niagara.ENiagaraPreviewGridResetMode
enum class ENiagaraPreviewGridResetMode : uint8_t
{
    Never                                          = 0,
    Individual                                     = 1,
    All                                            = 2,
    ENiagaraPreviewGridResetMode                   = 3

};


// Enum  Niagara.ENiagaraRibbonUVDistributionMode
enum class ENiagaraRibbonUVDistributionMode : uint8_t
{
    ScaledUniformly                                = 0,
    ScaledUsingRibbonSegmentLength                 = 1,
    TiledOverRibbonLength                          = 2,
    ENiagaraRibbonUVDistributionMode               = 3

};


// Enum  Niagara.ENiagaraRibbonUVEdgeMode
enum class ENiagaraRibbonUVEdgeMode : uint8_t
{
    SmoothTransition                               = 0,
    Locked                                         = 1,
    ENiagaraRibbonUVEdgeMode                       = 2

};


// Enum  Niagara.ENiagaraRibbonTessellationMode
enum class ENiagaraRibbonTessellationMode : uint8_t
{
    Automatic                                      = 0,
    Custom                                         = 1,
    Disabled                                       = 2,
    ENiagaraRibbonTessellationMode                 = 3

};


// Enum  Niagara.ENiagaraRibbonDrawDirection
enum class ENiagaraRibbonDrawDirection : uint8_t
{
    FrontToBack                                    = 0,
    BackToFront                                    = 1,
    ENiagaraRibbonDrawDirection                    = 2

};


// Enum  Niagara.ENiagaraRibbonAgeOffsetMode
enum class ENiagaraRibbonAgeOffsetMode : uint8_t
{
    Scale                                          = 0,
    Clip                                           = 1,
    ENiagaraRibbonAgeOffsetMode                    = 2

};


// Enum  Niagara.ENiagaraRibbonFacingMode
enum class ENiagaraRibbonFacingMode : uint8_t
{
    Screen                                         = 0,
    Custom                                         = 1,
    CustomSideVector                               = 2,
    ENiagaraRibbonFacingMode                       = 3

};


// Enum  Niagara.ENiagaraScriptLibraryVisibility
enum class ENiagaraScriptLibraryVisibility : uint8_t
{
    Invalid                                        = 0,
    Unexposed                                      = 1,
    Library                                        = 2,
    Hidden                                         = 3,
    ENiagaraScriptLibraryVisibility                = 4

};


// Enum  Niagara.ENiagaraModuleDependencyScriptConstraint
enum class ENiagaraModuleDependencyScriptConstraint : uint8_t
{
    SameScript                                     = 0,
    AllScripts                                     = 1,
    ENiagaraModuleDependencyScriptConstraint       = 2

};


// Enum  Niagara.ENiagaraModuleDependencyType
enum class ENiagaraModuleDependencyType : uint8_t
{
    PreDependency                                  = 0,
    PostDependency                                 = 1,
    ENiagaraModuleDependencyType                   = 2

};


// Enum  Niagara.EUnusedAttributeBehaviour
enum class EUnusedAttributeBehaviour : uint8_t
{
    Copy                                           = 0,
    Zero                                           = 1,
    None                                           = 2,
    MarkInvalid                                    = 3,
    PassThrough                                    = 4,
    EUnusedAttributeBehaviour                      = 5

};


// Enum  Niagara.ENiagaraSpriteFacingMode
enum class ENiagaraSpriteFacingMode : uint8_t
{
    FaceCamera                                     = 0,
    FaceCameraPlane                                = 1,
    CustomFacingVector                             = 2,
    FaceCameraPosition                             = 3,
    FaceCameraDistanceBlend                        = 4,
    ENiagaraSpriteFacingMode                       = 5

};


// Enum  Niagara.ENiagaraSpriteAlignment
enum class ENiagaraSpriteAlignment : uint8_t
{
    Unaligned                                      = 0,
    VelocityAligned                                = 1,
    CustomAlignment                                = 2,
    ENiagaraSpriteAlignment                        = 3

};


// Enum  Niagara.ENiagaraParameterPanelCategory
enum class ENiagaraParameterPanelCategory : uint8_t
{
    Input                                          = 0,
    Attributes                                     = 1,
    Output                                         = 2,
    Local                                          = 3,
    User                                           = 4,
    Engine                                         = 5,
    Owner                                          = 6,
    System                                         = 7,
    Emitter                                        = 8,
    Particles                                      = 9,
    ScriptTransient                                = 10,
    StaticSwitch                                   = 11,
    None                                           = 12,
    Num                                            = 13,
    ENiagaraParameterPanelCategory                 = 14

};


// Enum  Niagara.ENiagaraScriptParameterUsage
enum class ENiagaraScriptParameterUsage : uint8_t
{
    Input                                          = 0,
    Output                                         = 1,
    Local                                          = 2,
    InputOutput                                    = 3,
    InitialValueInput                              = 4,
    None                                           = 5,
    Num                                            = 6,
    ENiagaraScriptParameterUsage                   = 7

};


// Enum  Niagara.ENiagaraParameterScope
enum class ENiagaraParameterScope : uint8_t
{
    Input                                          = 0,
    User                                           = 1,
    Engine                                         = 2,
    Owner                                          = 3,
    System                                         = 4,
    Emitter                                        = 5,
    Particles                                      = 6,
    ScriptPersistent                               = 7,
    ScriptTransient                                = 8,
    Local                                          = 9,
    Custom                                         = 10,
    DISPLAY                                        = 11,
    Output                                         = 12,
    None                                           = 13,
    Num                                            = 14,
    ENiagaraParameterScope                         = 15

};


// Enum  Niagara.ENiagaraExecutionState
enum class ENiagaraExecutionState : uint8_t
{
    Active                                         = 0,
    Inactive                                       = 1,
    InactiveClear                                  = 2,
    Complete                                       = 3,
    Disabled                                       = 4,
    Num                                            = 5,
    ENiagaraExecutionState                         = 6

};


// Enum  Niagara.ENiagaraExecutionStateSource
enum class ENiagaraExecutionStateSource : uint8_t
{
    Scalability                                    = 0,
    Internal                                       = 1,
    Owner                                          = 2,
    InternalCompletion                             = 3,
    ENiagaraExecutionStateSource                   = 4

};


// Enum  Niagara.ENiagaraNumericOutputTypeSelectionMode
enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t
{
    None                                           = 0,
    Largest                                        = 1,
    Smallest                                       = 2,
    Scalar                                         = 3,
    ENiagaraNumericOutputTypeSelectionMode         = 4

};


// Enum  Niagara.ENiagaraVariantMode
enum class ENiagaraVariantMode : uint8_t
{
    None                                           = 0,
    Object                                         = 1,
    DataInterface                                  = 2,
    Bytes                                          = 3,
    ENiagaraVariantMode                            = 4

};


// Enum  NiagaraShader.FNiagaraCompileEventSeverity
enum class FNiagaraCompileEventSeverity : uint8_t
{
    Log                                            = 0,
    Warning                                        = 1,
    Error                                          = 2,
    FNiagaraCompileEventSeverity                   = 3

};


// Enum  SubstanceCore.ESubstanceInputType
enum class ESubstanceInputType : uint8_t
{
    SIT                                            = 0,
    SIT                                            = 1,
    SIT                                            = 2,
    SIT                                            = 3,
    SIT                                            = 4,
    SIT                                            = 5,
    SIT                                            = 6,
    SIT                                            = 7,
    SIT                                            = 8,
    SIT                                            = 9,
    SIT                                            = 10,
    SIT                                            = 11

};


// Enum  SubstanceCore.ESubstanceGenerationMode
enum class ESubstanceGenerationMode : uint8_t
{
    SGM                                            = 0,
    SGM                                            = 1,
    SGM                                            = 2,
    SGM                                            = 3,
    SGM                                            = 4,
    SGM                                            = 5,
    SGM                                            = 6

};


// Enum  SubstanceCore.EDefaultSubstanceTextureSize
enum class EDefaultSubstanceTextureSize : uint8_t
{
    Size                                           = 0,
    Size                                           = 4,
    Size                                           = 5,
    Size                                           = 6,
    Size                                           = 7,
    Size                                           = 8,
    Size                                           = 9,
    Size                                           = 10,
    Size                                           = 11,
    Size                                           = 12,
    Size                                           = 13

};


// Enum  SubstanceCore.ESubstanceEngineType
enum class ESubstanceEngineType : uint8_t
{
    SET                                            = 0,
    SET                                            = 1,
    SET                                            = 2

};


// Enum  SubstanceCore.ESubChannelType
enum class ESubChannelType : uint8_t
{
    Channel                                        = 0,
    Channel                                        = 1,
    Channel                                        = 2,
    Channel                                        = 3,
    Channel                                        = 4,
    Channel                                        = 5,
    Channel                                        = 6,
    Channel                                        = 7,
    Channel                                        = 8,
    Channel                                        = 9,
    Channel                                        = 10,
    Channel                                        = 11,
    Channel                                        = 12,
    Channel                                        = 13,
    Channel                                        = 14,
    Channel                                        = 15,
    Channel                                        = 16

};


// Enum  SubstanceCore.ESubstanceTextureSize
enum class ESubstanceTextureSize : uint8_t
{
    ERL                                            = 0,
    ERL                                            = 1,
    ERL                                            = 2,
    ERL                                            = 3,
    ERL                                            = 4,
    ERL                                            = 5,
    ERL                                            = 6,
    ERL                                            = 7,
    ERL                                            = 8,
    ERL                                            = 9,
    ERL                                            = 10

};


// Enum  MFAnimationRuntime.ECalcStretchAlgorithm
enum class ECalcStretchAlgorithm : uint8_t
{
    ModifyBoneByAxisX                              = 0,
    ModifyBoneByTwoBoneDirection                   = 1,
    ECalcStretchAlgorithm                          = 2

};


// Enum  MFAnimationRuntime.ERotatorAxis
enum class ERotatorAxis : uint8_t
{
    None                                           = 0,
    Pitch                                          = 1,
    Yaw                                            = 2,
    Roll                                           = 4,
    ERotatorAxis                                   = 5

};


// Enum  MFAnimationRuntime.EAdjustType
enum class EAdjustType : uint8_t
{
    Adjust                                         = 0,
    Adjust                                         = 1,
    Adjust                                         = 2

};


// Enum  MFAnimationRuntime.EIKFootRootLocalAxis
enum class EIKFootRootLocalAxis : uint8_t
{
    NONE                                           = 0,
    X                                              = 1,
    Y                                              = 2,
    Z                                              = 3,
    EIKFootRootLocalAxis                           = 4

};


// Enum  ACLPlugin.ACLCompressionLevel
enum class ACLCompressionLevel : uint8_t
{
    ACLCL                                          = 0,
    ACLCL                                          = 1,
    ACLCL                                          = 2,
    ACLCL                                          = 3,
    ACLCL                                          = 4,
    ACLCL                                          = 5

};


// Enum  ACLPlugin.ACLVectorFormat
enum class ACLVectorFormat : uint8_t
{
    ACLVF                                          = 0,
    ACLVF                                          = 1,
    ACLVF                                          = 2

};


// Enum  ACLPlugin.ACLRotationFormat
enum class ACLRotationFormat : uint8_t
{
    ACLRF                                          = 0,
    ACLRF                                          = 1,
    ACLRF                                          = 2,
    ACLRF                                          = 3

};


// Enum  ACLPlugin.ACLVisualFidelityChangeResult
enum class ACLVisualFidelityChangeResult : uint8_t
{
    Dispatched                                     = 0,
    Completed                                      = 1,
    Failed                                         = 2,
    ACLVisualFidelityChangeResult                  = 3

};


// Enum  ACLPlugin.ACLVisualFidelity
enum class ACLVisualFidelity : uint8_t
{
    Highest                                        = 0,
    Medium                                         = 1,
    Lowest                                         = 2,
    ACLVisualFidelity                              = 3

};


// Enum  ModelingComponents.EBaseCreateFromSelectedTargetType
enum class EBaseCreateFromSelectedTargetType : uint8_t
{
    NewAsset                                       = 0,
    FirstInputAsset                                = 1,
    LastInputAsset                                 = 2,
    EBaseCreateFromSelectedTargetType              = 3

};


// Enum  ModelingComponents.EDynamicMeshTangentCalcType
enum class EDynamicMeshTangentCalcType : uint8_t
{
    NoTangents                                     = 0,
    AutoCalculated                                 = 1,
    ExternallyCalculated                           = 2,
    EDynamicMeshTangentCalcType                    = 3

};


// Enum  ModelingComponents.EMultiTransformerMode
enum class EMultiTransformerMode : uint8_t
{
    DefaultGizmo                                   = 1,
    QuickAxisTranslation                           = 2,
    EMultiTransformerMode                          = 3

};


// Enum  ModelingComponents.EHandleSourcesMethod
enum class EHandleSourcesMethod : uint8_t
{
    DeleteSources                                  = 0,
    HideSources                                    = 1,
    KeepSources                                    = 2,
    EHandleSourcesMethod                           = 3

};


// Enum  ModelingComponents.ESpaceCurveControlPointFalloffType
enum class ESpaceCurveControlPointFalloffType : uint8_t
{
    Linear                                         = 0,
    Smooth                                         = 1,
    ESpaceCurveControlPointFalloffType             = 2

};


// Enum  ModelingComponents.ESpaceCurveControlPointOriginMode
enum class ESpaceCurveControlPointOriginMode : uint8_t
{
    Shared                                         = 0,
    First                                          = 1,
    Last                                           = 2,
    ESpaceCurveControlPointOriginMode              = 3

};


// Enum  ModelingComponents.ESpaceCurveControlPointTransformMode
enum class ESpaceCurveControlPointTransformMode : uint8_t
{
    Shared                                         = 0,
    PerVertex                                      = 1,
    ESpaceCurveControlPointTransformMode           = 2

};


// Enum  ModelingComponents.EUVLayoutPreviewSide
enum class EUVLayoutPreviewSide : uint8_t
{
    Left                                           = 0,
    Right                                          = 1,
    EUVLayoutPreviewSide                           = 2

};


// Enum  ModelingOperators.ECSGOperation
enum class ECSGOperation : uint8_t
{
    DifferenceAB                                   = 0,
    DifferenceBA                                   = 1,
    Intersect                                      = 2,
    Union                                          = 3,
    TrimA                                          = 4,
    TrimB                                          = 5,
    ECSGOperation                                  = 6

};


// Enum  ModelingOperators.ESplitNormalMethod
enum class ESplitNormalMethod : uint8_t
{
    UseExistingTopology                            = 0,
    FaceNormalThreshold                            = 1,
    FaceGroupID                                    = 2,
    PerTriangle                                    = 3,
    PerVertex                                      = 4,
    ESplitNormalMethod                             = 5

};


// Enum  ModelingOperators.ENormalCalculationMethod
enum class ENormalCalculationMethod : uint8_t
{
    AreaWeighted                                   = 0,
    AngleWeighted                                  = 1,
    AreaAngleWeighting                             = 2,
    ENormalCalculationMethod                       = 3

};


// Enum  ModelingOperators.EHoleFillOpFillType
enum class EHoleFillOpFillType : uint8_t
{
    TriangleFan                                    = 0,
    PolygonEarClipping                             = 1,
    Planar                                         = 2,
    Minimal                                        = 3,
    Smooth                                         = 4,
    EHoleFillOpFillType                            = 5

};


// Enum  ModelingOperators.ERemeshSmoothingType
enum class ERemeshSmoothingType : uint8_t
{
    Uniform                                        = 0,
    Cotangent                                      = 1,
    MeanValue                                      = 2,
    ERemeshSmoothingType                           = 3

};


// Enum  ModelingOperators.ERemeshType
enum class ERemeshType : uint8_t
{
    Standard                                       = 0,
    FullPass                                       = 1,
    NormalFlow                                     = 2,
    ERemeshType                                    = 3

};


// Enum  ModelingOperators.EUVProjectionMethod
enum class EUVProjectionMethod : uint8_t
{
    Cube                                           = 0,
    Cylinder                                       = 1,
    Plane                                          = 2,
    EUVProjectionMethod                            = 3

};


// Enum  ModelingOperators.EMorphologyOperation
enum class EMorphologyOperation : uint8_t
{
    Dilate                                         = 0,
    Contract                                       = 1,
    Close                                          = 2,
    Open                                           = 3,
    EMorphologyOperation                           = 4

};


// Enum  MeshModelingTools.EMakeMeshPolygroupMode
enum class EMakeMeshPolygroupMode : uint8_t
{
    Single                                         = 0,
    PerFace                                        = 1,
    PerQuad                                        = 2,
    EMakeMeshPolygroupMode                         = 3

};


// Enum  MeshModelingTools.EMakeMeshPivotLocation
enum class EMakeMeshPivotLocation : uint8_t
{
    Base                                           = 0,
    Centered                                       = 1,
    Top                                            = 2,
    EMakeMeshPivotLocation                         = 3

};


// Enum  MeshModelingTools.EMakeMeshPlacementType
enum class EMakeMeshPlacementType : uint8_t
{
    GroundPlane                                    = 0,
    OnScene                                        = 1,
    EMakeMeshPlacementType                         = 2

};


// Enum  MeshModelingTools.EAlignObjectsBoxPoint
enum class EAlignObjectsBoxPoint : uint8_t
{
    Center                                         = 0,
    Bottom                                         = 1,
    Top                                            = 2,
    Left                                           = 3,
    Right                                          = 4,
    Front                                          = 5,
    Back                                           = 6,
    Min                                            = 7,
    Max                                            = 8

};


// Enum  MeshModelingTools.EAlignObjectsAlignToOptions
enum class EAlignObjectsAlignToOptions : uint8_t
{
    FirstSelected                                  = 0,
    LastSelected                                   = 1,
    Combined                                       = 2,
    EAlignObjectsAlignToOptions                    = 3

};


// Enum  MeshModelingTools.EAlignObjectsAlignTypes
enum class EAlignObjectsAlignTypes : uint8_t
{
    Pivots                                         = 0,
    BoundingBoxes                                  = 1,
    EAlignObjectsAlignTypes                        = 2

};


// Enum  MeshModelingTools.EBakedCurvatureClampMode
enum class EBakedCurvatureClampMode : uint8_t
{
    None                                           = 0,
    Positive                                       = 1,
    Negative                                       = 2,
    EBakedCurvatureClampMode                       = 3

};


// Enum  MeshModelingTools.EBakedCurvatureColorMode
enum class EBakedCurvatureColorMode : uint8_t
{
    Grayscale                                      = 0,
    RedBlue                                        = 1,
    RedGreenBlue                                   = 2,
    EBakedCurvatureColorMode                       = 3

};


// Enum  MeshModelingTools.EBakedCurvatureTypeMode
enum class EBakedCurvatureTypeMode : uint8_t
{
    MeanAverage                                    = 0,
    Max                                            = 1,
    Min                                            = 2,
    Gaussian                                       = 3

};


// Enum  MeshModelingTools.EBakeTextureResolution
enum class EBakeTextureResolution : uint8_t
{
    Resolution16                                   = 16,
    Resolution32                                   = 32,
    Resolution64                                   = 64,
    Resolution128                                  = 128,
    Resolution256                                  = 256,
    Resolution512                                  = 512,
    Resolution1024                                 = 1024,
    Resolution2048                                 = 2048,
    Resolution4096                                 = 4096,
    Resolution8192                                 = 8192,
    EBakeTextureResolution                         = 8193

};


// Enum  MeshModelingTools.EBakeMapType
enum class EBakeMapType : uint8_t
{
    TangentSpaceNormalMap                          = 0,
    AmbientOcclusion                               = 1,
    Curvature                                      = 2,
    Texture2DImage                                 = 3,
    NormalImage                                    = 4,
    FaceNormalImage                                = 5,
    PositionImage                                  = 6,
    EBakeMapType                                   = 7

};


// Enum  MeshModelingTools.EBakeScaleMethod
enum class EBakeScaleMethod : uint8_t
{
    BakeFullScale                                  = 0,
    BakeNonuniformScale                            = 1,
    DoNotBakeScale                                 = 2,
    EBakeScaleMethod                               = 3

};


// Enum  MeshModelingTools.ECollisionGeometryMode
enum class ECollisionGeometryMode : uint8_t
{
    Default                                        = 0,
    SimpleAndComplex                               = 1,
    UseSimpleAsComplex                             = 2,
    UseComplexAsSimple                             = 3,
    ECollisionGeometryMode                         = 4

};


// Enum  MeshModelingTools.ECombineTargetType
enum class ECombineTargetType : uint8_t
{
    NewAsset                                       = 0,
    FirstInputAsset                                = 1,
    LastInputAsset                                 = 2,
    ECombineTargetType                             = 3

};


// Enum  MeshModelingTools.EConvertToPolygonsMode
enum class EConvertToPolygonsMode : uint8_t
{
    FaceNormalDeviation                            = 0,
    FromUVISlands                                  = 1,
    EConvertToPolygonsMode                         = 2

};


// Enum  MeshModelingTools.EQuickTransformerMode
enum class EQuickTransformerMode : uint8_t
{
    AxisTranslation                                = 0,
    AxisRotation                                   = 1,
    EQuickTransformerMode                          = 2

};


// Enum  MeshModelingTools.EWeightScheme
enum class EWeightScheme : uint8_t
{
    Uniform                                        = 0,
    Umbrella                                       = 1,
    Valence                                        = 2,
    MeanValue                                      = 3,
    Cotangent                                      = 4,
    ClampedCotangent                               = 5,
    EWeightScheme                                  = 6

};


// Enum  MeshModelingTools.EGroupTopologyDeformationStrategy
enum class EGroupTopologyDeformationStrategy : uint8_t
{
    Linear                                         = 0,
    Laplacian                                      = 1,
    EGroupTopologyDeformationStrategy              = 2

};


// Enum  MeshModelingTools.EDisplaceMeshToolDisplaceType
enum class EDisplaceMeshToolDisplaceType : uint8_t
{
    Constant                                       = 0,
    RandomNoise                                    = 1,
    PerlinNoise                                    = 2,
    DisplacementMap                                = 3,
    SineWave                                       = 4,
    EDisplaceMeshToolDisplaceType                  = 5

};


// Enum  MeshModelingTools.EDrawPolygonOutputMode
enum class EDrawPolygonOutputMode : uint8_t
{
    MeshedPolygon                                  = 0,
    ExtrudedConstant                               = 1,
    ExtrudedInteractive                            = 2,
    EDrawPolygonOutputMode                         = 3

};


// Enum  MeshModelingTools.EDrawPolygonDrawMode
enum class EDrawPolygonDrawMode : uint8_t
{
    Freehand                                       = 0,
    Circle                                         = 1,
    Square                                         = 2,
    Rectangle                                      = 3,
    RoundedRectangle                               = 4,
    HoleyCircle                                    = 5,
    EDrawPolygonDrawMode                           = 6

};


// Enum  MeshModelingTools.EDrawPolyPathExtrudeDirection
enum class EDrawPolyPathExtrudeDirection : uint8_t
{
    SelectionNormal                                = 0,
    WorldX                                         = 1,
    WorldY                                         = 2,
    WorldZ                                         = 3,
    LocalX                                         = 4,
    LocalY                                         = 5,
    LocalZ                                         = 6,
    EDrawPolyPathExtrudeDirection                  = 7

};


// Enum  MeshModelingTools.EDrawPolyPathHeightMode
enum class EDrawPolyPathHeightMode : uint8_t
{
    Interactive                                    = 0,
    Constant                                       = 1,
    EDrawPolyPathHeightMode                        = 2

};


// Enum  MeshModelingTools.EDrawPolyPathWidthMode
enum class EDrawPolyPathWidthMode : uint8_t
{
    Interactive                                    = 0,
    Constant                                       = 1,
    EDrawPolyPathWidthMode                         = 2

};


// Enum  MeshModelingTools.EDrawPolyPathOutputMode
enum class EDrawPolyPathOutputMode : uint8_t
{
    Ribbon                                         = 0,
    Extrusion                                      = 1,
    Ramp                                           = 2,
    EDrawPolyPathOutputMode                        = 3

};


// Enum  MeshModelingTools.EDynamicMeshSculptBrushType
enum class EDynamicMeshSculptBrushType : uint8_t
{
    Move                                           = 0,
    PullKelvin                                     = 1,
    PullSharpKelvin                                = 2,
    Smooth                                         = 3,
    Offset                                         = 4,
    SculptView                                     = 5,
    SculptMax                                      = 6,
    Inflate                                        = 7,
    ScaleKelvin                                    = 8,
    Pinch                                          = 9,
    TwistKelvin                                    = 10,
    Flatten                                        = 11,
    Plane                                          = 12,
    PlaneViewAligned                               = 13,
    FixedPlane                                     = 14,
    Resample                                       = 15,
    LastValue                                      = 16,
    EDynamicMeshSculptBrushType                    = 17

};


// Enum  MeshModelingTools.EEdgeLoopInsertionMode
enum class EEdgeLoopInsertionMode : uint8_t
{
    Retriangulate                                  = 0,
    PlaneCut                                       = 1,
    EEdgeLoopInsertionMode                         = 2

};


// Enum  MeshModelingTools.EEdgeLoopPositioningMode
enum class EEdgeLoopPositioningMode : uint8_t
{
    Even                                           = 0,
    ProportionOffset                               = 1,
    DistanceOffset                                 = 2,
    EEdgeLoopPositioningMode                       = 3

};


// Enum  MeshModelingTools.EPolyEditCutPlaneOrientation
enum class EPolyEditCutPlaneOrientation : uint8_t
{
    FaceNormals                                    = 0,
    ViewDirection                                  = 1,
    EPolyEditCutPlaneOrientation                   = 2

};


// Enum  MeshModelingTools.EPolyEditExtrudeDirection
enum class EPolyEditExtrudeDirection : uint8_t
{
    SelectionNormal                                = 0,
    WorldX                                         = 1,
    WorldY                                         = 2,
    WorldZ                                         = 3,
    LocalX                                         = 4,
    LocalY                                         = 5,
    LocalZ                                         = 6,
    EPolyEditExtrudeDirection                      = 7

};


// Enum  MeshModelingTools.EEditMeshPolygonsToolActions
enum class EEditMeshPolygonsToolActions : uint8_t
{
    NoAction                                       = 0,
    PlaneCut                                       = 1,
    Extrude                                        = 2,
    Offset                                         = 3,
    Inset                                          = 4,
    Outset                                         = 5,
    Merge                                          = 6,
    Delete                                         = 7,
    CutFaces                                       = 8,
    RecalculateNormals                             = 9,
    FlipNormals                                    = 10,
    Retriangulate                                  = 11,
    Decompose                                      = 12,
    Disconnect                                     = 13,
    CollapseEdge                                   = 14,
    WeldEdges                                      = 15,
    StraightenEdge                                 = 16,
    FillHole                                       = 17,
    PlanarProjectionUV                             = 18,
    PokeSingleFace                                 = 19,
    SplitSingleEdge                                = 20,
    FlipSingleEdge                                 = 21,
    CollapseSingleEdge                             = 22,
    EEditMeshPolygonsToolActions                   = 23

};


// Enum  MeshModelingTools.ELocalFrameMode
enum class ELocalFrameMode : uint8_t
{
    FromObject                                     = 0,
    FromGeometry                                   = 1,
    ELocalFrameMode                                = 2

};


// Enum  MeshModelingTools.EEditPivotToolActions
enum class EEditPivotToolActions : uint8_t
{
    NoAction                                       = 0,
    Center                                         = 1,
    Bottom                                         = 2,
    Top                                            = 3,
    Left                                           = 4,
    Right                                          = 5,
    Front                                          = 6,
    Back                                           = 7,
    EEditPivotToolActions                          = 8

};


// Enum  MeshModelingTools.EEditPivotSnapDragRotationMode
enum class EEditPivotSnapDragRotationMode : uint8_t
{
    Ignore                                         = 0,
    Align                                          = 1,
    AlignFlipped                                   = 2,
    LastValue                                      = 3,
    EEditPivotSnapDragRotationMode                 = 4

};


// Enum  MeshModelingTools.EGroupEdgeInsertionMode
enum class EGroupEdgeInsertionMode : uint8_t
{
    Retriangulate                                  = 0,
    PlaneCut                                       = 1,
    EGroupEdgeInsertionMode                        = 2

};


// Enum  MeshModelingTools.EHoleFillToolActions
enum class EHoleFillToolActions : uint8_t
{
    NoAction                                       = 0,
    SelectAll                                      = 1,
    ClearSelection                                 = 2,
    EHoleFillToolActions                           = 3

};


// Enum  MeshModelingTools.EMeshAttributePaintToolActions
enum class EMeshAttributePaintToolActions : uint8_t
{
    NoAction                                       = 0,
    EMeshAttributePaintToolActions                 = 1

};


// Enum  MeshModelingTools.EPlaneBrushSideMode
enum class EPlaneBrushSideMode : uint8_t
{
    BothSides                                      = 0,
    PushDown                                       = 1,
    PullTowards                                    = 2,
    EPlaneBrushSideMode                            = 3

};


// Enum  MeshModelingTools.EMeshEditingMaterialModes
enum class EMeshEditingMaterialModes : uint8_t
{
    ExistingMaterial                               = 0,
    Diffuse                                        = 1,
    Grey                                           = 2,
    Soft                                           = 3,
    TangentNormal                                  = 4,
    Custom                                         = 5,
    EMeshEditingMaterialModes                      = 6

};


// Enum  MeshModelingTools.ESetMeshMaterialMode
enum class ESetMeshMaterialMode : uint8_t
{
    KeepOriginal                                   = 0,
    Checkerboard                                   = 1,
    Override                                       = 2,
    ESetMeshMaterialMode                           = 3

};


// Enum  MeshModelingTools.EMeshSculptFalloffType
enum class EMeshSculptFalloffType : uint8_t
{
    Smooth                                         = 0,
    Linear                                         = 1,
    Inverse                                        = 2,
    Round                                          = 3,
    BoxSmooth                                      = 4,
    BoxLinear                                      = 5,
    BoxInverse                                     = 6,
    BoxRound                                       = 7,
    LastValue                                      = 8,
    EMeshSculptFalloffType                         = 9

};


// Enum  MeshModelingTools.EMeshFacesColorMode
enum class EMeshFacesColorMode : uint8_t
{
    None                                           = 0,
    ByGroup                                        = 1,
    ByMaterialID                                   = 2,
    ByUVIsland                                     = 3,
    EMeshFacesColorMode                            = 4

};


// Enum  MeshModelingTools.EMeshSelectionToolPrimaryMode
enum class EMeshSelectionToolPrimaryMode : uint8_t
{
    Brush                                          = 0,
    VolumetricBrush                                = 1,
    AngleFiltered                                  = 2,
    Visible                                        = 3,
    AllConnected                                   = 4,
    AllInGroup                                     = 5,
    ByMaterial                                     = 6,
    ByUVIsland                                     = 7,
    AllWithinAngle                                 = 8,
    EMeshSelectionToolPrimaryMode                  = 9

};


// Enum  MeshModelingTools.EMeshSelectionToolActions
enum class EMeshSelectionToolActions : uint8_t
{
    NoAction                                       = 0,
    SelectAll                                      = 1,
    ClearSelection                                 = 2,
    InvertSelection                                = 3,
    GrowSelection                                  = 4,
    ShrinkSelection                                = 5,
    ExpandToConnected                              = 6,
    SelectLargestComponentByTriCount               = 7,
    SelectLargestComponentByArea                   = 8,
    OptimizeSelection                              = 9,
    DeleteSelected                                 = 10,
    DisconnectSelected                             = 11,
    SeparateSelected                               = 12,
    FlipSelected                                   = 13,
    CreateGroup                                    = 14,
    CycleSelectionMode                             = 15,
    CycleViewMode                                  = 16,
    EMeshSelectionToolActions                      = 17

};


// Enum  MeshModelingTools.ENonlinearOperationType
enum class ENonlinearOperationType : uint8_t
{
    Bend                                           = 0,
    Flare                                          = 1,
    Twist                                          = 2,
    ENonlinearOperationType                        = 3

};


// Enum  MeshModelingTools.EMeshVertexSculptBrushType
enum class EMeshVertexSculptBrushType : uint8_t
{
    Move                                           = 0,
    PullKelvin                                     = 1,
    PullSharpKelvin                                = 2,
    Smooth                                         = 3,
    SmoothFill                                     = 4,
    Offset                                         = 5,
    SculptView                                     = 6,
    SculptMax                                      = 7,
    Inflate                                        = 8,
    ScaleKelvin                                    = 9,
    Pinch                                          = 10,
    TwistKelvin                                    = 11,
    Flatten                                        = 12,
    Plane                                          = 13,
    PlaneViewAligned                               = 14,
    FixedPlane                                     = 15,
    LastValue                                      = 16,
    EMeshVertexSculptBrushType                     = 17

};


// Enum  MeshModelingTools.EMirrorToolAction
enum class EMirrorToolAction : uint8_t
{
    NoAction                                       = 0,
    ShiftToCenter                                  = 1,
    Left                                           = 2,
    Right                                          = 3,
    Up                                             = 4,
    Down                                           = 5,
    Forward                                        = 6,
    Backward                                       = 7,
    EMirrorToolAction                              = 8

};


// Enum  MeshModelingTools.EMirrorCtrlClickBehavior
enum class EMirrorCtrlClickBehavior : uint8_t
{
    Reposition                                     = 0,
    RepositionAndReorient                          = 1,
    EMirrorCtrlClickBehavior                       = 2

};


// Enum  MeshModelingTools.EMirrorOperationMode
enum class EMirrorOperationMode : uint8_t
{
    MirrorAndAppend                                = 0,
    MirrorExisting                                 = 1,
    EMirrorOperationMode                           = 2

};


// Enum  MeshModelingTools.EMirrorSaveMode
enum class EMirrorSaveMode : uint8_t
{
    UpdateAssets                                   = 0,
    CreateNewAssets                                = 1,
    EMirrorSaveMode                                = 2

};


// Enum  MeshModelingTools.EOffsetMeshToolOffsetType
enum class EOffsetMeshToolOffsetType : uint8_t
{
    Iterative                                      = 0,
    Implicit                                       = 1,
    EOffsetMeshToolOffsetType                      = 2

};


// Enum  MeshModelingTools.EMaterialBoundaryConstraint
enum class EMaterialBoundaryConstraint : uint8_t
{
    Fixed                                          = 7,
    Refine                                         = 5,
    Free                                           = 1,
    Ignore                                         = 0,
    EMaterialBoundaryConstraint                    = 8

};


// Enum  MeshModelingTools.EGroupBoundaryConstraint
enum class EGroupBoundaryConstraint : uint8_t
{
    Fixed                                          = 7,
    Refine                                         = 5,
    Free                                           = 1,
    Ignore                                         = 0,
    EGroupBoundaryConstraint                       = 8

};


// Enum  MeshModelingTools.EMeshBoundaryConstraint
enum class EMeshBoundaryConstraint : uint8_t
{
    Fixed                                          = 7,
    Refine                                         = 5,
    Free                                           = 1,
    EMeshBoundaryConstraint                        = 8

};


// Enum  MeshModelingTools.EOcclusionCalculationUIMode
enum class EOcclusionCalculationUIMode : uint8_t
{
    GeneralizedWindingNumber                       = 0,
    RaycastOcclusionSamples                        = 1,
    EOcclusionCalculationUIMode                    = 2

};


// Enum  MeshModelingTools.EOcclusionTriangleSamplingUIMode
enum class EOcclusionTriangleSamplingUIMode : uint8_t
{
    Vertices                                       = 0,
    VerticesAndCentroids                           = 1,
    EOcclusionTriangleSamplingUIMode               = 2

};


// Enum  MeshModelingTools.ERevolvePropertiesQuadSplit
enum class ERevolvePropertiesQuadSplit : uint8_t
{
    Uniform                                        = 0,
    ShortestDiagonal                               = 1,
    ERevolvePropertiesQuadSplit                    = 2

};


// Enum  MeshModelingTools.ERevolvePropertiesPolygroupMode
enum class ERevolvePropertiesPolygroupMode : uint8_t
{
    Single                                         = 0,
    PerFace                                        = 1,
    PerStep                                        = 2,
    AccordingToProfileCurve                        = 3,
    ERevolvePropertiesPolygroupMode                = 4

};


// Enum  MeshModelingTools.ERevolvePropertiesCapFillMode
enum class ERevolvePropertiesCapFillMode : uint8_t
{
    None                                           = 0,
    Delaunay                                       = 1,
    EarClipping                                    = 2,
    CenterFan                                      = 3,
    ERevolvePropertiesCapFillMode                  = 4

};


// Enum  MeshModelingTools.EProjectedHullAxis
enum class EProjectedHullAxis : uint8_t
{
    X                                              = 0,
    Y                                              = 1,
    Z                                              = 2,
    SmallestBoxDimension                           = 3,
    SmallestVolume                                 = 4,
    EProjectedHullAxis                             = 5

};


// Enum  MeshModelingTools.ECollisionGeometryType
enum class ECollisionGeometryType : uint8_t
{
    KeepExisting                                   = 0,
    AlignedBoxes                                   = 1,
    OrientedBoxes                                  = 2,
    MinimalSpheres                                 = 3,
    Capsules                                       = 4,
    ConvexHulls                                    = 5,
    SweptHulls                                     = 6,
    MinVolume                                      = 10,
    None                                           = 11,
    ECollisionGeometryType                         = 12

};


// Enum  MeshModelingTools.ESetCollisionGeometryInputMode
enum class ESetCollisionGeometryInputMode : uint8_t
{
    CombineAll                                     = 0,
    PerInputObject                                 = 1,
    PerMeshComponent                               = 2,
    PerMeshGroup                                   = 3,
    ESetCollisionGeometryInputMode                 = 4

};


// Enum  MeshModelingTools.ESmoothMeshToolSmoothType
enum class ESmoothMeshToolSmoothType : uint8_t
{
    Iterative                                      = 0,
    Implicit                                       = 1,
    Diffusion                                      = 2,
    ESmoothMeshToolSmoothType                      = 3

};


// Enum  MeshModelingTools.ETransformMeshesSnapDragRotationMode
enum class ETransformMeshesSnapDragRotationMode : uint8_t
{
    Ignore                                         = 0,
    Align                                          = 1,
    AlignFlipped                                   = 2,
    LastValue                                      = 3,
    ETransformMeshesSnapDragRotationMode           = 4

};


// Enum  MeshModelingTools.ETransformMeshesSnapDragSource
enum class ETransformMeshesSnapDragSource : uint8_t
{
    ClickPoint                                     = 0,
    Pivot                                          = 1,
    LastValue                                      = 2,
    ETransformMeshesSnapDragSource                 = 3

};


// Enum  MeshModelingTools.ETransformMeshesTransformMode
enum class ETransformMeshesTransformMode : uint8_t
{
    SharedGizmo                                    = 0,
    SharedGizmoLocal                               = 1,
    PerObjectGizmo                                 = 2,
    LastValue                                      = 3,
    ETransformMeshesTransformMode                  = 4

};


// Enum  HairStrandsCore.EHairCardsSourceType
enum class EHairCardsSourceType : uint8_t
{
    Procedural                                     = 0,
    Imported                                       = 1,
    EHairCardsSourceType                           = 2

};


// Enum  HairStrandsCore.EHairCardsGenerationType
enum class EHairCardsGenerationType : uint8_t
{
    CardsCount                                     = 0,
    UseGuides                                      = 1,
    EHairCardsGenerationType                       = 2

};


// Enum  HairStrandsCore.EHairCardsClusterType
enum class EHairCardsClusterType : uint8_t
{
    Low                                            = 0,
    High                                           = 1,
    EHairCardsClusterType                          = 2

};


// Enum  HairStrandsCore.EGroomGeometryType
enum class EGroomGeometryType : uint8_t
{
    Strands                                        = 0,
    Cards                                          = 1,
    Meshes                                         = 2,
    EGroomGeometryType                             = 3

};


// Enum  HairStrandsCore.EHairLODSelectionType
enum class EHairLODSelectionType : uint8_t
{
    Cpu                                            = 0,
    Gpu                                            = 1,
    EHairLODSelectionType                          = 2

};


// Enum  HairStrandsCore.EHairInterpolationWeight
enum class EHairInterpolationWeight : uint8_t
{
    Parametric                                     = 0,
    Root                                           = 1,
    Index                                          = 2,
    Unknown                                        = 3,
    EHairInterpolationWeight                       = 4

};


// Enum  HairStrandsCore.EHairInterpolationQuality
enum class EHairInterpolationQuality : uint8_t
{
    Low                                            = 0,
    Medium                                         = 1,
    High                                           = 2,
    Unknown                                        = 3,
    EHairInterpolationQuality                      = 4

};


// Enum  HairStrandsCore.EGroomInterpolationType
enum class EGroomInterpolationType : uint8_t
{
    None                                           = 0,
    RigidTransform                                 = 2,
    OffsetTransform                                = 4,
    SmoothTransform                                = 8,
    EGroomInterpolationType                        = 9

};


// Enum  HairStrandsCore.EGroomStrandsSize
enum class EGroomStrandsSize : uint8_t
{
    None                                           = 0,
    Size2                                          = 2,
    Size4                                          = 4,
    Size8                                          = 8,
    Size16                                         = 16,
    Size32                                         = 32,
    EGroomStrandsSize                              = 33

};


// Enum  HairStrandsCore.EGroomNiagaraSolvers
enum class EGroomNiagaraSolvers : uint8_t
{
    None                                           = 0,
    CosseratRods                                   = 2,
    AngularSprings                                 = 4,
    CustomSolver                                   = 8,
    EGroomNiagaraSolvers                           = 9

};


// Enum  HairStrandsCore.EFollicleMaskChannel
enum class EFollicleMaskChannel : uint8_t
{
    R                                              = 0,
    G                                              = 1,
    B                                              = 2,
    A                                              = 3,
    EFollicleMaskChannel                           = 4

};


// Enum  HairStrandsCore.EStrandsTexturesMeshType
enum class EStrandsTexturesMeshType : uint8_t
{
    Static                                         = 0,
    Skeletal                                       = 1,
    EStrandsTexturesMeshType                       = 2

};


// Enum  HairStrandsCore.EStrandsTexturesTraceType
enum class EStrandsTexturesTraceType : uint8_t
{
    TraceInside                                    = 0,
    TraceOuside                                    = 1,
    TraceBidirectional                             = 2,
    EStrandsTexturesTraceType                      = 3

};


// Enum  HairStrandsCore.EGroomInterpolationWeight
enum class EGroomInterpolationWeight : uint8_t
{
    Parametric                                     = 0,
    Root                                           = 1,
    Index                                          = 2,
    Unknown                                        = 3,
    EGroomInterpolationWeight                      = 4

};


// Enum  HairStrandsCore.EGroomInterpolationQuality
enum class EGroomInterpolationQuality : uint8_t
{
    Low                                            = 0,
    Medium                                         = 1,
    High                                           = 2,
    Unknown                                        = 3,
    EGroomInterpolationQuality                     = 4

};


// Enum  MotionWarping.EWarpPointAnimProvider
enum class EWarpPointAnimProvider : uint8_t
{
    None                                           = 0,
    Static                                         = 1,
    Bone                                           = 2,
    EWarpPointAnimProvider                         = 3

};


// Enum  MotionWarping.EMotionWarpRotationType
enum class EMotionWarpRotationType : uint8_t
{
    Default                                        = 0,
    Facing                                         = 1,
    EMotionWarpRotationType                        = 2

};


// Enum  MotionWarping.ERootMotionModifierState
enum class ERootMotionModifierState : uint8_t
{
    Waiting                                        = 0,
    Active                                         = 1,
    MarkedForRemoval                               = 2,
    Disabled                                       = 3,
    ERootMotionModifierState                       = 4

};


// Enum  AnimationWarpingRuntime.EStrideWarpingAxisMode
enum class EStrideWarpingAxisMode : uint8_t
{
    IKFootRootLocalX                               = 0,
    IKFootRootLocalY                               = 1,
    IKFootRootLocalZ                               = 2,
    WorldSpaceVectorInput                          = 3,
    ComponentSpaceVectorInput                      = 4,
    ActorSpaceVectorInput                          = 5,
    EStrideWarpingAxisMode                         = 6

};


// Enum  OodleNetworkHandlerComponent.EOodleEnableMode
enum class EOodleEnableMode : uint8_t
{
    AlwaysEnabled                                  = 0,
    WhenCompressedPacketReceived                   = 1,
    EOodleEnableMode                               = 2

};


// Enum  DLSS.EDLSSSettingOverride
enum class EDLSSSettingOverride : uint8_t
{
    Enabled                                        = 0,
    Disabled                                       = 1,
    UseProjectSettings                             = 2,
    EDLSSSettingOverride                           = 3

};


// Enum  DLSSBlueprint.UDLSSMode
enum class UDLSSMode : uint8_t
{
    Off                                            = 0,
    Auto                                           = 1,
    UltraQuality                                   = 2,
    Quality                                        = 3,
    Balanced                                       = 4,
    Performance                                    = 5,
    UltraPerformance                               = 6,
    UDLSSMode                                      = 7

};


// Enum  DLSSBlueprint.UDLSSSupport
enum class UDLSSSupport : uint8_t
{
    Supported                                      = 0,
    NotSupported                                   = 1,
    NotSupportedIncompatibleHardware               = 2,
    NotSupportedDriverOutOfDate                    = 3,
    NotSupportedOperatingSystemOutOfDate           = 4,
    NotSupportedByPlatformAtBuildTime              = 5,
    UDLSSSupport                                   = 6

};


// Enum  DLSS3.EDLSSPreset
enum class EDLSSPreset : uint8_t
{
    Default                                        = 0,
    A                                              = 1,
    B                                              = 2,
    C                                              = 3,
    D                                              = 4,
    E                                              = 5,
    F                                              = 6,
    G                                              = 7,
    EDLSSPreset                                    = 8

};


// Enum  DLSS3.EDLSS3SettingOverride
enum class EDLSS3SettingOverride : uint8_t
{
    Enabled                                        = 0,
    Disabled                                       = 1,
    UseProjectSettings                             = 2,
    EDLSS3SettingOverride                          = 3

};


// Enum  MFGlobalEvent.EMFGlobalEventTriggerType
enum class EMFGlobalEventTriggerType : uint8_t
{
    Owner                                          = 0,
    Global                                         = 1,
    EMFGlobalEventTriggerType                      = 2

};


// Enum  MFGlobalEventParameterTags.EMFGlobalEventParameterContainerMatchType
enum class EMFGlobalEventParameterContainerMatchType : uint8_t
{
    Any                                            = 0,
    All                                            = 1,
    EMFGlobalEventParameterContainerMatchType      = 2

};


// Enum  MFGlobalEventParameterTags.EMFGlobalEventParameterTagMatchType
enum class EMFGlobalEventParameterTagMatchType : uint8_t
{
    Explicit                                       = 0,
    IncludeParentTags                              = 1,
    EMFGlobalEventParameterTagMatchType            = 2

};


// Enum  MFGlobalEventParameterTags.EMFGlobalEventParameterTagSelectionType
enum class EMFGlobalEventParameterTagSelectionType : uint8_t
{
    None                                           = 0,
    NonRestrictedOnly                              = 1,
    RestrictedOnly                                 = 2,
    All                                            = 3,
    EMFGlobalEventParameterTagSelectionType        = 4

};


// Enum  MFGlobalEventParameterTags.EMFGlobalEventParameterTagSourceType
enum class EMFGlobalEventParameterTagSourceType : uint8_t
{
    Native                                         = 0,
    DefaultTagList                                 = 1,
    TagList                                        = 2,
    RestrictedTagList                              = 3,
    DataTable                                      = 4,
    Invalid                                        = 5,
    EMFGlobalEventParameterTagSourceType           = 6

};


// Enum  MFGlobalEventTags.EMFGlobalEventContainerMatchType
enum class EMFGlobalEventContainerMatchType : uint8_t
{
    Any                                            = 0,
    All                                            = 1,
    EMFGlobalEventContainerMatchType               = 2

};


// Enum  MFGlobalEventTags.EMFGlobalEventTagMatchType
enum class EMFGlobalEventTagMatchType : uint8_t
{
    Explicit                                       = 0,
    IncludeParentTags                              = 1,
    EMFGlobalEventTagMatchType                     = 2

};


// Enum  MFGlobalEventTags.EMFGlobalEventTagSelectionType
enum class EMFGlobalEventTagSelectionType : uint8_t
{
    None                                           = 0,
    NonRestrictedOnly                              = 1,
    RestrictedOnly                                 = 2,
    All                                            = 3,
    EMFGlobalEventTagSelectionType                 = 4

};


// Enum  MFGlobalEventTags.EMFGlobalEventTagSourceType
enum class EMFGlobalEventTagSourceType : uint8_t
{
    Native                                         = 0,
    DefaultTagList                                 = 1,
    TagList                                        = 2,
    RestrictedTagList                              = 3,
    DataTable                                      = 4,
    Invalid                                        = 5,
    EMFGlobalEventTagSourceType                    = 6

};


// Enum  MFMission.EMissionTimeLimitType
enum class EMissionTimeLimitType : uint8_t
{
    None                                           = 0,
    EnterGame                                      = 1,
    TimeRecord                                     = 2,
    EMissionTimeLimitType                          = 3

};


// Enum  MFMission.EMissionFlowConnectionType
enum class EMissionFlowConnectionType : uint8_t
{
    ProgressChanged                                = 0,
    StatusSucceed                                  = 1,
    StatusFailed                                   = 2,
    EMissionFlowConnectionType                     = 3

};


// Enum  MFMission.EMFMissionFlowTextKeyOperation
enum class EMFMissionFlowTextKeyOperation : uint8_t
{
    Equal                                          = 0,
    NotEqual                                       = 1,
    Contain                                        = 2,
    NotContain                                     = 3,
    EMFMissionFlowTextKeyOperation                 = 4

};


// Enum  MFMission.EMFMissionFlowArithmeticKeyOperation
enum class EMFMissionFlowArithmeticKeyOperation : uint8_t
{
    Equal                                          = 0,
    NotEqual                                       = 1,
    Less                                           = 2,
    LessOrEqual                                    = 3,
    Greater                                        = 4,
    GreaterOrEqual                                 = 5,
    EMFMissionFlowArithmeticKeyOperation           = 6

};


// Enum  MFMission.EMFMissionFlowBasicKeyOperation
enum class EMFMissionFlowBasicKeyOperation : uint8_t
{
    Set                                            = 0,
    NotSet                                         = 1,
    EMFMissionFlowBasicKeyOperation                = 2

};


// Enum  MFMission.EMissionFlowCompleteType
enum class EMissionFlowCompleteType : uint8_t
{
    OneBattle                                      = 0,
    MultipleBattle                                 = 1,
    EMissionFlowCompleteType                       = 2

};


// Enum  MFMission.EMissionFlowType
enum class EMissionFlowType : uint8_t
{
    Normal                                         = 0,
    Activity                                       = 1,
    EMissionFlowType                               = 2

};


// Enum  MFMission.EMissionFlowNodeStatus
enum class EMissionFlowNodeStatus : uint8_t
{
    Inactive                                       = 0,
    Active                                         = 1,
    EMissionFlowNodeStatus                         = 2

};


// Enum  MFMission.EMissionFlowNodeType
enum class EMissionFlowNodeType : uint8_t
{
    BaseNode                                       = 0,
    CheckNode                                      = 1,
    RelationNode                                   = 2,
    AssembleNode                                   = 3,
    AffiliateNode                                  = 4,
    BehaviorNode                                   = 5,
    EMissionFlowNodeType                           = 6

};


// Enum  MFMission.EMissionObjectiveConditionCheckType
enum class EMissionObjectiveConditionCheckType : uint8_t
{
    And                                            = 0,
    Or                                             = 1,
    EMissionObjectiveConditionCheckType            = 2

};


// Enum  MFMission.EMissionRelatedTeamType
enum class EMissionRelatedTeamType : uint8_t
{
    TargetTeammateOnly                             = 0,
    RandomTeam                                     = 1,
    EMissionRelatedTeamType                        = 2

};


// Enum  MFMission.EMissionRelatedTargetType
enum class EMissionRelatedTargetType : uint8_t
{
    TargetOnly                                     = 0,
    TargetTeammateOnly                             = 1,
    RandomTeam                                     = 2,
    AllPMC                                         = 3,
    AllSCAV                                        = 4,
    EMissionRelatedTargetType                      = 5

};


// Enum  MFMission.EMissionCompareType
enum class EMissionCompareType : uint8_t
{
    CMP                                            = 0,
    CMP                                            = 1,
    CMP                                            = 2,
    CMP                                            = 3,
    CMP                                            = 4,
    CMP                                            = 5,
    CMP                                            = 6,
    CMP                                            = 7,
    CMP                                            = 8

};


// Enum  MFMission.EMissionInstigatorType
enum class EMissionInstigatorType : uint8_t
{
    None                                           = 0,
    Individual                                     = 1,
    Team                                           = 2,
    Public                                         = 3,
    EMissionInstigatorType                         = 4

};


// Enum  MFMission.EMissionConditionCheckType
enum class EMissionConditionCheckType : uint8_t
{
    Event                                          = 0,
    Tick                                           = 1,
    Both                                           = 2,
    EMissionConditionCheckType                     = 3

};


// Enum  MFMission.EMissionConditionType
enum class EMissionConditionType : uint8_t
{
    Keeping                                        = 0,
    Filter                                         = 1,
    EMissionConditionType                          = 2

};


// Enum  MFMission.EMissionFailedType
enum class EMissionFailedType : uint8_t
{
    Normal                                         = 0,
    TimeOut                                        = 1,
    EMissionFailedType                             = 2

};


// Enum  MFMission.EMissionHelpType
enum class EMissionHelpType : uint8_t
{
    Alone                                          = 0,
    Teammate                                       = 1,
    Anyone                                         = 2,
    EMissionHelpType                               = 3

};


// Enum  MFMission.EMissionDataType
enum class EMissionDataType : uint8_t
{
    Person                                         = 0,
    Team                                           = 1,
    Faction                                        = 2,
    World                                          = 3,
    EMissionDataType                               = 4

};


// Enum  MFMission.ERunMissionResult
enum class ERunMissionResult : uint8_t
{
    Success                                        = 0,
    Failed                                         = 1,
    ERunMissionResult                              = 2

};


// Enum  MFMission.EMissionStatus
enum class EMissionStatus : uint8_t
{
    Inactive                                       = 0,
    InProcess                                      = 1,
    Success                                        = 2,
    Failed                                         = 3,
    EMissionStatus                                 = 4

};


// Enum  MFMission.EMFMissionDataChangeType
enum class EMFMissionDataChangeType : uint8_t
{
    MissionFlowStatus                              = 0,
    MissionStatus                                  = 1,
    CurProgress                                    = 2,
    RemainTime                                     = 3,
    EMFMissionDataChangeType                       = 4

};


// Enum  FSR2TemporalUpscaling.EFSR2HistoryFormat
enum class EFSR2HistoryFormat : uint8_t
{
    FloatRGBA                                      = 0,
    FloatR11G11B10                                 = 1,
    EFSR2HistoryFormat                             = 2

};


// Enum  FSR2TemporalUpscaling.EFSR2QualityMode
enum class EFSR2QualityMode : uint8_t
{
    Unused                                         = 0,
    Quality                                        = 1,
    Balanced                                       = 2,
    Performance                                    = 3,
    UltraPerformance                               = 4,
    EFSR2QualityMode                               = 5

};


// Enum  OnlineSubsystem.EInAppPurchaseState
enum class EInAppPurchaseState : uint8_t
{
    Unknown                                        = 0,
    Success                                        = 1,
    Failed                                         = 2,
    Cancelled                                      = 3,
    Invalid                                        = 4,
    NotAllowed                                     = 5,
    Restored                                       = 6,
    AlreadyOwned                                   = 7,
    EInAppPurchaseState                            = 8

};


// Enum  OnlineSubsystem.EMPMatchOutcome
enum class EMPMatchOutcome : uint8_t
{
    None                                           = 0,
    Quit                                           = 1,
    Won                                            = 2,
    Lost                                           = 3,
    Tied                                           = 4,
    TimeExpired                                    = 5,
    First                                          = 6,
    Second                                         = 7,
    Third                                          = 8,
    Fourth                                         = 9,
    EMPMatchOutcome                                = 10

};


// Enum  OnlineSubsystemUtils.EInAppPurchaseStatus
enum class EInAppPurchaseStatus : uint8_t
{
    Invalid                                        = 0,
    Failed                                         = 1,
    Deferred                                       = 2,
    Canceled                                       = 3,
    Purchased                                      = 4,
    Restored                                       = 5,
    EInAppPurchaseStatus                           = 6

};


// Enum  OnlineSubsystemUtils.EOnlineProxyStoreOfferDiscountType
enum class EOnlineProxyStoreOfferDiscountType : uint8_t
{
    NotOnSale                                      = 0,
    Percentage                                     = 1,
    DiscountAmount                                 = 2,
    PayAmount                                      = 3,
    EOnlineProxyStoreOfferDiscountType             = 4

};


// Enum  OnlineSubsystemUtils.EBeaconConnectionState
enum class EBeaconConnectionState : uint8_t
{
    Invalid                                        = 0,
    Closed                                         = 1,
    Pending                                        = 2,
    Open                                           = 3,
    EBeaconConnectionState                         = 4

};


// Enum  OnlineSubsystemUtils.EClientRequestType
enum class EClientRequestType : uint8_t
{
    NonePending                                    = 0,
    ExistingSessionReservation                     = 1,
    ReservationUpdate                              = 2,
    EmptyServerReservation                         = 3,
    Reconnect                                      = 4,
    Abandon                                        = 5,
    ReservationRemoveMembers                       = 6,
    EClientRequestType                             = 7

};


// Enum  OnlineSubsystemUtils.EPartyReservationResult
enum class EPartyReservationResult : uint8_t
{
    NoResult                                       = 0,
    RequestPending                                 = 1,
    GeneralError                                   = 2,
    PartyLimitReached                              = 3,
    IncorrectPlayerCount                           = 4,
    RequestTimedOut                                = 5,
    ReservationDuplicate                           = 6,
    ReservationNotFound                            = 7,
    ReservationAccepted                            = 8,
    ReservationDenied                              = 9,
    ReservationDenied                              = 10,
    ReservationDenied                              = 11,
    ReservationRequestCanceled                     = 12,
    ReservationInvalid                             = 13,
    BadSessionId                                   = 14,
    ReservationDenied                              = 15,
    EPartyReservationResult                        = 16

};


// Enum  OnlineSubsystemUtils.ESpectatorClientRequestType
enum class ESpectatorClientRequestType : uint8_t
{
    NonePending                                    = 0,
    ExistingSessionReservation                     = 1,
    ReservationUpdate                              = 2,
    EmptyServerReservation                         = 3,
    Reconnect                                      = 4,
    Abandon                                        = 5,
    ESpectatorClientRequestType                    = 6

};


// Enum  OnlineSubsystemUtils.ESpectatorReservationResult
enum class ESpectatorReservationResult : uint8_t
{
    NoResult                                       = 0,
    RequestPending                                 = 1,
    GeneralError                                   = 2,
    SpectatorLimitReached                          = 3,
    IncorrectPlayerCount                           = 4,
    RequestTimedOut                                = 5,
    ReservationDuplicate                           = 6,
    ReservationNotFound                            = 7,
    ReservationAccepted                            = 8,
    ReservationDenied                              = 9,
    ReservationDenied                              = 10,
    ReservationDenied                              = 11,
    ReservationRequestCanceled                     = 12,
    ReservationInvalid                             = 13,
    BadSessionId                                   = 14,
    ReservationDenied                              = 15,
    ESpectatorReservationResult                    = 16

};


// Enum  AIServiceSDK.EMFAIRLMode
enum class EMFAIRLMode : uint8_t
{
    DisableRL                                      = 0,
    Training                                       = 1,
    Inference                                      = 2,
    EMFAIRLMode                                    = 3

};


// Enum  FalconLandscapeMixerShader.ESubRegionReductionKernel
enum class ESubRegionReductionKernel : uint8_t
{
    Min                                            = 0,
    Max                                            = 1,
    Mean                                           = 2

};


// Enum  FalconLandscapeMixerShader.EScriptUtilityBufferFormat
enum class EScriptUtilityBufferFormat : uint8_t
{
    Float                                          = 0,
    UInt                                           = 1,
    EScriptUtilityBufferFormat                     = 2

};


// Enum  FalconLandscapeMixerShader.EFalconBicubicFunction
enum class EFalconBicubicFunction : uint8_t
{
    BSpline                                        = 0,
    Custom                                         = 1,
    CatmullRom                                     = 2,
    EFalconBicubicFunction                         = 3

};


// Enum  ReliefMapping.EReliefMapping
enum class EReliefMapping : uint8_t
{
    R                                              = 0,
    G                                              = 1,
    B                                              = 2,
    A                                              = 3,
    EReliefMapping                                 = 4

};


// Enum  ReliefMapping.EReliefMapping
enum class EReliefMapping : uint8_t
{
    RMC                                            = 0,
    RMC                                            = 5,
    RMC                                            = 6,
    RMC                                            = 7,
    RMC                                            = 8,
    RMC                                            = 9,
    RMC                                            = 10,
    RMC                                            = 11,
    RMC                                            = 12,
    RMC                                            = 13

};


// Enum  ReliefMapping.EReliefMapping
enum class EReliefMapping : uint8_t
{
    RelaxedConeStepMap                             = 0,
    AnisotropicConeStepMap                         = 1,
    HeightMap                                      = 2,
    EReliefMapping                                 = 3

};


// Enum  INTLCore.FINTLFunnelStep
enum class FINTLFunnelStep : uint8_t
{
    kStartAppLaunch                                = 0,
    kAgreementShowUserAgreement                    = 1,
    kAgreementFinishUserAgreement                  = 2,
    kUpdateCheckForUpdates                         = 3,
    kUpdateDownloadUpdates                         = 4,
    kUpdateUnzipFiles                              = 5,
    kUpdateCompleteUpdates                         = 6,
    kAuthConfirmLoginChannel                       = 7,
    kAuthChannelAuthSuccess                        = 8,
    kAuthLoginAuthSuccess                          = 9,
    kPolicyQueryCompliance                         = 10,
    kPolicySelectRegionAndAge                      = 11,
    kPolicyAgreePrivacyPolicy                      = 12,
    kPolicyPrivacyAuthSucess                       = 13,
    kNavigateShowServerList                        = 14,
    kNavigateSubmitArea                            = 15,
    kNavigateConfirmArea                           = 16,
    kNavigateConnectSvrSuccess                     = 17,
    kEnterGameShowEnterGame                        = 18,
    kEnterGameClickIntoGame                        = 19,
    kLobbyEnterLobbySuccess                        = 20,
    kPayAuthentication                             = 21,
    kPayPullUpTheListOfGoods                       = 22,
    kPayPullUpPriceList                            = 23,
    kPayStartOrder                                 = 24,
    kPaySuccessfulOrder                            = 25,
    kPayStartPayment                               = 26,
    kPaySuccessfulPayment                          = 27,
    kPayStartDelivery                              = 28,
    kPaySuccessfulDelivery                         = 29,
    kAuthRegisterSuccess                           = 30,
    FINTLFunnelStep                                = 31

};


// Enum  INTLCore.EPGNAModule
enum class EPGNAModule : uint8_t
{
    kPGNAModuleUnknow                              = 0,
    kPGNAModuleDialTest                            = 1,
    kPGNAModuleAccelerator                         = 2,
    kPGNAModuleAll                                 = 3,
    EPGNAModule                                    = 4

};


// Enum  INTLCore.EINTLUpdateStep
enum class EINTLUpdateStep : uint8_t
{
    kUnknown                                       = 0,
    kFirstResourceAnalyze                          = 1,
    kCheckUpdate                                   = 2,
    kDownload                                      = 3,
    EINTLUpdateStep                                = 4

};


// Enum  INTLCore.EINTLUpdateResourceCopyType
enum class EINTLUpdateResourceCopyType : uint8_t
{
    kUnknown                                       = 0,
    kCopyAll                                       = 1,
    kCopyOnDemand                                  = 2,
    EINTLUpdateResourceCopyType                    = 3

};


// Enum  INTLCore.EINTLUpdateActionType
enum class EINTLUpdateActionType : uint8_t
{
    kUnknown                                       = 0,
    kAppUpdate                                     = 1,
    kResourceUpdate                                = 2,
    kResourceRepair                                = 3,
    EINTLUpdateActionType                          = 4

};


// Enum  INTLCore.EINTLUpdateNewVersionType
enum class EINTLUpdateNewVersionType : uint8_t
{
    kUnknown                                       = 0,
    kNoNeedUpdate                                  = 1,
    kOptionalUpdate                                = 2,
    kForcibleUpdate                                = 3,
    EINTLUpdateNewVersionType                      = 4

};


// Enum  INTLCore.EINTLCrashLevel
enum class EINTLCrashLevel : uint8_t
{
    LogLevelZero                                   = 0,
    EINTLCrashLevel                                = 1

};


// Enum  INTLCore.EINTLWebViewOrientation
enum class EINTLWebViewOrientation : uint8_t
{
    kAuto                                          = 0,
    kPortrait                                      = 1,
    kLandscape                                     = 2,
    EINTLWebViewOrientation                        = 3

};


// Enum  INTLCore.EINTLFriendReqType
enum class EINTLFriendReqType : uint8_t
{
    kReqText                                       = 0,
    kReqLink                                       = 1,
    kReqImage                                      = 2,
    kReqInvite                                     = 3,
    kReqVideo                                      = 4,
    EINTLFriendReqType                             = 5

};


// Enum  INTLCore.EPermissionType
enum class EPermissionType : uint8_t
{
    kPermissionTypeNone                            = 0,
    kPermissionTypeCamera                          = 1,
    kPermissionTypePhoto                           = 2,
    kPermissionTypeMicrophone                      = 3,
    kPermissionTypeLocation                        = 4,
    kPermissionTypeBluetooth                       = 5,
    kPermissionTypeCalendar                        = 6,
    kPermissionTypeRemind                          = 7,
    kPermissionTypeContacts                        = 8,
    kPermissionTypeTrack                           = 99,
    kPermissionTypeCameraAndroid                   = 101,
    kPermissionTypeReadPhoneState                  = 102,
    kPermissionTypeRecordAudio                     = 103,
    kPermissionTypeReadExternalStorage             = 104,
    kPermissionTypeWriteExternalStorage            = 105,
    kPermissionTypeAccessBackgroundLocation        = 106,
    kPermissionTypeAccessCoarseLocation            = 107,
    kPermissionTypeAccessFineLocation              = 108,
    kPermissionTypeAccessMediaLoaction             = 109,
    kPermissionTypeReadCalendar                    = 110,
    kPermissionTypeWriteCalendar                   = 111,
    kPermissionTypeBluetoothAdvertise              = 112,
    kPermissionTypeBluetoothConnect                = 113,
    kPermissionTypeBluetoothScan                   = 114,
    kPermissionTypeBodySensors                     = 115,
    kPermissionTypeBodySensorsBackground           = 116,
    kPermissionTypeCallPhone                       = 117,
    kPermissionTypeReadCallLog                     = 118,
    kPermissionTypeReadContacts                    = 119,
    kPermissionTypeWriteContacts                   = 120,
    kPermissionTypeWriteCallLog                    = 121,
    kPermissionTypeAddVoicemail                    = 122,
    kPermissionTypeAnswerPhoneCalls                = 123,
    kPermissionTypeGetAccounts                     = 124,
    kPermissionTypeNearbyWifyDevices               = 125,
    kPermissionTypePostNotifications               = 126,
    kPermissionTypeProcessOutgoingCalls            = 127,
    kPermissionTypeReadMediaAudio                  = 128,
    kPermissionTypeReadMediaImages                 = 129,
    kPermissionTypeReadMediaVideo                  = 130,
    kPermissionTypeReadPhoneNumbers                = 131,
    kPermissionTypeReadSMS                         = 132,
    kPermissionTypeReveiveMMS                      = 133,
    kPermissionTypeRceiveSMS                       = 134,
    kPermissionTypeReceiveWapPush                  = 135,
    kPermissionTypeSendSMS                         = 136,
    kPermissionTypeUseSIP                          = 137,
    kPermissionTypeUWBRanging                      = 138,
    kPermissionTypeActivityRecognition             = 139,
    kPermissionTypeAcceptHandover                  = 140,
    EPermissionType                                = 141

};


// Enum  INTLCore.EComplianceParentCertificateStatus
enum class EComplianceParentCertificateStatus : uint8_t
{
    kDeny                                          = 0,
    kUnknown                                       = 1,
    kAgree                                         = 2,
    EComplianceParentCertificateStatus             = 3

};


// Enum  INTLCore.EComplianceAgreeStatus
enum class EComplianceAgreeStatus : uint8_t
{
    kDeny                                          = 0,
    kUnknown                                       = 1,
    kAgree                                         = 2,
    EComplianceAgreeStatus                         = 3

};


// Enum  INTLCore.EComplianceAgeStatus
enum class EComplianceAgeStatus : uint8_t
{
    kMinor                                         = 0,
    kUnknown                                       = 1,
    kAdult                                         = 2,
    kBelowGrade                                    = 3,
    EComplianceAgeStatus                           = 4

};


// Enum  INTLCore.EINTLLoginChannel
enum class EINTLLoginChannel : uint8_t
{
    kChannelDefault                                = 0,
    kChannelW                                      = 1,
    kChannelQ                                      = 2,
    kChannelGuest                                  = 3,
    kChannelFacebook                               = 4,
    kChannelGameCenter                             = 5,
    kChannelGoogle                                 = 6,
    kChannelIEGPassport                            = 7,
    kChannelFirebase                               = 8,
    kChannelTwitter                                = 9,
    kChannelGarena                                 = 10,
    kChannelCustomAccount                          = 11,
    kChannelEGame                                  = 12,
    kChannelSwitch                                 = 13,
    kChannelLine                                   = 14,
    kChannelApple                                  = 15,
    kChannelVK                                     = 19,
    kChannelXbox                                   = 20,
    kChannelSteam                                  = 21,
    kChannelPS4                                    = 22,
    kChannelEpic                                   = 24,
    kChannelDiscord                                = 26,
    kChannelPS5                                    = 27,
    kChannelDmm                                    = 30,
    kChannelSquareEnix                             = 32,
    kChannelSupercell                              = 33,
    kChannelAppsFlyer                              = 34,
    kChannelKaKao                                  = 35,
    kChannelUbisoft                                = 37,
    kChannelVNG                                    = 38,
    kChannelGooglePGS                              = 39,
    kChannelEA                                     = 40,
    kChannelNintendo                               = 41,
    kChannelLevelInfinite                          = 131,
    EINTLLoginChannel                              = 132

};


// Enum  INTLCore.EVerifyCodeType
enum class EVerifyCodeType : uint8_t
{
    kVerifyCodeTypeRegister                        = 0,
    kVerifyCodeTypeResetPassword                   = 1,
    kVerifyCodeTypeRegisterThenLogin               = 2,
    kVerifyCodeTypeModifyAccount                   = 3,
    kVerifyCodeTypeUnBindLI                        = 4,
    kVerifyCodeTypeUnbindThirdChannel              = 5,
    EVerifyCodeType                                = 6

};


// Enum  INTLCore.EINTLAccountType
enum class EINTLAccountType : uint8_t
{
    kINTLAccountTypeNone                           = 0,
    kINTLAccountTypeEmail                          = 1,
    kINTLAccountTypeMobilePhone                    = 2,
    EINTLAccountType                               = 3

};


// Enum  UMG.ESlateAccessibleBehavior
enum class ESlateAccessibleBehavior : uint8_t
{
    NotAccessible                                  = 0,
    Auto                                           = 1,
    Summary                                        = 2,
    Custom                                         = 3,
    ToolTip                                        = 4,
    ESlateAccessibleBehavior                       = 5

};


// Enum  SlateCore.EUINavigation
enum class EUINavigation : uint8_t
{
    Left                                           = 0,
    Right                                          = 1,
    Up                                             = 2,
    Down                                           = 3,
    Next                                           = 4,
    Previous                                       = 5,
    Num                                            = 6,
    Invalid                                        = 7,
    EUINavigation                                  = 8

};


// Enum  SlateCore.ECheckBoxState
enum class ECheckBoxState : uint8_t
{
    Unchecked                                      = 0,
    Checked                                        = 1,
    Undetermined                                   = 2,
    ECheckBoxState                                 = 3

};


// Enum  SlateCore.EWidgetClipping
enum class EWidgetClipping : uint8_t
{
    Inherit                                        = 0,
    ClipToBounds                                   = 1,
    ClipToBoundsWithoutIntersecting                = 2,
    ClipToBoundsAlways                             = 3,
    OnDemand                                       = 4,
    EWidgetClipping                                = 5

};


// Enum  CoreUObject.EMouseCursor
enum class EMouseCursor : uint8_t
{
    None                                           = 0,
    Default                                        = 1,
    TextEditBeam                                   = 2,
    ResizeLeftRight                                = 3,
    ResizeUpDown                                   = 4,
    ResizeSouthEast                                = 5,
    ResizeSouthWest                                = 6,
    CardinalCross                                  = 7,
    Crosshairs                                     = 8,
    Hand                                           = 9,
    GrabHand                                       = 10,
    GrabHandClosed                                 = 11,
    SlashedCircle                                  = 12,
    EyeDropper                                     = 13,
    EMouseCursor                                   = 14

};


// Enum  SlateCore.ESlateBrushImageType
enum class ESlateBrushImageType : uint8_t
{
    NoImage                                        = 0,
    FullColor                                      = 1,
    Linear                                         = 2,
    ESlateBrushImageType                           = 3

};


// Enum  SlateCore.ESlateBrushMirrorType
enum class ESlateBrushMirrorType : uint8_t
{
    NoMirror                                       = 0,
    Horizontal                                     = 1,
    Vertical                                       = 2,
    Both                                           = 3,
    ESlateBrushMirrorType                          = 4

};


// Enum  SlateCore.ESlateBrushTileType
enum class ESlateBrushTileType : uint8_t
{
    NoTile                                         = 0,
    Horizontal                                     = 1,
    Vertical                                       = 2,
    Both                                           = 3,
    ESlateBrushTileType                            = 4

};


// Enum  SlateCore.ESlateBrushDrawType
enum class ESlateBrushDrawType : uint8_t
{
    NoDrawType                                     = 0,
    Box                                            = 1,
    Border                                         = 2,
    Image                                          = 3,
    ESlateBrushDrawType                            = 4

};


// Enum  SlateCore.ESlateColorStylingMode
enum class ESlateColorStylingMode : uint8_t
{
    UseColor                                       = 0,
    UseColor                                       = 1,
    UseColor                                       = 2,
    UseColor                                       = 3,
    UseColor                                       = 4

};


// Enum  UMG.ESlateVisibility
enum class ESlateVisibility : uint8_t
{
    Visible                                        = 0,
    Collapsed                                      = 1,
    Hidden                                         = 2,
    HitTestInvisible                               = 3,
    SelfHitTestInvisible                           = 4,
    ESlateVisibility                               = 5

};


// Enum  SlateCore.EUINavigationRule
enum class EUINavigationRule : uint8_t
{
    Escape                                         = 0,
    Explicit                                       = 1,
    Wrap                                           = 2,
    Stop                                           = 3,
    Custom                                         = 4,
    CustomBoundary                                 = 5,
    Invalid                                        = 6,
    EUINavigationRule                              = 7

};


// Enum  SlateCore.EFlowDirectionPreference
enum class EFlowDirectionPreference : uint8_t
{
    Inherit                                        = 0,
    Culture                                        = 1,
    LeftToRight                                    = 2,
    RightToLeft                                    = 3,
    EFlowDirectionPreference                       = 4

};


// Enum  SlateCore.EMaskGeometryType
enum class EMaskGeometryType : uint8_t
{
    None                                           = 0,
    Rectangle                                      = 1,
    Circle                                         = 2,
    EMaskGeometryType                              = 3

};


// Enum  SlateCore.EColorVisionDeficiency
enum class EColorVisionDeficiency : uint8_t
{
    NormalVision                                   = 0,
    Deuteranope                                    = 1,
    Protanope                                      = 2,
    Tritanope                                      = 3,
    EColorVisionDeficiency                         = 4

};


// Enum  Engine.EMouseLockMode
enum class EMouseLockMode : uint8_t
{
    DoNotLock                                      = 0,
    LockOnCapture                                  = 1,
    LockAlways                                     = 2,
    LockInFullscreen                               = 3,
    EMouseLockMode                                 = 4

};


// Enum  Engine.EWindowTitleBarMode
enum class EWindowTitleBarMode : uint8_t
{
    Overlay                                        = 0,
    VerticalBox                                    = 1,
    EWindowTitleBarMode                            = 2

};


// Enum  SlateCore.ESelectInfo
enum class ESelectInfo : uint8_t
{
    OnKeyPress                                     = 0,
    OnNavigation                                   = 1,
    OnMouseClick                                   = 2,
    Direct                                         = 3,
    ESelectInfo                                    = 4

};


// Enum  SlateCore.ETextCommit
enum class ETextCommit : uint8_t
{
    Default                                        = 0,
    OnEnter                                        = 1,
    OnUserMovedFocus                               = 2,
    OnCleared                                      = 3,
    ETextCommit                                    = 4

};


// Enum  Slate.ETextJustify
enum class ETextJustify : uint8_t
{
    Left                                           = 0,
    Center                                         = 1,
    Right                                          = 2,
    ETextJustify                                   = 3

};


// Enum  Slate.ETextFlowDirection
enum class ETextFlowDirection : uint8_t
{
    Auto                                           = 0,
    LeftToRight                                    = 1,
    RightToLeft                                    = 2,
    ETextFlowDirection                             = 3

};


// Enum  SlateCore.ETextShapingMethod
enum class ETextShapingMethod : uint8_t
{
    Auto                                           = 0,
    KerningOnly                                    = 1,
    FullShaping                                    = 2,
    ETextShapingMethod                             = 3

};


// Enum  Slate.EVirtualKeyboardDismissAction
enum class EVirtualKeyboardDismissAction : uint8_t
{
    TextChangeOnDismiss                            = 0,
    TextCommitOnAccept                             = 1,
    TextCommitOnDismiss                            = 2,
    EVirtualKeyboardDismissAction                  = 3

};


// Enum  Slate.EVirtualKeyboardTrigger
enum class EVirtualKeyboardTrigger : uint8_t
{
    OnFocusByPointer                               = 0,
    OnAllFocusEvents                               = 1,
    EVirtualKeyboardTrigger                        = 2

};


// Enum  UMG.EVirtualKeyboardType
enum class EVirtualKeyboardType : uint8_t
{
    Default                                        = 0,
    Number                                         = 1,
    Web                                            = 2,
    Email                                          = 3,
    Password                                       = 4,
    AlphaNumeric                                   = 5,
    EVirtualKeyboardType                           = 6

};


// Enum  SlateCore.EMenuPlacement
enum class EMenuPlacement : uint8_t
{
    MenuPlacement                                  = 0,
    MenuPlacement                                  = 1,
    MenuPlacement                                  = 2,
    MenuPlacement                                  = 3,
    MenuPlacement                                  = 4,
    MenuPlacement                                  = 5,
    MenuPlacement                                  = 6,
    MenuPlacement                                  = 7,
    MenuPlacement                                  = 8,
    MenuPlacement                                  = 9,
    MenuPlacement                                  = 10,
    MenuPlacement                                  = 11,
    MenuPlacement                                  = 12,
    MenuPlacement                                  = 13

};


// Enum  Slate.ETextWrappingPolicy
enum class ETextWrappingPolicy : uint8_t
{
    DefaultWrapping                                = 0,
    AllowPerCharacterWrapping                      = 1,
    ETextWrappingPolicy                            = 2

};


// Enum  UMG.EWidgetAnimationEvent
enum class EWidgetAnimationEvent : uint8_t
{
    Started                                        = 0,
    Finished                                       = 1,
    EWidgetAnimationEvent                          = 2

};


// Enum  Engine.EInputEvent
enum class EInputEvent : uint8_t
{
    IE                                             = 0,
    IE                                             = 1,
    IE                                             = 2,
    IE                                             = 3,
    IE                                             = 4,
    IE                                             = 5

};


// Enum  UMG.EUMGSequencePlayMode
enum class EUMGSequencePlayMode : uint8_t
{
    Forward                                        = 0,
    Reverse                                        = 1,
    PingPong                                       = 2,
    EUMGSequencePlayMode                           = 3

};


// Enum  UMG.EWidgetTickFrequency
enum class EWidgetTickFrequency : uint8_t
{
    Never                                          = 0,
    Auto                                           = 1,
    EWidgetTickFrequency                           = 2

};


// Enum  LevelInfinite.ELIEventType
enum class ELIEventType : uint8_t
{
    DEFAULT                                        = 0,
    INTL                                           = 1,
    GN                                             = 2,
    GN                                             = 3,
    LOGIN                                          = 4,
    LOGIN                                          = 5,
    ACCOUNT                                        = 6,
    ACCOUNT                                        = 7,
    SET                                            = 8,
    COMPLIANCE                                     = 9,
    COMPLIANCE                                     = 10,
    ELIEventType                                   = 11

};


// Enum  Paper2D.EFlipbookCollisionMode
enum class EFlipbookCollisionMode : uint8_t
{
    NoCollision                                    = 0,
    FirstFrameCollision                            = 1,
    EachFrameCollision                             = 2,
    EFlipbookCollisionMode                         = 3

};


// Enum  Paper2D.EPaperSpriteAtlasPadding
enum class EPaperSpriteAtlasPadding : uint8_t
{
    DilateBorder                                   = 0,
    PadWithZero                                    = 1,
    EPaperSpriteAtlasPadding                       = 2

};


// Enum  Paper2D.ETileMapProjectionMode
enum class ETileMapProjectionMode : uint8_t
{
    Orthogonal                                     = 0,
    IsometricDiamond                               = 1,
    IsometricStaggered                             = 2,
    HexagonalStaggered                             = 3,
    ETileMapProjectionMode                         = 4

};


// Enum  Paper2D.ESpritePivotMode
enum class ESpritePivotMode : uint8_t
{
    Top                                            = 0,
    Top                                            = 1,
    Top                                            = 2,
    Center                                         = 3,
    Center                                         = 4,
    Center                                         = 5,
    Bottom                                         = 6,
    Bottom                                         = 7,
    Bottom                                         = 8,
    Custom                                         = 9,
    ESpritePivotMode                               = 10

};


// Enum  Paper2D.ESpritePolygonMode
enum class ESpritePolygonMode : uint8_t
{
    SourceBoundingBox                              = 0,
    TightBoundingBox                               = 1,
    ShrinkWrapped                                  = 2,
    FullyCustom                                    = 3,
    Diced                                          = 4,
    ESpritePolygonMode                             = 5

};


// Enum  Paper2D.ESpriteShapeType
enum class ESpriteShapeType : uint8_t
{
    Box                                            = 0,
    Circle                                         = 1,
    Polygon                                        = 2,
    ESpriteShapeType                               = 3

};


// Enum  Paper2D.ESpriteCollisionMode
enum class ESpriteCollisionMode : uint8_t
{
    None                                           = 0,
    Use2DPhysics                                   = 1,
    Use3DPhysics                                   = 2,
    ESpriteCollisionMode                           = 3

};


// Enum  H5UIWin.EBluSpecialKeys
enum class EBluSpecialKeys : uint8_t
{
    backspacekey                                   = 8,
    tabkey                                         = 9,
    enterkey                                       = 13,
    pausekey                                       = 19,
    escapekey                                      = 27,
    pageupkey                                      = 33,
    pagedownkey                                    = 34,
    endkey                                         = 35,
    homekey                                        = 36,
    leftarrowkey                                   = 37,
    rightarrowkey                                  = 39,
    downarrowkey                                   = 40,
    uparrowkey                                     = 38,
    insertkey                                      = 45,
    deletekey                                      = 46,
    numlockkey                                     = 144,
    scrolllockkey                                  = 145,
    unknownkey                                     = 0,
    EBluSpecialKeys                                = 146

};


// Enum  H5UIWin.EH5UILogLevel
enum class EH5UILogLevel : uint8_t
{
    Verbose                                        = 0,
    Debug                                          = 1,
    Info                                           = 2,
    Warning                                        = 3,
    Error                                          = 4,
    EH5UILogLevel                                  = 5

};


// Enum  RigLogicModule.EDNADataLayer
enum class EDNADataLayer : uint8_t
{
    Descriptor                                     = 0,
    Definition                                     = 1,
    Behavior                                       = 2,
    Geometry                                       = 3,
    GeometryWithoutBlendShapes                     = 4,
    AllWithoutBlendShapes                          = 5,
    All                                            = 6,
    EDNADataLayer                                  = 7

};


// Enum  RigLogicModule.EDirection
enum class EDirection : uint8_t
{
    Left                                           = 0,
    Right                                          = 1,
    Up                                             = 2,
    Down                                           = 3,
    Front                                          = 4,
    Back                                           = 5,
    EDirection                                     = 6

};


// Enum  RigLogicModule.ERotationUnit
enum class ERotationUnit : uint8_t
{
    Degrees                                        = 0,
    Radians                                        = 1,
    ERotationUnit                                  = 2

};


// Enum  RigLogicModule.ETranslationUnit
enum class ETranslationUnit : uint8_t
{
    CM                                             = 0,
    M                                              = 1,
    ETranslationUnit                               = 2

};


// Enum  RigLogicModule.EGender
enum class EGender : uint8_t
{
    Male                                           = 0,
    Female                                         = 1,
    Other                                          = 2,
    EGender                                        = 3

};


// Enum  RigLogicModule.EArchetype
enum class EArchetype : uint8_t
{
    Asian                                          = 0,
    Black                                          = 1,
    Caucasian                                      = 2,
    Hispanic                                       = 3,
    Alien                                          = 4,
    Other                                          = 5,
    EArchetype                                     = 6

};


// Enum  RigLogicModule.ERigLogicCalculationType
enum class ERigLogicCalculationType : uint8_t
{
    Scalar                                         = 0,
    SSE                                            = 1,
    AVX                                            = 2,
    ERigLogicCalculationType                       = 3

};


// Enum  GLTFExporterRuntime.EGLTFCameraControlMode
enum class EGLTFCameraControlMode : uint8_t
{
    FreeLook                                       = 0,
    Orbital                                        = 1,
    EGLTFCameraControlMode                         = 2

};


// Enum  GLTFExporterRuntime.EGLTFMaterialPropertyGroup
enum class EGLTFMaterialPropertyGroup : uint8_t
{
    None                                           = 0,
    BaseColorOpacity                               = 1,
    MetallicRoughness                              = 2,
    EmissiveColor                                  = 3,
    Normal                                         = 4,
    AmbientOcclusion                               = 5,
    ClearCoatRoughness                             = 6,
    ClearCoatBottomNormal                          = 7,
    EGLTFMaterialPropertyGroup                     = 8

};


// Enum  GLTFExporterRuntime.EGLTFMaterialBakeSizePOT
enum class EGLTFMaterialBakeSizePOT : uint8_t
{
    POT                                            = 0,
    POT                                            = 1,
    POT                                            = 2,
    POT                                            = 3,
    POT                                            = 4,
    POT                                            = 5,
    POT                                            = 6,
    POT                                            = 7,
    POT                                            = 8,
    POT                                            = 9,
    POT                                            = 10,
    POT                                            = 11,
    POT                                            = 12,
    POT                                            = 13,
    POT                                            = 14

};


// Enum  GLTFExporterRuntime.EGLTFMaterialBakeMode
enum class EGLTFMaterialBakeMode : uint8_t
{
    Disabled                                       = 0,
    Simple                                         = 1,
    UseMeshData                                    = 2,
    EGLTFMaterialBakeMode                          = 3

};


// Enum  VariantManagerContent.EPropertyValueCategory
enum class EPropertyValueCategory : uint8_t
{
    Undefined                                      = 0,
    Generic                                        = 1,
    RelativeLocation                               = 2,
    RelativeRotation                               = 4,
    RelativeScale3D                                = 8,
    Visibility                                     = 16,
    Material                                       = 32,
    Color                                          = 64,
    Option                                         = 128,
    EPropertyValueCategory                         = 129

};


// Enum  MFAVWrapper.EMovieCaptureState
enum class EMovieCaptureState : uint8_t
{
    NotInit                                        = 0,
    Initialize                                     = 1,
    Initialized                                    = 2,
    Capturing                                      = 3,
    EMovieCaptureState                             = 4

};


// Enum  MFDataVisualizer.EFoliageCollectType
enum class EFoliageCollectType : uint8_t
{
    E                                              = 0,
    E                                              = 1,
    E                                              = 2,
    E                                              = 3

};


// Enum  MFDataVisualizer.ERenderObjType
enum class ERenderObjType : uint8_t
{
    E                                              = 0,
    E                                              = 1,
    E                                              = 2,
    E                                              = 3

};


// Enum  MFPluginWrapper.EMFBoxLoginSourceType
enum class EMFBoxLoginSourceType : uint8_t
{
    NONE                                           = 0,
    QQLogin                                        = 1,
    WeChatLogin                                    = 2,
    Tourist                                        = 3,
    EMFBoxLoginSourceType                          = 4

};


// Enum  MFPluginWrapper.EMFBoxClientType
enum class EMFBoxClientType : uint8_t
{
    NONE                                           = 0,
    InitBox                                        = 1,
    EMFBoxClientType                               = 2

};


// Enum  MFPluginWrapper.EMFNewNetworkState
enum class EMFNewNetworkState : uint8_t
{
    NotReachable                                   = 0,
    WWAN                                           = 1,
    Wifi                                           = 2,
    Others                                         = 3,
    EMFNewNetworkState                             = 4

};


// Enum  MFPluginWrapper.EPufferTaskState
enum class EPufferTaskState : uint8_t
{
    PufferTask                                     = 0,
    PufferTask                                     = 1,
    PufferTask                                     = 2,
    PufferTask                                     = 3

};


// Enum  MFPluginWrapper.EUamDeviceRank
enum class EUamDeviceRank : uint8_t
{
    SuperFirstGear                                 = 7,
    FirstGear                                      = 6,
    SecondGear                                     = 5,
    ThirdGear                                      = 3,
    FourthGear                                     = 2,
    FifthGear                                      = 1,
    SixthGear                                      = 0,
    EUamDeviceRank                                 = 8

};


// Enum  MFPluginWrapper.EUAGraphicStyleQuality
enum class EUAGraphicStyleQuality : uint8_t
{
    GfxStyleQualityDefault                         = 0,
    GfxStyleQualityRealistic                       = 0,
    GfxStyleQualityWarm                            = 1,
    GfxStyleQualityCold                            = 2,
    GfxStyleQualityBright                          = 3,
    EUAGraphicStyleQuality                         = 4

};


// Enum  MFPluginWrapper.EUAFrameRateLevel
enum class EUAFrameRateLevel : uint8_t
{
    FrameRateDefault                               = 0,
    FrameRateLow                                   = 0,
    FrameRateMedium                                = 1,
    FrameRateHigh                                  = 2,
    FrameRateSuper                                 = 3,
    FrameRateMax                                   = 4,
    FrameRate90                                    = 5,
    FrameRate120                                   = 6,
    FrameRate144                                   = 7,
    EUAFrameRateLevel                              = 8

};


// Enum  MFPluginWrapper.EUAGrahpicsQuality
enum class EUAGrahpicsQuality : uint8_t
{
    GfxQualityDefault                              = 0,
    GfxQualitySuperLow                             = 0,
    GfxQualityLow                                  = 1,
    GfxQualityMedium                               = 2,
    GfxQualityHigh                                 = 3,
    GfxQualityHDRHigh                              = 4,
    GfxQualitySuperHigh                            = 5,
    GfxQualityNum                                  = 6,
    EUAGrahpicsQuality                             = 7

};


// Enum  MFPluginWrapper.EMFLBSLocationAuthorizationStates
enum class EMFLBSLocationAuthorizationStates : uint8_t
{
    AuthorizedWhenInUse                            = 0,
    AuthorizedDenied                               = 1,
    AuthorizedNotDetermined                        = 2,
    EMFLBSLocationAuthorizationStates              = 3

};


// Enum  MFPluginWrapper.EMFTGALiveLoginSourceType
enum class EMFTGALiveLoginSourceType : uint8_t
{
    NONE                                           = 0,
    QQLogin                                        = 1,
    WeChatLogin                                    = 2,
    Tourist                                        = 3,
    EMFTGALiveLoginSourceType                      = 4

};


// Enum  MFPluginWrapper.EMFTGALiveSourceType
enum class EMFTGALiveSourceType : uint8_t
{
    NONE                                           = 0,
    ClientClick                                    = 1,
    ClientPopUps                                   = 2,
    ClientActivity                                 = 3,
    EMFTGALiveSourceType                           = 4

};


// Enum  MFPluginWrapper.EMFTGALiveClientType
enum class EMFTGALiveClientType : uint8_t
{
    NONE                                           = 0,
    QuitTGALive                                    = 1,
    EnterTGALive                                   = 2,
    InitTGALive                                    = 3,
    EMFTGALiveClientType                           = 4

};


// Enum  MFPluginWrapper.EMFVoiceEvent
enum class EMFVoiceEvent : uint8_t
{
    kEventNoDeviceConnected                        = 0,
    kEventHeadsetDisconnected                      = 10,
    kEventHeadsetConnected                         = 11,
    kEventBluetoothHeadsetDisconnected             = 20,
    kEventBluetoothHeadsetConnected                = 21,
    kEventMicStateOpenSucc                         = 30,
    kEventMicStateOpenErr                          = 31,
    kEventMicStateNoOpen                           = 32,
    kEventSpeakerStateOpenSucc                     = 40,
    kEventSpeakerStateOpenErr                      = 41,
    kEventSpeakerStateNoOpen                       = 42,
    kEventAudioInterruptBegin                      = 50,
    kEventAudioInterruptEnd                        = 51,
    kEventAudioRecoderException                    = 52,
    kEventAudioRenderException                     = 53,
    kEventPhoneCallPickUp                          = 54,
    kEventPhoneCallHangUp                          = 55,
    EMFVoiceEvent                                  = 56

};


// Enum  MFPluginWrapper.EMFVoiceSpeechTranslateType
enum class EMFVoiceSpeechTranslateType : uint8_t
{
    SPEECH                                         = 0,
    SPEECH                                         = 1,
    SPEECH                                         = 2,
    SPEECH                                         = 3

};


// Enum  MFPluginWrapper.EMFVoiceSpeechLanguageType
enum class EMFVoiceSpeechLanguageType : uint8_t
{
    SPEECH                                         = 0,
    SPEECH                                         = 1,
    SPEECH                                         = 2,
    SPEECH                                         = 3,
    SPEECH                                         = 4,
    SPEECH                                         = 5,
    SPEECH                                         = 6,
    SPEECH                                         = 7,
    SPEECH                                         = 8,
    SPEECH                                         = 9,
    SPEECH                                         = 10,
    SPEECH                                         = 11,
    SPEECH                                         = 12,
    SPEECH                                         = 13,
    SPEECH                                         = 14,
    SPEECH                                         = 15

};


// Enum  MFPluginWrapper.EMFVoiceMemberRole
enum class EMFVoiceMemberRole : uint8_t
{
    kVoiceMemberRoleNone                           = 0,
    kVoiceMemberRoleAnchor                         = 1,
    kVoiceMemberRoleAudience                       = 2,
    EMFVoiceMemberRole                             = 3

};


// Enum  MFPluginWrapper.EMFVoiceLanguage
enum class EMFVoiceLanguage : uint8_t
{
    kVoiceLanguageChina                            = 0,
    kVoiceLanguageKorean                           = 1,
    kVoiceLanguageEnglish                          = 2,
    kVoiceLanguageJapanese                         = 3,
    EMFVoiceLanguage                               = 4

};


// Enum  MFBaseModule.EGameSceneType
enum class EGameSceneType : uint8_t
{
    GST                                            = 0,
    GST                                            = 1,
    GST                                            = 2,
    GST                                            = 3,
    GST                                            = 4,
    GST                                            = 5,
    GST                                            = 6,
    GST                                            = 7

};


// Enum  MFBaseModule.EMobileDeviceLevel
enum class EMobileDeviceLevel : uint8_t
{
    MobileDeviceLevel                              = 0,
    MobileDeviceLevel                              = 1,
    MobileDeviceLevel                              = 2,
    MobileDeviceLevel                              = 3,
    MobileDeviceLevel                              = 4,
    MobileDeviceLevel                              = 5,
    MobileDeviceLevel                              = 6,
    MobileDeviceLevel                              = 7,
    MobileDeviceLevel                              = 8,
    MobileDeviceLevel                              = 9

};


// Enum  Gamelet.EGameletEnvironment
enum class EGameletEnvironment : uint8_t
{
    Gamelet                                        = 0,
    Gamelet                                        = 1,
    Gamelet                                        = 2,
    Gamelet                                        = 3,
    Gamelet                                        = 4

};


// Enum  Gamelet.ECmd
enum class ECmd : uint8_t
{
    ECmdGSendMessageToApp                          = 10001,
    ECmdS2ESDKInitialized                          = 40001,
    ECmdS2EOnCgiProcessComplete                    = 40002,
    ECmdS2EStartPuertsVM                           = 40003,
    ECmdS2PMin                                     = 60000,
    ECmdS2PMax                                     = 69999,
    ECmd                                           = 70000

};


// Enum  PixUI.EPxKeyboardTypes
enum class EPxKeyboardTypes : uint8_t
{
    Default                                        = 0,
    Number                                         = 1,
    Password                                       = 2,
    EPxKeyboardTypes                               = 3

};


// Enum  PixUI.EPxWidgetTransformType
enum class EPxWidgetTransformType : uint8_t
{
    MoveBy                                         = 0,
    MoveTo                                         = 1,
    ResizeBy                                       = 2,
    ResizeTo                                       = 3,
    ScrollBy                                       = 4,
    ScrollTo                                       = 5,
    Count                                          = 6,
    EPxWidgetTransformType                         = 7

};


// Enum  PixUI.EPxLogLevels
enum class EPxLogLevels : uint8_t
{
    Log                                            = 0,
    Warning                                        = 1,
    Error                                          = 2,
    Debug                                          = 3,
    Count                                          = 4,
    EPxLogLevels                                   = 5

};


// Enum  PixUI.EPxLogGroups
enum class EPxLogGroups : uint8_t
{
    Core                                           = 0,
    Plugin                                         = 1,
    Script                                         = 2,
    Profiler                                       = 3,
    Count                                          = 4,
    EPxLogGroups                                   = 5

};


// Enum  PixUI.EPxDynamicTextureUpdateMode
enum class EPxDynamicTextureUpdateMode : uint8_t
{
    UpdateRegion                                   = 0,
    UpdateBulkData                                 = 1,
    EPxDynamicTextureUpdateMode                    = 2

};


// Enum  PixUI.EPxKeyEventType
enum class EPxKeyEventType : uint8_t
{
    KeyDown                                        = 0,
    KeyUp                                          = 1,
    EPxKeyEventType                                = 2

};


// Enum  PixUI.EPxTouchType
enum class EPxTouchType : uint8_t
{
    TouchStart                                     = 0,
    TouchMoved                                     = 1,
    TouchEnd                                       = 2,
    TouchCanceled                                  = 3,
    EPxTouchType                                   = 4

};


// Enum  PixUI.EPxDebugInfo
enum class EPxDebugInfo : uint8_t
{
    ShowMouse                                      = 0,
    Count                                          = 1,
    EPxDebugInfo                                   = 2

};


// Enum  PixUI.EPxWidgetBatchType
enum class EPxWidgetBatchType : uint8_t
{
    Default                                        = 0,
    Auto                                           = 1,
    NoBatch                                        = 2,
    EPxWidgetBatchType                             = 3

};


// Enum  MFClimateRuntime.EMFClimateCelestialOrbitType
enum class EMFClimateCelestialOrbitType : uint8_t
{
    Sun                                            = 0,
    SunCounter                                     = 1,
    Satellite                                      = 2,
    Distant                                        = 3,
    Manual                                         = 4,
    EMFClimateCelestialOrbitType                   = 5

};


// Enum  MFClimateRuntime.EMFClimateCloudNoiseGroupTier
enum class EMFClimateCloudNoiseGroupTier : uint8_t
{
    Desktop                                        = 0,
    Mobile                                         = 1,
    EMFClimateCloudNoiseGroupTier                  = 2

};


// Enum  MFClimateRuntime.EMFClimateTickBudgetAdvice
enum class EMFClimateTickBudgetAdvice : uint8_t
{
    DontTick                                       = 0,
    Tick                                           = 1,
    FullUpdate                                     = 2,
    EMFClimateTickBudgetAdvice                     = 3

};


// Enum  MFClimateRuntime.EAutoAutoStepMode
enum class EAutoAutoStepMode : uint8_t
{
    Close                                          = 0,
    Fixed                                          = 1,
    Custom                                         = 2,
    EAutoAutoStepMode                              = 3

};


// Enum  MFClimateRuntime.EMFClimateNoiseType
enum class EMFClimateNoiseType : uint8_t
{
    PerlinWorley                                   = 0,
    WorleyCloud                                    = 1,
    NRCCloud                                       = 2,
    EMFClimateNoiseType                            = 3

};


// Enum  MFClimateRuntime.EWeatherLayerEvaluationMode
enum class EWeatherLayerEvaluationMode : uint8_t
{
    TimeOfDay                                      = 0,
    SunAngle                                       = 1,
    Constant                                       = 2,
    NUM                                            = 3,
    EWeatherLayerEvaluationMode                    = 4

};


// Enum  MFClimateRuntime.EMFClimateCloudMaskType
enum class EMFClimateCloudMaskType : uint8_t
{
    Normal                                         = 0,
    FullCover                                      = 1,
    EMFClimateCloudMaskType                        = 2

};


// Enum  MFClimateRuntime.EMFClimateGetFeatureErrorMode
enum class EMFClimateGetFeatureErrorMode : uint8_t
{
    ReturnNull                                     = 0,
    LogAndReturnNull                               = 1,
    Assert                                         = 2,
    EMFClimateGetFeatureErrorMode                  = 3

};


// Enum  MFEnvironment.EEnvActorType
enum class EEnvActorType : uint8_t
{
    EnvActorType                                   = 0,
    EnvActorType                                   = 1,
    EnvActorType                                   = 2,
    EnvActorType                                   = 3,
    EnvActorType                                   = 4

};


// Enum  MFEnvironment.EMFPhysFoliageMeshTypeEnum
enum class EMFPhysFoliageMeshTypeEnum : uint8_t
{
    SkeletalMesh                                   = 0,
    StaticMesh                                     = 1,
    EditableMesh                                   = 2,
    EMFPhysFoliageMeshTypeEnum                     = 3

};


// Enum  MFEnvironment.EMFEnvTrailShapeEnum
enum class EMFEnvTrailShapeEnum : uint8_t
{
    None                                           = 0,
    Circle                                         = 1,
    Triangle                                       = 2,
    EMFEnvTrailShapeEnum                           = 3

};


// Enum  MFInputReplayTool.ECharacterRecordDataType
enum class ECharacterRecordDataType : uint8_t
{
    InputAxis                                      = 0,
    InputTouch                                     = 1,
    InputKey                                       = 2,
    Clicked                                        = 3,
    Pressed                                        = 4,
    Released                                       = 5,
    Hovered                                        = 6,
    Unhovered                                      = 7,
    State                                          = 8,
    Move                                           = 9,
    Pitch                                          = 10,
    Yaw                                            = 11,
    Roll                                           = 12,
    CPitch                                         = 13,
    CYaw                                           = 14,
    CRoll                                          = 15,
    TouchStart                                     = 16,
    TouchEnd                                       = 17,
    Scroll                                         = 18,
    Endurance                                      = 19,
    CharacterInfo                                  = 20,
    ExecUE4Command                                 = 21,
    GrabUIFeature                                  = 22,
    DoLuaString                                    = 23,
    RemoteSendBack                                 = 24,
    KeyUp                                          = 25,
    KeyDown                                        = 26,
    KeyChar                                        = 27,
    MouseButtonDown                                = 28,
    MouseButtonUp                                  = 29,
    ECharacterRecordDataType                       = 30

};


// Enum  SGFramework.EAttachPosition
enum class EAttachPosition : uint8_t
{
    Attach                                         = 0,
    Attach                                         = 1,
    Attach                                         = 2,
    Attach                                         = 3,
    Attach                                         = 4,
    Attach                                         = 5,
    Attach                                         = 6,
    Attach                                         = 7,
    Attach                                         = 8,
    Attach                                         = 9,
    Attach                                         = 10,
    Attach                                         = 11,
    Attach                                         = 12,
    Attach                                         = 13,
    Attach                                         = 14,
    Attach                                         = 15,
    Attach                                         = 16,
    Attach                                         = 17,
    Attach                                         = 18,
    Attach                                         = 19,
    Attach                                         = 20,
    Attach                                         = 21,
    Attach                                         = 22,
    Attach                                         = 23,
    Attach                                         = 24,
    Attach                                         = 25,
    Attach                                         = 26,
    Attach                                         = 27,
    Attach                                         = 28,
    Attach                                         = 29,
    Attach                                         = 30,
    Attach                                         = 40,
    Attach                                         = 41,
    Attach                                         = 42,
    Attach                                         = 43,
    Attach                                         = 44,
    Attach                                         = 45,
    Attach                                         = 46,
    Attach                                         = 98,
    Attach                                         = 99,
    Attach                                         = 100

};


// Enum  SGFramework.ESGPickupSourceType
enum class ESGPickupSourceType : uint8_t
{
    Default                                        = 0,
    Discard                                        = 1,
    ESGPickupSourceType                            = 2

};


// Enum  SGFramework.ESGInnerWeaponEvent
enum class ESGInnerWeaponEvent : uint8_t
{
    EInnerEvent                                    = 0,
    EStateEvent                                    = 1,
    EStateEvent                                    = 2,
    EStateEvent                                    = 3,
    EStateEvent                                    = 4,
    EStateEvent                                    = 5,
    EStateEvent                                    = 6,
    EStateEvent                                    = 7,
    EStateEvent                                    = 8,
    EStateEvent                                    = 9,
    EStateEvent                                    = 10,
    EStateEvent                                    = 11,
    EStateEvent                                    = 12,
    EStateEvent                                    = 13,
    EStateEvent                                    = 14,
    EStateEvent                                    = 15,
    EStateEvent                                    = 16,
    EStateEvent                                    = 17,
    EStateEvent                                    = 18,
    EStateEvent                                    = 19,
    EStateEvent                                    = 20,
    EStateEvent                                    = 21,
    EStateEvent                                    = 22,
    EStateEvent                                    = 23,
    EStateEvent                                    = 24,
    EStateEvent                                    = 25,
    EStateEvent                                    = 26,
    EStateEvent                                    = 27,
    EStateEvent                                    = 28,
    EStateEvent                                    = 29,
    EStateEvent                                    = 30,
    EStateEvent                                    = 31,
    EStateEvent                                    = 32,
    EStateEvent                                    = 33,
    EStateEvent                                    = 34,
    EStateEvent                                    = 35,
    EStateEvent                                    = 36,
    EStateEvent                                    = 37,
    EStateEvent                                    = 38,
    EStateEvent                                    = 39,
    EStateEvent                                    = 40,
    EStateEvent                                    = 41,
    EStateEvent                                    = 42,
    EStateEvent                                    = 43,
    EStateEvent                                    = 44,
    EStateEvent                                    = 45,
    EStateEvent                                    = 46,
    EStateEvent                                    = 47,
    EStateEvent                                    = 48,
    EStateEvent                                    = 49,
    EStateEvent                                    = 50,
    EStateEvent                                    = 51,
    EStateEvent                                    = 52,
    EStateEvent                                    = 53,
    EStateEvent                                    = 54,
    EStateEvent                                    = 55,
    EStateEvent                                    = 56,
    EStateEvent                                    = 57,
    EStateEvent                                    = 58,
    EStateEvent                                    = 59,
    EStateEvent                                    = 60,
    EStateEvent                                    = 61,
    EStateEvent                                    = 62,
    EStateEvent                                    = 63,
    EStateEvent                                    = 64,
    EStateEvent                                    = 65,
    EStateEvent                                    = 66,
    EStateEvent                                    = 67,
    EStateEvent                                    = 68,
    EStateEvent                                    = 69,
    EStateEvent                                    = 70,
    EStateEvent                                    = 71,
    EStateEvent                                    = 72,
    EStateEvent                                    = 73,
    EStateEvent                                    = 74,
    EStateEvent                                    = 75,
    EStateEvent                                    = 76,
    EStateEvent                                    = 77,
    EStateEvent                                    = 78,
    EStateEvent                                    = 79,
    EStateEvent                                    = 80,
    EStateEvent                                    = 81,
    EStateEvent                                    = 82,
    EStateEvent                                    = 83,
    EStateEvent                                    = 84,
    EStateEvent                                    = 85,
    EStateEvent                                    = 86,
    EInnerEvent                                    = 87,
    ESGInnerWeaponEvent                            = 88

};


// Enum  SGFramework.ECharacterEnduranceType
enum class ECharacterEnduranceType : uint8_t
{
    Head                                           = 0,
    Chest                                          = 1,
    Stomach                                        = 2,
    LeftArm                                        = 3,
    RightArm                                       = 4,
    LeftLeg                                        = 5,
    RightLeg                                       = 6,
    Max                                            = 7,
    Max                                            = 8

};


// Enum  SGFramework.ESwitchWeaponIntentRejectReason
enum class ESwitchWeaponIntentRejectReason : uint8_t
{
    None                                           = 0,
    ServerNoSwitchWeaponAbility                    = 1,
    DestWeaponInvalid                              = 2,
    ESwitchWeaponIntentRejectReason                = 3

};


// Enum  SGFramework.ECharacterHealthConditionType
enum class ECharacterHealthConditionType : uint8_t
{
    Normal                                         = 0,
    Injured                                        = 1,
    NearlyDying                                    = 2,
    Dying                                          = 3,
    ECharacterHealthConditionType                  = 4

};


// Enum  SGFramework.ESGZoomType
enum class ESGZoomType : uint8_t
{
    ESGZoomType                                    = 0,
    ESGZoomType                                    = 1,
    ESGZoomType                                    = 2,
    ESGZoomType                                    = 3

};


// Enum  SGFramework.EHeadHitSubGroupType
enum class EHeadHitSubGroupType : uint8_t
{
    HeadHitSubGroupType                            = 0,
    HeadHitSubGroupType                            = 1,
    HeadHitSubGroupType                            = 2,
    HeadHitSubGroupType                            = 3,
    HeadHitSubGroupType                            = 4,
    HeadHitSubGroupType                            = 5,
    HeadHitSubGroupType                            = 6,
    HeadHitSubGroupType                            = 7,
    HeadHitSubGroupType                            = 8

};


// Enum  SGFramework.EHitGroupType
enum class EHitGroupType : uint8_t
{
    HitGroupType                                   = 0,
    HitGroupType                                   = 1,
    HitGroupType                                   = 2,
    HitGroupType                                   = 3,
    HitGroupType                                   = 4,
    HitGroupType                                   = 5,
    HitGroupType                                   = 6,
    HitGroupType                                   = 7,
    HitGroupType                                   = 8,
    HitGroupType                                   = 9,
    HitGroupType                                   = 10,
    HitGroupType                                   = 11,
    HitGroupType                                   = 12,
    HitGroupType                                   = 13,
    HitGroupType                                   = 14,
    HitGroupType                                   = 15,
    HitGroupType                                   = 16,
    HitGroupType                                   = 17,
    HitGroupType                                   = 18,
    HitGroupType                                   = 19,
    HitGroupType                                   = 20,
    HitGroupType                                   = 21,
    HitGroupType                                   = 22

};


// Enum  SGFramework.EDamageTypeEnum
enum class EDamageTypeEnum : uint8_t
{
    EDamageType                                    = 0,
    EDamageType                                    = 1,
    EDamageType                                    = 2,
    EDamageType                                    = 3,
    EDamageType                                    = 4,
    EDamageType                                    = 5,
    EDamageType                                    = 6,
    EDamageType                                    = 7,
    EDamageType                                    = 8,
    EDamageType                                    = 9

};


// Enum  SGFramework.ESGDamageCauserType
enum class ESGDamageCauserType : uint8_t
{
    ESGDamageCauserType                            = 0,
    ESGDamageCauserType                            = 1,
    ESGDamageCauserType                            = 2,
    ESGDamageCauserType                            = 3,
    ESGDamageCauserType                            = 4,
    ESGDamageCauserType                            = 5,
    ESGDamageCauserType                            = 6,
    ESGDamageCauserType                            = 7,
    ESGDamageCauserType                            = 8,
    ESGDamageCauserType                            = 9,
    ESGDamageCauserType                            = 10,
    ESGDamageCauserType                            = 11,
    ESGDamageCauserType                            = 12,
    ESGDamageCauserType                            = 13,
    ESGDamageCauserType                            = 14

};


// Enum  SGFramework.ECharacterDeathType
enum class ECharacterDeathType : uint8_t
{
    ECharacterDeathType                            = 0,
    ECharacterDeathType                            = 1,
    ECharacterDeathType                            = 2,
    ECharacterDeathType                            = 3,
    ECharacterDeathType                            = 4,
    ECharacterDeathType                            = 5,
    ECharacterDeathType                            = 6,
    ECharacterDeathType                            = 7,
    ECharacterDeathType                            = 8,
    ECharacterDeathType                            = 9,
    ECharacterDeathType                            = 10,
    ECharacterDeathType                            = 11,
    ECharacterDeathType                            = 12,
    ECharacterDeathType                            = 13

};


// Enum  SGFramework.EFactionType
enum class EFactionType : uint8_t
{
    None                                           = 0,
    NormalPMC                                      = 1,
    NormalScav                                     = 2,
    PlayerScav                                     = 3,
    RebelFaction                                   = 4,
    LakeFaction                                    = 5,
    GangsterFaction                                = 6,
    KurtTeam                                       = 7,
    NavyFaction                                    = 8,
    Blackgold                                      = 9,
    Gnesk                                          = 10,
    EFactionType                                   = 11

};


// Enum  SGFramework.EPlayerPoseType
enum class EPlayerPoseType : uint8_t
{
    PoseType                                       = 0,
    PoseType                                       = 1,
    PoseType                                       = 2,
    PoseType                                       = 3,
    PoseType                                       = 4,
    PoseType                                       = 5,
    PoseType                                       = 6,
    PoseType                                       = 7

};


// Enum  SGFramework.EWeaponLeanAimType
enum class EWeaponLeanAimType : uint8_t
{
    EWeapLeanAimType                               = 0,
    EWeapLeanAimType                               = 1,
    EWeapLeanAimType                               = 2,
    EWeapLeanAimType                               = 3

};


// Enum  SGFramework.ESlotEnum
enum class ESlotEnum : uint8_t
{
    SE                                             = 0,
    SE                                             = 1,
    SE                                             = 2,
    SE                                             = 3

};


// Enum  SGFramework.EPlayerEndGameType
enum class EPlayerEndGameType : uint8_t
{
    EPlayerEndGameType                             = 0,
    EPlayerEndGameType                             = 1,
    EPlayerEndGameType                             = 2,
    EPlayerEndGameType                             = 3,
    EPlayerEndGameType                             = 4,
    EPlayerEndGameType                             = 5,
    EPlayerEndGameType                             = 6,
    EPlayerEndGameType                             = 7

};


// Enum  SGFramework.EDoorAction
enum class EDoorAction : uint8_t
{
    NONE                                           = 0,
    WRECK                                          = 1,
    UNLOCK                                         = 2,
    PUSH                                           = 3,
    PULL                                           = 4,
    WRECK                                          = 5,
    UNLOCK                                         = 6,
    EDoorAction                                    = 7

};


// Enum  SGFramework.ESGRecoveryAttributeType
enum class ESGRecoveryAttributeType : uint8_t
{
    Endurence                                      = 0,
    Food                                           = 1,
    Moisture                                       = 2,
    ESGRecoveryAttributeType                       = 3

};


// Enum  SGFramework.EWeaponEquipPosition
enum class EWeaponEquipPosition : uint8_t
{
    EWeaponEquipPosition                           = 0,
    EWeaponEquipPosition                           = 1,
    EWeaponEquipPosition                           = 2,
    EWeaponEquipPosition                           = 3,
    EWeaponEquipPosition                           = 4

};


// Enum  SGFramework.ECharacterGameEffectType
enum class ECharacterGameEffectType : uint8_t
{
    Clear                                          = 0,
    Regeneration                                   = 1,
    Excited                                        = 2,
    Fortitude                                      = 3,
    HearingEnhance                                 = 4,
    OutOfEndurance                                 = 5,
    Bleed                                          = 6,
    LackInMoisture                                 = 7,
    LackInFoodSlight                               = 8,
    LackInFoodMedium                               = 9,
    LackInFood                                     = 10,
    Pain                                           = 11,
    Tinnitus                                       = 12,
    HearingReduce                                  = 13,
    IsCompleteOverWeight                           = 14,
    IsOverWeight                                   = 15,
    ActivityMark                                   = 16,
    ActivityBeMarked                               = 17,
    BoneBreak                                      = 18,
    TunnelVision                                   = 19,
    Tremble                                        = 20,
    FreshWound                                     = 21,
    PainInhibite                                   = 22,
    Trap                                           = 23,
    Poison                                         = 24,
    SlightTearGas                                  = 25,
    MediumTearGas                                  = 26,
    InhibiteTearGas                                = 27,
    Max                                            = 28

};


// Enum  SGFramework.ECharacterDebuffType
enum class ECharacterDebuffType : uint8_t
{
    Bleed                                          = 0,
    BoneBreak                                      = 1,
    OutOfEndurance                                 = 2,
    Pain                                           = 3,
    Max                                            = 4

};


// Enum  Engine.ENetRole
enum class ENetRole : uint8_t
{
    ROLE                                           = 0,
    ROLE                                           = 1,
    ROLE                                           = 2,
    ROLE                                           = 3,
    ROLE                                           = 4

};


// Enum  SGFramework.EInventoryLockType
enum class EInventoryLockType : uint8_t
{
    Selecting                                      = 0,
    Useing                                         = 1,
    EInventoryLockType                             = 2

};


// Enum  SGFramework.ESGThermalImagerType
enum class ESGThermalImagerType : uint8_t
{
    None                                           = 0,
    Headwear                                       = 1,
    Scope                                          = 2,
    ESGThermalImagerType                           = 3

};


// Enum  SGFramework.ESGInventoryParentType
enum class ESGInventoryParentType : uint8_t
{
    None                                           = 0,
    Assemble                                       = 1,
    Container                                      = 2,
    ESGInventoryParentType                         = 3

};


// Enum  SGFramework.ECharacterSex
enum class ECharacterSex : uint8_t
{
    CharacterSex                                   = 0,
    CharacterSex                                   = 1,
    CharacterSex                                   = 2,
    CharacterSex                                   = 3

};


// Enum  SGFramework.EAnimInstanceUseType
enum class EAnimInstanceUseType : uint8_t
{
    AnimInstanceUseType                            = 0,
    AnimInstanceUseType                            = 1,
    AnimInstanceUseType                            = 2,
    AnimInstanceUseType                            = 3

};


// Enum  SGFramework.ESGWeaponType
enum class ESGWeaponType : uint8_t
{
    None                                           = 0,
    EWeaponType                                    = 1,
    EWeaponType                                    = 2,
    EWeaponType                                    = 3,
    EWeaponType                                    = 4,
    EWeaponType                                    = 5,
    EWeaponType                                    = 6,
    EWeaponType                                    = 7,
    ESGWeaponType                                  = 8

};


// Enum  SGFramework.ESGBadgeAttach
enum class ESGBadgeAttach : uint8_t
{
    None                                           = 0,
    LeftArm                                        = 1,
    Backpack                                       = 2,
    Vest                                           = 3,
    VestContainer                                  = 4,
    Helmet                                         = 5,
    Max                                            = 6

};


// Enum  SGFramework.EWearableEnablePolicy
enum class EWearableEnablePolicy : uint8_t
{
    None                                           = 0,
    OnlyWhenOn                                     = 1,
    OnlyWhenOff                                    = 2,
    EWearableEnablePolicy                          = 3

};


// Enum  SGFramework.ESGThrowSubType
enum class ESGThrowSubType : uint8_t
{
    EThrowSubType                                  = 0,
    EThrowSubType                                  = 1,
    EThrowSubType                                  = 2,
    EThrowSubType                                  = 3,
    EThrowSubType                                  = 4,
    EThrowSubType                                  = 5,
    EThrowSubType                                  = 6,
    EThrowSubType                                  = 7,
    EThrowSubType                                  = 8,
    EThrowSubType                                  = 9,
    EThrowSubType                                  = 10,
    EThrowSubType                                  = 11,
    EThrowSubType                                  = 12,
    EThrowSubType                                  = 13

};


// Enum  SGFramework.ESGInteractEvent
enum class ESGInteractEvent : uint8_t
{
    ESGInteractEvent                               = 0,
    ESGInteractEvent                               = 1,
    ESGInteractEvent                               = 2,
    ESGInteractEvent                               = 3,
    ESGInteractEvent                               = 4

};


// Enum  SGFramework.ESGAvatarType
enum class ESGAvatarType : uint8_t
{
    None                                           = 0,
    Coat                                           = 1,
    Gloves                                         = 2,
    Jacket                                         = 3,
    Pants                                          = 4,
    Shoes                                          = 5,
    Torso                                          = 6,
    Legs                                           = 7,
    Head                                           = 8,
    Hair                                           = 9,
    HeadMask                                       = 10,
    Watch                                          = 11,
    Glass                                          = 12,
    Hat                                            = 13,
    Hood                                           = 14,
    Badge                                          = 15,
    Skirts                                         = 16,
    Cloak                                          = 17,
    Max                                            = 18

};


// Enum  SGFramework.ESGWeaponHoldGrenadeEvent
enum class ESGWeaponHoldGrenadeEvent : uint8_t
{
    Holding                                        = 0,
    NotHolding                                     = 1,
    ESGWeaponHoldGrenadeEvent                      = 2

};


// Enum  SGFramework.ESGWeaponFiringEvent
enum class ESGWeaponFiringEvent : uint8_t
{
    StartFiring                                    = 0,
    StopFiring                                     = 1,
    CancelFiring                                   = 2,
    ESGWeaponFiringEvent                           = 3

};


// Enum  SGFramework.ESGDoorState
enum class ESGDoorState : uint8_t
{
    OpenedInner                                    = 0,
    OpenedOuter                                    = 1,
    OpenedSlidingOut                               = 2,
    Closed                                         = 3,
    ESGDoorState                                   = 4

};


// Enum  SGFramework.ESGCardReaderDoorState
enum class ESGCardReaderDoorState : uint8_t
{
    Unlock                                         = 0,
    Locked                                         = 1,
    UnLockCoolDown                                 = 2,
    UnLockCountDown                                = 3,
    ESGCardReaderDoorState                         = 4

};


// Enum  MFNPCAI.EGraphAStarResult
enum class EGraphAStarResult : uint8_t
{
    WaitToSearch                                   = 0,
    SearchFail                                     = 1,
    SearchInProgress                               = 2,
    SearchAborted                                  = 3,
    SearchDone                                     = 4,
    SearchSuccess                                  = 5,
    GoalUnreachable                                = 6,
    InfiniteLoop                                   = 7,
    NotFound                                       = 8,
    RequestNotFound                                = 9,
    EGraphAStarResult                              = 10

};


// Enum  MFNPCAI.ENPCAIGoDirectlyResult
enum class ENPCAIGoDirectlyResult : uint8_t
{
    Success                                        = 0,
    ReachBoundary                                  = 1,
    AIPawnNotFound                                 = 2,
    ENPCAIGoDirectlyResult                         = 3

};


// Enum  MFNPCAI.ENPCAIPerceptibleTile
enum class ENPCAIPerceptibleTile : uint8_t
{
    None                                           = 0,
    Bomb                                           = 1,
    Stun                                           = 2,
    Smoke                                          = 3,
    Molotov                                        = 4,
    C4                                             = 5,
    Flash                                          = 6,
    FootSounder                                    = 7,
    TearGas                                        = 8,
    OffensiveGrenade                               = 9,
    TripMine                                       = 10,
    ClaymoreMine                                   = 11,
    SignalDetonator                                = 12,
    CustomIndex                                    = 13,
    DefaultArea                                    = 14,
    AvoidanceArea                                  = 15,
    ObstacleArea                                   = 16,
    ParadropArea                                   = 17,
    Unknown                                        = 18,
    Max                                            = 19

};


// Enum  SGFramework.ESGPlayerCondition
enum class ESGPlayerCondition : uint8_t
{
    E                                              = 0,
    E                                              = 1,
    E                                              = 2,
    E                                              = 3,
    E                                              = 4,
    E                                              = 5

};


// Enum  SGFramework.ESGPlayerFailCondition
enum class ESGPlayerFailCondition : uint8_t
{
    E                                              = 0,
    E                                              = 1,
    E                                              = 2,
    E                                              = 3,
    E                                              = 4

};


// Enum  SGFramework.ECharacterType
enum class ECharacterType : uint8_t
{
    ECharacterType                                 = 0,
    ECharacterType                                 = 1,
    ECharacterType                                 = 2,
    ECharacterType                                 = 3,
    ECharacterType                                 = 4,
    ECharacterType                                 = 5,
    ECharacterType                                 = 6,
    ECharacterType                                 = 7,
    ECharacterType                                 = 8,
    ECharacterType                                 = 9

};


// Enum  SGFramework.EPlayerTeamType
enum class EPlayerTeamType : uint8_t
{
    EPlayerTeamType                                = 0,
    EPlayerTeamType                                = 1,
    EPlayerTeamType                                = 2,
    EPlayerTeamType                                = 3

};


// Enum  SGFramework.EAPIReportTypes
enum class EAPIReportTypes : uint8_t
{
    E                                              = 0,
    E                                              = 1,
    E                                              = 2,
    E                                              = 3,
    E                                              = 4

};


// Enum  SGFramework.EOBSpectateState
enum class EOBSpectateState : uint8_t
{
    E                                              = 0,
    E                                              = 1,
    E                                              = 2,
    E                                              = 3

};


// Enum  SGFramework.ESGBagTipsType
enum class ESGBagTipsType : uint8_t
{
    BagTipsType                                    = 0,
    BagTipsType                                    = 1,
    BagTipsType                                    = 2,
    BagTipsType                                    = 3,
    BagTipsType                                    = 4,
    BagTipsType                                    = 5,
    BagTipsType                                    = 6,
    BagTipsType                                    = 7,
    BagTipsType                                    = 8,
    BagTipsType                                    = 9,
    BagTipsType                                    = 10,
    BagTipsType                                    = 11,
    BagTipsType                                    = 12,
    BagTipsType                                    = 13,
    BagTipsType                                    = 14,
    BagTipsType                                    = 15,
    BagTipsType                                    = 16

};


// Enum  InputCore.ETouchType
enum class ETouchType : uint8_t
{
    Began                                          = 0,
    Moved                                          = 1,
    Stationary                                     = 2,
    ForceChanged                                   = 3,
    FirstMove                                      = 4,
    Ended                                          = 5,
    NumTypes                                       = 6,
    ETouchType                                     = 7

};


// Enum  SGFramework.ESoundSourceType
enum class ESoundSourceType : uint8_t
{
    None                                           = 0,
    WALK                                           = 1,
    SPRINTING                                      = 2,
    PRONE                                          = 3,
    CROUCH                                         = 4,
    QUIET                                          = 5,
    QUIET                                          = 6,
    QUIET                                          = 7,
    RUB                                            = 8,
    NPC                                            = 9,
    MildPoisoning                                  = 10,
    ModeratePoisoning                              = 11,
    INJURED                                        = 12,
    NEAR                                           = 13,
    OwnFootStepMaker                               = 14,
    OtherFootStepMaker                             = 15,
    FIRE                                           = 16,
    FIRE                                           = 17,
    FarawayGunSound                                = 18,
    EXPLOSION                                      = 19,
    ChangeMag                                      = 20,
    Heal                                           = 21,
    DoorOperate                                    = 22,
    DropEquipment                                  = 23,
    BehaviorSwitch                                 = 24,
    PlayerYell                                     = 25,
    ActivityFootStepMaker                          = 26,
    InventoryContainer                             = 27,
    Landed                                         = 28,
    MAX                                            = 29

};


// Enum  PhysicsCore.EPhysicalSurface
enum class EPhysicalSurface : uint8_t
{
    SurfaceType                                    = 0,
    SurfaceType1                                   = 1,
    SurfaceType2                                   = 2,
    SurfaceType3                                   = 3,
    SurfaceType4                                   = 4,
    SurfaceType5                                   = 5,
    SurfaceType6                                   = 6,
    SurfaceType7                                   = 7,
    SurfaceType8                                   = 8,
    SurfaceType9                                   = 9,
    SurfaceType10                                  = 10,
    SurfaceType11                                  = 11,
    SurfaceType12                                  = 12,
    SurfaceType13                                  = 13,
    SurfaceType14                                  = 14,
    SurfaceType15                                  = 15,
    SurfaceType16                                  = 16,
    SurfaceType17                                  = 17,
    SurfaceType18                                  = 18,
    SurfaceType19                                  = 19,
    SurfaceType20                                  = 20,
    SurfaceType21                                  = 21,
    SurfaceType22                                  = 22,
    SurfaceType23                                  = 23,
    SurfaceType24                                  = 24,
    SurfaceType25                                  = 25,
    SurfaceType26                                  = 26,
    SurfaceType27                                  = 27,
    SurfaceType28                                  = 28,
    SurfaceType29                                  = 29,
    SurfaceType30                                  = 30,
    SurfaceType31                                  = 31,
    SurfaceType32                                  = 32,
    SurfaceType33                                  = 33,
    SurfaceType34                                  = 34,
    SurfaceType35                                  = 35,
    SurfaceType36                                  = 36,
    SurfaceType37                                  = 37,
    SurfaceType38                                  = 38,
    SurfaceType39                                  = 39,
    SurfaceType40                                  = 40,
    SurfaceType41                                  = 41,
    SurfaceType42                                  = 42,
    SurfaceType43                                  = 43,
    SurfaceType44                                  = 44,
    SurfaceType45                                  = 45,
    SurfaceType46                                  = 46,
    SurfaceType47                                  = 47,
    SurfaceType48                                  = 48,
    SurfaceType49                                  = 49,
    SurfaceType50                                  = 50,
    SurfaceType51                                  = 51,
    SurfaceType52                                  = 52,
    SurfaceType53                                  = 53,
    SurfaceType54                                  = 54,
    SurfaceType55                                  = 55,
    SurfaceType56                                  = 56,
    SurfaceType57                                  = 57,
    SurfaceType58                                  = 58,
    SurfaceType59                                  = 59,
    SurfaceType60                                  = 60,
    SurfaceType61                                  = 61,
    SurfaceType62                                  = 62,
    SurfaceType                                    = 63,
    EPhysicalSurface                               = 64

};


// Enum  SGFramework.EInteractEventType
enum class EInteractEventType : uint8_t
{
    EnableInteract                                 = 0,
    DisableInteract                                = 1,
    Start                                          = 2,
    Cancel                                         = 3,
    Complete                                       = 4,
    DestoryInteract                                = 5,
    EInteractEventType                             = 6

};


// Enum  SGFramework.EUseActorFailureReason
enum class EUseActorFailureReason : uint8_t
{
    None                                           = 0,
    UseInventory                                   = 1,
    UseInventory                                   = 2,
    UseInventory                                   = 3,
    UseInventory                                   = 4,
    UseInventory                                   = 5,
    UseInventory                                   = 6,
    UseInventory                                   = 7,
    UseInventory                                   = 8,
    UseInventory                                   = 9,
    UseInventory                                   = 10,
    GiveInventory                                  = 11,
    LootInventory                                  = 12,
    UseInventory                                   = 13,
    UseInventory                                   = 14,
    Others                                         = 15,
    EUseActorFailureReason                         = 16

};


// Enum  SGFramework.ESGActionAbilityType
enum class ESGActionAbilityType : uint8_t
{
    ESGActionAbilityType                           = 0,
    ESGActionAbilityType                           = 1,
    ESGActionAbilityType                           = 2,
    ESGActionAbilityType                           = 3,
    ESGActionAbilityType                           = 4,
    ESGActionAbilityType                           = 5,
    ESGActionAbilityType                           = 6,
    ESGActionAbilityType                           = 7,
    ESGActionAbilityType                           = 8,
    ESGActionAbilityType                           = 9,
    ESGActionAbilityType                           = 10,
    ESGActionAbilityType                           = 11,
    ESGActionAbilityType                           = 12,
    ESGActionAbilityType                           = 13,
    ESGActionAbilityType                           = 14,
    ESGActionAbilityType                           = 15,
    ESGActionAbilityType                           = 16,
    ESGActionAbilityType                           = 17,
    ESGActionAbilityType                           = 18,
    ESGActionAbilityType                           = 19,
    ESGActionAbilityType                           = 20,
    ESGActionAbilityType                           = 21,
    ESGActionAbilityType                           = 22,
    ESGActionAbilityType                           = 23,
    ESGActionAbilityType                           = 24,
    ESGActionAbilityType                           = 25,
    ESGActionAbilityType                           = 26,
    ESGActionAbilityType                           = 27,
    ESGActionAbilityType                           = 28,
    ESGActionAbilityType                           = 29,
    ESGActionAbilityType                           = 30,
    ESGActionAbilityType                           = 31,
    ESGActionAbilityType                           = 32,
    ESGActionAbilityType                           = 33,
    ESGActionAbilityType                           = 34,
    ESGActionAbilityType                           = 35,
    ESGActionAbilityType                           = 36,
    ESGActionAbilityType                           = 37,
    ESGActionAbilityType                           = 38,
    ESGActionAbilityType                           = 39,
    ESGActionAbilityType                           = 40,
    ESGActionAbilityType                           = 41,
    ESGActionAbilityType                           = 42,
    ESGActionAbilityType                           = 43,
    ESGActionAbilityType                           = 44,
    ESGActionAbilityType                           = 45,
    ESGActionAbilityType                           = 46,
    ESGActionAbilityType                           = 47,
    ESGActionAbilityType                           = 48,
    ESGActionAbilityType                           = 49,
    ESGActionAbilityType                           = 50,
    ESGActionAbilityType                           = 51,
    ESGActionAbilityType                           = 52,
    ESGActionAbilityType                           = 53,
    ESGActionAbilityType                           = 54,
    ESGActionAbilityType                           = 55,
    ESGActionAbilityType                           = 56,
    ESGActionAbilityType                           = 57,
    ESGActionAbilityType                           = 58,
    ESGActionAbilityType                           = 59,
    ESGActionAbilityType                           = 60,
    ESGActionAbilityType                           = 61,
    ESGActionAbilityType                           = 62

};


// Enum  SGFramework.EShowVoiceAction
enum class EShowVoiceAction : uint8_t
{
    AbortOthers                                    = 0,
    KeepOthers                                     = 1,
    EShowVoiceAction                               = 2

};


// Enum  SGFramework.EChaseActivityState
enum class EChaseActivityState : uint8_t
{
    None                                           = 0,
    ActivityInvNotSpawn                            = 1,
    FirstActivityInvSpawned                        = 2,
    BossAIDied                                     = 3,
    FirstActivityInvCollected                      = 4,
    AllActivityInvDestroyed                        = 5,
    EChaseActivityState                            = 6

};


// Enum  SGFramework.EActivityInventoryState
enum class EActivityInventoryState : uint8_t
{
    None                                           = 0,
    Teammate                                       = 1,
    Self                                           = 2,
    Other                                          = 3,
    EActivityInventoryState                        = 4

};


// Enum  SGFramework.EUAUIMode
enum class EUAUIMode : uint8_t
{
    None                                           = 0,
    Character                                      = 1,
    VehicleDriver                                  = 2,
    VehiclePassenger                               = 3,
    Bag                                            = 4,
    BigMap                                         = 5,
    Settlement                                     = 6,
    GameOver                                       = 7,
    EndGame                                        = 8,
    OperationResult                                = 9,
    Spectating                                     = 10,
    GameSettings                                   = 11,
    Drone                                          = 12,
    EscapeLocInfo                                  = 13,
    AssembleWeapon                                 = 14,
    CompetitionGameSpectating                      = 15,
    Preparations                                   = 16,
    MessageBox                                     = 17,
    TipsMessage                                    = 18,
    EUAUIMode                                      = 19

};


// Enum  SGFramework.EMobileInputPhase
enum class EMobileInputPhase : uint8_t
{
    MobileInputPhase                               = 0,
    MobileInputPhase                               = 1,
    MobileInputPhase                               = 2,
    MobileInputPhase                               = 3,
    MobileInputPhase                               = 4,
    MobileInputPhase                               = 5

};


// Enum  SGFramework.ESGWeaponShootingMode
enum class ESGWeaponShootingMode : uint8_t
{
    EShootingMode                                  = 0,
    EShootingMode                                  = 1,
    EShootingMode                                  = 2,
    EShootingMode                                  = 3,
    EShootingMode                                  = 4

};


// Enum  SGFramework.EInteractionActorType
enum class EInteractionActorType : uint8_t
{
    None                                           = 0,
    Door                                           = 1,
    PoisonGas                                      = 2,
    SceneGasGate                                   = 3,
    EInteractionActorType                          = 4

};


// Enum  SGFramework.EGetOutOfStuckResult
enum class EGetOutOfStuckResult : uint8_t
{
    Success                                        = 0,
    IsNotStuck                                     = 1,
    CannotFindLocation                             = 2,
    NoChance                                       = 3,
    OtherFailReason                                = 4,
    EGetOutOfStuckResult                           = 5

};


// Enum  SGFramework.EInventoryInteractionType
enum class EInventoryInteractionType : uint8_t
{
    None                                           = 0,
    Fill                                           = 1,
    FillExtra                                      = 2,
    UnFill                                         = 3,
    Use                                            = 4,
    Reload                                         = 5,
    ReloadBores                                    = 6,
    ReloadOneByOne                                 = 7,
    ReloadOneByOneHang                             = 8,
    ReloadBoresOnHang                              = 9,
    SetupAdapter                                   = 10,
    CheckMagazine                                  = 11,
    RollUpBag                                      = 12,
    FoldStock                                      = 13,
    FoldScope                                      = 14,
    RepairWeapon                                   = 15,
    SetupArmorAdapter                              = 16,
    ViewWeapon                                     = 17,
    CheckMagazineInBag                             = 18,
    SwitchWeapon                                   = 19,
    PullBolt                                       = 20,
    SwitchFireMode                                 = 21,
    EInventoryInteractionType                      = 22

};


// Enum  SGFramework.EThunderstormStage
enum class EThunderstormStage : uint8_t
{
    None                                           = 0,
    Begin                                          = 1,
    ReachtoPeak                                    = 2,
    Fade                                           = 3,
    End                                            = 4,
    EThunderstormStage                             = 5

};


// Enum  SGFramework.EBattleLeaveReason
enum class EBattleLeaveReason : uint8_t
{
    Normal                                         = 0,
    Dead                                           = 1,
    GameOver                                       = 2,
    TargetLost                                     = 3,
    Unknown                                        = 255,
    EBattleLeaveReason                             = 256

};


// Enum  SGFramework.EContainerIteractAnimState
enum class EContainerIteractAnimState : uint8_t
{
    Closed                                         = 0,
    Opening                                        = 1,
    Opened                                         = 2,
    Closing                                        = 3,
    EContainerIteractAnimState                     = 4

};


// Enum  SGFramework.ESGRescueUIType
enum class ESGRescueUIType : uint8_t
{
    NONE                                           = 0,
    SearchingRescueTarget                          = 1,
    StartOrEndBeingRescued                         = 2,
    CanRescueSelf                                  = 3,
    ESGRescueUIType                                = 4

};


// Enum  SGFramework.ERescueFailureReason
enum class ERescueFailureReason : uint8_t
{
    None                                           = 0,
    Rescue                                         = 1,
    Rescue                                         = 2,
    Others                                         = 3,
    ERescueFailureReason                           = 4

};


// Enum  SGFramework.EDeathDropType
enum class EDeathDropType : uint8_t
{
    DeathDrop                                      = 0,
    DeathDrop                                      = 1,
    DeathDrop                                      = 2

};


// Enum  SGFramework.EUseInventoryPhase
enum class EUseInventoryPhase : uint8_t
{
    Start                                          = 0,
    Cancel                                         = 1,
    Complete                                       = 2,
    EUseInventoryPhase                             = 3

};


// Enum  SGFramework.ESGInventorySpawnSourceType
enum class ESGInventorySpawnSourceType : uint8_t
{
    Default                                        = 0,
    LootPoint                                      = 1,
    CharaterTakeIn                                 = 2,
    AIEquipPoolRandom                              = 3,
    Merge                                          = 4,
    UnfillContainer                                = 5,
    DuplicationDropConvert                         = 6,
    InBattleGiveItem                               = 7,
    EditorDefaultInventory                         = 8,
    GMCheat                                        = 9,
    QuestActionSpawn                               = 10,
    ReplaceDrop                                    = 11,
    LootPointGuarantee                             = 12,
    Gashapon                                       = 13,
    WeaponBuild                                    = 14,
    ESGInventorySpawnSourceType                    = 15

};


// Enum  SGFramework.ESGSimulatedProgressAbilityType
enum class ESGSimulatedProgressAbilityType : uint8_t
{
    None                                           = 0,
    UsingInventory                                 = 1,
    RescuingTeammate                               = 2,
    BeingRescued                                   = 3,
    FillContainer                                  = 4,
    UnfillContainer                                = 5,
    Max                                            = 6

};


// Enum  SGFramework.EWatchGameState
enum class EWatchGameState : uint8_t
{
    EWatchGame                                     = 0,
    EWatchGame                                     = 1,
    EWatchGame                                     = 2,
    EWatchGame                                     = 3

};


// Enum  SGFramework.ESGInventoryType
enum class ESGInventoryType : uint8_t
{
    None                                           = 0,
    Weapon                                         = 1,
    WeaponAdapter                                  = 2,
    Ammo                                           = 3,
    Armor                                          = 4,
    Recovery                                       = 5,
    Mybag                                          = 6,
    Vestbag                                        = 7,
    CorpseContainer                                = 8,
    LootContainer                                  = 9,
    Avatar                                         = 10,
    Safe                                           = 11,
    Pocket                                         = 12,
    Badge                                          = 13,
    Item                                           = 14,
    ESGInventoryType                               = 15

};


// Enum  SGFramework.ESGUIOperationForSpectating
enum class ESGUIOperationForSpectating : uint8_t
{
    OP                                             = 0,
    OP                                             = 1,
    OP                                             = 2,
    OP                                             = 3,
    OP                                             = 4,
    OP                                             = 5,
    OP                                             = 6,
    OP                                             = 7

};


// Enum  SGFramework.EPullBoltFailureReason
enum class EPullBoltFailureReason : uint8_t
{
    EPullBoltFailureReason                         = 0,
    EPullBoltFailureReason                         = 1,
    EPullBoltFailureReason                         = 2,
    EPullBoltFailureReason                         = 3

};


// Enum  SGFramework.EGashaponGearsType
enum class EGashaponGearsType : uint8_t
{
    GashaponGears                                  = 0,
    GashaponGears                                  = 1,
    GashaponGears                                  = 2,
    GashaponGears                                  = 3,
    GashaponGears                                  = 4,
    GashaponGears                                  = 5,
    GashaponGears                                  = 6,
    GashaponGears                                  = 7,
    GashaponGears                                  = 8,
    GashaponGears                                  = 9,
    GashaponGears                                  = 10

};


// Enum  Engine.ENetDormancy
enum class ENetDormancy : uint8_t
{
    DORM                                           = 0,
    DORM                                           = 1,
    DORM                                           = 2,
    DORM                                           = 3,
    DORM                                           = 4,
    DORM                                           = 5

};


// Enum  Engine.EAutoReceiveInput
enum class EAutoReceiveInput : uint8_t
{
    Disabled                                       = 0,
    Player0                                        = 1,
    Player1                                        = 2,
    Player2                                        = 3,
    Player3                                        = 4,
    Player4                                        = 5,
    Player5                                        = 6,
    Player6                                        = 7,
    Player7                                        = 8,
    EAutoReceiveInput                              = 9

};


// Enum  Engine.ESpawnActorCollisionHandlingMethod
enum class ESpawnActorCollisionHandlingMethod : uint8_t
{
    Undefined                                      = 0,
    AlwaysSpawn                                    = 1,
    AdjustIfPossibleButAlwaysSpawn                 = 2,
    AdjustIfPossibleButDontSpawnIfColliding        = 3,
    DontSpawnIfColliding                           = 4,
    ESpawnActorCollisionHandlingMethod             = 5

};


// Enum  Engine.ERotatorQuantization
enum class ERotatorQuantization : uint8_t
{
    ByteComponents                                 = 0,
    ShortComponents                                = 1,
    ERotatorQuantization                           = 2

};


// Enum  Engine.EVectorQuantization
enum class EVectorQuantization : uint8_t
{
    RoundWholeNumber                               = 0,
    RoundOneDecimal                                = 1,
    RoundTwoDecimals                               = 2,
    EVectorQuantization                            = 3

};


// Enum  Engine.EActorUpdateOverlapsMethod
enum class EActorUpdateOverlapsMethod : uint8_t
{
    UseConfigDefault                               = 0,
    AlwaysUpdate                                   = 1,
    OnlyUpdateMovable                              = 2,
    NeverUpdate                                    = 3,
    EActorUpdateOverlapsMethod                     = 4

};


// Enum  Engine.ECameraShakePlaySpace
enum class ECameraShakePlaySpace : uint8_t
{
    CameraLocal                                    = 0,
    World                                          = 1,
    UserDefined                                    = 2,
    ECameraShakePlaySpace                          = 3

};


// Enum  Engine.EViewTargetBlendFunction
enum class EViewTargetBlendFunction : uint8_t
{
    VTBlend                                        = 0,
    VTBlend                                        = 1,
    VTBlend                                        = 2,
    VTBlend                                        = 3,
    VTBlend                                        = 4,
    VTBlend                                        = 5

};


// Enum  Engine.ETravelType
enum class ETravelType : uint8_t
{
    TRAVEL                                         = 0,
    TRAVEL                                         = 1,
    TRAVEL                                         = 2,
    TRAVEL                                         = 3

};


// Enum  Engine.ECollisionChannel
enum class ECollisionChannel : uint8_t
{
    ECC                                            = 0,
    ECC                                            = 1,
    ECC                                            = 2,
    ECC                                            = 3,
    ECC                                            = 4,
    ECC                                            = 5,
    ECC                                            = 6,
    ECC                                            = 7,
    ECC                                            = 8,
    ECC                                            = 9,
    ECC                                            = 10,
    ECC                                            = 11,
    ECC                                            = 12,
    ECC                                            = 13,
    ECC                                            = 14,
    ECC                                            = 15,
    ECC                                            = 16,
    ECC                                            = 17,
    ECC                                            = 18,
    ECC                                            = 19,
    ECC                                            = 20,
    ECC                                            = 21,
    ECC                                            = 22,
    ECC                                            = 23,
    ECC                                            = 24,
    ECC                                            = 25,
    ECC                                            = 26,
    ECC                                            = 27,
    ECC                                            = 28,
    ECC                                            = 29,
    ECC                                            = 30,
    ECC                                            = 31,
    ECC                                            = 32,
    ECC                                            = 33

};


// Enum  Engine.EControllerAnalogStick
enum class EControllerAnalogStick : uint8_t
{
    CAS                                            = 0,
    CAS                                            = 1,
    CAS                                            = 2

};


// Enum  Engine.EDynamicForceFeedbackAction
enum class EDynamicForceFeedbackAction : uint8_t
{
    Start                                          = 0,
    Update                                         = 1,
    Stop                                           = 2,
    EDynamicForceFeedbackAction                    = 3

};


// Enum  InputCore.EControllerHand
enum class EControllerHand : uint8_t
{
    Left                                           = 0,
    Right                                          = 1,
    AnyHand                                        = 2,
    Pad                                            = 3,
    ExternalCamera                                 = 4,
    Gun                                            = 5,
    Special                                        = 6,
    Special                                        = 7,
    Special                                        = 8,
    Special                                        = 9,
    Special                                        = 10,
    Special                                        = 11,
    Special                                        = 12,
    Special                                        = 13,
    Special                                        = 14,
    Special                                        = 15,
    Special                                        = 16,
    ControllerHand                                 = 17,
    EControllerHand                                = 18

};


// Enum  AIModule.EPathFollowingResult
enum class EPathFollowingResult : uint8_t
{
    Success                                        = 0,
    Blocked                                        = 1,
    OffPath                                        = 2,
    Aborted                                        = 3,
    Skipped                                        = 4,
    Invalid                                        = 5,
    EPathFollowingResult                           = 6

};


// Enum  AIModule.EEnvQueryStatus
enum class EEnvQueryStatus : uint8_t
{
    Processing                                     = 0,
    Success                                        = 1,
    Failed                                         = 2,
    Aborted                                        = 3,
    OwnerLost                                      = 4,
    MissingParam                                   = 5,
    EEnvQueryStatus                                = 6

};


// Enum  AIModule.EPathFollowingRequestResult
enum class EPathFollowingRequestResult : uint8_t
{
    Failed                                         = 0,
    AlreadyAtGoal                                  = 1,
    RequestSuccessful                              = 2,
    EPathFollowingRequestResult                    = 3

};


// Enum  SGFramework.EVolumeType
enum class EVolumeType : uint8_t
{
    EVolumeType                                    = 0,
    EVolumeType                                    = 1,
    EVolumeType                                    = 2,
    EVolumeType                                    = 3

};


// Enum  SGFramework.EQTEType
enum class EQTEType : uint8_t
{
    QTEType                                        = 0,
    QTEType                                        = 1,
    QTEType                                        = 2,
    QTEType                                        = 3

};


// Enum  SGFramework.EQTEStep
enum class EQTEStep : uint8_t
{
    QTEStep                                        = 0,
    QTEStep                                        = 1,
    QTEStep                                        = 2,
    QTEStep                                        = 3,
    QTEStep                                        = 4,
    QTEStep                                        = 5,
    QTEStep                                        = 6,
    QTEStep                                        = 7

};


// Enum  SGFramework.EDelayReason
enum class EDelayReason : uint8_t
{
    None                                           = 0,
    TcaticalPistolTransition                       = 1,
    EDelayReason                                   = 2

};


// Enum  SGFramework.ESGInventoryChildConfigOperation
enum class ESGInventoryChildConfigOperation : uint8_t
{
    And                                            = 0,
    Or                                             = 1,
    ESGInventoryChildConfigOperation               = 2

};


// Enum  SGFramework.ESGRadiusCheckType
enum class ESGRadiusCheckType : uint8_t
{
    None                                           = 0,
    Sphere                                         = 1,
    Box                                            = 2,
    Cylinder                                       = 3,
    ESGRadiusCheckType                             = 4

};


// Enum  SGFramework.Enum
enum class Enum : uint8_t
{
    Enum                                           = 0,
    Enum                                           = 1,
    Enum                                           = 2,
    Enum                                           = 3,
    Enum                                           = 4,
    Enum                                           = 5

};


// Enum  SGFramework.EAISpawnStep
enum class EAISpawnStep : uint8_t
{
    AISpawnStep                                    = 0,
    AISpawnStep                                    = 1,
    AISpawnStep                                    = 2,
    AISpawnStep                                    = 3,
    AISpawnStep                                    = 4,
    AISpawnStep                                    = 5,
    AISpawnStep                                    = 6,
    AISpawnStep                                    = 7,
    AISpawnStep                                    = 8,
    AISpawnStep                                    = 9,
    AISpawnStep                                    = 10

};


// Enum  SGFramework.EAIRemoveReason
enum class EAIRemoveReason : uint8_t
{
    ENone                                          = 0,
    EPressureBalance                               = 1,
    ETooManyAIInSquad                              = 2,
    ETooManyAIInMap                                = 3,
    EWaitOutOfTime                                 = 4,
    EAIRemoveReason                                = 5

};


// Enum  SGFramework.EAICharacterPriority
enum class EAICharacterPriority : uint8_t
{
    EHigh                                          = 0,
    ENormal                                        = 1,
    ELow                                           = 2,
    EPendingRemove                                 = 3,
    EToRemove                                      = 4,
    EInvalid                                       = 5,
    EAICharacterPriority                           = 6

};


// Enum  SGFramework.ESpawnReason
enum class ESpawnReason : uint8_t
{
    Normal                                         = 0,
    AlarmDevice                                    = 1,
    PlayerEnter                                    = 2,
    ByVector                                       = 3,
    BySpawnPoint                                   = 4,
    ESpawnReason                                   = 5

};


// Enum  SGFramework.EAIState
enum class EAIState : uint8_t
{
    AIPawnState                                    = 0,
    AIPawnState                                    = 1,
    AIPawnState                                    = 2,
    AIPawnState                                    = 3

};


// Enum  SGFramework.ESGEnterLoopLeaveState
enum class ESGEnterLoopLeaveState : uint8_t
{
    ELLSM                                          = 0,
    ELLSM                                          = 1,
    ELLSM                                          = 2,
    ELLSM                                          = 3,
    ELLSM                                          = 4,
    ELLSM                                          = 5,
    ELLSM                                          = 6

};


// Enum  SGFramework.EAdapterAnimationType
enum class EAdapterAnimationType : uint8_t
{
    AdapterAnim                                    = 0,
    AdapterAnim                                    = 1,
    AdapterAnim                                    = 2,
    AdapterAnim                                    = 3,
    AdapterAnim                                    = 4,
    AdapterAnim                                    = 5,
    AdapterAnim                                    = 6,
    AdapterAnim                                    = 7,
    AdapterAnim                                    = 8,
    AdapterAnim                                    = 9,
    AdapterAnim                                    = 10,
    AdapterAnim                                    = 11

};


// Enum  SGFramework.ETakeCoverLeanAnimType
enum class ETakeCoverLeanAnimType : uint8_t
{
    LeanRight                                      = 0,
    LeanLeft                                       = 1,
    ETakeCoverLeanAnimType                         = 2

};


// Enum  SGFramework.ECharacterBattleStateType
enum class ECharacterBattleStateType : uint8_t
{
    ECharacterBattleStateType                      = 0,
    ECharacterBattleStateType                      = 1,
    ECharacterBattleStateType                      = 2,
    ECharacterBattleStateType                      = 3,
    ECharacterBattleStateType                      = 4

};


// Enum  SGFramework.E1PRelaxType
enum class E1PRelaxType : uint8_t
{
    E1PRelaxType                                   = 0,
    E1PRelaxType                                   = 1,
    E1PRelaxType                                   = 2,
    E1PRelaxType                                   = 3,
    E1PRelaxType                                   = 4

};


// Enum  SGFramework.EMovingCardinalTP
enum class EMovingCardinalTP : uint8_t
{
    Forward                                        = 0,
    Left                                           = 1,
    Backward                                       = 2,
    Right                                          = 3,
    EMovingCardinalTP                              = 4

};


// Enum  SGFramework.EJumpState
enum class EJumpState : uint8_t
{
    JumpState                                      = 0,
    JumpState                                      = 1,
    JumpState                                      = 2,
    JumpState                                      = 3,
    JumpState                                      = 4

};


// Enum  SGFramework.ETacticalPistolAnimationType
enum class ETacticalPistolAnimationType : uint8_t
{
    None                                           = 0,
    IdleToTactical                                 = 1,
    TacticalToMainWeapon                           = 2,
    TacticalToPistol                               = 3,
    TacticalToPistol                               = 4,
    TacticalPutDown                                = 5,
    ETacticalPistolAnimationType                   = 6

};


// Enum  SGFramework.EFallingAnimType
enum class EFallingAnimType : uint8_t
{
    None                                           = 0,
    Low                                            = 1,
    Medium                                         = 2,
    High                                           = 3,
    EFallingAnimType                               = 4

};


// Enum  SGFramework.ERootYawOffsetMode
enum class ERootYawOffsetMode : uint8_t
{
    Accumlate                                      = 0,
    Hold                                           = 1,
    BlendOut                                       = 2,
    ERootYawOffsetMode                             = 3

};


// Enum  SGFramework.ETurnInPlaceState
enum class ETurnInPlaceState : uint8_t
{
    Idle                                           = 0,
    TurnInPlaceRotation                            = 1,
    TurnInPlaceRecovery                            = 2,
    ETurnInPlaceState                              = 3

};


// Enum  SGFramework.ELocomotionType
enum class ELocomotionType : uint8_t
{
    Normal                                         = 0,
    Fracture                                       = 1,
    ELocomotionType                                = 2

};


// Enum  SGFramework.EAnimTransitionState
enum class EAnimTransitionState : uint8_t
{
    None                                           = 0,
    Stand                                          = 1,
    Prone                                          = 2,
    Crouch                                         = 3,
    Prone                                          = 4,
    Sprint                                         = 5,
    Sprint                                         = 6,
    Sprint                                         = 7,
    Stand                                          = 8,
    Stand                                          = 9,
    Run                                            = 10,
    Stand                                          = 11,
    Casual                                         = 12,
    Sprint                                         = 13,
    Sprint                                         = 14,
    Sprint                                         = 15,
    Sprint                                         = 16,
    Stand                                          = 17,
    Crouch                                         = 18,
    EAnimTransitionState                           = 19

};


// Enum  SGFramework.EAnimSpeedType
enum class EAnimSpeedType : uint8_t
{
    StandWalkF                                     = 0,
    StandWalkB                                     = 1,
    StandRunF                                      = 2,
    StandRunB                                      = 3,
    StandSprint                                    = 4,
    CrouchWalk                                     = 5,
    CrouchRunF                                     = 6,
    CrouchRunB                                     = 7,
    Max                                            = 8

};


// Enum  SGFramework.EAnimStance
enum class EAnimStance : uint8_t
{
    Stand                                          = 0,
    Crouch                                         = 1,
    Prone                                          = 2,
    DBNO                                           = 3,
    Max                                            = 4

};


// Enum  SGFramework.EMovementStance
enum class EMovementStance : uint8_t
{
    Idle                                           = 0,
    Walk                                           = 1,
    Run                                            = 2,
    Sprint                                         = 3,
    EMovementStance                                = 4

};


// Enum  SGFramework.EWeaponType
enum class EWeaponType : uint8_t
{
    Unarmed                                        = 0,
    Rifle                                          = 1,
    Pistol                                         = 2,
    Throwable                                      = 3,
    Melle                                          = 4,
    EWeaponType                                    = 5

};


// Enum  SGFramework.ECameraAnimatedScaler
enum class ECameraAnimatedScaler : uint8_t
{
    ECameraAnimatedScaler                          = 0,
    ECameraAnimatedScaler                          = 1,
    ECameraAnimatedScaler                          = 2,
    ECameraAnimatedScaler                          = 3

};


// Enum  SGFramework.ESGAvatarComponentType
enum class ESGAvatarComponentType : uint8_t
{
    None                                           = 0,
    InventoryEquipMeshComponent                    = 1,
    ESGAvatarComponentType                         = 2

};


// Enum  SGFramework.ECameraShakeAxis
enum class ECameraShakeAxis : uint8_t
{
    ECameraShakeAxis                               = 0,
    ECameraShakeAxis                               = 1,
    ECameraShakeAxis                               = 2,
    ECameraShakeAxis                               = 3,
    ECameraShakeAxis                               = 4,
    ECameraShakeAxis                               = 5,
    ECameraShakeAxis                               = 6,
    ECameraShakeAxis                               = 7

};


// Enum  SGFramework.ELandingTypes
enum class ELandingTypes : uint8_t
{
    LandingTypes                                   = 0,
    LandingTypes                                   = 1,
    LandingTypes                                   = 2,
    LandingTypes                                   = 3,
    LandingTypes                                   = 4

};


// Enum  SGFramework.ECameraViewportTypes
enum class ECameraViewportTypes : uint8_t
{
    CVT                                            = 0,
    CVT                                            = 1,
    CVT                                            = 2,
    CVT                                            = 3,
    CVT                                            = 4,
    CVT                                            = 5,
    CVT                                            = 6

};


// Enum  SGFramework.EAISpecialAudioEvt
enum class EAISpecialAudioEvt : uint8_t
{
    None                                           = 0,
    HitGrunt                                       = 1,
    DeathGrunt                                     = 2,
    EAISpecialAudioEvt                             = 3

};


// Enum  SGFramework.EDBNOEndReason
enum class EDBNOEndReason : uint8_t
{
    DBNOEndReason                                  = 0,
    DBNOEndReason                                  = 1,
    DBNOEndReason                                  = 2,
    DBNOEndReason                                  = 3,
    DBNOEndReason                                  = 4

};


// Enum  SGFramework.ECharacterFoodStateType
enum class ECharacterFoodStateType : uint8_t
{
    Normal                                         = 0,
    SlightLackInFood                               = 1,
    MediumLackInFood                               = 2,
    HeavyLackInFood                                = 3,
    ECharacterFoodStateType                        = 4

};


// Enum  SGFramework.EFootEffectDir
enum class EFootEffectDir : uint8_t
{
    None                                           = 0,
    Left                                           = 1,
    Right                                          = 2,
    EFootEffectDir                                 = 3

};


// Enum  SGFramework.ESGMaxSpeedFactor
enum class ESGMaxSpeedFactor : uint8_t
{
    None                                           = 0,
    MaxSpeedFactor                                 = 1,
    MaxSpeedFactor                                 = 2,
    MaxSpeedFactor                                 = 4,
    MaxSpeedFactor                                 = 8,
    MaxSpeedFactor                                 = 16,
    MaxSpeedFactor                                 = 32,
    MaxSpeedFactor                                 = 64,
    MaxSpeedFactor                                 = 128,
    MaxSpeedFactor                                 = 256,
    MaxSpeedFactor                                 = 512,
    MaxSpeedFactor                                 = 1024,
    MaxSpeedFactor                                 = 2048,
    MaxSpeedFactor                                 = 4096,
    MaxSpeedFactor                                 = 8192,
    MaxSpeedFactor                                 = 16384,
    MaxSpeedFactor                                 = 32768,
    MaxSpeedFactor                                 = 65536,
    MaxSpeedFactor                                 = 131072,
    MaxSpeedFactor                                 = 262144,
    MaxSpeedFactor                                 = 524288,
    MaxSpeedFactor                                 = 1048576,
    MaxSpeedFactor                                 = 2097152,
    MaxSpeedFactor                                 = 4194304,
    MaxSpeedFactor                                 = 8388608,
    MaxSpeedFactor                                 = 16777216,
    MaxSpeedFactor                                 = 33554432,
    MaxSpeedFactor                                 = 67108864,
    MaxSpeedFactor                                 = 134217728,
    MaxSpeedFactor                                 = 268435456,
    MaxSpeedFactor                                 = 536870912,
    MaxSpeedFactor                                 = 1073741824,
    MaxSize                                        = 1073741825,
    ESGMaxSpeedFactor                              = 1073741826

};


// Enum  SGFramework.ELadderClimbingInputType
enum class ELadderClimbingInputType : uint8_t
{
    None                                           = 0,
    Up                                             = 1,
    Down                                           = 2,
    Jump                                           = 3,
    ELadderClimbingInputType                       = 4

};


// Enum  SGFramework.ELadderClimbingDirectionType
enum class ELadderClimbingDirectionType : uint8_t
{
    None                                           = 0,
    Left                                           = 1,
    Right                                          = 2,
    Forward                                        = 3,
    Backward                                       = 4,
    ELadderClimbingDirectionType                   = 5

};


// Enum  SGFramework.ELadderClimbingStateType
enum class ELadderClimbingStateType : uint8_t
{
    None                                           = 0,
    Enter                                          = 1,
    Exit                                           = 2,
    Loop                                           = 3,
    Idle                                           = 4,
    Max                                            = 5

};


// Enum  SGFramework.EVaultFailReason
enum class EVaultFailReason : uint8_t
{
    EVaultFailReason                               = 0,
    EVaultFailReason                               = 1,
    EVaultFailReason                               = 2,
    EVaultFailReason                               = 3,
    EVaultFailReason                               = 4,
    EVaultFailReason                               = 5,
    EVaultFailReason                               = 6,
    EVaultFailReason                               = 7,
    EVaultFailReason                               = 8,
    EVaultFailReason                               = 9,
    EVaultFailReason                               = 10,
    EVaultFailReason                               = 11,
    EVaultFailReason                               = 12,
    EVaultFailReason                               = 13,
    EVaultFailReason                               = 14

};


// Enum  SGFramework.EObstacleHeightLevel
enum class EObstacleHeightLevel : uint8_t
{
    EObstacleHeight                                = 0,
    EObstacleHeight                                = 1,
    EObstacleHeight                                = 2,
    EObstacleHeight                                = 3

};


// Enum  SGFramework.EVaultChoice
enum class EVaultChoice : uint8_t
{
    EChoice                                        = 0,
    EChoice                                        = 1,
    EChoice                                        = 2,
    EChoice                                        = 3

};


// Enum  SGFramework.EVaultPhase
enum class EVaultPhase : uint8_t
{
    EVaultPhase                                    = 0,
    EVaultPhase                                    = 1,
    EVaultPhase                                    = 2

};


// Enum  SGFramework.ESGServerOverrideReason
enum class ESGServerOverrideReason : uint8_t
{
    None                                           = 0,
    Inconspicuous                                  = 1,
    OutOfRange                                     = 2,
    NoPhysicsRunning                               = 3,
    ESGServerOverrideReason                        = 4

};


// Enum  SGFramework.ESGRagdollStage
enum class ESGRagdollStage : uint8_t
{
    None                                           = 0,
    RagdollPrestart                                = 1,
    RagdollStart                                   = 2,
    RagdollStop                                    = 3,
    RagdollBaked                                   = 4,
    RagdollBaked                                   = 5,
    ESGRagdollStage                                = 6

};


// Enum  SGFramework.ECharacterFlashBurnStateType
enum class ECharacterFlashBurnStateType : uint8_t
{
    None                                           = 0,
    Normal                                         = 1,
    MildFlashBurn                                  = 2,
    ModerateFlashBurn                              = 3,
    SevereFlashBurn                                = 4,
    ECharacterFlashBurnStateType                   = 5

};


// Enum  SGFramework.ECharacterTearGasStateType
enum class ECharacterTearGasStateType : uint8_t
{
    Normal                                         = 0,
    SlightTearGas                                  = 1,
    MediumTearGas                                  = 2,
    ECharacterTearGasStateType                     = 3

};


// Enum  SGFramework.ESGCompSigTickDisableReason
enum class ESGCompSigTickDisableReason : uint8_t
{
    NONE                                           = 0,
    ComponentInValid                               = 1,
    ComponentTickClosed                            = 2,
    VolumeUnRelavant                               = 3,
    ExecLimit                                      = 4,
    CalcSig                                        = 5,
    ESGCompSigTickDisableReason                    = 6

};


// Enum  SGFramework.ESGCompSignificancePriority
enum class ESGCompSignificancePriority : uint8_t
{
    SignificancePriority                           = 0,
    SignificancePriority                           = 1,
    SignificancePriority                           = 2,
    SignificancePriority                           = 3,
    SignificancePriority                           = 4

};


// Enum  SGFramework.ERestrictActionInWater
enum class ERestrictActionInWater : uint8_t
{
    None                                           = 0,
    Prone                                          = 1,
    Crouch                                         = 2,
    MAX                                            = 3

};


// Enum  SGFramework.ECharacterMoveDistanceType
enum class ECharacterMoveDistanceType : uint8_t
{
    StandSilentWalk                                = 0,
    StandWalk                                      = 1,
    StandSprint                                    = 2,
    CrouchSilentWalk                               = 3,
    CrouchWalk                                     = 4,
    CrouchSprint                                   = 5,
    ProneSilentWalk                                = 6,
    DBNO                                           = 7,
    Max                                            = 8

};


// Enum  SGFramework.EAvatarDisableTickReason
enum class EAvatarDisableTickReason : uint8_t
{
    AvatarDisableTickReason                        = 0,
    AvatarDisableTickReason                        = 1,
    AvatarDisableTickReason                        = 2,
    AvatarDisableTickReason                        = 3

};


// Enum  SGFramework.EAvatarHiddenReason
enum class EAvatarHiddenReason : uint8_t
{
    AvatarHiddenReason                             = 0,
    AvatarHiddenReason                             = 1,
    AvatarHiddenReason                             = 2,
    AvatarHiddenReason                             = 4,
    AvatarHiddenReason                             = 8,
    AvatarHiddenReason                             = 16,
    AvatarHiddenReason                             = 32,
    AvatarHiddenReason                             = 64,
    AvatarHiddenReason                             = 65

};


// Enum  SGFramework.EMorphTargetType
enum class EMorphTargetType : uint8_t
{
    None                                           = 0,
    Helmet                                         = 1,
    Vest                                           = 2,
    Belt                                           = 3,
    Backpack                                       = 4,
    Headset                                        = 5,
    FaceCover                                      = 6,
    EyeWear                                        = 7,
    Watch                                          = 8,
    Armor                                          = 9,
    Max                                            = 10

};


// Enum  SGFramework.ELadderClimbExitType
enum class ELadderClimbExitType : uint8_t
{
    Top                                            = 0,
    Bottom                                         = 1,
    Fall                                           = 2,
    ELadderClimbExitType                           = 3

};


// Enum  SGFramework.ELadderClimbEnterType
enum class ELadderClimbEnterType : uint8_t
{
    Top                                            = 0,
    Bottom                                         = 1,
    ELadderClimbEnterType                          = 2

};


// Enum  SGFramework.ECharacterMeshBoneType
enum class ECharacterMeshBoneType : uint8_t
{
    Head                                           = 0,
    Pelvis                                         = 1,
    Spine                                          = 2,
    ECharacterMeshBoneType                         = 3

};


// Enum  SGFramework.ESGPlayerPrimitiveType
enum class ESGPlayerPrimitiveType : uint8_t
{
    Default                                        = 0,
    Player1P                                       = 1,
    Player3P                                       = 2,
    ESGPlayerPrimitiveType                         = 3

};


// Enum  SGFramework.ESearchingPrefer
enum class ESearchingPrefer : uint8_t
{
    SearchingPrefer                                = 0,
    SearchingPrefer                                = 1,
    SearchingPrefer                                = 2,
    SearchingPrefer                                = 3

};


// Enum  SGFramework.ECharacterMeshPolicy
enum class ECharacterMeshPolicy : uint8_t
{
    None                                           = 0,
    Game                                           = 1,
    Lobby                                          = 2,
    ECharacterMeshPolicy                           = 3

};


// Enum  SGFramework.EServerMoveResultType
enum class EServerMoveResultType : uint8_t
{
    MoveResult                                     = 0,
    MoveResult                                     = 1,
    MoveResult                                     = 2,
    MoveResult                                     = 3,
    MoveResult                                     = 4,
    MoveResult                                     = 5,
    MoveResult                                     = 6,
    MoveResult                                     = 7

};


// Enum  SGFramework.ECharacterSprintFailureReason
enum class ECharacterSprintFailureReason : uint8_t
{
    SprintFailureReason                            = 0,
    SprintFailureReason                            = 1,
    SprintFailureReason                            = 2,
    SprintFailureReason                            = 3,
    SprintFailureReason                            = 4,
    SprintFailureReason                            = 5,
    SprintFailureReason                            = 6,
    SprintFailureReason                            = 7,
    SprintFailureReason                            = 8,
    SprintFailureReason                            = 9,
    SprintFailureReason                            = 10,
    SprintFailureReason                            = 11,
    SprintFailureReason                            = 12,
    SprintFailureReason                            = 13,
    SprintFailureReason                            = 14,
    SprintFailureReason                            = 15,
    SprintFailureReason                            = 16,
    SprintFailureReason                            = 17,
    SprintFailureReason                            = 18,
    SprintFailureReason                            = 19,
    SprintFailureReason                            = 20,
    SprintFailureReason                            = 21,
    SprintFailureReason                            = 22,
    SprintFailureReason                            = 23,
    SprintFailureReason                            = 24,
    SprintFailureReason                            = 25,
    SprintFailureReason                            = 26,
    SprintFailureReason                            = 27,
    SprintFailureReason                            = 28,
    SprintFailureReason                            = 29,
    SprintFailureReason                            = 30,
    SprintFailureReason                            = 31,
    SprintFailureReason                            = 32,
    SprintFailureReason                            = 33,
    SprintFailureReason                            = 34,
    SprintFailureReason                            = 35,
    SprintFailureReason                            = 36,
    SprintFailureReason                            = 37,
    SprintFailureReason                            = 38,
    SprintFailureReason                            = 39

};


// Enum  SGFramework.ECharacterPose
enum class ECharacterPose : uint8_t
{
    CharacterPose                                  = 0,
    CharacterPose                                  = 1,
    CharacterPose                                  = 2,
    CharacterPose                                  = 3

};


// Enum  SGFramework.ELeftHandIKReason
enum class ELeftHandIKReason : uint8_t
{
    LeftHandIKReason                               = 0,
    LeftHandIKReason                               = 1,
    LeftHandIKReason                               = 2,
    LeftHandIKReason                               = 3

};


// Enum  SGFramework.ESGCharacterVehicleSyncType
enum class ESGCharacterVehicleSyncType : uint8_t
{
    None                                           = 0,
    AttachCharacter                                = 1,
    DetachCharacter                                = 2,
    SwitchSeating                                  = 3,
    ESGCharacterVehicleSyncType                    = 4

};


// Enum  SGFramework.ESGCharacterDisplayPolicy
enum class ESGCharacterDisplayPolicy : uint8_t
{
    ESGCharacterDisplayPolicy                      = 0,
    ESGCharacterDisplayPolicy                      = 1,
    ESGCharacterDisplayPolicy                      = 2,
    ESGCharacterDisplayPolicy                      = 3,
    ESGCharacterDisplayPolicy                      = 4,
    ESGCharacterDisplayPolicy                      = 5,
    ESGCharacterDisplayPolicy                      = 6,
    ESGCharacterDisplayPolicy                      = 7

};


// Enum  SGFramework.ESGHandState
enum class ESGHandState : uint8_t
{
    PuttingDown                                    = 0,
    Down                                           = 1,
    TakingUp                                       = 2,
    Up                                             = 3,
    ESGHandState                                   = 4

};


// Enum  SGFramework.ESwitchToInventoryStage
enum class ESwitchToInventoryStage : uint8_t
{
    None                                           = 0,
    PutDownWeapon                                  = 1,
    TakeUpInventory                                = 2,
    ESwitchToInventoryStage                        = 3

};


// Enum  SGFramework.ESwitchWeaponStage
enum class ESwitchWeaponStage : uint8_t
{
    None                                           = 0,
    PutDown                                        = 1,
    TakeUp                                         = 2,
    ESwitchWeaponStage                             = 3

};


// Enum  SGFramework.WeaponType
enum class WeaponType : uint8_t
{
    SHORT                                          = 0,
    MID                                            = 1,
    LONG                                           = 2,
    WeaponType                                     = 3

};


// Enum  SGFramework.CollapseState
enum class CollapseState : uint8_t
{
    NONE                                           = 0,
    PULL                                           = 1,
    RESET                                          = 2,
    CollapseState                                  = 3

};


// Enum  SGFramework.ESGCompetitionStatusType
enum class ESGCompetitionStatusType : uint8_t
{
    E                                              = 0,
    E                                              = 1,
    E                                              = 2,
    E                                              = 3,
    E                                              = 4,
    E                                              = 5,
    E                                              = 32

};


// Enum  SGFramework.ESGCompSignificanceVolumeRelevantType
enum class ESGCompSignificanceVolumeRelevantType : uint8_t
{
    SignificanceVolumeRelevantType                 = 0,
    SignificanceVolumeRelevantType                 = 1,
    SignificanceVolumeRelevantType                 = 2

};


// Enum  SGFramework.EDataTableType
enum class EDataTableType : uint8_t
{
    DataTable                                      = 0,
    AnimSet                                        = 1,
    AnimSet                                        = 2,
    WeaponParameter                                = 3,
    ModePickupLevelConfigsMappings                 = 4,
    UACommonItemTable                              = 5,
    UAWeaponDetailTable                            = 6,
    UAItemContextMenuTable                         = 7,
    UAInventoryBPItemIDTable                       = 8,
    UABattleMapTable                               = 9,
    UAVestBagGridTable                             = 10,
    UAErrorCodeTable                               = 11,
    UALanguageTextTable                            = 12,
    UADeviceInfoTable                              = 13,
    UACharacterLevelTable                          = 14,
    UAGlobalNumTable                               = 15,
    UAGachaMapTable                                = 16,
    UAModuleContextTable                           = 17,
    UAModuleTable                                  = 18,
    UAServiceTable                                 = 19,
    UAPanelTable                                   = 20,
    UAStatisTable                                  = 21,
    UABattleResultTable                            = 22,
    UAWeaponAssembleTable                          = 23,
    DataTable                                      = 24,
    UATaskConfTable                                = 25,
    UATaskTargetConfTable                          = 26,
    UATaskActiveRewardConfTable                    = 27,
    UATaskKillTargetConfTable                      = 28,
    UATaskCommitTargetConfTable                    = 29,
    UABusinessmanConfTable                         = 30,
    UATradeItemClassifyConfTable                   = 31,
    UATradeConfTable                               = 32,
    UABodyPartsTable                               = 33,
    UAFunctionControlTable                         = 34,
    UAMailTable                                    = 35,
    UAMallConfTable                                = 36,
    UAWeaponAffixTable                             = 37,
    UAContainerTable                               = 38,
    UAContainerRuleConfTable                       = 39,
    UAActConfigTable                               = 40,
    UAEquipSlotTable                               = 41,
    UAContextMenuLevel1Table                       = 42,
    UAContextMenuLevel2Table                       = 43,
    UAContextMenuPickUpTable                       = 44,
    UABuffIconConfTable                            = 45,
    UATaskTypeTable                                = 46,
    UAAmmoNumTable                                 = 47,
    UAGameHUDTable                                 = 48,
    UAGameModeTable                                = 49,
    UAGamePadMessageTable                          = 50,
    UALootPointInfoTable                           = 51,
    UABattleQuickChatTable                         = 52,
    UALootDropTable                                = 53,
    UAPlayModeTable                                = 54,
    UAArmorDetailConfTable                         = 55,
    UATaskReportConfTable                          = 56,
    UABulletDetailConfTable                        = 57,
    UARookieStepTable                              = 58,
    UARookieDetailTable                            = 59,
    UARookieTriggerTable                           = 60,
    UARookieTriggerIDTable                         = 61,
    UARookieItemPickTable                          = 62,
    UALootDropOperationConfTable                   = 63,
    UADropItemConfTable                            = 64,
    UALootDropPoolConfTable                        = 65,
    UAGlobalTable                                  = 66,
    UAScopeScaleTable                              = 67,
    UALandMarkTable                                = 69,
    UAMeleeWeaponDetailTable                       = 70,
    UAAISpawnAreaInfoTable                         = 71,
    UAAISpawnScavSpawnControllerTable              = 72,
    UAAISpawnBossSpawnControllerTable              = 74,
    UAAISpawnPMCConfigTable                        = 75,
    UAAISpawnPMCSpawnControllerTable               = 76,
    UAAISpawnElitTable                             = 77,
    UABattleQuickConductorTable                    = 78,
    UABattleQuickTeamTable                         = 79,
    UAEscapeTextTable                              = 80,
    UAEscapeInteractTextTable                      = 81,
    UACaptureTable                                 = 82,
    UABossTokenConfTable                           = 83,
    UAHUDSubTitleVOTable                           = 84,
    UAHUDSubTitleTextTable                         = 85,
    UALootDataInfosTable                           = 86,
    UALootReplaceConfTable                         = 87,
    UABattleQuickMapSignTable                      = 88,
    UALoadingImageTable                            = 89,
    UALoadingTipsTable                             = 90,
    UAAchieveTaskConfTable                         = 91,
    UAInventorySoundDiffusionTable                 = 92,
    UATraceTargetTable                             = 93,
    UAAchievementDistributerTable                  = 94,
    UAAISoundDiffusionTable                        = 95,
    UASafeLootLimitConfTable                       = 96,
    UASafePoolLimitValueConfTable                  = 97,
    UAMissionFlowClassTable                        = 98,
    UAActivityTemplateMissionTable                 = 99,
    UAScreenEffectPaddingTable                     = 100,
    UABrokenImageConfTable                         = 101,
    UALootResourceConfTable                        = 102,
    AISpawnGroupDataTable                          = 103,
    AIPerformanceDataTable                         = 104,
    AIWeaponConfigDataTable                        = 105,
    AINameDataTable                                = 106,
    EventAIIDModifierDataTable                     = 107,
    AISceneEventDataTable                          = 108,
    AITrackLOGTemplateDataTable                    = 109,
    UAViewTable                                    = 110,
    UAFriRecommConfTable                           = 111,
    UAResourceListConfTable                        = 112,
    SGInventoryDataAssetTable                      = 113,
    SGInventoryGAData                              = 114,
    UARankedLevelTable                             = 115,
    UABrilliantTimeReplayTable                     = 116,
    UATeamVoiceTable                               = 117,
    ServerKey2Text                                 = 118,
    AIEventAvatarTable                             = 119,
    UAGuaranteeCheckItemConfTable                  = 120,
    UAGuaranteeContainerConfTable                  = 121,
    UAGuaranteedPoolConfTable                      = 122,
    UAGuaranteeGenItemConfTable                    = 123,
    UAGuaranteeLimitStrategyConfTable              = 124,
    UAGuaranteedUseAttrConfTable                   = 125,
    UAConsumablesUseAwardConfTable                 = 126,
    UAFactionRelationTypeTable                     = 127,
    SGInventoryGADataAuto                          = 128,
    UAAIUniqueItemInfoTable                        = 129,
    UALoseDropTable                                = 130,
    UADurabilityChangeTable                        = 131,
    UAAdviseInvPriorityTable                       = 132,
    UALootProtectionConfTable                      = 133,
    UAProtectionTypeConfTable                      = 134,
    UATraceStyleTable                              = 135,
    UAWeaponSkinConfTable                          = 136,
    UAAdviseGrenadeTable                           = 137,
    AccountBanReasonTable                          = 138,
    UAParadropConfigTable                          = 139,
    AIFactionDataTable                             = 140,
    UAStandaloneWeatherTable                       = 141,
    UAShockConfTable                               = 142,
    UALootDropActivityConfTable                    = 143,
    UALootDropActivityPoolConfTable                = 144,
    UALootDropControlConfTable                     = 145,
    UALootProtectionItemsConfTable                 = 146,
    UADeliverCargosConfTable                       = 147,
    SGCharacterCompSignificance                    = 148,
    UAEquipmentSkinConfTable                       = 149,
    UATutorialEventTable                           = 150,
    UAConsumablesDetailConfTable                   = 151,
    UAConsumablesBuffConfTable                     = 152,
    UABanThrowsConfTable                           = 153,
    UANationalFlagConfTable                        = 154,
    SGVehicleParams                                = 155,
    UANewTraceConfigTable                          = 156,
    UANewTraceStyleTable                           = 157,
    UANewTraceRuleTable                            = 158,
    UAPlayerEscapeShow                             = 159,
    UAAISpawnPlayerScavConfigTable                 = 160,
    UABattleEventTable                             = 161,
    UAModeThunderTable                             = 162,
    UAThunderDetailTable                           = 163,
    UAParadropWaveConfigTable                      = 164,
    UALootFactionItemConfTable                     = 165,
    UAScavAIDynamicLimitTable                      = 166,
    UAAvatarSetCfgTable                            = 167,
    UAEquipAvatarSetCfgTable                       = 168,
    UAWeaponAvatarSetCfgTable                      = 169,
    UAAvatarDataTable                              = 170,
    UAHostedInteractConfTable                      = 171,
    DataHDTable                                    = 172,
    CAFrontEndStageTable                           = 173,
    EDataTableType                                 = 174

};


// Enum  SGFramework.ESGDoorCategory
enum class ESGDoorCategory : uint8_t
{
    Building                                       = 0,
    Car                                            = 1,
    CarBack                                        = 2,
    ESGDoorCategory                                = 3

};


// Enum  SGFramework.ESGDoorUseMode
enum class ESGDoorUseMode : uint8_t
{
    Default                                        = 0,
    Unlock                                         = 1,
    ESGDoorUseMode                                 = 2

};


// Enum  SGFramework.ESGAlarmState
enum class ESGAlarmState : uint8_t
{
    Unlock                                         = 0,
    Locked                                         = 1,
    ESGAlarmState                                  = 2

};


// Enum  SGFramework.ESGCardReaderDoorType
enum class ESGCardReaderDoorType : uint8_t
{
    Normal                                         = 0,
    CanReset                                       = 1,
    ESGCardReaderDoorType                          = 2

};


// Enum  SGFramework.ESGDoorOpenType
enum class ESGDoorOpenType : uint8_t
{
    None                                           = 0,
    Normal                                         = 1,
    NeedWreck                                      = 2,
    NeedUnlock                                     = 3,
    NeedUnlock                                     = 4,
    NeedUnlock                                     = 5,
    NeedCloseGenerator                             = 6,
    Disabled                                       = 7,
    ESGDoorOpenType                                = 8

};


// Enum  SGFramework.ESGDoorUseType
enum class ESGDoorUseType : uint8_t
{
    None                                           = 0,
    Normal                                         = 1,
    LockedContainer                                = 2,
    ESGDoorUseType                                 = 3

};


// Enum  SGFramework.ESGDoorType
enum class ESGDoorType : uint8_t
{
    OneWay                                         = 0,
    OneWay                                         = 1,
    TwoWay                                         = 2,
    Sliding                                        = 3,
    NoWay                                          = 4,
    ESGDoorType                                    = 5

};


// Enum  SGFramework.ESGFenceSelector
enum class ESGFenceSelector : uint8_t
{
    None                                           = 0,
    Use                                            = 1,
    Use                                            = 2,
    Use                                            = 3,
    Use                                            = 4,
    ESGFenceSelector                               = 5

};


// Enum  SGFramework.ESGFlowFinishState
enum class ESGFlowFinishState : uint8_t
{
    ESGFlowState                                   = 0,
    ESGFlowState                                   = 1,
    ESGFlowState                                   = 2

};


// Enum  SGFramework.EActivityType
enum class EActivityType : uint8_t
{
    EActivityType                                  = 0,
    EActivityType                                  = 1,
    EActivityType                                  = 7,
    EActivityType                                  = 10,
    EActivityType                                  = 11

};


// Enum  SGFramework.EGestureType
enum class EGestureType : uint8_t
{
    OneHand                                        = 0,
    TwoHand                                        = 1,
    FullBody                                       = 2,
    EGestureType                                   = 3

};


// Enum  SGFramework.EAnimSectionType
enum class EAnimSectionType : uint8_t
{
    None                                           = 0,
    Start                                          = 1,
    Loop                                           = 2,
    End                                            = 3,
    EAnimSectionType                               = 4

};


// Enum  SGFramework.ESensitivityMode
enum class ESensitivityMode : uint8_t
{
    Unknown                                        = 4294967295,
    High                                           = 0,
    Middle                                         = 1,
    Low                                            = 2,
    Custom                                         = 3,
    ESensitivityMode                               = 4

};


// Enum  SGFramework.EChaseActivityMessageType
enum class EChaseActivityMessageType : uint8_t
{
    None                                           = 0,
    TeammateGetInventory                           = 1,
    OtherPlayerGetInventory                        = 2,
    InventoryDestroy                               = 3,
    EChaseActivityMessageType                      = 4

};


// Enum  SGFramework.EReplayExternalDataType
enum class EReplayExternalDataType : uint8_t
{
    BulletHit                                      = 0,
    GrenadeExplode                                 = 1,
    StartFire                                      = 2,
    EquipInfo                                      = 3,
    MoveStateChange                                = 4,
    PlayerZoneInfo                                 = 5,
    UseDoorKey                                     = 6,
    LootBox                                        = 7,
    LootBoxItem                                    = 8,
    LeanType                                       = 9,
    RescueTeammate                                 = 10,
    ThrowGrenade                                   = 11,
    EReplayExternalDataType                        = 12

};


// Enum  SGFramework.EActionFeedback
enum class EActionFeedback : uint8_t
{
    ActionFeedback                                 = 0,
    ActionFeedback                                 = 1,
    ActionFeedback                                 = 2,
    ActionFeedback                                 = 3

};


// Enum  SGFramework.EActionFeedbackType
enum class EActionFeedbackType : uint8_t
{
    ActionFeedbackType                             = 0,
    ActionFeedbackType                             = 1

};


// Enum  SGFramework.ENewTraceDisplayPlatform
enum class ENewTraceDisplayPlatform : uint8_t
{
    UnKnow                                         = 0,
    ScenePlatform                                  = 1,
    NewMapPlatform                                 = 2,
    DirectionalBarPlatform                         = 3,
    ENewTraceDisplayPlatform                       = 4

};


// Enum  SGFramework.EHostedInteractRule
enum class EHostedInteractRule : uint8_t
{
    UnKnow                                         = 0,
    Person                                         = 1,
    TeamInfo                                       = 2,
    Faction                                        = 3,
    GameState                                      = 4,
    All                                            = 5,
    EHostedInteractRule                            = 6

};


// Enum  SGFramework.ENewTraceSyncRule
enum class ENewTraceSyncRule : uint8_t
{
    UnKnow                                         = 0,
    PlayerController                               = 1,
    TeamInfo                                       = 2,
    Faction                                        = 3,
    GameState                                      = 4,
    All                                            = 5,
    ENewTraceSyncRule                              = 6

};


// Enum  SGFramework.ENewTraceableMarkType
enum class ENewTraceableMarkType : uint8_t
{
    UnKnow                                         = 0,
    PlayerTrace                                    = 1,
    EscapeTrace                                    = 2,
    MissionTrace                                   = 3,
    SpecialTrace                                   = 4,
    All                                            = 5,
    ENewTraceableMarkType                          = 6

};


// Enum  SGFramework.EShowVoiceResult
enum class EShowVoiceResult : uint8_t
{
    Completed                                      = 0,
    Failed                                         = 1,
    EShowVoiceResult                               = 2

};


// Enum  SGFramework.EMapSignType
enum class EMapSignType : uint8_t
{
    None                                           = 0,
    Map                                            = 1,
    EscapePoint                                    = 2,
    QuestTrace                                     = 3,
    EMapSignType                                   = 4

};


// Enum  SGFramework.EFactionRelationType
enum class EFactionRelationType : uint8_t
{
    None                                           = 0,
    Friendly                                       = 1,
    Neutral                                        = 2,
    hostile                                        = 3,
    EFactionRelationType                           = 4

};


// Enum  SGFramework.ESGDSSwitcherFlag
enum class ESGDSSwitcherFlag : uint8_t
{
    None                                           = 0,
    SGDSSwitcherFlag                               = 1,
    SGDSSwitcherFlag                               = 2,
    ESGDSSwitcherFlag                              = 3

};


// Enum  SGFramework.EUABagOperation
enum class EUABagOperation : uint8_t
{
    Loot                                           = 0,
    OpenBag                                        = 1,
    EUABagOperation                                = 2

};


// Enum  SGFramework.EFollowCharacterWidgetType
enum class EFollowCharacterWidgetType : uint8_t
{
    EFollowCharacterWidgetType                     = 0,
    EFollowCharacterWidgetType                     = 1,
    EFollowCharacterWidgetType                     = 2,
    EFollowCharacterWidgetType                     = 3,
    EFollowCharacterWidgetType                     = 4,
    EFollowCharacterWidgetType                     = 5

};


// Enum  SGFramework.EReportType
enum class EReportType : uint8_t
{
    GameHUDTable                                   = 0,
    TaskReport                                     = 1,
    Toast                                          = 2,
    EReportType                                    = 3

};


// Enum  SGFramework.EActorFilterType
enum class EActorFilterType : uint8_t
{
    None                                           = 0,
    SpecifiedActors                                = 1,
    IgnoreSpecifiedActors                          = 2,
    EActorFilterType                               = 3

};


// Enum  SGFramework.ELeaveGameReason
enum class ELeaveGameReason : uint8_t
{
    Unknow                                         = 0,
    Dead                                           = 1,
    Escaped                                        = 2,
    GameOver                                       = 3,
    Discard                                        = 4,
    Offline                                        = 5,
    ELeaveGameReason                               = 6

};


// Enum  SGFramework.ERelevantCheckType
enum class ERelevantCheckType : uint8_t
{
    None                                           = 0,
    ForceRelevant                                  = 1,
    ForceRelevantIgnoreOther                       = 2,
    RelevantIgnoreOther                            = 3,
    NotRelevant                                    = 4,
    ERelevantCheckType                             = 5

};


// Enum  SGFramework.ENumCompareType
enum class ENumCompareType : uint8_t
{
    CMP                                            = 0,
    CMP                                            = 1,
    CMP                                            = 2,
    CMP                                            = 3,
    CMP                                            = 4,
    CMP                                            = 5,
    CMP                                            = 6,
    CMP                                            = 7

};


// Enum  SGFramework.EFactionMemberType
enum class EFactionMemberType : uint8_t
{
    None                                           = 0,
    Player                                         = 1,
    AI                                             = 2,
    AIBoss                                         = 3,
    EFactionMemberType                             = 4

};


// Enum  SGFramework.ETeamInfoType
enum class ETeamInfoType : uint8_t
{
    None                                           = 0,
    PlayerTeam                                     = 1,
    AITeam                                         = 2,
    ETeamInfoType                                  = 3

};


// Enum  SGFramework.EWeatherType
enum class EWeatherType : uint8_t
{
    Sunny                                          = 0,
    Rainny                                         = 1,
    Cloudy                                         = 2,
    EWeatherType                                   = 3

};


// Enum  SGFramework.EPlayerAliveState
enum class EPlayerAliveState : uint8_t
{
    EPlayerAliveState                              = 0,
    EPlayerAliveState                              = 1,
    EPlayerAliveState                              = 2,
    EPlayerAliveState                              = 3,
    EPlayerAliveState                              = 4,
    EPlayerAliveState                              = 5

};


// Enum  SGFramework.EDrawDebugType
enum class EDrawDebugType : uint8_t
{
    EDrawDebugType                                 = 0,
    EDrawDebugType                                 = 1,
    EDrawDebugType                                 = 2,
    EDrawDebugType                                 = 4,
    EDrawDebugType                                 = 8,
    EDrawDebugType                                 = 15,
    EDrawDebugType                                 = 16,
    EDrawDebugType                                 = 32,
    EDrawDebugType                                 = 64,
    EDrawDebugType                                 = 128,
    EDrawDebugType                                 = 240,
    EDrawDebugType                                 = 256,
    EDrawDebugType                                 = 257

};


// Enum  SGFramework.EInputMode
enum class EInputMode : uint8_t
{
    EIM                                            = 0,
    EIM                                            = 1,
    EIM                                            = 2,
    EIM                                            = 3,
    EIM                                            = 4

};


// Enum  SGFramework.ESoundReplicationType
enum class ESoundReplicationType : uint8_t
{
    SRT                                            = 0,
    SRT                                            = 1,
    SRT                                            = 2,
    SRT                                            = 3,
    SRT                                            = 4

};


// Enum  SGFramework.EOperationInputType
enum class EOperationInputType : uint8_t
{
    None                                           = 0,
    InBattle                                       = 1,
    InInventory                                    = 2,
    InBattleChat                                   = 51,
    InBattleHandleGrenade                          = 52,
    EOperationInputType                            = 53

};


// Enum  SGFramework.EOperationKeyStyle
enum class EOperationKeyStyle : uint8_t
{
    None                                           = 0,
    Press                                          = 1,
    Release                                        = 2,
    DoubleClick                                    = 3,
    Hold                                           = 4,
    EOperationKeyStyle                             = 5

};


// Enum  SGFramework.EOperationKeyType
enum class EOperationKeyType : uint8_t
{
    None                                           = 0,
    ActionMap                                      = 1,
    AxisMap                                        = 2,
    EOperationKeyType                              = 3

};


// Enum  SGFramework.ESettingValueType
enum class ESettingValueType : uint8_t
{
    String                                         = 0,
    Float                                          = 1,
    Int                                            = 2,
    Bool                                           = 3,
    ESettingValueType                              = 4

};


// Enum  SGFramework.EGlobalEventParameterTag
enum class EGlobalEventParameterTag : uint8_t
{
    Instigator                                     = 0,
    Character                                      = 1,
    Target                                         = 2,
    EnduranceType                                  = 3,
    ArmorType                                      = 4,
    DamageInfo                                     = 5,
    UseInventoryPhase                              = 6,
    EscapeVolume                                   = 7,
    Inventory                                      = 8,
    ItemID                                         = 9,
    AttachPosition                                 = 10,
    EndGameType                                    = 11,
    TeamMember                                     = 12,
    GameEffectType                                 = 13,
    ThrowableProjectile                            = 14,
    IntCount                                       = 15,
    IntOldCount                                    = 16,
    IntNewCount                                    = 17,
    Bool                                           = 18,
    Killer                                         = 19,
    KilledPlayer                                   = 20,
    KillerWeapon                                   = 21,
    KillDistance                                   = 22,
    DamageTakePlayer                               = 23,
    DamageCausePlayer                              = 24,
    DamageCauser                                   = 25,
    InteractActor                                  = 26,
    InteractEventType                              = 27,
    Trigger                                        = 28,
    AttractAI                                      = 29,
    VolumeID                                       = 30,
    BagType                                        = 31,
    BagTabType                                     = 32,
    Container                                      = 33,
    DetailBoardType                                = 34,
    TaskID                                         = 35,
    WidgetID                                       = 36,
    StackableItemSourceInfo                        = 37,
    ParadropState                                  = 38,
    FactionType                                    = 39,
    AISceneEvent                                   = 40,
    SearchingPlayer                                = 41,
    EGlobalEventParameterTag                       = 42

};


// Enum  SGFramework.EGlobalEventTag
enum class EGlobalEventTag : uint8_t
{
    Killed                                         = 0,
    TakeDamage                                     = 1,
    TakeInItem                                     = 2,
    FlowStateChange                                = 3,
    Interact                                       = 4,
    InventoryAdded                                 = 5,
    InventoryRemoved                               = 6,
    PrePlayerFinishGame                            = 7,
    AttractAI                                      = 8,
    ReadyToPlay                                    = 9,
    LootContainer                                  = 10,
    UseRecoveryInventory                           = 11,
    GameplayEffectApplied                          = 12,
    AttachPositionChanged                          = 13,
    ContainerInteractChanged                       = 14,
    SwitchWeaponCompleted                          = 15,
    GameBegin                                      = 16,
    ThrowableProjectileSpawn                       = 17,
    LocationReport                                 = 18,
    CharacterCostBullet                            = 19,
    ModifyInventoryTotalCount                      = 20,
    PushBullet                                     = 21,
    VolumeActorChanged                             = 22,
    AIActived                                      = 23,
    AIEscaped                                      = 24,
    Pair                                           = 25,
    PlayerBeginGame                                = 26,
    ClickItem                                      = 27,
    AddMapSign                                     = 28,
    WeaponCheck                                    = 29,
    WeaponAssemble                                 = 30,
    MoveInventory                                  = 31,
    VolumeBeginOverlap                             = 32,
    BagStateChange                                 = 33,
    BigMapDetailBoardShow                          = 34,
    BagTabClick                                    = 35,
    InspectItemClick                               = 36,
    OpenPPT                                        = 37,
    OpenItemDetail                                 = 38,
    ParadropStateChange                            = 39,
    FactionScoreUpdate                             = 40,
    SceneEventTrigger                              = 41,
    SceneEventExpired                              = 42,
    SceneEventRemoved                              = 43,
    SceneEventCompleted                            = 44,
    FSMStateChange                                 = 45,
    MComStartUpLoad                                = 46,
    MComInterruptUpLoad                            = 47,
    StartSearchingContainer                        = 48,
    CharacterDestroyActor                          = 49,
    OnOneShotEnd                                   = 50,
    UnfillContainer                                = 51,
    StartLoot                                      = 52,
    InteractActor                                  = 53,
    EGlobalEventTag                                = 54

};


// Enum  SGFramework.EHoverForceSide
enum class EHoverForceSide : uint8_t
{
    EHFSide                                        = 0,
    EHFSide                                        = 1,
    EHFSide                                        = 2,
    EHFSide                                        = 3

};


// Enum  SGFramework.EHUDHierarchy
enum class EHUDHierarchy : uint8_t
{
    ScreenEffect                                   = 0,
    Gamepad                                        = 1,
    FullScreenHud                                  = 2,
    Tips                                           = 3,
    Setting                                        = 4,
    EHUDHierarchy                                  = 5

};


// Enum  SGFramework.EHUDType
enum class EHUDType : uint8_t
{
    SecondModeMatchType                            = 0,
    SecondModeMatchType                            = 1,
    SecondModeMatchType                            = 2

};


// Enum  SGFramework.EHUDShakeEvents
enum class EHUDShakeEvents : uint8_t
{
    EHUDShakeEvents                                = 0,
    EHUDShakeEvents                                = 1,
    EHUDShakeEvents                                = 2,
    EHUDShakeEvents                                = 3,
    EHUDShakeEvents                                = 4,
    EHUDShakeEvents                                = 5,
    EHUDShakeEvents                                = 6,
    EHUDShakeEvents                                = 7,
    EHUDShakeEvents                                = 8,
    EHUDShakeEvents                                = 9,
    EHUDShakeEvents                                = 10,
    EHUDShakeEvents                                = 11,
    EHUDShakeEvents                                = 12,
    EHUDShakeEvents                                = 13,
    EHUDShakeEvents                                = 14,
    EHUDShakeEvents                                = 15,
    EHUDShakeEvents                                = 16,
    EHUDShakeEvents                                = 17,
    EHUDShakeEvents                                = 18,
    EHUDShakeEvents                                = 19

};


// Enum  SGFramework.EHUDShakeTypes
enum class EHUDShakeTypes : uint8_t
{
    EHUDShakeTypes                                 = 0,
    EHUDShakeTypes                                 = 1,
    EHUDShakeTypes                                 = 2,
    EHUDShakeTypes                                 = 3,
    EHUDShakeTypes                                 = 4

};


// Enum  SGFramework.EHUDShakeTags
enum class EHUDShakeTags : uint8_t
{
    EHUDShakeTags                                  = 0,
    EHUDShakeTags                                  = 1,
    EHUDShakeTags                                  = 2,
    EHUDShakeTags                                  = 3

};


// Enum  SGFramework.ECommonInputButtonType
enum class ECommonInputButtonType : uint8_t
{
    ECommonInput                                   = 0,
    ECommonInput                                   = 1,
    ECommonInput                                   = 2,
    ECommonInput                                   = 3,
    ECommonInput                                   = 4,
    ECommonInput                                   = 5,
    ECommonInput                                   = 6,
    ECommonInput                                   = 7,
    ECommonInput                                   = 8

};


// Enum  SGFramework.EButtonAcceptInputType
enum class EButtonAcceptInputType : uint8_t
{
    ENoneInput                                     = 0,
    EOnlyClick                                     = 1,
    EOutsideAcceptInput                            = 2,
    EAllAcceptInput                                = 3,
    EButtonAcceptInputType                         = 4

};


// Enum  SGFramework.EMotionRotateMode
enum class EMotionRotateMode : uint8_t
{
    EMotionRotateMode                              = 0,
    EMotionRotateMode                              = 1,
    EMotionRotateMode                              = 2,
    EMotionRotateMode                              = 3

};


// Enum  SGFramework.ELeanShootInputMode
enum class ELeanShootInputMode : uint8_t
{
    ELeanShootInputMode                            = 0,
    ELeanShootInputMode                            = 1,
    ELeanShootInputMode                            = 2

};


// Enum  SGFramework.ELeanShootMode
enum class ELeanShootMode : uint8_t
{
    ELeanShootMode                                 = 0,
    ELeanShootMode                                 = 1,
    ELeanShootMode                                 = 2,
    ELeanShootMode                                 = 3

};


// Enum  SGFramework.EUseButtonIconType
enum class EUseButtonIconType : uint8_t
{
    UseButtonType                                  = 0,
    UseButtonType                                  = 1,
    UseButtonType                                  = 2,
    UseButtonType                                  = 3,
    UseButtonType                                  = 4,
    UseButtonType                                  = 5,
    UseButtonType                                  = 6,
    UseButtonType                                  = 7

};


// Enum  SGFramework.ESGMobileMoveHandle
enum class ESGMobileMoveHandle : uint8_t
{
    SGMobileMoveHandle                             = 0,
    SGMobileMoveHandle                             = 1,
    SGMobileMoveHandle                             = 2,
    SGMobileMoveHandle                             = 3

};


// Enum  SGFramework.ERotateSensitivityMode
enum class ERotateSensitivityMode : uint8_t
{
    SensitivityMode                                = 0,
    SensitivityMode                                = 1,
    SensitivityMode                                = 2,
    SensitivityMode                                = 3,
    SensitivityMode                                = 4

};


// Enum  SGFramework.ESGInteractCostType
enum class ESGInteractCostType : uint8_t
{
    InteractCostType                               = 0,
    InteractCostType                               = 1,
    InteractCostType                               = 2

};


// Enum  SGFramework.ESwitchActionType
enum class ESwitchActionType : uint8_t
{
    SwitchActionType                               = 0,
    SwitchActionType                               = 1,
    SwitchActionType                               = 2,
    SwitchActionType                               = 3

};


// Enum  SGFramework.EHostedInteractFailType
enum class EHostedInteractFailType : uint8_t
{
    EHostedInteractFailType                        = 0,
    EHostedInteractFailType                        = 1,
    EHostedInteractFailType                        = 2,
    EHostedInteractFailType                        = 3,
    EHostedInteractFailType                        = 4

};


// Enum  SGFramework.EInventoryForcedInteractType
enum class EInventoryForcedInteractType : uint8_t
{
    EInventoryForcedInteract                       = 0,
    EInventoryForcedInteract                       = 1,
    EInventoryForcedInteract                       = 2,
    EInventoryForcedInteract                       = 3

};


// Enum  SGFramework.ESGMainHeadwearType
enum class ESGMainHeadwearType : uint8_t
{
    None                                           = 0,
    ThermalImager                                  = 1,
    FaceShield                                     = 2,
    ESGMainHeadwearType                            = 3

};


// Enum  SGFramework.ESGTakeInSourceType
enum class ESGTakeInSourceType : uint8_t
{
    TakeInSourceType                               = 0,
    TakeInSourceType                               = 1,
    TakeInSourceType                               = 2

};


// Enum  SGFramework.ESGGiveInventoryByClassType
enum class ESGGiveInventoryByClassType : uint8_t
{
    None                                           = 0,
    InitPlayerEquipments                           = 1,
    NotAddToCharacter                              = 2,
    InBattleGiveItem                               = 3,
    Split                                          = 4,
    UnfillContainer                                = 5,
    EditorDefaultInventory                         = 6,
    GMCheat                                        = 7,
    AICreate                                       = 8,
    WeaponBuild                                    = 9,
    ESGGiveInventoryByClassType                    = 10

};


// Enum  SGFramework.ESGRecoveryItemRecommendationOrder
enum class ESGRecoveryItemRecommendationOrder : uint8_t
{
    Default                                        = 0,
    ByHealthCondition                              = 1,
    ByBodyPart                                     = 2,
    ByDebuff                                       = 3,
    ESGRecoveryItemRecommendationOrder             = 4

};


// Enum  SGFramework.ESGInventoryHiddenFlag
enum class ESGInventoryHiddenFlag : uint8_t
{
    InventoryHiddenFlag                            = 0,
    InventoryHiddenFlag                            = 1,
    InventoryHiddenFlag                            = 2,
    InventoryHiddenFlag                            = 4,
    InventoryHiddenFlag                            = 8,
    InventoryHiddenFlag                            = 9

};


// Enum  SGFramework.ESGInventoryDetailedSourceType
enum class ESGInventoryDetailedSourceType : uint8_t
{
    UnKnown                                        = 0,
    LootSpawn                                      = 1,
    PMCSelfTakeIn                                  = 2,
    PMCTeamPlayerTakeIn                            = 3,
    PMCOtherPlayerTakeIn                           = 4,
    ScavSelfTakeIn                                 = 5,
    ScavTeamPlayerTakeIn                           = 6,
    ScavOtherPlayerTakeIn                          = 7,
    OrdinaryAISpawn                                = 8,
    BossRetinueAISpawn                             = 9,
    BossAISpawn                                    = 10,
    PMCAISpawn                                     = 11,
    ReplaceDropSpawn                               = 12,
    LootGuaranteeSpawn                             = 13,
    GashaponSpawn                                  = 14,
    QuestActionSpawn                               = 15,
    ESGInventoryDetailedSourceType                 = 16

};


// Enum  SGFramework.EKeyAutoUseOrderInfo
enum class EKeyAutoUseOrderInfo : uint8_t
{
    EKeyAutoUseOrderInfo                           = 0,
    EKeyAutoUseOrderInfo                           = 1,
    EKeyAutoUseOrderInfo                           = 2,
    EKeyAutoUseOrderInfo                           = 3,
    EKeyAutoUseOrderInfo                           = 4

};


// Enum  SGFramework.EMeshTickPolicy
enum class EMeshTickPolicy : uint8_t
{
    TickPolicy                                     = 0,
    TickPolicy                                     = 1,
    TickPolicy                                     = 2,
    TickPolicy                                     = 3,
    TickPolicy                                     = 4

};


// Enum  SGFramework.EInventoryInfoChangeType
enum class EInventoryInfoChangeType : uint8_t
{
    Default                                        = 0,
    StackCount                                     = 1,
    IsNewFlag                                      = 2,
    Assemble                                       = 3,
    RollUp                                         = 4,
    Search                                         = 5,
    DogTag                                         = 6,
    Rotate                                         = 7,
    ContainerChild                                 = 8,
    All                                            = 9,
    EInventoryInfoChangeType                       = 10

};


// Enum  SGFramework.EPlayerMoveInventoryResultCode
enum class EPlayerMoveInventoryResultCode : uint8_t
{
    Success                                        = 0,
    Success                                        = 1,
    Success                                        = 2,
    Success                                        = 3,
    Success                                        = 4,
    Success                                        = 5,
    Success                                        = 6,
    Success                                        = 7,
    Success                                        = 8,
    Success                                        = 9,
    Error                                          = 10,
    Error                                          = 11,
    Error                                          = 12,
    Error                                          = 13,
    Error                                          = 14,
    Error                                          = 15,
    Error                                          = 16,
    Error                                          = 17,
    Error                                          = 18,
    Error                                          = 19,
    Error                                          = 20,
    Error                                          = 21,
    Error                                          = 22,
    Error                                          = 23,
    Error                                          = 24,
    Error                                          = 25,
    Error                                          = 26,
    Error                                          = 27,
    Error                                          = 28,
    Error                                          = 29,
    Error                                          = 30,
    Error                                          = 31,
    Error                                          = 32,
    Error                                          = 33,
    Error                                          = 34,
    Error                                          = 35,
    Error                                          = 36,
    Error                                          = 37,
    Error                                          = 38,
    Error                                          = 39,
    Error                                          = 40,
    Error                                          = 41,
    Error                                          = 42,
    Error                                          = 43,
    Error                                          = 44,
    Error                                          = 45,
    Error                                          = 46,
    Error                                          = 47,
    EPlayerMoveInventoryResultCode                 = 48

};


// Enum  SGFramework.EInventoryAddToContainerResultCode
enum class EInventoryAddToContainerResultCode : uint8_t
{
    Success                                        = 0,
    Success                                        = 1,
    Success                                        = 2,
    Failed                                         = 3,
    Failed                                         = 4,
    Failed                                         = 5,
    Failed                                         = 6,
    Failed                                         = 7,
    Failed                                         = 8,
    Failed                                         = 9,
    Failed                                         = 10,
    Failed                                         = 11,
    Failed                                         = 12,
    Failed                                         = 13,
    Failed                                         = 14,
    Failed                                         = 15,
    Failed                                         = 16,
    Error                                          = 17,
    Error                                          = 18,
    Error                                          = 19,
    EInventoryAddToContainerResultCode             = 20

};


// Enum  SGFramework.EEquipSlotCheckRejectionResult
enum class EEquipSlotCheckRejectionResult : uint8_t
{
    CanEquip                                       = 0,
    CannotEquip                                    = 1,
    TriedAttachPosOccupied                         = 2,
    TriedInvRejectOtherEquippedInv                 = 3,
    TriedInvRejectOtherEquippedInvAttachChild      = 4,
    TriedInvAttachChildRejectOtherEquippedInv      = 5,
    TriedInvAttachChildRejectOtherEquippedInvAttachChild = 6,
    OtherEquippedInvRejectTriedInv                 = 7,
    OtherEquippedInvRejectTriedInvAttachChild      = 8,
    OtherEquippedInvAttachChildRejectTriedInv      = 9,
    OtherEquippedInvAttachChildRejectTriedInvAttachChild = 10,
    EEquipSlotCheckRejectionResult                 = 11

};


// Enum  SGFramework.EPlayerMoveInvExtraOperationType
enum class EPlayerMoveInvExtraOperationType : uint8_t
{
    None                                           = 0,
    Rotate                                         = 1,
    RollUp                                         = 2,
    RollUp                                         = 3,
    RollUpAndRotate                                = 4,
    UnfoldAndRotate                                = 5,
    EPlayerMoveInvExtraOperationType               = 6

};


// Enum  SGFramework.EInventoryAttachSocket
enum class EInventoryAttachSocket : uint8_t
{
    None                                           = 0,
    MagazineSocket                                 = 1,
    GripSocket                                     = 2,
    HandguardSocket                                = 3,
    StockSocket                                    = 4,
    ShellSocket                                    = 5,
    RecieverSocket                                 = 6,
    MuzzleFlashSocket                              = 7,
    AimSocket                                      = 8,
    ScopeSocket                                    = 9,
    BarrelSocket                                   = 10,
    CarryHandleSocket                              = 11,
    SlideSocket                                    = 12,
    FrontIronSightSocket                           = 13,
    RearIronSightSocket                            = 14,
    RailSocket                                     = 15,
    ForegripSocket                                 = 16,
    UpperRecieverSocket                            = 17,
    DustCoverSocket                                = 18,
    ChamberSocket                                  = 19,
    mod                                            = 20,
    mod                                            = 21,
    mod                                            = 22,
    mod                                            = 23,
    mod                                            = 24,
    mod                                            = 25,
    mod                                            = 26,
    mod                                            = 27,
    mod                                            = 28,
    mod                                            = 29,
    mod                                            = 30,
    mod                                            = 31,
    mod                                            = 32,
    mod                                            = 33,
    mod                                            = 34,
    EInventoryAttachSocket                         = 35

};


// Enum  SGFramework.EAssembleSocketState
enum class EAssembleSocketState : uint8_t
{
    ESocketState                                   = 0,
    ESocketState                                   = 1,
    ESocketState                                   = 2,
    ESocketState                                   = 3

};


// Enum  SGFramework.ESGInventoryDurabilityCostType
enum class ESGInventoryDurabilityCostType : uint8_t
{
    CostByUsageCount                               = 0,
    CostByGameEffect                               = 1,
    ESGInventoryDurabilityCostType                 = 2

};


// Enum  SGFramework.EOccypyHandleOption
enum class EOccypyHandleOption : uint8_t
{
    Default                                        = 0,
    DiscardAndReplace                              = 1,
    AutoFindPos                                    = 2,
    EOccypyHandleOption                            = 3

};


// Enum  SGFramework.EArmorSlot
enum class EArmorSlot : uint8_t
{
    Helmet                                         = 0,
    Vest                                           = 1,
    BackPack                                       = 2,
    Headset                                        = 3,
    FaceCover                                      = 4,
    EyeWear                                        = 5,
    FaceShield                                     = 6,
    ThighArmor                                     = 7,
    MAX                                            = 8

};


// Enum  SGFramework.ESGItemType
enum class ESGItemType : uint8_t
{
    None                                           = 0,
    Key                                            = 1,
    Hardware                                       = 2,
    Other                                          = 3,
    ESGItemType                                    = 4

};


// Enum  SGFramework.ESGRecoveryType
enum class ESGRecoveryType : uint8_t
{
    None                                           = 0,
    Medicine                                       = 1,
    Food                                           = 2,
    ESGRecoveryType                                = 3

};


// Enum  SGFramework.ESGArmorType
enum class ESGArmorType : uint8_t
{
    None                                           = 0,
    Helmet                                         = 1,
    Vest                                           = 2,
    Belt                                           = 3,
    Backpack                                       = 4,
    Headset                                        = 5,
    FaceCover                                      = 6,
    EyeWear                                        = 7,
    FaceShield                                     = 8,
    ThighArmor                                     = 9,
    ESGArmorType                                   = 10

};


// Enum  SGFramework.ESGInventoryIconType
enum class ESGInventoryIconType : uint8_t
{
    Normal                                         = 0,
    Kill                                           = 1,
    Rotate                                         = 2,
    Small                                          = 3,
    White                                          = 4,
    ESGInventoryIconType                           = 5

};


// Enum  SGFramework.ESGInvItemIdType
enum class ESGInvItemIdType : uint8_t
{
    None                                           = 0,
    Weapon                                         = 1,
    Weapon                                         = 2,
    Weapon                                         = 3,
    Weapon                                         = 4,
    Weapon                                         = 5,
    Weapon                                         = 6,
    Accessory                                      = 7,
    Accessory                                      = 8,
    Accessory                                      = 9,
    Accessory                                      = 10,
    Accessory                                      = 11,
    Cloth                                          = 12,
    Cloth                                          = 13,
    Cloth                                          = 14,
    Cloth                                          = 15,
    Cloth                                          = 16,
    Cloth                                          = 17,
    Cloth                                          = 18,
    Cloth                                          = 19,
    Cloth                                          = 20,
    Cloth                                          = 21,
    Cloth                                          = 22,
    Cloth                                          = 23,
    Cloth                                          = 24,
    Cloth                                          = 25,
    Cloth                                          = 26,
    Cloth                                          = 27,
    Cloth                                          = 28,
    Other                                          = 29,
    Other                                          = 30,
    Other                                          = 31,
    Other                                          = 32,
    Other                                          = 33,
    Other                                          = 34,
    Other                                          = 35,
    Other                                          = 36,
    Other                                          = 37,
    Other                                          = 38,
    Other                                          = 39,
    Other                                          = 40,
    Other                                          = 41,
    Other                                          = 42,
    Other                                          = 43,
    VirtualUnique                                  = 44,
    VirtualUnique                                  = 45,
    VirtualUnique                                  = 46,
    VirtualUnique                                  = 47,
    VirtualUnique                                  = 48,
    VirtualUnique                                  = 49,
    VirtualUnique                                  = 50,
    ESGInvItemIdType                               = 51

};


// Enum  SGFramework.EEnterLadderType
enum class EEnterLadderType : uint8_t
{
    None                                           = 0,
    Bottom                                         = 1,
    Top                                            = 2,
    EEnterLadderType                               = 3

};


// Enum  SGFramework.ESGLinearMotionSimulationStageEndConditionType
enum class ESGLinearMotionSimulationStageEndConditionType : uint8_t
{
    None                                           = 0,
    EndSpeed                                       = 1,
    TotalDistance                                  = 2,
    TotalTime                                      = 3,
    Max                                            = 4

};


// Enum  SGFramework.ESGLinearMotionSimulationStageInitialSpeedType
enum class ESGLinearMotionSimulationStageInitialSpeedType : uint8_t
{
    None                                           = 0,
    CurrentStageConfig                             = 1,
    LastStageEndSpeed                              = 2,
    Max                                            = 3

};


// Enum  SGFramework.ESimpleAnimationState
enum class ESimpleAnimationState : uint8_t
{
    Closed                                         = 0,
    Opening                                        = 1,
    Opened                                         = 2,
    Closing                                        = 3,
    ESimpleAnimationState                          = 4

};


// Enum  SGFramework.EMissionTaskType
enum class EMissionTaskType : uint8_t
{
    E                                              = 0,
    E                                              = 1,
    E                                              = 2,
    E                                              = 3,
    E                                              = 4,
    E                                              = 5,
    E                                              = 6,
    E                                              = 7,
    E                                              = 8,
    E                                              = 9

};


// Enum  SGFramework.ESGTakeOutReplaceType
enum class ESGTakeOutReplaceType : uint8_t
{
    ESGTakeOutReplaceType                          = 0,
    ESGTakeOutReplaceType                          = 1,
    ESGTakeOutReplaceType                          = 2,
    ESGTakeOutReplaceType                          = 3,
    ESGTakeOutReplaceType                          = 4,
    ESGTakeOutReplaceType                          = 5,
    ESGTakeOutReplaceType                          = 6

};


// Enum  SGFramework.ESecondModeMatchType
enum class ESecondModeMatchType : uint8_t
{
    SecondModeMatchType                            = 0,
    SecondModeMatchType                            = 1,
    SecondModeMatchType                            = 2

};


// Enum  SGFramework.EOrnamentSimulateMethod
enum class EOrnamentSimulateMethod : uint8_t
{
    None                                           = 0,
    RigidBody                                      = 1,
    Kawaii                                         = 2,
    SpringBone                                     = 3,
    EOrnamentSimulateMethod                        = 4

};


// Enum  SGFramework.ESGParadropState
enum class ESGParadropState : uint8_t
{
    None                                           = 0,
    Throwing                                       = 1,
    Falling                                        = 2,
    Landing                                        = 3,
    Done                                           = 4,
    ESGParadropState                               = 5

};


// Enum  SGFramework.ETargetNotInRangeReason
enum class ETargetNotInRangeReason : uint8_t
{
    None                                           = 0,
    InsideEndRange                                 = 1,
    OutsideStartRange                              = 2,
    Other                                          = 3,
    ETargetNotInRangeReason                        = 4

};


// Enum  SGFramework.ELockOwner
enum class ELockOwner : uint8_t
{
    LockOwner                                      = 0,
    LockOwner                                      = 1,
    LockOwner                                      = 2,
    LockOwner                                      = 3,
    LockOwner                                      = 4

};


// Enum  SGFramework.ECAInputButtonWorkingStateInBattle
enum class ECAInputButtonWorkingStateInBattle : uint8_t
{
    AllStateWork                                   = 0,
    InBattleOnly                                   = 1,
    OutOfBattleOnly                                = 2,
    ECAInputButtonWorkingStateInBattle             = 3

};


// Enum  SGFramework.ECAInputButtonWorkingStatePanel
enum class ECAInputButtonWorkingStatePanel : uint8_t
{
    AllPanelStateWork                              = 0,
    BagOpenBlock                                   = 1,
    MapOpenBlock                                   = 2,
    MainMenuOpenBlock                              = 3,
    ECAInputButtonWorkingStatePanel                = 4

};


// Enum  SGFramework.EPCInputButton
enum class EPCInputButton : uint8_t
{
    EButton                                        = 0,
    EButton                                        = 1,
    EButton                                        = 2,
    EButton                                        = 3,
    EButton                                        = 4,
    EButton                                        = 5,
    EButton                                        = 6,
    EButton                                        = 7,
    EButton                                        = 8,
    EButton                                        = 9,
    EButton                                        = 10,
    EButton                                        = 11,
    EButton                                        = 12,
    EButton                                        = 13,
    EButton                                        = 14,
    EButton                                        = 15,
    EButton                                        = 16,
    EButton                                        = 17,
    EButton                                        = 18,
    EButton                                        = 19,
    EButton                                        = 20,
    EButton                                        = 21,
    EButton                                        = 22,
    EButton                                        = 23,
    EButton                                        = 24,
    EButton                                        = 25,
    EButton                                        = 26,
    EButton                                        = 27,
    EButton                                        = 28,
    EButton                                        = 29,
    EButton                                        = 30,
    EButton                                        = 31,
    EButton                                        = 32,
    EButton                                        = 33

};


// Enum  SGFramework.ESGPickUpGroupType
enum class ESGPickUpGroupType : uint8_t
{
    Type                                           = 0,
    Type                                           = 1,
    Type                                           = 2,
    Type                                           = 3

};


// Enum  SGFramework.ESGUIInputMode
enum class ESGUIInputMode : uint8_t
{
    E                                              = 0,
    E                                              = 1,
    E                                              = 2,
    E                                              = 3,
    E                                              = 4

};


// Enum  SGFramework.ESGMagType
enum class ESGMagType : uint8_t
{
    MagType                                        = 0,
    MagType                                        = 1,
    MagType                                        = 2,
    MagType                                        = 3,
    MagType                                        = 4,
    MagType                                        = 5,
    MagType                                        = 6,
    MagType                                        = 7,
    MagType                                        = 8,
    MagType                                        = 9,
    MagType                                        = 10,
    MagType                                        = 11,
    MagType                                        = 12,
    MagType                                        = 13,
    MagType                                        = 14,
    MagType                                        = 15

};


// Enum  SGFramework.EGlobalSensitivityType
enum class EGlobalSensitivityType : uint8_t
{
    ESensitivityType                               = 0,
    ESensitivityType                               = 1,
    ESensitivityType                               = 2,
    ESensitivityType                               = 3,
    ESensitivityType                               = 4

};


// Enum  SGFramework.EJoyStickMode
enum class EJoyStickMode : uint8_t
{
    EJoyStickMode                                  = 0,
    EJoyStickMode                                  = 1,
    EJoyStickMode                                  = 2,
    EJoyStickMode                                  = 3,
    EJoyStickMode                                  = 4,
    EJoyStickMode                                  = 5,
    EJoyStickMode                                  = 6,
    EJoyStickMode                                  = 7,
    EJoyStickMode                                  = 8,
    EJoyStickMode                                  = 9,
    EJoyStickMode                                  = 10,
    EJoyStickMode                                  = 11,
    EJoyStickMode                                  = 12,
    EJoyStickMode                                  = 13,
    EJoyStickMode                                  = 14,
    EJoyStickMode                                  = 15,
    EJoyStickMode                                  = 16

};


// Enum  SGFramework.EPointIndexType
enum class EPointIndexType : uint8_t
{
    PointIndex                                     = 0,
    PointIndex                                     = 1,
    PointIndex                                     = 2

};


// Enum  SGFramework.ERecordMoveType
enum class ERecordMoveType : uint8_t
{
    None                                           = 0,
    Walk                                           = 1,
    SilentWalk                                     = 2,
    Sprint                                         = 3,
    ERecordMoveType                                = 4

};


// Enum  SGFramework.EPlayerRecordType
enum class EPlayerRecordType : uint8_t
{
    Loot                                           = 0,
    Move                                           = 1,
    Pose                                           = 2,
    Fire                                           = 3,
    ADS                                            = 4,
    Operate                                        = 5,
    EPlayerRecordType                              = 6

};


// Enum  SGFramework.EPlayerIdentityType
enum class EPlayerIdentityType : uint8_t
{
    None                                           = 0,
    OBPlayer                                       = 1,
    CompetitionPlayer                              = 2,
    EPlayerIdentityType                            = 3

};


// Enum  SGFramework.EChaseActivityReportCondition
enum class EChaseActivityReportCondition : uint8_t
{
    None                                           = 0,
    HasAvatar                                      = 1,
    WithoutAvatar                                  = 2,
    EChaseActivityReportCondition                  = 3

};


// Enum  SGFramework.EPlayerLootExtDataType
enum class EPlayerLootExtDataType : uint8_t
{
    None                                           = 0,
    RecentIncome                                   = 1,
    CharacterProperty                              = 2,
    TotalRechargeBullion                           = 3,
    RecentTenValuesChange                          = 4,
    EPlayerLootExtDataType                         = 5

};


// Enum  SGFramework.ENPCCourierOrderState
enum class ENPCCourierOrderState : uint8_t
{
    None                                           = 0,
    Default                                        = 1,
    CourierPrepared                                = 2,
    OrderPreparing                                 = 3,
    OrderDeliveried                                = 4,
    OrderDropped                                   = 5,
    OrderSigned                                    = 6,
    OrderClosed                                    = 7,
    ENPCCourierOrderState                          = 8

};


// Enum  SGFramework.ENPCCourierCourierType
enum class ENPCCourierCourierType : uint8_t
{
    None                                           = 0,
    Scav                                           = 1,
    PMC                                            = 2,
    Mediate                                        = 3,
    Mediate                                        = 4,
    Mediate                                        = 5,
    Fight                                          = 6,
    Fight                                          = 7,
    Group                                          = 8,
    Group                                          = 9,
    Group                                          = 10,
    Group                                          = 11,
    ENPCCourierCourierType                         = 12

};


// Enum  SGFramework.ETakeOutLimitType
enum class ETakeOutLimitType : uint8_t
{
    TakeOutLimitType                               = 0,
    TakeOutLimitType                               = 1,
    TakeOutLimitType                               = 2,
    TakeOutLimitType                               = 3,
    TakeOutLimitType                               = 4

};


// Enum  SGFramework.EAnimOffsetType
enum class EAnimOffsetType : uint8_t
{
    EAnimOffsetType                                = 0,
    EAnimOffsetType                                = 1,
    EAnimOffsetType                                = 2,
    EAnimOffsetType                                = 3,
    EAnimOffsetType                                = 4

};


// Enum  SGFramework.ECharacterDeathReason
enum class ECharacterDeathReason : uint8_t
{
    ECharacterDeathReason                          = 0,
    ECharacterDeathReason                          = 1,
    ECharacterDeathReason                          = 2,
    ECharacterDeathReason                          = 3,
    ECharacterDeathReason                          = 4,
    ECharacterDeathReason                          = 5,
    ECharacterDeathReason                          = 6,
    ECharacterDeathReason                          = 7,
    ECharacterDeathReason                          = 8,
    ECharacterDeathReason                          = 9,
    ECharacterDeathReason                          = 10,
    ECharacterDeathReason                          = 11,
    ECharacterDeathReason                          = 12,
    ECharacterDeathReason                          = 13,
    ECharacterDeathReason                          = 14,
    ECharacterDeathReason                          = 15,
    ECharacterDeathReason                          = 16,
    ECharacterDeathReason                          = 17,
    ECharacterDeathReason                          = 18,
    ECharacterDeathReason                          = 19,
    ECharacterDeathReason                          = 20,
    ECharacterDeathReason                          = 21,
    ECharacterDeathReason                          = 22,
    ECharacterDeathReason                          = 23,
    ECharacterDeathReason                          = 24,
    ECharacterDeathReason                          = 25,
    ECharacterDeathReason                          = 26

};


// Enum  SGFramework.ECharacterHurtReason
enum class ECharacterHurtReason : uint8_t
{
    ECharacterHurtReason                           = 0,
    ECharacterHurtReason                           = 1,
    ECharacterHurtReason                           = 2,
    ECharacterHurtReason                           = 3,
    ECharacterHurtReason                           = 4,
    ECharacterHurtReason                           = 5,
    ECharacterHurtReason                           = 6,
    ECharacterHurtReason                           = 7,
    ECharacterHurtReason                           = 8,
    ECharacterHurtReason                           = 9

};


// Enum  SGFramework.EDeathType
enum class EDeathType : uint8_t
{
    DeathType                                      = 0,
    DeathType                                      = 1,
    DeathType                                      = 2,
    DeathType                                      = 3,
    DeathType                                      = 4

};


// Enum  SGFramework.ESGCharacterCoverAimingState
enum class ESGCharacterCoverAimingState : uint8_t
{
    CharacterCoverAimingState                      = 0,
    CharacterCoverAimingState                      = 1,
    CharacterCoverAimingState                      = 2,
    CharacterCoverAimingState                      = 3

};


// Enum  SGFramework.ESGCharacterCoverState
enum class ESGCharacterCoverState : uint8_t
{
    CharacterCoverState                            = 0,
    CharacterCoverState                            = 1,
    CharacterCoverState                            = 2,
    CharacterCoverState                            = 3,
    CharacterCoverState                            = 4,
    CharacterCoverState                            = 5,
    CharacterCoverState                            = 6

};


// Enum  SGFramework.ESGCoverHeight
enum class ESGCoverHeight : uint8_t
{
    CoverHeight                                    = 0,
    CoverHeight                                    = 1,
    CoverHeight                                    = 2

};


// Enum  SGFramework.ESGCoverType
enum class ESGCoverType : uint8_t
{
    Cover                                          = 0,
    Cover                                          = 1,
    Cover                                          = 2,
    Cover                                          = 3,
    Cover                                          = 4

};


// Enum  SGFramework.EVaultEndMoveType
enum class EVaultEndMoveType : uint8_t
{
    EVaultEndMove                                  = 0,
    EVaultEndMove                                  = 1,
    EVaultEndMove                                  = 2

};


// Enum  SGFramework.EVaultAnimType
enum class EVaultAnimType : uint8_t
{
    EVaultAnim                                     = 0,
    EVA                                            = 1,
    EVA                                            = 2,
    EVA                                            = 3,
    EVA                                            = 4,
    EVA                                            = 5,
    EVA                                            = 6,
    EVA                                            = 7,
    EVA                                            = 8,
    EVA                                            = 9,
    EVA                                            = 10,
    EVaultAnimType                                 = 11

};


// Enum  SGFramework.EObstacleHeightType
enum class EObstacleHeightType : uint8_t
{
    EObstacleHeight                                = 0,
    EObstacleHeight                                = 1,
    EObstacleHeight                                = 2,
    EObstacleHeight                                = 3,
    EObstacleHeight                                = 4,
    EObstacleHeight                                = 5,
    EObstacleHeight                                = 6

};


// Enum  SGFramework.EClimbVaultChoice
enum class EClimbVaultChoice : uint8_t
{
    EChoice                                        = 0,
    EChoice                                        = 1,
    EChoice                                        = 2,
    EChoice                                        = 3

};


// Enum  SGFramework.ESGCustomMovementType
enum class ESGCustomMovementType : uint8_t
{
    SGCustomMovementType                           = 0,
    SGCustomMovementType                           = 1,
    SGCustomMovementType                           = 2,
    SGCustomMovementType                           = 3,
    SGCustomMovementType                           = 4,
    SGCustomMovementType                           = 5

};


// Enum  SGFramework.EAssistAimMode
enum class EAssistAimMode : uint8_t
{
    Closed                                         = 0,
    Normal                                         = 1,
    Improved                                       = 2,
    EAssistAimMode                                 = 3

};


// Enum  SGFramework.EMovementFailureReason
enum class EMovementFailureReason : uint8_t
{
    MovementFailureReason                          = 0,
    MovementFailureReason                          = 1,
    MovementFailureReason                          = 2,
    MovementFailureReason                          = 3,
    MovementFailureReason                          = 4,
    MovementFailureReason                          = 5,
    MovementFailureReason                          = 6,
    MovementFailureReason                          = 7,
    MovementFailureReason                          = 8,
    MovementFailureReason                          = 9,
    MovementFailureReason                          = 10,
    MovementFailureReason                          = 11,
    MovementFailureReason                          = 12,
    MovementFailureReason                          = 13,
    MovementFailureReason                          = 14,
    MovementFailureReason                          = 15

};


// Enum  SGFramework.ETurnInfo
enum class ETurnInfo : uint8_t
{
    None                                           = 0,
    Left                                           = 1,
    Right                                          = 2,
    ETurnInfo                                      = 3

};


// Enum  SGFramework.EHitDirection
enum class EHitDirection : uint8_t
{
    HitDirection                                   = 0,
    HitDirection                                   = 1,
    HitDirection                                   = 2,
    HitDirection                                   = 3,
    HitDirection                                   = 4,
    HitDirection                                   = 5,
    HitDirection                                   = 6,
    HitDirection                                   = 7

};


// Enum  SGFramework.ETrajectoryDrawPolicy
enum class ETrajectoryDrawPolicy : uint8_t
{
    DrawPolicy                                     = 0,
    DrawPolicy                                     = 1,
    DrawPolicy                                     = 2,
    DrawPolicy                                     = 3,
    DrawPolicy                                     = 4,
    DrawPolicy                                     = 5

};


// Enum  SGFramework.ERangeInAreaType
enum class ERangeInAreaType : uint8_t
{
    None                                           = 0,
    Escape                                         = 1,
    Door                                           = 2,
    ERangeInAreaType                               = 3

};


// Enum  SGFramework.RotateType
enum class RotateType : uint8_t
{
    ClockWise                                      = 0,
    AntiClockWise                                  = 1,
    RotateType                                     = 2

};


// Enum  SGFramework.ESCSTimeType
enum class ESCSTimeType : uint8_t
{
    ESCSTimeType                                   = 0,
    ESCSTimeType                                   = 1

};


// Enum  SGFramework.ESCSType
enum class ESCSType : uint8_t
{
    ESCSType                                       = 0,
    ESCSType                                       = 1,
    ESCSType                                       = 2,
    ESCSType                                       = 3

};


// Enum  SGFramework.ETextureMergeID
enum class ETextureMergeID : uint8_t
{
    TextureMergeID                                 = 0,
    TextureMergeID                                 = 3

};


// Enum  SGFramework.ETooltipShowPositionVertical
enum class ETooltipShowPositionVertical : uint8_t
{
    None                                           = 0,
    Top                                            = 1,
    Center                                         = 2,
    Bottom                                         = 3,
    ETooltipShowPositionVertical                   = 4

};


// Enum  SGFramework.ETooltipShowPositionHorizontal
enum class ETooltipShowPositionHorizontal : uint8_t
{
    None                                           = 0,
    Left                                           = 1,
    Center                                         = 2,
    Right                                          = 3,
    ETooltipShowPositionHorizontal                 = 4

};


// Enum  SGFramework.EVehicleSoundType
enum class EVehicleSoundType : uint8_t
{
    EVehicleSound                                  = 0,
    EVehicleSound                                  = 1,
    EVehicleSound                                  = 2,
    EVehicleSound                                  = 3,
    EVehicleSound                                  = 4,
    EVehicleSound                                  = 5,
    EVehicleSound                                  = 6,
    EVehicleSound                                  = 7,
    EVehicleSound                                  = 8,
    EVehicleSound                                  = 9,
    EVehicleSound                                  = 10,
    EVehicleSound                                  = 11,
    EVehicleSound                                  = 12,
    EVehicleSound                                  = 13,
    EVehicleSound                                  = 14,
    EVehicleSound                                  = 15,
    EVehicleSound                                  = 16,
    EVehicleSound                                  = 17,
    EVehicleSound                                  = 18,
    EVehicleSound                                  = 19,
    EVehicleSound                                  = 20,
    EVehicleSound                                  = 21,
    EVehicleSound                                  = 22,
    EVehicleSound                                  = 23

};


// Enum  SGFramework.EVehicleSpawnType
enum class EVehicleSpawnType : uint8_t
{
    AllRandom                                      = 1,
    TotalCount                                     = 2,
    EVehicleSpawnType                              = 3

};


// Enum  SGFramework.EPreloadAnimationMode
enum class EPreloadAnimationMode : uint8_t
{
    None                                           = 0,
    Minimal                                        = 1,
    All                                            = 2,
    EPreloadAnimationMode                          = 3

};


// Enum  SGFramework.ESGWeaponDisplayMode
enum class ESGWeaponDisplayMode : uint8_t
{
    EWeapDisplayMode                               = 0,
    EWeapDisplayMode                               = 1,
    EWeapDisplayMode                               = 2,
    EWeapDisplayMode                               = 3,
    EWeapDisplayMode                               = 4,
    EWeapDisplayMode                               = 5

};


// Enum  SGFramework.ECaptureLightGroupType
enum class ECaptureLightGroupType : uint8_t
{
    Weapon                                         = 0,
    Helmet                                         = 1,
    HelmetAdapter                                  = 2,
    HorizontalAssembly                             = 3,
    ObliqueAssembly                                = 4,
    ThighArmor                                     = 5,
    ECaptureLightGroupType                         = 6

};


// Enum  SGFramework.EBoltState
enum class EBoltState : uint8_t
{
    BOLTSTATE                                      = 0,
    BOLTSTATE                                      = 1,
    BOLTSTATE                                      = 2,
    BOLTSTATE                                      = 3

};


// Enum  SGFramework.EWeapAnimRecoil
enum class EWeapAnimRecoil : uint8_t
{
    EWeapAnimRecoil                                = 0,
    EWeapAnimRecoil                                = 1,
    EWeapAnimRecoil                                = 2,
    EWeapAnimRecoil                                = 3,
    EWeapAnimRecoil                                = 4,
    EWeapAnimRecoil                                = 5

};


// Enum  SGFramework.ESGGrenadeDamageType
enum class ESGGrenadeDamageType : uint8_t
{
    None                                           = 0,
    EGrenadeDamageType                             = 1,
    EGrenadeDamageType                             = 2,
    EGrenadeDamageType                             = 3,
    EGrenadeDamageType                             = 4,
    ESGGrenadeDamageType                           = 5

};


// Enum  SGFramework.ESGWeaponReloadKind
enum class ESGWeaponReloadKind : uint8_t
{
    Unknown                                        = 0,
    Normal                                         = 1,
    OneByOne                                       = 2,
    MultiBores                                     = 3,
    ESGWeaponReloadKind                            = 4

};


// Enum  SGFramework.EAvoidValidationFlagType
enum class EAvoidValidationFlagType : uint8_t
{
    E                                              = 1,
    E                                              = 2,
    E                                              = 4,
    E                                              = 8,
    E                                              = 16,
    E                                              = 32,
    E                                              = 64,
    E                                              = 128,
    E                                              = 256,
    E                                              = 512,
    E                                              = 1024,
    E                                              = 1025

};


// Enum  SGFramework.ESGWeaponValidateFailType
enum class ESGWeaponValidateFailType : uint8_t
{
    FailType                                       = 0,
    FailType                                       = 1,
    FailType                                       = 2,
    FailType                                       = 3,
    FailType                                       = 4,
    FailType                                       = 5,
    FailType                                       = 6,
    FailType                                       = 7,
    FailType                                       = 8,
    FailType                                       = 9,
    FailType                                       = 10,
    FailType                                       = 11,
    FailType                                       = 12,
    FailType                                       = 13,
    FailType                                       = 14,
    FailType                                       = 15,
    FailType                                       = 16,
    FailType                                       = 17,
    FailType                                       = 18,
    FailType                                       = 19,
    FailType                                       = 20,
    FailType                                       = 21,
    FailType                                       = 22,
    FailType                                       = 23,
    FailType                                       = 24,
    FailType                                       = 25,
    FailType                                       = 26,
    FailType                                       = 27,
    FailType                                       = 28,
    FailType                                       = 29,
    FailType                                       = 30,
    FailType                                       = 31,
    FailType                                       = 32,
    FailType                                       = 33,
    FailType                                       = 34,
    FailType                                       = 35,
    FailType                                       = 36,
    FailType                                       = 37,
    FailType                                       = 38,
    FailType                                       = 39,
    FailType                                       = 40,
    FailType                                       = 41,
    FailType                                       = 42,
    FailType                                       = 43,
    FailType                                       = 44,
    FailType                                       = 100,
    FailType                                       = 101,
    FailType                                       = 102,
    FailType                                       = 103,
    FailType                                       = 104,
    FailType                                       = 105,
    FailType                                       = 106,
    FailType                                       = 107,
    FailType                                       = 108,
    FailType                                       = 109,
    FailType                                       = 110,
    FailType                                       = 111,
    FailType                                       = 112

};


// Enum  SGFramework.EWeaponMergeStatus
enum class EWeaponMergeStatus : uint8_t
{
    EWeaponMergeStatus                             = 0,
    EWeaponMergeStatus                             = 1,
    EWeaponMergeStatus                             = 2,
    EWeaponMergeStatus                             = 3,
    EWeaponMergeStatus                             = 4,
    EWeaponMergeStatus                             = 5,
    EWeaponMergeStatus                             = 6,
    EWeaponMergeStatus                             = 7,
    EWeaponMergeStatus                             = 8,
    EWeaponMergeStatus                             = 9,
    EWeaponMergeStatus                             = 10,
    EWeaponMergeStatus                             = 11,
    EWeaponMergeStatus                             = 12,
    EWeaponMergeStatus                             = 13

};


// Enum  SGFramework.EWeaponMeshDisplayType
enum class EWeaponMeshDisplayType : uint8_t
{
    WeaponMeshDisplayType                          = 0,
    WeaponMeshDisplayType                          = 1,
    WeaponMeshDisplayType                          = 2,
    WeaponMeshDisplayType                          = 3

};


// Enum  SGFramework.ESGFireEffectParticleType
enum class ESGFireEffectParticleType : uint8_t
{
    EParticleType                                  = 0,
    EParticleType                                  = 1,
    EParticleType                                  = 2,
    EParticleType                                  = 3,
    EParticleType                                  = 4,
    EParticleType                                  = 5,
    EParticleType                                  = 6,
    EParticleType                                  = 7,
    EParticleType                                  = 8,
    EParticleType                                  = 9,
    EParticleType                                  = 10,
    EParticleType                                  = 11,
    EParticleType                                  = 12,
    EParticleType                                  = 13,
    EParticleType                                  = 14,
    EParticleType                                  = 15,
    EParticleType                                  = 16,
    EParticleType                                  = 17,
    EParticleType                                  = 18,
    EParticleType                                  = 19

};


// Enum  SGFramework.ETestAnimType
enum class ETestAnimType : uint8_t
{
    TestReload                                     = 0,
    TestFastReload                                 = 1,
    TestTacticalReload                             = 2,
    TestAmmoIn                                     = 3,
    TestAmmoOut                                    = 4,
    TestCheckWeapon                                = 5,
    TestCheckMagazine                              = 6,
    TestCheckFireMode0                             = 7,
    TestCheckFireMode1                             = 8,
    TestCheckFireMode2                             = 9,
    TestPullBolt                                   = 10,
    TestEquip                                      = 11,
    TestUnEquip                                    = 12,
    TestCheckChamber                               = 13,
    TestSetupMod                                   = 14,
    ETestAnimType                                  = 15

};


// Enum  SGFramework.ESGMagazineCheckState
enum class ESGMagazineCheckState : uint8_t
{
    ESGMagazineCheckState                          = 0,
    ESGMagazineCheckState                          = 1,
    ESGMagazineCheckState                          = 2,
    ESGMagazineCheckState                          = 3,
    ESGMagazineCheckState                          = 4

};


// Enum  SGFramework.ESGChangeClipState
enum class ESGChangeClipState : uint8_t
{
    ESGChangeClipState                             = 0,
    ESGChangeClipState                             = 1,
    ESGChangeClipState                             = 2,
    ESGChangeClipState                             = 3,
    ESGChangeClipState                             = 4,
    ESGChangeClipState                             = 5,
    ESGChangeClipState                             = 6,
    ESGChangeClipState                             = 7,
    ESGChangeClipState                             = 8,
    ESGChangeClipState                             = 9,
    ESGChangeClipState                             = 10

};


// Enum  SGFramework.ESGRecoilRecoverAlgorithm
enum class ESGRecoilRecoverAlgorithm : uint8_t
{
    ESGRecoilRecoverAlgorithm                      = 0,
    ESGRecoilRecoverAlgorithm                      = 1,
    ESGRecoilRecoverAlgorithm                      = 2,
    ESGRecoilRecoverAlgorithm                      = 3

};


// Enum  SGFramework.EFillMagazineFailReason
enum class EFillMagazineFailReason : uint8_t
{
    EFillMagazineFailReason                        = 0,
    EFillMagazineFailReason                        = 1,
    EFillMagazineFailReason                        = 2,
    EFillMagazineFailReason                        = 3,
    EFillMagazineFailReason                        = 4,
    EFillMagazineFailReason                        = 5,
    EFillMagazineFailReason                        = 6,
    EFillMagazineFailReason                        = 7

};


// Enum  SGFramework.ESGWeaponRecoilState
enum class ESGWeaponRecoilState : uint8_t
{
    ESGWeaponRecoilState                           = 0,
    ESGWeaponRecoilState                           = 1,
    ESGWeaponRecoilState                           = 2,
    ESGWeaponRecoilState                           = 3

};


// Enum  SGFramework.ESGInputTriggerEvent
enum class ESGInputTriggerEvent : uint8_t
{
    EWeapEvent                                     = 0,
    EWeapEvent                                     = 1,
    EWeapEvent                                     = 2,
    EWeapEvent                                     = 3,
    EWeapEvent                                     = 4,
    EWeapEvent                                     = 5,
    EWeapEvent                                     = 6,
    EWeapEvent                                     = 7,
    EWeapEvent                                     = 8,
    EWeapEvent                                     = 9,
    EWeapEvent                                     = 10,
    EWeapEvent                                     = 11,
    EWeapEvent                                     = 12,
    EWeapEvent                                     = 13,
    EWeapEvent                                     = 14,
    EWeapEvent                                     = 15,
    EWeapEvent                                     = 16,
    EWeapEvent                                     = 17,
    EWeapEvent                                     = 18,
    EWeapEvent                                     = 19,
    EWeapEvent                                     = 20,
    EWeapEvent                                     = 21,
    EWeapEvent                                     = 22,
    EWeapEvent                                     = 23,
    EWeapEvent                                     = 24,
    EWeapEvent                                     = 25,
    EWeapEvent                                     = 26,
    EWeapEvent                                     = 27,
    EWeapEvent                                     = 28,
    EWeapEvent                                     = 29,
    EWeapEvent                                     = 30,
    EWeapEvent                                     = 31,
    EWeapEvent                                     = 32,
    EWeapEvent                                     = 33,
    EWeapEvent                                     = 34

};


// Enum  SGFramework.ESGAdapterEvent
enum class ESGAdapterEvent : uint8_t
{
    ESGAdapterEvent                                = 0,
    ESGAdapterEvent                                = 1,
    ESGAdapterEvent                                = 2,
    ESGAdapterEvent                                = 3,
    ESGAdapterEvent                                = 4,
    ESGAdapterEvent                                = 5

};


// Enum  SGFramework.EHandIKType
enum class EHandIKType : uint8_t
{
    HandIKType                                     = 0,
    HandIKType                                     = 1,
    HandIKType                                     = 2,
    HandIKType                                     = 3,
    HandIKType                                     = 4,
    HandIKType                                     = 5

};


// Enum  SGFramework.ESGWeaponFireMode
enum class ESGWeaponFireMode : uint8_t
{
    EFireModeType                                  = 0,
    EFireModeType                                  = 1,
    EFireModeType                                  = 2,
    EFireModeType                                  = 3,
    EFireModeType                                  = 4,
    EFireModeType                                  = 5,
    EFireModeType                                  = 6

};


// Enum  SGFramework.EWeaponSwitchType
enum class EWeaponSwitchType : uint8_t
{
    EWeapSwitch                                    = 0,
    EWeapSwitch                                    = 1,
    EWeapSwitch                                    = 2,
    EWeapSwitch                                    = 3,
    EWeapSwitch                                    = 4,
    EWeapSwitch                                    = 5,
    EWeapSwitch                                    = 6

};


// Enum  SGFramework.EMagazineType
enum class EMagazineType : uint8_t
{
    MagazineType                                   = 0,
    MagazineType                                   = 1,
    MagazineType                                   = 2,
    MagazineType                                   = 3,
    MagazineType                                   = 4,
    MagazineType                                   = 5

};


// Enum  SGFramework.EItemAmmo
enum class EItemAmmo : uint8_t
{
    ItemAmmo                                       = 0,
    ItemAmmo                                       = 1,
    ItemAmmo                                       = 2,
    ItemAmmo                                       = 3,
    ItemAmmo                                       = 4,
    ItemAmmo                                       = 5,
    ItemAmmo                                       = 6,
    ItemAmmo                                       = 7,
    ItemAmmo                                       = 8,
    ItemAmmo                                       = 9,
    ItemAmmo                                       = 10

};


// Enum  SGFramework.ESGPenetrationObjectType
enum class ESGPenetrationObjectType : uint8_t
{
    None                                           = 0,
    Water                                          = 1,
    ESGPenetrationObjectType                       = 2

};


// Enum  SGFramework.EVehicleAnimType
enum class EVehicleAnimType : uint8_t
{
    EVehicleAnimType                               = 0,
    EVehicleAnimType                               = 1,
    EVehicleAnimType                               = 2,
    EVehicleAnimType                               = 3,
    EVehicleAnimType                               = 4,
    EVehicleAnimTypeMax                            = 5,
    EVehicleAnimType                               = 6

};


// Enum  SGFramework.ESGWeaponResType
enum class ESGWeaponResType : uint8_t
{
    ESGWeapResType                                 = 0,
    ESGWeapResType                                 = 1,
    ESGWeapResType                                 = 2,
    ESGWeapResType                                 = 3,
    ESGWeapResType                                 = 4

};


// Enum  SGFramework.ETakeHitDirInfo
enum class ETakeHitDirInfo : uint8_t
{
    None                                           = 0,
    Front                                          = 1,
    Back                                           = 2,
    Left                                           = 3,
    Right                                          = 4,
    ETakeHitDirInfo                                = 5

};


// Enum  SGFramework.EAnimationPlayType
enum class EAnimationPlayType : uint8_t
{
    AnimPlayType                                   = 0,
    AnimPlayType                                   = 1,
    AnimPlayType                                   = 2,
    AnimPlayType                                   = 3,
    AnimPlayType                                   = 4,
    AnimPlayType                                   = 5,
    AnimPlayType                                   = 6,
    AnimPlayType                                   = 7,
    AnimPlayType                                   = 8

};


// Enum  SGFramework.ESGWeaponAddFunction
enum class ESGWeaponAddFunction : uint8_t
{
    EWeapAddFunc                                   = 0,
    EWeapAddFunc                                   = 1,
    EWeapAddFunc                                   = 2,
    EWeapAddFunc                                   = 3,
    EWeapAddFunc                                   = 4,
    EWeapAddFunc                                   = 5,
    EBackWeapPos                                   = 6,
    ESGWeaponAddFunction                           = 7

};


// Enum  SGFramework.EBurstStopMode
enum class EBurstStopMode : uint8_t
{
    EBurstStopMode                                 = 0,
    EBurstStopMode                                 = 1,
    EBurstStopMode                                 = 2,
    EBurstStopMode                                 = 3

};


// Enum  SGFramework.ESGAutoZoomWeaponType
enum class ESGAutoZoomWeaponType : uint8_t
{
    EAutoZoomWeaponType                            = 0,
    EAutoZoomWeaponType                            = 1,
    EAutoZoomWeaponType                            = 2,
    EAutoZoomWeaponType                            = 3,
    EAutoZoomWeaponType                            = 4,
    EAutoZoomWeaponType                            = 5

};


// Enum  SGFramework.ESGBackWeaponPos
enum class ESGBackWeaponPos : uint8_t
{
    EBackWeapPos                                   = 0,
    EBackWeapPos                                   = 1,
    EBackWeapPos                                   = 2,
    EBackWeapPos                                   = 3,
    EBackWeapPos                                   = 4,
    EBackWeapPos                                   = 5,
    EBackWeapPos                                   = 6

};


// Enum  SGFramework.ESGBackWeaponAttachType
enum class ESGBackWeaponAttachType : uint8_t
{
    EBackWeapAT                                    = 0,
    EBackWeapAT                                    = 1,
    EBackWeapAT                                    = 2,
    EBackWeapAT                                    = 3,
    EBackWeapAT                                    = 4,
    EBackWeapAT                                    = 5,
    EBackWeapAT                                    = 6

};


// Enum  SGFramework.ESGWeaponHandgripType
enum class ESGWeaponHandgripType : uint8_t
{
    ESGWeaponHandgripType                          = 0,
    ESGWeaponHandgripType                          = 1,
    ESGWeaponHandgripType                          = 2

};


// Enum  SGFramework.ESGWeaponReargripType
enum class ESGWeaponReargripType : uint8_t
{
    ESGWeaponReargripType                          = 0,
    ESGWeaponReargripType                          = 1,
    ESGWeaponReargripType                          = 2,
    ESGWeaponReargripType                          = 3

};


// Enum  SGFramework.ESGWeaponForegripType
enum class ESGWeaponForegripType : uint8_t
{
    ESGWeaponForegripType                          = 0,
    ESGWeaponForegripType                          = 1,
    ESGWeaponForegripType                          = 2,
    ESGWeaponForegripType                          = 3,
    ESGWeaponForegripType                          = 4,
    ESGWeaponForegripType                          = 5,
    ESGWeaponForegripType                          = 6,
    ESGWeaponForegripType                          = 7,
    ESGWeaponForegripType                          = 8,
    ESGWeaponForegripType                          = 9,
    ESGWeaponForegripType                          = 10,
    ESGWeaponForegripType                          = 11

};


// Enum  SGFramework.ESGWeapAdapterItemType
enum class ESGWeapAdapterItemType : uint8_t
{
    EWeapAASubType                                 = 0,
    EWeapAASubType                                 = 1,
    EWeapAASubType                                 = 2,
    EWeapAASubType                                 = 3,
    EWeapAASubType                                 = 4,
    EWeapAASubType                                 = 5,
    EWeapAASubType                                 = 6,
    EWeapAASubType                                 = 7,
    EWeapAASubType                                 = 8,
    EWeapAASubType                                 = 9,
    EWeapAASubType                                 = 10,
    EWeapAASubType                                 = 11,
    EWeapAASubType                                 = 12,
    EWeapAASubType                                 = 13,
    EWeapAASubType                                 = 14,
    EWeapAASubType                                 = 15,
    EWeapAASubType                                 = 16,
    EWeapAASubType                                 = 17,
    EWeapAASubType                                 = 18,
    EWeapAASubType                                 = 19,
    EWeapAASubType                                 = 20,
    EWeapAASubType                                 = 21,
    EWeapAASubType                                 = 22,
    EWeapAASubType                                 = 23,
    EWeapAASubType                                 = 24,
    EWeapAASubType                                 = 25,
    EWeapAASubType                                 = 26,
    EWeapAASubType                                 = 27,
    EWeapAASubType                                 = 28,
    EWeapAASubType                                 = 29,
    EWeapAASubType                                 = 30,
    EWeapAASubType                                 = 31,
    EWeapAASubType                                 = 32,
    EWeapAASubType                                 = 33,
    EWeapAASubType                                 = 34,
    EWeapAASubType                                 = 35,
    EWeapAASubType                                 = 36,
    EWeapAASubType                                 = 37,
    EWeapAASubType                                 = 38,
    EWeapAASubType                                 = 39,
    EWeapAASubType                                 = 40,
    EWeapAASubType                                 = 41,
    EWeapAASubType                                 = 42,
    EWeapAASubType                                 = 43,
    EWeapAASubType                                 = 44,
    EWeapAASubType                                 = 45,
    EWeapAASubType                                 = 46,
    EWeapAASubType                                 = 47,
    EWeapAASubType                                 = 48,
    EWeapAASubType                                 = 49,
    EWeapAASubType                                 = 50,
    EWeapAASubType                                 = 51,
    EWeapAASubType                                 = 52,
    EWeapAASubType                                 = 53,
    EWeapAASubType                                 = 54,
    EWeapAASubType                                 = 55,
    EWeapAASubType                                 = 56,
    EWeapAASubType                                 = 57,
    EWeapAASubType                                 = 58,
    EWeapAASubType                                 = 59,
    EWeapAASubType                                 = 60

};


// Enum  SGFramework.ETacticalPistolStatus
enum class ETacticalPistolStatus : uint8_t
{
    None                                           = 0,
    NonTacticalPistol                              = 1,
    TacticalPistol                                 = 2,
    TransToTacticalPistol                          = 3,
    TransToNonTacticalPistol                       = 4,
    TacticalPistolTransTolPistol                   = 5,
    TacticalPistolPutDown                          = 6,
    ETacticalPistolStatus                          = 7

};


// Enum  SGFramework.EAdapterType
enum class EAdapterType : uint8_t
{
    Sub                                            = 0,
    Sub                                            = 1,
    Sub                                            = 2,
    Sub                                            = 3,
    Sub                                            = 4,
    Sub                                            = 5,
    Sub                                            = 6,
    Sub                                            = 7,
    Sub                                            = 8,
    Sub                                            = 9

};


// Enum  SGFramework.ESGWeaponHoldPose
enum class ESGWeaponHoldPose : uint8_t
{
    EWeapHoldPose                                  = 0,
    EWeapHoldPose                                  = 1,
    EWeapHoldPose                                  = 2,
    EWeapHoldPose                                  = 3,
    EWeapHoldPose                                  = 4,
    EWeapHoldPose                                  = 5,
    EWeapHoldPose                                  = 6,
    EWeapHoldPose                                  = 7,
    EWeapHoldPose                                  = 8,
    EWeapHoldPose                                  = 9

};


// Enum  SGFramework.ESGWeaponMode
enum class ESGWeaponMode : uint8_t
{
    EWeapMode                                      = 0,
    EWeapMode                                      = 1,
    EWeapMode                                      = 2,
    EWeapMode                                      = 3,
    EWeapMode                                      = 4,
    EWeapMode                                      = 5

};


// Enum  SGFramework.ESGMeleeWeaponSubType
enum class ESGMeleeWeaponSubType : uint8_t
{
    EMeleeWeaponSubType                            = 0,
    EMeleeWeaponSubType                            = 1,
    EMeleeWeaponSubType                            = 2,
    EMeleeWeaponSubType                            = 3

};


// Enum  SGFramework.ESGGunSilencerType
enum class ESGGunSilencerType : uint8_t
{
    ESilencerNone                                  = 0,
    ESilencerLow                                   = 1,
    ESilencerMiddle                                = 2,
    ESilencerHigh                                  = 3,
    ESilencerMax                                   = 4,
    ESGGunSilencerType                             = 5

};


// Enum  SGFramework.ESGWeaponDisplayPolicy
enum class ESGWeaponDisplayPolicy : uint8_t
{
    ESGWeaponDisplayPolicy                         = 0,
    ESGWeaponDisplayPolicy                         = 1,
    ESGWeaponDisplayPolicy                         = 2,
    ESGWeaponDisplayPolicy                         = 3,
    ESGWeaponDisplayPolicy                         = 4,
    ESGWeaponDisplayPolicy                         = 5,
    ESGWeaponDisplayPolicy                         = 6,
    ESGWeaponDisplayPolicy                         = 7

};


// Enum  SGFramework.ESGGunWeaponSubType
enum class ESGGunWeaponSubType : uint8_t
{
    EGunWeaponSubType                              = 0,
    EGunWeaponSubType                              = 1,
    EGunWeaponSubType                              = 2,
    EGunWeaponSubType                              = 3,
    EGunWeaponSubType                              = 4,
    EGunWeaponSubType                              = 5,
    EGunWeaponSubType                              = 6,
    EGunWeaponSubType                              = 7,
    EGunWeaponSubType                              = 8,
    EGunWeaponSubType                              = 9,
    EGunWeaponSubType                              = 10

};


// Enum  SGFramework.ESGSpecialWeaponSubType
enum class ESGSpecialWeaponSubType : uint8_t
{
    ESGSpecialWeaponSubType                        = 0,
    ESGSpecialWeaponSubType                        = 1,
    ESGSpecialWeaponSubType                        = 2,
    ESGSpecialWeaponSubType                        = 3

};


// Enum  SGFramework.EAntiHackZoomEventType
enum class EAntiHackZoomEventType : uint8_t
{
    None                                           = 0,
    StartZoom                                      = 1,
    ReachZoomFOV                                   = 2,
    ReachZoomTime                                  = 3,
    CancelZoom                                     = 4,
    EAntiHackZoomEventType                         = 5

};


// Enum  SGFramework.ESoundIndicatorReportScoreType
enum class ESoundIndicatorReportScoreType : uint8_t
{
    None                                           = 0,
    Prone                                          = 1,
    SilenceWalk                                    = 2,
    Crouch                                         = 3,
    Lean                                           = 4,
    Fire                                           = 5,
    Sprint                                         = 6,
    Jump                                           = 7,
    ADS                                            = 8,
    ThrowGrenade                                   = 9,
    ESoundIndicatorReportScoreType                 = 10

};


// Enum  SGFramework.ESoundSourceActorType
enum class ESoundSourceActorType : uint8_t
{
    None                                           = 0,
    Active                                         = 1,
    Passive                                        = 2,
    ESoundSourceActorType                          = 3

};


// Enum  SGFramework.ESoundInfluenceType
enum class ESoundInfluenceType : uint8_t
{
    None                                           = 0,
    PhysicsSurface                                 = 1,
    FacialEquipment                                = 2,
    Weight                                         = 3,
    Silencer                                       = 4,
    SpecialAI                                      = 5,
    ESoundInfluenceType                            = 6

};


// Enum  SGFramework.EPassengerSeatType
enum class EPassengerSeatType : uint8_t
{
    PassengerSeatType                              = 0,
    PassengerSeatType                              = 1,
    PassengerSeatType                              = 2,
    PassengerSeatType                              = 3

};


// Enum  SGFramework.EPassengerWeapType
enum class EPassengerWeapType : uint8_t
{
    PassengerWeapType                              = 0,
    PassengerWeapType                              = 1,
    PassengerSeatType                              = 2,
    EPassengerWeapType                             = 3

};


// Enum  SGFramework.EVehicleEngineState
enum class EVehicleEngineState : uint8_t
{
    EVES                                           = 0,
    EVES                                           = 1,
    EVES                                           = 2,
    EVES                                           = 3

};


// Enum  SGFramework.ESGVehicleType
enum class ESGVehicleType : uint8_t
{
    SpawnVechieType                                = 0,
    SpawnVechieType                                = 1,
    SpawnVechieType                                = 2,
    SpawnVechieType                                = 3,
    SpawnVechieType                                = 4,
    SpawnVechieType                                = 5,
    SpawnVechieType                                = 6,
    SpawnVechieType                                = 7,
    SpawnVechieType                                = 8,
    SpawnVechieType                                = 9,
    SpawnVechieType                                = 10

};


// Enum  SGFramework.VehicleCannotLeanOutReason
enum class VehicleCannotLeanOutReason : uint8_t
{
    VehicleCannotLeanOutReason                     = 0,
    VehicleCannotLeanOutReason                     = 1,
    VehicleCannotLeanOutReason                     = 2,
    VehicleCannotLeanOutReason                     = 3,
    VehicleCannotLeanOutReason                     = 4

};


// Enum  SGFramework.ESGCharacterInVechicleState
enum class ESGCharacterInVechicleState : uint8_t
{
    ESGState                                       = 0,
    ESGState                                       = 1,
    ESGState                                       = 2,
    ESGState                                       = 3

};


// Enum  MFNPCAI.EAISceneEventState
enum class EAISceneEventState : uint8_t
{
    Trigger                                        = 0,
    Completed                                      = 1,
    Expired                                        = 2,
    Removed                                        = 3,
    EAISceneEventState                             = 4

};


// Enum  MFNPCAI.EAIAimingType
enum class EAIAimingType : uint8_t
{
    Normal                                         = 0,
    Regular                                        = 1,
    EAIAimingType                                  = 2

};


// Enum  MFNPCAI.EAIAimStatus
enum class EAIAimStatus : uint8_t
{
    Aiming                                         = 0,
    NoTarget                                       = 1,
    AimComplete                                    = 2,
    EAIAimStatus                                   = 3

};


// Enum  MFNPCAI.ENPCAIAsyncTaskType
enum class ENPCAIAsyncTaskType : uint8_t
{
    None                                           = 0,
    FindAmbushAgainstPoint                         = 1,
    PeekPoint                                      = 2,
    FindPathByKeyRoute                             = 3,
    QueryRoundEnvironment                          = 4,
    ENPCAIAsyncTaskType                            = 5

};


// Enum  MFNPCAI.ENPCPlaceForCheckType
enum class ENPCPlaceForCheckType : uint8_t
{
    Simple                                         = 0,
    Danger                                         = 1,
    Suspicious                                     = 2,
    Fatal                                          = 3,
    GrenadeHit                                     = 4,
    GrenadeHit                                     = 5,
    GrenadeComeing                                 = 6,
    FarFootStep                                    = 7,
    CloseFootStep                                  = 8,
    FarGunFire                                     = 9,
    CloseGunFire                                   = 10,
    GrenadeHolding                                 = 11,
    Fuzzy                                          = 12,
    ENPCPlaceForCheckType                          = 13

};


// Enum  MFNPCAI.EAIProfileEditState
enum class EAIProfileEditState : uint8_t
{
    None                                           = 0,
    ChoosingProperty                               = 1,
    EditingProperty                                = 2,
    Comparing                                      = 3,
    EAIProfileEditState                            = 4

};


// Enum  MFNPCAI.EAIProfileCoverType
enum class EAIProfileCoverType : uint8_t
{
    CoverType                                      = 0,
    CoverType                                      = 1,
    CoverType                                      = 2,
    CoverType                                      = 3,
    CoverType                                      = 4,
    CoverType                                      = 5,
    CoverType                                      = 6,
    CoverType                                      = 7,
    CoverType                                      = 8,
    CoverType                                      = 9,
    CoverType                                      = 10,
    CoverType                                      = 11,
    CoverType                                      = 12,
    CoverType                                      = 13,
    CoverType                                      = 14,
    CoverType                                      = 15,
    CoverType                                      = 16,
    CoverType                                      = 17

};


// Enum  MFNPCAI.EAIGroupRequestFireTarget
enum class EAIGroupRequestFireTarget : uint8_t
{
    Fire                                           = 0,
    Fire                                           = 1,
    Fire                                           = 2

};


// Enum  MFNPCAI.EAIStateWarnPlayerRequest
enum class EAIStateWarnPlayerRequest : uint8_t
{
    Goto                                           = 0,
    Say                                            = 1,
    Wait                                           = 2,
    Shoot                                          = 3,
    Stay                                           = 4,
    EAIStateWarnPlayerRequest                      = 5

};


// Enum  MFNPCAI.ENPCAIMovementKind
enum class ENPCAIMovementKind : uint8_t
{
    GotoPoint                                      = 0,
    GoDirectly                                     = 1,
    GoAccordingToWayPoints                         = 2,
    ENPCAIMovementKind                             = 3

};


// Enum  MFNPCAI.ENPCAIMoveResult
enum class ENPCAIMoveResult : uint8_t
{
    None                                           = 0,
    WaitPerform                                    = 1,
    Succeeded                                      = 2,
    Failed                                         = 3,
    Aborted                                        = 4,
    InProgress                                     = 5,
    ENPCAIMoveResult                               = 6

};


// Enum  MFNPCAI.EGetLinkUsageCountStatus
enum class EGetLinkUsageCountStatus : uint8_t
{
    Success                                        = 0,
    GetNavMeshManagerFailed                        = 1,
    GetSourceRegionIndexFailed                     = 2,
    GetTargetRegionIndexFailed                     = 3,
    RegionIndexNotValidNodeIndex                   = 4,
    RegionIndexNotValidAdjacencyIndex              = 5,
    Unreachable                                    = 6,
    EGetLinkUsageCountStatus                       = 7

};


// Enum  MFNPCAI.ENavSkeletonPointGetterFlag
enum class ENavSkeletonPointGetterFlag : uint8_t
{
    None                                           = 0,
    LinkId                                         = 1,
    NeighbourIndices                               = 2,
    VisibleIndices                                 = 3,
    All                                            = 255,
    ENavSkeletonPointGetterFlag                    = 256

};


// Enum  MFNPCAI.ENavSkeletonDivergenceMethod
enum class ENavSkeletonDivergenceMethod : uint8_t
{
    Laplacian                                      = 0,
    GradientFlux                                   = 1,
    Neighbour                                      = 2,
    ENavSkeletonDivergenceMethod                   = 3

};


// Enum  MFNPCAI.ENavSkeletonSamplePointKind
enum class ENavSkeletonSamplePointKind : uint8_t
{
    None                                           = 0,
    Isolate                                        = 1,
    Endpoint                                       = 2,
    Normal                                         = 3,
    KeptNormal                                     = 4,
    DoorLink                                       = 5,
    Junction                                       = 6,
    ENavSkeletonSamplePointKind                    = 7

};


// Enum  MFNPCAI.ENavSkeletonSamplePointDropReason
enum class ENavSkeletonSamplePointDropReason : uint8_t
{
    None                                           = 0,
    CannotBeSkeletonPoint                          = 1,
    FindDistanceToWallFailed                       = 2,
    TooCloseToWall                                 = 3,
    InvalidWallHitNormal                           = 4,
    MismatchedNeighbours                           = 5,
    InvalidGradientSize                            = 6,
    InvalidDivergence                              = 7,
    TooLessWallCount                               = 8,
    Isolated                                       = 9,
    NotMainPoint                                   = 10,
    CloseToAnotherMainPoint                        = 11,
    CannotFindProperPointToConnect                 = 12,
    InvalidPointKind                               = 13,
    BeSimplified                                   = 14,
    InPrunedEndBranch                              = 15,
    Count                                          = 16,
    ENavSkeletonSamplePointDropReason              = 17

};


// Enum  MFNPCAI.EPathExistenceTestMode
enum class EPathExistenceTestMode : uint8_t
{
    Regular                                        = 0,
    Hierarchical                                   = 1,
    EPathExistenceTestMode                         = 2

};


// Enum  MFNPCAI.ENavAreaKind
enum class ENavAreaKind : uint8_t
{
    Burning                                        = 0,
    TearGas                                        = 1,
    TripMine                                       = 2,
    Claymore                                       = 3,
    Paradrop                                       = 4,
    ENavAreaKind                                   = 5

};


// Enum  MFNPCAI.ENavMeshTileLabel
enum class ENavMeshTileLabel : uint8_t
{
    AllPolysReachable                              = 0,
    PartialPolysReachable                          = 1,
    InvalidBeginIndex                              = 2,
    ConsiderUnreachablePolys                       = 252,
    AllPolysUneachable                             = 253,
    InvalidHeader                                  = 254,
    Unknown                                        = 255,
    ENavMeshTileLabel                              = 256

};


// Enum  MFNPCAI.EMETIS
enum class EMETIS : uint8_t
{
    EMETIS                                         = 0,
    EMETIS                                         = 1,
    EMETIS                                         = 2,
    EMETIS                                         = 3

};


// Enum  MFNPCAI.EMETIS
enum class EMETIS : uint8_t
{
    EMETIS                                         = 0,
    EMETIS                                         = 1,
    EMETIS                                         = 2,
    EMETIS                                         = 3,
    EMETIS                                         = 4

};


// Enum  MFNPCAI.EMETIS
enum class EMETIS : uint8_t
{
    EMETIS                                         = 0,
    EMETIS                                         = 1,
    EMETIS                                         = 2,
    EMETIS                                         = 3,
    EMETIS                                         = 4,
    EMETIS                                         = 5

};


// Enum  MFNPCAI.EMETIS
enum class EMETIS : uint8_t
{
    EMETIS                                         = 0,
    EMETIS                                         = 1,
    EMETIS                                         = 2

};


// Enum  MFNPCAI.EMETIS
enum class EMETIS : uint8_t
{
    EMETIS                                         = 0,
    EMETIS                                         = 1,
    EMETIS                                         = 2

};


// Enum  MFNPCAI.EnumAIGrassType
enum class EnumAIGrassType : uint8_t
{
    E                                              = 0,
    E                                              = 1,
    E                                              = 2

};


// Enum  MFNPCAI.EnumAIGrassDebugBox
enum class EnumAIGrassDebugBox : uint8_t
{
    E                                              = 0,
    E                                              = 1,
    E                                              = 2,
    E                                              = 3,
    E                                              = 4,
    E                                              = 5

};


// Enum  MFNPCAI.ENPCAISceneEventID
enum class ENPCAISceneEventID : uint8_t
{
    None                                           = 0,
    Armory                                         = 1,
    Armory                                         = 2,
    Valley                                         = 3,
    Valley                                         = 4,
    CallHelp                                       = 5,
    ArmoryAlarmEscapeMine                          = 6,
    TVStation                                      = 7,
    ArmoryAlarmEscapeBunker                        = 8,
    Call                                           = 9,
    ENPCAISceneEventID                             = 10

};


// Enum  MFNPCAI.ESteepZoneSamplePointDropReason
enum class ESteepZoneSamplePointDropReason : uint8_t
{
    None                                           = 0,
    InvalidTrace                                   = 1,
    StartPenetrating                               = 2,
    WalkableFloor                                  = 3,
    NotEnoughNeighbours                            = 4,
    Count                                          = 5,
    ESteepZoneSamplePointDropReason                = 6

};


// Enum  MFNPCAI.ESteepZoneNavMeshPolyDropReason
enum class ESteepZoneNavMeshPolyDropReason : uint8_t
{
    None                                           = 0,
    GetTileAndPolyByRefFailed                      = 1,
    NotPoly                                        = 2,
    InvalidNormal                                  = 3,
    ValidIncludedAngle                             = 4,
    AllTrianglesDropped                            = 5,
    Count                                          = 6,
    ESteepZoneNavMeshPolyDropReason                = 7

};


// Enum  MFNPCAI.EAIKeyRouteQueryType
enum class EAIKeyRouteQueryType : uint8_t
{
    Safe                                           = 0,
    Short                                          = 1,
    EAIKeyRouteQueryType                           = 2

};


// Enum  MFNPCAI.ENPCSetPartType
enum class ENPCSetPartType : uint8_t
{
    None                                           = 0,
    Close                                          = 1,
    Middle                                         = 2,
    Far                                            = 3,
    ENPCSetPartType                                = 4

};


// Enum  MFNPCAI.EAITrackLOGType
enum class EAITrackLOGType : uint8_t
{
    Move                                           = 0,
    AimingBodyPart                                 = 1,
    AimingTime                                     = 2,
    AimingPredestined                              = 3,
    Shoot                                          = 4,
    BeHit                                          = 5,
    Decision                                       = 6,
    Init                                           = 7,
    EAITrackLOGType                                = 8

};


// Enum  MFNPCAI.ENPCAITactic
enum class ENPCAITactic : uint8_t
{
    None                                           = 0,
    CloseFight                                     = 1,
    MidFight                                       = 2,
    LongFight                                      = 3,
    RushFace                                       = 4,
    FlankAttack                                    = 5,
    BackAround                                     = 6,
    Hide                                           = 7,
    RunAway                                        = 8,
    ENPCAITactic                                   = 9

};


// Enum  MFNPCAI.EAIMainType
enum class EAIMainType : uint8_t
{
    EAIMainType                                    = 0,
    EAIMainType                                    = 1,
    EAIMainType                                    = 2,
    EAIMainType                                    = 3,
    EAIMainType                                    = 4,
    EAIMainType                                    = 5,
    EAIMainType                                    = 6,
    EAIMainType                                    = 7,
    EAIMainType                                    = 8

};


// Enum  MFNPCAI.EAIEnemyVisibilityType
enum class EAIEnemyVisibilityType : uint8_t
{
    NotVisible                                     = 0,
    VisibleBySense                                 = 1,
    Visible                                        = 2,
    EAIEnemyVisibilityType                         = 3

};


// Enum  MFNPCAI.EAIEnemyPriority
enum class EAIEnemyPriority : uint8_t
{
    EAIEnemyPriority                               = 0,
    EAIEnemyPriority                               = 1,
    EAIEnemyPriority                               = 2,
    EAIEnemyPriority                               = 3

};


// Enum  MFNPCAI.EAIAimingBodyPartTrend
enum class EAIAimingBodyPartTrend : uint8_t
{
    None                                           = 0,
    Armor                                          = 1,
    NoArmor                                        = 2,
    Fatal                                          = 3,
    MinDamage                                      = 4,
    EAIAimingBodyPartTrend                         = 5

};


// Enum  MFNPCAI.EAIBodyBulkType
enum class EAIBodyBulkType : uint8_t
{
    HeadGroup                                      = 0,
    BodyGroup                                      = 1,
    LegsGroup                                      = 2,
    EAIBodyBulkType                                = 3

};


// Enum  MFNPCAI.EAIBodyPartType
enum class EAIBodyPartType : uint8_t
{
    EAIBodyPartType                                = 0,
    EAIBodyPartType                                = 1,
    EAIBodyPartType                                = 2,
    EAIBodyPartType                                = 3,
    EAIBodyPartType                                = 4,
    EAIBodyPartType                                = 5,
    EAIBodyPartType                                = 6,
    EAIBodyPartType                                = 7

};


// Enum  MFNPCAI.EAISoundType
enum class EAISoundType : uint8_t
{
    EAISoundType                                   = 0,
    EAISoundType                                   = 1

};


// Enum  MFNPCAI.EAIWorkResult
enum class EAIWorkResult : uint8_t
{
    Success                                        = 0,
    Failed                                         = 1,
    Wait                                           = 2,
    EAIWorkResult                                  = 3

};


// Enum  MFNPCAI.EAISenseSightConf
enum class EAISenseSightConf : uint8_t
{
    Normal                                         = 0,
    Night                                          = 1,
    Light                                          = 2,
    EAISenseSightConf                              = 3

};


// Enum  MFNPCAI.ENPCAISenseChannel
enum class ENPCAISenseChannel : uint8_t
{
    NONE                                           = 0,
    Weapon                                         = 15,
    AISight                                        = 25,
    ENPCAISenseChannel                             = 26

};


// Enum  MFNPCAI.EAISenseType
enum class EAISenseType : uint8_t
{
    ALL                                            = 0,
    Sight                                          = 1,
    Hearing                                        = 2,
    Damage                                         = 3,
    ComingExplosion                                = 4,
    EAISenseType                                   = 5

};


// Enum  MFNPCAI.ENPCAISenseBarrier
enum class ENPCAISenseBarrier : uint8_t
{
    None                                           = 0,
    Normal                                         = 1,
    Grass                                          = 2,
    ALLY                                           = 3,
    OtherEnemy                                     = 4,
    Smoke                                          = 5,
    ENPCAISenseBarrier                             = 6

};


// Enum  MFNPCAI.ENPCAIPriority
enum class ENPCAIPriority : uint8_t
{
    Low                                            = 0,
    Middle                                         = 1,
    High                                           = 2,
    Max                                            = 3,
    COUNT                                          = 4

};


// Enum  MFNPCAI.EAIGotoPointDecision
enum class EAIGotoPointDecision : uint8_t
{
    Normal                                         = 0,
    SafetyDoor                                     = 1,
    Swing                                          = 2,
    EAIGotoPointDecision                           = 3

};


// Enum  MFNPCAI.EAIGroupRequestPriority
enum class EAIGroupRequestPriority : uint8_t
{
    Low                                            = 0,
    Normal                                         = 1,
    Top                                            = 2,
    Fatal                                          = 3,
    EAIGroupRequestPriority                        = 4

};


// Enum  MFNPCAI.EAIProfileType
enum class EAIProfileType : uint8_t
{
    Aiming                                         = 0,
    AIType                                         = 1,
    Boss                                           = 2,
    Core                                           = 3,
    Curve                                          = 4,
    Global                                         = 5,
    Grenade                                        = 6,
    Hearing                                        = 7,
    Lay                                            = 8,
    Look                                           = 9,
    Mind                                           = 10,
    Move                                           = 11,
    Shoot                                          = 12,
    Sound                                          = 13,
    Weapon                                         = 14,
    Damage                                         = 15,
    Health                                         = 16,
    PlayerActionReaction                           = 17,
    BTBlock                                        = 18,
    Strategy                                       = 19,
    Smart                                          = 20,
    Tactic                                         = 21,
    RequestRun                                     = 22,
    MAX                                            = 23

};


// Enum  MFNPCAI.ENPCAIDecision
enum class ENPCAIDecision : uint8_t
{
    None                                           = 0,
    RushFaceWhenDisable                            = 1,
    ShootFromCover                                 = 2,
    ShootFromGround                                = 3,
    ShootPrecisely                                 = 4,
    RushFaceWithAlly                               = 5,
    FindCoverToHide                                = 6,
    ChangeCoverAfterNotSafe                        = 7,
    MoveFurther                                    = 8,
    MoveCloser                                     = 9,
    MoveToFlank                                    = 10,
    MoveToAttackPoint                              = 11,
    ChangeCover                                    = 12,
    SearchEnemy                                    = 13,
    HoldPosition                                   = 14,
    BackToCover                                    = 15,
    DogFight                                       = 16,
    CautionInPlace                                 = 17,
    CautionInCover                                 = 18,
    CheckSuspiciousPoint                           = 19,
    SuspiciousPointClear                           = 20,
    GoToNextPathNode                               = 21,
    FollowTargetBoss                               = 22,
    StandAndLookAround                             = 23,
    PacingInPlace                                  = 24,
    TakeMedicine                                   = 25,
    CallHelp                                       = 26,
    RushStrike                                     = 27,
    RushFace                                       = 28,
    LootNearby                                     = 29,
    DodgeGrenade                                   = 30,
    ThrowGrenade                                   = 31,
    WaitInEscapeVolume                             = 32,
    ShootFootstepCreator                           = 33,
    KillDBNOEnemy                                  = 34,
    SneakApproaching                               = 35,
    ReloadInGround                                 = 36,
    ReloadInCover                                  = 37,
    Overwatch                                      = 38,
    ActiveAlarmDevice                              = 39,
    Escape                                         = 40,
    DodgeFire                                      = 41,
    ThrowSmoke                                     = 42,
    ProneShoot                                     = 43,
    FindPronePoint                                 = 44,
    CrouchShoot                                    = 45,
    ProneSuppress                                  = 46,
    CrouchSuppress                                 = 47,
    StandSuppress                                  = 48,
    DualCharge                                     = 49,
    DualGuard                                      = 50,
    Retreat                                        = 51,
    ChangeCoverAfterNotAdvantage                   = 52,
    QuickToHide                                    = 53,
    ChangeCoverToCrouch                            = 54,
    CrouchAimingInCover                            = 55,
    CallForHelp                                    = 56,
    RidiculeVoice                                  = 57,
    StayInPlace                                    = 58,
    PositionAdjustment                             = 59,
    DodgeAttackMove                                = 60,
    MoveToLocNeedArrive                            = 61,
    SmokeToAssistHide                              = 62,
    TacticAction                                   = 63,
    GrenadeToPeek                                  = 64,
    DodgeGrenadeHold                               = 65,
    TeamMove                                       = 66,
    ThrowStepCreator                               = 67,
    SuppressionChangeClose                         = 68,
    SuppressionInPlace                             = 69,
    SuppressionControlDistance                     = 70,
    SuppressionDoor                                = 71,
    OutBattleVolume                                = 72,
    SlientDefenseDoor                              = 73,
    SlientDefenseChangeFar                         = 74,
    SlientDefenseControlDistance                   = 75,
    HoldAreaWithWall                               = 76,
    HoldRoomWithWall                               = 77,
    FootStepCreatorMoveClose                       = 78,
    FootStepCreatorMoveFar                         = 79,
    OpenDoorRush                                   = 80,
    OpenDoorSlient                                 = 81,
    MoveToDoorSafePoint                            = 82,
    EscapeRush                                     = 83,
    EscapeSlient                                   = 84,
    DodgeFlashProjectile                           = 85,
    RandomRangeShoot                               = 86,
    GrassMove                                      = 87,
    ProtectSafeBox                                 = 88,
    PeekFromPeekMark                               = 89,
    PlaceTrapDevice                                = 90,
    CallHelpOnHit                                  = 91,
    AroundFindEnemy                                = 92,
    AlwaysReload                                   = 93,
    MeleeAttackOnReload                            = 94,
    TakeMedicineOnHit                              = 95,
    FoolShootOnHit                                 = 96,
    BattleShow                                     = 97,
    OutOfBattleAct                                 = 98,
    OutOfAllyRange                                 = 99,
    ENPCAIDecision                                 = 100

};


// Enum  MFNPCAI.EAIPerformance
enum class EAIPerformance : uint8_t
{
    None                                           = 0,
    Camp1                                          = 1,
    Camp2                                          = 2,
    Camp3                                          = 3,
    Camp4                                          = 4,
    Camp5                                          = 5,
    Camp6                                          = 6,
    Camp7                                          = 7,
    Camp8                                          = 8,
    Camp9                                          = 9,
    Camp10                                         = 10,
    Camp11                                         = 11,
    Camp12                                         = 12,
    Boss1                                          = 13,
    Boss2                                          = 14,
    Boss3                                          = 15,
    Boss4                                          = 16,
    Boss5                                          = 17,
    Boss5                                          = 18,
    Boss5                                          = 19,
    Boss                                           = 20,
    EventBoss1                                     = 21,
    EventBoss2                                     = 22,
    EventFollower1                                 = 23,
    EventFollower2                                 = 24,
    Follower1                                      = 25,
    Follower2                                      = 26,
    Follower3                                      = 27,
    Follower4                                      = 28,
    Follower5                                      = 29,
    Follower5                                      = 30,
    Follower                                       = 31,
    Follower                                       = 32,
    Follower                                       = 33,
    Follower                                       = 34,
    Follower                                       = 35,
    Follower                                       = 36,
    PMC1                                           = 37,
    PlayerScav1                                    = 38,
    EAIPerformance                                 = 39

};


// Enum  MFNPCAI.EAISenseSourceType
enum class EAISenseSourceType : uint8_t
{
    EAISenseSourceType                             = 0,
    EAISenseSourceType                             = 1

};


// Enum  MFNPCAI.EBlackboardEntryCondition
enum class EBlackboardEntryCondition : uint8_t
{
    BlackboardEntryCondition                       = 0,
    BlackboardEntryCondition                       = 1,
    BlackboardEntryCondition                       = 2,
    BlackboardEntryCondition                       = 3

};


// Enum  MFNPCAI.ENPCKnowWeather
enum class ENPCKnowWeather : uint8_t
{
    Normal                                         = 0,
    Fog                                            = 1,
    ENPCKnowWeather                                = 2

};


// Enum  MFNPCAI.ENPCWeakenDebuffType
enum class ENPCWeakenDebuffType : uint8_t
{
    LoseSight                                      = 0,
    Tinnitus                                       = 1,
    Slowdown                                       = 2,
    ENPCWeakenDebuffType                           = 3

};


// Enum  MFNPCAI.ENPCPanicType
enum class ENPCPanicType : uint8_t
{
    None                                           = 0,
    Run                                            = 1,
    Crouch                                         = 2,
    Prone                                          = 3,
    ENPCPanicType                                  = 4

};


// Enum  MFNPCAI.EAIMoveType
enum class EAIMoveType : uint8_t
{
    AIMoveType                                     = 0,
    AIMoveType                                     = 1,
    AIMoveType                                     = 2,
    AIMoveType                                     = 3

};


// Enum  MFNPCAI.EAILeanType
enum class EAILeanType : uint8_t
{
    AILeanType                                     = 0,
    AILeanType                                     = 1,
    AILeanType                                     = 2,
    AILeanType                                     = 3

};


// Enum  MFNPCAI.EAIPose
enum class EAIPose : uint8_t
{
    AIPose                                         = 0,
    AIPose                                         = 1,
    AIPose                                         = 2,
    AIPose                                         = 3,
    AIPose                                         = 4,
    AIPose                                         = 5

};


// Enum  MFNPCAI.EAISpecialFireType
enum class EAISpecialFireType : uint8_t
{
    EAISpecialFireType                             = 0,
    EAISpecialFireType                             = 1

};


// Enum  MFNPCAI.EAILookPointMode
enum class EAILookPointMode : uint8_t
{
    ToMovingDirection                              = 0,
    ToCustomPoint                                  = 1,
    NoSteering                                     = 2,
    EAILookPointMode                               = 3

};


// Enum  AIActionPointGeneratorRuntime.EActionPointType
enum class EActionPointType : uint8_t
{
    None                                           = 0,
    CoverPoint                                     = 1,
    TacticPoint                                    = 2,
    KeyRoutePoint                                  = 3,
    NavSkeletonPoint                               = 4,
    EActionPointType                               = 5

};


// Enum  AIActionPointGeneratorRuntime.ETakeCoverResult
enum class ETakeCoverResult : uint8_t
{
    InvalidActor                                   = 0,
    AlreadyNull                                    = 1,
    Occupied                                       = 2,
    OtherUsing                                     = 3,
    SelfUsing                                      = 4,
    Released                                       = 5,
    COUNT                                          = 6,
    ETakeCoverResult                               = 7

};


// Enum  AIActionPointGeneratorRuntime.ENavMeshEdgeDropReason
enum class ENavMeshEdgeDropReason : uint8_t
{
    None                                           = 0,
    LengthTooShort                                 = 1,
    InvalidHoleSide                                = 2,
    InvalidMovableRange                            = 3,
    SetupDefenceMapFailed                          = 4,
    NoAnyDefenceRegionFastTest                     = 5,
    NoAnyDefenceRegion                             = 6,
    Count                                          = 7,
    ENavMeshEdgeDropReason                         = 8

};


// Enum  AIActionPointGeneratorRuntime.ENavMeshTacticPointDropReason
enum class ENavMeshTacticPointDropReason : uint8_t
{
    None                                           = 0,
    InExclusionVolume                              = 1,
    AbsoluteDefenceRatioNotEnough                  = 2,
    WindowDefenceRatioNotEnough                    = 3,
    LessThanRequiredMinimumDefenceAngle            = 4,
    GreaterThanLimitedMaximumDefenceAngle          = 5,
    DefenceDirectionNotInHoleSide                  = 6,
    PointsTooClose                                 = 7,
    Count                                          = 8,
    ENavMeshTacticPointDropReason                  = 9

};


// Enum  AIActionPointGeneratorRuntime.ENPCPoseType
enum class ENPCPoseType : uint8_t
{
    Invalid                                        = 0,
    Prone                                          = 1,
    Crouch                                         = 2,
    Stand                                          = 3,
    ENPCPoseType                                   = 4

};


// Enum  AIActionPointGeneratorRuntime.ETacticPointType
enum class ETacticPointType : uint8_t
{
    NONE                                           = 0,
    FlashBag                                       = 1,
    Smoke                                          = 2,
    HighValue                                      = 3,
    FatalGate                                      = 4,
    Escape                                         = 5,
    Trap                                           = 6,
    OverWatch                                      = 7,
    Prone                                          = 8,
    Window                                         = 9,
    Door                                           = 10,
    Retreat                                        = 11,
    Transfer                                       = 12,
    DoorSafety                                     = 13,
    ETacticPointType                               = 14

};


// Enum  CoverGenerator.ENavLinkType
enum class ENavLinkType : uint8_t
{
    None                                           = 0,
    Door                                           = 1,
    Cabinet                                        = 2,
    JumpingDown                                    = 3,
    JumpingOver                                    = 4,
    ENavLinkType                                   = 5

};


// Enum  MFWeakNetwork.EMFNetworkState
enum class EMFNetworkState : uint8_t
{
    NotReachable                                   = 0,
    WWAN                                           = 1,
    Wifi                                           = 2,
    Others                                         = 3,
    EMFNetworkState                                = 4

};


// Enum  MFQuestSystem.EQuestStatus
enum class EQuestStatus : uint8_t
{
    EQuestStatus                                   = 0,
    EQuestStatus                                   = 1,
    EQuestStatus                                   = 2,
    EQuestStatus                                   = 3,
    EQuestStatus                                   = 4

};


// Enum  MFQuestSystem.EQuestNodeType
enum class EQuestNodeType : uint8_t
{
    BaseNode                                       = 0,
    CheckNode                                      = 1,
    AssembleNode                                   = 2,
    AffiliateNode                                  = 3,
    EQuestNodeType                                 = 4

};


// Enum  MFQuestSystem.ERecoveryAttributeChangeType
enum class ERecoveryAttributeChangeType : uint8_t
{
    Recover                                        = 0,
    Lose                                           = 1,
    ERecoveryAttributeChangeType                   = 2

};


// Enum  MFQuestSystem.ETaskType
enum class ETaskType : uint8_t
{
    E                                              = 0,
    E                                              = 1,
    E                                              = 2,
    E                                              = 3,
    E                                              = 4,
    E                                              = 5,
    E                                              = 6,
    E                                              = 7,
    E                                              = 8,
    E                                              = 9

};


// Enum  MFQuestSystem.EQuestType
enum class EQuestType : uint8_t
{
    Normal                                         = 0,
    Distributer                                    = 1,
    Activity                                       = 2,
    Achievement                                    = 3,
    EQuestType                                     = 4

};


// Enum  MFQuestSystem.EQuestObjectiveType
enum class EQuestObjectiveType : uint8_t
{
    Percentage                                     = 0,
    ClearArea                                      = 1,
    OccupiedArea                                   = 2,
    EQuestObjectiveType                            = 3

};


// Enum  MFQuestSystem.ERelatedTargetType
enum class ERelatedTargetType : uint8_t
{
    TargetOnly                                     = 0,
    TargetTeammateOnly                             = 1,
    RandomTeam                                     = 2,
    AllPMC                                         = 3,
    AllSCAV                                        = 4,
    ERelatedTargetType                             = 5

};


// Enum  MFQuestSystem.ENumberCompareType
enum class ENumberCompareType : uint8_t
{
    CMP                                            = 0,
    CMP                                            = 1,
    CMP                                            = 2,
    CMP                                            = 3,
    CMP                                            = 4,
    CMP                                            = 5,
    CMP                                            = 6,
    CMP                                            = 7

};


// Enum  MFQuestSystem.ERunQuestResult
enum class ERunQuestResult : uint8_t
{
    Success                                        = 0,
    Failed                                         = 1,
    ERunQuestResult                                = 2

};


// Enum  MFQuestSystem.EQuestNodeStatus
enum class EQuestNodeStatus : uint8_t
{
    EQuestNodeStatus                               = 0,
    EQuestNodeStatus                               = 1,
    EQuestNodeStatus                               = 2

};


// Enum  MFQuestSystem.EQuestNodeConnectionType
enum class EQuestNodeConnectionType : uint8_t
{
    EQuestNodeConnectionType                       = 0,
    EQuestNodeConnectionType                       = 1,
    EQuestNodeConnectionType                       = 2

};


// Enum  MFQuestSystem.EQuestInstigatorType
enum class EQuestInstigatorType : uint8_t
{
    EQuestInstigatorType                           = 0,
    EQuestInstigatorType                           = 1,
    EQuestInstigatorType                           = 2,
    EQuestInstigatorType                           = 3,
    EQuestInstigatorType                           = 4

};


// Enum  MFQuestSystem.EQuestConditionCheckType
enum class EQuestConditionCheckType : uint8_t
{
    EQuestConditionCheckType                       = 0,
    EQuestConditionCheckType                       = 1,
    EQuestConditionCheckType                       = 2,
    EQuestConditionCheckType                       = 3

};


// Enum  MFQuestSystem.EQuestConditionType
enum class EQuestConditionType : uint8_t
{
    EQuestConditionType                            = 0,
    EQuestConditionType                            = 1,
    EQuestConditionType                            = 2

};


// Enum  MFQuestSystem.EQuestFailedType
enum class EQuestFailedType : uint8_t
{
    EQuestFailed                                   = 0,
    EQuestFailed                                   = 1,
    EQuestFailed                                   = 2

};


// Enum  MFMobileJoystick.EAcceptOP
enum class EAcceptOP : uint8_t
{
    EAOP                                           = 0,
    EAOP                                           = 1,
    EAOP                                           = 2

};


// Enum  MFMobileJoystick.EBlendOP
enum class EBlendOP : uint8_t
{
    EOP                                            = 0,
    EOP                                            = 1,
    EOP                                            = 2,
    EOP                                            = 3,
    EOP                                            = 4,
    EOP                                            = 5

};


// Enum  MFVoxelReflectionRuntime.EMFDoorSwitchMode
enum class EMFDoorSwitchMode : uint8_t
{
    Disabled                                       = 0,
    AlwaysOpen                                     = 1,
    AlwaysClose                                    = 2,
    Default                                        = 3,
    EMFDoorSwitchMode                              = 4

};


// Enum  MFVoxelReflectionRuntime.EMFReflectionState
enum class EMFReflectionState : uint8_t
{
    None                                           = 0,
    DoorOpen                                       = 1,
    DoorClose                                      = 2,
    EMFReflectionState                             = 3

};


// Enum  MFVoxelReflectionRuntime.EInteriorBiasFloorDecalMode
enum class EInteriorBiasFloorDecalMode : uint8_t
{
    None                                           = 0,
    AllDirection                                   = 1,
    VerticalOnly                                   = 2,
    EInteriorBiasFloorDecalMode                    = 3

};


// Enum  MFVoxelReflectionRuntime.EInteriorBiasMode
enum class EInteriorBiasMode : uint8_t
{
    Debug                                          = 4294967295,
    BiasOnly                                       = 0,
    BlurOnly                                       = 1,
    Hybrid                                         = 2,
    EInteriorBiasMode                              = 3

};


// Enum  MFVoxelReflectionRuntime.ESkyLightMode
enum class ESkyLightMode : uint8_t
{
    None                                           = 0,
    LineTrace                                      = 1,
    Embree                                         = 2,
    ESkyLightMode                                  = 3

};


// Enum  MFVoxelReflectionRuntime.EInteriorMode
enum class EInteriorMode : uint8_t
{
    None                                           = 0,
    Default                                        = 1,
    RaycastOnly                                    = 2,
    DawnInteriorVolumeOnly                         = 3,
    TaggedReflectionCaptureOnly                    = 4,
    EInteriorMode                                  = 5

};


// Enum  MFVoxelEnv.EMFVoxelEnvFindCoverCallResult
enum class EMFVoxelEnvFindCoverCallResult : uint8_t
{
    Success                                        = 0,
    NoVolume                                       = 1,
    NoOctree                                       = 2,
    CoverMapNotEnabled                             = 3,
    CoverMapInvalid                                = 4,
    EMFVoxelEnvFindCoverCallResult                 = 5

};


// Enum  MFVoxelEnv.EMFVoxelEnvCoverSearchType
enum class EMFVoxelEnvCoverSearchType : uint8_t
{
    Nearest                                        = 0,
    Furthest                                       = 1,
    Random                                         = 2,
    EMFVoxelEnvCoverSearchType                     = 3

};


// Enum  MFVoxelEnv.EMFVoxelEnvPathPruning
enum class EMFVoxelEnvPathPruning : uint8_t
{
    None                                           = 0,
    WithClearance                                  = 1,
    WithoutClearance                               = 2,
    EMFVoxelEnvPathPruning                         = 3

};


// Enum  MFVoxelEnv.EMFVoxelEnvFindLineOfSightCallResult
enum class EMFVoxelEnvFindLineOfSightCallResult : uint8_t
{
    Success                                        = 0,
    Visible                                        = 1,
    NoVolume                                       = 2,
    NoOctree                                       = 3,
    NoStart                                        = 4,
    NoTarget                                       = 5,
    EMFVoxelEnvFindLineOfSightCallResult           = 6

};


// Enum  MFVoxelEnv.EMFVoxelEnvPathFindingCallResult
enum class EMFVoxelEnvPathFindingCallResult : uint8_t
{
    Success                                        = 0,
    Reachable                                      = 1,
    NoVolume                                       = 2,
    NoOctree                                       = 3,
    NoStart                                        = 4,
    NoTarget                                       = 5,
    EMFVoxelEnvPathFindingCallResult               = 6

};


// Enum  MFVoxelEnv.EMFVoxelEnvHeuristic
enum class EMFVoxelEnvHeuristic : uint8_t
{
    Manhattan                                      = 0,
    Euclidean                                      = 1,
    EMFVoxelEnvHeuristic                           = 2

};


// Enum  UFix.EUFixDownloadState
enum class EUFixDownloadState : uint8_t
{
    EPrepared                                      = 0,
    EDownloading                                   = 1,
    EFinish                                        = 2,
    EDownloadFailed                                = 3,
    EUFixDownloadState                             = 4

};


// Enum  UFix.FileListOperation
enum class FileListOperation : uint8_t
{
    APPEND                                         = 0,
    DELETE                                         = 1,
    FileListOperation                              = 2

};


// Enum  UAGraphicsCommonRuntime.EShadowMode
enum class EShadowMode : uint8_t
{
    SM                                             = 0,
    SM                                             = 1,
    SM                                             = 2

};


// Enum  Dawn20RuntimeComponents.EDawn20InteriorVolumePlaneBiasMode
enum class EDawn20InteriorVolumePlaneBiasMode : uint8_t
{
    None                                           = 0,
    ForceEnable                                    = 1,
    ForceDisable                                   = 2,
    EDawn20InteriorVolumePlaneBiasMode             = 3

};


// Enum  DawnRuntimeComponents.EDawnInteriorVolumePlaneBiasMode
enum class EDawnInteriorVolumePlaneBiasMode : uint8_t
{
    None                                           = 0,
    ForceEnable                                    = 1,
    ForceDisable                                   = 2,
    EDawnInteriorVolumePlaneBiasMode               = 3

};


// Enum  LandscapeGrassHDRuntime.EGrassHDBuildState
enum class EGrassHDBuildState : uint8_t
{
    CullOBBs                                       = 0,
    CullOBBs                                       = 1,
    CullOBBs                                       = 2,
    CullOBBs                                       = 3,
    CullOBBs                                       = 4,
    CullOBBs                                       = 5,
    CullOBBs                                       = 6,
    CullOBBs                                       = 7,
    OBBsReady                                      = 8,
    Completed                                      = 9,
    EGrassHDBuildState                             = 10

};


// Enum  MagicLeapARPin.EMagicLeapARPinType
enum class EMagicLeapARPinType : uint8_t
{
    SingleUserSingleSession                        = 0,
    SingleUserMultiSession                         = 1,
    MultiUserMultiSession                          = 2,
    EMagicLeapARPinType                            = 3

};


// Enum  MagicLeapARPin.EMagicLeapAutoPinType
enum class EMagicLeapAutoPinType : uint8_t
{
    OnlyOnDataRestoration                          = 0,
    Always                                         = 1,
    Never                                          = 2,
    EMagicLeapAutoPinType                          = 3

};


// Enum  MagicLeapARPin.EMagicLeapPassableWorldError
enum class EMagicLeapPassableWorldError : uint8_t
{
    None                                           = 0,
    LowMapQuality                                  = 1,
    UnableToLocalize                               = 2,
    Unavailable                                    = 3,
    PrivilegeDenied                                = 4,
    InvalidParam                                   = 5,
    UnspecifiedFailure                             = 6,
    PrivilegeRequestPending                        = 7,
    StartupPending                                 = 8,
    SharedWorldNotEnabled                          = 9,
    NotImplemented                                 = 10,
    PinNotFound                                    = 11,
    EMagicLeapPassableWorldError                   = 12

};


// Enum  PhysXVehicles.EWheelSweepType
enum class EWheelSweepType : uint8_t
{
    SimpleAndComplex                               = 0,
    Simple                                         = 1,
    Complex                                        = 2,
    EWheelSweepType                                = 3

};


// Enum  PhysXVehicles.EVehicleDifferential4W
enum class EVehicleDifferential4W : uint8_t
{
    LimitedSlip                                    = 0,
    LimitedSlip                                    = 1,
    LimitedSlip                                    = 2,
    Open                                           = 3,
    Open                                           = 4,
    Open                                           = 5,
    EVehicleDifferential4W                         = 6

};


// Enum  UACommon.EDownloadFileState
enum class EDownloadFileState : uint8_t
{
    DownloadFileState                              = 0,
    DownloadFileState                              = 1,
    DownloadFileState                              = 2,
    DownloadFileState                              = 3,
    DownloadFileState                              = 4,
    DownloadFileState                              = 5,
    DownloadFileState                              = 6

};


// Enum  UACommon.ELevelDifficult
enum class ELevelDifficult : uint8_t
{
    Standard                                       = 0,
    Block                                          = 1,
    Fertile                                        = 2,
    ELevelDifficult                                = 3

};


// Enum  UACommon.ERookieTipType
enum class ERookieTipType : uint8_t
{
    Quest                                          = 0,
    Dialogue                                       = 1,
    Message                                        = 2,
    FacePaint                                      = 3,
    ERookieTipType                                 = 4

};


// Enum  UACommon.ELoosePointType
enum class ELoosePointType : uint8_t
{
    Custom                                         = 0,
    Food                                           = 1,
    Tools                                          = 2,
    Drink                                          = 3,
    Device                                         = 4,
    Wealth                                         = 5,
    Combustibles                                   = 6,
    Electronic                                     = 7,
    Ammo                                           = 8,
    Ammo                                           = 9,
    Ammo                                           = 10,
    Ammo                                           = 11,
    Ammo                                           = 12,
    Ammo                                           = 13,
    Throwable                                      = 14,
    Med                                            = 15,
    Key                                            = 16,
    Money                                          = 17,
    Attacking                                      = 18,
    ELoosePointType                                = 19

};


// Enum  UACommon.EUAPlayerSignEnum
enum class EUAPlayerSignEnum : uint8_t
{
    None                                           = 0,
    EnemySign                                      = 1,
    LootSign                                       = 2,
    CommonSign                                     = 3,
    EUAPlayerSignEnum                              = 4

};


// Enum  UACommon.EGamePadEffectTable
enum class EGamePadEffectTable : uint8_t
{
    None                                           = 0,
    GamePadView                                    = 1,
    GamePadView                                    = 2,
    GamePadView                                    = 3,
    GamePadView                                    = 4,
    GamePadView                                    = 5,
    GamePadView                                    = 6,
    F                                              = 7,
    F                                              = 8,
    GamePadView                                    = 9,
    GamePadView                                    = 10,
    GamePadView                                    = 11,
    GamePadView                                    = 12,
    GamePadView                                    = 13,
    GamePadView                                    = 14,
    GamePadView                                    = 15,
    GamePadView                                    = 16,
    GamePadView                                    = 17,
    GamePadView                                    = 18,
    GamePadView                                    = 19,
    GamePadView                                    = 20,
    GamePadView                                    = 21,
    GamePadView                                    = 22,
    GamePadView                                    = 23,
    GamePadView                                    = 24,
    GamePadView                                    = 25,
    GamePadView                                    = 26,
    GamePadView                                    = 27,
    GamePadView                                    = 28,
    GamePadView                                    = 29,
    GamePadView                                    = 30,
    GamePadView                                    = 31,
    GamePadView                                    = 32,
    GamePadView                                    = 33,
    GamePadView                                    = 34,
    GamePadView                                    = 35,
    GamePadView                                    = 36,
    GamePadView                                    = 37,
    GamePadView                                    = 38,
    GamePadView                                    = 39,
    GamePadView                                    = 40,
    GamePadView                                    = 41,
    GamePadView                                    = 42,
    GamePadView                                    = 43,
    GamePadView                                    = 44,
    GamePadView                                    = 45,
    GamePadView                                    = 46,
    GamePadView                                    = 47,
    GamePadView                                    = 48,
    GamePadView                                    = 49,
    GamePadView                                    = 50,
    GamePadView                                    = 51,
    GamePadView                                    = 52,
    GamePadView                                    = 53,
    GamePadView                                    = 54,
    GamePadView                                    = 55,
    GamePadView                                    = 56,
    GamePadView                                    = 57,
    GamePadView                                    = 58,
    GamePadView                                    = 59,
    GamePadView                                    = 60,
    GamePadView                                    = 61,
    GamePadView                                    = 62,
    GamePadView                                    = 63,
    GamePadView                                    = 64,
    GamePadView                                    = 65,
    GamePadView                                    = 66,
    GamePadView                                    = 67,
    GamePadView                                    = 68,
    GamePadView                                    = 69,
    GamePadView                                    = 70,
    GamePadView                                    = 71,
    GamePadView                                    = 72,
    GamePadView                                    = 73,
    GamePadView                                    = 74,
    GamePadView                                    = 75,
    GamePadView                                    = 76,
    GamePadView                                    = 77,
    FirstLootInventoryEffect                       = 78,
    LootViewButtonEffect                           = 79,
    GamePadView                                    = 80,
    GamePadView                                    = 81,
    GamePadView                                    = 82,
    GamePadView                                    = 83,
    SecondLootInventoryEffect                      = 84,
    FirstBagInventoryEffect                        = 85,
    SecondBagInventoryEffect                       = 86,
    FirstDeathBoxGunEffect                         = 87,
    SecondhudMarkMapEffect                         = 88,
    GamePadView                                    = 89,
    ArmorLOOTDeathboxEffect                        = 90,
    ManualLOOTEffect                               = 91,
    Mask                                           = 92,
    ArmorReplaceEffect                             = 93,
    Overseas                                       = 94,
    Overseas                                       = 95,
    Overseas                                       = 96,
    EGamePadEffectTable                            = 97

};


// Enum  UACommon.EUAGamePadHightWidgetTable
enum class EUAGamePadHightWidgetTable : uint8_t
{
    None                                           = 0,
    GuideCircle                                    = 1,
    GuideCircle                                    = 2,
    GuideCircle                                    = 3,
    EUAGamePadHightWidgetTable                     = 4

};


// Enum  UACommon.EUAGamePadTable
enum class EUAGamePadTable : uint8_t
{
    None                                           = 0,
    GamePadView                                    = 1,
    GamePadView                                    = 2,
    GamePadView                                    = 3,
    GamePadView                                    = 4,
    GamePadView                                    = 5,
    GamePadView                                    = 6,
    GamePadView                                    = 7,
    GamePadView                                    = 8,
    GamePadView                                    = 9,
    GamePadView                                    = 10,
    GamePadView                                    = 11,
    GamePadView                                    = 12,
    GamePadView                                    = 13,
    GamePadView                                    = 14,
    GamePadView                                    = 15,
    GamePadView                                    = 16,
    GamePadView                                    = 17,
    GamePadView                                    = 18,
    GamePadView                                    = 19,
    GamePadView                                    = 20,
    BP                                             = 21,
    GamePadView                                    = 22,
    GamePadView                                    = 23,
    BPFX                                           = 24,
    DoorInteraction                                = 25,
    BP                                             = 26,
    BP                                             = 27,
    BPFX                                           = 28,
    BPFX                                           = 29,
    BP                                             = 30,
    BPFX                                           = 31,
    BPFX                                           = 32,
    GamePadView                                    = 33,
    BP                                             = 34,
    BP                                             = 35,
    GamePadView                                    = 36,
    BPFX                                           = 37,
    BPFX                                           = 38,
    BP                                             = 39,
    BP                                             = 40,
    GamePadView                                    = 41,
    GamePadView                                    = 42,
    GamePadView                                    = 43,
    GamePadView                                    = 44,
    DoorInteractionTips                            = 45,
    BPFX                                           = 46,
    GamePadView                                    = 47,
    GamePadView                                    = 48,
    BP                                             = 50,
    BPFX                                           = 51,
    SoundIndicatorV2                               = 52,
    GamePadView                                    = 53,
    BP                                             = 54,
    GamePadView                                    = 55,
    BPFX                                           = 56,
    BP                                             = 57,
    Temp                                           = 58,
    Temp2                                          = 59,
    BP                                             = 60,
    BP                                             = 61,
    BP                                             = 62,
    GamePadView                                    = 63,
    EUAGamePadTable                                = 64

};


// Enum  UACommon.EUAHUDPreInstallLoc
enum class EUAHUDPreInstallLoc : uint8_t
{
    None                                           = 0,
    Tips                                           = 1,
    dialogBox                                      = 2,
    Objective                                      = 3,
    Suggestive                                     = 4,
    WarnMessage                                    = 5,
    LightTips                                      = 6,
    Activity                                       = 7,
    Quest                                          = 8,
    RouletteTips                                   = 9,
    EUAHUDPreInstallLoc                            = 10

};


// Enum  UACommon.EUAArgResolveMethod
enum class EUAArgResolveMethod : uint8_t
{
    None                                           = 0,
    Inventory                                      = 1,
    Volume                                         = 2,
    EnvDamage                                      = 3,
    LootBox                                        = 4,
    EUAArgResolveMethod                            = 5

};


// Enum  UACommon.EUAStatisParamFilterType
enum class EUAStatisParamFilterType : uint8_t
{
    None                                           = 0,
    Equal                                          = 1,
    GreaterEqual                                   = 2,
    LessEqual                                      = 3,
    Between                                        = 4,
    FixLenNumDivideIn                              = 5,
    FixLenNumDivideNotIn                           = 6,
    EqualArray                                     = 7,
    EUAStatisParamFilterType                       = 8

};


// Enum  UACommon.EUAStatisMethod
enum class EUAStatisMethod : uint8_t
{
    SumValue                                       = 0,
    Max                                            = 1,
    Min                                            = 2,
    LastValue                                      = 3,
    SumCount                                       = 4

};


// Enum  UAGame.ETutorialFlowBarType
enum class ETutorialFlowBarType : uint8_t
{
    TutorialFlowBarType                            = 0,
    TutorialFlowBarType                            = 1,
    TutorialFlowBarType                            = 2,
    TutorialFlowBarType                            = 3,
    TutorialFlowBarType                            = 4

};


// Enum  UAGame.ETutorialBagType
enum class ETutorialBagType : uint8_t
{
    TutorialBagType                                = 0,
    TutorialBagType                                = 1,
    TutorialBagType                                = 2,
    TutorialBagType                                = 3,
    TutorialBagType                                = 4

};


// Enum  UAGame.ETutorialBagWidgetType
enum class ETutorialBagWidgetType : uint8_t
{
    Undefined                                      = 0,
    PickupsNearby                                  = 1,
    MyBag                                          = 2,
    MyBagIcon                                      = 3,
    VestBag                                        = 4,
    VestBagIcon                                    = 5,
    PickBag                                        = 6,
    Character                                      = 7,
    Inventory                                      = 8,
    Adapter                                        = 9,
    FirstMainWeapon                                = 10,
    SecondMainWeapon                               = 11,
    AssistWeapon                                   = 12,
    MeleeWeapon                                    = 13,
    ThrowWeapon                                    = 14,
    Armor                                          = 15,
    Armor                                          = 16,
    Pocket                                         = 17,
    SafeBox                                        = 18,
    SafeBoxIcon                                    = 19,
    Headset                                        = 20,
    FaceCover                                      = 21,
    EyeWear                                        = 22,
    ArmBand                                        = 23,
    DogTag                                         = 24,
    SplitItemWindow                                = 25,
    RotateItemWindow                               = 26,
    MAX                                            = 27

};


// Enum  UAGame.EActionPriority
enum class EActionPriority : uint8_t
{
    EActionPriority                                = 0,
    EActionPriority                                = 1,
    EActionPriority                                = 2,
    EActionPriority                                = 3

};


// Enum  UAGame.EActionContext
enum class EActionContext : uint8_t
{
    EActionContext                                 = 0,
    EActionContext                                 = 1,
    EActionContext                                 = 2,
    EActionContext                                 = 3,
    EActionContext                                 = 4,
    EActionContext                                 = 5,
    EActionContext                                 = 6,
    EActionContext                                 = 7,
    EActionContext                                 = 8,
    EActionContext                                 = 9,
    EActionContext                                 = 10,
    EActionContext                                 = 11

};


// Enum  UAGame.InventoryDestroyedEffectType
enum class InventoryDestroyedEffectType : uint8_t
{
    QuestFailed                                    = 0,
    InventoryDestroyedEffectType                   = 1

};


// Enum  UAGame.ETutorialCharacterStateCheckType
enum class ETutorialCharacterStateCheckType : uint8_t
{
    TutorialCharacterStateCheckType                = 0,
    TutorialCharacterStateCheckType                = 1,
    TutorialCharacterStateCheckType                = 2,
    TutorialCharacterStateCheckType                = 3

};


// Enum  UAGame.EQuestConditionCharacterType
enum class EQuestConditionCharacterType : uint8_t
{
    ECharacterType                                 = 0,
    ECharacterType                                 = 1,
    ECharacterType                                 = 2

};


// Enum  UAGame.EQuestConditionCharacterStatus
enum class EQuestConditionCharacterStatus : uint8_t
{
    ECharacterType                                 = 0,
    ECharacterType                                 = 1,
    ECharacterType                                 = 2,
    ECharacterType                                 = 3,
    ECharacterType                                 = 4

};


// Enum  UAGame.EQuestCheckCustomAttribute
enum class EQuestCheckCustomAttribute : uint8_t
{
    TotalEndurance                                 = 0,
    EQuestCheckCustomAttribute                     = 1

};


// Enum  UAGame.ECheckItemType
enum class ECheckItemType : uint8_t
{
    Weapon                                         = 0,
    Helmet                                         = 1,
    Vest                                           = 2,
    Headset                                        = 3,
    FaceCover                                      = 4,
    EyeWear                                        = 5,
    VestBag                                        = 6,
    Bag                                            = 7,
    ECheckItemType                                 = 8

};


// Enum  UAGame.EGameplayTagCheckType
enum class EGameplayTagCheckType : uint8_t
{
    AnyMatching                                    = 0,
    AllMatching                                    = 1,
    EGameplayTagCheckType                          = 2

};


// Enum  UAGame.EQuestTakeLimitLogicType
enum class EQuestTakeLimitLogicType : uint8_t
{
    Enum                                           = 0,
    Enum                                           = 1,
    Enum                                           = 2

};


// Enum  UAGame.ETeamInfoCheckType
enum class ETeamInfoCheckType : uint8_t
{
    MaxCount                                       = 0,
    AliveCount                                     = 1,
    EscapeCount                                    = 2,
    DiedCount                                      = 3,
    ETeamInfoCheckType                             = 4

};


// Enum  UAGame.ETimeLimitType
enum class ETimeLimitType : uint8_t
{
    EnterGame                                      = 0,
    TimeRecord                                     = 1,
    ETimeLimitType                                 = 2

};


// Enum  UAGame.ETutorialBagState
enum class ETutorialBagState : uint8_t
{
    BigMapState                                    = 0,
    BigMapState                                    = 1,
    BigMapState                                    = 2,
    BigMapState                                    = 3

};


// Enum  UAGame.EBigMapState
enum class EBigMapState : uint8_t
{
    BigMapState                                    = 0,
    BigMapState                                    = 1,
    BigMapState                                    = 2,
    BigMapState                                    = 3

};


// Enum  UAGame.ETutorialDoorState
enum class ETutorialDoorState : uint8_t
{
    TutorialDoorState                              = 0,
    TutorialDoorState                              = 1,
    TutorialDoorState                              = 2,
    TutorialDoorState                              = 3

};


// Enum  UAGame.EFacePanelState
enum class EFacePanelState : uint8_t
{
    FacePanelState                                 = 0,
    FacePanelState                                 = 1,
    FacePanelState                                 = 2,
    FacePanelState                                 = 3

};


// Enum  UAGame.ETutorialSettingState
enum class ETutorialSettingState : uint8_t
{
    SettingPannalState                             = 0,
    SettingPannalState                             = 1,
    SettingPannalState                             = 2,
    SettingPannalState                             = 3

};


// Enum  UAGame.ETutorialDamageType
enum class ETutorialDamageType : uint8_t
{
    ETutorialDamageType                            = 0,
    ETutorialDamageType                            = 1,
    ETutorialDamageType                            = 2,
    ETutorialDamageType                            = 3

};


// Enum  UAGame.EQuestInteractEnableType
enum class EQuestInteractEnableType : uint8_t
{
    Self                                           = 0,
    Teammate                                       = 1,
    Anyone                                         = 2,
    EQuestInteractEnableType                       = 3

};


// Enum  UAGame.EQuestTraceMarkType
enum class EQuestTraceMarkType : uint8_t
{
    QuestInventory                                 = 0,
    InteractItem                                   = 1,
    Area                                           = 2,
    EscapePoint                                    = 3,
    EQuestTraceMarkType                            = 4

};


// Enum  UAGame.ESoundDirType
enum class ESoundDirType : uint8_t
{
    None                                           = 0,
    LEFT                                           = 1,
    CENTER                                         = 2,
    RIGHT                                          = 3,
    ESoundDirType                                  = 4

};


// Enum  UAGame.EActivityDataCenterType
enum class EActivityDataCenterType : uint8_t
{
    E                                              = 0,
    E                                              = 1,
    E                                              = 2,
    E                                              = 3,
    E                                              = 4

};


// Enum  UAGame.ELootRandomItemType
enum class ELootRandomItemType : uint8_t
{
    MainSetting                                    = 0,
    NormalItem                                     = 1,
    SubItemTable                                   = 2,
    AssembledItem                                  = 3,
    ELootRandomItemType                            = 4

};


// Enum  UAGame.ESGLootRandomItemOperation
enum class ESGLootRandomItemOperation : uint8_t
{
    And                                            = 0,
    Or                                             = 1,
    ESGLootRandomItemOperation                     = 2

};


// Enum  UAGame.EUATutorialArrowTipType
enum class EUATutorialArrowTipType : uint8_t
{
    Container                                      = 0,
    FillAmmo                                       = 1,
    EUATutorialArrowTipType                        = 2

};


// Enum  UAGame.EUATutorialHighlightEffectType
enum class EUATutorialHighlightEffectType : uint8_t
{
    Search                                         = 0,
    GamePad                                        = 1,
    SelectMenu                                     = 2,
    SelectMenu                                     = 3,
    EUATutorialHighlightEffectType                 = 4

};


// Enum  UAGame.EUAMarkedType
enum class EUAMarkedType : uint8_t
{
    EUAMarkedType                                  = 0,
    EUAMarkedType                                  = 1,
    EUAMarkedType                                  = 2

};


// Enum  UAGame.EEscapeInteractVolumeState
enum class EEscapeInteractVolumeState : uint8_t
{
    EEscapeInteractVolumeState                     = 0,
    EEscapeInteractVolumeState                     = 1,
    EEscapeInteractVolumeState                     = 2,
    EEscapeInteractVolumeState                     = 3,
    EEscapeInteractVolumeState                     = 4

};


// Enum  UAGame.EUAEscapeTimeType
enum class EUAEscapeTimeType : uint8_t
{
    Locality                                       = 0,
    Global                                         = 1,
    EUAEscapeTimeType                              = 2

};


// Enum  UAGame.EUATimeType
enum class EUATimeType : uint8_t
{
    None                                           = 0,
    Open                                           = 1,
    Close                                          = 2,
    EUATimeType                                    = 3

};


// Enum  UAGame.EEscapeState
enum class EEscapeState : uint8_t
{
    EEscapeState                                   = 0,
    EEscapeState                                   = 1,
    EEscapeState                                   = 2,
    EEscapeState                                   = 3,
    EEscapeState                                   = 4,
    EEscapeState                                   = 5

};


// Enum  UAGame.EEscapeVolumeStyle
enum class EEscapeVolumeStyle : uint8_t
{
    Normal                                         = 0,
    ThemeActivity                                  = 1,
    EEscapeVolumeStyle                             = 2

};


// Enum  UAGame.EEscapeVolumeType
enum class EEscapeVolumeType : uint8_t
{
    Locality                                       = 0,
    Global                                         = 1,
    EEscapeVolumeType                              = 2

};


// Enum  UAGame.EChatacterVisibleState
enum class EChatacterVisibleState : uint8_t
{
    EChatacterVisibleState                         = 0,
    EChatacterVisibleState                         = 1,
    EChatacterVisibleState                         = 2,
    EChatacterVisibleState                         = 3

};


// Enum  UAGame.EUAFSMCompareType
enum class EUAFSMCompareType : uint8_t
{
    UAFSMCompareType                               = 0,
    UAFSMCompareType                               = 1,
    UAFSMCompareType                               = 2,
    UAFSMCompareType                               = 3,
    UAFSMCompareType                               = 4,
    UAFSMCompareType                               = 5,
    UAFSMCompareType                               = 6,
    UAFSMCompareType                               = 7,
    UAFSMCompareType                               = 8

};


// Enum  UAGame.EUAFSMRelative
enum class EUAFSMRelative : uint8_t
{
    UAFSMRelative                                  = 0,
    UAFSMRelative                                  = 1,
    UAFSMRelative                                  = 2,
    UAFSMRelative                                  = 3

};


// Enum  UAGame.EGameMapId
enum class EGameMapId : uint8_t
{
    None                                           = 0,
    Erangel                                        = 1,
    Desert                                         = 2,
    ErangelOrigin                                  = 3,
    Savage                                         = 4,
    Max                                            = 5

};


// Enum  UAGame.ESubGameModeType
enum class ESubGameModeType : uint8_t
{
    None                                           = 0,
    Main                                           = 100,
    DeathPoisonFog                                 = 200,
    Compact                                        = 201,
    RandomMap                                      = 300,
    Fog                                            = 301,
    CustomItemSniper                               = 400,
    CustomItemColdArms                             = 401,
    CustomItem3xRich                               = 402,
    CustomItemPistol                               = 403,
    CustomItemShotgun                              = 404,
    CustomItemDrug                                 = 405,
    HardCore                                       = 500,
    FPP                                            = 501,
    BattleOfFiveArmies                             = 502,
    BattleOfThreeTeams                             = 503,
    MAX                                            = 504

};


// Enum  UAGame.EMainGameModeType
enum class EMainGameModeType : uint8_t
{
    None                                           = 0,
    ClassicPVP                                     = 1,
    LeisurePVP                                     = 2,
    MAX                                            = 3

};


// Enum  UAGame.EGameTeamType
enum class EGameTeamType : uint8_t
{
    None                                           = 0,
    OnePlayer                                      = 1,
    TwoPlayers                                     = 2,
    FourPlayers                                    = 3,
    ThreeTeams                                     = 4,
    FiveTeams                                      = 5,
    Max                                            = 6

};


// Enum  UAGame.EGameMatchType
enum class EGameMatchType : uint8_t
{
    None                                           = 0,
    Normal                                         = 1,
    Rank                                           = 2,
    Custom                                         = 3,
    Max                                            = 4

};


// Enum  UAGame.EUARoleID
enum class EUARoleID : uint8_t
{
    Sledge                                         = 0,
    Ash                                            = 1,
    Bandit                                         = 2,
    Castle                                         = 3,
    Glaz                                           = 4,
    Jager                                          = 5,
    Kapkan                                         = 6,
    Rook                                           = 7,
    Tharcher                                       = 8,
    Thermite                                       = 9,
    EUARoleID                                      = 10

};


// Enum  UAGame.EUATutorialDefaultInventory
enum class EUATutorialDefaultInventory : uint8_t
{
    None                                           = 0,
    TutorialAKM                                    = 1,
    TutorialHK416                                  = 2,
    EUATutorialDefaultInventory                    = 3

};


// Enum  UAGame.ETutorialBagTabType
enum class ETutorialBagTabType : uint8_t
{
    TutorialTabType                                = 0,
    TutorialTabType                                = 1,
    TutorialTabType                                = 2,
    TutorialTabType                                = 3,
    TutorialTabType                                = 4,
    TutorialTabType                                = 5,
    TutorialTabType                                = 100,
    TutorialTabType                                = 101,
    TutorialTabType                                = 102,
    TutorialTabType                                = 103,
    TutorialTabType                                = 104,
    TutorialTabType                                = 105

};


// Enum  UAGame.ETutorialCharacterState
enum class ETutorialCharacterState : uint8_t
{
    TutorialCharacterState                         = 0,
    TutorialCharacterState                         = 1,
    TutorialCharacterState                         = 2,
    TutorialCharacterState                         = 3,
    TutorialCharacterState                         = 4,
    TutorialCharacterState                         = 5,
    TutorialCharacterState                         = 6,
    TutorialCharacterState                         = 7,
    TutorialCharacterState                         = 8,
    TutorialCharacterState                         = 9,
    TutorialCharacterState                         = 10,
    TutorialCharacterState                         = 11

};


// Enum  UAGame.EBigMapTouchResponseType
enum class EBigMapTouchResponseType : uint8_t
{
    None                                           = 0,
    Global                                         = 1,
    Locality                                       = 2,
    EBigMapTouchResponseType                       = 3

};


// Enum  UAGame.ENewMapDisplayModel
enum class ENewMapDisplayModel : uint8_t
{
    Free                                           = 0,
    FollowViewCharacter                            = 1,
    ENewMapDisplayModel                            = 2

};


// Enum  UAGame.ENewMapTouchResponseType
enum class ENewMapTouchResponseType : uint8_t
{
    None                                           = 0,
    Global                                         = 1,
    Locality                                       = 2,
    ENewMapTouchResponseType                       = 3

};


// Enum  UAGame.EHUDWeaponSlotType
enum class EHUDWeaponSlotType : uint8_t
{
    FirstMainWeapon                                = 0,
    SecondMainWeapon                               = 1,
    AssistantWeapon                                = 2,
    MeleeWeapon                                    = 3,
    EHUDWeaponSlotType                             = 4

};


// Enum  UAGame.EWidgetTopParentActorType
enum class EWidgetTopParentActorType : uint8_t
{
    CharaterSelf                                   = 0,
    LootBox                                        = 1,
    CorpseBox                                      = 2,
    BagBox                                         = 3,
    EWidgetTopParentActorType                      = 4

};


// Enum  UAGame.EUAHUDNewBagWidgetIdentification
enum class EUAHUDNewBagWidgetIdentification : uint8_t
{
    Undefined                                      = 0,
    PickupsNearby                                  = 1,
    MyBag                                          = 2,
    MyBagIcon                                      = 3,
    VestBag                                        = 4,
    VestBagIcon                                    = 5,
    PickBag                                        = 6,
    Character                                      = 7,
    Inventory                                      = 8,
    Adapter                                        = 9,
    FirstMainWeapon                                = 10,
    SecondMainWeapon                               = 11,
    AssistWeapon                                   = 12,
    MeleeWeapon                                    = 13,
    ThrowWeapon                                    = 14,
    Armor                                          = 15,
    Armor                                          = 16,
    Pocket                                         = 17,
    SafeBox                                        = 18,
    SafeBoxIcon                                    = 19,
    Headset                                        = 20,
    FaceCover                                      = 21,
    EyeWear                                        = 22,
    ArmBand                                        = 23,
    DogTag                                         = 24,
    SplitItemWindow                                = 25,
    RotateItemWindow                               = 26,
    PickBagIcon                                    = 27,
    KeyBagIcon                                     = 28,
    KeyBag                                         = 29,
    ShortcutBar                                    = 30,
    MAX                                            = 31

};


// Enum  UAGame.EUAHUDBagWidgetIdentification
enum class EUAHUDBagWidgetIdentification : uint8_t
{
    Undefined                                      = 0,
    PickupsNearby                                  = 1,
    MyBag                                          = 2,
    Weapons                                        = 3,
    Apparel                                        = 4,
    Inventory                                      = 5,
    Adapter                                        = 6,
    FirstMainWeapon                                = 7,
    SecondMainWeapon                               = 8,
    AssistWeapon                                   = 9,
    MeleeWeapon                                    = 10,
    ThrowWeapon                                    = 11,
    Helmet                                         = 12,
    FlatJacket                                     = 13,
    Apparel                                        = 14,
    Apparel                                        = 15,
    Apparel                                        = 16,
    Apparel                                        = 17,
    Apparel                                        = 18,
    Apparel                                        = 19,
    MAX                                            = 20

};


// Enum  UAGame.EItemAction
enum class EItemAction : uint8_t
{
    ActionNone                                     = 0,
    ActionPickup                                   = 1,
    ActionUse                                      = 2,
    ActionAttach                                   = 3,
    ActionReload                                   = 4,
    ActionExchange                                 = 5,
    ActionDetach                                   = 6,
    ActionDiscard                                  = 7,
    ActionPickupPart                               = 8,
    ActionDiscardPart                              = 9,
    ActionRevertSkin                               = 10,
    ActionPutonSkin                                = 11,
    EItemAction                                    = 12

};


// Enum  UAGame.EBRPlayerState
enum class EBRPlayerState : uint8_t
{
    PlayerState                                    = 0,
    PlayerState                                    = 1,
    PlayerState                                    = 2,
    PlayerState                                    = 3,
    PlayerState                                    = 4,
    PlayerState                                    = 5,
    PlayerState                                    = 6,
    PlayerState                                    = 7,
    PlayerState                                    = 8,
    PlayerState                                    = 9

};


// Enum  UAGame.ELockLootContainerConditionType
enum class ELockLootContainerConditionType : uint8_t
{
    None                                           = 0,
    CostInventory                                  = 1,
    CheckMissionStatues                            = 2,
    ELockLootContainerConditionType                = 3

};


// Enum  UAGame.ETargetEscapeState
enum class ETargetEscapeState : uint8_t
{
    ETargetEscapeState                             = 0,
    ETargetEscapeState                             = 1,
    ETargetEscapeState                             = 2,
    ETargetEscapeState                             = 3,
    ETargetEscapeState                             = 4,
    ETargetEscapeState                             = 5

};


// Enum  UAGame.EFPSCCheckType
enum class EFPSCCheckType : uint8_t
{
    EFPSCCheckType                                 = 0,
    EFPSCCheckType                                 = 1,
    EFPSCCheckType                                 = 2,
    EFPSCCheckType                                 = 3,
    EFPSCCheckType                                 = 4

};


// Enum  UAGame.EAISceneEventType
enum class EAISceneEventType : uint8_t
{
    SceneEventTrigger                              = 0,
    SceneEventExpired                              = 1,
    SceneEventRemoved                              = 2,
    SceneEventCompleted                            = 3,
    EAISceneEventType                              = 4

};


// Enum  UAGame.EMissionObjective
enum class EMissionObjective : uint8_t
{
    EMissionObjective                              = 0,
    EMissionObjective                              = 1,
    EMissionObjective                              = 2

};


// Enum  UAGame.EMissionConditionTeamInfoType
enum class EMissionConditionTeamInfoType : uint8_t
{
    MaxCount                                       = 0,
    AliveCount                                     = 1,
    EscapeCount                                    = 2,
    DiedCount                                      = 3,
    EMissionConditionTeamInfoType                  = 4

};


// Enum  UAGame.EMissionConditionCharacterType
enum class EMissionConditionCharacterType : uint8_t
{
    ECharacterType                                 = 0,
    ECharacterType                                 = 1,
    ECharacterType                                 = 2

};


// Enum  UAGame.EMissionConditionCharacterStatus
enum class EMissionConditionCharacterStatus : uint8_t
{
    ECharacterType                                 = 0,
    ECharacterType                                 = 1,
    ECharacterType                                 = 2,
    ECharacterType                                 = 3,
    ECharacterType                                 = 4

};


// Enum  UAGame.EMissionConditionGameplayTagCheckType
enum class EMissionConditionGameplayTagCheckType : uint8_t
{
    AnyMatching                                    = 0,
    AllMatching                                    = 1,
    EMissionConditionGameplayTagCheckType          = 2

};


// Enum  UAGame.EMissionConditionItemType
enum class EMissionConditionItemType : uint8_t
{
    Weapon                                         = 0,
    Helmet                                         = 1,
    Vest                                           = 2,
    Headset                                        = 3,
    FaceCover                                      = 4,
    EyeWear                                        = 5,
    VestBag                                        = 6,
    Bag                                            = 7,
    EMissionConditionItemType                      = 8

};


// Enum  UAGame.EMissionConditionCustomAttribute
enum class EMissionConditionCustomAttribute : uint8_t
{
    TotalEndurance                                 = 0,
    EMissionConditionCustomAttribute               = 1

};


// Enum  UAGame.EMissionSubType
enum class EMissionSubType : uint8_t
{
    E                                              = 0,
    E                                              = 1,
    E                                              = 2,
    E                                              = 3,
    E                                              = 4,
    E                                              = 5,
    E                                              = 6,
    E                                              = 7,
    E                                              = 8

};


// Enum  UAGame.EDistributeMissionType
enum class EDistributeMissionType : uint8_t
{
    UrgentTask                                     = 0,
    DynamicEvent                                   = 1,
    ActivityEvent                                  = 2,
    EDistributeMissionType                         = 3

};


// Enum  UAGame.EUAParadropSupplyFrameMeshHideType
enum class EUAParadropSupplyFrameMeshHideType : uint8_t
{
    Never                                          = 0,
    AfterLanding                                   = 1,
    Always                                         = 2,
    EUAParadropSupplyFrameMeshHideType             = 3

};


// Enum  UAGame.EWaitingReportCallback
enum class EWaitingReportCallback : uint8_t
{
    None                                           = 0,
    OnRep                                          = 1,
    OnRep                                          = 2,
    OnRep                                          = 3,
    EWaitingReportCallback                         = 4

};


// Enum  UAGame.EEmergencyTaskType
enum class EEmergencyTaskType : uint8_t
{
    Normal                                         = 0,
    Activity                                       = 1,
    EEmergencyTaskType                             = 2

};


// Enum  UAGame.EQuestUnLockType
enum class EQuestUnLockType : uint8_t
{
    QuestUnLock                                    = 0,
    QuestUnLock                                    = 1,
    QuestUnLock                                    = 2,
    QuestUnLock                                    = 3

};


// Enum  UAGame.EQuestCharacterType
enum class EQuestCharacterType : uint8_t
{
    QuestCharacterType                             = 0,
    QuestCharacterType                             = 1,
    QuestCharacterType                             = 2,
    QuestCharacterType                             = 3,
    QuestCharacterType                             = 4

};


// Enum  UAGame.EClassRepNodeMapping
enum class EClassRepNodeMapping : uint8_t
{
    NotRouted                                      = 0,
    RelevantAllConnections                         = 1,
    Spatialize                                     = 2,
    Spatialize                                     = 3,
    Spatialize                                     = 4,
    Spatialize                                     = 5,
    RelevantTeam                                   = 6,
    RelevantFollowOwner                            = 7,
    RelevantOwnerConnections                       = 8,
    RelevantConnectionsGroup                       = 9,
    DynamicPolicy                                  = 10,
    RelvantAI                                      = 11,
    RelevantFaction                                = 12,
    SimpleDistanceRelevancy                        = 13,
    EClassRepNodeMapping                           = 14

};


// Enum  UAGame.EEscapeExploreState
enum class EEscapeExploreState : uint8_t
{
    EEscapeExploreState                            = 0,
    EEscapeExploreState                            = 1,
    EEscapeExploreState                            = 2,
    EEscapeExploreState                            = 3,
    EEscapeExploreState                            = 4,
    EEscapeExploreState                            = 5

};


// Enum  UAGame.ESignType
enum class ESignType : uint8_t
{
    EscapeSign                                     = 0,
    QuestSign                                      = 1,
    PlayerSign                                     = 2,
    None                                           = 3,
    ESignType                                      = 4

};


// Enum  UAGame.EDetailBoardType
enum class EDetailBoardType : uint8_t
{
    TaskIcon                                       = 0,
    EscapeIcon                                     = 1,
    ChaseTargetIcon                                = 2,
    EDetailBoardType                               = 3

};


// Enum  UAGame.EMoveCheckStyle
enum class EMoveCheckStyle : uint8_t
{
    OnlyMove                                       = 0,
    OnlyAdd                                        = 1,
    EMoveCheckStyle                                = 2

};


// Enum  UAGame.EBattleIntensityExpectation
enum class EBattleIntensityExpectation : uint8_t
{
    None                                           = 0,
    Low                                            = 1,
    Normal                                         = 2,
    High                                           = 3,
    VeryHigh                                       = 4,
    EBattleIntensityExpectation                    = 5

};


// Enum  UAGame.ETraceMarkOperatorType
enum class ETraceMarkOperatorType : uint8_t
{
    None                                           = 0,
    Trace                                          = 1,
    Mark                                           = 2,
    All                                            = 3,
    InfomationTrace                                = 4,
    ETraceMarkOperatorType                         = 5

};


// Enum  UAGame.ETraceableMarkType
enum class ETraceableMarkType : uint8_t
{
    None                                           = 0,
    QuestPoint                                     = 1,
    QuestArea                                      = 2,
    ChaseActivity                                  = 3,
    Inventory                                      = 4,
    InteractItem                                   = 5,
    Area                                           = 6,
    EscapePoint                                    = 7,
    Character                                      = 8,
    AISpawnArea                                    = 9,
    SecretQuest                                    = 10,
    Point                                          = 11,
    DossEscapePoint                                = 12,
    All                                            = 13,
    ETraceableMarkType                             = 14

};


// Enum  CoreUObject.ELifetimeCondition
enum class ELifetimeCondition : uint8_t
{
    COND                                           = 0,
    COND                                           = 1,
    COND                                           = 2,
    COND                                           = 3,
    COND                                           = 4,
    COND                                           = 5,
    COND                                           = 6,
    COND                                           = 7,
    COND                                           = 8,
    COND                                           = 9,
    COND                                           = 10,
    COND                                           = 11,
    COND                                           = 12,
    COND                                           = 13,
    COND                                           = 14,
    COND                                           = 15,
    COND                                           = 17,
    COND                                           = 18

};


// Enum  CoreUObject.EDataValidationResult
enum class EDataValidationResult : uint8_t
{
    Invalid                                        = 0,
    Valid                                          = 1,
    NotValidated                                   = 2,
    EDataValidationResult                          = 3

};


// Enum  CoreUObject.EAppMsgType
enum class EAppMsgType : uint8_t
{
    Ok                                             = 0,
    YesNo                                          = 1,
    OkCancel                                       = 2,
    YesNoCancel                                    = 3,
    CancelRetryContinue                            = 4,
    YesNoYesAllNoAll                               = 5,
    YesNoYesAllNoAllCancel                         = 6,
    YesNoYesAll                                    = 7,
    EAppMsgType                                    = 8

};


// Enum  CoreUObject.EAppReturnType
enum class EAppReturnType : uint8_t
{
    No                                             = 0,
    Yes                                            = 1,
    YesAll                                         = 2,
    NoAll                                          = 3,
    Cancel                                         = 4,
    Ok                                             = 5,
    Retry                                          = 6,
    Continue                                       = 7,
    EAppReturnType                                 = 8

};


// Enum  CoreUObject.EPropertyAccessChangeNotifyMode
enum class EPropertyAccessChangeNotifyMode : uint8_t
{
    Default                                        = 0,
    Never                                          = 1,
    Always                                         = 2,
    EPropertyAccessChangeNotifyMode                = 3

};


// Enum  CoreUObject.EUnit
enum class EUnit : uint8_t
{
    Micrometers                                    = 0,
    Millimeters                                    = 1,
    Centimeters                                    = 2,
    Meters                                         = 3,
    Kilometers                                     = 4,
    Inches                                         = 5,
    Feet                                           = 6,
    Yards                                          = 7,
    Miles                                          = 8,
    Lightyears                                     = 9,
    Degrees                                        = 10,
    Radians                                        = 11,
    MetersPerSecond                                = 12,
    KilometersPerHour                              = 13,
    MilesPerHour                                   = 14,
    Celsius                                        = 15,
    Farenheit                                      = 16,
    Kelvin                                         = 17,
    Micrograms                                     = 18,
    Milligrams                                     = 19,
    Grams                                          = 20,
    Kilograms                                      = 21,
    MetricTons                                     = 22,
    Ounces                                         = 23,
    Pounds                                         = 24,
    Stones                                         = 25,
    Newtons                                        = 26,
    PoundsForce                                    = 27,
    KilogramsForce                                 = 28,
    Hertz                                          = 29,
    Kilohertz                                      = 30,
    Megahertz                                      = 31,
    Gigahertz                                      = 32,
    RevolutionsPerMinute                           = 33,
    Bytes                                          = 34,
    Kilobytes                                      = 35,
    Megabytes                                      = 36,
    Gigabytes                                      = 37,
    Terabytes                                      = 38,
    Lumens                                         = 39,
    Milliseconds                                   = 43,
    Seconds                                        = 44,
    Minutes                                        = 45,
    Hours                                          = 46,
    Days                                           = 47,
    Months                                         = 48,
    Years                                          = 49,
    Multiplier                                     = 52,
    Percentage                                     = 51,
    Unspecified                                    = 53,
    EUnit                                          = 54

};


// Enum  CoreUObject.EPixelFormat
enum class EPixelFormat : uint8_t
{
    PF                                             = 0,
    PF                                             = 1,
    PF                                             = 2,
    PF                                             = 3,
    PF                                             = 4,
    PF                                             = 5,
    PF                                             = 6,
    PF                                             = 7,
    PF                                             = 8,
    PF                                             = 9,
    PF                                             = 10,
    PF                                             = 11,
    PF                                             = 12,
    PF                                             = 13,
    PF                                             = 14,
    PF                                             = 15,
    PF                                             = 16,
    PF                                             = 17,
    PF                                             = 18,
    PF                                             = 19,
    PF                                             = 20,
    PF                                             = 21,
    PF                                             = 22,
    PF                                             = 23,
    PF                                             = 24,
    PF                                             = 25,
    PF                                             = 26,
    PF                                             = 27,
    PF                                             = 28,
    PF                                             = 29,
    PF                                             = 30,
    PF                                             = 31,
    PF                                             = 32,
    PF                                             = 33,
    PF                                             = 34,
    PF                                             = 35,
    PF                                             = 36,
    PF                                             = 37,
    PF                                             = 38,
    PF                                             = 39,
    PF                                             = 40,
    PF                                             = 41,
    PF                                             = 42,
    PF                                             = 43,
    PF                                             = 44,
    PF                                             = 45,
    PF                                             = 46,
    PF                                             = 47,
    PF                                             = 48,
    PF                                             = 49,
    PF                                             = 50,
    PF                                             = 51,
    PF                                             = 52,
    PF                                             = 53,
    PF                                             = 54,
    PF                                             = 55,
    PF                                             = 56,
    PF                                             = 57,
    PF                                             = 58,
    PF                                             = 59,
    PF                                             = 60,
    PF                                             = 61,
    PF                                             = 62,
    PF                                             = 63,
    PF                                             = 64,
    PF                                             = 65,
    PF                                             = 66,
    PF                                             = 67,
    PF                                             = 68,
    PF                                             = 69,
    PF                                             = 70,
    PF                                             = 72

};


// Enum  CoreUObject.EAxis
enum class EAxis : uint8_t
{
    None                                           = 0,
    X                                              = 1,
    Y                                              = 2,
    Z                                              = 3,
    EAxis                                          = 4

};


// Enum  CoreUObject.ELogTimes
enum class ELogTimes : uint8_t
{
    None                                           = 0,
    UTC                                            = 1,
    SinceGStartTime                                = 2,
    Local                                          = 3,
    ELogTimes                                      = 4

};


// Enum  CoreUObject.ESearchDir
enum class ESearchDir : uint8_t
{
    FromStart                                      = 0,
    FromEnd                                        = 1,
    ESearchDir                                     = 2

};


// Enum  CoreUObject.ESearchCase
enum class ESearchCase : uint8_t
{
    CaseSensitive                                  = 0,
    IgnoreCase                                     = 1,
    ESearchCase                                    = 2

};


// Enum  InputCore.EConsoleForGamepadLabels
enum class EConsoleForGamepadLabels : uint8_t
{
    None                                           = 0,
    XBoxOne                                        = 1,
    PS4                                            = 2,
    EConsoleForGamepadLabels                       = 3

};


// Enum  SlateCore.EFontLayoutMethod
enum class EFontLayoutMethod : uint8_t
{
    Metrics                                        = 0,
    BoundingBox                                    = 1,
    EFontLayoutMethod                              = 2

};


// Enum  SlateCore.EFontLoadingPolicy
enum class EFontLoadingPolicy : uint8_t
{
    LazyLoad                                       = 0,
    Stream                                         = 1,
    Inline                                         = 2,
    EFontLoadingPolicy                             = 3

};


// Enum  SlateCore.EFontHinting
enum class EFontHinting : uint8_t
{
    Default                                        = 0,
    Auto                                           = 1,
    AutoLight                                      = 2,
    Monochrome                                     = 3,
    None                                           = 4,
    EFontHinting                                   = 5

};


// Enum  SlateCore.EFocusCause
enum class EFocusCause : uint8_t
{
    Mouse                                          = 0,
    Navigation                                     = 1,
    SetDirectly                                    = 2,
    Cleared                                        = 3,
    OtherWidgetLostFocus                           = 4,
    WindowActivate                                 = 5,
    EFocusCause                                    = 6

};


// Enum  SlateCore.ESlateDebuggingFocusEvent
enum class ESlateDebuggingFocusEvent : uint8_t
{
    FocusChanging                                  = 0,
    FocusLost                                      = 1,
    FocusReceived                                  = 2,
    MAX                                            = 3

};


// Enum  SlateCore.ESlateDebuggingNavigationMethod
enum class ESlateDebuggingNavigationMethod : uint8_t
{
    Unknown                                        = 0,
    Explicit                                       = 1,
    CustomDelegateBound                            = 2,
    CustomDelegateUnbound                          = 3,
    NextOrPrevious                                 = 4,
    HitTestGrid                                    = 5,
    ESlateDebuggingNavigationMethod                = 6

};


// Enum  SlateCore.ESlateDebuggingStateChangeEvent
enum class ESlateDebuggingStateChangeEvent : uint8_t
{
    MouseCaptureGained                             = 0,
    MouseCaptureLost                               = 1,
    ESlateDebuggingStateChangeEvent                = 2

};


// Enum  SlateCore.ESlateDebuggingInputEvent
enum class ESlateDebuggingInputEvent : uint8_t
{
    MouseMove                                      = 0,
    MouseEnter                                     = 1,
    MouseLeave                                     = 2,
    PreviewMouseButtonDown                         = 3,
    MouseButtonDown                                = 4,
    MouseButtonUp                                  = 5,
    MouseButtonDoubleClick                         = 6,
    MouseWheel                                     = 7,
    TouchStart                                     = 8,
    TouchEnd                                       = 9,
    TouchForceChanged                              = 10,
    TouchFirstMove                                 = 11,
    TouchMoved                                     = 12,
    DragDetected                                   = 13,
    DragEnter                                      = 14,
    DragLeave                                      = 15,
    DragOver                                       = 16,
    DragDrop                                       = 17,
    DropMessage                                    = 18,
    PreviewKeyDown                                 = 19,
    KeyDown                                        = 20,
    KeyUp                                          = 21,
    KeyChar                                        = 22,
    AnalogInput                                    = 23,
    TouchGesture                                   = 24,
    MotionDetected                                 = 25,
    MAX                                            = 26

};


// Enum  SlateCore.EScrollDirection
enum class EScrollDirection : uint8_t
{
    Scroll                                         = 0,
    Scroll                                         = 1,
    Scroll                                         = 2

};


// Enum  SlateCore.EOrientation
enum class EOrientation : uint8_t
{
    Orient                                         = 0,
    Orient                                         = 1,
    Orient                                         = 2

};


// Enum  SlateCore.EVerticalAlignment
enum class EVerticalAlignment : uint8_t
{
    VAlign                                         = 0,
    VAlign                                         = 1,
    VAlign                                         = 2,
    VAlign                                         = 3,
    VAlign                                         = 4

};


// Enum  SlateCore.EHorizontalAlignment
enum class EHorizontalAlignment : uint8_t
{
    HAlign                                         = 0,
    HAlign                                         = 1,
    HAlign                                         = 2,
    HAlign                                         = 3,
    HAlign                                         = 4

};


// Enum  SlateCore.ENavigationGenesis
enum class ENavigationGenesis : uint8_t
{
    Keyboard                                       = 0,
    Controller                                     = 1,
    User                                           = 2,
    ENavigationGenesis                             = 3

};


// Enum  SlateCore.ENavigationSource
enum class ENavigationSource : uint8_t
{
    FocusedWidget                                  = 0,
    WidgetUnderCursor                              = 1,
    ENavigationSource                              = 2

};


// Enum  SlateCore.EUINavigationAction
enum class EUINavigationAction : uint8_t
{
    Accept                                         = 0,
    Back                                           = 1,
    Num                                            = 2,
    Invalid                                        = 3,
    EUINavigationAction                            = 4

};


// Enum  SlateCore.EButtonPressMethod
enum class EButtonPressMethod : uint8_t
{
    DownAndUp                                      = 0,
    ButtonPress                                    = 1,
    ButtonRelease                                  = 2,
    EButtonPressMethod                             = 3

};


// Enum  SlateCore.EButtonTouchMethod
enum class EButtonTouchMethod : uint8_t
{
    DownAndUp                                      = 0,
    Down                                           = 1,
    PreciseTap                                     = 2,
    EButtonTouchMethod                             = 3

};


// Enum  SlateCore.EButtonClickMethod
enum class EButtonClickMethod : uint8_t
{
    DownAndUp                                      = 0,
    MouseDown                                      = 1,
    MouseUp                                        = 2,
    PreciseClick                                   = 3,
    EButtonClickMethod                             = 4

};


// Enum  SlateCore.ESlateCheckBoxType
enum class ESlateCheckBoxType : uint8_t
{
    CheckBox                                       = 0,
    ToggleButton                                   = 1,
    ESlateCheckBoxType                             = 2

};


// Enum  SlateCore.ESlateParentWindowSearchMethod
enum class ESlateParentWindowSearchMethod : uint8_t
{
    ActiveWindow                                   = 0,
    MainWindow                                     = 1,
    ESlateParentWindowSearchMethod                 = 2

};


// Enum  SlateCore.EConsumeMouseWheel
enum class EConsumeMouseWheel : uint8_t
{
    WhenScrollingPossible                          = 0,
    Always                                         = 1,
    Never                                          = 2,
    EConsumeMouseWheel                             = 3

};


// Enum  ImageWrapper.EBitmapCSType
enum class EBitmapCSType : uint8_t
{
    BCST                                           = 0,
    BCST                                           = 1934772034,
    BCST                                           = 1466527264,
    BCST                                           = 1279872587,
    BCST                                           = 1296188740,
    BCST                                           = 1934772035

};


// Enum  ImageWrapper.EBitmapHeaderVersion
enum class EBitmapHeaderVersion : uint8_t
{
    BHV                                            = 0,
    BHV                                            = 1,
    BHV                                            = 2,
    BHV                                            = 3,
    BHV                                            = 4,
    BHV                                            = 5

};


// Enum  Slate.ETableViewMode
enum class ETableViewMode : uint8_t
{
    List                                           = 0,
    Tile                                           = 1,
    Tree                                           = 2,
    ETableViewMode                                 = 3

};


// Enum  Slate.ESelectionMode
enum class ESelectionMode : uint8_t
{
    None                                           = 0,
    Single                                         = 1,
    SingleToggle                                   = 2,
    Multi                                          = 3,
    ESelectionMode                                 = 4

};


// Enum  Slate.EMultiBlockType
enum class EMultiBlockType : uint8_t
{
    None                                           = 0,
    ButtonRow                                      = 1,
    EditableText                                   = 2,
    Heading                                        = 3,
    MenuEntry                                      = 4,
    Separator                                      = 5,
    ToolBarButton                                  = 6,
    ToolBarComboButton                             = 7,
    Widget                                         = 8,
    EMultiBlockType                                = 9

};


// Enum  Slate.EMultiBoxType
enum class EMultiBoxType : uint8_t
{
    MenuBar                                        = 0,
    ToolBar                                        = 1,
    VerticalToolBar                                = 2,
    UniformToolBar                                 = 3,
    Menu                                           = 4,
    ButtonRow                                      = 5,
    EMultiBoxType                                  = 6

};


// Enum  Slate.EProgressBarFillType
enum class EProgressBarFillType : uint8_t
{
    LeftToRight                                    = 0,
    RightToLeft                                    = 1,
    FillFromCenter                                 = 2,
    TopToBottom                                    = 3,
    BottomToTop                                    = 4,
    EProgressBarFillType                           = 5

};


// Enum  Slate.EStretch
enum class EStretch : uint8_t
{
    None                                           = 0,
    Fill                                           = 1,
    ScaleToFit                                     = 2,
    ScaleToFitX                                    = 3,
    ScaleToFitY                                    = 4,
    ScaleToFill                                    = 5,
    ScaleBySafeZone                                = 6,
    UserSpecified                                  = 7,
    EStretch                                       = 8

};


// Enum  Slate.EStretchDirection
enum class EStretchDirection : uint8_t
{
    Both                                           = 0,
    DownOnly                                       = 1,
    UpOnly                                         = 2,
    EStretchDirection                              = 3

};


// Enum  Slate.EScrollWhenFocusChanges
enum class EScrollWhenFocusChanges : uint8_t
{
    NoScroll                                       = 0,
    InstantScroll                                  = 1,
    AnimatedScroll                                 = 2,
    EScrollWhenFocusChanges                        = 3

};


// Enum  Slate.EDescendantScrollDestination
enum class EDescendantScrollDestination : uint8_t
{
    IntoView                                       = 0,
    TopOrLeft                                      = 1,
    Center                                         = 2,
    EDescendantScrollDestination                   = 3

};


// Enum  Slate.EListItemAlignment
enum class EListItemAlignment : uint8_t
{
    EvenlyDistributed                              = 0,
    EvenlySize                                     = 1,
    EvenlyWide                                     = 2,
    LeftAligned                                    = 3,
    RightAligned                                   = 4,
    CenterAligned                                  = 5,
    Fill                                           = 6,
    EListItemAlignment                             = 7

};


// Enum  Slate.ETextTransformPolicy
enum class ETextTransformPolicy : uint8_t
{
    None                                           = 0,
    ToLower                                        = 1,
    ToUpper                                        = 2,
    ETextTransformPolicy                           = 3

};


// Enum  Slate.ECustomizedToolMenuVisibility
enum class ECustomizedToolMenuVisibility : uint8_t
{
    None                                           = 0,
    Visible                                        = 1,
    Hidden                                         = 2,
    ECustomizedToolMenuVisibility                  = 3

};


// Enum  Slate.EMultipleKeyBindingIndex
enum class EMultipleKeyBindingIndex : uint8_t
{
    Primary                                        = 0,
    Secondary                                      = 1,
    NumChords                                      = 2,
    EMultipleKeyBindingIndex                       = 3

};


// Enum  Slate.EUserInterfaceActionType
enum class EUserInterfaceActionType : uint8_t
{
    None                                           = 0,
    Button                                         = 1,
    ToggleButton                                   = 2,
    RadioButton                                    = 3,
    Check                                          = 4,
    CollapsedButton                                = 5,
    EUserInterfaceActionType                       = 6

};


// Enum  ImageWriteQueue.EDesiredImageFormat
enum class EDesiredImageFormat : uint8_t
{
    PNG                                            = 0,
    JPG                                            = 1,
    BMP                                            = 2,
    EXR                                            = 3,
    EDesiredImageFormat                            = 4

};


// Enum  MaterialShaderQualitySettings.EMobileShadowQuality
enum class EMobileShadowQuality : uint8_t
{
    NoFiltering                                    = 0,
    PCF                                            = 1,
    PCF                                            = 2,
    PCF                                            = 3,
    EMobileShadowQuality                           = 4

};


// Enum  Renderer.EReSTIRMode
enum class EReSTIRMode : uint8_t
{
    InputOnly                                      = 0,
    TemporalOnly                                   = 1,
    TemporalAndBiasedSpatial                       = 2,
    TemporalAndUnbiasedSpatial                     = 3,
    EReSTIRMode                                    = 4

};


// Enum  EngineSettings.ESubLevelStripMode
enum class ESubLevelStripMode : uint8_t
{
    ExactClass                                     = 0,
    IsChildOf                                      = 1,
    ESubLevelStripMode                             = 2

};


// Enum  EngineSettings.EFourPlayerSplitScreenType
enum class EFourPlayerSplitScreenType : uint8_t
{
    Grid                                           = 0,
    Vertical                                       = 1,
    Horizontal                                     = 2,
    EFourPlayerSplitScreenType                     = 3

};


// Enum  EngineSettings.EThreePlayerSplitScreenType
enum class EThreePlayerSplitScreenType : uint8_t
{
    FavorTop                                       = 0,
    FavorBottom                                    = 1,
    Vertical                                       = 2,
    Horizontal                                     = 3,
    EThreePlayerSplitScreenType                    = 4

};


// Enum  EngineSettings.ETwoPlayerSplitScreenType
enum class ETwoPlayerSplitScreenType : uint8_t
{
    Horizontal                                     = 0,
    Vertical                                       = 1,
    ETwoPlayerSplitScreenType                      = 2

};


// Enum  Chaos.EClusterUnionMethod
enum class EClusterUnionMethod : uint8_t
{
    PointImplicit                                  = 0,
    DelaunayTriangulation                          = 1,
    MinimalSpanningSubsetDelaunayTriangulation     = 2,
    PointImplicitAugmentedWithMinimalDelaunay      = 3,
    None                                           = 4,
    EClusterUnionMethod                            = 5

};


// Enum  Chaos.EFieldPhysicsDefaultFields
enum class EFieldPhysicsDefaultFields : uint8_t
{
    Field                                          = 0,
    Field                                          = 1,
    Field                                          = 2,
    Field                                          = 3,
    Field                                          = 4,
    Field                                          = 5,
    Field                                          = 6

};


// Enum  Chaos.EFieldPhysicsType
enum class EFieldPhysicsType : uint8_t
{
    Field                                          = 0,
    Field                                          = 1,
    Field                                          = 2,
    Field                                          = 3,
    Field                                          = 4,
    Field                                          = 5,
    Field                                          = 6,
    Field                                          = 7,
    Field                                          = 8,
    Field                                          = 9,
    Field                                          = 10,
    Field                                          = 11,
    Field                                          = 12,
    Field                                          = 13,
    Field                                          = 14,
    Field                                          = 15,
    Field                                          = 16,
    Field                                          = 17

};


// Enum  Chaos.EFieldFalloffType
enum class EFieldFalloffType : uint8_t
{
    Field                                          = 0,
    Field                                          = 1,
    Field                                          = 2,
    Field                                          = 3,
    Field                                          = 4,
    Field                                          = 5

};


// Enum  Chaos.EFieldResolutionType
enum class EFieldResolutionType : uint8_t
{
    Field                                          = 0,
    Field                                          = 1,
    Field                                          = 2,
    Field                                          = 3

};


// Enum  Chaos.EFieldCullingOperationType
enum class EFieldCullingOperationType : uint8_t
{
    Field                                          = 0,
    Field                                          = 1,
    Field                                          = 2,
    Field                                          = 3

};


// Enum  Chaos.EFieldOperationType
enum class EFieldOperationType : uint8_t
{
    Field                                          = 0,
    Field                                          = 1,
    Field                                          = 2,
    Field                                          = 3,
    Field                                          = 4

};


// Enum  Chaos.ESetMaskConditionType
enum class ESetMaskConditionType : uint8_t
{
    Field                                          = 0,
    Field                                          = 1,
    Field                                          = 2,
    Field                                          = 3

};


// Enum  Chaos.EEmissionPatternTypeEnum
enum class EEmissionPatternTypeEnum : uint8_t
{
    Chaos                                          = 0,
    Chaos                                          = 1,
    Chaos                                          = 2

};


// Enum  Chaos.EInitialVelocityTypeEnum
enum class EInitialVelocityTypeEnum : uint8_t
{
    Chaos                                          = 0,
    Chaos                                          = 1,
    Chaos                                          = 2

};


// Enum  Chaos.EGeometryCollectionPhysicsTypeEnum
enum class EGeometryCollectionPhysicsTypeEnum : uint8_t
{
    Chaos                                          = 0,
    Chaos                                          = 1,
    Chaos                                          = 2,
    Chaos                                          = 3,
    Chaos                                          = 4,
    Chaos                                          = 5,
    Chaos                                          = 6,
    Chaos                                          = 7,
    Chaos                                          = 8

};


// Enum  Chaos.EObjectStateTypeEnum
enum class EObjectStateTypeEnum : uint8_t
{
    Chaos                                          = 0,
    Chaos                                          = 1,
    Chaos                                          = 2,
    Chaos                                          = 3,
    Chaos                                          = 4,
    Chaos                                          = 100,
    Chaos                                          = 101

};


// Enum  Chaos.EImplicitTypeEnum
enum class EImplicitTypeEnum : uint8_t
{
    Chaos                                          = 0,
    Chaos                                          = 1,
    Chaos                                          = 2,
    Chaos                                          = 3,
    Chaos                                          = 4,
    Chaos                                          = 5

};


// Enum  Chaos.ECollisionTypeEnum
enum class ECollisionTypeEnum : uint8_t
{
    Chaos                                          = 0,
    Chaos                                          = 1,
    Chaos                                          = 2

};


// Enum  Chaos.EChaosBufferMode
enum class EChaosBufferMode : uint8_t
{
    Double                                         = 0,
    Triple                                         = 1,
    Num                                            = 2,
    Invalid                                        = 3,
    EChaosBufferMode                               = 4

};


// Enum  Chaos.EChaosThreadingMode
enum class EChaosThreadingMode : uint8_t
{
    DedicatedThread                                = 0,
    TaskGraph                                      = 1,
    SingleThread                                   = 2,
    Num                                            = 3,
    Invalid                                        = 4,
    EChaosThreadingMode                            = 5

};


// Enum  Chaos.EChaosSolverTickMode
enum class EChaosSolverTickMode : uint8_t
{
    Fixed                                          = 0,
    Variable                                       = 1,
    VariableCapped                                 = 2,
    VariableCappedWithTarget                       = 3,
    EChaosSolverTickMode                           = 4

};


// Enum  Chaos.EGeometryCollectionCacheType
enum class EGeometryCollectionCacheType : uint8_t
{
    None                                           = 0,
    Record                                         = 1,
    Play                                           = 2,
    RecordAndPlay                                  = 3,
    EGeometryCollectionCacheType                   = 4

};


// Enum  PhysicsCore.EBodyCollisionResponse
enum class EBodyCollisionResponse : uint8_t
{
    BodyCollision                                  = 0,
    BodyCollision                                  = 1,
    BodyCollision                                  = 2

};


// Enum  PhysicsCore.EPhysicsType
enum class EPhysicsType : uint8_t
{
    PhysType                                       = 0,
    PhysType                                       = 1,
    PhysType                                       = 2,
    PhysType                                       = 3

};


// Enum  PhysicsCore.ECollisionTraceFlag
enum class ECollisionTraceFlag : uint8_t
{
    CTF                                            = 0,
    CTF                                            = 1,
    CTF                                            = 2,
    CTF                                            = 3,
    CTF                                            = 4

};


// Enum  PhysicsCore.ELinearConstraintMotion
enum class ELinearConstraintMotion : uint8_t
{
    LCM                                            = 0,
    LCM                                            = 1,
    LCM                                            = 2,
    LCM                                            = 3

};


// Enum  PhysicsCore.EConstraintFrame
enum class EConstraintFrame : uint8_t
{
    Frame1                                         = 0,
    Frame2                                         = 1,
    EConstraintFrame                               = 2

};


// Enum  PhysicsCore.EAngularConstraintMotion
enum class EAngularConstraintMotion : uint8_t
{
    ACM                                            = 0,
    ACM                                            = 1,
    ACM                                            = 2,
    ACM                                            = 3

};


// Enum  PhysicsCore.ESleepFamily
enum class ESleepFamily : uint8_t
{
    Normal                                         = 0,
    Sensitive                                      = 1,
    Custom                                         = 2,
    ESleepFamily                                   = 3

};


// Enum  PhysicsCore.ERadialImpulseFalloff
enum class ERadialImpulseFalloff : uint8_t
{
    RIF                                            = 0,
    RIF                                            = 1,
    RIF                                            = 2

};


// Enum  PhysicsCore.EFrictionCombineMode
enum class EFrictionCombineMode : uint8_t
{
    Average                                        = 0,
    Min                                            = 1,
    Multiply                                       = 2,
    Max                                            = 3

};


// Enum  MRMesh.EMeshTrackerVertexColorMode
enum class EMeshTrackerVertexColorMode : uint8_t
{
    None                                           = 0,
    Confidence                                     = 1,
    Block                                          = 2,
    EMeshTrackerVertexColorMode                    = 3

};


// Enum  AugmentedReality.EARTrackingState
enum class EARTrackingState : uint8_t
{
    Unknown                                        = 0,
    Tracking                                       = 1,
    NotTracking                                    = 2,
    StoppedTracking                                = 3,
    EARTrackingState                               = 4

};


// Enum  AugmentedReality.EGeoAnchorComponentDebugMode
enum class EGeoAnchorComponentDebugMode : uint8_t
{
    None                                           = 0,
    ShowGeoData                                    = 1,
    EGeoAnchorComponentDebugMode                   = 2

};


// Enum  AugmentedReality.EPoseComponentDebugMode
enum class EPoseComponentDebugMode : uint8_t
{
    None                                           = 0,
    ShowSkeleton                                   = 1,
    EPoseComponentDebugMode                        = 2

};


// Enum  AugmentedReality.EQRCodeComponentDebugMode
enum class EQRCodeComponentDebugMode : uint8_t
{
    None                                           = 0,
    ShowQRCode                                     = 1,
    EQRCodeComponentDebugMode                      = 2

};


// Enum  AugmentedReality.EImageComponentDebugMode
enum class EImageComponentDebugMode : uint8_t
{
    None                                           = 0,
    ShowDetectedImage                              = 1,
    EImageComponentDebugMode                       = 2

};


// Enum  AugmentedReality.EARFaceTransformMixing
enum class EARFaceTransformMixing : uint8_t
{
    ComponentOnly                                  = 0,
    ComponentLocationTrackedRotation               = 1,
    ComponentWithTracked                           = 2,
    TrackingOnly                                   = 3,
    EARFaceTransformMixing                         = 4

};


// Enum  AugmentedReality.EFaceComponentDebugMode
enum class EFaceComponentDebugMode : uint8_t
{
    None                                           = 0,
    ShowEyeVectors                                 = 1,
    ShowFaceMesh                                   = 2,
    EFaceComponentDebugMode                        = 3

};


// Enum  AugmentedReality.EPlaneComponentDebugMode
enum class EPlaneComponentDebugMode : uint8_t
{
    None                                           = 0,
    ShowNetworkRole                                = 1,
    ShowClassification                             = 2,
    EPlaneComponentDebugMode                       = 3

};


// Enum  AugmentedReality.EARSessionConfigFlags
enum class EARSessionConfigFlags : uint8_t
{
    None                                           = 0,
    GenerateMeshData                               = 1,
    RenderMeshDataInWireframe                      = 2,
    GenerateCollisionForMeshData                   = 4,
    GenerateNavMeshForMeshData                     = 8,
    UseMeshDataForOcclusion                        = 16,
    EARSessionConfigFlags                          = 17

};


// Enum  AugmentedReality.EARServicePermissionRequestResult
enum class EARServicePermissionRequestResult : uint8_t
{
    Granted                                        = 0,
    Denied                                         = 1,
    EARServicePermissionRequestResult              = 2

};


// Enum  AugmentedReality.EARServiceInstallRequestResult
enum class EARServiceInstallRequestResult : uint8_t
{
    Installed                                      = 0,
    DeviceNotCompatible                            = 1,
    UserDeclinedInstallation                       = 2,
    FatalError                                     = 3,
    EARServiceInstallRequestResult                 = 4

};


// Enum  AugmentedReality.EARServiceAvailability
enum class EARServiceAvailability : uint8_t
{
    UnknownError                                   = 0,
    UnknownChecking                                = 1,
    UnknownTimedOut                                = 2,
    UnsupportedDeviceNotCapable                    = 3,
    SupportedNotInstalled                          = 4,
    SupportedVersionTooOld                         = 5,
    SupportedInstalled                             = 6,
    EARServiceAvailability                         = 7

};


// Enum  AugmentedReality.EARGeoTrackingAccuracy
enum class EARGeoTrackingAccuracy : uint8_t
{
    Undetermined                                   = 0,
    Low                                            = 1,
    Medium                                         = 2,
    High                                           = 3,
    EARGeoTrackingAccuracy                         = 4

};


// Enum  AugmentedReality.EARGeoTrackingStateReason
enum class EARGeoTrackingStateReason : uint8_t
{
    None                                           = 0,
    NotAvailableAtLocation                         = 1,
    NeedLocationPermissions                        = 2,
    DevicePointedTooLow                            = 3,
    WorldTrackingUnstable                          = 4,
    WaitingForLocation                             = 5,
    GeoDataNotLoaded                               = 6,
    VisualLocalizationFailed                       = 7,
    WaitingForAvailabilityCheck                    = 8,
    EARGeoTrackingStateReason                      = 9

};


// Enum  AugmentedReality.EARGeoTrackingState
enum class EARGeoTrackingState : uint8_t
{
    Initializing                                   = 0,
    Localized                                      = 1,
    Localizing                                     = 2,
    NotAvailable                                   = 3,
    EARGeoTrackingState                            = 4

};


// Enum  AugmentedReality.EARSceneReconstruction
enum class EARSceneReconstruction : uint8_t
{
    None                                           = 0,
    MeshOnly                                       = 1,
    MeshWithClassification                         = 2,
    EARSceneReconstruction                         = 3

};


// Enum  AugmentedReality.EARSessionTrackingFeature
enum class EARSessionTrackingFeature : uint8_t
{
    None                                           = 0,
    PoseDetection2D                                = 1,
    PersonSegmentation                             = 2,
    PersonSegmentationWithDepth                    = 3,
    SceneDepth                                     = 4,
    SmoothedSceneDepth                             = 5,
    EARSessionTrackingFeature                      = 6

};


// Enum  AugmentedReality.EARFaceTrackingUpdate
enum class EARFaceTrackingUpdate : uint8_t
{
    CurvesAndGeo                                   = 0,
    CurvesOnly                                     = 1,
    EARFaceTrackingUpdate                          = 2

};


// Enum  AugmentedReality.EAREnvironmentCaptureProbeType
enum class EAREnvironmentCaptureProbeType : uint8_t
{
    None                                           = 0,
    Manual                                         = 1,
    Automatic                                      = 2,
    EAREnvironmentCaptureProbeType                 = 3

};


// Enum  AugmentedReality.EARFrameSyncMode
enum class EARFrameSyncMode : uint8_t
{
    SyncTickWithCameraImage                        = 0,
    SyncTickWithoutCameraImage                     = 1,
    EARFrameSyncMode                               = 2

};


// Enum  AugmentedReality.EARLightEstimationMode
enum class EARLightEstimationMode : uint8_t
{
    None                                           = 0,
    AmbientLightEstimate                           = 1,
    DirectionalLightEstimate                       = 2,
    EARLightEstimationMode                         = 3

};


// Enum  AugmentedReality.EARPlaneDetectionMode
enum class EARPlaneDetectionMode : uint8_t
{
    None                                           = 0,
    HorizontalPlaneDetection                       = 1,
    VerticalPlaneDetection                         = 2,
    EARPlaneDetectionMode                          = 3

};


// Enum  AugmentedReality.EARSessionType
enum class EARSessionType : uint8_t
{
    None                                           = 0,
    Orientation                                    = 1,
    World                                          = 2,
    Face                                           = 3,
    Image                                          = 4,
    ObjectScanning                                 = 5,
    PoseTracking                                   = 6,
    GeoTracking                                    = 7,
    EARSessionType                                 = 8

};


// Enum  AugmentedReality.EARWorldAlignment
enum class EARWorldAlignment : uint8_t
{
    Gravity                                        = 0,
    GravityAndHeading                              = 1,
    Camera                                         = 2,
    EARWorldAlignment                              = 3

};


// Enum  AugmentedReality.EARDepthAccuracy
enum class EARDepthAccuracy : uint8_t
{
    Unkown                                         = 0,
    Approximate                                    = 1,
    Accurate                                       = 2,
    EARDepthAccuracy                               = 3

};


// Enum  AugmentedReality.EARDepthQuality
enum class EARDepthQuality : uint8_t
{
    Unkown                                         = 0,
    Low                                            = 1,
    High                                           = 2,
    EARDepthQuality                                = 3

};


// Enum  AugmentedReality.EARTextureType
enum class EARTextureType : uint8_t
{
    Unknown                                        = 0,
    CameraImage                                    = 1,
    CameraDepth                                    = 2,
    EnvironmentCapture                             = 3,
    PersonSegmentationImage                        = 4,
    PersonSegmentationDepth                        = 5,
    SceneDepthMap                                  = 6,
    SceneDepthConfidenceMap                        = 7,
    EARTextureType                                 = 8

};


// Enum  AugmentedReality.EAREye
enum class EAREye : uint8_t
{
    LeftEye                                        = 0,
    RightEye                                       = 1,
    EAREye                                         = 2

};


// Enum  AugmentedReality.EARFaceBlendShape
enum class EARFaceBlendShape : uint8_t
{
    EyeBlinkLeft                                   = 0,
    EyeLookDownLeft                                = 1,
    EyeLookInLeft                                  = 2,
    EyeLookOutLeft                                 = 3,
    EyeLookUpLeft                                  = 4,
    EyeSquintLeft                                  = 5,
    EyeWideLeft                                    = 6,
    EyeBlinkRight                                  = 7,
    EyeLookDownRight                               = 8,
    EyeLookInRight                                 = 9,
    EyeLookOutRight                                = 10,
    EyeLookUpRight                                 = 11,
    EyeSquintRight                                 = 12,
    EyeWideRight                                   = 13,
    JawForward                                     = 14,
    JawLeft                                        = 15,
    JawRight                                       = 16,
    JawOpen                                        = 17,
    MouthClose                                     = 18,
    MouthFunnel                                    = 19,
    MouthPucker                                    = 20,
    MouthLeft                                      = 21,
    MouthRight                                     = 22,
    MouthSmileLeft                                 = 23,
    MouthSmileRight                                = 24,
    MouthFrownLeft                                 = 25,
    MouthFrownRight                                = 26,
    MouthDimpleLeft                                = 27,
    MouthDimpleRight                               = 28,
    MouthStretchLeft                               = 29,
    MouthStretchRight                              = 30,
    MouthRollLower                                 = 31,
    MouthRollUpper                                 = 32,
    MouthShrugLower                                = 33,
    MouthShrugUpper                                = 34,
    MouthPressLeft                                 = 35,
    MouthPressRight                                = 36,
    MouthLowerDownLeft                             = 37,
    MouthLowerDownRight                            = 38,
    MouthUpperUpLeft                               = 39,
    MouthUpperUpRight                              = 40,
    BrowDownLeft                                   = 41,
    BrowDownRight                                  = 42,
    BrowInnerUp                                    = 43,
    BrowOuterUpLeft                                = 44,
    BrowOuterUpRight                               = 45,
    CheekPuff                                      = 46,
    CheekSquintLeft                                = 47,
    CheekSquintRight                               = 48,
    NoseSneerLeft                                  = 49,
    NoseSneerRight                                 = 50,
    TongueOut                                      = 51,
    HeadYaw                                        = 52,
    HeadPitch                                      = 53,
    HeadRoll                                       = 54,
    LeftEyeYaw                                     = 55,
    LeftEyePitch                                   = 56,
    LeftEyeRoll                                    = 57,
    RightEyeYaw                                    = 58,
    RightEyePitch                                  = 59,
    RightEyeRoll                                   = 60,
    MAX                                            = 61

};


// Enum  AugmentedReality.EARFaceTrackingDirection
enum class EARFaceTrackingDirection : uint8_t
{
    FaceRelative                                   = 0,
    FaceMirrored                                   = 1,
    EARFaceTrackingDirection                       = 2

};


// Enum  AugmentedReality.EARCandidateImageOrientation
enum class EARCandidateImageOrientation : uint8_t
{
    Landscape                                      = 0,
    Portrait                                       = 1,
    EARCandidateImageOrientation                   = 2

};


// Enum  AugmentedReality.EARAltitudeSource
enum class EARAltitudeSource : uint8_t
{
    Precise                                        = 0,
    Coarse                                         = 1,
    UserDefined                                    = 2,
    Unknown                                        = 3,
    EARAltitudeSource                              = 4

};


// Enum  AugmentedReality.EARJointTransformSpace
enum class EARJointTransformSpace : uint8_t
{
    Model                                          = 0,
    ParentJoint                                    = 1,
    EARJointTransformSpace                         = 2

};


// Enum  AugmentedReality.EARObjectClassification
enum class EARObjectClassification : uint8_t
{
    NotApplicable                                  = 0,
    Unknown                                        = 1,
    Wall                                           = 2,
    Ceiling                                        = 3,
    Floor                                          = 4,
    Table                                          = 5,
    Seat                                           = 6,
    Face                                           = 7,
    Image                                          = 8,
    World                                          = 9,
    SceneObject                                    = 10,
    HandMesh                                       = 11,
    Door                                           = 12,
    Window                                         = 13,
    EARObjectClassification                        = 14

};


// Enum  AugmentedReality.EARPlaneOrientation
enum class EARPlaneOrientation : uint8_t
{
    Horizontal                                     = 0,
    Vertical                                       = 1,
    Diagonal                                       = 2,
    EARPlaneOrientation                            = 3

};


// Enum  AugmentedReality.EARWorldMappingState
enum class EARWorldMappingState : uint8_t
{
    NotAvailable                                   = 0,
    StillMappingNotRelocalizable                   = 1,
    StillMappingRelocalizable                      = 2,
    Mapped                                         = 3,
    EARWorldMappingState                           = 4

};


// Enum  AugmentedReality.EARSessionStatus
enum class EARSessionStatus : uint8_t
{
    NotStarted                                     = 0,
    Running                                        = 1,
    NotSupported                                   = 2,
    FatalError                                     = 3,
    PermissionNotGranted                           = 4,
    UnsupportedConfiguration                       = 5,
    Other                                          = 6,
    EARSessionStatus                               = 7

};


// Enum  AugmentedReality.EARTrackingQualityReason
enum class EARTrackingQualityReason : uint8_t
{
    None                                           = 0,
    Initializing                                   = 1,
    Relocalizing                                   = 2,
    ExcessiveMotion                                = 3,
    InsufficientFeatures                           = 4,
    InsufficientLight                              = 5,
    BadState                                       = 6,
    EARTrackingQualityReason                       = 7

};


// Enum  AugmentedReality.EARTrackingQuality
enum class EARTrackingQuality : uint8_t
{
    NotTracking                                    = 0,
    OrientationOnly                                = 1,
    OrientationAndPosition                         = 2,
    EARTrackingQuality                             = 3

};


// Enum  AugmentedReality.EARLineTraceChannels
enum class EARLineTraceChannels : uint8_t
{
    None                                           = 0,
    FeaturePoint                                   = 1,
    GroundPlane                                    = 2,
    PlaneUsingExtent                               = 4,
    PlaneUsingBoundaryPolygon                      = 8,
    EARLineTraceChannels                           = 9

};


// Enum  AugmentedReality.EARCaptureType
enum class EARCaptureType : uint8_t
{
    Camera                                         = 0,
    QRCode                                         = 1,
    SpatialMapping                                 = 2,
    SceneUnderstanding                             = 3,
    EARCaptureType                                 = 4

};


// Enum  HeadMountedDisplay.EXRVisualType
enum class EXRVisualType : uint8_t
{
    Controller                                     = 0,
    Hand                                           = 1,
    EXRVisualType                                  = 2

};


// Enum  HeadMountedDisplay.EHandKeypoint
enum class EHandKeypoint : uint8_t
{
    Palm                                           = 0,
    Wrist                                          = 1,
    ThumbMetacarpal                                = 2,
    ThumbProximal                                  = 3,
    ThumbDistal                                    = 4,
    ThumbTip                                       = 5,
    IndexMetacarpal                                = 6,
    IndexProximal                                  = 7,
    IndexIntermediate                              = 8,
    IndexDistal                                    = 9,
    IndexTip                                       = 10,
    MiddleMetacarpal                               = 11,
    MiddleProximal                                 = 12,
    MiddleIntermediate                             = 13,
    MiddleDistal                                   = 14,
    MiddleTip                                      = 15,
    RingMetacarpal                                 = 16,
    RingProximal                                   = 17,
    RingIntermediate                               = 18,
    RingDistal                                     = 19,
    RingTip                                        = 20,
    LittleMetacarpal                               = 21,
    LittleProximal                                 = 22,
    LittleIntermediate                             = 23,
    LittleDistal                                   = 24,
    LittleTip                                      = 25,
    EHandKeypoint                                  = 26

};


// Enum  HeadMountedDisplay.EXRTrackedDeviceType
enum class EXRTrackedDeviceType : uint8_t
{
    HeadMountedDisplay                             = 0,
    Controller                                     = 1,
    TrackingReference                              = 2,
    Other                                          = 3,
    Invalid                                        = 254,
    Any                                            = 255,
    EXRTrackedDeviceType                           = 256

};


// Enum  HeadMountedDisplay.ESpectatorScreenMode
enum class ESpectatorScreenMode : uint8_t
{
    Disabled                                       = 0,
    SingleEyeLetterboxed                           = 1,
    Undistorted                                    = 2,
    Distorted                                      = 3,
    SingleEye                                      = 4,
    SingleEyeCroppedToFill                         = 5,
    Texture                                        = 6,
    TexturePlusEye                                 = 7,
    ESpectatorScreenMode                           = 8

};


// Enum  HeadMountedDisplay.EXRSystemFlags
enum class EXRSystemFlags : uint8_t
{
    NoFlags                                        = 0,
    IsAR                                           = 1,
    IsTablet                                       = 2,
    IsHeadMounted                                  = 4,
    SupportsHandTracking                           = 8,
    EXRSystemFlags                                 = 9

};


// Enum  HeadMountedDisplay.EXRDeviceConnectionResult
enum class EXRDeviceConnectionResult : uint8_t
{
    NoTrackingSystem                               = 0,
    FeatureNotSupported                            = 1,
    NoValidViewport                                = 2,
    MiscFailure                                    = 3,
    Success                                        = 4,
    EXRDeviceConnectionResult                      = 5

};


// Enum  HeadMountedDisplay.EHMDWornState
enum class EHMDWornState : uint8_t
{
    Unknown                                        = 0,
    Worn                                           = 1,
    NotWorn                                        = 2,
    EHMDWornState                                  = 3

};


// Enum  HeadMountedDisplay.EHMDTrackingOrigin
enum class EHMDTrackingOrigin : uint8_t
{
    Floor                                          = 0,
    Eye                                            = 1,
    Stage                                          = 2,
    Unbounded                                      = 3,
    EHMDTrackingOrigin                             = 4

};


// Enum  HeadMountedDisplay.EOrientPositionSelector
enum class EOrientPositionSelector : uint8_t
{
    Orientation                                    = 0,
    Position                                       = 1,
    OrientationAndPosition                         = 2,
    EOrientPositionSelector                        = 3

};


// Enum  HeadMountedDisplay.ETrackingStatus
enum class ETrackingStatus : uint8_t
{
    NotTracked                                     = 0,
    InertialOnly                                   = 1,
    Tracked                                        = 2,
    ETrackingStatus                                = 3

};


// Enum  HeadMountedDisplay.ESpatialInputGestureAxis
enum class ESpatialInputGestureAxis : uint8_t
{
    None                                           = 0,
    Manipulation                                   = 1,
    Navigation                                     = 2,
    NavigationRails                                = 3,
    ESpatialInputGestureAxis                       = 4

};


// Enum  Foliage.EFoliageScaling
enum class EFoliageScaling : uint8_t
{
    Uniform                                        = 0,
    Free                                           = 1,
    LockXY                                         = 2,
    LockXZ                                         = 3,
    LockYZ                                         = 4,
    EFoliageScaling                                = 5

};


// Enum  Foliage.EVertexColorMaskChannel
enum class EVertexColorMaskChannel : uint8_t
{
    Red                                            = 0,
    Green                                          = 1,
    Blue                                           = 2,
    Alpha                                          = 3,
    MAX                                            = 4,
    EVertexColorMaskChannel                        = 5

};


// Enum  Foliage.FoliageVertexColorMask
enum class FoliageVertexColorMask : uint8_t
{
    FOLIAGEVERTEXCOLORMASK                         = 0,
    FOLIAGEVERTEXCOLORMASK                         = 1,
    FOLIAGEVERTEXCOLORMASK                         = 2,
    FOLIAGEVERTEXCOLORMASK                         = 3,
    FOLIAGEVERTEXCOLORMASK                         = 4,
    FOLIAGEVERTEXCOLORMASK                         = 5

};


// Enum  Foliage.ESimulationQuery
enum class ESimulationQuery : uint8_t
{
    None                                           = 0,
    CollisionOverlap                               = 1,
    ShadeOverlap                                   = 2,
    AnyOverlap                                     = 3,
    ESimulationQuery                               = 4

};


// Enum  Foliage.ESimulationOverlap
enum class ESimulationOverlap : uint8_t
{
    CollisionOverlap                               = 0,
    ShadeOverlap                                   = 1,
    None                                           = 2,
    ESimulationOverlap                             = 3

};


// Enum  Landscape.ELandscapeBlendMode
enum class ELandscapeBlendMode : uint8_t
{
    LSBM                                           = 0,
    LSBM                                           = 1,
    LSBM                                           = 2

};


// Enum  Landscape.ELandscapeSetupErrors
enum class ELandscapeSetupErrors : uint8_t
{
    LSE                                            = 0,
    LSE                                            = 1,
    LSE                                            = 2,
    LSE                                            = 3,
    LSE                                            = 4

};


// Enum  Landscape.ELandscapeClearMode
enum class ELandscapeClearMode : uint8_t
{
    Clear                                          = 1,
    Clear                                          = 2,
    Clear                                          = 3,
    Clear                                          = 4

};


// Enum  Landscape.ELandscapeGizmoType
enum class ELandscapeGizmoType : uint8_t
{
    LGT                                            = 0,
    LGT                                            = 1,
    LGT                                            = 2,
    LGT                                            = 3

};


// Enum  Landscape.EGrassPreservePriority
enum class EGrassPreservePriority : uint8_t
{
    High                                           = 0,
    Middle                                         = 1,
    Low                                            = 2,
    EGrassPreservePriority                         = 3

};


// Enum  Landscape.EGrassScaling
enum class EGrassScaling : uint8_t
{
    Uniform                                        = 0,
    Free                                           = 1,
    LockXY                                         = 2,
    EGrassScaling                                  = 3

};


// Enum  Landscape.ESplineModulationColorMask
enum class ESplineModulationColorMask : uint8_t
{
    Red                                            = 0,
    Green                                          = 1,
    Blue                                           = 2,
    Alpha                                          = 3,
    ESplineModulationColorMask                     = 4

};


// Enum  Landscape.ELandscapeLODFalloff
enum class ELandscapeLODFalloff : uint8_t
{
    Linear                                         = 0,
    SquareRoot                                     = 1,
    ELandscapeLODFalloff                           = 2

};


// Enum  Landscape.ELandscapeLayerDisplayMode
enum class ELandscapeLayerDisplayMode : uint8_t
{
    Default                                        = 0,
    Alphabetical                                   = 1,
    UserSpecific                                   = 2,
    ELandscapeLayerDisplayMode                     = 3

};


// Enum  Landscape.ELandscapeLayerPaintingRestriction
enum class ELandscapeLayerPaintingRestriction : uint8_t
{
    None                                           = 0,
    UseMaxLayers                                   = 1,
    ExistingOnly                                   = 2,
    UseComponentWhitelist                          = 3,
    ELandscapeLayerPaintingRestriction             = 4

};


// Enum  Landscape.ELandscapeImportAlphamapType
enum class ELandscapeImportAlphamapType : uint8_t
{
    Additive                                       = 0,
    Layered                                        = 1,
    ELandscapeImportAlphamapType                   = 2

};


// Enum  Landscape.LandscapeSplineMeshOrientation
enum class LandscapeSplineMeshOrientation : uint8_t
{
    LSMO                                           = 0,
    LSMO                                           = 1,
    LSMO                                           = 2

};


// Enum  Landscape.ELandscapeLayerBlendType
enum class ELandscapeLayerBlendType : uint8_t
{
    LB                                             = 0,
    LB                                             = 1,
    LB                                             = 2,
    LB                                             = 3

};


// Enum  Landscape.ELandscapeCustomizedCoordType
enum class ELandscapeCustomizedCoordType : uint8_t
{
    LCCT                                           = 0,
    LCCT                                           = 1,
    LCCT                                           = 2,
    LCCT                                           = 3,
    LCCT                                           = 4,
    LCCT                                           = 5

};


// Enum  Landscape.ETerrainCoordMappingType
enum class ETerrainCoordMappingType : uint8_t
{
    TCMT                                           = 0,
    TCMT                                           = 1,
    TCMT                                           = 2,
    TCMT                                           = 3,
    TCMT                                           = 4

};


// Enum  TimeManagement.EFrameNumberDisplayFormats
enum class EFrameNumberDisplayFormats : uint8_t
{
    NonDropFrameTimecode                           = 0,
    DropFrameTimecode                              = 1,
    Seconds                                        = 2,
    Frames                                         = 3,
    MAX                                            = 4,
    EFrameNumberDisplayFormats                     = 5

};


// Enum  TimeManagement.ETimedDataInputState
enum class ETimedDataInputState : uint8_t
{
    Connected                                      = 0,
    Unresponsive                                   = 1,
    Disconnected                                   = 2,
    ETimedDataInputState                           = 3

};


// Enum  TimeManagement.ETimedDataInputEvaluationType
enum class ETimedDataInputEvaluationType : uint8_t
{
    None                                           = 0,
    Timecode                                       = 1,
    PlatformTime                                   = 2,
    ETimedDataInputEvaluationType                  = 3

};


// Enum  MovieScene.EMovieSceneKeyInterpolation
enum class EMovieSceneKeyInterpolation : uint8_t
{
    Auto                                           = 0,
    User                                           = 1,
    Break                                          = 2,
    Linear                                         = 3,
    Constant                                       = 4,
    EMovieSceneKeyInterpolation                    = 5

};


// Enum  MovieScene.EMovieSceneBlendType
enum class EMovieSceneBlendType : uint8_t
{
    Invalid                                        = 0,
    Absolute                                       = 1,
    Additive                                       = 2,
    Relative                                       = 4,
    AdditiveFromBase                               = 8,
    EMovieSceneBlendType                           = 9

};


// Enum  MovieScene.EMovieSceneCompletionMode
enum class EMovieSceneCompletionMode : uint8_t
{
    KeepState                                      = 0,
    RestoreState                                   = 1,
    ProjectDefault                                 = 2,
    EMovieSceneCompletionMode                      = 3

};


// Enum  MovieScene.EMovieSceneBuiltInEasing
enum class EMovieSceneBuiltInEasing : uint8_t
{
    Linear                                         = 0,
    SinIn                                          = 1,
    SinOut                                         = 2,
    SinInOut                                       = 3,
    QuadIn                                         = 4,
    QuadOut                                        = 5,
    QuadInOut                                      = 6,
    CubicIn                                        = 7,
    CubicOut                                       = 8,
    CubicInOut                                     = 9,
    QuartIn                                        = 10,
    QuartOut                                       = 11,
    QuartInOut                                     = 12,
    QuintIn                                        = 13,
    QuintOut                                       = 14,
    QuintInOut                                     = 15,
    ExpoIn                                         = 16,
    ExpoOut                                        = 17,
    ExpoInOut                                      = 18,
    CircIn                                         = 19,
    CircOut                                        = 20,
    CircInOut                                      = 21,
    EMovieSceneBuiltInEasing                       = 22

};


// Enum  MovieScene.EEvaluationMethod
enum class EEvaluationMethod : uint8_t
{
    Static                                         = 0,
    Swept                                          = 1,
    EEvaluationMethod                              = 2

};


// Enum  MovieScene.EMovieSceneSequenceFlags
enum class EMovieSceneSequenceFlags : uint8_t
{
    None                                           = 0,
    Volatile                                       = 1,
    BlockingEvaluation                             = 2,
    InheritedFlags                                 = 1,
    EMovieSceneSequenceFlags                       = 3

};


// Enum  MovieScene.EUpdateClockSource
enum class EUpdateClockSource : uint8_t
{
    Tick                                           = 0,
    Platform                                       = 1,
    Audio                                          = 2,
    RelativeTimecode                               = 3,
    Timecode                                       = 4,
    Custom                                         = 5,
    EUpdateClockSource                             = 6

};


// Enum  MovieScene.EMovieSceneEvaluationType
enum class EMovieSceneEvaluationType : uint8_t
{
    FrameLocked                                    = 0,
    WithSubFrames                                  = 1,
    EMovieSceneEvaluationType                      = 2

};


// Enum  MovieScene.EMovieScenePlayerStatus
enum class EMovieScenePlayerStatus : uint8_t
{
    Stopped                                        = 0,
    Playing                                        = 1,
    Recording                                      = 2,
    Scrubbing                                      = 3,
    Jumping                                        = 4,
    Stepping                                       = 5,
    Paused                                         = 6,
    MAX                                            = 7

};


// Enum  MovieScene.EMovieSceneObjectBindingSpace
enum class EMovieSceneObjectBindingSpace : uint8_t
{
    Local                                          = 0,
    Root                                           = 1,
    EMovieSceneObjectBindingSpace                  = 2

};


// Enum  MovieScene.ESectionEvaluationFlags
enum class ESectionEvaluationFlags : uint8_t
{
    None                                           = 0,
    PreRoll                                        = 1,
    PostRoll                                       = 2,
    ESectionEvaluationFlags                        = 3

};


// Enum  MovieScene.EMovieScenePositionType
enum class EMovieScenePositionType : uint8_t
{
    Frame                                          = 0,
    Time                                           = 1,
    MarkedFrame                                    = 2,
    EMovieScenePositionType                        = 3

};


// Enum  MovieScene.EUpdatePositionMethod
enum class EUpdatePositionMethod : uint8_t
{
    Play                                           = 0,
    Jump                                           = 1,
    Scrub                                          = 2,
    EUpdatePositionMethod                          = 3

};


// Enum  MovieScene.ESpawnOwnership
enum class ESpawnOwnership : uint8_t
{
    InnerSequence                                  = 0,
    MasterSequence                                 = 1,
    External                                       = 2,
    ESpawnOwnership                                = 3

};


// Enum  AnimationCore.ETransformConstraintType
enum class ETransformConstraintType : uint8_t
{
    Translation                                    = 0,
    Rotation                                       = 1,
    Scale                                          = 2,
    Parent                                         = 3,
    ETransformConstraintType                       = 4

};


// Enum  AnimationCore.EConstraintType
enum class EConstraintType : uint8_t
{
    Transform                                      = 0,
    Aim                                            = 1,
    MAX                                            = 2

};


// Enum  AnimGraphRuntime.ESphericalLimitType
enum class ESphericalLimitType : uint8_t
{
    Inner                                          = 0,
    Outer                                          = 1,
    ESphericalLimitType                            = 2

};


// Enum  AnimGraphRuntime.AnimPhysSimSpaceType
enum class AnimPhysSimSpaceType : uint8_t
{
    Component                                      = 0,
    Actor                                          = 1,
    World                                          = 2,
    RootRelative                                   = 3,
    BoneRelative                                   = 4,
    AnimPhysSimSpaceType                           = 5

};


// Enum  AnimGraphRuntime.AnimPhysLinearConstraintType
enum class AnimPhysLinearConstraintType : uint8_t
{
    Free                                           = 0,
    Limited                                        = 1,
    AnimPhysLinearConstraintType                   = 2

};


// Enum  AnimGraphRuntime.AnimPhysAngularConstraintType
enum class AnimPhysAngularConstraintType : uint8_t
{
    Angular                                        = 0,
    Cone                                           = 1,
    AnimPhysAngularConstraintType                  = 2

};


// Enum  AnimGraphRuntime.EBlendListTransitionType
enum class EBlendListTransitionType : uint8_t
{
    StandardBlend                                  = 0,
    Inertialization                                = 1,
    EBlendListTransitionType                       = 2

};


// Enum  AnimGraphRuntime.EDrivenDestinationMode
enum class EDrivenDestinationMode : uint8_t
{
    Bone                                           = 0,
    MorphTarget                                    = 1,
    MaterialParameter                              = 2,
    EDrivenDestinationMode                         = 3

};


// Enum  AnimGraphRuntime.EDrivenBoneModificationMode
enum class EDrivenBoneModificationMode : uint8_t
{
    AddToInput                                     = 0,
    ReplaceComponent                               = 1,
    AddToRefPose                                   = 2,
    EDrivenBoneModificationMode                    = 3

};


// Enum  AnimGraphRuntime.EConstraintOffsetOption
enum class EConstraintOffsetOption : uint8_t
{
    None                                           = 0,
    Offset                                         = 1,
    EConstraintOffsetOption                        = 2

};


// Enum  AnimGraphRuntime.CopyBoneDeltaMode
enum class CopyBoneDeltaMode : uint8_t
{
    Accumulate                                     = 0,
    Copy                                           = 1,
    CopyBoneDeltaMode                              = 2

};


// Enum  AnimGraphRuntime.EInterpolationBlend
enum class EInterpolationBlend : uint8_t
{
    Linear                                         = 0,
    Cubic                                          = 1,
    Sinusoidal                                     = 2,
    EaseInOutExponent2                             = 3,
    EaseInOutExponent3                             = 4,
    EaseInOutExponent4                             = 5,
    EaseInOutExponent5                             = 6,
    MAX                                            = 7

};


// Enum  AnimGraphRuntime.EBoneModificationMode
enum class EBoneModificationMode : uint8_t
{
    BMM                                            = 0,
    BMM                                            = 1,
    BMM                                            = 2,
    BMM                                            = 3

};


// Enum  AnimGraphRuntime.EModifyCurveApplyMode
enum class EModifyCurveApplyMode : uint8_t
{
    Add                                            = 0,
    Scale                                          = 1,
    Blend                                          = 2,
    WeightedMovingAverage                          = 3,
    RemapCurve                                     = 4,
    EModifyCurveApplyMode                          = 5

};


// Enum  AnimGraphRuntime.EPoseDriverOutput
enum class EPoseDriverOutput : uint8_t
{
    DrivePoses                                     = 0,
    DriveCurves                                    = 1,
    EPoseDriverOutput                              = 2

};


// Enum  AnimGraphRuntime.EPoseDriverSource
enum class EPoseDriverSource : uint8_t
{
    Rotation                                       = 0,
    Translation                                    = 1,
    EPoseDriverSource                              = 2

};


// Enum  AnimGraphRuntime.EPoseDriverType
enum class EPoseDriverType : uint8_t
{
    SwingAndTwist                                  = 0,
    SwingOnly                                      = 1,
    Translation                                    = 2,
    EPoseDriverType                                = 3

};


// Enum  AnimGraphRuntime.ESnapshotSourceMode
enum class ESnapshotSourceMode : uint8_t
{
    NamedSnapshot                                  = 0,
    SnapshotPin                                    = 1,
    ESnapshotSourceMode                            = 2

};


// Enum  AnimGraphRuntime.ERefPoseType
enum class ERefPoseType : uint8_t
{
    EIT                                            = 0,
    EIT                                            = 1,
    EIT                                            = 2

};


// Enum  AnimGraphRuntime.ESimulationSpace
enum class ESimulationSpace : uint8_t
{
    ComponentSpace                                 = 0,
    WorldSpace                                     = 1,
    BaseBoneSpace                                  = 2,
    ESimulationSpace                               = 3

};


// Enum  AnimGraphRuntime.EScaleChainInitialLength
enum class EScaleChainInitialLength : uint8_t
{
    FixedDefaultLengthValue                        = 0,
    Distance                                       = 1,
    ChainLength                                    = 2,
    EScaleChainInitialLength                       = 3

};


// Enum  AnimGraphRuntime.ESequenceEvalReinit
enum class ESequenceEvalReinit : uint8_t
{
    NoReset                                        = 0,
    StartPosition                                  = 1,
    ExplicitTime                                   = 2,
    ESequenceEvalReinit                            = 3

};


// Enum  AnimGraphRuntime.ESplineBoneAxis
enum class ESplineBoneAxis : uint8_t
{
    None                                           = 0,
    X                                              = 1,
    Y                                              = 2,
    Z                                              = 3,
    ESplineBoneAxis                                = 4

};


// Enum  AnimGraphRuntime.ERotationComponent
enum class ERotationComponent : uint8_t
{
    EulerX                                         = 0,
    EulerY                                         = 1,
    EulerZ                                         = 2,
    QuaternionAngle                                = 3,
    SwingAngle                                     = 4,
    TwistAngle                                     = 5,
    ERotationComponent                             = 6

};


// Enum  AnimGraphRuntime.EEasingFuncType
enum class EEasingFuncType : uint8_t
{
    Linear                                         = 0,
    Sinusoidal                                     = 1,
    Cubic                                          = 2,
    QuadraticInOut                                 = 3,
    CubicInOut                                     = 4,
    HermiteCubic                                   = 5,
    QuarticInOut                                   = 6,
    QuinticInOut                                   = 7,
    CircularIn                                     = 8,
    CircularOut                                    = 9,
    CircularInOut                                  = 10,
    ExpIn                                          = 11,
    ExpOut                                         = 12,
    ExpInOut                                       = 13,
    CustomCurve                                    = 14,
    EEasingFuncType                                = 15

};


// Enum  AnimGraphRuntime.ERBFNormalizeMethod
enum class ERBFNormalizeMethod : uint8_t
{
    OnlyNormalizeAboveOne                          = 0,
    AlwaysNormalize                                = 1,
    NormalizeWithinMedian                          = 2,
    NoNormalization                                = 3,
    ERBFNormalizeMethod                            = 4

};


// Enum  AnimGraphRuntime.ERBFDistanceMethod
enum class ERBFDistanceMethod : uint8_t
{
    Euclidean                                      = 0,
    Quaternion                                     = 1,
    SwingAngle                                     = 2,
    TwistAngle                                     = 3,
    DefaultMethod                                  = 4,
    ERBFDistanceMethod                             = 5

};


// Enum  AnimGraphRuntime.ERBFFunctionType
enum class ERBFFunctionType : uint8_t
{
    Gaussian                                       = 0,
    Exponential                                    = 1,
    Linear                                         = 2,
    Cubic                                          = 3,
    Quintic                                        = 4,
    DefaultFunction                                = 5,
    ERBFFunctionType                               = 6

};


// Enum  AnimGraphRuntime.ERBFSolverType
enum class ERBFSolverType : uint8_t
{
    Additive                                       = 0,
    Interpolative                                  = 1,
    ERBFSolverType                                 = 2

};


// Enum  MovieSceneTracks.MovieScene3DPathSection
enum class MovieScene3DPathSection : uint8_t
{
    MovieScene3DPathSection                        = 0,
    MovieScene3DPathSection                        = 1,
    MovieScene3DPathSection                        = 2,
    MovieScene3DPathSection                        = 3,
    MovieScene3DPathSection                        = 4,
    MovieScene3DPathSection                        = 5,
    MovieScene3DPathSection                        = 6

};


// Enum  MovieSceneTracks.EFireEventsAtPosition
enum class EFireEventsAtPosition : uint8_t
{
    AtStartOfEvaluation                            = 0,
    AtEndOfEvaluation                              = 1,
    AfterSpawn                                     = 2,
    EFireEventsAtPosition                          = 3

};


// Enum  MovieSceneTracks.ELevelVisibility
enum class ELevelVisibility : uint8_t
{
    Visible                                        = 0,
    Hidden                                         = 1,
    ELevelVisibility                               = 2

};


// Enum  MovieSceneTracks.EParticleKey
enum class EParticleKey : uint8_t
{
    Activate                                       = 0,
    Deactivate                                     = 1,
    Trigger                                        = 2,
    EParticleKey                                   = 3

};


// Enum  UMG.EDragPivot
enum class EDragPivot : uint8_t
{
    MouseDown                                      = 0,
    TopLeft                                        = 1,
    TopCenter                                      = 2,
    TopRight                                       = 3,
    CenterLeft                                     = 4,
    CenterCenter                                   = 5,
    CenterRight                                    = 6,
    BottomLeft                                     = 7,
    BottomCenter                                   = 8,
    BottomRight                                    = 9,
    EDragPivot                                     = 10

};


// Enum  UMG.EDynamicBoxType
enum class EDynamicBoxType : uint8_t
{
    Horizontal                                     = 0,
    Vertical                                       = 1,
    Wrap                                           = 2,
    VerticalWrap                                   = 3,
    Radial                                         = 4,
    Overlay                                        = 5,
    EDynamicBoxType                                = 6

};


// Enum  UMG.ESlateSizeRule
enum class ESlateSizeRule : uint8_t
{
    Automatic                                      = 0,
    Fill                                           = 1,
    ESlateSizeRule                                 = 2

};


// Enum  UMG.ELocalizationFeature
enum class ELocalizationFeature : uint8_t
{
    None                                           = 0,
    AllOversea                                     = 1,
    English                                        = 2,
    ELocalizationFeature                           = 3

};


// Enum  UMG.EWidgetDesignFlags
enum class EWidgetDesignFlags : uint8_t
{
    None                                           = 0,
    Designing                                      = 1,
    ShowOutline                                    = 2,
    ExecutePreConstruct                            = 4,
    EWidgetDesignFlags                             = 5

};


// Enum  UMG.EBindingKind
enum class EBindingKind : uint8_t
{
    Function                                       = 0,
    Property                                       = 1,
    EBindingKind                                   = 2

};


// Enum  UMG.ETickMode
enum class ETickMode : uint8_t
{
    Disabled                                       = 0,
    Enabled                                        = 1,
    Automatic                                      = 2,
    ETickMode                                      = 3

};


// Enum  UMG.EWindowVisibility
enum class EWindowVisibility : uint8_t
{
    Visible                                        = 0,
    SelfHitTestInvisible                           = 1,
    EWindowVisibility                              = 2

};


// Enum  UMG.EWidgetGeometryMode
enum class EWidgetGeometryMode : uint8_t
{
    Plane                                          = 0,
    Cylinder                                       = 1,
    EWidgetGeometryMode                            = 2

};


// Enum  UMG.EWidgetBlendMode
enum class EWidgetBlendMode : uint8_t
{
    Opaque                                         = 0,
    Masked                                         = 1,
    Transparent                                    = 2,
    EWidgetBlendMode                               = 3

};


// Enum  UMG.EWidgetTimingPolicy
enum class EWidgetTimingPolicy : uint8_t
{
    RealTime                                       = 0,
    GameTime                                       = 1,
    EWidgetTimingPolicy                            = 2

};


// Enum  UMG.EWidgetSpace
enum class EWidgetSpace : uint8_t
{
    World                                          = 0,
    Screen                                         = 1,
    EWidgetSpace                                   = 2

};


// Enum  UMG.EWidgetInteractionSource
enum class EWidgetInteractionSource : uint8_t
{
    World                                          = 0,
    Mouse                                          = 1,
    CenterScreen                                   = 2,
    Custom                                         = 3,
    EWidgetInteractionSource                       = 4

};


// Enum  CinematicCamera.ECameraFocusMethod
enum class ECameraFocusMethod : uint8_t
{
    DoNotOverride                                  = 0,
    Manual                                         = 1,
    Tracking                                       = 2,
    Disable                                        = 3,
    MAX                                            = 4

};


// Enum  AudioPlatformConfiguration.ESoundwaveSampleRateSettings
enum class ESoundwaveSampleRateSettings : uint8_t
{
    Max                                            = 0,
    High                                           = 1,
    Medium                                         = 2,
    Low                                            = 3,
    Min                                            = 4,
    MatchDevice                                    = 5

};


// Enum  AudioMixer.EMusicalNoteName
enum class EMusicalNoteName : uint8_t
{
    C                                              = 0,
    Db                                             = 1,
    D                                              = 2,
    Eb                                             = 3,
    E                                              = 4,
    F                                              = 5,
    Gb                                             = 6,
    G                                              = 7,
    Ab                                             = 8,
    A                                              = 9,
    Bb                                             = 10,
    B                                              = 11,
    EMusicalNoteName                               = 12

};


// Enum  AudioMixer.ESubmixEffectDynamicsChannelLinkMode
enum class ESubmixEffectDynamicsChannelLinkMode : uint8_t
{
    Disabled                                       = 0,
    Average                                        = 1,
    Peak                                           = 2,
    Count                                          = 3,
    ESubmixEffectDynamicsChannelLinkMode           = 4

};


// Enum  AudioMixer.ESubmixEffectDynamicsPeakMode
enum class ESubmixEffectDynamicsPeakMode : uint8_t
{
    MeanSquared                                    = 0,
    RootMeanSquared                                = 1,
    Peak                                           = 2,
    Count                                          = 3,
    ESubmixEffectDynamicsPeakMode                  = 4

};


// Enum  AudioMixer.ESubmixEffectDynamicsProcessorType
enum class ESubmixEffectDynamicsProcessorType : uint8_t
{
    Compressor                                     = 0,
    Limiter                                        = 1,
    Expander                                       = 2,
    Gate                                           = 3,
    Count                                          = 4,
    ESubmixEffectDynamicsProcessorType             = 5

};


// Enum  GameplayTags.EGameplayTagQueryExprType
enum class EGameplayTagQueryExprType : uint8_t
{
    Undefined                                      = 0,
    AnyTagsMatch                                   = 1,
    AllTagsMatch                                   = 2,
    NoTagsMatch                                    = 3,
    AnyExprMatch                                   = 4,
    AllExprMatch                                   = 5,
    NoExprMatch                                    = 6,
    EGameplayTagQueryExprType                      = 7

};


// Enum  GameplayTags.EGameplayContainerMatchType
enum class EGameplayContainerMatchType : uint8_t
{
    Any                                            = 0,
    All                                            = 1,
    EGameplayContainerMatchType                    = 2

};


// Enum  GameplayTags.EGameplayTagMatchType
enum class EGameplayTagMatchType : uint8_t
{
    Explicit                                       = 0,
    IncludeParentTags                              = 1,
    EGameplayTagMatchType                          = 2

};


// Enum  GameplayTags.EGameplayTagSelectionType
enum class EGameplayTagSelectionType : uint8_t
{
    None                                           = 0,
    NonRestrictedOnly                              = 1,
    RestrictedOnly                                 = 2,
    All                                            = 3,
    EGameplayTagSelectionType                      = 4

};


// Enum  GameplayTags.EGameplayTagSourceType
enum class EGameplayTagSourceType : uint8_t
{
    Native                                         = 0,
    DefaultTagList                                 = 1,
    TagList                                        = 2,
    RestrictedTagList                              = 3,
    DataTable                                      = 4,
    Invalid                                        = 5,
    EGameplayTagSourceType                         = 6

};


// Enum  MeshDescription.EComputeNTBsOptions
enum class EComputeNTBsOptions : uint8_t
{
    None                                           = 0,
    Normals                                        = 1,
    Tangents                                       = 2,
    WeightedNTBs                                   = 4,
    EComputeNTBsOptions                            = 5

};


// Enum  PropertyAccess.EPropertyAccessCopyBatch
enum class EPropertyAccessCopyBatch : uint8_t
{
    InternalUnbatched                              = 0,
    ExternalUnbatched                              = 1,
    InternalBatched                                = 2,
    ExternalBatched                                = 3,
    Count                                          = 4,
    EPropertyAccessCopyBatch                       = 5

};


// Enum  PropertyAccess.EPropertyAccessCopyType
enum class EPropertyAccessCopyType : uint8_t
{
    None                                           = 0,
    Plain                                          = 1,
    Complex                                        = 2,
    Bool                                           = 3,
    Struct                                         = 4,
    Object                                         = 5,
    Name                                           = 6,
    Array                                          = 7,
    PromoteBoolToByte                              = 8,
    PromoteBoolToInt32                             = 9,
    PromoteBoolToInt64                             = 10,
    PromoteBoolToFloat                             = 11,
    PromoteByteToInt32                             = 12,
    PromoteByteToInt64                             = 13,
    PromoteByteToFloat                             = 14,
    PromoteInt32ToInt64                            = 15,
    PromoteInt32ToFloat                            = 16,
    EPropertyAccessCopyType                        = 17

};


// Enum  PropertyAccess.EPropertyAccessObjectType
enum class EPropertyAccessObjectType : uint8_t
{
    None                                           = 0,
    Object                                         = 1,
    WeakObject                                     = 2,
    SoftObject                                     = 3,
    EPropertyAccessObjectType                      = 4

};


// Enum  PropertyAccess.EPropertyAccessIndirectionType
enum class EPropertyAccessIndirectionType : uint8_t
{
    Offset                                         = 0,
    Object                                         = 1,
    Array                                          = 2,
    ScriptFunction                                 = 3,
    NativeFunction                                 = 4,
    EPropertyAccessIndirectionType                 = 5

};


// Enum  PortalServices.EEntitlementCacheLevelRetrieved
enum class EEntitlementCacheLevelRetrieved : uint8_t
{
    None                                           = 0,
    Memory                                         = 1,
    Disk                                           = 2,
    EEntitlementCacheLevelRetrieved                = 3

};


// Enum  PortalServices.EEntitlementCacheLevelRequest
enum class EEntitlementCacheLevelRequest : uint8_t
{
    Memory                                         = 1,
    Disk                                           = 2,
    EEntitlementCacheLevelRequest                  = 3

};


// Enum  EyeTracker.EEyeTrackerStatus
enum class EEyeTrackerStatus : uint8_t
{
    NotConnected                                   = 0,
    NotTracking                                    = 1,
    Tracking                                       = 2,
    EEyeTrackerStatus                              = 3

};


// Enum  MediaUtils.EMediaPlayerOptionBooleanOverride
enum class EMediaPlayerOptionBooleanOverride : uint8_t
{
    UseMediaPlayerSetting                          = 0,
    Enabled                                        = 1,
    Disabled                                       = 2,
    EMediaPlayerOptionBooleanOverride              = 3

};


// Enum  MediaAssets.EMediaWebcamCaptureDeviceFilter
enum class EMediaWebcamCaptureDeviceFilter : uint8_t
{
    None                                           = 0,
    DepthSensor                                    = 1,
    Front                                          = 2,
    Rear                                           = 4,
    Unknown                                        = 8,
    EMediaWebcamCaptureDeviceFilter                = 9

};


// Enum  MediaAssets.EMediaVideoCaptureDeviceFilter
enum class EMediaVideoCaptureDeviceFilter : uint8_t
{
    None                                           = 0,
    Card                                           = 1,
    Software                                       = 2,
    Unknown                                        = 4,
    Webcam                                         = 8,
    EMediaVideoCaptureDeviceFilter                 = 9

};


// Enum  MediaAssets.EMediaAudioCaptureDeviceFilter
enum class EMediaAudioCaptureDeviceFilter : uint8_t
{
    None                                           = 0,
    Card                                           = 1,
    Microphone                                     = 2,
    Software                                       = 4,
    Unknown                                        = 8,
    EMediaAudioCaptureDeviceFilter                 = 9

};


// Enum  MediaAssets.EPauseAtStartState
enum class EPauseAtStartState : uint8_t
{
    None                                           = 0,
    WaitSeekComplete                               = 1,
    WaitSampleChange                               = 2,
    EPauseAtStartState                             = 3

};


// Enum  MediaAssets.EMediaPlayerTrack
enum class EMediaPlayerTrack : uint8_t
{
    Audio                                          = 0,
    Caption                                        = 1,
    Metadata                                       = 2,
    Script                                         = 3,
    Subtitle                                       = 4,
    Text                                           = 5,
    Video                                          = 6,
    EMediaPlayerTrack                              = 7

};


// Enum  MediaAssets.EMediaSoundComponentFFTSize
enum class EMediaSoundComponentFFTSize : uint8_t
{
    Min                                            = 0,
    Small                                          = 1,
    Medium                                         = 2,
    Large                                          = 3,
    EMediaSoundComponentFFTSize                    = 4

};


// Enum  MediaAssets.EMediaSoundChannels
enum class EMediaSoundChannels : uint8_t
{
    Mono                                           = 0,
    Stereo                                         = 1,
    Surround                                       = 2,
    EMediaSoundChannels                            = 3

};


// Enum  MediaAssets.MediaTextureOrientation
enum class MediaTextureOrientation : uint8_t
{
    MTORI                                          = 0,
    MTORI                                          = 1,
    MTORI                                          = 2,
    MTORI                                          = 3,
    MTORI                                          = 4

};


// Enum  MediaAssets.MediaTextureOutputFormat
enum class MediaTextureOutputFormat : uint8_t
{
    MTOF                                           = 0,
    MTOF                                           = 1,
    MTOF                                           = 2

};


// Enum  MovieSceneCapture.EHDRCaptureGamut
enum class EHDRCaptureGamut : uint8_t
{
    HCGM                                           = 0,
    HCGM                                           = 1,
    HCGM                                           = 2,
    HCGM                                           = 3,
    HCGM                                           = 4,
    HCGM                                           = 5,
    HCGM                                           = 6

};


// Enum  MovieSceneCapture.EMovieSceneCaptureProtocolState
enum class EMovieSceneCaptureProtocolState : uint8_t
{
    Idle                                           = 0,
    Initialized                                    = 1,
    Capturing                                      = 2,
    Finalizing                                     = 3,
    EMovieSceneCaptureProtocolState                = 4

};


// Enum  MoviePlayer.EMoviePlaybackType
enum class EMoviePlaybackType : uint8_t
{
    MT                                             = 0,
    MT                                             = 1,
    MT                                             = 2,
    MT                                             = 3

};


// Enum  Engine.ETickExecuteScriptOnActorStatus
enum class ETickExecuteScriptOnActorStatus : uint8_t
{
    PreSpawning                                    = 0,
    DuringSpawning                                 = 1,
    PostSpawning                                   = 2,
    FinishSpawning                                 = 3,
    ETickExecuteScriptOnActorStatus                = 4

};


// Enum  Engine.ETickFinishSpawningStatus
enum class ETickFinishSpawningStatus : uint8_t
{
    PreSpawning                                    = 0,
    DuringSpawning                                 = 1,
    PostSpawning                                   = 2,
    FinishSpawning                                 = 3,
    ETickFinishSpawningStatus                      = 4

};


// Enum  Engine.EAlphaBlendOption
enum class EAlphaBlendOption : uint8_t
{
    Linear                                         = 0,
    Cubic                                          = 1,
    HermiteCubic                                   = 2,
    Sinusoidal                                     = 3,
    QuadraticInOut                                 = 4,
    CubicInOut                                     = 5,
    QuarticInOut                                   = 6,
    QuinticInOut                                   = 7,
    CircularIn                                     = 8,
    CircularOut                                    = 9,
    CircularInOut                                  = 10,
    ExpIn                                          = 11,
    ExpOut                                         = 12,
    ExpInOut                                       = 13,
    Custom                                         = 14,
    EAlphaBlendOption                              = 15

};


// Enum  Engine.EAnimSyncGroupScope
enum class EAnimSyncGroupScope : uint8_t
{
    Local                                          = 0,
    Component                                      = 1,
    EAnimSyncGroupScope                            = 2

};


// Enum  Engine.EAnimGroupRole
enum class EAnimGroupRole : uint8_t
{
    CanBeLeader                                    = 0,
    AlwaysFollower                                 = 1,
    AlwaysLeader                                   = 2,
    TransitionLeader                               = 3,
    TransitionFollower                             = 4,
    EAnimGroupRole                                 = 5

};


// Enum  Engine.EPreviewAnimationBlueprintApplicationMethod
enum class EPreviewAnimationBlueprintApplicationMethod : uint8_t
{
    LinkedLayers                                   = 0,
    LinkedAnimGraph                                = 1,
    EPreviewAnimationBlueprintApplicationMethod    = 2

};


// Enum  Engine.AnimationKeyFormat
enum class AnimationKeyFormat : uint8_t
{
    AKF                                            = 0,
    AKF                                            = 1,
    AKF                                            = 2,
    AKF                                            = 3

};


// Enum  Engine.ERawCurveTrackTypes
enum class ERawCurveTrackTypes : uint8_t
{
    RCT                                            = 0,
    RCT                                            = 1,
    RCT                                            = 2,
    RCT                                            = 3

};


// Enum  Engine.EAnimAssetCurveFlags
enum class EAnimAssetCurveFlags : uint8_t
{
    AACF                                           = 0,
    AACF                                           = 1,
    AACF                                           = 2,
    AACF                                           = 4,
    AACF                                           = 8,
    AACF                                           = 16,
    AACF                                           = 32,
    AACF                                           = 64,
    AACF                                           = 65

};


// Enum  Engine.AnimationCompressionFormat
enum class AnimationCompressionFormat : uint8_t
{
    ACF                                            = 0,
    ACF                                            = 1,
    ACF                                            = 2,
    ACF                                            = 3,
    ACF                                            = 4,
    ACF                                            = 5,
    ACF                                            = 6,
    ACF                                            = 7

};


// Enum  Engine.EAdditiveBasePoseType
enum class EAdditiveBasePoseType : uint8_t
{
    ABPT                                           = 0,
    ABPT                                           = 1,
    ABPT                                           = 2,
    ABPT                                           = 3,
    ABPT                                           = 4

};


// Enum  Engine.ERootMotionMode
enum class ERootMotionMode : uint8_t
{
    NoRootMotionExtraction                         = 0,
    IgnoreRootMotion                               = 1,
    RootMotionFromEverything                       = 2,
    RootMotionFromMontagesOnly                     = 3,
    ERootMotionMode                                = 4

};


// Enum  Engine.ERootMotionRootLock
enum class ERootMotionRootLock : uint8_t
{
    RefPose                                        = 0,
    AnimFirstFrame                                 = 1,
    Zero                                           = 2,
    ERootMotionRootLock                            = 3

};


// Enum  Engine.EMontagePlayReturnType
enum class EMontagePlayReturnType : uint8_t
{
    MontageLength                                  = 0,
    Duration                                       = 1,
    EMontagePlayReturnType                         = 2

};


// Enum  Engine.EDrawDebugItemType
enum class EDrawDebugItemType : uint8_t
{
    DirectionalArrow                               = 0,
    Sphere                                         = 1,
    Line                                           = 2,
    OnScreenMessage                                = 3,
    CoordinateSystem                               = 4,
    EDrawDebugItemType                             = 5

};


// Enum  Engine.EAnimLinkMethod
enum class EAnimLinkMethod : uint8_t
{
    Absolute                                       = 0,
    Relative                                       = 1,
    Proportional                                   = 2,
    EAnimLinkMethod                                = 3

};


// Enum  Engine.EMontageSubStepResult
enum class EMontageSubStepResult : uint8_t
{
    Moved                                          = 0,
    NotMoved                                       = 1,
    InvalidSection                                 = 2,
    InvalidMontage                                 = 3,
    EMontageSubStepResult                          = 4

};


// Enum  Engine.EAnimNotifyEventType
enum class EAnimNotifyEventType : uint8_t
{
    Begin                                          = 0,
    End                                            = 1,
    EAnimNotifyEventType                           = 2

};


// Enum  Engine.EInertializationSpace
enum class EInertializationSpace : uint8_t
{
    Default                                        = 0,
    WorldSpace                                     = 1,
    WorldRotation                                  = 2,
    EInertializationSpace                          = 3

};


// Enum  Engine.EInertializationBoneState
enum class EInertializationBoneState : uint8_t
{
    Invalid                                        = 0,
    Valid                                          = 1,
    Excluded                                       = 2,
    EInertializationBoneState                      = 3

};


// Enum  Engine.EInertializationState
enum class EInertializationState : uint8_t
{
    Inactive                                       = 0,
    Pending                                        = 1,
    Active                                         = 2,
    EInertializationState                          = 3

};


// Enum  Engine.EEvaluatorMode
enum class EEvaluatorMode : uint8_t
{
    EM                                             = 0,
    EM                                             = 1,
    EM                                             = 2,
    EM                                             = 3

};


// Enum  Engine.EEvaluatorDataSource
enum class EEvaluatorDataSource : uint8_t
{
    EDS                                            = 0,
    EDS                                            = 1,
    EDS                                            = 2

};


// Enum  Engine.EPostCopyOperation
enum class EPostCopyOperation : uint8_t
{
    None                                           = 0,
    LogicalNegateBool                              = 1,
    EPostCopyOperation                             = 2

};


// Enum  Engine.EPinHidingMode
enum class EPinHidingMode : uint8_t
{
    NeverAsPin                                     = 0,
    PinHiddenByDefault                             = 1,
    PinShownByDefault                              = 2,
    AlwaysAsPin                                    = 3,
    EPinHidingMode                                 = 4

};


// Enum  Engine.AnimPhysCollisionType
enum class AnimPhysCollisionType : uint8_t
{
    CoM                                            = 0,
    CustomSphere                                   = 1,
    InnerSphere                                    = 2,
    OuterSphere                                    = 3,
    AnimPhysCollisionType                          = 4

};


// Enum  Engine.AnimPhysTwistAxis
enum class AnimPhysTwistAxis : uint8_t
{
    AxisX                                          = 0,
    AxisY                                          = 1,
    AxisZ                                          = 2,
    AnimPhysTwistAxis                              = 3

};


// Enum  Engine.ETypeAdvanceAnim
enum class ETypeAdvanceAnim : uint8_t
{
    ETAA                                           = 0,
    ETAA                                           = 1,
    ETAA                                           = 2,
    ETAA                                           = 3

};


// Enum  Engine.ETransitionLogicType
enum class ETransitionLogicType : uint8_t
{
    TLT                                            = 0,
    TLT                                            = 1,
    TLT                                            = 2,
    TLT                                            = 3

};


// Enum  Engine.ETransitionBlendMode
enum class ETransitionBlendMode : uint8_t
{
    TBM                                            = 0,
    TBM                                            = 1,
    TBM                                            = 2

};


// Enum  Engine.EComponentType
enum class EComponentType : uint8_t
{
    None                                           = 0,
    TranslationX                                   = 1,
    TranslationY                                   = 2,
    TranslationZ                                   = 3,
    RotationX                                      = 4,
    RotationY                                      = 5,
    RotationZ                                      = 6,
    Scale                                          = 7,
    ScaleX                                         = 8,
    ScaleY                                         = 9,
    ScaleZ                                         = 10,
    EComponentType                                 = 11

};


// Enum  Engine.EAxisOption
enum class EAxisOption : uint8_t
{
    X                                              = 0,
    Y                                              = 1,
    Z                                              = 2,
    X                                              = 3,
    Y                                              = 4,
    Z                                              = 5,
    Custom                                         = 6,
    EAxisOption                                    = 7

};


// Enum  Engine.EAnimInterpolationType
enum class EAnimInterpolationType : uint8_t
{
    Linear                                         = 0,
    Step                                           = 1,
    EAnimInterpolationType                         = 2

};


// Enum  Engine.ECurveBlendOption
enum class ECurveBlendOption : uint8_t
{
    Override                                       = 0,
    DoNotOverride                                  = 1,
    NormalizeByWeight                              = 2,
    BlendByWeight                                  = 3,
    UseBasePose                                    = 4,
    UseMaxValue                                    = 5,
    UseMinValue                                    = 6,
    UseCustomPoseIndex                             = 7,
    ECurveBlendOption                              = 8

};


// Enum  Engine.EAdditiveAnimationType
enum class EAdditiveAnimationType : uint8_t
{
    AAT                                            = 0,
    AAT                                            = 1,
    AAT                                            = 2,
    AAT                                            = 3

};


// Enum  Engine.ENotifyFilterType
enum class ENotifyFilterType : uint8_t
{
    NoFiltering                                    = 0,
    LOD                                            = 1,
    ENotifyFilterType                              = 2

};


// Enum  Engine.EMontageNotifyTickType
enum class EMontageNotifyTickType : uint8_t
{
    Queued                                         = 0,
    BranchingPoint                                 = 1,
    EMontageNotifyTickType                         = 2

};


// Enum  Engine.EBoneRotationSource
enum class EBoneRotationSource : uint8_t
{
    BRS                                            = 0,
    BRS                                            = 1,
    BRS                                            = 2,
    BRS                                            = 3

};


// Enum  Engine.EBoneControlSpace
enum class EBoneControlSpace : uint8_t
{
    BCS                                            = 0,
    BCS                                            = 1,
    BCS                                            = 2,
    BCS                                            = 3,
    BCS                                            = 4

};


// Enum  Engine.EBoneAxis
enum class EBoneAxis : uint8_t
{
    BA                                             = 0,
    BA                                             = 1,
    BA                                             = 2,
    BA                                             = 3

};


// Enum  Engine.EPrimaryAssetCookRule
enum class EPrimaryAssetCookRule : uint8_t
{
    Unknown                                        = 0,
    NeverCook                                      = 1,
    DevelopmentCook                                = 2,
    DevelopmentAlwaysCook                          = 3,
    AlwaysCook                                     = 4,
    EPrimaryAssetCookRule                          = 5

};


// Enum  Engine.ENaturalSoundFalloffMode
enum class ENaturalSoundFalloffMode : uint8_t
{
    Continues                                      = 0,
    Silent                                         = 1,
    Hold                                           = 2,
    ENaturalSoundFalloffMode                       = 3

};


// Enum  Engine.EAttenuationShape
enum class EAttenuationShape : uint8_t
{
    Sphere                                         = 0,
    Capsule                                        = 1,
    Box                                            = 2,
    Cone                                           = 3,
    EAttenuationShape                              = 4

};


// Enum  Engine.EAttenuationDistanceModel
enum class EAttenuationDistanceModel : uint8_t
{
    Linear                                         = 0,
    Logarithmic                                    = 1,
    Inverse                                        = 2,
    LogReverse                                     = 3,
    NaturalSound                                   = 4,
    Custom                                         = 5,
    EAttenuationDistanceModel                      = 6

};


// Enum  Engine.EAudioBusChannels
enum class EAudioBusChannels : uint8_t
{
    Mono                                           = 0,
    Stereo                                         = 1,
    EAudioBusChannels                              = 2

};


// Enum  Engine.EAudioFaderCurve
enum class EAudioFaderCurve : uint8_t
{
    Linear                                         = 0,
    Logarithmic                                    = 1,
    SCurve                                         = 2,
    Sin                                            = 3,
    Count                                          = 4,
    EAudioFaderCurve                               = 5

};


// Enum  Engine.EAudioOutputTarget
enum class EAudioOutputTarget : uint8_t
{
    Speaker                                        = 0,
    Controller                                     = 1,
    ControllerFallbackToSpeaker                    = 2,
    EAudioOutputTarget                             = 3

};


// Enum  Engine.EMonoChannelUpmixMethod
enum class EMonoChannelUpmixMethod : uint8_t
{
    Linear                                         = 0,
    EqualPower                                     = 1,
    FullVolume                                     = 2,
    EMonoChannelUpmixMethod                        = 3

};


// Enum  Engine.EPanningMethod
enum class EPanningMethod : uint8_t
{
    Linear                                         = 0,
    EqualPower                                     = 1,
    EPanningMethod                                 = 2

};


// Enum  Engine.EVoiceSampleRate
enum class EVoiceSampleRate : uint8_t
{
    Low16000Hz                                     = 16000,
    Normal24000Hz                                  = 24000,
    EVoiceSampleRate                               = 24001

};


// Enum  Engine.EAudioVolumeLocationState
enum class EAudioVolumeLocationState : uint8_t
{
    InsideTheVolume                                = 0,
    OutsideTheVolume                               = 1,
    EAudioVolumeLocationState                      = 2

};


// Enum  Engine.EACGParameters
enum class EACGParameters : uint8_t
{
    EACG                                           = 0,
    EACG                                           = 1,
    EACG                                           = 2,
    EACG                                           = 3,
    EACG                                           = 4,
    EACG                                           = 5,
    EACG                                           = 6,
    EACG                                           = 7,
    EACG                                           = 8,
    EACG                                           = 9,
    EACG                                           = 10,
    EACG                                           = 11,
    EACG                                           = 12,
    EACG                                           = 13,
    EACG                                           = 14,
    EACG                                           = 15,
    EACG                                           = 16,
    EACG                                           = 17,
    EACG                                           = 18,
    EACG                                           = 19,
    EACG                                           = 20,
    EACG                                           = 21,
    EACG                                           = 22,
    EACG                                           = 23,
    EACG                                           = 24,
    EACG                                           = 25,
    EACG                                           = 26,
    EACG                                           = 27,
    EACG                                           = 28,
    EACG                                           = 29,
    EACG                                           = 30,
    EACG                                           = 31,
    EACG                                           = 32,
    EACG                                           = 33,
    EACG                                           = 34,
    EACG                                           = 35,
    EACG                                           = 36,
    EACG                                           = 37,
    EACG                                           = 38,
    EACG                                           = 39,
    EACG                                           = 40,
    EACG                                           = 41,
    EACG                                           = 42,
    EACG                                           = 43,
    EACG                                           = 44,
    EACG                                           = 45,
    EACG                                           = 46,
    EACG                                           = 47,
    EACG                                           = 48,
    EACG                                           = 49,
    EACG                                           = 50,
    EACG                                           = 51,
    EACG                                           = 52,
    EACG                                           = 53,
    EACG                                           = 54,
    EACG                                           = 55,
    EACG                                           = 56,
    EACG                                           = 57,
    EACG                                           = 58,
    EACG                                           = 59,
    EACG                                           = 60,
    EACG                                           = 61,
    EACG                                           = 62,
    EACG                                           = 63,
    EACG                                           = 64,
    EACG                                           = 65,
    EACG                                           = 66,
    EACG                                           = 67,
    EACG                                           = 68,
    EACG                                           = 69,
    EACG                                           = 70,
    EACG                                           = 71,
    EACG                                           = 72,
    EACG                                           = 73,
    EACG                                           = 74,
    EACG                                           = 75,
    EACG                                           = 76,
    EACG                                           = 77,
    EACG                                           = 78,
    EACG                                           = 79,
    EACG                                           = 80,
    EACG                                           = 81,
    EACG                                           = 82,
    EACG                                           = 83,
    EACG                                           = 84,
    EACG                                           = 85,
    EACG                                           = 86,
    EACG                                           = 87,
    EACG                                           = 88,
    EACG                                           = 89

};


// Enum  Engine.EACGLayerSpec
enum class EACGLayerSpec : uint8_t
{
    EACG                                           = 0,
    EACG                                           = 1,
    EACG                                           = 2,
    EACG                                           = 3,
    EACG                                           = 4,
    EACG                                           = 5,
    EACG                                           = 6,
    EACG                                           = 7,
    EACG                                           = 8

};


// Enum  Engine.EBlendableLocation
enum class EBlendableLocation : uint8_t
{
    BL                                             = 0,
    BL                                             = 1,
    BL                                             = 2,
    BL                                             = 3,
    BL                                             = 4,
    BL                                             = 5,
    BL                                             = 6

};


// Enum  Engine.ENotifyTriggerMode
enum class ENotifyTriggerMode : uint8_t
{
    AllAnimations                                  = 0,
    HighestWeightedAnimation                       = 1,
    None                                           = 2,
    ENotifyTriggerMode                             = 3

};


// Enum  Engine.EBlendSpaceAxis
enum class EBlendSpaceAxis : uint8_t
{
    BSA                                            = 0,
    BSA                                            = 1,
    BSA                                            = 2,
    BSA                                            = 3

};


// Enum  Engine.EBlueprintNativizationFlag
enum class EBlueprintNativizationFlag : uint8_t
{
    Disabled                                       = 0,
    Dependency                                     = 1,
    ExplicitlyEnabled                              = 2,
    EBlueprintNativizationFlag                     = 3

};


// Enum  Engine.EBlueprintCompileMode
enum class EBlueprintCompileMode : uint8_t
{
    Default                                        = 0,
    Development                                    = 1,
    FinalRelease                                   = 2,
    EBlueprintCompileMode                          = 3

};


// Enum  Engine.EBlueprintType
enum class EBlueprintType : uint8_t
{
    BPTYPE                                         = 0,
    BPTYPE                                         = 1,
    BPTYPE                                         = 2,
    BPTYPE                                         = 3,
    BPTYPE                                         = 4,
    BPTYPE                                         = 5,
    BPTYPE                                         = 6

};


// Enum  Engine.EBlueprintStatus
enum class EBlueprintStatus : uint8_t
{
    BS                                             = 0,
    BS                                             = 1,
    BS                                             = 2,
    BS                                             = 3,
    BS                                             = 4,
    BS                                             = 5,
    BS                                             = 6

};


// Enum  Engine.EDOFMode
enum class EDOFMode : uint8_t
{
    Default                                        = 0,
    SixDOF                                         = 1,
    YZPlane                                        = 2,
    XZPlane                                        = 3,
    XYPlane                                        = 4,
    CustomPlane                                    = 5,
    None                                           = 6,
    EDOFMode                                       = 7

};


// Enum  Engine.EBrushType
enum class EBrushType : uint8_t
{
    Brush                                          = 0,
    Brush                                          = 1,
    Brush                                          = 2,
    Brush                                          = 3

};


// Enum  Engine.ECsgOper
enum class ECsgOper : uint8_t
{
    CSG                                            = 0,
    CSG                                            = 1,
    CSG                                            = 2,
    CSG                                            = 3,
    CSG                                            = 4,
    CSG                                            = 5,
    CSG                                            = 6

};


// Enum  Engine.EInitialOscillatorOffset
enum class EInitialOscillatorOffset : uint8_t
{
    EOO                                            = 0,
    EOO                                            = 1,
    EOO                                            = 2

};


// Enum  Engine.EOscillatorWaveform
enum class EOscillatorWaveform : uint8_t
{
    SineWave                                       = 0,
    PerlinNoise                                    = 1,
    EOscillatorWaveform                            = 2

};


// Enum  Engine.ECameraShakeDurationType
enum class ECameraShakeDurationType : uint8_t
{
    Fixed                                          = 0,
    Infinite                                       = 1,
    Custom                                         = 2,
    ECameraShakeDurationType                       = 3

};


// Enum  Engine.ECameraShakeUpdateResultFlags
enum class ECameraShakeUpdateResultFlags : uint8_t
{
    ApplyAsAbsolute                                = 1,
    SkipAutoScale                                  = 2,
    SkipAutoPlaySpace                              = 4,
    Default                                        = 0,
    ECameraShakeUpdateResultFlags                  = 5

};


// Enum  Engine.ECameraShakeAttenuation
enum class ECameraShakeAttenuation : uint8_t
{
    Linear                                         = 0,
    Quadratic                                      = 1,
    ECameraShakeAttenuation                        = 2

};


// Enum  Engine.ECameraAlphaBlendMode
enum class ECameraAlphaBlendMode : uint8_t
{
    CABM                                           = 0,
    CABM                                           = 1,
    CABM                                           = 2

};


// Enum  Engine.ECameraFOVMode
enum class ECameraFOVMode : uint8_t
{
    HorizontalFOV                                  = 0,
    VerticalFOV                                    = 1,
    FixedAspectVerticalFOV                         = 2,
    ECameraFOVMode                                 = 3

};


// Enum  Engine.ECameraProjectionMode
enum class ECameraProjectionMode : uint8_t
{
    Perspective                                    = 0,
    Orthographic                                   = 1,
    ECameraProjectionMode                          = 2

};


// Enum  Engine.ECloudStorageDelegate
enum class ECloudStorageDelegate : uint8_t
{
    CSD                                            = 0,
    CSD                                            = 1,
    CSD                                            = 2,
    CSD                                            = 3,
    CSD                                            = 4,
    CSD                                            = 5,
    CSD                                            = 6,
    CSD                                            = 7

};


// Enum  Engine.EAngularDriveMode
enum class EAngularDriveMode : uint8_t
{
    SLERP                                          = 0,
    TwistAndSwing                                  = 1,
    EAngularDriveMode                              = 2

};


// Enum  Engine.ECurveTableMode
enum class ECurveTableMode : uint8_t
{
    Empty                                          = 0,
    SimpleCurves                                   = 1,
    RichCurves                                     = 2,
    ECurveTableMode                                = 3

};


// Enum  Engine.ECustomAttributeBlendType
enum class ECustomAttributeBlendType : uint8_t
{
    Override                                       = 0,
    Blend                                          = 1,
    ECustomAttributeBlendType                      = 2

};


// Enum  Engine.EEvaluateCurveTableResult
enum class EEvaluateCurveTableResult : uint8_t
{
    RowFound                                       = 0,
    RowNotFound                                    = 1,
    EEvaluateCurveTableResult                      = 2

};


// Enum  Engine.EGrammaticalNumber
enum class EGrammaticalNumber : uint8_t
{
    Singular                                       = 0,
    Plural                                         = 1,
    EGrammaticalNumber                             = 2

};


// Enum  Engine.EGrammaticalGender
enum class EGrammaticalGender : uint8_t
{
    Neuter                                         = 0,
    Masculine                                      = 1,
    Feminine                                       = 2,
    Mixed                                          = 3,
    EGrammaticalGender                             = 4

};


// Enum  Engine.DistributionParamMode
enum class DistributionParamMode : uint8_t
{
    DPM                                            = 0,
    DPM                                            = 1,
    DPM                                            = 2,
    DPM                                            = 3

};


// Enum  Engine.EDistributionVectorMirrorFlags
enum class EDistributionVectorMirrorFlags : uint8_t
{
    EDVMF                                          = 0,
    EDVMF                                          = 1,
    EDVMF                                          = 2,
    EDVMF                                          = 3

};


// Enum  Engine.EDistributionVectorLockFlags
enum class EDistributionVectorLockFlags : uint8_t
{
    EDVLF                                          = 0,
    EDVLF                                          = 1,
    EDVLF                                          = 2,
    EDVLF                                          = 3,
    EDVLF                                          = 4,
    EDVLF                                          = 5

};


// Enum  Engine.ENodeEnabledState
enum class ENodeEnabledState : uint8_t
{
    Enabled                                        = 0,
    Disabled                                       = 1,
    DevelopmentOnly                                = 2,
    ENodeEnabledState                              = 3

};


// Enum  Engine.ENodeAdvancedPins
enum class ENodeAdvancedPins : uint8_t
{
    NoPins                                         = 0,
    Shown                                          = 1,
    Hidden                                         = 2,
    ENodeAdvancedPins                              = 3

};


// Enum  Engine.ENodeTitleType
enum class ENodeTitleType : uint8_t
{
    FullTitle                                      = 0,
    ListView                                       = 1,
    EditableTitle                                  = 2,
    MenuTitle                                      = 3,
    MAX                                            = 4,
    ENodeTitleType                                 = 5

};


// Enum  Engine.EPinContainerType
enum class EPinContainerType : uint8_t
{
    None                                           = 0,
    Array                                          = 1,
    Set                                            = 2,
    Map                                            = 3,
    EPinContainerType                              = 4

};


// Enum  Engine.EEdGraphPinDirection
enum class EEdGraphPinDirection : uint8_t
{
    EGPD                                           = 0,
    EGPD                                           = 1,
    EGPD                                           = 2

};


// Enum  Engine.EBlueprintPinStyleType
enum class EBlueprintPinStyleType : uint8_t
{
    BPST                                           = 0,
    BPST                                           = 1,
    BPST                                           = 2

};


// Enum  Engine.ECanCreateConnectionResponse
enum class ECanCreateConnectionResponse : uint8_t
{
    CONNECT                                        = 0,
    CONNECT                                        = 1,
    CONNECT                                        = 2,
    CONNECT                                        = 3,
    CONNECT                                        = 4,
    CONNECT                                        = 5,
    CONNECT                                        = 6

};


// Enum  Engine.EGraphType
enum class EGraphType : uint8_t
{
    GT                                             = 0,
    GT                                             = 1,
    GT                                             = 2,
    GT                                             = 3,
    GT                                             = 4,
    GT                                             = 5

};


// Enum  Engine.ETransitionType
enum class ETransitionType : uint8_t
{
    None                                           = 0,
    Paused                                         = 1,
    Loading                                        = 2,
    Saving                                         = 3,
    Connecting                                     = 4,
    Precaching                                     = 5,
    WaitingToConnect                               = 6,
    MAX                                            = 7

};


// Enum  Engine.EFullyLoadPackageType
enum class EFullyLoadPackageType : uint8_t
{
    FULLYLOAD                                      = 0,
    FULLYLOAD                                      = 1,
    FULLYLOAD                                      = 2,
    FULLYLOAD                                      = 3,
    FULLYLOAD                                      = 4,
    FULLYLOAD                                      = 5

};


// Enum  Engine.EViewModeIndex
enum class EViewModeIndex : uint8_t
{
    VMI                                            = 0,
    VMI                                            = 1,
    VMI                                            = 2,
    VMI                                            = 3,
    VMI                                            = 4,
    VMI                                            = 5,
    VMI                                            = 6,
    VMI                                            = 8,
    VMI                                            = 9,
    VMI                                            = 10,
    VMI                                            = 11,
    VMI                                            = 12,
    VMI                                            = 14,
    VMI                                            = 15,
    VMI                                            = 16,
    VMI                                            = 18,
    VMI                                            = 19,
    VMI                                            = 20,
    VMI                                            = 21,
    VMI                                            = 22,
    VMI                                            = 23,
    VMI                                            = 24,
    VMI                                            = 25,
    VMI                                            = 26,
    VMI                                            = 27,
    VMI                                            = 28,
    VMI                                            = 29,
    VMI                                            = 30,
    VMI                                            = 31,
    VMI                                            = 32,
    VMI                                            = 33,
    VMI                                            = 34,
    VMI                                            = 35,
    VMI                                            = 36,
    VMI                                            = 37,
    VMI                                            = 38,
    VMI                                            = 39,
    VMI                                            = 40,
    VMI                                            = 41,
    VMI                                            = 42,
    VMI                                            = 255

};


// Enum  Engine.EDemoPlayFailure
enum class EDemoPlayFailure : uint8_t
{
    Generic                                        = 0,
    DemoNotFound                                   = 1,
    Corrupt                                        = 2,
    InvalidVersion                                 = 3,
    InitBase                                       = 4,
    GameSpecificHeader                             = 5,
    ReplayStreamerInternal                         = 6,
    LoadMap                                        = 7,
    Serialization                                  = 8,
    EDemoPlayFailure                               = 9

};


// Enum  Engine.ENetworkLagState
enum class ENetworkLagState : uint8_t
{
    NotLagging                                     = 0,
    Lagging                                        = 1,
    ENetworkLagState                               = 2

};


// Enum  Engine.EMouseCaptureMode
enum class EMouseCaptureMode : uint8_t
{
    NoCapture                                      = 0,
    CapturePermanently                             = 1,
    CapturePermanently                             = 2,
    CaptureDuringMouseDown                         = 3,
    CaptureDuringRightMouseDown                    = 4,
    CaptureDuringThumbMouseDown                    = 5,
    EMouseCaptureMode                              = 6

};


// Enum  Engine.ECustomTimeStepSynchronizationState
enum class ECustomTimeStepSynchronizationState : uint8_t
{
    Closed                                         = 0,
    Error                                          = 1,
    Synchronized                                   = 2,
    Synchronizing                                  = 3,
    ECustomTimeStepSynchronizationState            = 4

};


// Enum  Engine.EMeshBufferAccess
enum class EMeshBufferAccess : uint8_t
{
    Default                                        = 0,
    ForceCPUAndGPU                                 = 1,
    EMeshBufferAccess                              = 2

};


// Enum  Engine.EComponentSocketType
enum class EComponentSocketType : uint8_t
{
    Invalid                                        = 0,
    Bone                                           = 1,
    Socket                                         = 2,
    EComponentSocketType                           = 3

};


// Enum  Engine.EPhysicalMaterialMaskColor
enum class EPhysicalMaterialMaskColor : uint8_t
{
    Red                                            = 0,
    Green                                          = 1,
    Blue                                           = 2,
    Cyan                                           = 3,
    Magenta                                        = 4,
    Yellow                                         = 5,
    White                                          = 6,
    Black                                          = 7,
    MAX                                            = 8

};


// Enum  Engine.EWalkableSlopeBehavior
enum class EWalkableSlopeBehavior : uint8_t
{
    WalkableSlope                                  = 0,
    WalkableSlope                                  = 1,
    WalkableSlope                                  = 2,
    WalkableSlope                                  = 3,
    WalkableSlope                                  = 4

};


// Enum  Engine.EAutoPossessAI
enum class EAutoPossessAI : uint8_t
{
    Disabled                                       = 0,
    PlacedInWorld                                  = 1,
    Spawned                                        = 2,
    PlacedInWorldOrSpawned                         = 3,
    EAutoPossessAI                                 = 4

};


// Enum  Engine.EUpdateRateShiftBucket
enum class EUpdateRateShiftBucket : uint8_t
{
    ShiftBucket0                                   = 0,
    ShiftBucket1                                   = 1,
    ShiftBucket2                                   = 2,
    ShiftBucket3                                   = 3,
    ShiftBucket4                                   = 4,
    ShiftBucket5                                   = 5,
    ShiftBucketMax                                 = 6,
    EUpdateRateShiftBucket                         = 7

};


// Enum  Engine.EShadowMapFlags
enum class EShadowMapFlags : uint8_t
{
    SMF                                            = 0,
    SMF                                            = 1,
    SMF                                            = 2

};


// Enum  Engine.ELightMapPaddingType
enum class ELightMapPaddingType : uint8_t
{
    LMPT                                           = 0,
    LMPT                                           = 1,
    LMPT                                           = 2,
    LMPT                                           = 3

};


// Enum  Engine.ECollisionEnabled
enum class ECollisionEnabled : uint8_t
{
    NoCollision                                    = 0,
    QueryOnly                                      = 1,
    PhysicsOnly                                    = 2,
    QueryAndPhysics                                = 3,
    ECollisionEnabled                              = 4

};


// Enum  Engine.ETimelineSigType
enum class ETimelineSigType : uint8_t
{
    ETS                                            = 0,
    ETS                                            = 1,
    ETS                                            = 2,
    ETS                                            = 3,
    ETS                                            = 4,
    ETS                                            = 5

};


// Enum  Engine.EFilterInterpolationType
enum class EFilterInterpolationType : uint8_t
{
    BSIT                                           = 0,
    BSIT                                           = 1,
    BSIT                                           = 2,
    BSIT                                           = 3

};


// Enum  Engine.ECollisionResponse
enum class ECollisionResponse : uint8_t
{
    ECR                                            = 0,
    ECR                                            = 1,
    ECR                                            = 2,
    ECR                                            = 3

};


// Enum  Engine.EOverlapFilterOption
enum class EOverlapFilterOption : uint8_t
{
    OverlapFilter                                  = 0,
    OverlapFilter                                  = 1,
    OverlapFilter                                  = 2,
    OverlapFilter                                  = 3

};


// Enum  Engine.ENetworkSmoothingMode
enum class ENetworkSmoothingMode : uint8_t
{
    Disabled                                       = 0,
    Linear                                         = 1,
    Exponential                                    = 2,
    Replay                                         = 3,
    ENetworkSmoothingMode                          = 4

};


// Enum  Engine.ELightingBuildQuality
enum class ELightingBuildQuality : uint8_t
{
    Quality                                        = 0,
    Quality                                        = 1,
    Quality                                        = 2,
    Quality                                        = 3,
    Quality                                        = 4

};


// Enum  Engine.EMaterialShadingRate
enum class EMaterialShadingRate : uint8_t
{
    MSR                                            = 0,
    MSR                                            = 1,
    MSR                                            = 2,
    MSR                                            = 3,
    MSR                                            = 4,
    MSR                                            = 5,
    MSR                                            = 6,
    MSR                                            = 7,
    MSR                                            = 8

};


// Enum  Engine.EMaterialStencilCompare
enum class EMaterialStencilCompare : uint8_t
{
    MSC                                            = 0,
    MSC                                            = 1,
    MSC                                            = 2,
    MSC                                            = 3,
    MSC                                            = 4,
    MSC                                            = 5,
    MSC                                            = 6,
    MSC                                            = 7,
    MSC                                            = 8,
    MSC                                            = 9

};


// Enum  Engine.EMaterialSamplerType
enum class EMaterialSamplerType : uint8_t
{
    SAMPLERTYPE                                    = 0,
    SAMPLERTYPE                                    = 1,
    SAMPLERTYPE                                    = 2,
    SAMPLERTYPE                                    = 3,
    SAMPLERTYPE                                    = 4,
    SAMPLERTYPE                                    = 5,
    SAMPLERTYPE                                    = 6,
    SAMPLERTYPE                                    = 7,
    SAMPLERTYPE                                    = 8,
    SAMPLERTYPE                                    = 9,
    SAMPLERTYPE                                    = 10,
    SAMPLERTYPE                                    = 11,
    SAMPLERTYPE                                    = 12,
    SAMPLERTYPE                                    = 13,
    SAMPLERTYPE                                    = 14,
    SAMPLERTYPE                                    = 15,
    SAMPLERTYPE                                    = 16,
    SAMPLERTYPE                                    = 17

};


// Enum  Engine.EMaterialTessellationMode
enum class EMaterialTessellationMode : uint8_t
{
    MTM                                            = 0,
    MTM                                            = 1,
    MTM                                            = 2,
    MTM                                            = 3

};


// Enum  Engine.EMaterialShadingModel
enum class EMaterialShadingModel : uint8_t
{
    MSM                                            = 0,
    MSM                                            = 1,
    MSM                                            = 2,
    MSM                                            = 3,
    MSM                                            = 4,
    MSM                                            = 5,
    MSM                                            = 6,
    MSM                                            = 7,
    MSM                                            = 8,
    MSM                                            = 9,
    MSM                                            = 10,
    MSM                                            = 11,
    MSM                                            = 12,
    MSM                                            = 13,
    MSM                                            = 14,
    MSM                                            = 15,
    MSM                                            = 16,
    MSM                                            = 17,
    MSM                                            = 18

};


// Enum  Engine.EParticleCollisionMode
enum class EParticleCollisionMode : uint8_t
{
    SceneDepth                                     = 0,
    DistanceField                                  = 1,
    EParticleCollisionMode                         = 2

};


// Enum  Engine.ETrailWidthMode
enum class ETrailWidthMode : uint8_t
{
    ETrailWidthMode                                = 0,
    ETrailWidthMode                                = 1,
    ETrailWidthMode                                = 2,
    ETrailWidthMode                                = 3

};


// Enum  Engine.EGBufferFormat
enum class EGBufferFormat : uint8_t
{
    Force8BitsPerChannel                           = 0,
    Default                                        = 1,
    HighPrecisionNormals                           = 3,
    Force16BitsPerChannel                          = 5,
    EGBufferFormat                                 = 6

};


// Enum  Engine.ESceneCaptureCompositeMode
enum class ESceneCaptureCompositeMode : uint8_t
{
    SCCM                                           = 0,
    SCCM                                           = 1,
    SCCM                                           = 2,
    SCCM                                           = 3

};


// Enum  Engine.ESceneCaptureSource
enum class ESceneCaptureSource : uint8_t
{
    SCS                                            = 0,
    SCS                                            = 1,
    SCS                                            = 2,
    SCS                                            = 3,
    SCS                                            = 4,
    SCS                                            = 5,
    SCS                                            = 6,
    SCS                                            = 7,
    SCS                                            = 8,
    SCS                                            = 9,
    SCS                                            = 10,
    SCS                                            = 11,
    SCS                                            = 12

};


// Enum  Engine.ETranslucentSortPolicy
enum class ETranslucentSortPolicy : uint8_t
{
    SortByDistance                                 = 0,
    SortByProjectedZ                               = 1,
    SortAlongAxis                                  = 2,
    ETranslucentSortPolicy                         = 3

};


// Enum  Engine.ERefractionMode
enum class ERefractionMode : uint8_t
{
    RM                                             = 0,
    RM                                             = 1,
    RM                                             = 2

};


// Enum  Engine.EDirLightShadowBiasOverride
enum class EDirLightShadowBiasOverride : uint8_t
{
    DLSBO                                          = 0,
    DLSBO                                          = 1,
    DLSBO                                          = 2,
    DLSBO                                          = 3

};


// Enum  Engine.ETranslucencyLightingMode
enum class ETranslucencyLightingMode : uint8_t
{
    TLM                                            = 0,
    TLM                                            = 1,
    TLM                                            = 2,
    TLM                                            = 3,
    TLM                                            = 4,
    TLM                                            = 5,
    TLM                                            = 6

};


// Enum  Engine.ESamplerSourceMode
enum class ESamplerSourceMode : uint8_t
{
    SSM                                            = 0,
    SSM                                            = 1,
    SSM                                            = 2,
    SSM                                            = 3

};


// Enum  Engine.EMaterialFloatPrecisionModeVulkanOverride
enum class EMaterialFloatPrecisionModeVulkanOverride : uint8_t
{
    MFPMV                                          = 0,
    MFPMV                                          = 1,
    MFPMV                                          = 2,
    MFPMV                                          = 3,
    MFPMV                                          = 4

};


// Enum  Engine.EMaterialFloatPrecisionMode
enum class EMaterialFloatPrecisionMode : uint8_t
{
    MFPM                                           = 0,
    MFPM                                           = 1,
    MFPM                                           = 2,
    MFPM                                           = 3

};


// Enum  Engine.EBlendMode
enum class EBlendMode : uint8_t
{
    BLEND                                          = 0,
    BLEND                                          = 1,
    BLEND                                          = 2,
    BLEND                                          = 3,
    BLEND                                          = 4,
    BLEND                                          = 5,
    BLEND                                          = 6,
    BLEND                                          = 7

};


// Enum  Engine.EOcclusionCombineMode
enum class EOcclusionCombineMode : uint8_t
{
    OCM                                            = 0,
    OCM                                            = 1,
    OCM                                            = 2

};


// Enum  Engine.EVolumetricOcclusionMode
enum class EVolumetricOcclusionMode : uint8_t
{
    OcclusionNone                                  = 0,
    AmbientOcclusionOnly                           = 1,
    SkyOcclusionOnly                               = 2,
    AmbientAndSkyOcclusion                         = 3,
    EVolumetricOcclusionMode                       = 4

};


// Enum  Engine.EVolumetricLightmapSampleType
enum class EVolumetricLightmapSampleType : uint8_t
{
    Default                                        = 0,
    ForceInteriorVolume                            = 1,
    EVolumetricLightmapSampleType                  = 2

};


// Enum  Engine.EViewSignificantState
enum class EViewSignificantState : uint8_t
{
    None                                           = 0,
    ViewTarget                                     = 1,
    NotViewTarget                                  = 2,
    EViewSignificantState                          = 3

};


// Enum  Engine.EMpeMoveableType
enum class EMpeMoveableType : uint8_t
{
    Unmoveable                                     = 0,
    Moveable                                       = 1,
    Movaeble                                       = 2,
    EMpeMoveableType                               = 3

};


// Enum  Engine.ELightmapType
enum class ELightmapType : uint8_t
{
    Default                                        = 0,
    ForceSurface                                   = 1,
    ForceVolumetric                                = 2,
    ELightmapType                                  = 3

};


// Enum  Engine.EIndirectLightingCacheQuality
enum class EIndirectLightingCacheQuality : uint8_t
{
    ILCQ                                           = 0,
    ILCQ                                           = 1,
    ILCQ                                           = 2,
    ILCQ                                           = 3

};


// Enum  Engine.ESceneDepthPriorityGroup
enum class ESceneDepthPriorityGroup : uint8_t
{
    SDPG                                           = 0,
    SDPG                                           = 1,
    SDPG                                           = 2

};


// Enum  Engine.EAspectRatioAxisConstraint
enum class EAspectRatioAxisConstraint : uint8_t
{
    AspectRatio                                    = 0,
    AspectRatio                                    = 1,
    AspectRatio                                    = 2,
    AspectRatio                                    = 3

};


// Enum  Engine.EFontCacheType
enum class EFontCacheType : uint8_t
{
    Offline                                        = 0,
    Runtime                                        = 1,
    EFontCacheType                                 = 2

};


// Enum  Engine.EFontImportCharacterSet
enum class EFontImportCharacterSet : uint8_t
{
    FontICS                                        = 0,
    FontICS                                        = 1,
    FontICS                                        = 2,
    FontICS                                        = 3

};


// Enum  Engine.EStandbyType
enum class EStandbyType : uint8_t
{
    STDBY                                          = 0,
    STDBY                                          = 1,
    STDBY                                          = 2,
    STDBY                                          = 3

};


// Enum  Engine.ESuggestProjVelocityTraceOption
enum class ESuggestProjVelocityTraceOption : uint8_t
{
    DoNotTrace                                     = 0,
    TraceFullPath                                  = 1,
    OnlyTraceWhileAscending                        = 2,
    ESuggestProjVelocityTraceOption                = 3

};


// Enum  Engine.EWindowMode
enum class EWindowMode : uint8_t
{
    Fullscreen                                     = 0,
    WindowedFullscreen                             = 1,
    Windowed                                       = 2,
    EWindowMode                                    = 3

};


// Enum  Engine.EIndirectLightVolumeType
enum class EIndirectLightVolumeType : uint8_t
{
    DawnInterior                                   = 0,
    DawnInterior                                   = 1,
    DawnInterior                                   = 2,
    DawnInterior                                   = 3,
    DawnInterior                                   = 4,
    DawnInterior                                   = 5,
    DawnInterior                                   = 6

};


// Enum  Engine.EHitProxyPriority
enum class EHitProxyPriority : uint8_t
{
    HPP                                            = 0,
    HPP                                            = 1,
    HPP                                            = 2,
    HPP                                            = 3,
    HPP                                            = 4

};


// Enum  Engine.ECubemapEncodeType
enum class ECubemapEncodeType : uint8_t
{
    CET                                            = 0,
    CET                                            = 1,
    CET                                            = 2

};


// Enum  Engine.EImportanceWeight
enum class EImportanceWeight : uint8_t
{
    Luminance                                      = 0,
    Red                                            = 1,
    Green                                          = 2,
    Blue                                           = 3,
    Alpha                                          = 4,
    EImportanceWeight                              = 5

};


// Enum  Engine.EAdManagerDelegate
enum class EAdManagerDelegate : uint8_t
{
    AMD                                            = 0,
    AMD                                            = 1,
    AMD                                            = 2

};


// Enum  Engine.EAnimAlphaInputType
enum class EAnimAlphaInputType : uint8_t
{
    Float                                          = 0,
    Bool                                           = 1,
    Curve                                          = 2,
    EAnimAlphaInputType                            = 3

};


// Enum  Engine.ETrackActiveCondition
enum class ETrackActiveCondition : uint8_t
{
    ETAC                                           = 0,
    ETAC                                           = 1,
    ETAC                                           = 2,
    ETAC                                           = 3

};


// Enum  Engine.EInterpTrackMoveRotMode
enum class EInterpTrackMoveRotMode : uint8_t
{
    IMR                                            = 0,
    IMR                                            = 1,
    IMR                                            = 2,
    IMR                                            = 3

};


// Enum  Engine.EInterpMoveAxis
enum class EInterpMoveAxis : uint8_t
{
    AXIS                                           = 0,
    AXIS                                           = 1,
    AXIS                                           = 2,
    AXIS                                           = 3,
    AXIS                                           = 4,
    AXIS                                           = 5,
    AXIS                                           = 6

};


// Enum  Engine.ETrackToggleAction
enum class ETrackToggleAction : uint8_t
{
    ETTA                                           = 0,
    ETTA                                           = 1,
    ETTA                                           = 2,
    ETTA                                           = 3,
    ETTA                                           = 4

};


// Enum  Engine.EVisibilityTrackCondition
enum class EVisibilityTrackCondition : uint8_t
{
    EVTC                                           = 0,
    EVTC                                           = 1,
    EVTC                                           = 2,
    EVTC                                           = 3

};


// Enum  Engine.EVisibilityTrackAction
enum class EVisibilityTrackAction : uint8_t
{
    EVTA                                           = 0,
    EVTA                                           = 1,
    EVTA                                           = 2,
    EVTA                                           = 3

};


// Enum  Engine.ESlateGesture
enum class ESlateGesture : uint8_t
{
    None                                           = 0,
    Scroll                                         = 1,
    Magnify                                        = 2,
    Swipe                                          = 3,
    Rotate                                         = 4,
    LongPress                                      = 5,
    ESlateGesture                                  = 6

};


// Enum  Engine.EMIDCreationFlags
enum class EMIDCreationFlags : uint8_t
{
    None                                           = 0,
    Transient                                      = 1,
    EMIDCreationFlags                              = 2

};


// Enum  Engine.EMatrixColumns
enum class EMatrixColumns : uint8_t
{
    First                                          = 0,
    Second                                         = 1,
    Third                                          = 2,
    Fourth                                         = 3,
    EMatrixColumns                                 = 4

};


// Enum  Engine.ELerpInterpolationMode
enum class ELerpInterpolationMode : uint8_t
{
    QuatInterp                                     = 0,
    EulerInterp                                    = 1,
    DualQuatInterp                                 = 2,
    ELerpInterpolationMode                         = 3

};


// Enum  Engine.EEasingFunc
enum class EEasingFunc : uint8_t
{
    Linear                                         = 0,
    Step                                           = 1,
    SinusoidalIn                                   = 2,
    SinusoidalOut                                  = 3,
    SinusoidalInOut                                = 4,
    EaseIn                                         = 5,
    EaseOut                                        = 6,
    EaseInOut                                      = 7,
    ExpoIn                                         = 8,
    ExpoOut                                        = 9,
    ExpoInOut                                      = 10,
    CircularIn                                     = 11,
    CircularOut                                    = 12,
    CircularInOut                                  = 13,
    EEasingFunc                                    = 14

};


// Enum  Engine.ERoundingMode
enum class ERoundingMode : uint8_t
{
    HalfToEven                                     = 0,
    HalfFromZero                                   = 1,
    HalfToZero                                     = 2,
    FromZero                                       = 3,
    ToZero                                         = 4,
    ToNegativeInfinity                             = 5,
    ToPositiveInfinity                             = 6,
    ERoundingMode                                  = 7

};


// Enum  Engine.EStreamingVolumeUsage
enum class EStreamingVolumeUsage : uint8_t
{
    SVB                                            = 0,
    SVB                                            = 1,
    SVB                                            = 2,
    SVB                                            = 3,
    SVB                                            = 4,
    SVB                                            = 5

};


// Enum  Engine.ESyncOption
enum class ESyncOption : uint8_t
{
    Drive                                          = 0,
    Passive                                        = 1,
    Disabled                                       = 2,
    ESyncOption                                    = 3

};


// Enum  Engine.EMaterialDecalResponse
enum class EMaterialDecalResponse : uint8_t
{
    MDR                                            = 0,
    MDR                                            = 1,
    MDR                                            = 2,
    MDR                                            = 3,
    MDR                                            = 4,
    MDR                                            = 5,
    MDR                                            = 6,
    MDR                                            = 7,
    MDR                                            = 8

};


// Enum  Engine.EDecalBlendMode
enum class EDecalBlendMode : uint8_t
{
    DBM                                            = 0,
    DBM                                            = 1,
    DBM                                            = 2,
    DBM                                            = 3,
    DBM                                            = 4,
    DBM                                            = 5,
    DBM                                            = 6,
    DBM                                            = 7,
    DBM                                            = 8,
    DBM                                            = 9,
    DBM                                            = 10,
    DBM                                            = 11,
    DBM                                            = 12,
    DBM                                            = 13,
    DBM                                            = 14,
    DBM                                            = 15,
    DBM                                            = 16,
    DBM                                            = 17,
    DBM                                            = 18

};


// Enum  Engine.ETextureColorChannel
enum class ETextureColorChannel : uint8_t
{
    TCC                                            = 0,
    TCC                                            = 1,
    TCC                                            = 2,
    TCC                                            = 3,
    TCC                                            = 4

};


// Enum  Engine.EMaterialAttributeBlend
enum class EMaterialAttributeBlend : uint8_t
{
    Blend                                          = 0,
    UseA                                           = 1,
    UseB                                           = 2,
    EMaterialAttributeBlend                        = 3

};


// Enum  Engine.EChannelMaskParameterColor
enum class EChannelMaskParameterColor : uint8_t
{
    Red                                            = 0,
    Green                                          = 1,
    Blue                                           = 2,
    Alpha                                          = 3,
    EChannelMaskParameterColor                     = 4

};


// Enum  Engine.EClampMode
enum class EClampMode : uint8_t
{
    CMODE                                          = 0,
    CMODE                                          = 1,
    CMODE                                          = 2,
    CMODE                                          = 3

};


// Enum  Engine.ECustomMaterialOutputType
enum class ECustomMaterialOutputType : uint8_t
{
    CMOT                                           = 0,
    CMOT                                           = 1,
    CMOT                                           = 2,
    CMOT                                           = 3,
    CMOT                                           = 4,
    CMOT                                           = 5

};


// Enum  Engine.EDepthOfFieldFunctionValue
enum class EDepthOfFieldFunctionValue : uint8_t
{
    TDOF                                           = 0,
    TDOF                                           = 1,
    TDOF                                           = 2,
    TDOF                                           = 3,
    TDOF                                           = 4

};


// Enum  Engine.EFunctionInputType
enum class EFunctionInputType : uint8_t
{
    FunctionInput                                  = 0,
    FunctionInput                                  = 1,
    FunctionInput                                  = 2,
    FunctionInput                                  = 3,
    FunctionInput                                  = 4,
    FunctionInput                                  = 5,
    FunctionInput                                  = 6,
    FunctionInput                                  = 7,
    FunctionInput                                  = 8,
    FunctionInput                                  = 9,
    FunctionInput                                  = 10,
    FunctionInput                                  = 11

};


// Enum  Engine.ENoiseFunction
enum class ENoiseFunction : uint8_t
{
    NOISEFUNCTION                                  = 0,
    NOISEFUNCTION                                  = 1,
    NOISEFUNCTION                                  = 2,
    NOISEFUNCTION                                  = 3,
    NOISEFUNCTION                                  = 4,
    NOISEFUNCTION                                  = 5,
    NOISEFUNCTION                                  = 6

};


// Enum  Engine.EDynamicRVTMode
enum class EDynamicRVTMode : uint8_t
{
    WorldHeightDelta                               = 0,
    MipLevelError                                  = 1,
    Distance                                       = 2,
    Custom                                         = 3,
    EDynamicRVTMode                                = 4

};


// Enum  Engine.ERuntimeVirtualTextureTextureAddressMode
enum class ERuntimeVirtualTextureTextureAddressMode : uint8_t
{
    RVTTA                                          = 0,
    RVTTA                                          = 1,
    RVTTA                                          = 2

};


// Enum  Engine.ERuntimeVirtualTextureMipValueMode
enum class ERuntimeVirtualTextureMipValueMode : uint8_t
{
    RVTMVM                                         = 0,
    RVTMVM                                         = 1,
    RVTMVM                                         = 2,
    RVTMVM                                         = 3

};


// Enum  Engine.EMaterialSceneAttributeInputMode
enum class EMaterialSceneAttributeInputMode : uint8_t
{
    Coordinates                                    = 0,
    OffsetFraction                                 = 1,
    EMaterialSceneAttributeInputMode               = 2

};


// Enum  Engine.ESpeedTreeLODType
enum class ESpeedTreeLODType : uint8_t
{
    STLOD                                          = 0,
    STLOD                                          = 1,
    STLOD                                          = 2

};


// Enum  Engine.ESpeedTreeWindType
enum class ESpeedTreeWindType : uint8_t
{
    STW                                            = 0,
    STW                                            = 1,
    STW                                            = 2,
    STW                                            = 3,
    STW                                            = 4,
    STW                                            = 5,
    STW                                            = 6,
    STW                                            = 7

};


// Enum  Engine.ESpeedTreeGeometryType
enum class ESpeedTreeGeometryType : uint8_t
{
    STG                                            = 0,
    STG                                            = 1,
    STG                                            = 2,
    STG                                            = 3,
    STG                                            = 4,
    STG                                            = 5

};


// Enum  Engine.EMaterialExposedTextureProperty
enum class EMaterialExposedTextureProperty : uint8_t
{
    TMTM                                           = 0,
    TMTM                                           = 1,
    TMTM                                           = 2

};


// Enum  Engine.ETextureMipValueMode
enum class ETextureMipValueMode : uint8_t
{
    TMVM                                           = 0,
    TMVM                                           = 1,
    TMVM                                           = 2,
    TMVM                                           = 3,
    TMVM                                           = 4

};


// Enum  Engine.EMaterialVectorCoordTransform
enum class EMaterialVectorCoordTransform : uint8_t
{
    TRANSFORM                                      = 0,
    TRANSFORM                                      = 1,
    TRANSFORM                                      = 2,
    TRANSFORM                                      = 3,
    TRANSFORM                                      = 4,
    TRANSFORM                                      = 5,
    TRANSFORM                                      = 6

};


// Enum  Engine.EMaterialVectorCoordTransformSource
enum class EMaterialVectorCoordTransformSource : uint8_t
{
    TRANSFORMSOURCE                                = 0,
    TRANSFORMSOURCE                                = 1,
    TRANSFORMSOURCE                                = 2,
    TRANSFORMSOURCE                                = 3,
    TRANSFORMSOURCE                                = 4,
    TRANSFORMSOURCE                                = 5,
    TRANSFORMSOURCE                                = 6

};


// Enum  Engine.EMaterialPositionTransformSource
enum class EMaterialPositionTransformSource : uint8_t
{
    TRANSFORMPOSSOURCE                             = 0,
    TRANSFORMPOSSOURCE                             = 1,
    TRANSFORMPOSSOURCE                             = 2,
    TRANSFORMPOSSOURCE                             = 3,
    TRANSFORMPOSSOURCE                             = 4,
    TRANSFORMPOSSOURCE                             = 5,
    TRANSFORMPOSSOURCE                             = 6

};


// Enum  Engine.EVectorNoiseFunction
enum class EVectorNoiseFunction : uint8_t
{
    VNF                                            = 0,
    VNF                                            = 1,
    VNF                                            = 2,
    VNF                                            = 3,
    VNF                                            = 4,
    VNF                                            = 5

};


// Enum  Engine.EMaterialExposedViewProperty
enum class EMaterialExposedViewProperty : uint8_t
{
    MEVP                                           = 0,
    MEVP                                           = 1,
    MEVP                                           = 2,
    MEVP                                           = 3,
    MEVP                                           = 4,
    MEVP                                           = 5,
    MEVP                                           = 6,
    MEVP                                           = 7,
    MEVP                                           = 8,
    MEVP                                           = 9,
    MEVP                                           = 10,
    MEVP                                           = 11,
    MEVP                                           = 12,
    MEVP                                           = 13,
    MEVP                                           = 14

};


// Enum  Engine.EWorldPositionIncludedOffsets
enum class EWorldPositionIncludedOffsets : uint8_t
{
    WPT                                            = 0,
    WPT                                            = 1,
    WPT                                            = 2,
    WPT                                            = 3,
    WPT                                            = 4

};


// Enum  Engine.EMaterialFunctionUsage
enum class EMaterialFunctionUsage : uint8_t
{
    Default                                        = 0,
    MaterialLayer                                  = 1,
    MaterialLayerBlend                             = 2,
    EMaterialFunctionUsage                         = 3

};


// Enum  Engine.EDawnSpecialMaterial
enum class EDawnSpecialMaterial : uint8_t
{
    SM                                             = 0,
    SM                                             = 1

};


// Enum  Engine.EMaterialUsage
enum class EMaterialUsage : uint8_t
{
    MATUSAGE                                       = 0,
    MATUSAGE                                       = 1,
    MATUSAGE                                       = 2,
    MATUSAGE                                       = 3,
    MATUSAGE                                       = 4,
    MATUSAGE                                       = 5,
    MATUSAGE                                       = 6,
    MATUSAGE                                       = 7,
    MATUSAGE                                       = 8,
    MATUSAGE                                       = 9,
    MATUSAGE                                       = 10,
    MATUSAGE                                       = 11,
    MATUSAGE                                       = 12,
    MATUSAGE                                       = 13,
    MATUSAGE                                       = 14,
    MATUSAGE                                       = 15,
    MATUSAGE                                       = 16,
    MATUSAGE                                       = 17,
    MATUSAGE                                       = 18,
    MATUSAGE                                       = 19

};


// Enum  Engine.EMaterialLayerLinkState
enum class EMaterialLayerLinkState : uint8_t
{
    Uninitialized                                  = 0,
    LinkedToParent                                 = 1,
    UnlinkedFromParent                             = 2,
    NotFromParent                                  = 3,
    EMaterialLayerLinkState                        = 4

};


// Enum  Engine.EMaterialParameterAssociation
enum class EMaterialParameterAssociation : uint8_t
{
    LayerParameter                                 = 0,
    BlendParameter                                 = 1,
    GlobalParameter                                = 2,
    EMaterialParameterAssociation                  = 3

};


// Enum  Engine.EMaterialMergeType
enum class EMaterialMergeType : uint8_t
{
    MaterialMergeType                              = 0,
    MaterialMergeType                              = 1,
    MaterialMergeType                              = 2

};


// Enum  Engine.ETextureSizingType
enum class ETextureSizingType : uint8_t
{
    TextureSizingType                              = 0,
    TextureSizingType                              = 1,
    TextureSizingType                              = 2,
    TextureSizingType                              = 3,
    TextureSizingType                              = 4

};


// Enum  Engine.ESceneTextureId
enum class ESceneTextureId : uint8_t
{
    PPI                                            = 0,
    PPI                                            = 1,
    PPI                                            = 2,
    PPI                                            = 3,
    PPI                                            = 4,
    PPI                                            = 5,
    PPI                                            = 6,
    PPI                                            = 7,
    PPI                                            = 8,
    PPI                                            = 9,
    PPI                                            = 10,
    PPI                                            = 11,
    PPI                                            = 12,
    PPI                                            = 13,
    PPI                                            = 14,
    PPI                                            = 15,
    PPI                                            = 16,
    PPI                                            = 17,
    PPI                                            = 18,
    PPI                                            = 19,
    PPI                                            = 20,
    PPI                                            = 21,
    PPI                                            = 22,
    PPI                                            = 23,
    PPI                                            = 24,
    PPI                                            = 25,
    PPI                                            = 26,
    PPI                                            = 27,
    PPI                                            = 28,
    PPI                                            = 29,
    PPI                                            = 30,
    PPI                                            = 31,
    PPI                                            = 32

};


// Enum  Engine.EMaterialDomain
enum class EMaterialDomain : uint8_t
{
    MD                                             = 0,
    MD                                             = 1,
    MD                                             = 2,
    MD                                             = 3,
    MD                                             = 4,
    MD                                             = 5,
    MD                                             = 6,
    MD                                             = 7

};


// Enum  Engine.EMeshInstancingReplacementMethod
enum class EMeshInstancingReplacementMethod : uint8_t
{
    RemoveOriginalActors                           = 0,
    KeepOriginalActorsAsEditorOnly                 = 1,
    EMeshInstancingReplacementMethod               = 2

};


// Enum  Engine.EUVOutput
enum class EUVOutput : uint8_t
{
    DoNotOutputChannel                             = 0,
    OutputChannel                                  = 1,
    EUVOutput                                      = 2

};


// Enum  Engine.EMeshMergeType
enum class EMeshMergeType : uint8_t
{
    MeshMergeType                                  = 0,
    MeshMergeType                                  = 1,
    MeshMergeType                                  = 2

};


// Enum  Engine.EMeshLODSelectionType
enum class EMeshLODSelectionType : uint8_t
{
    AllLODs                                        = 0,
    SpecificLOD                                    = 1,
    CalculateLOD                                   = 2,
    LowestDetailLOD                                = 3,
    EMeshLODSelectionType                          = 4

};


// Enum  Engine.EProxyNormalComputationMethod
enum class EProxyNormalComputationMethod : uint8_t
{
    AngleWeighted                                  = 0,
    AreaWeighted                                   = 1,
    EqualWeighted                                  = 2,
    EProxyNormalComputationMethod                  = 3

};


// Enum  Engine.ELandscapeCullingPrecision
enum class ELandscapeCullingPrecision : uint8_t
{
    High                                           = 0,
    Medium                                         = 1,
    Low                                            = 2,
    ELandscapeCullingPrecision                     = 3

};


// Enum  Engine.EStaticMeshReductionTerimationCriterion
enum class EStaticMeshReductionTerimationCriterion : uint8_t
{
    Triangles                                      = 0,
    Vertices                                       = 1,
    Any                                            = 2,
    EStaticMeshReductionTerimationCriterion        = 3

};


// Enum  Engine.EMeshFeatureImportance
enum class EMeshFeatureImportance : uint8_t
{
    Off                                            = 0,
    Lowest                                         = 1,
    Low                                            = 2,
    Normal                                         = 3,
    High                                           = 4,
    Highest                                        = 5,
    EMeshFeatureImportance                         = 6

};


// Enum  Engine.EVertexPaintAxis
enum class EVertexPaintAxis : uint8_t
{
    X                                              = 0,
    Y                                              = 1,
    Z                                              = 2,
    EVertexPaintAxis                               = 3

};


// Enum  Engine.EMicroTransactionResult
enum class EMicroTransactionResult : uint8_t
{
    MTR                                            = 0,
    MTR                                            = 1,
    MTR                                            = 2,
    MTR                                            = 3,
    MTR                                            = 4

};


// Enum  Engine.EMicroTransactionDelegate
enum class EMicroTransactionDelegate : uint8_t
{
    MTD                                            = 0,
    MTD                                            = 1,
    MTD                                            = 2

};


// Enum  Engine.FNavigationSystemRunMode
enum class FNavigationSystemRunMode : uint8_t
{
    InvalidMode                                    = 0,
    GameMode                                       = 1,
    EditorMode                                     = 2,
    SimulationMode                                 = 3,
    PIEMode                                        = 4,
    InferFromWorldMode                             = 5,
    FNavigationSystemRunMode                       = 6

};


// Enum  Engine.ENavigationQueryResult
enum class ENavigationQueryResult : uint8_t
{
    Invalid                                        = 0,
    Error                                          = 1,
    Fail                                           = 2,
    Success                                        = 3,
    ENavigationQueryResult                         = 4

};


// Enum  Engine.ENavPathEvent
enum class ENavPathEvent : uint8_t
{
    Cleared                                        = 0,
    NewPath                                        = 1,
    UpdatedDueToGoalMoved                          = 2,
    UpdatedDueToNavigationChanged                  = 3,
    Invalidated                                    = 4,
    RePathFailed                                   = 5,
    MetaPathUpdate                                 = 6,
    Custom                                         = 7,
    ENavPathEvent                                  = 8

};


// Enum  Engine.ENavDataGatheringModeConfig
enum class ENavDataGatheringModeConfig : uint8_t
{
    Invalid                                        = 0,
    Instant                                        = 1,
    Lazy                                           = 2,
    ENavDataGatheringModeConfig                    = 3

};


// Enum  Engine.ENavDataGatheringMode
enum class ENavDataGatheringMode : uint8_t
{
    Default                                        = 0,
    Instant                                        = 1,
    Lazy                                           = 2,
    ENavDataGatheringMode                          = 3

};


// Enum  Engine.ENavigationOptionFlag
enum class ENavigationOptionFlag : uint8_t
{
    Default                                        = 0,
    Enable                                         = 1,
    Disable                                        = 2,
    MAX                                            = 3

};


// Enum  Engine.ENavLinkDirection
enum class ENavLinkDirection : uint8_t
{
    BothWays                                       = 0,
    LeftToRight                                    = 1,
    RightToLeft                                    = 2,
    ENavLinkDirection                              = 3

};


// Enum  Engine.EEmitterRenderMode
enum class EEmitterRenderMode : uint8_t
{
    ERM                                            = 0,
    ERM                                            = 1,
    ERM                                            = 2,
    ERM                                            = 3,
    ERM                                            = 4,
    ERM                                            = 5

};


// Enum  Engine.EParticleSubUVInterpMethod
enum class EParticleSubUVInterpMethod : uint8_t
{
    PSUVIM                                         = 0,
    PSUVIM                                         = 1,
    PSUVIM                                         = 2,
    PSUVIM                                         = 3,
    PSUVIM                                         = 4,
    PSUVIM                                         = 5

};


// Enum  Engine.EParticleBurstMethod
enum class EParticleBurstMethod : uint8_t
{
    EPBM                                           = 0,
    EPBM                                           = 1,
    EPBM                                           = 2

};


// Enum  Engine.EParticleSystemInsignificanceReaction
enum class EParticleSystemInsignificanceReaction : uint8_t
{
    Auto                                           = 0,
    Complete                                       = 1,
    DisableTick                                    = 2,
    DisableTickAndKill                             = 3,
    Num                                            = 4,
    EParticleSystemInsignificanceReaction          = 5

};


// Enum  Engine.EParticleSignificanceLevel
enum class EParticleSignificanceLevel : uint8_t
{
    Low                                            = 0,
    Medium                                         = 1,
    High                                           = 2,
    Critical                                       = 3,
    Num                                            = 4,
    EParticleSignificanceLevel                     = 5

};


// Enum  Engine.EParticleDetailMode
enum class EParticleDetailMode : uint8_t
{
    PDM                                            = 0,
    PDM                                            = 1,
    PDM                                            = 2,
    PDM                                            = 3

};


// Enum  Engine.EParticleSourceSelectionMethod
enum class EParticleSourceSelectionMethod : uint8_t
{
    EPSSM                                          = 0,
    EPSSM                                          = 1,
    EPSSM                                          = 2

};


// Enum  Engine.EModuleType
enum class EModuleType : uint8_t
{
    EPMT                                           = 0,
    EPMT                                           = 1,
    EPMT                                           = 2,
    EPMT                                           = 3,
    EPMT                                           = 4,
    EPMT                                           = 5,
    EPMT                                           = 6,
    EPMT                                           = 7,
    EPMT                                           = 8,
    EPMT                                           = 9

};


// Enum  Engine.EAttractorParticleSelectionMethod
enum class EAttractorParticleSelectionMethod : uint8_t
{
    EAPSM                                          = 0,
    EAPSM                                          = 1,
    EAPSM                                          = 2

};


// Enum  Engine.Beam2SourceTargetTangentMethod
enum class Beam2SourceTargetTangentMethod : uint8_t
{
    PEB2STTM                                       = 0,
    PEB2STTM                                       = 1,
    PEB2STTM                                       = 2,
    PEB2STTM                                       = 3,
    PEB2STTM                                       = 4

};


// Enum  Engine.Beam2SourceTargetMethod
enum class Beam2SourceTargetMethod : uint8_t
{
    PEB2STM                                        = 0,
    PEB2STM                                        = 1,
    PEB2STM                                        = 2,
    PEB2STM                                        = 3,
    PEB2STM                                        = 4,
    PEB2STM                                        = 5

};


// Enum  Engine.BeamModifierType
enum class BeamModifierType : uint8_t
{
    PEB2MT                                         = 0,
    PEB2MT                                         = 1,
    PEB2MT                                         = 2

};


// Enum  Engine.EParticleCameraOffsetUpdateMethod
enum class EParticleCameraOffsetUpdateMethod : uint8_t
{
    EPCOUM                                         = 0,
    EPCOUM                                         = 1,
    EPCOUM                                         = 2,
    EPCOUM                                         = 3

};


// Enum  Engine.EParticleCollisionComplete
enum class EParticleCollisionComplete : uint8_t
{
    EPCC                                           = 0,
    EPCC                                           = 1,
    EPCC                                           = 2,
    EPCC                                           = 3,
    EPCC                                           = 4,
    EPCC                                           = 5,
    EPCC                                           = 6

};


// Enum  Engine.EParticleCollisionResponse
enum class EParticleCollisionResponse : uint8_t
{
    Bounce                                         = 0,
    Stop                                           = 1,
    Kill                                           = 2,
    EParticleCollisionResponse                     = 3

};


// Enum  Engine.ELocationBoneSocketSelectionMethod
enum class ELocationBoneSocketSelectionMethod : uint8_t
{
    BONESOCKETSEL                                  = 0,
    BONESOCKETSEL                                  = 1,
    BONESOCKETSEL                                  = 2

};


// Enum  Engine.ELocationBoneSocketSource
enum class ELocationBoneSocketSource : uint8_t
{
    BONESOCKETSOURCE                               = 0,
    BONESOCKETSOURCE                               = 1,
    BONESOCKETSOURCE                               = 2

};


// Enum  Engine.ELocationEmitterSelectionMethod
enum class ELocationEmitterSelectionMethod : uint8_t
{
    ELESM                                          = 0,
    ELESM                                          = 1,
    ELESM                                          = 2

};


// Enum  Engine.CylinderHeightAxis
enum class CylinderHeightAxis : uint8_t
{
    PMLPC                                          = 0,
    PMLPC                                          = 1,
    PMLPC                                          = 2,
    PMLPC                                          = 3

};


// Enum  Engine.ELocationSkelVertSurfaceSource
enum class ELocationSkelVertSurfaceSource : uint8_t
{
    VERTSURFACESOURCE                              = 0,
    VERTSURFACESOURCE                              = 1,
    VERTSURFACESOURCE                              = 2

};


// Enum  Engine.EOrbitChainMode
enum class EOrbitChainMode : uint8_t
{
    EOChainMode                                    = 0,
    EOChainMode                                    = 1,
    EOChainMode                                    = 2,
    EOChainMode                                    = 3

};


// Enum  Engine.EParticleAxisLock
enum class EParticleAxisLock : uint8_t
{
    EPAL                                           = 0,
    EPAL                                           = 1,
    EPAL                                           = 2,
    EPAL                                           = 3,
    EPAL                                           = 4,
    EPAL                                           = 5,
    EPAL                                           = 6,
    EPAL                                           = 7,
    EPAL                                           = 8,
    EPAL                                           = 9,
    EPAL                                           = 10

};


// Enum  Engine.EEmitterDynamicParameterValue
enum class EEmitterDynamicParameterValue : uint8_t
{
    EDPV                                           = 0,
    EDPV                                           = 1,
    EDPV                                           = 2,
    EDPV                                           = 3,
    EDPV                                           = 4,
    EDPV                                           = 5,
    EDPV                                           = 6

};


// Enum  Engine.EEmitterNormalsMode
enum class EEmitterNormalsMode : uint8_t
{
    ENM                                            = 0,
    ENM                                            = 1,
    ENM                                            = 2,
    ENM                                            = 3

};


// Enum  Engine.EParticleSortMode
enum class EParticleSortMode : uint8_t
{
    PSORTMODE                                      = 0,
    PSORTMODE                                      = 1,
    PSORTMODE                                      = 2,
    PSORTMODE                                      = 3,
    PSORTMODE                                      = 4,
    PSORTMODE                                      = 5

};


// Enum  Engine.EParticleUVFlipMode
enum class EParticleUVFlipMode : uint8_t
{
    None                                           = 0,
    FlipUV                                         = 1,
    FlipUOnly                                      = 2,
    FlipVOnly                                      = 3,
    RandomFlipUV                                   = 4,
    RandomFlipUOnly                                = 5,
    RandomFlipVOnly                                = 6,
    RandomFlipUVIndependent                        = 7,
    EParticleUVFlipMode                            = 8

};


// Enum  Engine.ETrail2SourceMethod
enum class ETrail2SourceMethod : uint8_t
{
    PET2SRCM                                       = 0,
    PET2SRCM                                       = 1,
    PET2SRCM                                       = 2,
    PET2SRCM                                       = 3

};


// Enum  Engine.EBeamTaperMethod
enum class EBeamTaperMethod : uint8_t
{
    PEBTM                                          = 0,
    PEBTM                                          = 1,
    PEBTM                                          = 2,
    PEBTM                                          = 3

};


// Enum  Engine.EBeam2Method
enum class EBeam2Method : uint8_t
{
    PEB2M                                          = 0,
    PEB2M                                          = 1,
    PEB2M                                          = 2,
    PEB2M                                          = 3

};


// Enum  Engine.EMeshCameraFacingOptions
enum class EMeshCameraFacingOptions : uint8_t
{
    XAxisFacing                                    = 0,
    XAxisFacing                                    = 1,
    XAxisFacing                                    = 2,
    XAxisFacing                                    = 3,
    XAxisFacing                                    = 4,
    LockedAxis                                     = 5,
    LockedAxis                                     = 6,
    LockedAxis                                     = 7,
    LockedAxis                                     = 8,
    VelocityAligned                                = 9,
    VelocityAligned                                = 10,
    VelocityAligned                                = 11,
    VelocityAligned                                = 12,
    EMeshCameraFacingOptions                       = 13

};


// Enum  Engine.EMeshCameraFacingUpAxis
enum class EMeshCameraFacingUpAxis : uint8_t
{
    CameraFacing                                   = 0,
    CameraFacing                                   = 1,
    CameraFacing                                   = 2,
    CameraFacing                                   = 3,
    CameraFacing                                   = 4,
    CameraFacing                                   = 5

};


// Enum  Engine.EMeshScreenAlignment
enum class EMeshScreenAlignment : uint8_t
{
    PSMA                                           = 0,
    PSMA                                           = 1,
    PSMA                                           = 2,
    PSMA                                           = 3

};


// Enum  Engine.ETrailsRenderAxisOption
enum class ETrailsRenderAxisOption : uint8_t
{
    Trails                                         = 0,
    Trails                                         = 1,
    Trails                                         = 2,
    Trails                                         = 3

};


// Enum  Engine.EParticleScreenAlignment
enum class EParticleScreenAlignment : uint8_t
{
    PSA                                            = 0,
    PSA                                            = 1,
    PSA                                            = 2,
    PSA                                            = 3,
    PSA                                            = 4,
    PSA                                            = 5,
    PSA                                            = 6,
    PSA                                            = 7

};


// Enum  Engine.EParticleSystemOcclusionBoundsMethod
enum class EParticleSystemOcclusionBoundsMethod : uint8_t
{
    EPSOBM                                         = 0,
    EPSOBM                                         = 1,
    EPSOBM                                         = 2,
    EPSOBM                                         = 3

};


// Enum  Engine.ParticleSystemLODMethod
enum class ParticleSystemLODMethod : uint8_t
{
    PARTICLESYSTEMLODMETHOD                        = 0,
    PARTICLESYSTEMLODMETHOD                        = 1,
    PARTICLESYSTEMLODMETHOD                        = 2,
    PARTICLESYSTEMLODMETHOD                        = 3

};


// Enum  Engine.EParticleSystemUpdateMode
enum class EParticleSystemUpdateMode : uint8_t
{
    EPSUM                                          = 0,
    EPSUM                                          = 1,
    EPSUM                                          = 2

};


// Enum  Engine.EParticleEventType
enum class EParticleEventType : uint8_t
{
    EPET                                           = 0,
    EPET                                           = 1,
    EPET                                           = 2,
    EPET                                           = 3,
    EPET                                           = 4,
    EPET                                           = 5,
    EPET                                           = 6

};


// Enum  Engine.ParticleReplayState
enum class ParticleReplayState : uint8_t
{
    PRS                                            = 0,
    PRS                                            = 1,
    PRS                                            = 2,
    PRS                                            = 3

};


// Enum  Engine.EParticleSysParamType
enum class EParticleSysParamType : uint8_t
{
    PSPT                                           = 0,
    PSPT                                           = 1,
    PSPT                                           = 2,
    PSPT                                           = 3,
    PSPT                                           = 4,
    PSPT                                           = 5,
    PSPT                                           = 6,
    PSPT                                           = 7,
    PSPT                                           = 8,
    PSPT                                           = 9

};


// Enum  Engine.ESettingsLockedAxis
enum class ESettingsLockedAxis : uint8_t
{
    None                                           = 0,
    X                                              = 1,
    Y                                              = 2,
    Z                                              = 3,
    Invalid                                        = 4,
    ESettingsLockedAxis                            = 5

};


// Enum  Engine.ESettingsDOF
enum class ESettingsDOF : uint8_t
{
    Full3D                                         = 0,
    YZPlane                                        = 1,
    XZPlane                                        = 2,
    XYPlane                                        = 3,
    ESettingsDOF                                   = 4

};


// Enum  Engine.ERendererStencilMask
enum class ERendererStencilMask : uint8_t
{
    ERSM                                           = 0,
    ERSM                                           = 1,
    ERSM                                           = 2,
    ERSM                                           = 3,
    ERSM                                           = 4,
    ERSM                                           = 5,
    ERSM                                           = 6,
    ERSM                                           = 7,
    ERSM                                           = 8,
    ERSM                                           = 9,
    ERSM                                           = 10

};


// Enum  Engine.EHasCustomNavigableGeometry
enum class EHasCustomNavigableGeometry : uint8_t
{
    No                                             = 0,
    Yes                                            = 1,
    EvenIfNotCollidable                            = 2,
    DontExport                                     = 3,
    EHasCustomNavigableGeometry                    = 4

};


// Enum  Engine.ECanBeCharacterBase
enum class ECanBeCharacterBase : uint8_t
{
    ECB                                            = 0,
    ECB                                            = 1,
    ECB                                            = 2,
    ECB                                            = 3

};


// Enum  Engine.ECAPlayerPrimitiveType
enum class ECAPlayerPrimitiveType : uint8_t
{
    Default                                        = 0,
    Player1P                                       = 1,
    Player3P                                       = 2,
    ECAPlayerPrimitiveType                         = 3

};


// Enum  Engine.EInteriorPortalShapeType
enum class EInteriorPortalShapeType : uint8_t
{
    Cube                                           = 0,
    Door                                           = 1,
    EInteriorPortalShapeType                       = 2

};


// Enum  Engine.EInteriorPortalType
enum class EInteriorPortalType : uint8_t
{
    None                                           = 0,
    CrossTwoInteriorVolumes                        = 1,
    CrossInteriorAndExterior                       = 2,
    ApplyPositionBias                              = 3,
    ApplyTwoSiedPositionBias                       = 4,
    EInteriorPortalType                            = 5

};


// Enum  Engine.EQuarztQuantizationReference
enum class EQuarztQuantizationReference : uint8_t
{
    BarRelative                                    = 0,
    TransportRelative                              = 1,
    CurrentTimeRelative                            = 2,
    Count                                          = 3,
    EQuarztQuantizationReference                   = 4

};


// Enum  Engine.EQuartzDelegateType
enum class EQuartzDelegateType : uint8_t
{
    MetronomeTick                                  = 0,
    CommandEvent                                   = 1,
    Count                                          = 2,
    EQuartzDelegateType                            = 3

};


// Enum  Engine.EQuartzTimeSignatureQuantization
enum class EQuartzTimeSignatureQuantization : uint8_t
{
    HalfNote                                       = 0,
    QuarterNote                                    = 1,
    EighthNote                                     = 2,
    SixteenthNote                                  = 3,
    ThirtySecondNote                               = 4,
    Count                                          = 5,
    EQuartzTimeSignatureQuantization               = 6

};


// Enum  Engine.ERichCurveExtrapolation
enum class ERichCurveExtrapolation : uint8_t
{
    RCCE                                           = 0,
    RCCE                                           = 1,
    RCCE                                           = 2,
    RCCE                                           = 3,
    RCCE                                           = 4,
    RCCE                                           = 5,
    RCCE                                           = 6

};


// Enum  Engine.ERichCurveInterpMode
enum class ERichCurveInterpMode : uint8_t
{
    RCIM                                           = 0,
    RCIM                                           = 1,
    RCIM                                           = 2,
    RCIM                                           = 3,
    RCIM                                           = 4

};


// Enum  Engine.EMobileReflectionCompression
enum class EMobileReflectionCompression : uint8_t
{
    Default                                        = 0,
    On                                             = 1,
    Off                                            = 2,
    EMobileReflectionCompression                   = 3

};


// Enum  Engine.EReflectionSourceType
enum class EReflectionSourceType : uint8_t
{
    CapturedScene                                  = 0,
    SpecifiedCubemap                               = 1,
    ComputeData                                    = 2,
    EReflectionSourceType                          = 3

};


// Enum  Engine.ESkyNormalizationMethod
enum class ESkyNormalizationMethod : uint8_t
{
    SNM                                            = 0,
    SNM                                            = 1,
    SNM                                            = 2,
    SNM                                            = 3,
    SNM                                            = 4

};


// Enum  Engine.EDirLightShadowBiasMethod
enum class EDirLightShadowBiasMethod : uint8_t
{
    DLSBM                                          = 0,
    DLSBM                                          = 1,
    DLSBM                                          = 2

};


// Enum  Engine.EDefaultBackBufferPixelFormat
enum class EDefaultBackBufferPixelFormat : uint8_t
{
    DBBPF                                          = 0,
    DBBPF                                          = 1,
    DBBPF                                          = 2,
    DBBPF                                          = 3,
    DBBPF                                          = 4,
    DBBPF                                          = 5

};


// Enum  Engine.EAutoExposureMethodUI
enum class EAutoExposureMethodUI : uint8_t
{
    AEM                                            = 0,
    AEM                                            = 1,
    AEM                                            = 2,
    AEM                                            = 3

};


// Enum  Engine.EAlphaChannelMode
enum class EAlphaChannelMode : uint8_t
{
    Disabled                                       = 0,
    LinearColorSpaceOnly                           = 1,
    AllowThroughTonemapper                         = 2,
    EAlphaChannelMode                              = 3

};


// Enum  Engine.EEarlyZPass
enum class EEarlyZPass : uint8_t
{
    None                                           = 0,
    OpaqueOnly                                     = 1,
    OpaqueAndMasked                                = 2,
    Auto                                           = 3,
    EEarlyZPass                                    = 4

};


// Enum  Engine.ECustomDepthStencil
enum class ECustomDepthStencil : uint8_t
{
    Disabled                                       = 0,
    Enabled                                        = 1,
    EnabledOnDemand                                = 2,
    EnabledWithStencil                             = 3,
    ECustomDepthStencil                            = 4

};


// Enum  Engine.EMobileMSAASampleCount
enum class EMobileMSAASampleCount : uint8_t
{
    One                                            = 1,
    Two                                            = 2,
    Four                                           = 4,
    Eight                                          = 8,
    EMobileMSAASampleCount                         = 9

};


// Enum  Engine.ECompositingSampleCount
enum class ECompositingSampleCount : uint8_t
{
    One                                            = 1,
    Two                                            = 2,
    Four                                           = 4,
    Eight                                          = 8,
    ECompositingSampleCount                        = 9

};


// Enum  Engine.EClearSceneOptions
enum class EClearSceneOptions : uint8_t
{
    NoClear                                        = 0,
    HardwareClear                                  = 1,
    QuadAtMaxZ                                     = 2,
    EClearSceneOptions                             = 3

};


// Enum  Engine.EReporterLineStyle
enum class EReporterLineStyle : uint8_t
{
    Line                                           = 0,
    Dash                                           = 1,
    EReporterLineStyle                             = 2

};


// Enum  Engine.ELegendPosition
enum class ELegendPosition : uint8_t
{
    Outside                                        = 0,
    Inside                                         = 1,
    ELegendPosition                                = 2

};


// Enum  Engine.EGraphDataStyle
enum class EGraphDataStyle : uint8_t
{
    Lines                                          = 0,
    Filled                                         = 1,
    EGraphDataStyle                                = 2

};


// Enum  Engine.EGraphAxisStyle
enum class EGraphAxisStyle : uint8_t
{
    Lines                                          = 0,
    Notches                                        = 1,
    Grid                                           = 2,
    EGraphAxisStyle                                = 3

};


// Enum  Engine.ReverbPreset
enum class ReverbPreset : uint8_t
{
    REVERB                                         = 0,
    REVERB                                         = 1,
    REVERB                                         = 2,
    REVERB                                         = 3,
    REVERB                                         = 4,
    REVERB                                         = 5,
    REVERB                                         = 6,
    REVERB                                         = 7,
    REVERB                                         = 8,
    REVERB                                         = 9,
    REVERB                                         = 10,
    REVERB                                         = 11,
    REVERB                                         = 12,
    REVERB                                         = 13,
    REVERB                                         = 14,
    REVERB                                         = 15,
    REVERB                                         = 16,
    REVERB                                         = 17,
    REVERB                                         = 18,
    REVERB                                         = 19,
    REVERB                                         = 20,
    REVERB                                         = 21,
    REVERB                                         = 22,
    REVERB                                         = 23

};


// Enum  Engine.ERichCurveKeyTimeCompressionFormat
enum class ERichCurveKeyTimeCompressionFormat : uint8_t
{
    RCKTCF                                         = 0,
    RCKTCF                                         = 1,
    RCKTCF                                         = 2

};


// Enum  Engine.ERichCurveCompressionFormat
enum class ERichCurveCompressionFormat : uint8_t
{
    RCCF                                           = 0,
    RCCF                                           = 1,
    RCCF                                           = 2,
    RCCF                                           = 3,
    RCCF                                           = 4,
    RCCF                                           = 5,
    RCCF                                           = 6

};


// Enum  Engine.ERichCurveTangentWeightMode
enum class ERichCurveTangentWeightMode : uint8_t
{
    RCTWM                                          = 0,
    RCTWM                                          = 1,
    RCTWM                                          = 2,
    RCTWM                                          = 3,
    RCTWM                                          = 4

};


// Enum  Engine.ERichCurveTangentMode
enum class ERichCurveTangentMode : uint8_t
{
    RCTM                                           = 0,
    RCTM                                           = 1,
    RCTM                                           = 2,
    RCTM                                           = 3,
    RCTM                                           = 4

};


// Enum  Engine.EConstraintTransform
enum class EConstraintTransform : uint8_t
{
    Absolute                                       = 0,
    Relative                                       = 1,
    EConstraintTransform                           = 2

};


// Enum  Engine.EControlConstraint
enum class EControlConstraint : uint8_t
{
    Orientation                                    = 0,
    Translation                                    = 1,
    MAX                                            = 2

};


// Enum  Engine.ERootMotionFinishVelocityMode
enum class ERootMotionFinishVelocityMode : uint8_t
{
    MaintainLastRootMotionVelocity                 = 0,
    SetVelocity                                    = 1,
    ClampVelocity                                  = 2,
    ERootMotionFinishVelocityMode                  = 3

};


// Enum  Engine.ERootMotionSourceSettingsFlags
enum class ERootMotionSourceSettingsFlags : uint8_t
{
    UseSensitiveLiftoffCheck                       = 1,
    DisablePartialEndTick                          = 2,
    IgnoreZAccumulate                              = 4,
    ERootMotionSourceSettingsFlags                 = 5

};


// Enum  Engine.ERootMotionSourceStatusFlags
enum class ERootMotionSourceStatusFlags : uint8_t
{
    Prepared                                       = 1,
    Finished                                       = 2,
    MarkedForRemoval                               = 4,
    ERootMotionSourceStatusFlags                   = 5

};


// Enum  Engine.ERootMotionAccumulateMode
enum class ERootMotionAccumulateMode : uint8_t
{
    Override                                       = 0,
    Additive                                       = 1,
    ERootMotionAccumulateMode                      = 2

};


// Enum  Engine.ERuntimeVirtualTextureMainPassType
enum class ERuntimeVirtualTextureMainPassType : uint8_t
{
    Never                                          = 0,
    Exclusive                                      = 1,
    Always                                         = 2,
    ERuntimeVirtualTextureMainPassType             = 3

};


// Enum  Engine.ERuntimeVirtualTextureMaterialType
enum class ERuntimeVirtualTextureMaterialType : uint8_t
{
    BaseColor                                      = 0,
    BaseColor                                      = 1,
    BaseColor                                      = 2,
    BaseColor                                      = 3,
    BaseColor                                      = 4,
    WorldHeight                                    = 5,
    BaseColor                                      = 6,
    Count                                          = 7,
    ERuntimeVirtualTextureMaterialType             = 8

};


// Enum  Engine.EMobilePlanarReflectionUsage
enum class EMobilePlanarReflectionUsage : uint8_t
{
    Both                                           = 0,
    PixelProjectedReflectionOnly                   = 1,
    EMobilePlanarReflectionUsage                   = 2

};


// Enum  Engine.EMobilePixelProjectedReflectionQuality
enum class EMobilePixelProjectedReflectionQuality : uint8_t
{
    Disabled                                       = 0,
    BestPerformance                                = 1,
    BetterQuality                                  = 2,
    BestQuality                                    = 3,
    EMobilePixelProjectedReflectionQuality         = 4

};


// Enum  Engine.EMobilePlanarReflectionMode
enum class EMobilePlanarReflectionMode : uint8_t
{
    Usual                                          = 0,
    MobilePPRExclusive                             = 1,
    MobilePPR                                      = 2,
    EMobilePlanarReflectionMode                    = 3

};


// Enum  Engine.EReflectedAndRefractedRayTracedShadows
enum class EReflectedAndRefractedRayTracedShadows : uint8_t
{
    Disabled                                       = 0,
    Hard                                           = 1,
    Area                                           = 2,
    EReflectedAndRefractedRayTracedShadows         = 3

};


// Enum  Engine.ERayTracingGlobalIlluminationType
enum class ERayTracingGlobalIlluminationType : uint8_t
{
    Disabled                                       = 0,
    BruteForce                                     = 1,
    FinalGather                                    = 2,
    ERayTracingGlobalIlluminationType              = 3

};


// Enum  Engine.ETranslucencyType
enum class ETranslucencyType : uint8_t
{
    Raster                                         = 0,
    RayTracing                                     = 1,
    ETranslucencyType                              = 2

};


// Enum  Engine.EReflectionsType
enum class EReflectionsType : uint8_t
{
    ScreenSpace                                    = 0,
    RayTracing                                     = 1,
    EReflectionsType                               = 2

};


// Enum  Engine.ELightUnits
enum class ELightUnits : uint8_t
{
    Unitless                                       = 0,
    Candelas                                       = 1,
    Lumens                                         = 2,
    ELightUnits                                    = 3

};


// Enum  Engine.EBloomMethod
enum class EBloomMethod : uint8_t
{
    BM                                             = 0,
    BM                                             = 1,
    BM                                             = 2

};


// Enum  Engine.EAutoExposureMethod
enum class EAutoExposureMethod : uint8_t
{
    AEM                                            = 0,
    AEM                                            = 1,
    AEM                                            = 2,
    AEM                                            = 3

};


// Enum  Engine.EAntiAliasingMethod
enum class EAntiAliasingMethod : uint8_t
{
    AAM                                            = 0,
    AAM                                            = 1,
    AAM                                            = 2,
    AAM                                            = 3,
    AAM                                            = 4,
    AAM                                            = 5

};


// Enum  Engine.EDepthOfFieldMethod
enum class EDepthOfFieldMethod : uint8_t
{
    DOFM                                           = 0,
    DOFM                                           = 1,
    DOFM                                           = 2,
    DOFM                                           = 3

};


// Enum  Engine.ESceneCapturePrimitiveRenderMode
enum class ESceneCapturePrimitiveRenderMode : uint8_t
{
    PRM                                            = 0,
    PRM                                            = 1,
    PRM                                            = 2,
    PRM                                            = 3

};


// Enum  Engine.EMaterialProperty
enum class EMaterialProperty : uint8_t
{
    MP                                             = 0,
    MP                                             = 1,
    MP                                             = 2,
    MP                                             = 3,
    MP                                             = 4,
    MP                                             = 5,
    MP                                             = 6,
    MP                                             = 7,
    MP                                             = 8,
    MP                                             = 9,
    MP                                             = 10,
    MP                                             = 11,
    MP                                             = 12,
    MP                                             = 13,
    MP                                             = 14,
    MP                                             = 15,
    MP                                             = 16,
    MP                                             = 17,
    MP                                             = 18,
    MP                                             = 19,
    MP                                             = 20,
    MP                                             = 21,
    MP                                             = 22,
    MP                                             = 23,
    MP                                             = 24,
    MP                                             = 25,
    MP                                             = 26,
    MP                                             = 27,
    MP                                             = 28,
    MP                                             = 29,
    MP                                             = 30,
    MP                                             = 31,
    MP                                             = 32,
    MP                                             = 33,
    MP                                             = 34,
    MP                                             = 35,
    MP                                             = 36,
    MP                                             = 37,
    MP                                             = 38,
    MP                                             = 39,
    MP                                             = 40

};


// Enum  Engine.EMaterialDynamicMode
enum class EMaterialDynamicMode : uint8_t
{
    EMDM                                           = 0,
    EMDM                                           = 1,
    EMDM                                           = 2,
    EMDM                                           = 3,
    EMDM                                           = 4

};


// Enum  Engine.ECADistanceFieldOptimizeType
enum class ECADistanceFieldOptimizeType : uint8_t
{
    Default                                        = 0,
    Components                                     = 1,
    Merged                                         = 2,
    Decal                                          = 3,
    IndoorProps                                    = 4,
    ECADistanceFieldOptimizeType                   = 5

};


// Enum  Engine.EShadowCaptureLayer
enum class EShadowCaptureLayer : uint8_t
{
    Default                                        = 0,
    Character                                      = 1,
    Foliage                                        = 2,
    Grass                                          = 3,
    ShadowCaptureCustomLayer0                      = 4,
    ShadowCaptureCustomLayer1                      = 5,
    ShadowCaptureCustomLayer2                      = 6,
    ShadowCaptureCustomLayer3                      = 7,
    ShadowCaptureCustomLayer4                      = 8,
    ShadowCaptureCustomLayer5                      = 9,
    ShadowCaptureCustomLayer6                      = 10,
    ShadowCaptureCustomLayer7                      = 11,
    ShadowCaptureCustomLayer8                      = 12,
    ShadowCaptureCustomLayer9                      = 13,
    ShadowCaptureCustomLayer10                     = 14,
    ShadowCaptureCustomLayer11                     = 15,
    ShadowCaptureCustomLayer12                     = 16,
    ShadowCaptureCustomLayer13                     = 17,
    ShadowCaptureCustomLayer14                     = 18,
    ShadowCaptureCustomLayer15                     = 19,
    ShadowCaptureCustomLayer16                     = 20,
    ShadowCaptureCustomLayer17                     = 21,
    ShadowCaptureCustomLayer18                     = 22,
    ShadowCaptureCustomLayer19                     = 23,
    ShadowCaptureCustomLayer20                     = 24,
    ShadowCaptureCustomLayer21                     = 25,
    ShadowCaptureCustomLayer22                     = 26,
    ShadowCaptureCustomLayer23                     = 27,
    ShadowCaptureCustomLayer24                     = 28,
    ShadowCaptureCustomLayer25                     = 29,
    ShadowCaptureLayer                             = 30,
    EShadowCaptureLayer                            = 31

};


// Enum  Engine.ESkinCacheDefaultBehavior
enum class ESkinCacheDefaultBehavior : uint8_t
{
    Exclusive                                      = 0,
    Inclusive                                      = 1,
    ESkinCacheDefaultBehavior                      = 2

};


// Enum  Engine.ESkinCacheUsage
enum class ESkinCacheUsage : uint8_t
{
    Auto                                           = 0,
    Disabled                                       = 255,
    Enabled                                        = 1,
    ESkinCacheUsage                                = 256

};


// Enum  Engine.EPhysicsTransformUpdateMode
enum class EPhysicsTransformUpdateMode : uint8_t
{
    SimulationUpatesComponentTransform             = 0,
    ComponentTransformIsKinematic                  = 1,
    EPhysicsTransformUpdateMode                    = 2

};


// Enum  Engine.EAnimationMode
enum class EAnimationMode : uint8_t
{
    AnimationBlueprint                             = 0,
    AnimationSingleNode                            = 1,
    AnimationCustomMode                            = 2,
    EAnimationMode                                 = 3

};


// Enum  Engine.EKinematicBonesUpdateToPhysics
enum class EKinematicBonesUpdateToPhysics : uint8_t
{
    SkipSimulatingBones                            = 0,
    SkipAllBones                                   = 1,
    EKinematicBonesUpdateToPhysics                 = 2

};


// Enum  Engine.ECustomBoneAttributeLookup
enum class ECustomBoneAttributeLookup : uint8_t
{
    BoneOnly                                       = 0,
    ImmediateParent                                = 1,
    ParentHierarchy                                = 2,
    ECustomBoneAttributeLookup                     = 3

};


// Enum  Engine.EClothMassMode
enum class EClothMassMode : uint8_t
{
    UniformMass                                    = 0,
    TotalMass                                      = 1,
    Density                                        = 2,
    MaxClothMassMode                               = 3,
    EClothMassMode                                 = 4

};


// Enum  Engine.EAnimCurveType
enum class EAnimCurveType : uint8_t
{
    AttributeCurve                                 = 0,
    MaterialCurve                                  = 1,
    MorphTargetCurve                               = 2,
    MaxAnimCurveType                               = 3,
    EAnimCurveType                                 = 4

};


// Enum  Engine.ESkeletalMeshSkinningImportVersions
enum class ESkeletalMeshSkinningImportVersions : uint8_t
{
    Before                                         = 0,
    SkeletalMeshBuildRefactor                      = 1,
    VersionPlusOne                                 = 2,
    LatestVersion                                  = 1,
    ESkeletalMeshSkinningImportVersions            = 3

};


// Enum  Engine.ESkeletalMeshGeoImportVersions
enum class ESkeletalMeshGeoImportVersions : uint8_t
{
    Before                                         = 0,
    SkeletalMeshBuildRefactor                      = 1,
    VersionPlusOne                                 = 2,
    LatestVersion                                  = 1,
    ESkeletalMeshGeoImportVersions                 = 3

};


// Enum  Engine.EBoneFilterActionOption
enum class EBoneFilterActionOption : uint8_t
{
    Remove                                         = 0,
    Keep                                           = 1,
    Invalid                                        = 2,
    EBoneFilterActionOption                        = 3

};


// Enum  Engine.SkeletalMeshOptimizationImportance
enum class SkeletalMeshOptimizationImportance : uint8_t
{
    SMOI                                           = 0,
    SMOI                                           = 1,
    SMOI                                           = 2,
    SMOI                                           = 3,
    SMOI                                           = 4,
    SMOI                                           = 5,
    SMOI                                           = 6

};


// Enum  Engine.SkeletalMeshOptimizationType
enum class SkeletalMeshOptimizationType : uint8_t
{
    SMOT                                           = 0,
    SMOT                                           = 1,
    SMOT                                           = 2,
    SMOT                                           = 3

};


// Enum  Engine.SkeletalMeshTerminationCriterion
enum class SkeletalMeshTerminationCriterion : uint8_t
{
    SMTC                                           = 0,
    SMTC                                           = 1,
    SMTC                                           = 2,
    SMTC                                           = 3,
    SMTC                                           = 4,
    SMTC                                           = 5,
    SMTC                                           = 6

};


// Enum  Engine.EBoneTranslationRetargetingMode
enum class EBoneTranslationRetargetingMode : uint8_t
{
    Animation                                      = 0,
    Skeleton                                       = 1,
    AnimationScaled                                = 2,
    AnimationRelative                              = 3,
    OrientAndScale                                 = 4,
    EBoneTranslationRetargetingMode                = 5

};


// Enum  Engine.EVertexOffsetUsageType
enum class EVertexOffsetUsageType : uint8_t
{
    None                                           = 0,
    PreSkinningOffset                              = 1,
    PostSkinningOffset                             = 2,
    EVertexOffsetUsageType                         = 3

};


// Enum  Engine.EBoneSpaces
enum class EBoneSpaces : uint8_t
{
    WorldSpace                                     = 0,
    ComponentSpace                                 = 1,
    EBoneSpaces                                    = 2

};


// Enum  Engine.EVisibilityBasedAnimTickOption
enum class EVisibilityBasedAnimTickOption : uint8_t
{
    AlwaysTickPoseAndRefreshBones                  = 0,
    AlwaysTickPose                                 = 1,
    OnlyTickMontagesWhenNotRendered                = 2,
    OnlyTickPoseWhenRendered                       = 3,
    EVisibilityBasedAnimTickOption                 = 4

};


// Enum  Engine.EPhysBodyOp
enum class EPhysBodyOp : uint8_t
{
    PBO                                            = 0,
    PBO                                            = 1,
    PBO                                            = 2

};


// Enum  Engine.EBoneVisibilityStatus
enum class EBoneVisibilityStatus : uint8_t
{
    BVS                                            = 0,
    BVS                                            = 1,
    BVS                                            = 2,
    BVS                                            = 3

};


// Enum  Engine.ESkyAtmosphereTransformMode
enum class ESkyAtmosphereTransformMode : uint8_t
{
    PlanetTopAtAbsoluteWorldOrigin                 = 0,
    PlanetTopAtComponentTransform                  = 1,
    PlanetCenterAtComponentTransform               = 2,
    ESkyAtmosphereTransformMode                    = 3

};


// Enum  Engine.ESkyLightSourceType
enum class ESkyLightSourceType : uint8_t
{
    SLS                                            = 0,
    SLS                                            = 1,
    SLS                                            = 2,
    SLS                                            = 3

};


// Enum  Engine.EPriorityAttenuationMethod
enum class EPriorityAttenuationMethod : uint8_t
{
    Linear                                         = 0,
    CustomCurve                                    = 1,
    Manual                                         = 2,
    EPriorityAttenuationMethod                     = 3

};


// Enum  Engine.ESubmixSendMethod
enum class ESubmixSendMethod : uint8_t
{
    Linear                                         = 0,
    CustomCurve                                    = 1,
    Manual                                         = 2,
    ESubmixSendMethod                              = 3

};


// Enum  Engine.EReverbSendMethod
enum class EReverbSendMethod : uint8_t
{
    Linear                                         = 0,
    CustomCurve                                    = 1,
    Manual                                         = 2,
    EReverbSendMethod                              = 3

};


// Enum  Engine.EAirAbsorptionMethod
enum class EAirAbsorptionMethod : uint8_t
{
    Linear                                         = 0,
    CustomCurve                                    = 1,
    EAirAbsorptionMethod                           = 2

};


// Enum  Engine.ESoundSpatializationAlgorithm
enum class ESoundSpatializationAlgorithm : uint8_t
{
    SPATIALIZATION                                 = 0,
    SPATIALIZATION                                 = 1,
    SPATIALIZATION                                 = 2

};


// Enum  Engine.ESoundDistanceCalc
enum class ESoundDistanceCalc : uint8_t
{
    SOUNDDISTANCE                                  = 0,
    SOUNDDISTANCE                                  = 1,
    SOUNDDISTANCE                                  = 2,
    SOUNDDISTANCE                                  = 3,
    SOUNDDISTANCE                                  = 4

};


// Enum  Engine.EVirtualizationMode
enum class EVirtualizationMode : uint8_t
{
    Disabled                                       = 0,
    PlayWhenSilent                                 = 1,
    Restart                                        = 2,
    EVirtualizationMode                            = 3

};


// Enum  Engine.EConcurrencyVolumeScaleMode
enum class EConcurrencyVolumeScaleMode : uint8_t
{
    Default                                        = 0,
    Distance                                       = 1,
    Priority                                       = 2,
    EConcurrencyVolumeScaleMode                    = 3

};


// Enum  Engine.EMaxConcurrentResolutionRule
enum class EMaxConcurrentResolutionRule : uint8_t
{
    PreventNew                                     = 0,
    StopOldest                                     = 1,
    StopFarthestThenPreventNew                     = 2,
    StopFarthestThenOldest                         = 3,
    StopLowestPriority                             = 4,
    StopQuietest                                   = 5,
    StopLowestPriorityThenPreventNew               = 6,
    Count                                          = 7,
    EMaxConcurrentResolutionRule                   = 8

};


// Enum  Engine.ESoundGroup
enum class ESoundGroup : uint8_t
{
    SOUNDGROUP                                     = 0,
    SOUNDGROUP                                     = 1,
    SOUNDGROUP                                     = 2,
    SOUNDGROUP                                     = 3,
    SOUNDGROUP                                     = 4,
    SOUNDGROUP                                     = 5,
    SOUNDGROUP                                     = 6,
    SOUNDGROUP                                     = 7,
    SOUNDGROUP                                     = 8,
    SOUNDGROUP                                     = 9,
    SOUNDGROUP                                     = 10,
    SOUNDGROUP                                     = 11,
    SOUNDGROUP                                     = 12,
    SOUNDGROUP                                     = 13,
    SOUNDGROUP                                     = 14,
    SOUNDGROUP                                     = 15,
    SOUNDGROUP                                     = 16,
    SOUNDGROUP                                     = 17,
    SOUNDGROUP                                     = 18,
    SOUNDGROUP                                     = 19,
    SOUNDGROUP                                     = 20,
    SOUNDGROUP                                     = 21,
    SOUNDGROUP                                     = 22,
    SOUNDGROUP                                     = 23,
    SOUNDGROUP                                     = 24,
    SOUNDGROUP                                     = 25

};


// Enum  Engine.EModulationRouting
enum class EModulationRouting : uint8_t
{
    Disable                                        = 0,
    Inherit                                        = 1,
    Override                                       = 2,
    EModulationRouting                             = 3

};


// Enum  Engine.ModulationParamMode
enum class ModulationParamMode : uint8_t
{
    MPM                                            = 0,
    MPM                                            = 1,
    MPM                                            = 2,
    MPM                                            = 3

};


// Enum  Engine.ESourceBusChannels
enum class ESourceBusChannels : uint8_t
{
    Mono                                           = 0,
    Stereo                                         = 1,
    ESourceBusChannels                             = 2

};


// Enum  Engine.ESourceBusSendLevelControlMethod
enum class ESourceBusSendLevelControlMethod : uint8_t
{
    Linear                                         = 0,
    CustomCurve                                    = 1,
    Manual                                         = 2,
    ESourceBusSendLevelControlMethod               = 3

};


// Enum  Engine.EGainParamMode
enum class EGainParamMode : uint8_t
{
    Linear                                         = 0,
    Decibels                                       = 1,
    EGainParamMode                                 = 2

};


// Enum  Engine.EAudioSpectrumType
enum class EAudioSpectrumType : uint8_t
{
    MagnitudeSpectrum                              = 0,
    PowerSpectrum                                  = 1,
    Decibel                                        = 2,
    EAudioSpectrumType                             = 3

};


// Enum  Engine.EFFTWindowType
enum class EFFTWindowType : uint8_t
{
    None                                           = 0,
    Hamming                                        = 1,
    Hann                                           = 2,
    Blackman                                       = 3,
    EFFTWindowType                                 = 4

};


// Enum  Engine.EFFTPeakInterpolationMethod
enum class EFFTPeakInterpolationMethod : uint8_t
{
    NearestNeighbor                                = 0,
    Linear                                         = 1,
    Quadratic                                      = 2,
    ConstantQ                                      = 3,
    EFFTPeakInterpolationMethod                    = 4

};


// Enum  Engine.EFFTSize
enum class EFFTSize : uint8_t
{
    DefaultSize                                    = 0,
    Min                                            = 1,
    Small                                          = 2,
    Medium                                         = 3,
    Large                                          = 4,
    VeryLarge                                      = 5,
    Max                                            = 6

};


// Enum  Engine.ESubmixSendStage
enum class ESubmixSendStage : uint8_t
{
    PostDistanceAttenuation                        = 0,
    PreDistanceAttenuation                         = 1,
    ESubmixSendStage                               = 2

};


// Enum  Engine.ESendLevelControlMethod
enum class ESendLevelControlMethod : uint8_t
{
    Linear                                         = 0,
    CustomCurve                                    = 1,
    Manual                                         = 2,
    ESendLevelControlMethod                        = 3

};


// Enum  Engine.EAudioRecordingExportType
enum class EAudioRecordingExportType : uint8_t
{
    SoundWave                                      = 0,
    WavFile                                        = 1,
    EAudioRecordingExportType                      = 2

};


// Enum  Engine.EAudioSpectrumBandPresetType
enum class EAudioSpectrumBandPresetType : uint8_t
{
    KickDrum                                       = 0,
    SnareDrum                                      = 1,
    Voice                                          = 2,
    Cymbals                                        = 3,
    EAudioSpectrumBandPresetType                   = 4

};


// Enum  Engine.ESoundWaveFFTSize
enum class ESoundWaveFFTSize : uint8_t
{
    VerySmall                                      = 0,
    Small                                          = 1,
    Medium                                         = 2,
    Large                                          = 3,
    VeryLarge                                      = 4,
    ESoundWaveFFTSize                              = 5

};


// Enum  Engine.EDecompressionType
enum class EDecompressionType : uint8_t
{
    DTYPE                                          = 0,
    DTYPE                                          = 1,
    DTYPE                                          = 2,
    DTYPE                                          = 3,
    DTYPE                                          = 4,
    DTYPE                                          = 5,
    DTYPE                                          = 6,
    DTYPE                                          = 7,
    DTYPE                                          = 8

};


// Enum  Engine.ESoundWaveLoadingBehavior
enum class ESoundWaveLoadingBehavior : uint8_t
{
    Inherited                                      = 0,
    RetainOnLoad                                   = 1,
    PrimeOnLoad                                    = 2,
    LoadOnDemand                                   = 3,
    ForceInline                                    = 4,
    Uninitialized                                  = 255,
    ESoundWaveLoadingBehavior                      = 256

};


// Enum  Engine.ESplineCoordinateSpace
enum class ESplineCoordinateSpace : uint8_t
{
    Local                                          = 0,
    World                                          = 1,
    ESplineCoordinateSpace                         = 2

};


// Enum  Engine.ESplinePointType
enum class ESplinePointType : uint8_t
{
    Linear                                         = 0,
    Curve                                          = 1,
    Constant                                       = 2,
    CurveClamped                                   = 3,
    CurveCustomTangent                             = 4,
    ESplinePointType                               = 5

};


// Enum  Engine.ESplineMeshAxis
enum class ESplineMeshAxis : uint8_t
{
    X                                              = 0,
    Y                                              = 1,
    Z                                              = 2,
    ESplineMeshAxis                                = 3

};


// Enum  Engine.EMFGpuDrivenMeshType
enum class EMFGpuDrivenMeshType : uint8_t
{
    Default                                        = 0,
    Disable                                        = 1,
    Compatible                                     = 2,
    Enable                                         = 3,
    EMFGpuDrivenMeshType                           = 4

};


// Enum  Engine.EOptimizationType
enum class EOptimizationType : uint8_t
{
    OT                                             = 0,
    OT                                             = 1,
    OT                                             = 2

};


// Enum  Engine.EImportanceLevel
enum class EImportanceLevel : uint8_t
{
    IL                                             = 0,
    IL                                             = 1,
    IL                                             = 2,
    IL                                             = 3,
    IL                                             = 4,
    IL                                             = 5,
    TEMP                                           = 6,
    EImportanceLevel                               = 7

};


// Enum  Engine.ENormalMode
enum class ENormalMode : uint8_t
{
    NM                                             = 0,
    NM                                             = 1,
    NM                                             = 2,
    NM                                             = 3,
    TEMP                                           = 4,
    ENormalMode                                    = 5

};


// Enum  Engine.EStereoLayerShape
enum class EStereoLayerShape : uint8_t
{
    SLSH                                           = 0,
    SLSH                                           = 1,
    SLSH                                           = 2,
    SLSH                                           = 3,
    SLSH                                           = 4

};


// Enum  Engine.EStereoLayerType
enum class EStereoLayerType : uint8_t
{
    SLT                                            = 0,
    SLT                                            = 1,
    SLT                                            = 2,
    SLT                                            = 3

};


// Enum  Engine.EStreamingAssetUseScene
enum class EStreamingAssetUseScene : uint8_t
{
    SAUS                                           = 0,
    SAUS                                           = 1,
    SAUS                                           = 2,
    SAUS                                           = 3

};


// Enum  Engine.EOpacitySourceMode
enum class EOpacitySourceMode : uint8_t
{
    OSM                                            = 0,
    OSM                                            = 1,
    OSM                                            = 2,
    OSM                                            = 3,
    OSM                                            = 4,
    OSM                                            = 5

};


// Enum  Engine.ESubUVBoundingVertexCount
enum class ESubUVBoundingVertexCount : uint8_t
{
    BVC                                            = 0,
    BVC                                            = 1,
    BVC                                            = 2

};


// Enum  Engine.EVerticalTextAligment
enum class EVerticalTextAligment : uint8_t
{
    EVRTA                                          = 0,
    EVRTA                                          = 1,
    EVRTA                                          = 2,
    EVRTA                                          = 3,
    EVRTA                                          = 4

};


// Enum  Engine.EHorizTextAligment
enum class EHorizTextAligment : uint8_t
{
    EHTA                                           = 0,
    EHTA                                           = 1,
    EHTA                                           = 2,
    EHTA                                           = 3

};


// Enum  Engine.ETextureLossyCompressionAmount
enum class ETextureLossyCompressionAmount : uint8_t
{
    TLCA                                           = 0,
    TLCA                                           = 1,
    TLCA                                           = 2,
    TLCA                                           = 3,
    TLCA                                           = 4,
    TLCA                                           = 5,
    TLCA                                           = 6,
    TLCA                                           = 7

};


// Enum  Engine.ETextureCompressionQuality
enum class ETextureCompressionQuality : uint8_t
{
    TCQ                                            = 0,
    TCQ                                            = 1,
    TCQ                                            = 2,
    TCQ                                            = 3,
    TCQ                                            = 4,
    TCQ                                            = 5,
    TCQ                                            = 6

};


// Enum  Engine.ETextureSourceFormat
enum class ETextureSourceFormat : uint8_t
{
    TSF                                            = 0,
    TSF                                            = 1,
    TSF                                            = 2,
    TSF                                            = 3,
    TSF                                            = 4,
    TSF                                            = 5,
    TSF                                            = 6,
    TSF                                            = 7,
    TSF                                            = 8,
    TSF                                            = 9

};


// Enum  Engine.ETextureSourceArtType
enum class ETextureSourceArtType : uint8_t
{
    TSAT                                           = 0,
    TSAT                                           = 1,
    TSAT                                           = 2,
    TSAT                                           = 3

};


// Enum  Engine.ETextureMipCount
enum class ETextureMipCount : uint8_t
{
    TMC                                            = 0,
    TMC                                            = 1,
    TMC                                            = 2,
    TMC                                            = 3

};


// Enum  Engine.ECompositeTextureMode
enum class ECompositeTextureMode : uint8_t
{
    CTM                                            = 0,
    CTM                                            = 1,
    CTM                                            = 2,
    CTM                                            = 3,
    CTM                                            = 4,
    CTM                                            = 5

};


// Enum  Engine.TextureAddress
enum class TextureAddress : uint8_t
{
    TA                                             = 0,
    TA                                             = 1,
    TA                                             = 2,
    TA                                             = 3

};


// Enum  Engine.TextureFilter
enum class TextureFilter : uint8_t
{
    TF                                             = 0,
    TF                                             = 1,
    TF                                             = 2,
    TF                                             = 3,
    TF                                             = 4

};


// Enum  Engine.NormalXYChannels
enum class NormalXYChannels : uint8_t
{
    NXYC                                           = 0,
    NXYC                                           = 1,
    NXYC                                           = 2,
    NXYC                                           = 3

};


// Enum  Engine.TextureCompressionSettings
enum class TextureCompressionSettings : uint8_t
{
    TC                                             = 0,
    TC                                             = 1,
    TC                                             = 2,
    TC                                             = 3,
    TC                                             = 4,
    TC                                             = 5,
    TC                                             = 6,
    TC                                             = 7,
    TC                                             = 8,
    TC                                             = 9,
    TC                                             = 10,
    TC                                             = 11,
    TC                                             = 12,
    TC                                             = 13,
    TC                                             = 14,
    TC                                             = 15

};


// Enum  Engine.ETextureDownscaleOptions
enum class ETextureDownscaleOptions : uint8_t
{
    Default                                        = 0,
    Unfiltered                                     = 1,
    SimpleAverage                                  = 2,
    Sharpen0                                       = 3,
    Sharpen1                                       = 4,
    Sharpen2                                       = 5,
    Sharpen3                                       = 6,
    Sharpen4                                       = 7,
    Sharpen5                                       = 8,
    Sharpen6                                       = 9,
    Sharpen7                                       = 10,
    Sharpen8                                       = 11,
    Sharpen9                                       = 12,
    Sharpen10                                      = 13,
    ETextureDownscaleOptions                       = 14

};


// Enum  Engine.ETextureGroupLODBiasLevel
enum class ETextureGroupLODBiasLevel : uint8_t
{
    TGL                                            = 0,
    TGL                                            = 1,
    TGL                                            = 2,
    TGL                                            = 3,
    TGL                                            = 4,
    TGL                                            = 5

};


// Enum  Engine.ETextureMipLoadOptions
enum class ETextureMipLoadOptions : uint8_t
{
    Default                                        = 0,
    AllMips                                        = 1,
    OnlyFirstMip                                   = 2,
    ETextureMipLoadOptions                         = 3

};


// Enum  Engine.ETextureSamplerFilter
enum class ETextureSamplerFilter : uint8_t
{
    Point                                          = 0,
    Bilinear                                       = 1,
    Trilinear                                      = 2,
    AnisotropicPoint                               = 3,
    AnisotropicLinear                              = 4,
    ETextureSamplerFilter                          = 5

};


// Enum  Engine.ETexturePowerOfTwoSetting
enum class ETexturePowerOfTwoSetting : uint8_t
{
    None                                           = 0,
    PadToPowerOfTwo                                = 1,
    PadToSquarePowerOfTwo                          = 2,
    ETexturePowerOfTwoSetting                      = 3

};


// Enum  Engine.TextureMipGenSettings
enum class TextureMipGenSettings : uint8_t
{
    TMGS                                           = 0,
    TMGS                                           = 1,
    TMGS                                           = 2,
    TMGS                                           = 3,
    TMGS                                           = 4,
    TMGS                                           = 5,
    TMGS                                           = 6,
    TMGS                                           = 7,
    TMGS                                           = 8,
    TMGS                                           = 9,
    TMGS                                           = 10,
    TMGS                                           = 11,
    TMGS                                           = 12,
    TMGS                                           = 13,
    TMGS                                           = 14,
    TMGS                                           = 15,
    TMGS                                           = 16,
    TMGS                                           = 17,
    TMGS                                           = 18,
    TMGS                                           = 19,
    TMGS                                           = 20,
    TMGS                                           = 21

};


// Enum  Engine.TextureGroup
enum class TextureGroup : uint8_t
{
    TEXTUREGROUP                                   = 0,
    TEXTUREGROUP                                   = 1,
    TEXTUREGROUP                                   = 2,
    TEXTUREGROUP                                   = 3,
    TEXTUREGROUP                                   = 4,
    TEXTUREGROUP                                   = 5,
    TEXTUREGROUP                                   = 6,
    TEXTUREGROUP                                   = 7,
    TEXTUREGROUP                                   = 8,
    TEXTUREGROUP                                   = 9,
    TEXTUREGROUP                                   = 10,
    TEXTUREGROUP                                   = 11,
    TEXTUREGROUP                                   = 12,
    TEXTUREGROUP                                   = 13,
    TEXTUREGROUP                                   = 14,
    TEXTUREGROUP                                   = 15,
    TEXTUREGROUP                                   = 16,
    TEXTUREGROUP                                   = 17,
    TEXTUREGROUP                                   = 18,
    TEXTUREGROUP                                   = 19,
    TEXTUREGROUP                                   = 20,
    TEXTUREGROUP                                   = 21,
    TEXTUREGROUP                                   = 22,
    TEXTUREGROUP                                   = 23,
    TEXTUREGROUP                                   = 24,
    TEXTUREGROUP                                   = 25,
    TEXTUREGROUP                                   = 26,
    TEXTUREGROUP                                   = 27,
    TEXTUREGROUP                                   = 28,
    TEXTUREGROUP                                   = 29,
    TEXTUREGROUP                                   = 30,
    TEXTUREGROUP                                   = 31,
    TEXTUREGROUP                                   = 32,
    TEXTUREGROUP                                   = 33,
    TEXTUREGROUP                                   = 34,
    TEXTUREGROUP                                   = 35,
    TEXTUREGROUP                                   = 36,
    TEXTUREGROUP                                   = 37,
    TEXTUREGROUP                                   = 38,
    TEXTUREGROUP                                   = 39,
    TEXTUREGROUP                                   = 40,
    TEXTUREGROUP                                   = 41,
    TEXTUREGROUP                                   = 42,
    TEXTUREGROUP                                   = 43,
    TEXTUREGROUP                                   = 44,
    TEXTUREGROUP                                   = 45,
    TEXTUREGROUP                                   = 46,
    TEXTUREGROUP                                   = 47,
    TEXTUREGROUP                                   = 48,
    TEXTUREGROUP                                   = 49,
    TEXTUREGROUP                                   = 50,
    TEXTUREGROUP                                   = 51,
    TEXTUREGROUP                                   = 52,
    TEXTUREGROUP                                   = 53,
    TEXTUREGROUP                                   = 54,
    TEXTUREGROUP                                   = 55,
    TEXTUREGROUP                                   = 56,
    TEXTUREGROUP                                   = 57,
    TEXTUREGROUP                                   = 58,
    TEXTUREGROUP                                   = 59,
    TEXTUREGROUP                                   = 60,
    TEXTUREGROUP                                   = 61,
    TEXTUREGROUP                                   = 62,
    TEXTUREGROUP                                   = 63,
    TEXTUREGROUP                                   = 64,
    TEXTUREGROUP                                   = 65,
    TEXTUREGROUP                                   = 66,
    TEXTUREGROUP                                   = 67,
    TEXTUREGROUP                                   = 68,
    TEXTUREGROUP                                   = 69,
    TEXTUREGROUP                                   = 70,
    TEXTUREGROUP                                   = 71,
    TEXTUREGROUP                                   = 72,
    TEXTUREGROUP                                   = 73,
    TEXTUREGROUP                                   = 74,
    TEXTUREGROUP                                   = 75,
    TEXTUREGROUP                                   = 76,
    TEXTUREGROUP                                   = 77,
    TEXTUREGROUP                                   = 78,
    TEXTUREGROUP                                   = 79,
    TEXTUREGROUP                                   = 80,
    TEXTUREGROUP                                   = 81,
    TEXTUREGROUP                                   = 82

};


// Enum  Engine.ETextureRenderTargetFormat
enum class ETextureRenderTargetFormat : uint8_t
{
    RTF                                            = 0,
    RTF                                            = 1,
    RTF                                            = 2,
    RTF                                            = 3,
    RTF                                            = 4,
    RTF                                            = 5,
    RTF                                            = 6,
    RTF                                            = 7,
    RTF                                            = 8,
    RTF                                            = 9,
    RTF                                            = 10,
    RTF                                            = 11

};


// Enum  Engine.ETimecodeProviderSynchronizationState
enum class ETimecodeProviderSynchronizationState : uint8_t
{
    Closed                                         = 0,
    Error                                          = 1,
    Synchronized                                   = 2,
    Synchronizing                                  = 3,
    ETimecodeProviderSynchronizationState          = 4

};


// Enum  Engine.ETimelineDirection
enum class ETimelineDirection : uint8_t
{
    Forward                                        = 0,
    Backward                                       = 1,
    ETimelineDirection                             = 2

};


// Enum  Engine.ETimelineLengthMode
enum class ETimelineLengthMode : uint8_t
{
    TL                                             = 0,
    TL                                             = 1,
    TL                                             = 2

};


// Enum  Engine.ETimeStretchCurveMapping
enum class ETimeStretchCurveMapping : uint8_t
{
    T                                              = 0,
    T                                              = 1,
    T                                              = 2,
    MAX                                            = 3

};


// Enum  Engine.ETwitterIntegrationDelegate
enum class ETwitterIntegrationDelegate : uint8_t
{
    TID                                            = 0,
    TID                                            = 1,
    TID                                            = 2,
    TID                                            = 3

};


// Enum  Engine.ETwitterRequestMethod
enum class ETwitterRequestMethod : uint8_t
{
    TRM                                            = 0,
    TRM                                            = 1,
    TRM                                            = 2,
    TRM                                            = 3

};


// Enum  Engine.EUserDefinedStructureStatus
enum class EUserDefinedStructureStatus : uint8_t
{
    UDSS                                           = 0,
    UDSS                                           = 1,
    UDSS                                           = 2,
    UDSS                                           = 3,
    UDSS                                           = 4

};


// Enum  Engine.EUIScalingRule
enum class EUIScalingRule : uint8_t
{
    ShortestSide                                   = 0,
    LongestSide                                    = 1,
    Horizontal                                     = 2,
    Vertical                                       = 3,
    ScaleToFit                                     = 4,
    Custom                                         = 5,
    EUIScalingRule                                 = 6

};


// Enum  Engine.ERenderFocusRule
enum class ERenderFocusRule : uint8_t
{
    Always                                         = 0,
    NonPointer                                     = 1,
    NavigationOnly                                 = 2,
    Never                                          = 3,
    ERenderFocusRule                               = 4

};


// Enum  Engine.EVectorFieldConstructionOp
enum class EVectorFieldConstructionOp : uint8_t
{
    VFCO                                           = 0,
    VFCO                                           = 1,
    VFCO                                           = 2

};


// Enum  Engine.EWindSourceType
enum class EWindSourceType : uint8_t
{
    Directional                                    = 0,
    Point                                          = 1,
    EWindSourceType                                = 2

};


// Enum  Engine.EWeaponRangeType
enum class EWeaponRangeType : uint8_t
{
    WeaponRangeType                                = 0,
    WeaponRangeType                                = 1,
    WeaponRangeType                                = 2,
    WeaponRangeType                                = 3

};


// Enum  Engine.EPSCPoolMethod
enum class EPSCPoolMethod : uint8_t
{
    None                                           = 0,
    AutoRelease                                    = 1,
    ManualRelease                                  = 2,
    ManualRelease                                  = 3,
    FreeInPool                                     = 4,
    EPSCPoolMethod                                 = 5

};


// Enum  Engine.EVolumeLightingMethod
enum class EVolumeLightingMethod : uint8_t
{
    VLM                                            = 0,
    VLM                                            = 1,
    VLM                                            = 2,
    VLM                                            = 3

};


// Enum  Engine.EVisibilityAggressiveness
enum class EVisibilityAggressiveness : uint8_t
{
    VIS                                            = 0,
    VIS                                            = 1,
    VIS                                            = 2,
    VIS                                            = 3

};


// Enum  ClothingSystemRuntimeCommon.EClothingWindMethod
enum class EClothingWindMethod : uint8_t
{
    EClothingWindMethod                            = 0,
    EClothingWindMethod                            = 1,
    EClothingWindMethod                            = 2

};


// Enum  ClothingSystemRuntimeCommon.EWeightMapTargetCommon
enum class EWeightMapTargetCommon : uint8_t
{
    None                                           = 0,
    MaxDistance                                    = 1,
    BackstopDistance                               = 2,
    BackstopRadius                                 = 3,
    AnimDriveMultiplier                            = 4,
    EWeightMapTargetCommon                         = 5

};


// Enum  ClothingSystemRuntimeNv.EClothingWindMethodNv
enum class EClothingWindMethodNv : uint8_t
{
    Legacy                                         = 0,
    Accurate                                       = 1,
    EClothingWindMethodNv                          = 2

};


// Enum  InteractiveToolsFramework.EInputCaptureState
enum class EInputCaptureState : uint8_t
{
    Begin                                          = 1,
    Continue                                       = 2,
    End                                            = 3,
    Ignore                                         = 4,
    EInputCaptureState                             = 5

};


// Enum  InteractiveToolsFramework.EInputCaptureRequestType
enum class EInputCaptureRequestType : uint8_t
{
    Begin                                          = 1,
    Ignore                                         = 2,
    EInputCaptureRequestType                       = 3

};


// Enum  InteractiveToolsFramework.EInputCaptureSide
enum class EInputCaptureSide : uint8_t
{
    None                                           = 0,
    Left                                           = 1,
    Right                                          = 2,
    Both                                           = 3,
    Any                                            = 99,
    EInputCaptureSide                              = 100

};


// Enum  InteractiveToolsFramework.EInputDevices
enum class EInputDevices : uint8_t
{
    None                                           = 0,
    Keyboard                                       = 1,
    Mouse                                          = 2,
    Gamepad                                        = 4,
    OculusTouch                                    = 8,
    HTCViveWands                                   = 16,
    AnySpatialDevice                               = 24,
    TabletFingers                                  = 1024,
    EInputDevices                                  = 1025

};


// Enum  InteractiveToolsFramework.ETransformGizmoSubElements
enum class ETransformGizmoSubElements : uint8_t
{
    None                                           = 0,
    TranslateAxisX                                 = 2,
    TranslateAxisY                                 = 4,
    TranslateAxisZ                                 = 8,
    TranslateAllAxes                               = 14,
    TranslatePlaneXY                               = 16,
    TranslatePlaneXZ                               = 32,
    TranslatePlaneYZ                               = 64,
    TranslateAllPlanes                             = 112,
    RotateAxisX                                    = 128,
    RotateAxisY                                    = 256,
    RotateAxisZ                                    = 512,
    RotateAllAxes                                  = 896,
    ScaleAxisX                                     = 1024,
    ScaleAxisY                                     = 2048,
    ScaleAxisZ                                     = 4096,
    ScaleAllAxes                                   = 7168,
    ScalePlaneYZ                                   = 8192,
    ScalePlaneXZ                                   = 16384,
    ScalePlaneXY                                   = 32768,
    ScaleAllPlanes                                 = 57344,
    ScaleUniform                                   = 65536,
    StandardTranslateRotate                        = 1022,
    TranslateRotateUniformScale                    = 66558,
    FullTranslateRotateScale                       = 131070,
    ETransformGizmoSubElements                     = 131071

};


// Enum  InteractiveToolsFramework.EToolChangeTrackingMode
enum class EToolChangeTrackingMode : uint8_t
{
    NoChangeTracking                               = 1,
    UndoToExit                                     = 2,
    FullUndoRedo                                   = 3,
    EToolChangeTrackingMode                        = 4

};


// Enum  InteractiveToolsFramework.EToolSide
enum class EToolSide : uint8_t
{
    Left                                           = 1,
    Mouse                                          = 1,
    Right                                          = 2,
    EToolSide                                      = 3

};


// Enum  InteractiveToolsFramework.EViewInteractionState
enum class EViewInteractionState : uint8_t
{
    None                                           = 0,
    Hovered                                        = 1,
    Focused                                        = 2,
    EViewInteractionState                          = 3

};


// Enum  InteractiveToolsFramework.ESelectedObjectsModificationType
enum class ESelectedObjectsModificationType : uint8_t
{
    Replace                                        = 0,
    Add                                            = 1,
    Remove                                         = 2,
    Clear                                          = 3,
    ESelectedObjectsModificationType               = 4

};


// Enum  InteractiveToolsFramework.EToolMessageLevel
enum class EToolMessageLevel : uint8_t
{
    Internal                                       = 0,
    UserMessage                                    = 1,
    UserNotification                               = 2,
    UserWarning                                    = 3,
    UserError                                      = 4,
    EToolMessageLevel                              = 5

};


// Enum  InteractiveToolsFramework.EToolContextCoordinateSystem
enum class EToolContextCoordinateSystem : uint8_t
{
    World                                          = 0,
    Local                                          = 1,
    EToolContextCoordinateSystem                   = 2

};


// Enum  InteractiveToolsFramework.EStandardToolContextMaterials
enum class EStandardToolContextMaterials : uint8_t
{
    VertexColorMaterial                            = 1,
    EStandardToolContextMaterials                  = 2

};


// Enum  InteractiveToolsFramework.ESceneSnapQueryTargetType
enum class ESceneSnapQueryTargetType : uint8_t
{
    None                                           = 0,
    MeshVertex                                     = 1,
    MeshEdge                                       = 2,
    Grid                                           = 4,
    All                                            = 7,
    ESceneSnapQueryTargetType                      = 8

};


// Enum  InteractiveToolsFramework.ESceneSnapQueryType
enum class ESceneSnapQueryType : uint8_t
{
    Position                                       = 1,
    Rotation                                       = 2,
    ESceneSnapQueryType                            = 3

};


// Enum  NavigationSystem.ERuntimeGenerationType
enum class ERuntimeGenerationType : uint8_t
{
    Static                                         = 0,
    DynamicModifiersOnly                           = 1,
    Dynamic                                        = 2,
    LegacyGeneration                               = 3,
    ERuntimeGenerationType                         = 4

};


// Enum  NavigationSystem.ENavCostDisplay
enum class ENavCostDisplay : uint8_t
{
    TotalCost                                      = 0,
    HeuristicOnly                                  = 1,
    RealCostOnly                                   = 2,
    ENavCostDisplay                                = 3

};


// Enum  NavigationSystem.ENavSystemOverridePolicy
enum class ENavSystemOverridePolicy : uint8_t
{
    Override                                       = 0,
    Append                                         = 1,
    Skip                                           = 2,
    ENavSystemOverridePolicy                       = 3

};


// Enum  NavigationSystem.ERecastPartitioning
enum class ERecastPartitioning : uint8_t
{
    Monotone                                       = 0,
    Watershed                                      = 1,
    ChunkyMonotone                                 = 2,
    ERecastPartitioning                            = 3

};


// Enum  LISlua425.EINTLPropertyClass
enum class EINTLPropertyClass : uint8_t
{
    Byte                                           = 0,
    Int8                                           = 1,
    Int16                                          = 2,
    Int                                            = 3,
    Int64                                          = 4,
    UInt16                                         = 5,
    UInt32                                         = 6,
    UInt64                                         = 7,
    UnsizedInt                                     = 8,
    UnsizedUInt                                    = 9,
    Float                                          = 10,
    Double                                         = 11,
    Bool                                           = 12,
    SoftClass                                      = 13,
    WeakObject                                     = 14,
    LazyObject                                     = 15,
    SoftObject                                     = 16,
    Class                                          = 17,
    Object                                         = 18,
    Interface                                      = 19,
    Name                                           = 20,
    Str                                            = 21,
    Array                                          = 22,
    Map                                            = 23,
    Set                                            = 24,
    Struct                                         = 25,
    Delegate                                       = 26,
    MulticastDelegate                              = 27,
    Text                                           = 28,
    Enum                                           = 29,
    EINTLPropertyClass                             = 30

};


// Enum  GameplayTasks.EGameplayTaskState
enum class EGameplayTaskState : uint8_t
{
    Uninitialized                                  = 0,
    AwaitingActivation                             = 1,
    Paused                                         = 2,
    Active                                         = 3,
    Finished                                       = 4,
    EGameplayTaskState                             = 5

};


// Enum  ChaosSolverEngine.EClusterConnectionTypeEnum
enum class EClusterConnectionTypeEnum : uint8_t
{
    Chaos                                          = 0,
    Chaos                                          = 1,
    Chaos                                          = 2,
    Chaos                                          = 3,
    Chaos                                          = 4,
    Chaos                                          = 5,
    Chaos                                          = 6

};


// Enum  GeometryCollectionEngine.EChaosBreakingSortMethod
enum class EChaosBreakingSortMethod : uint8_t
{
    SortNone                                       = 0,
    SortByHighestMass                              = 1,
    SortByHighestSpeed                             = 2,
    SortByNearestFirst                             = 3,
    Count                                          = 4,
    EChaosBreakingSortMethod                       = 5

};


// Enum  GeometryCollectionEngine.EChaosCollisionSortMethod
enum class EChaosCollisionSortMethod : uint8_t
{
    SortNone                                       = 0,
    SortByHighestMass                              = 1,
    SortByHighestSpeed                             = 2,
    SortByHighestImpulse                           = 3,
    SortByNearestFirst                             = 4,
    Count                                          = 5,
    EChaosCollisionSortMethod                      = 6

};


// Enum  GeometryCollectionEngine.EChaosTrailingSortMethod
enum class EChaosTrailingSortMethod : uint8_t
{
    SortNone                                       = 0,
    SortByHighestMass                              = 1,
    SortByHighestSpeed                             = 2,
    SortByNearestFirst                             = 3,
    Count                                          = 4,
    EChaosTrailingSortMethod                       = 5

};


// Enum  GeometryCollectionEngine.EGeometryCollectionDebugDrawActorHideGeometry
enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8_t
{
    HideNone                                       = 0,
    HideWithCollision                              = 1,
    HideSelected                                   = 2,
    HideWholeCollection                            = 3,
    HideAll                                        = 4,
    EGeometryCollectionDebugDrawActorHideGeometry  = 5

};


// Enum  GeometryCollectionEngine.ECollectionGroupEnum
enum class ECollectionGroupEnum : uint8_t
{
    Chaos                                          = 0,
    Chaos                                          = 1

};


// Enum  GeometryCollectionEngine.ECollectionAttributeEnum
enum class ECollectionAttributeEnum : uint8_t
{
    Chaos                                          = 0,
    Chaos                                          = 1,
    Chaos                                          = 2,
    Chaos                                          = 3

};


// Enum  RigVM.ERigVMParameterType
enum class ERigVMParameterType : uint8_t
{
    Input                                          = 0,
    Output                                         = 1,
    Invalid                                        = 2,
    ERigVMParameterType                            = 3

};


// Enum  RigVM.ERigVMOpCode
enum class ERigVMOpCode : uint8_t
{
    Execute                                        = 0,
    Execute                                        = 1,
    Execute                                        = 2,
    Execute                                        = 3,
    Execute                                        = 4,
    Execute                                        = 5,
    Execute                                        = 6,
    Execute                                        = 7,
    Execute                                        = 8,
    Execute                                        = 9,
    Execute                                        = 10,
    Execute                                        = 11,
    Execute                                        = 12,
    Execute                                        = 13,
    Execute                                        = 14,
    Execute                                        = 15,
    Execute                                        = 16,
    Execute                                        = 17,
    Execute                                        = 18,
    Execute                                        = 19,
    Execute                                        = 20,
    Execute                                        = 21,
    Execute                                        = 22,
    Execute                                        = 23,
    Execute                                        = 24,
    Execute                                        = 25,
    Execute                                        = 26,
    Execute                                        = 27,
    Execute                                        = 28,
    Execute                                        = 29,
    Execute                                        = 30,
    Execute                                        = 31,
    Execute                                        = 32,
    Execute                                        = 33,
    Execute                                        = 34,
    Execute                                        = 35,
    Execute                                        = 36,
    Execute                                        = 37,
    Execute                                        = 38,
    Execute                                        = 39,
    Execute                                        = 40,
    Execute                                        = 41,
    Execute                                        = 42,
    Execute                                        = 43,
    Execute                                        = 44,
    Execute                                        = 45,
    Execute                                        = 46,
    Execute                                        = 47,
    Execute                                        = 48,
    Execute                                        = 49,
    Execute                                        = 50,
    Execute                                        = 51,
    Execute                                        = 52,
    Execute                                        = 53,
    Execute                                        = 54,
    Execute                                        = 55,
    Execute                                        = 56,
    Execute                                        = 57,
    Execute                                        = 58,
    Execute                                        = 59,
    Execute                                        = 60,
    Execute                                        = 61,
    Execute                                        = 62,
    Execute                                        = 63,
    Execute                                        = 64,
    Zero                                           = 65,
    BoolFalse                                      = 66,
    BoolTrue                                       = 67,
    Copy                                           = 68,
    Increment                                      = 69,
    Decrement                                      = 70,
    Equals                                         = 71,
    NotEquals                                      = 72,
    JumpAbsolute                                   = 73,
    JumpForward                                    = 74,
    JumpBackward                                   = 75,
    JumpAbsoluteIf                                 = 76,
    JumpForwardIf                                  = 77,
    JumpBackwardIf                                 = 78,
    ChangeType                                     = 79,
    Exit                                           = 80,
    BeginBlock                                     = 81,
    EndBlock                                       = 82,
    Invalid                                        = 83,
    ERigVMOpCode                                   = 84

};


// Enum  RigVM.ERigVMPinDirection
enum class ERigVMPinDirection : uint8_t
{
    Input                                          = 0,
    Output                                         = 1,
    IO                                             = 2,
    Visible                                        = 3,
    Hidden                                         = 4,
    Invalid                                        = 5,
    ERigVMPinDirection                             = 6

};


// Enum  RigVM.ERigVMRegisterType
enum class ERigVMRegisterType : uint8_t
{
    Plain                                          = 0,
    String                                         = 1,
    Name                                           = 2,
    Struct                                         = 3,
    Invalid                                        = 4,
    ERigVMRegisterType                             = 5

};


// Enum  RigVM.ERigVMMemoryType
enum class ERigVMMemoryType : uint8_t
{
    Work                                           = 0,
    Literal                                        = 1,
    External                                       = 2,
    Invalid                                        = 3,
    ERigVMMemoryType                               = 4

};


// Enum  VectorVM.EVectorVMOp
enum class EVectorVMOp : uint8_t
{
    done                                           = 0,
    add                                            = 1,
    sub                                            = 2,
    mul                                            = 3,
    div                                            = 4,
    mad                                            = 5,
    lerp                                           = 6,
    rcp                                            = 7,
    rsq                                            = 8,
    sqrt                                           = 9,
    neg                                            = 10,
    abs                                            = 11,
    exp                                            = 12,
    exp2                                           = 13,
    log                                            = 14,
    log2                                           = 15,
    sin                                            = 16,
    cos                                            = 17,
    tan                                            = 18,
    asin                                           = 19,
    acos                                           = 20,
    atan                                           = 21,
    atan2                                          = 22,
    ceil                                           = 23,
    floor                                          = 24,
    fmod                                           = 25,
    frac                                           = 26,
    trunc                                          = 27,
    clamp                                          = 28,
    min                                            = 29,
    max                                            = 30,
    pow                                            = 31,
    round                                          = 32,
    sign                                           = 33,
    step                                           = 34,
    random                                         = 35,
    noise                                          = 36,
    cmplt                                          = 37,
    cmple                                          = 38,
    cmpgt                                          = 39,
    cmpge                                          = 40,
    cmpeq                                          = 41,
    cmpneq                                         = 42,
    select                                         = 43,
    addi                                           = 44,
    subi                                           = 45,
    muli                                           = 46,
    divi                                           = 47,
    clampi                                         = 48,
    mini                                           = 49,
    maxi                                           = 50,
    absi                                           = 51,
    negi                                           = 52,
    signi                                          = 53,
    randomi                                        = 54,
    cmplti                                         = 55,
    cmplei                                         = 56,
    cmpgti                                         = 57,
    cmpgei                                         = 58,
    cmpeqi                                         = 59,
    cmpneqi                                        = 60,
    bit                                            = 61,
    bit                                            = 62,
    bit                                            = 63,
    bit                                            = 64,
    bit                                            = 65,
    bit                                            = 66,
    logic                                          = 67,
    logic                                          = 68,
    logic                                          = 69,
    logic                                          = 70,
    f2i                                            = 71,
    i2f                                            = 72,
    f2b                                            = 73,
    b2f                                            = 74,
    i2b                                            = 75,
    b2i                                            = 76,
    inputdata                                      = 77,
    inputdata                                      = 78,
    inputdata                                      = 79,
    inputdata                                      = 80,
    inputdata                                      = 81,
    inputdata                                      = 82,
    outputdata                                     = 83,
    outputdata                                     = 84,
    outputdata                                     = 85,
    acquireindex                                   = 86,
    external                                       = 87,
    exec                                           = 88,
    noise2D                                        = 89,
    noise3D                                        = 90,
    enter                                          = 91,
    exit                                           = 92,
    update                                         = 93,
    acquire                                        = 94,
    NumOpcodes                                     = 95

};


// Enum  VectorVM.EVectorVMOperandLocation
enum class EVectorVMOperandLocation : uint8_t
{
    Register                                       = 0,
    Constant                                       = 1,
    Num                                            = 2,
    EVectorVMOperandLocation                       = 3

};


// Enum  VectorVM.EVectorVMBaseTypes
enum class EVectorVMBaseTypes : uint8_t
{
    Float                                          = 0,
    Int                                            = 1,
    Bool                                           = 2,
    Num                                            = 3,
    EVectorVMBaseTypes                             = 4

};


// Enum  AIModule.EAISenseNotifyType
enum class EAISenseNotifyType : uint8_t
{
    OnEveryPerception                              = 0,
    OnPerceptionChange                             = 1,
    EAISenseNotifyType                             = 2

};


// Enum  AIModule.EAITaskPriority
enum class EAITaskPriority : uint8_t
{
    Lowest                                         = 0,
    Low                                            = 64,
    AutonomousAI                                   = 127,
    High                                           = 192,
    Ultimate                                       = 254,
    EAITaskPriority                                = 255

};


// Enum  AIModule.EGenericAICheck
enum class EGenericAICheck : uint8_t
{
    Less                                           = 0,
    LessOrEqual                                    = 1,
    Equal                                          = 2,
    NotEqual                                       = 3,
    GreaterOrEqual                                 = 4,
    Greater                                        = 5,
    IsTrue                                         = 6,
    MAX                                            = 7

};


// Enum  AIModule.EAILockSource
enum class EAILockSource : uint8_t
{
    Animation                                      = 0,
    Logic                                          = 1,
    Script                                         = 2,
    Gameplay                                       = 3,
    MAX                                            = 4

};


// Enum  AIModule.EAIRequestPriority
enum class EAIRequestPriority : uint8_t
{
    SoftScript                                     = 0,
    Logic                                          = 1,
    HardScript                                     = 2,
    Reaction                                       = 3,
    Ultimate                                       = 4,
    MAX                                            = 5

};


// Enum  AIModule.EPawnActionEventType
enum class EPawnActionEventType : uint8_t
{
    Invalid                                        = 0,
    FailedToStart                                  = 1,
    InstantAbort                                   = 2,
    FinishedAborting                               = 3,
    FinishedExecution                              = 4,
    Push                                           = 5,
    EPawnActionEventType                           = 6

};


// Enum  AIModule.EPawnActionResult
enum class EPawnActionResult : uint8_t
{
    NotStarted                                     = 0,
    InProgress                                     = 1,
    Success                                        = 2,
    Failed                                         = 3,
    Aborted                                        = 4,
    EPawnActionResult                              = 5

};


// Enum  AIModule.EPawnActionAbortState
enum class EPawnActionAbortState : uint8_t
{
    NeverStarted                                   = 0,
    NotBeingAborted                                = 1,
    MarkPendingAbort                               = 2,
    LatentAbortInProgress                          = 3,
    AbortDone                                      = 4,
    MAX                                            = 5

};


// Enum  AIModule.FAIDistanceType
enum class FAIDistanceType : uint8_t
{
    Distance3D                                     = 0,
    Distance2D                                     = 1,
    DistanceZ                                      = 2,
    MAX                                            = 3

};


// Enum  AIModule.EAIOptionFlag
enum class EAIOptionFlag : uint8_t
{
    Default                                        = 0,
    Enable                                         = 1,
    Disable                                        = 2,
    MAX                                            = 3

};


// Enum  AIModule.EBTFlowAbortMode
enum class EBTFlowAbortMode : uint8_t
{
    None                                           = 0,
    LowerPriority                                  = 1,
    Self                                           = 2,
    Both                                           = 3,
    EBTFlowAbortMode                               = 4

};


// Enum  AIModule.EBTNodeResult
enum class EBTNodeResult : uint8_t
{
    Succeeded                                      = 0,
    Failed                                         = 1,
    Aborted                                        = 2,
    InProgress                                     = 3,
    EBTNodeResult                                  = 4

};


// Enum  AIModule.ETextKeyOperation
enum class ETextKeyOperation : uint8_t
{
    Equal                                          = 0,
    NotEqual                                       = 1,
    Contain                                        = 2,
    NotContain                                     = 3,
    ETextKeyOperation                              = 4

};


// Enum  AIModule.EArithmeticKeyOperation
enum class EArithmeticKeyOperation : uint8_t
{
    Equal                                          = 0,
    NotEqual                                       = 1,
    Less                                           = 2,
    LessOrEqual                                    = 3,
    Greater                                        = 4,
    GreaterOrEqual                                 = 5,
    EArithmeticKeyOperation                        = 6

};


// Enum  AIModule.EBasicKeyOperation
enum class EBasicKeyOperation : uint8_t
{
    Set                                            = 0,
    NotSet                                         = 1,
    EBasicKeyOperation                             = 2

};


// Enum  AIModule.EBTParallelMode
enum class EBTParallelMode : uint8_t
{
    AbortBackground                                = 0,
    WaitForBackground                              = 1,
    EBTParallelMode                                = 2

};


// Enum  AIModule.EBTDecoratorLogic
enum class EBTDecoratorLogic : uint8_t
{
    Invalid                                        = 0,
    Test                                           = 1,
    And                                            = 2,
    Or                                             = 3,
    Not                                            = 4,
    EBTDecoratorLogic                              = 5

};


// Enum  AIModule.EBTChildIndex
enum class EBTChildIndex : uint8_t
{
    FirstNode                                      = 0,
    TaskNode                                       = 1,
    EBTChildIndex                                  = 2

};


// Enum  AIModule.EBTBlackboardRestart
enum class EBTBlackboardRestart : uint8_t
{
    ValueChange                                    = 0,
    ResultChange                                   = 1,
    EBTBlackboardRestart                           = 2

};


// Enum  AIModule.EBlackBoardEntryComparison
enum class EBlackBoardEntryComparison : uint8_t
{
    Equal                                          = 0,
    NotEqual                                       = 1,
    EBlackBoardEntryComparison                     = 2

};


// Enum  AIModule.EPathExistanceQueryType
enum class EPathExistanceQueryType : uint8_t
{
    NavmeshRaycast2D                               = 0,
    HierarchicalQuery                              = 1,
    RegularPathFinding                             = 2,
    EPathExistanceQueryType                        = 3

};


// Enum  AIModule.EPointOnCircleSpacingMethod
enum class EPointOnCircleSpacingMethod : uint8_t
{
    BySpaceBetween                                 = 0,
    ByNumberOfPoints                               = 1,
    EPointOnCircleSpacingMethod                    = 2

};


// Enum  AIModule.EEQSNormalizationType
enum class EEQSNormalizationType : uint8_t
{
    Absolute                                       = 0,
    RelativeToScores                               = 1,
    EEQSNormalizationType                          = 2

};


// Enum  AIModule.EEnvTestDistance
enum class EEnvTestDistance : uint8_t
{
    Distance3D                                     = 0,
    Distance2D                                     = 1,
    DistanceZ                                      = 2,
    DistanceAbsoluteZ                              = 3,
    EEnvTestDistance                               = 4

};


// Enum  AIModule.EEnvTestDot
enum class EEnvTestDot : uint8_t
{
    Dot3D                                          = 0,
    Dot2D                                          = 1,
    EEnvTestDot                                    = 2

};


// Enum  AIModule.EEnvTestPathfinding
enum class EEnvTestPathfinding : uint8_t
{
    PathExist                                      = 0,
    PathCost                                       = 1,
    PathLength                                     = 2,
    EEnvTestPathfinding                            = 3

};


// Enum  AIModule.EEnvQueryTestClamping
enum class EEnvQueryTestClamping : uint8_t
{
    None                                           = 0,
    SpecifiedValue                                 = 1,
    FilterThreshold                                = 2,
    EEnvQueryTestClamping                          = 3

};


// Enum  AIModule.EEnvDirection
enum class EEnvDirection : uint8_t
{
    TwoPoints                                      = 0,
    Rotation                                       = 1,
    EEnvDirection                                  = 2

};


// Enum  AIModule.EEnvOverlapShape
enum class EEnvOverlapShape : uint8_t
{
    Box                                            = 0,
    Sphere                                         = 1,
    Capsule                                        = 2,
    EEnvOverlapShape                               = 3

};


// Enum  AIModule.EEnvTraceShape
enum class EEnvTraceShape : uint8_t
{
    Line                                           = 0,
    Box                                            = 1,
    Sphere                                         = 2,
    Capsule                                        = 3,
    EEnvTraceShape                                 = 4

};


// Enum  AIModule.EEnvQueryTrace
enum class EEnvQueryTrace : uint8_t
{
    None                                           = 0,
    Navigation                                     = 1,
    Geometry                                       = 2,
    NavigationOverLedges                           = 3,
    EEnvQueryTrace                                 = 4

};


// Enum  AIModule.EAIParamType
enum class EAIParamType : uint8_t
{
    Float                                          = 0,
    Int                                            = 1,
    Bool                                           = 2,
    MAX                                            = 3

};


// Enum  AIModule.EEnvQueryParam
enum class EEnvQueryParam : uint8_t
{
    Float                                          = 0,
    Int                                            = 1,
    Bool                                           = 2,
    EEnvQueryParam                                 = 3

};


// Enum  AIModule.EEnvQueryRunMode
enum class EEnvQueryRunMode : uint8_t
{
    SingleResult                                   = 0,
    RandomBest5Pct                                 = 1,
    RandomBest25Pct                                = 2,
    AllMatching                                    = 3,
    EEnvQueryRunMode                               = 4

};


// Enum  AIModule.EEnvTestScoreOperator
enum class EEnvTestScoreOperator : uint8_t
{
    AverageScore                                   = 0,
    MinScore                                       = 1,
    MaxScore                                       = 2,
    Multiply                                       = 3,
    EEnvTestScoreOperator                          = 4

};


// Enum  AIModule.EEnvTestFilterOperator
enum class EEnvTestFilterOperator : uint8_t
{
    AllPass                                        = 0,
    AnyPass                                        = 1,
    EEnvTestFilterOperator                         = 2

};


// Enum  AIModule.EEnvQueryPriority
enum class EEnvQueryPriority : uint8_t
{
    Normal                                         = 0,
    High                                           = 1,
    EEnvQueryPriority                              = 2

};


// Enum  AIModule.EEnvTestCost
enum class EEnvTestCost : uint8_t
{
    Low                                            = 0,
    Medium                                         = 1,
    High                                           = 2,
    EEnvTestCost                                   = 3

};


// Enum  AIModule.EEnvTestWeight
enum class EEnvTestWeight : uint8_t
{
    None                                           = 0,
    Square                                         = 1,
    Inverse                                        = 2,
    Unused                                         = 3,
    Constant                                       = 4,
    Skip                                           = 5,
    EEnvTestWeight                                 = 6

};


// Enum  AIModule.EEnvTestScoreEquation
enum class EEnvTestScoreEquation : uint8_t
{
    Linear                                         = 0,
    Square                                         = 1,
    InverseLinear                                  = 2,
    SquareRoot                                     = 3,
    Constant                                       = 4,
    EEnvTestScoreEquation                          = 5

};


// Enum  AIModule.EEnvTestFilterType
enum class EEnvTestFilterType : uint8_t
{
    Minimum                                        = 0,
    Maximum                                        = 1,
    Range                                          = 2,
    Match                                          = 3,
    EEnvTestFilterType                             = 4

};


// Enum  AIModule.EEnvTestPurpose
enum class EEnvTestPurpose : uint8_t
{
    Filter                                         = 0,
    Score                                          = 1,
    FilterAndScore                                 = 2,
    EEnvTestPurpose                                = 3

};


// Enum  AIModule.EEnvQueryHightlightMode
enum class EEnvQueryHightlightMode : uint8_t
{
    All                                            = 0,
    Best5Pct                                       = 1,
    Best25Pct                                      = 2,
    EEnvQueryHightlightMode                        = 3

};


// Enum  AIModule.ETeamAttitude
enum class ETeamAttitude : uint8_t
{
    Friendly                                       = 0,
    Neutral                                        = 1,
    Hostile                                        = 2,
    ETeamAttitude                                  = 3

};


// Enum  AIModule.EPathFollowingAction
enum class EPathFollowingAction : uint8_t
{
    Error                                          = 0,
    NoMove                                         = 1,
    DirectMove                                     = 2,
    PartialPath                                    = 3,
    PathToGoal                                     = 4,
    EPathFollowingAction                           = 5

};


// Enum  AIModule.EPathFollowingStatus
enum class EPathFollowingStatus : uint8_t
{
    Idle                                           = 0,
    Waiting                                        = 1,
    Paused                                         = 2,
    Moving                                         = 3,
    EPathFollowingStatus                           = 4

};


// Enum  AIModule.EPawnActionFailHandling
enum class EPawnActionFailHandling : uint8_t
{
    RequireSuccess                                 = 0,
    IgnoreFailure                                  = 1,
    EPawnActionFailHandling                        = 2

};


// Enum  AIModule.EPawnSubActionTriggeringPolicy
enum class EPawnSubActionTriggeringPolicy : uint8_t
{
    CopyBeforeTriggering                           = 0,
    ReuseInstances                                 = 1,
    EPawnSubActionTriggeringPolicy                 = 2

};


// Enum  AIModule.EPawnActionMoveMode
enum class EPawnActionMoveMode : uint8_t
{
    UsePathfinding                                 = 0,
    StraightLine                                   = 1,
    EPawnActionMoveMode                            = 2

};


// UserDefinedEnum  Engine.Default
enum class Default : uint8_t
{

};


// UserDefinedEnum  NPC.NPC
enum class NPC : uint8_t
{
    NPC                                            = 0,
    NPC                                            = 1,
    NPC                                            = 2,
    NPC                                            = 3

};


// UserDefinedEnum  NPC.NPC
enum class NPC : uint8_t
{
    NPC                                            = 0,
    NPC                                            = 1,
    NPC                                            = 2,
    NPC                                            = 3,
    NPC                                            = 4,
    NPC                                            = 5,
    NPC                                            = 6,
    NPC                                            = 7,
    NPC                                            = 8,
    NPC                                            = 9,
    NPC                                            = 10,
    NPC                                            = 11,
    NPC                                            = 12,
    NPC                                            = 13,
    NPC                                            = 14,
    NPC                                            = 15,
    NPC                                            = 16,
    NPC                                            = 17,
    NPC                                            = 18,
    NPC                                            = 19,
    NPC                                            = 20,
    NPC                                            = 21,
    NPC                                            = 22,
    NPC                                            = 23,
    NPC                                            = 24,
    NPC                                            = 25,
    NPC                                            = 26,
    NPC                                            = 27,
    NPC                                            = 28,
    NPC                                            = 29,
    NPC                                            = 30,
    NPC                                            = 31,
    NPC                                            = 32,
    NPC                                            = 33,
    NPC                                            = 34,
    NPC                                            = 35,
    NPC                                            = 36,
    NPC                                            = 37,
    NPC                                            = 38,
    NPC                                            = 39,
    NPC                                            = 40,
    NPC                                            = 41,
    NPC                                            = 42,
    NPC                                            = 43,
    NPC                                            = 44

};


// UserDefinedEnum  AreaRecType.AreaRecType
enum class AreaRecType : uint8_t
{
    NewEnumerator0                                 = 0,
    NewEnumerator1                                 = 1,
    NewEnumerator2                                 = 2,
    NewEnumerator3                                 = 3,
    NewEnumerator4                                 = 4,
    AreaRecType                                    = 5

};


// UserDefinedEnum  E.E
enum class E : uint8_t
{
    E                                              = 0,
    E                                              = 1,
    E                                              = 2,
    E                                              = 3,
    E                                              = 4

};


// UserDefinedEnum  EnumMapName.EnumMapName
enum class EnumMapName : uint8_t
{
    NewEnumerator4                                 = 0,
    NewEnumerator0                                 = 1,
    NewEnumerator1                                 = 2,
    NewEnumerator5                                 = 3,
    EnumMapName                                    = 4

};


// UserDefinedEnum  BPC.Enum
enum class Enum : uint8_t
{
    Enum                                           = 0,
    Enum                                           = 1,
    Enum                                           = 2,
    Enum                                           = 3,
    Enum                                           = 4,
    Enum                                           = 5,
    Enum                                           = 6,
    Enum                                           = 7,
    Enum                                           = 8,
    Enum                                           = 9,
    Enum                                           = 10,
    Enum                                           = 11,
    Enum                                           = 12,
    Enum                                           = 13,
    Enum                                           = 14,
    Enum                                           = 15,
    Enum                                           = 16

};


// UserDefinedEnum  NPC.NPC
enum class NPC : uint8_t
{
    NPC                                            = 0,
    NPC                                            = 1,
    NPC                                            = 2,
    NPC                                            = 3

};


// UserDefinedEnum  NPC.NPC
enum class NPC : uint8_t
{
    NPC                                            = 0,
    NPC                                            = 1,
    NPC                                            = 2,
    NPC                                            = 3,
    NPC                                            = 4,
    NPC                                            = 5,
    NPC                                            = 6,
    NPC                                            = 7

};


// UserDefinedEnum  NPC.NPC
enum class NPC : uint8_t
{
    NPC                                            = 0,
    NPC                                            = 1,
    NPC                                            = 2,
    NPC                                            = 3,
    NPC                                            = 4,
    NPC                                            = 5,
    NPC                                            = 6

};


// UserDefinedEnum  NPC.NPC
enum class NPC : uint8_t
{
    NPC                                            = 0,
    NPC                                            = 1,
    NPC                                            = 2

};


// UserDefinedEnum  NPC.NPC
enum class NPC : uint8_t
{
    NPC                                            = 0,
    NPC                                            = 1,
    NPC                                            = 2,
    NPC                                            = 3,
    NPC                                            = 4

};


// UserDefinedEnum  NPC.NPC
enum class NPC : uint8_t
{
    NPC                                            = 0,
    NPC                                            = 1,
    NPC                                            = 2,
    NPC                                            = 3,
    NPC                                            = 4,
    NPC                                            = 5,
    NPC                                            = 6,
    NPC                                            = 7,
    NPC                                            = 8

};


// UserDefinedEnum  NPC.NPC
enum class NPC : uint8_t
{
    NPC                                            = 0,
    NPC                                            = 1,
    NPC                                            = 2,
    NPC                                            = 3,
    NPC                                            = 4

};


// UserDefinedEnum  NPC.NPC
enum class NPC : uint8_t
{
    NPC                                            = 0,
    NPC                                            = 1,
    NPC                                            = 2,
    NPC                                            = 3,
    NPC                                            = 4

};


// UserDefinedEnum  NPC.NPC
enum class NPC : uint8_t
{
    NPC                                            = 0,
    NPC                                            = 1,
    NPC                                            = 2,
    NPC                                            = 3,
    NPC                                            = 4

};


// UserDefinedEnum  NPC.NPC
enum class NPC : uint8_t
{
    NPC                                            = 0,
    NPC                                            = 1,
    NPC                                            = 2,
    NPC                                            = 3,
    NPC                                            = 4,
    NPC                                            = 5,
    NPC                                            = 6,
    NPC                                            = 7,
    NPC                                            = 8,
    NPC                                            = 9,
    NPC                                            = 10,
    NPC                                            = 11,
    NPC                                            = 12

};


// UserDefinedEnum  NPC.NPC
enum class NPC : uint8_t
{
    NPC                                            = 0,
    NPC                                            = 1,
    NPC                                            = 2,
    NPC                                            = 3,
    NPC                                            = 4

};


// UserDefinedEnum  E.E
enum class E : uint8_t
{
    E                                              = 0,
    E                                              = 1,
    E                                              = 2,
    E                                              = 3

};


// UserDefinedEnum  NPC.NPC
enum class NPC : uint8_t
{
    NPC                                            = 0,
    NPC                                            = 1,
    NPC                                            = 2,
    NPC                                            = 3,
    NPC                                            = 4,
    NPC                                            = 5,
    NPC                                            = 6,
    NPC                                            = 7

};


// UserDefinedEnum  NPC.NPC
enum class NPC : uint8_t
{
    NPC                                            = 0,
    NPC                                            = 1,
    NPC                                            = 2,
    NPC                                            = 3,
    NPC                                            = 4,
    NPC                                            = 5

};


// UserDefinedEnum  NPC.NPC
enum class NPC : uint8_t
{
    NPC                                            = 0,
    NPC                                            = 1,
    NPC                                            = 2,
    NPC                                            = 3,
    NPC                                            = 4,
    NPC                                            = 5,
    NPC                                            = 6,
    NPC                                            = 7,
    NPC                                            = 8

};


// UserDefinedEnum  Enum.Enum
enum class Enum : uint8_t
{
    Enum                                           = 0,
    Enum                                           = 1,
    Enum                                           = 2,
    Enum                                           = 3,
    Enum                                           = 4,
    Enum                                           = 5,
    Enum                                           = 6,
    Enum                                           = 7,
    Enum                                           = 8,
    Enum                                           = 9,
    Enum                                           = 10,
    Enum                                           = 11,
    Enum                                           = 12,
    Enum                                           = 13,
    Enum                                           = 14,
    Enum                                           = 15,
    Enum                                           = 16

};


// UserDefinedEnum  NPC.Npc
enum class Npc : uint8_t
{
    NPC                                            = 0,
    NPC                                            = 1,
    NPC                                            = 2,
    NPC                                            = 3,
    NPC                                            = 4

};


// UserDefinedEnum  NPC.NPC
enum class NPC : uint8_t
{
    NPC                                            = 0,
    NPC                                            = 1,
    NPC                                            = 2,
    NPC                                            = 3

};


// UserDefinedEnum  EAIRequestType.EAIRequestType
enum class EAIRequestType : uint8_t
{
    NewEnumerator0                                 = 0,
    NewEnumerator1                                 = 1,
    NewEnumerator2                                 = 2,
    NewEnumerator3                                 = 3,
    NewEnumerator4                                 = 4,
    NewEnumerator5                                 = 5,
    NewEnumerator6                                 = 6,
    NewEnumerator7                                 = 7,
    NewEnumerator8                                 = 8,
    NewEnumerator9                                 = 9,
    NewEnumerator10                                = 10,
    NewEnumerator11                                = 11,
    NewEnumerator12                                = 12,
    NewEnumerator13                                = 13,
    NewEnumerator14                                = 14,
    NewEnumerator15                                = 15,
    NewEnumerator16                                = 16,
    NewEnumerator17                                = 17,
    NewEnumerator18                                = 18,
    NewEnumerator19                                = 19,
    NewEnumerator20                                = 20,
    NewEnumerator21                                = 21,
    NewEnumerator22                                = 22,
    NewEnumerator23                                = 23,
    EAIRequestType                                 = 24

};


// UserDefinedEnum  NPC.NPC
enum class NPC : uint8_t
{
    NPC                                            = 0,
    NPC                                            = 1,
    NPC                                            = 2,
    NPC                                            = 3,
    NPC                                            = 4

};


// UserDefinedEnum  NPC.NPC
enum class NPC : uint8_t
{
    NPC                                            = 0,
    NPC                                            = 1,
    NPC                                            = 2,
    NPC                                            = 3,
    NPC                                            = 4,
    NPC                                            = 5,
    NPC                                            = 6,
    NPC                                            = 7,
    NPC                                            = 8,
    NPC                                            = 9

};


// UserDefinedEnum  PerceptionTag.PerceptionTag
enum class PerceptionTag : uint8_t
{
    NewEnumerator4                                 = 0,
    NewEnumerator0                                 = 1,
    NewEnumerator1                                 = 2,
    NewEnumerator2                                 = 3,
    NewEnumerator5                                 = 4,
    NewEnumerator6                                 = 5,
    PerceptionTag                                  = 6

};


// UserDefinedEnum  NPC.NPC
enum class NPC : uint8_t
{
    NPC                                            = 0,
    NPC                                            = 1,
    NPC                                            = 2,
    NPC                                            = 3

};


// UserDefinedEnum  BBkeyType.BBkeyType
enum class BBkeyType : uint8_t
{
    NewEnumerator6                                 = 0,
    NewEnumerator4                                 = 1,
    NewEnumerator0                                 = 2,
    NewEnumerator1                                 = 3,
    NewEnumerator2                                 = 4,
    NewEnumerator3                                 = 5,
    NewEnumerator5                                 = 6,
    NewEnumerator7                                 = 7,
    NewEnumerator8                                 = 8,
    BBkeyType                                      = 9

};


// UserDefinedEnum  NPC.NPC
enum class NPC : uint8_t
{
    NPC                                            = 0,
    NPC                                            = 1,
    NPC                                            = 2,
    NPC                                            = 3,
    NPC                                            = 4,
    NPC                                            = 5

};


// UserDefinedEnum  NPC.NPC
enum class NPC : uint8_t
{
    NPC                                            = 0,
    NPC                                            = 1,
    NPC                                            = 2,
    NPC                                            = 3,
    NPC                                            = 4

};


// UserDefinedEnum  TabHeaderItemState.TabHeaderItemState
enum class TabHeaderItemState : uint8_t
{
    NewEnumerator0                                 = 0,
    NewEnumerator1                                 = 1,
    TabHeaderItemState                             = 2

};


// UserDefinedEnum  BPE.BPE
enum class BPE : uint8_t
{
    BPE                                            = 0,
    BPE                                            = 1,
    BPE                                            = 2,
    BPE                                            = 3,
    BPE                                            = 4,
    BPE                                            = 5

};


// UserDefinedEnum  Enum.Enum
enum class Enum : uint8_t
{
    Enum                                           = 0,
    Enum                                           = 1,
    Enum                                           = 2,
    Enum                                           = 3,
    Enum                                           = 4,
    Enum                                           = 5,
    Enum                                           = 6,
    Enum                                           = 7

};


// UserDefinedEnum  NPC.NPC
enum class NPC : uint8_t
{
    NPC                                            = 0,
    NPC                                            = 1,
    NPC                                            = 2,
    NPC                                            = 3,
    NPC                                            = 4

};


