#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>

class ReadableStream;


class SecurityPolicyViolationEventDisposition : public emlite::Val {
  explicit SecurityPolicyViolationEventDisposition(Handle h) noexcept;
public:
   explicit SecurityPolicyViolationEventDisposition(const emlite::Val &v) noexcept;
  static SecurityPolicyViolationEventDisposition take_ownership(Handle h) noexcept;
    SecurityPolicyViolationEventDisposition clone() const noexcept;
  static const SecurityPolicyViolationEventDisposition enforce;
  static const SecurityPolicyViolationEventDisposition report;
};

class EndingType : public emlite::Val {
  explicit EndingType(Handle h) noexcept;
public:
   explicit EndingType(const emlite::Val &v) noexcept;
  static EndingType take_ownership(Handle h) noexcept;
    EndingType clone() const noexcept;
  static const EndingType transparent;
  static const EndingType native;
};

class IDBRequestReadyState : public emlite::Val {
  explicit IDBRequestReadyState(Handle h) noexcept;
public:
   explicit IDBRequestReadyState(const emlite::Val &v) noexcept;
  static IDBRequestReadyState take_ownership(Handle h) noexcept;
    IDBRequestReadyState clone() const noexcept;
  static const IDBRequestReadyState pending;
  static const IDBRequestReadyState done;
};

class IDBTransactionDurability : public emlite::Val {
  explicit IDBTransactionDurability(Handle h) noexcept;
public:
   explicit IDBTransactionDurability(const emlite::Val &v) noexcept;
  static IDBTransactionDurability take_ownership(Handle h) noexcept;
    IDBTransactionDurability clone() const noexcept;
  static const IDBTransactionDurability default_;
  static const IDBTransactionDurability strict;
  static const IDBTransactionDurability relaxed;
};

class IDBCursorDirection : public emlite::Val {
  explicit IDBCursorDirection(Handle h) noexcept;
public:
   explicit IDBCursorDirection(const emlite::Val &v) noexcept;
  static IDBCursorDirection take_ownership(Handle h) noexcept;
    IDBCursorDirection clone() const noexcept;
  static const IDBCursorDirection next;
  static const IDBCursorDirection nextunique;
  static const IDBCursorDirection prev;
  static const IDBCursorDirection prevunique;
};

class IDBTransactionMode : public emlite::Val {
  explicit IDBTransactionMode(Handle h) noexcept;
public:
   explicit IDBTransactionMode(const emlite::Val &v) noexcept;
  static IDBTransactionMode take_ownership(Handle h) noexcept;
    IDBTransactionMode clone() const noexcept;
  static const IDBTransactionMode readonly;
  static const IDBTransactionMode readwrite;
  static const IDBTransactionMode versionchange;
};

class AccelerometerLocalCoordinateSystem : public emlite::Val {
  explicit AccelerometerLocalCoordinateSystem(Handle h) noexcept;
public:
   explicit AccelerometerLocalCoordinateSystem(const emlite::Val &v) noexcept;
  static AccelerometerLocalCoordinateSystem take_ownership(Handle h) noexcept;
    AccelerometerLocalCoordinateSystem clone() const noexcept;
  static const AccelerometerLocalCoordinateSystem device;
  static const AccelerometerLocalCoordinateSystem screen;
};

class AudioSessionType : public emlite::Val {
  explicit AudioSessionType(Handle h) noexcept;
public:
   explicit AudioSessionType(const emlite::Val &v) noexcept;
  static AudioSessionType take_ownership(Handle h) noexcept;
    AudioSessionType clone() const noexcept;
  static const AudioSessionType auto_;
  static const AudioSessionType playback;
  static const AudioSessionType transient;
  static const AudioSessionType transient_solo;
  static const AudioSessionType ambient;
  static const AudioSessionType play_and_record;
};

class AudioSessionState : public emlite::Val {
  explicit AudioSessionState(Handle h) noexcept;
public:
   explicit AudioSessionState(const emlite::Val &v) noexcept;
  static AudioSessionState take_ownership(Handle h) noexcept;
    AudioSessionState clone() const noexcept;
  static const AudioSessionState inactive;
  static const AudioSessionState active;
  static const AudioSessionState interrupted;
};

class AutoplayPolicy : public emlite::Val {
  explicit AutoplayPolicy(Handle h) noexcept;
public:
   explicit AutoplayPolicy(const emlite::Val &v) noexcept;
  static AutoplayPolicy take_ownership(Handle h) noexcept;
    AutoplayPolicy clone() const noexcept;
  static const AutoplayPolicy allowed;
  static const AutoplayPolicy allowed_muted;
  static const AutoplayPolicy disallowed;
};

class AutoplayPolicyMediaType : public emlite::Val {
  explicit AutoplayPolicyMediaType(Handle h) noexcept;
public:
   explicit AutoplayPolicyMediaType(const emlite::Val &v) noexcept;
  static AutoplayPolicyMediaType take_ownership(Handle h) noexcept;
    AutoplayPolicyMediaType clone() const noexcept;
  static const AutoplayPolicyMediaType mediaelement;
  static const AutoplayPolicyMediaType audiocontext;
};

class BackgroundFetchResult : public emlite::Val {
  explicit BackgroundFetchResult(Handle h) noexcept;
public:
   explicit BackgroundFetchResult(const emlite::Val &v) noexcept;
  static BackgroundFetchResult take_ownership(Handle h) noexcept;
    BackgroundFetchResult clone() const noexcept;
  static const BackgroundFetchResult none;
  static const BackgroundFetchResult success;
  static const BackgroundFetchResult failure;
};

class BackgroundFetchFailureReason : public emlite::Val {
  explicit BackgroundFetchFailureReason(Handle h) noexcept;
public:
   explicit BackgroundFetchFailureReason(const emlite::Val &v) noexcept;
  static BackgroundFetchFailureReason take_ownership(Handle h) noexcept;
    BackgroundFetchFailureReason clone() const noexcept;
  static const BackgroundFetchFailureReason none;
  static const BackgroundFetchFailureReason aborted;
  static const BackgroundFetchFailureReason bad_status;
  static const BackgroundFetchFailureReason fetch_error;
  static const BackgroundFetchFailureReason quota_exceeded;
  static const BackgroundFetchFailureReason download_total_exceeded;
};

class PresentationStyle : public emlite::Val {
  explicit PresentationStyle(Handle h) noexcept;
public:
   explicit PresentationStyle(const emlite::Val &v) noexcept;
  static PresentationStyle take_ownership(Handle h) noexcept;
    PresentationStyle clone() const noexcept;
  static const PresentationStyle unspecified;
  static const PresentationStyle inline_;
  static const PresentationStyle attachment;
};

class CompressionFormat : public emlite::Val {
  explicit CompressionFormat(Handle h) noexcept;
public:
   explicit CompressionFormat(const emlite::Val &v) noexcept;
  static CompressionFormat take_ownership(Handle h) noexcept;
    CompressionFormat clone() const noexcept;
  static const CompressionFormat deflate;
  static const CompressionFormat deflate_raw;
  static const CompressionFormat gzip;
};

class PressureSource : public emlite::Val {
  explicit PressureSource(Handle h) noexcept;
public:
   explicit PressureSource(const emlite::Val &v) noexcept;
  static PressureSource take_ownership(Handle h) noexcept;
    PressureSource clone() const noexcept;
  static const PressureSource cpu;
};

class PressureState : public emlite::Val {
  explicit PressureState(Handle h) noexcept;
public:
   explicit PressureState(const emlite::Val &v) noexcept;
  static PressureState take_ownership(Handle h) noexcept;
    PressureState clone() const noexcept;
  static const PressureState nominal;
  static const PressureState fair;
  static const PressureState serious;
  static const PressureState critical;
};

class ContactProperty : public emlite::Val {
  explicit ContactProperty(Handle h) noexcept;
public:
   explicit ContactProperty(const emlite::Val &v) noexcept;
  static ContactProperty take_ownership(Handle h) noexcept;
    ContactProperty clone() const noexcept;
  static const ContactProperty address;
  static const ContactProperty email;
  static const ContactProperty icon;
  static const ContactProperty name;
  static const ContactProperty tel;
};

class ContentCategory : public emlite::Val {
  explicit ContentCategory(Handle h) noexcept;
public:
   explicit ContentCategory(const emlite::Val &v) noexcept;
  static ContentCategory take_ownership(Handle h) noexcept;
    ContentCategory clone() const noexcept;
  static const ContentCategory none;
  static const ContentCategory homepage;
  static const ContentCategory article;
  static const ContentCategory video;
  static const ContentCategory audio;
};

class CookieSameSite : public emlite::Val {
  explicit CookieSameSite(Handle h) noexcept;
public:
   explicit CookieSameSite(const emlite::Val &v) noexcept;
  static CookieSameSite take_ownership(Handle h) noexcept;
    CookieSameSite clone() const noexcept;
  static const CookieSameSite strict;
  static const CookieSameSite lax;
  static const CookieSameSite none;
};

class CredentialMediationRequirement : public emlite::Val {
  explicit CredentialMediationRequirement(Handle h) noexcept;
public:
   explicit CredentialMediationRequirement(const emlite::Val &v) noexcept;
  static CredentialMediationRequirement take_ownership(Handle h) noexcept;
    CredentialMediationRequirement clone() const noexcept;
  static const CredentialMediationRequirement silent;
  static const CredentialMediationRequirement optional;
  static const CredentialMediationRequirement conditional;
  static const CredentialMediationRequirement required;
};

class ScriptingPolicyViolationType : public emlite::Val {
  explicit ScriptingPolicyViolationType(Handle h) noexcept;
public:
   explicit ScriptingPolicyViolationType(const emlite::Val &v) noexcept;
  static ScriptingPolicyViolationType take_ownership(Handle h) noexcept;
    ScriptingPolicyViolationType clone() const noexcept;
  static const ScriptingPolicyViolationType externalScript;
  static const ScriptingPolicyViolationType inlineScript;
  static const ScriptingPolicyViolationType inlineEventHandler;
  static const ScriptingPolicyViolationType eval;
};

class FontFaceLoadStatus : public emlite::Val {
  explicit FontFaceLoadStatus(Handle h) noexcept;
public:
   explicit FontFaceLoadStatus(const emlite::Val &v) noexcept;
  static FontFaceLoadStatus take_ownership(Handle h) noexcept;
    FontFaceLoadStatus clone() const noexcept;
  static const FontFaceLoadStatus unloaded;
  static const FontFaceLoadStatus loading;
  static const FontFaceLoadStatus loaded;
  static const FontFaceLoadStatus error;
};

class FontFaceSetLoadStatus : public emlite::Val {
  explicit FontFaceSetLoadStatus(Handle h) noexcept;
public:
   explicit FontFaceSetLoadStatus(const emlite::Val &v) noexcept;
  static FontFaceSetLoadStatus take_ownership(Handle h) noexcept;
    FontFaceSetLoadStatus clone() const noexcept;
  static const FontFaceSetLoadStatus loading;
  static const FontFaceSetLoadStatus loaded;
};

class HighlightType : public emlite::Val {
  explicit HighlightType(Handle h) noexcept;
public:
   explicit HighlightType(const emlite::Val &v) noexcept;
  static HighlightType take_ownership(Handle h) noexcept;
    HighlightType clone() const noexcept;
  static const HighlightType highlight;
  static const HighlightType spelling_error;
  static const HighlightType grammar_error;
};

class ChildDisplayType : public emlite::Val {
  explicit ChildDisplayType(Handle h) noexcept;
public:
   explicit ChildDisplayType(const emlite::Val &v) noexcept;
  static ChildDisplayType take_ownership(Handle h) noexcept;
    ChildDisplayType clone() const noexcept;
  static const ChildDisplayType block;
  static const ChildDisplayType normal;
};

class LayoutSizingMode : public emlite::Val {
  explicit LayoutSizingMode(Handle h) noexcept;
public:
   explicit LayoutSizingMode(const emlite::Val &v) noexcept;
  static LayoutSizingMode take_ownership(Handle h) noexcept;
    LayoutSizingMode clone() const noexcept;
  static const LayoutSizingMode block_like;
  static const LayoutSizingMode manual;
};

class BlockFragmentationType : public emlite::Val {
  explicit BlockFragmentationType(Handle h) noexcept;
public:
   explicit BlockFragmentationType(const emlite::Val &v) noexcept;
  static BlockFragmentationType take_ownership(Handle h) noexcept;
    BlockFragmentationType clone() const noexcept;
  static const BlockFragmentationType none;
  static const BlockFragmentationType page;
  static const BlockFragmentationType column;
  static const BlockFragmentationType region;
};

class BreakType : public emlite::Val {
  explicit BreakType(Handle h) noexcept;
public:
   explicit BreakType(const emlite::Val &v) noexcept;
  static BreakType take_ownership(Handle h) noexcept;
    BreakType clone() const noexcept;
  static const BreakType none;
  static const BreakType line;
  static const BreakType column;
  static const BreakType page;
  static const BreakType region;
};

class SpatialNavigationDirection : public emlite::Val {
  explicit SpatialNavigationDirection(Handle h) noexcept;
public:
   explicit SpatialNavigationDirection(const emlite::Val &v) noexcept;
  static SpatialNavigationDirection take_ownership(Handle h) noexcept;
    SpatialNavigationDirection clone() const noexcept;
  static const SpatialNavigationDirection up;
  static const SpatialNavigationDirection down;
  static const SpatialNavigationDirection left;
  static const SpatialNavigationDirection right;
};

class FocusableAreaSearchMode : public emlite::Val {
  explicit FocusableAreaSearchMode(Handle h) noexcept;
public:
   explicit FocusableAreaSearchMode(const emlite::Val &v) noexcept;
  static FocusableAreaSearchMode take_ownership(Handle h) noexcept;
    FocusableAreaSearchMode clone() const noexcept;
  static const FocusableAreaSearchMode visible;
  static const FocusableAreaSearchMode all;
};

class CSSNumericBaseType : public emlite::Val {
  explicit CSSNumericBaseType(Handle h) noexcept;
public:
   explicit CSSNumericBaseType(const emlite::Val &v) noexcept;
  static CSSNumericBaseType take_ownership(Handle h) noexcept;
    CSSNumericBaseType clone() const noexcept;
  static const CSSNumericBaseType length;
  static const CSSNumericBaseType angle;
  static const CSSNumericBaseType time;
  static const CSSNumericBaseType frequency;
  static const CSSNumericBaseType resolution;
  static const CSSNumericBaseType flex;
  static const CSSNumericBaseType percent;
};

class CSSMathOperator : public emlite::Val {
  explicit CSSMathOperator(Handle h) noexcept;
public:
   explicit CSSMathOperator(const emlite::Val &v) noexcept;
  static CSSMathOperator take_ownership(Handle h) noexcept;
    CSSMathOperator clone() const noexcept;
  static const CSSMathOperator sum;
  static const CSSMathOperator product;
  static const CSSMathOperator negate;
  static const CSSMathOperator invert;
  static const CSSMathOperator min;
  static const CSSMathOperator max;
  static const CSSMathOperator clamp;
};

class ScrollBehavior : public emlite::Val {
  explicit ScrollBehavior(Handle h) noexcept;
public:
   explicit ScrollBehavior(const emlite::Val &v) noexcept;
  static ScrollBehavior take_ownership(Handle h) noexcept;
    ScrollBehavior clone() const noexcept;
  static const ScrollBehavior auto_;
  static const ScrollBehavior instant;
  static const ScrollBehavior smooth;
};

class ScrollLogicalPosition : public emlite::Val {
  explicit ScrollLogicalPosition(Handle h) noexcept;
public:
   explicit ScrollLogicalPosition(const emlite::Val &v) noexcept;
  static ScrollLogicalPosition take_ownership(Handle h) noexcept;
    ScrollLogicalPosition clone() const noexcept;
  static const ScrollLogicalPosition start;
  static const ScrollLogicalPosition center;
  static const ScrollLogicalPosition end;
  static const ScrollLogicalPosition nearest;
};

class ScrollIntoViewContainer : public emlite::Val {
  explicit ScrollIntoViewContainer(Handle h) noexcept;
public:
   explicit ScrollIntoViewContainer(const emlite::Val &v) noexcept;
  static ScrollIntoViewContainer take_ownership(Handle h) noexcept;
    ScrollIntoViewContainer clone() const noexcept;
  static const ScrollIntoViewContainer all;
  static const ScrollIntoViewContainer nearest;
};

class CSSBoxType : public emlite::Val {
  explicit CSSBoxType(Handle h) noexcept;
public:
   explicit CSSBoxType(const emlite::Val &v) noexcept;
  static CSSBoxType take_ownership(Handle h) noexcept;
    CSSBoxType clone() const noexcept;
  static const CSSBoxType margin;
  static const CSSBoxType border;
  static const CSSBoxType padding;
  static const CSSBoxType content;
};

class DevicePostureType : public emlite::Val {
  explicit DevicePostureType(Handle h) noexcept;
public:
   explicit DevicePostureType(const emlite::Val &v) noexcept;
  static DevicePostureType take_ownership(Handle h) noexcept;
    DevicePostureType clone() const noexcept;
  static const DevicePostureType continuous;
  static const DevicePostureType folded;
};

class ItemType : public emlite::Val {
  explicit ItemType(Handle h) noexcept;
public:
   explicit ItemType(const emlite::Val &v) noexcept;
  static ItemType take_ownership(Handle h) noexcept;
    ItemType clone() const noexcept;
  static const ItemType product;
  static const ItemType subscription;
};

class ShadowRootMode : public emlite::Val {
  explicit ShadowRootMode(Handle h) noexcept;
public:
   explicit ShadowRootMode(const emlite::Val &v) noexcept;
  static ShadowRootMode take_ownership(Handle h) noexcept;
    ShadowRootMode clone() const noexcept;
  static const ShadowRootMode open;
  static const ShadowRootMode closed;
};

class SlotAssignmentMode : public emlite::Val {
  explicit SlotAssignmentMode(Handle h) noexcept;
public:
   explicit SlotAssignmentMode(const emlite::Val &v) noexcept;
  static SlotAssignmentMode take_ownership(Handle h) noexcept;
    SlotAssignmentMode clone() const noexcept;
  static const SlotAssignmentMode manual;
  static const SlotAssignmentMode named;
};

class UnderlineStyle : public emlite::Val {
  explicit UnderlineStyle(Handle h) noexcept;
public:
   explicit UnderlineStyle(const emlite::Val &v) noexcept;
  static UnderlineStyle take_ownership(Handle h) noexcept;
    UnderlineStyle clone() const noexcept;
  static const UnderlineStyle none;
  static const UnderlineStyle solid;
  static const UnderlineStyle dotted;
  static const UnderlineStyle dashed;
  static const UnderlineStyle wavy;
};

class UnderlineThickness : public emlite::Val {
  explicit UnderlineThickness(Handle h) noexcept;
public:
   explicit UnderlineThickness(const emlite::Val &v) noexcept;
  static UnderlineThickness take_ownership(Handle h) noexcept;
    UnderlineThickness clone() const noexcept;
  static const UnderlineThickness none;
  static const UnderlineThickness thin;
  static const UnderlineThickness thick;
};

class MediaKeysRequirement : public emlite::Val {
  explicit MediaKeysRequirement(Handle h) noexcept;
public:
   explicit MediaKeysRequirement(const emlite::Val &v) noexcept;
  static MediaKeysRequirement take_ownership(Handle h) noexcept;
    MediaKeysRequirement clone() const noexcept;
  static const MediaKeysRequirement required;
  static const MediaKeysRequirement optional;
  static const MediaKeysRequirement not_allowed;
};

class MediaKeySessionType : public emlite::Val {
  explicit MediaKeySessionType(Handle h) noexcept;
public:
   explicit MediaKeySessionType(const emlite::Val &v) noexcept;
  static MediaKeySessionType take_ownership(Handle h) noexcept;
    MediaKeySessionType clone() const noexcept;
  static const MediaKeySessionType temporary;
  static const MediaKeySessionType persistent_license;
};

class MediaKeySessionClosedReason : public emlite::Val {
  explicit MediaKeySessionClosedReason(Handle h) noexcept;
public:
   explicit MediaKeySessionClosedReason(const emlite::Val &v) noexcept;
  static MediaKeySessionClosedReason take_ownership(Handle h) noexcept;
    MediaKeySessionClosedReason clone() const noexcept;
  static const MediaKeySessionClosedReason internal_error;
  static const MediaKeySessionClosedReason closed_by_application;
  static const MediaKeySessionClosedReason release_acknowledged;
  static const MediaKeySessionClosedReason hardware_context_reset;
  static const MediaKeySessionClosedReason resource_evicted;
};

class MediaKeyStatus : public emlite::Val {
  explicit MediaKeyStatus(Handle h) noexcept;
public:
   explicit MediaKeyStatus(const emlite::Val &v) noexcept;
  static MediaKeyStatus take_ownership(Handle h) noexcept;
    MediaKeyStatus clone() const noexcept;
  static const MediaKeyStatus usable;
  static const MediaKeyStatus expired;
  static const MediaKeyStatus released;
  static const MediaKeyStatus output_restricted;
  static const MediaKeyStatus output_downscaled;
  static const MediaKeyStatus usable_in_future;
  static const MediaKeyStatus status_pending;
  static const MediaKeyStatus internal_error;
};

class MediaKeyMessageType : public emlite::Val {
  explicit MediaKeyMessageType(Handle h) noexcept;
public:
   explicit MediaKeyMessageType(const emlite::Val &v) noexcept;
  static MediaKeyMessageType take_ownership(Handle h) noexcept;
    MediaKeyMessageType clone() const noexcept;
  static const MediaKeyMessageType license_request;
  static const MediaKeyMessageType license_renewal;
  static const MediaKeyMessageType license_release;
  static const MediaKeyMessageType individualization_request;
};

class IdentityCredentialRequestOptionsContext : public emlite::Val {
  explicit IdentityCredentialRequestOptionsContext(Handle h) noexcept;
public:
   explicit IdentityCredentialRequestOptionsContext(const emlite::Val &v) noexcept;
  static IdentityCredentialRequestOptionsContext take_ownership(Handle h) noexcept;
    IdentityCredentialRequestOptionsContext clone() const noexcept;
  static const IdentityCredentialRequestOptionsContext signin;
  static const IdentityCredentialRequestOptionsContext signup;
  static const IdentityCredentialRequestOptionsContext use;
  static const IdentityCredentialRequestOptionsContext continue_;
};

class IdentityCredentialRequestOptionsMode : public emlite::Val {
  explicit IdentityCredentialRequestOptionsMode(Handle h) noexcept;
public:
   explicit IdentityCredentialRequestOptionsMode(const emlite::Val &v) noexcept;
  static IdentityCredentialRequestOptionsMode take_ownership(Handle h) noexcept;
    IdentityCredentialRequestOptionsMode clone() const noexcept;
  static const IdentityCredentialRequestOptionsMode active;
  static const IdentityCredentialRequestOptionsMode passive;
};

class OpaqueProperty : public emlite::Val {
  explicit OpaqueProperty(Handle h) noexcept;
public:
   explicit OpaqueProperty(const emlite::Val &v) noexcept;
  static OpaqueProperty take_ownership(Handle h) noexcept;
    OpaqueProperty clone() const noexcept;
  static const OpaqueProperty opaque;
};

class FenceReportingDestination : public emlite::Val {
  explicit FenceReportingDestination(Handle h) noexcept;
public:
   explicit FenceReportingDestination(const emlite::Val &v) noexcept;
  static FenceReportingDestination take_ownership(Handle h) noexcept;
    FenceReportingDestination clone() const noexcept;
  static const FenceReportingDestination buyer;
  static const FenceReportingDestination seller;
  static const FenceReportingDestination component_seller;
  static const FenceReportingDestination direct_seller;
  static const FenceReportingDestination shared_storage_select_url;
};

class RequestDestination : public emlite::Val {
  explicit RequestDestination(Handle h) noexcept;
public:
   explicit RequestDestination(const emlite::Val &v) noexcept;
  static RequestDestination take_ownership(Handle h) noexcept;
    RequestDestination clone() const noexcept;
  static const RequestDestination none;
  static const RequestDestination audio;
  static const RequestDestination audioworklet;
  static const RequestDestination document;
  static const RequestDestination embed;
  static const RequestDestination font;
  static const RequestDestination frame;
  static const RequestDestination iframe;
  static const RequestDestination image;
  static const RequestDestination json;
  static const RequestDestination manifest;
  static const RequestDestination object;
  static const RequestDestination paintworklet;
  static const RequestDestination report;
  static const RequestDestination script;
  static const RequestDestination sharedworker;
  static const RequestDestination style;
  static const RequestDestination track;
  static const RequestDestination video;
  static const RequestDestination worker;
  static const RequestDestination xslt;
};

class RequestMode : public emlite::Val {
  explicit RequestMode(Handle h) noexcept;
public:
   explicit RequestMode(const emlite::Val &v) noexcept;
  static RequestMode take_ownership(Handle h) noexcept;
    RequestMode clone() const noexcept;
  static const RequestMode navigate;
  static const RequestMode same_origin;
  static const RequestMode no_cors;
  static const RequestMode cors;
};

class RequestCredentials : public emlite::Val {
  explicit RequestCredentials(Handle h) noexcept;
public:
   explicit RequestCredentials(const emlite::Val &v) noexcept;
  static RequestCredentials take_ownership(Handle h) noexcept;
    RequestCredentials clone() const noexcept;
  static const RequestCredentials omit;
  static const RequestCredentials same_origin;
  static const RequestCredentials include;
};

class RequestCache : public emlite::Val {
  explicit RequestCache(Handle h) noexcept;
public:
   explicit RequestCache(const emlite::Val &v) noexcept;
  static RequestCache take_ownership(Handle h) noexcept;
    RequestCache clone() const noexcept;
  static const RequestCache default_;
  static const RequestCache no_store;
  static const RequestCache reload;
  static const RequestCache no_cache;
  static const RequestCache force_cache;
  static const RequestCache only_if_cached;
};

class RequestRedirect : public emlite::Val {
  explicit RequestRedirect(Handle h) noexcept;
public:
   explicit RequestRedirect(const emlite::Val &v) noexcept;
  static RequestRedirect take_ownership(Handle h) noexcept;
    RequestRedirect clone() const noexcept;
  static const RequestRedirect follow;
  static const RequestRedirect error;
  static const RequestRedirect manual;
};

class RequestDuplex : public emlite::Val {
  explicit RequestDuplex(Handle h) noexcept;
public:
   explicit RequestDuplex(const emlite::Val &v) noexcept;
  static RequestDuplex take_ownership(Handle h) noexcept;
    RequestDuplex clone() const noexcept;
  static const RequestDuplex half;
};

class RequestPriority : public emlite::Val {
  explicit RequestPriority(Handle h) noexcept;
public:
   explicit RequestPriority(const emlite::Val &v) noexcept;
  static RequestPriority take_ownership(Handle h) noexcept;
    RequestPriority clone() const noexcept;
  static const RequestPriority high;
  static const RequestPriority low;
  static const RequestPriority auto_;
};

class ResponseType : public emlite::Val {
  explicit ResponseType(Handle h) noexcept;
public:
   explicit ResponseType(const emlite::Val &v) noexcept;
  static ResponseType take_ownership(Handle h) noexcept;
    ResponseType clone() const noexcept;
  static const ResponseType basic;
  static const ResponseType cors;
  static const ResponseType default_;
  static const ResponseType error;
  static const ResponseType opaque;
  static const ResponseType opaqueredirect;
};

class FileSystemPermissionMode : public emlite::Val {
  explicit FileSystemPermissionMode(Handle h) noexcept;
public:
   explicit FileSystemPermissionMode(const emlite::Val &v) noexcept;
  static FileSystemPermissionMode take_ownership(Handle h) noexcept;
    FileSystemPermissionMode clone() const noexcept;
  static const FileSystemPermissionMode read;
  static const FileSystemPermissionMode readwrite;
};

class WellKnownDirectory : public emlite::Val {
  explicit WellKnownDirectory(Handle h) noexcept;
public:
   explicit WellKnownDirectory(const emlite::Val &v) noexcept;
  static WellKnownDirectory take_ownership(Handle h) noexcept;
    WellKnownDirectory clone() const noexcept;
  static const WellKnownDirectory desktop;
  static const WellKnownDirectory documents;
  static const WellKnownDirectory downloads;
  static const WellKnownDirectory music;
  static const WellKnownDirectory pictures;
  static const WellKnownDirectory videos;
};

class FileSystemHandleKind : public emlite::Val {
  explicit FileSystemHandleKind(Handle h) noexcept;
public:
   explicit FileSystemHandleKind(const emlite::Val &v) noexcept;
  static FileSystemHandleKind take_ownership(Handle h) noexcept;
    FileSystemHandleKind clone() const noexcept;
  static const FileSystemHandleKind file;
  static const FileSystemHandleKind directory;
};

class WriteCommandType : public emlite::Val {
  explicit WriteCommandType(Handle h) noexcept;
public:
   explicit WriteCommandType(const emlite::Val &v) noexcept;
  static WriteCommandType take_ownership(Handle h) noexcept;
    WriteCommandType clone() const noexcept;
  static const WriteCommandType write;
  static const WriteCommandType seek;
  static const WriteCommandType truncate;
};

class FullscreenNavigationUI : public emlite::Val {
  explicit FullscreenNavigationUI(Handle h) noexcept;
public:
   explicit FullscreenNavigationUI(const emlite::Val &v) noexcept;
  static FullscreenNavigationUI take_ownership(Handle h) noexcept;
    FullscreenNavigationUI clone() const noexcept;
  static const FullscreenNavigationUI auto_;
  static const FullscreenNavigationUI show;
  static const FullscreenNavigationUI hide;
};

class GamepadHand : public emlite::Val {
  explicit GamepadHand(Handle h) noexcept;
public:
   explicit GamepadHand(const emlite::Val &v) noexcept;
  static GamepadHand take_ownership(Handle h) noexcept;
    GamepadHand clone() const noexcept;
  static const GamepadHand none;
  static const GamepadHand left;
  static const GamepadHand right;
};

class GamepadMappingType : public emlite::Val {
  explicit GamepadMappingType(Handle h) noexcept;
public:
   explicit GamepadMappingType(const emlite::Val &v) noexcept;
  static GamepadMappingType take_ownership(Handle h) noexcept;
    GamepadMappingType clone() const noexcept;
  static const GamepadMappingType none;
  static const GamepadMappingType standard;
  static const GamepadMappingType xr_standard;
};

class GamepadHapticsResult : public emlite::Val {
  explicit GamepadHapticsResult(Handle h) noexcept;
public:
   explicit GamepadHapticsResult(const emlite::Val &v) noexcept;
  static GamepadHapticsResult take_ownership(Handle h) noexcept;
    GamepadHapticsResult clone() const noexcept;
  static const GamepadHapticsResult complete;
  static const GamepadHapticsResult preempted;
};

class GamepadHapticEffectType : public emlite::Val {
  explicit GamepadHapticEffectType(Handle h) noexcept;
public:
   explicit GamepadHapticEffectType(const emlite::Val &v) noexcept;
  static GamepadHapticEffectType take_ownership(Handle h) noexcept;
    GamepadHapticEffectType clone() const noexcept;
  static const GamepadHapticEffectType dual_rumble;
  static const GamepadHapticEffectType trigger_rumble;
};

class GyroscopeLocalCoordinateSystem : public emlite::Val {
  explicit GyroscopeLocalCoordinateSystem(Handle h) noexcept;
public:
   explicit GyroscopeLocalCoordinateSystem(const emlite::Val &v) noexcept;
  static GyroscopeLocalCoordinateSystem take_ownership(Handle h) noexcept;
    GyroscopeLocalCoordinateSystem clone() const noexcept;
  static const GyroscopeLocalCoordinateSystem device;
  static const GyroscopeLocalCoordinateSystem screen;
};

class HandwritingRecognitionType : public emlite::Val {
  explicit HandwritingRecognitionType(Handle h) noexcept;
public:
   explicit HandwritingRecognitionType(const emlite::Val &v) noexcept;
  static HandwritingRecognitionType take_ownership(Handle h) noexcept;
    HandwritingRecognitionType clone() const noexcept;
  static const HandwritingRecognitionType text;
  static const HandwritingRecognitionType per_character;
};

class HandwritingInputType : public emlite::Val {
  explicit HandwritingInputType(Handle h) noexcept;
public:
   explicit HandwritingInputType(const emlite::Val &v) noexcept;
  static HandwritingInputType take_ownership(Handle h) noexcept;
    HandwritingInputType clone() const noexcept;
  static const HandwritingInputType mouse;
  static const HandwritingInputType stylus;
  static const HandwritingInputType touch;
};

class DocumentReadyState : public emlite::Val {
  explicit DocumentReadyState(Handle h) noexcept;
public:
   explicit DocumentReadyState(const emlite::Val &v) noexcept;
  static DocumentReadyState take_ownership(Handle h) noexcept;
    DocumentReadyState clone() const noexcept;
  static const DocumentReadyState loading;
  static const DocumentReadyState interactive;
  static const DocumentReadyState complete;
};

class DocumentVisibilityState : public emlite::Val {
  explicit DocumentVisibilityState(Handle h) noexcept;
public:
   explicit DocumentVisibilityState(const emlite::Val &v) noexcept;
  static DocumentVisibilityState take_ownership(Handle h) noexcept;
    DocumentVisibilityState clone() const noexcept;
  static const DocumentVisibilityState visible;
  static const DocumentVisibilityState hidden;
};

class CanPlayTypeResult : public emlite::Val {
  explicit CanPlayTypeResult(Handle h) noexcept;
public:
   explicit CanPlayTypeResult(const emlite::Val &v) noexcept;
  static CanPlayTypeResult take_ownership(Handle h) noexcept;
    CanPlayTypeResult clone() const noexcept;
  static const CanPlayTypeResult none;
  static const CanPlayTypeResult maybe;
  static const CanPlayTypeResult probably;
};

class TextTrackMode : public emlite::Val {
  explicit TextTrackMode(Handle h) noexcept;
public:
   explicit TextTrackMode(const emlite::Val &v) noexcept;
  static TextTrackMode take_ownership(Handle h) noexcept;
    TextTrackMode clone() const noexcept;
  static const TextTrackMode disabled;
  static const TextTrackMode hidden;
  static const TextTrackMode showing;
};

class TextTrackKind : public emlite::Val {
  explicit TextTrackKind(Handle h) noexcept;
public:
   explicit TextTrackKind(const emlite::Val &v) noexcept;
  static TextTrackKind take_ownership(Handle h) noexcept;
    TextTrackKind clone() const noexcept;
  static const TextTrackKind subtitles;
  static const TextTrackKind captions;
  static const TextTrackKind descriptions;
  static const TextTrackKind chapters;
  static const TextTrackKind metadata;
};

class SelectionMode : public emlite::Val {
  explicit SelectionMode(Handle h) noexcept;
public:
   explicit SelectionMode(const emlite::Val &v) noexcept;
  static SelectionMode take_ownership(Handle h) noexcept;
    SelectionMode clone() const noexcept;
  static const SelectionMode select;
  static const SelectionMode start;
  static const SelectionMode end;
  static const SelectionMode preserve;
};

class PredefinedColorSpace : public emlite::Val {
  explicit PredefinedColorSpace(Handle h) noexcept;
public:
   explicit PredefinedColorSpace(const emlite::Val &v) noexcept;
  static PredefinedColorSpace take_ownership(Handle h) noexcept;
    PredefinedColorSpace clone() const noexcept;
  static const PredefinedColorSpace srgb;
  static const PredefinedColorSpace display_p3;
};

class CanvasColorType : public emlite::Val {
  explicit CanvasColorType(Handle h) noexcept;
public:
   explicit CanvasColorType(const emlite::Val &v) noexcept;
  static CanvasColorType take_ownership(Handle h) noexcept;
    CanvasColorType clone() const noexcept;
  static const CanvasColorType unorm8;
  static const CanvasColorType float16;
};

class CanvasFillRule : public emlite::Val {
  explicit CanvasFillRule(Handle h) noexcept;
public:
   explicit CanvasFillRule(const emlite::Val &v) noexcept;
  static CanvasFillRule take_ownership(Handle h) noexcept;
    CanvasFillRule clone() const noexcept;
  static const CanvasFillRule nonzero;
  static const CanvasFillRule evenodd;
};

class ImageSmoothingQuality : public emlite::Val {
  explicit ImageSmoothingQuality(Handle h) noexcept;
public:
   explicit ImageSmoothingQuality(const emlite::Val &v) noexcept;
  static ImageSmoothingQuality take_ownership(Handle h) noexcept;
    ImageSmoothingQuality clone() const noexcept;
  static const ImageSmoothingQuality low;
  static const ImageSmoothingQuality medium;
  static const ImageSmoothingQuality high;
};

class CanvasLineCap : public emlite::Val {
  explicit CanvasLineCap(Handle h) noexcept;
public:
   explicit CanvasLineCap(const emlite::Val &v) noexcept;
  static CanvasLineCap take_ownership(Handle h) noexcept;
    CanvasLineCap clone() const noexcept;
  static const CanvasLineCap butt;
  static const CanvasLineCap round;
  static const CanvasLineCap square;
};

class CanvasLineJoin : public emlite::Val {
  explicit CanvasLineJoin(Handle h) noexcept;
public:
   explicit CanvasLineJoin(const emlite::Val &v) noexcept;
  static CanvasLineJoin take_ownership(Handle h) noexcept;
    CanvasLineJoin clone() const noexcept;
  static const CanvasLineJoin round;
  static const CanvasLineJoin bevel;
  static const CanvasLineJoin miter;
};

class CanvasTextAlign : public emlite::Val {
  explicit CanvasTextAlign(Handle h) noexcept;
public:
   explicit CanvasTextAlign(const emlite::Val &v) noexcept;
  static CanvasTextAlign take_ownership(Handle h) noexcept;
    CanvasTextAlign clone() const noexcept;
  static const CanvasTextAlign start;
  static const CanvasTextAlign end;
  static const CanvasTextAlign left;
  static const CanvasTextAlign right;
  static const CanvasTextAlign center;
};

class CanvasTextBaseline : public emlite::Val {
  explicit CanvasTextBaseline(Handle h) noexcept;
public:
   explicit CanvasTextBaseline(const emlite::Val &v) noexcept;
  static CanvasTextBaseline take_ownership(Handle h) noexcept;
    CanvasTextBaseline clone() const noexcept;
  static const CanvasTextBaseline top;
  static const CanvasTextBaseline hanging;
  static const CanvasTextBaseline middle;
  static const CanvasTextBaseline alphabetic;
  static const CanvasTextBaseline ideographic;
  static const CanvasTextBaseline bottom;
};

class CanvasDirection : public emlite::Val {
  explicit CanvasDirection(Handle h) noexcept;
public:
   explicit CanvasDirection(const emlite::Val &v) noexcept;
  static CanvasDirection take_ownership(Handle h) noexcept;
    CanvasDirection clone() const noexcept;
  static const CanvasDirection ltr;
  static const CanvasDirection rtl;
  static const CanvasDirection inherit;
};

class CanvasFontKerning : public emlite::Val {
  explicit CanvasFontKerning(Handle h) noexcept;
public:
   explicit CanvasFontKerning(const emlite::Val &v) noexcept;
  static CanvasFontKerning take_ownership(Handle h) noexcept;
    CanvasFontKerning clone() const noexcept;
  static const CanvasFontKerning auto_;
  static const CanvasFontKerning normal;
  static const CanvasFontKerning none;
};

class CanvasFontStretch : public emlite::Val {
  explicit CanvasFontStretch(Handle h) noexcept;
public:
   explicit CanvasFontStretch(const emlite::Val &v) noexcept;
  static CanvasFontStretch take_ownership(Handle h) noexcept;
    CanvasFontStretch clone() const noexcept;
  static const CanvasFontStretch ultra_condensed;
  static const CanvasFontStretch extra_condensed;
  static const CanvasFontStretch condensed;
  static const CanvasFontStretch semi_condensed;
  static const CanvasFontStretch normal;
  static const CanvasFontStretch semi_expanded;
  static const CanvasFontStretch expanded;
  static const CanvasFontStretch extra_expanded;
  static const CanvasFontStretch ultra_expanded;
};

class CanvasFontVariantCaps : public emlite::Val {
  explicit CanvasFontVariantCaps(Handle h) noexcept;
public:
   explicit CanvasFontVariantCaps(const emlite::Val &v) noexcept;
  static CanvasFontVariantCaps take_ownership(Handle h) noexcept;
    CanvasFontVariantCaps clone() const noexcept;
  static const CanvasFontVariantCaps normal;
  static const CanvasFontVariantCaps small_caps;
  static const CanvasFontVariantCaps all_small_caps;
  static const CanvasFontVariantCaps petite_caps;
  static const CanvasFontVariantCaps all_petite_caps;
  static const CanvasFontVariantCaps unicase;
  static const CanvasFontVariantCaps titling_caps;
};

class CanvasTextRendering : public emlite::Val {
  explicit CanvasTextRendering(Handle h) noexcept;
public:
   explicit CanvasTextRendering(const emlite::Val &v) noexcept;
  static CanvasTextRendering take_ownership(Handle h) noexcept;
    CanvasTextRendering clone() const noexcept;
  static const CanvasTextRendering auto_;
  static const CanvasTextRendering optimizeSpeed;
  static const CanvasTextRendering optimizeLegibility;
  static const CanvasTextRendering geometricPrecision;
};

class OffscreenRenderingContextId : public emlite::Val {
  explicit OffscreenRenderingContextId(Handle h) noexcept;
public:
   explicit OffscreenRenderingContextId(const emlite::Val &v) noexcept;
  static OffscreenRenderingContextId take_ownership(Handle h) noexcept;
    OffscreenRenderingContextId clone() const noexcept;
  static const OffscreenRenderingContextId _2d;
  static const OffscreenRenderingContextId bitmaprenderer;
  static const OffscreenRenderingContextId webgl;
  static const OffscreenRenderingContextId webgl2;
  static const OffscreenRenderingContextId webgpu;
};

class ScrollRestoration : public emlite::Val {
  explicit ScrollRestoration(Handle h) noexcept;
public:
   explicit ScrollRestoration(const emlite::Val &v) noexcept;
  static ScrollRestoration take_ownership(Handle h) noexcept;
    ScrollRestoration clone() const noexcept;
  static const ScrollRestoration auto_;
  static const ScrollRestoration manual;
};

class NavigationHistoryBehavior : public emlite::Val {
  explicit NavigationHistoryBehavior(Handle h) noexcept;
public:
   explicit NavigationHistoryBehavior(const emlite::Val &v) noexcept;
  static NavigationHistoryBehavior take_ownership(Handle h) noexcept;
    NavigationHistoryBehavior clone() const noexcept;
  static const NavigationHistoryBehavior auto_;
  static const NavigationHistoryBehavior push;
  static const NavigationHistoryBehavior replace;
};

class NavigationType : public emlite::Val {
  explicit NavigationType(Handle h) noexcept;
public:
   explicit NavigationType(const emlite::Val &v) noexcept;
  static NavigationType take_ownership(Handle h) noexcept;
    NavigationType clone() const noexcept;
  static const NavigationType push;
  static const NavigationType replace;
  static const NavigationType reload;
  static const NavigationType traverse;
};

class NavigationFocusReset : public emlite::Val {
  explicit NavigationFocusReset(Handle h) noexcept;
public:
   explicit NavigationFocusReset(const emlite::Val &v) noexcept;
  static NavigationFocusReset take_ownership(Handle h) noexcept;
    NavigationFocusReset clone() const noexcept;
  static const NavigationFocusReset after_transition;
  static const NavigationFocusReset manual;
};

class NavigationScrollBehavior : public emlite::Val {
  explicit NavigationScrollBehavior(Handle h) noexcept;
public:
   explicit NavigationScrollBehavior(const emlite::Val &v) noexcept;
  static NavigationScrollBehavior take_ownership(Handle h) noexcept;
    NavigationScrollBehavior clone() const noexcept;
  static const NavigationScrollBehavior after_transition;
  static const NavigationScrollBehavior manual;
};

class DOMParserSupportedType : public emlite::Val {
  explicit DOMParserSupportedType(Handle h) noexcept;
public:
   explicit DOMParserSupportedType(const emlite::Val &v) noexcept;
  static DOMParserSupportedType take_ownership(Handle h) noexcept;
    DOMParserSupportedType clone() const noexcept;
  static const DOMParserSupportedType text_html;
  static const DOMParserSupportedType text_xml;
  static const DOMParserSupportedType application_xml;
  static const DOMParserSupportedType application_xhtml_xml;
  static const DOMParserSupportedType image_svg_xml;
};

class ImageDataPixelFormat : public emlite::Val {
  explicit ImageDataPixelFormat(Handle h) noexcept;
public:
   explicit ImageDataPixelFormat(const emlite::Val &v) noexcept;
  static ImageDataPixelFormat take_ownership(Handle h) noexcept;
    ImageDataPixelFormat clone() const noexcept;
  static const ImageDataPixelFormat rgba_unorm8;
  static const ImageDataPixelFormat rgba_float16;
};

class ImageOrientation : public emlite::Val {
  explicit ImageOrientation(Handle h) noexcept;
public:
   explicit ImageOrientation(const emlite::Val &v) noexcept;
  static ImageOrientation take_ownership(Handle h) noexcept;
    ImageOrientation clone() const noexcept;
  static const ImageOrientation from_image;
  static const ImageOrientation flipY;
};

class PremultiplyAlpha : public emlite::Val {
  explicit PremultiplyAlpha(Handle h) noexcept;
public:
   explicit PremultiplyAlpha(const emlite::Val &v) noexcept;
  static PremultiplyAlpha take_ownership(Handle h) noexcept;
    PremultiplyAlpha clone() const noexcept;
  static const PremultiplyAlpha none;
  static const PremultiplyAlpha premultiply;
  static const PremultiplyAlpha default_;
};

class ColorSpaceConversion : public emlite::Val {
  explicit ColorSpaceConversion(Handle h) noexcept;
public:
   explicit ColorSpaceConversion(const emlite::Val &v) noexcept;
  static ColorSpaceConversion take_ownership(Handle h) noexcept;
    ColorSpaceConversion clone() const noexcept;
  static const ColorSpaceConversion none;
  static const ColorSpaceConversion default_;
};

class ResizeQuality : public emlite::Val {
  explicit ResizeQuality(Handle h) noexcept;
public:
   explicit ResizeQuality(const emlite::Val &v) noexcept;
  static ResizeQuality take_ownership(Handle h) noexcept;
    ResizeQuality clone() const noexcept;
  static const ResizeQuality pixelated;
  static const ResizeQuality low;
  static const ResizeQuality medium;
  static const ResizeQuality high;
};

class WorkerType : public emlite::Val {
  explicit WorkerType(Handle h) noexcept;
public:
   explicit WorkerType(const emlite::Val &v) noexcept;
  static WorkerType take_ownership(Handle h) noexcept;
    WorkerType clone() const noexcept;
  static const WorkerType classic;
  static const WorkerType module_;
};

class UserIdleState : public emlite::Val {
  explicit UserIdleState(Handle h) noexcept;
public:
   explicit UserIdleState(const emlite::Val &v) noexcept;
  static UserIdleState take_ownership(Handle h) noexcept;
    UserIdleState clone() const noexcept;
  static const UserIdleState active;
  static const UserIdleState idle;
};

class ScreenIdleState : public emlite::Val {
  explicit ScreenIdleState(Handle h) noexcept;
public:
   explicit ScreenIdleState(const emlite::Val &v) noexcept;
  static ScreenIdleState take_ownership(Handle h) noexcept;
    ScreenIdleState clone() const noexcept;
  static const ScreenIdleState locked;
  static const ScreenIdleState unlocked;
};

class RedEyeReduction : public emlite::Val {
  explicit RedEyeReduction(Handle h) noexcept;
public:
   explicit RedEyeReduction(const emlite::Val &v) noexcept;
  static RedEyeReduction take_ownership(Handle h) noexcept;
    RedEyeReduction clone() const noexcept;
  static const RedEyeReduction never;
  static const RedEyeReduction always;
  static const RedEyeReduction controllable;
};

class FillLightMode : public emlite::Val {
  explicit FillLightMode(Handle h) noexcept;
public:
   explicit FillLightMode(const emlite::Val &v) noexcept;
  static FillLightMode take_ownership(Handle h) noexcept;
    FillLightMode clone() const noexcept;
  static const FillLightMode auto_;
  static const FillLightMode off;
  static const FillLightMode flash;
};

class MeteringMode : public emlite::Val {
  explicit MeteringMode(Handle h) noexcept;
public:
   explicit MeteringMode(const emlite::Val &v) noexcept;
  static MeteringMode take_ownership(Handle h) noexcept;
    MeteringMode clone() const noexcept;
  static const MeteringMode none;
  static const MeteringMode manual;
  static const MeteringMode single_shot;
  static const MeteringMode continuous;
};

class LoginStatus : public emlite::Val {
  explicit LoginStatus(Handle h) noexcept;
public:
   explicit LoginStatus(const emlite::Val &v) noexcept;
  static LoginStatus take_ownership(Handle h) noexcept;
    LoginStatus clone() const noexcept;
  static const LoginStatus logged_in;
  static const LoginStatus logged_out;
};

class ScriptInvokerType : public emlite::Val {
  explicit ScriptInvokerType(Handle h) noexcept;
public:
   explicit ScriptInvokerType(const emlite::Val &v) noexcept;
  static ScriptInvokerType take_ownership(Handle h) noexcept;
    ScriptInvokerType clone() const noexcept;
  static const ScriptInvokerType classic_script;
  static const ScriptInvokerType module_script;
  static const ScriptInvokerType event_listener;
  static const ScriptInvokerType user_callback;
  static const ScriptInvokerType resolve_promise;
  static const ScriptInvokerType reject_promise;
};

class ScriptWindowAttribution : public emlite::Val {
  explicit ScriptWindowAttribution(Handle h) noexcept;
public:
   explicit ScriptWindowAttribution(const emlite::Val &v) noexcept;
  static ScriptWindowAttribution take_ownership(Handle h) noexcept;
    ScriptWindowAttribution clone() const noexcept;
  static const ScriptWindowAttribution self;
  static const ScriptWindowAttribution descendant;
  static const ScriptWindowAttribution ancestor;
  static const ScriptWindowAttribution same_page;
  static const ScriptWindowAttribution other;
};

class MagnetometerLocalCoordinateSystem : public emlite::Val {
  explicit MagnetometerLocalCoordinateSystem(Handle h) noexcept;
public:
   explicit MagnetometerLocalCoordinateSystem(const emlite::Val &v) noexcept;
  static MagnetometerLocalCoordinateSystem take_ownership(Handle h) noexcept;
    MagnetometerLocalCoordinateSystem clone() const noexcept;
  static const MagnetometerLocalCoordinateSystem device;
  static const MagnetometerLocalCoordinateSystem screen;
};

class AppBannerPromptOutcome : public emlite::Val {
  explicit AppBannerPromptOutcome(Handle h) noexcept;
public:
   explicit AppBannerPromptOutcome(const emlite::Val &v) noexcept;
  static AppBannerPromptOutcome take_ownership(Handle h) noexcept;
    AppBannerPromptOutcome clone() const noexcept;
  static const AppBannerPromptOutcome accepted;
  static const AppBannerPromptOutcome dismissed;
};

class MediaDecodingType : public emlite::Val {
  explicit MediaDecodingType(Handle h) noexcept;
public:
   explicit MediaDecodingType(const emlite::Val &v) noexcept;
  static MediaDecodingType take_ownership(Handle h) noexcept;
    MediaDecodingType clone() const noexcept;
  static const MediaDecodingType file;
  static const MediaDecodingType media_source;
  static const MediaDecodingType webrtc;
};

class MediaEncodingType : public emlite::Val {
  explicit MediaEncodingType(Handle h) noexcept;
public:
   explicit MediaEncodingType(const emlite::Val &v) noexcept;
  static MediaEncodingType take_ownership(Handle h) noexcept;
    MediaEncodingType clone() const noexcept;
  static const MediaEncodingType record;
  static const MediaEncodingType webrtc;
};

class HdrMetadataType : public emlite::Val {
  explicit HdrMetadataType(Handle h) noexcept;
public:
   explicit HdrMetadataType(const emlite::Val &v) noexcept;
  static HdrMetadataType take_ownership(Handle h) noexcept;
    HdrMetadataType clone() const noexcept;
  static const HdrMetadataType smpteSt2086;
  static const HdrMetadataType smpteSt2094_10;
  static const HdrMetadataType smpteSt2094_40;
};

class ColorGamut : public emlite::Val {
  explicit ColorGamut(Handle h) noexcept;
public:
   explicit ColorGamut(const emlite::Val &v) noexcept;
  static ColorGamut take_ownership(Handle h) noexcept;
    ColorGamut clone() const noexcept;
  static const ColorGamut srgb;
  static const ColorGamut p3;
  static const ColorGamut rec2020;
};

class TransferFunction : public emlite::Val {
  explicit TransferFunction(Handle h) noexcept;
public:
   explicit TransferFunction(const emlite::Val &v) noexcept;
  static TransferFunction take_ownership(Handle h) noexcept;
    TransferFunction clone() const noexcept;
  static const TransferFunction srgb;
  static const TransferFunction pq;
  static const TransferFunction hlg;
};

class ReadyState : public emlite::Val {
  explicit ReadyState(Handle h) noexcept;
public:
   explicit ReadyState(const emlite::Val &v) noexcept;
  static ReadyState take_ownership(Handle h) noexcept;
    ReadyState clone() const noexcept;
  static const ReadyState closed;
  static const ReadyState open;
  static const ReadyState ended;
};

class EndOfStreamError : public emlite::Val {
  explicit EndOfStreamError(Handle h) noexcept;
public:
   explicit EndOfStreamError(const emlite::Val &v) noexcept;
  static EndOfStreamError take_ownership(Handle h) noexcept;
    EndOfStreamError clone() const noexcept;
  static const EndOfStreamError network;
  static const EndOfStreamError decode;
};

class AppendMode : public emlite::Val {
  explicit AppendMode(Handle h) noexcept;
public:
   explicit AppendMode(const emlite::Val &v) noexcept;
  static AppendMode take_ownership(Handle h) noexcept;
    AppendMode clone() const noexcept;
  static const AppendMode segments;
  static const AppendMode sequence;
};

class MockCapturePromptResult : public emlite::Val {
  explicit MockCapturePromptResult(Handle h) noexcept;
public:
   explicit MockCapturePromptResult(const emlite::Val &v) noexcept;
  static MockCapturePromptResult take_ownership(Handle h) noexcept;
    MockCapturePromptResult clone() const noexcept;
  static const MockCapturePromptResult granted;
  static const MockCapturePromptResult denied;
};

class CaptureAction : public emlite::Val {
  explicit CaptureAction(Handle h) noexcept;
public:
   explicit CaptureAction(const emlite::Val &v) noexcept;
  static CaptureAction take_ownership(Handle h) noexcept;
    CaptureAction clone() const noexcept;
  static const CaptureAction next;
  static const CaptureAction previous;
  static const CaptureAction first;
  static const CaptureAction last;
};

class MediaStreamTrackState : public emlite::Val {
  explicit MediaStreamTrackState(Handle h) noexcept;
public:
   explicit MediaStreamTrackState(const emlite::Val &v) noexcept;
  static MediaStreamTrackState take_ownership(Handle h) noexcept;
    MediaStreamTrackState clone() const noexcept;
  static const MediaStreamTrackState live;
  static const MediaStreamTrackState ended;
};

class VideoFacingModeEnum : public emlite::Val {
  explicit VideoFacingModeEnum(Handle h) noexcept;
public:
   explicit VideoFacingModeEnum(const emlite::Val &v) noexcept;
  static VideoFacingModeEnum take_ownership(Handle h) noexcept;
    VideoFacingModeEnum clone() const noexcept;
  static const VideoFacingModeEnum user;
  static const VideoFacingModeEnum environment;
  static const VideoFacingModeEnum left;
  static const VideoFacingModeEnum right;
};

class VideoResizeModeEnum : public emlite::Val {
  explicit VideoResizeModeEnum(Handle h) noexcept;
public:
   explicit VideoResizeModeEnum(const emlite::Val &v) noexcept;
  static VideoResizeModeEnum take_ownership(Handle h) noexcept;
    VideoResizeModeEnum clone() const noexcept;
  static const VideoResizeModeEnum none;
  static const VideoResizeModeEnum crop_and_scale;
};

class EchoCancellationModeEnum : public emlite::Val {
  explicit EchoCancellationModeEnum(Handle h) noexcept;
public:
   explicit EchoCancellationModeEnum(const emlite::Val &v) noexcept;
  static EchoCancellationModeEnum take_ownership(Handle h) noexcept;
    EchoCancellationModeEnum clone() const noexcept;
  static const EchoCancellationModeEnum all;
  static const EchoCancellationModeEnum remote_only;
};

class MediaDeviceKind : public emlite::Val {
  explicit MediaDeviceKind(Handle h) noexcept;
public:
   explicit MediaDeviceKind(const emlite::Val &v) noexcept;
  static MediaDeviceKind take_ownership(Handle h) noexcept;
    MediaDeviceKind clone() const noexcept;
  static const MediaDeviceKind audioinput;
  static const MediaDeviceKind audiooutput;
  static const MediaDeviceKind videoinput;
};

class MediaSessionPlaybackState : public emlite::Val {
  explicit MediaSessionPlaybackState(Handle h) noexcept;
public:
   explicit MediaSessionPlaybackState(const emlite::Val &v) noexcept;
  static MediaSessionPlaybackState take_ownership(Handle h) noexcept;
    MediaSessionPlaybackState clone() const noexcept;
  static const MediaSessionPlaybackState none;
  static const MediaSessionPlaybackState paused;
  static const MediaSessionPlaybackState playing;
};

class MediaSessionAction : public emlite::Val {
  explicit MediaSessionAction(Handle h) noexcept;
public:
   explicit MediaSessionAction(const emlite::Val &v) noexcept;
  static MediaSessionAction take_ownership(Handle h) noexcept;
    MediaSessionAction clone() const noexcept;
  static const MediaSessionAction play;
  static const MediaSessionAction pause;
  static const MediaSessionAction seekbackward;
  static const MediaSessionAction seekforward;
  static const MediaSessionAction previoustrack;
  static const MediaSessionAction nexttrack;
  static const MediaSessionAction skipad;
  static const MediaSessionAction stop;
  static const MediaSessionAction seekto;
  static const MediaSessionAction togglemicrophone;
  static const MediaSessionAction togglecamera;
  static const MediaSessionAction togglescreenshare;
  static const MediaSessionAction hangup;
  static const MediaSessionAction previousslide;
  static const MediaSessionAction nextslide;
  static const MediaSessionAction enterpictureinpicture;
  static const MediaSessionAction voiceactivity;
};

class BitrateMode : public emlite::Val {
  explicit BitrateMode(Handle h) noexcept;
public:
   explicit BitrateMode(const emlite::Val &v) noexcept;
  static BitrateMode take_ownership(Handle h) noexcept;
    BitrateMode clone() const noexcept;
  static const BitrateMode constant;
  static const BitrateMode variable;
};

class RecordingState : public emlite::Val {
  explicit RecordingState(Handle h) noexcept;
public:
   explicit RecordingState(const emlite::Val &v) noexcept;
  static RecordingState take_ownership(Handle h) noexcept;
    RecordingState clone() const noexcept;
  static const RecordingState inactive;
  static const RecordingState recording;
  static const RecordingState paused;
};

class RTCDegradationPreference : public emlite::Val {
  explicit RTCDegradationPreference(Handle h) noexcept;
public:
   explicit RTCDegradationPreference(const emlite::Val &v) noexcept;
  static RTCDegradationPreference take_ownership(Handle h) noexcept;
    RTCDegradationPreference clone() const noexcept;
  static const RTCDegradationPreference maintain_framerate;
  static const RTCDegradationPreference maintain_resolution;
  static const RTCDegradationPreference balanced;
};

class NavigationTimingType : public emlite::Val {
  explicit NavigationTimingType(Handle h) noexcept;
public:
   explicit NavigationTimingType(const emlite::Val &v) noexcept;
  static NavigationTimingType take_ownership(Handle h) noexcept;
    NavigationTimingType clone() const noexcept;
  static const NavigationTimingType navigate;
  static const NavigationTimingType reload;
  static const NavigationTimingType back_forward;
  static const NavigationTimingType prerender;
};

class ConnectionType : public emlite::Val {
  explicit ConnectionType(Handle h) noexcept;
public:
   explicit ConnectionType(const emlite::Val &v) noexcept;
  static ConnectionType take_ownership(Handle h) noexcept;
    ConnectionType clone() const noexcept;
  static const ConnectionType bluetooth;
  static const ConnectionType cellular;
  static const ConnectionType ethernet;
  static const ConnectionType mixed;
  static const ConnectionType none;
  static const ConnectionType other;
  static const ConnectionType unknown;
  static const ConnectionType wifi;
  static const ConnectionType wimax;
};

class EffectiveConnectionType : public emlite::Val {
  explicit EffectiveConnectionType(Handle h) noexcept;
public:
   explicit EffectiveConnectionType(const emlite::Val &v) noexcept;
  static EffectiveConnectionType take_ownership(Handle h) noexcept;
    EffectiveConnectionType clone() const noexcept;
  static const EffectiveConnectionType _2g;
  static const EffectiveConnectionType _3g;
  static const EffectiveConnectionType _4g;
  static const EffectiveConnectionType slow_2g;
};

class NotificationPermission : public emlite::Val {
  explicit NotificationPermission(Handle h) noexcept;
public:
   explicit NotificationPermission(const emlite::Val &v) noexcept;
  static NotificationPermission take_ownership(Handle h) noexcept;
    NotificationPermission clone() const noexcept;
  static const NotificationPermission default_;
  static const NotificationPermission denied;
  static const NotificationPermission granted;
};

class NotificationDirection : public emlite::Val {
  explicit NotificationDirection(Handle h) noexcept;
public:
   explicit NotificationDirection(const emlite::Val &v) noexcept;
  static NotificationDirection take_ownership(Handle h) noexcept;
    NotificationDirection clone() const noexcept;
  static const NotificationDirection auto_;
  static const NotificationDirection ltr;
  static const NotificationDirection rtl;
};

class OrientationSensorLocalCoordinateSystem : public emlite::Val {
  explicit OrientationSensorLocalCoordinateSystem(Handle h) noexcept;
public:
   explicit OrientationSensorLocalCoordinateSystem(const emlite::Val &v) noexcept;
  static OrientationSensorLocalCoordinateSystem take_ownership(Handle h) noexcept;
    OrientationSensorLocalCoordinateSystem clone() const noexcept;
  static const OrientationSensorLocalCoordinateSystem device;
  static const OrientationSensorLocalCoordinateSystem screen;
};

class ClientLifecycleState : public emlite::Val {
  explicit ClientLifecycleState(Handle h) noexcept;
public:
   explicit ClientLifecycleState(const emlite::Val &v) noexcept;
  static ClientLifecycleState take_ownership(Handle h) noexcept;
    ClientLifecycleState clone() const noexcept;
  static const ClientLifecycleState active;
  static const ClientLifecycleState frozen;
};

class PaymentDelegation : public emlite::Val {
  explicit PaymentDelegation(Handle h) noexcept;
public:
   explicit PaymentDelegation(const emlite::Val &v) noexcept;
  static PaymentDelegation take_ownership(Handle h) noexcept;
    PaymentDelegation clone() const noexcept;
  static const PaymentDelegation shippingAddress;
  static const PaymentDelegation payerName;
  static const PaymentDelegation payerPhone;
  static const PaymentDelegation payerEmail;
};

class PaymentShippingType : public emlite::Val {
  explicit PaymentShippingType(Handle h) noexcept;
public:
   explicit PaymentShippingType(const emlite::Val &v) noexcept;
  static PaymentShippingType take_ownership(Handle h) noexcept;
    PaymentShippingType clone() const noexcept;
  static const PaymentShippingType shipping;
  static const PaymentShippingType delivery;
  static const PaymentShippingType pickup;
};

class PaymentComplete : public emlite::Val {
  explicit PaymentComplete(Handle h) noexcept;
public:
   explicit PaymentComplete(const emlite::Val &v) noexcept;
  static PaymentComplete take_ownership(Handle h) noexcept;
    PaymentComplete clone() const noexcept;
  static const PaymentComplete fail;
  static const PaymentComplete success;
  static const PaymentComplete unknown;
};

class PermissionState : public emlite::Val {
  explicit PermissionState(Handle h) noexcept;
public:
   explicit PermissionState(const emlite::Val &v) noexcept;
  static PermissionState take_ownership(Handle h) noexcept;
    PermissionState clone() const noexcept;
  static const PermissionState granted;
  static const PermissionState denied;
  static const PermissionState prompt;
};

class PointerAxis : public emlite::Val {
  explicit PointerAxis(Handle h) noexcept;
public:
   explicit PointerAxis(const emlite::Val &v) noexcept;
  static PointerAxis take_ownership(Handle h) noexcept;
    PointerAxis clone() const noexcept;
  static const PointerAxis block;
  static const PointerAxis inline_;
  static const PointerAxis x;
  static const PointerAxis y;
};

class PresentationConnectionState : public emlite::Val {
  explicit PresentationConnectionState(Handle h) noexcept;
public:
   explicit PresentationConnectionState(const emlite::Val &v) noexcept;
  static PresentationConnectionState take_ownership(Handle h) noexcept;
    PresentationConnectionState clone() const noexcept;
  static const PresentationConnectionState connecting;
  static const PresentationConnectionState connected;
  static const PresentationConnectionState closed;
  static const PresentationConnectionState terminated;
};

class PresentationConnectionCloseReason : public emlite::Val {
  explicit PresentationConnectionCloseReason(Handle h) noexcept;
public:
   explicit PresentationConnectionCloseReason(const emlite::Val &v) noexcept;
  static PresentationConnectionCloseReason take_ownership(Handle h) noexcept;
    PresentationConnectionCloseReason clone() const noexcept;
  static const PresentationConnectionCloseReason error;
  static const PresentationConnectionCloseReason closed;
  static const PresentationConnectionCloseReason wentaway;
};

class PrivateAttributionAggregationProtocol : public emlite::Val {
  explicit PrivateAttributionAggregationProtocol(Handle h) noexcept;
public:
   explicit PrivateAttributionAggregationProtocol(const emlite::Val &v) noexcept;
  static PrivateAttributionAggregationProtocol take_ownership(Handle h) noexcept;
    PrivateAttributionAggregationProtocol clone() const noexcept;
  static const PrivateAttributionAggregationProtocol dap_12_histogram;
  static const PrivateAttributionAggregationProtocol tee_00;
};

class AttributionLogic : public emlite::Val {
  explicit AttributionLogic(Handle h) noexcept;
public:
   explicit AttributionLogic(const emlite::Val &v) noexcept;
  static AttributionLogic take_ownership(Handle h) noexcept;
    AttributionLogic clone() const noexcept;
  static const AttributionLogic last_touch;
};

class IPAddressSpace : public emlite::Val {
  explicit IPAddressSpace(Handle h) noexcept;
public:
   explicit IPAddressSpace(const emlite::Val &v) noexcept;
  static IPAddressSpace take_ownership(Handle h) noexcept;
    IPAddressSpace clone() const noexcept;
  static const IPAddressSpace public_;
  static const IPAddressSpace private_;
  static const IPAddressSpace local;
};

class PushEncryptionKeyName : public emlite::Val {
  explicit PushEncryptionKeyName(Handle h) noexcept;
public:
   explicit PushEncryptionKeyName(const emlite::Val &v) noexcept;
  static PushEncryptionKeyName take_ownership(Handle h) noexcept;
    PushEncryptionKeyName clone() const noexcept;
  static const PushEncryptionKeyName p256dh;
  static const PushEncryptionKeyName auth;
};

class ReferrerPolicy : public emlite::Val {
  explicit ReferrerPolicy(Handle h) noexcept;
public:
   explicit ReferrerPolicy(const emlite::Val &v) noexcept;
  static ReferrerPolicy take_ownership(Handle h) noexcept;
    ReferrerPolicy clone() const noexcept;
  static const ReferrerPolicy none;
  static const ReferrerPolicy no_referrer;
  static const ReferrerPolicy no_referrer_when_downgrade;
  static const ReferrerPolicy same_origin;
  static const ReferrerPolicy origin;
  static const ReferrerPolicy strict_origin;
  static const ReferrerPolicy origin_when_cross_origin;
  static const ReferrerPolicy strict_origin_when_cross_origin;
  static const ReferrerPolicy unsafe_url;
};

class RemotePlaybackState : public emlite::Val {
  explicit RemotePlaybackState(Handle h) noexcept;
public:
   explicit RemotePlaybackState(const emlite::Val &v) noexcept;
  static RemotePlaybackState take_ownership(Handle h) noexcept;
    RemotePlaybackState clone() const noexcept;
  static const RemotePlaybackState connecting;
  static const RemotePlaybackState connected;
  static const RemotePlaybackState disconnected;
};

class ResizeObserverBoxOptions : public emlite::Val {
  explicit ResizeObserverBoxOptions(Handle h) noexcept;
public:
   explicit ResizeObserverBoxOptions(const emlite::Val &v) noexcept;
  static ResizeObserverBoxOptions take_ownership(Handle h) noexcept;
    ResizeObserverBoxOptions clone() const noexcept;
  static const ResizeObserverBoxOptions border_box;
  static const ResizeObserverBoxOptions content_box;
  static const ResizeObserverBoxOptions device_pixel_content_box;
};

class RenderBlockingStatusType : public emlite::Val {
  explicit RenderBlockingStatusType(Handle h) noexcept;
public:
   explicit RenderBlockingStatusType(const emlite::Val &v) noexcept;
  static RenderBlockingStatusType take_ownership(Handle h) noexcept;
    RenderBlockingStatusType clone() const noexcept;
  static const RenderBlockingStatusType blocking;
  static const RenderBlockingStatusType non_blocking;
};

class SameSiteCookiesType : public emlite::Val {
  explicit SameSiteCookiesType(Handle h) noexcept;
public:
   explicit SameSiteCookiesType(const emlite::Val &v) noexcept;
  static SameSiteCookiesType take_ownership(Handle h) noexcept;
    SameSiteCookiesType clone() const noexcept;
  static const SameSiteCookiesType all;
  static const SameSiteCookiesType none;
};

class SanitizerPresets : public emlite::Val {
  explicit SanitizerPresets(Handle h) noexcept;
public:
   explicit SanitizerPresets(const emlite::Val &v) noexcept;
  static SanitizerPresets take_ownership(Handle h) noexcept;
    SanitizerPresets clone() const noexcept;
  static const SanitizerPresets default_;
};

class TaskPriority : public emlite::Val {
  explicit TaskPriority(Handle h) noexcept;
public:
   explicit TaskPriority(const emlite::Val &v) noexcept;
  static TaskPriority take_ownership(Handle h) noexcept;
    TaskPriority clone() const noexcept;
  static const TaskPriority user_blocking;
  static const TaskPriority user_visible;
  static const TaskPriority background;
};

class CaptureStartFocusBehavior : public emlite::Val {
  explicit CaptureStartFocusBehavior(Handle h) noexcept;
public:
   explicit CaptureStartFocusBehavior(const emlite::Val &v) noexcept;
  static CaptureStartFocusBehavior take_ownership(Handle h) noexcept;
    CaptureStartFocusBehavior clone() const noexcept;
  static const CaptureStartFocusBehavior focus_capturing_application;
  static const CaptureStartFocusBehavior focus_captured_surface;
  static const CaptureStartFocusBehavior no_focus_change;
};

class SelfCapturePreferenceEnum : public emlite::Val {
  explicit SelfCapturePreferenceEnum(Handle h) noexcept;
public:
   explicit SelfCapturePreferenceEnum(const emlite::Val &v) noexcept;
  static SelfCapturePreferenceEnum take_ownership(Handle h) noexcept;
    SelfCapturePreferenceEnum clone() const noexcept;
  static const SelfCapturePreferenceEnum include;
  static const SelfCapturePreferenceEnum exclude;
};

class SystemAudioPreferenceEnum : public emlite::Val {
  explicit SystemAudioPreferenceEnum(Handle h) noexcept;
public:
   explicit SystemAudioPreferenceEnum(const emlite::Val &v) noexcept;
  static SystemAudioPreferenceEnum take_ownership(Handle h) noexcept;
    SystemAudioPreferenceEnum clone() const noexcept;
  static const SystemAudioPreferenceEnum include;
  static const SystemAudioPreferenceEnum exclude;
};

class WindowAudioPreferenceEnum : public emlite::Val {
  explicit WindowAudioPreferenceEnum(Handle h) noexcept;
public:
   explicit WindowAudioPreferenceEnum(const emlite::Val &v) noexcept;
  static WindowAudioPreferenceEnum take_ownership(Handle h) noexcept;
    WindowAudioPreferenceEnum clone() const noexcept;
  static const WindowAudioPreferenceEnum system;
  static const WindowAudioPreferenceEnum window;
  static const WindowAudioPreferenceEnum exclude;
};

class SurfaceSwitchingPreferenceEnum : public emlite::Val {
  explicit SurfaceSwitchingPreferenceEnum(Handle h) noexcept;
public:
   explicit SurfaceSwitchingPreferenceEnum(const emlite::Val &v) noexcept;
  static SurfaceSwitchingPreferenceEnum take_ownership(Handle h) noexcept;
    SurfaceSwitchingPreferenceEnum clone() const noexcept;
  static const SurfaceSwitchingPreferenceEnum include;
  static const SurfaceSwitchingPreferenceEnum exclude;
};

class MonitorTypeSurfacesEnum : public emlite::Val {
  explicit MonitorTypeSurfacesEnum(Handle h) noexcept;
public:
   explicit MonitorTypeSurfacesEnum(const emlite::Val &v) noexcept;
  static MonitorTypeSurfacesEnum take_ownership(Handle h) noexcept;
    MonitorTypeSurfacesEnum clone() const noexcept;
  static const MonitorTypeSurfacesEnum include;
  static const MonitorTypeSurfacesEnum exclude;
};

class DisplayCaptureSurfaceType : public emlite::Val {
  explicit DisplayCaptureSurfaceType(Handle h) noexcept;
public:
   explicit DisplayCaptureSurfaceType(const emlite::Val &v) noexcept;
  static DisplayCaptureSurfaceType take_ownership(Handle h) noexcept;
    DisplayCaptureSurfaceType clone() const noexcept;
  static const DisplayCaptureSurfaceType monitor;
  static const DisplayCaptureSurfaceType window;
  static const DisplayCaptureSurfaceType browser;
};

class CursorCaptureConstraint : public emlite::Val {
  explicit CursorCaptureConstraint(Handle h) noexcept;
public:
   explicit CursorCaptureConstraint(const emlite::Val &v) noexcept;
  static CursorCaptureConstraint take_ownership(Handle h) noexcept;
    CursorCaptureConstraint clone() const noexcept;
  static const CursorCaptureConstraint never;
  static const CursorCaptureConstraint always;
  static const CursorCaptureConstraint motion;
};

class OrientationLockType : public emlite::Val {
  explicit OrientationLockType(Handle h) noexcept;
public:
   explicit OrientationLockType(const emlite::Val &v) noexcept;
  static OrientationLockType take_ownership(Handle h) noexcept;
    OrientationLockType clone() const noexcept;
  static const OrientationLockType any;
  static const OrientationLockType natural;
  static const OrientationLockType landscape;
  static const OrientationLockType portrait;
  static const OrientationLockType portrait_primary;
  static const OrientationLockType portrait_secondary;
  static const OrientationLockType landscape_primary;
  static const OrientationLockType landscape_secondary;
};

class OrientationType : public emlite::Val {
  explicit OrientationType(Handle h) noexcept;
public:
   explicit OrientationType(const emlite::Val &v) noexcept;
  static OrientationType take_ownership(Handle h) noexcept;
    OrientationType clone() const noexcept;
  static const OrientationType portrait_primary;
  static const OrientationType portrait_secondary;
  static const OrientationType landscape_primary;
  static const OrientationType landscape_secondary;
};

class WakeLockType : public emlite::Val {
  explicit WakeLockType(Handle h) noexcept;
public:
   explicit WakeLockType(const emlite::Val &v) noexcept;
  static WakeLockType take_ownership(Handle h) noexcept;
    WakeLockType clone() const noexcept;
  static const WakeLockType screen;
};

class ScrollAxis : public emlite::Val {
  explicit ScrollAxis(Handle h) noexcept;
public:
   explicit ScrollAxis(const emlite::Val &v) noexcept;
  static ScrollAxis take_ownership(Handle h) noexcept;
    ScrollAxis clone() const noexcept;
  static const ScrollAxis block;
  static const ScrollAxis inline_;
  static const ScrollAxis x;
  static const ScrollAxis y;
};

class SecurePaymentConfirmationAvailability : public emlite::Val {
  explicit SecurePaymentConfirmationAvailability(Handle h) noexcept;
public:
   explicit SecurePaymentConfirmationAvailability(const emlite::Val &v) noexcept;
  static SecurePaymentConfirmationAvailability take_ownership(Handle h) noexcept;
    SecurePaymentConfirmationAvailability clone() const noexcept;
  static const SecurePaymentConfirmationAvailability available;
  static const SecurePaymentConfirmationAvailability unavailable_unknown_reason;
  static const SecurePaymentConfirmationAvailability unavailable_feature_not_enabled;
  static const SecurePaymentConfirmationAvailability unavailable_no_permission_policy;
  static const SecurePaymentConfirmationAvailability unavailable_no_user_verifying_platform_authenticator;
};

class ParityType : public emlite::Val {
  explicit ParityType(Handle h) noexcept;
public:
   explicit ParityType(const emlite::Val &v) noexcept;
  static ParityType take_ownership(Handle h) noexcept;
    ParityType clone() const noexcept;
  static const ParityType none;
  static const ParityType even;
  static const ParityType odd;
};

class FlowControlType : public emlite::Val {
  explicit FlowControlType(Handle h) noexcept;
public:
   explicit FlowControlType(const emlite::Val &v) noexcept;
  static FlowControlType take_ownership(Handle h) noexcept;
    FlowControlType clone() const noexcept;
  static const FlowControlType none;
  static const FlowControlType hardware;
};

class ServiceWorkerState : public emlite::Val {
  explicit ServiceWorkerState(Handle h) noexcept;
public:
   explicit ServiceWorkerState(const emlite::Val &v) noexcept;
  static ServiceWorkerState take_ownership(Handle h) noexcept;
    ServiceWorkerState clone() const noexcept;
  static const ServiceWorkerState parsed;
  static const ServiceWorkerState installing;
  static const ServiceWorkerState installed;
  static const ServiceWorkerState activating;
  static const ServiceWorkerState activated;
  static const ServiceWorkerState redundant;
};

class ServiceWorkerUpdateViaCache : public emlite::Val {
  explicit ServiceWorkerUpdateViaCache(Handle h) noexcept;
public:
   explicit ServiceWorkerUpdateViaCache(const emlite::Val &v) noexcept;
  static ServiceWorkerUpdateViaCache take_ownership(Handle h) noexcept;
    ServiceWorkerUpdateViaCache clone() const noexcept;
  static const ServiceWorkerUpdateViaCache imports;
  static const ServiceWorkerUpdateViaCache all;
  static const ServiceWorkerUpdateViaCache none;
};

class FrameType : public emlite::Val {
  explicit FrameType(Handle h) noexcept;
public:
   explicit FrameType(const emlite::Val &v) noexcept;
  static FrameType take_ownership(Handle h) noexcept;
    FrameType clone() const noexcept;
  static const FrameType auxiliary;
  static const FrameType top_level;
  static const FrameType nested;
  static const FrameType none;
};

class ClientType : public emlite::Val {
  explicit ClientType(Handle h) noexcept;
public:
   explicit ClientType(const emlite::Val &v) noexcept;
  static ClientType take_ownership(Handle h) noexcept;
    ClientType clone() const noexcept;
  static const ClientType window;
  static const ClientType worker;
  static const ClientType sharedworker;
  static const ClientType all;
};

class RunningStatus : public emlite::Val {
  explicit RunningStatus(Handle h) noexcept;
public:
   explicit RunningStatus(const emlite::Val &v) noexcept;
  static RunningStatus take_ownership(Handle h) noexcept;
    RunningStatus clone() const noexcept;
  static const RunningStatus running;
  static const RunningStatus not_running;
};

class RouterSourceEnum : public emlite::Val {
  explicit RouterSourceEnum(Handle h) noexcept;
public:
   explicit RouterSourceEnum(const emlite::Val &v) noexcept;
  static RouterSourceEnum take_ownership(Handle h) noexcept;
    RouterSourceEnum clone() const noexcept;
  static const RouterSourceEnum cache;
  static const RouterSourceEnum fetch_event;
  static const RouterSourceEnum network;
  static const RouterSourceEnum race_network_and_fetch_handler;
};

class LandmarkType : public emlite::Val {
  explicit LandmarkType(Handle h) noexcept;
public:
   explicit LandmarkType(const emlite::Val &v) noexcept;
  static LandmarkType take_ownership(Handle h) noexcept;
    LandmarkType clone() const noexcept;
  static const LandmarkType mouth;
  static const LandmarkType eye;
  static const LandmarkType nose;
};

class BarcodeFormat : public emlite::Val {
  explicit BarcodeFormat(Handle h) noexcept;
public:
   explicit BarcodeFormat(const emlite::Val &v) noexcept;
  static BarcodeFormat take_ownership(Handle h) noexcept;
    BarcodeFormat clone() const noexcept;
  static const BarcodeFormat aztec;
  static const BarcodeFormat code_128;
  static const BarcodeFormat code_39;
  static const BarcodeFormat code_93;
  static const BarcodeFormat codabar;
  static const BarcodeFormat data_matrix;
  static const BarcodeFormat ean_13;
  static const BarcodeFormat ean_8;
  static const BarcodeFormat itf;
  static const BarcodeFormat pdf417;
  static const BarcodeFormat qr_code;
  static const BarcodeFormat unknown;
  static const BarcodeFormat upc_a;
  static const BarcodeFormat upc_e;
};

class SpeechRecognitionErrorCode : public emlite::Val {
  explicit SpeechRecognitionErrorCode(Handle h) noexcept;
public:
   explicit SpeechRecognitionErrorCode(const emlite::Val &v) noexcept;
  static SpeechRecognitionErrorCode take_ownership(Handle h) noexcept;
    SpeechRecognitionErrorCode clone() const noexcept;
  static const SpeechRecognitionErrorCode no_speech;
  static const SpeechRecognitionErrorCode aborted;
  static const SpeechRecognitionErrorCode audio_capture;
  static const SpeechRecognitionErrorCode network;
  static const SpeechRecognitionErrorCode not_allowed;
  static const SpeechRecognitionErrorCode service_not_allowed;
  static const SpeechRecognitionErrorCode language_not_supported;
  static const SpeechRecognitionErrorCode phrases_not_supported;
};

class AvailabilityStatus : public emlite::Val {
  explicit AvailabilityStatus(Handle h) noexcept;
public:
   explicit AvailabilityStatus(const emlite::Val &v) noexcept;
  static AvailabilityStatus take_ownership(Handle h) noexcept;
    AvailabilityStatus clone() const noexcept;
  static const AvailabilityStatus unavailable;
  static const AvailabilityStatus downloadable;
  static const AvailabilityStatus downloading;
  static const AvailabilityStatus available;
};

class SpeechSynthesisErrorCode : public emlite::Val {
  explicit SpeechSynthesisErrorCode(Handle h) noexcept;
public:
   explicit SpeechSynthesisErrorCode(const emlite::Val &v) noexcept;
  static SpeechSynthesisErrorCode take_ownership(Handle h) noexcept;
    SpeechSynthesisErrorCode clone() const noexcept;
  static const SpeechSynthesisErrorCode canceled;
  static const SpeechSynthesisErrorCode interrupted;
  static const SpeechSynthesisErrorCode audio_busy;
  static const SpeechSynthesisErrorCode audio_hardware;
  static const SpeechSynthesisErrorCode network;
  static const SpeechSynthesisErrorCode synthesis_unavailable;
  static const SpeechSynthesisErrorCode synthesis_failed;
  static const SpeechSynthesisErrorCode language_unavailable;
  static const SpeechSynthesisErrorCode voice_unavailable;
  static const SpeechSynthesisErrorCode text_too_long;
  static const SpeechSynthesisErrorCode invalid_argument;
  static const SpeechSynthesisErrorCode not_allowed;
};

class ReadableStreamReaderMode : public emlite::Val {
  explicit ReadableStreamReaderMode(Handle h) noexcept;
public:
   explicit ReadableStreamReaderMode(const emlite::Val &v) noexcept;
  static ReadableStreamReaderMode take_ownership(Handle h) noexcept;
    ReadableStreamReaderMode clone() const noexcept;
  static const ReadableStreamReaderMode byob;
};

class ReadableStreamType : public emlite::Val {
  explicit ReadableStreamType(Handle h) noexcept;
public:
   explicit ReadableStreamType(const emlite::Val &v) noexcept;
  static ReadableStreamType take_ownership(Handle h) noexcept;
    ReadableStreamType clone() const noexcept;
  static const ReadableStreamType bytes;
};

class TouchType : public emlite::Val {
  explicit TouchType(Handle h) noexcept;
public:
   explicit TouchType(const emlite::Val &v) noexcept;
  static TouchType take_ownership(Handle h) noexcept;
    TouchType clone() const noexcept;
  static const TouchType direct;
  static const TouchType stylus;
};

class RefreshPolicy : public emlite::Val {
  explicit RefreshPolicy(Handle h) noexcept;
public:
   explicit RefreshPolicy(const emlite::Val &v) noexcept;
  static RefreshPolicy take_ownership(Handle h) noexcept;
    RefreshPolicy clone() const noexcept;
  static const RefreshPolicy none;
  static const RefreshPolicy refresh;
};

class TokenVersion : public emlite::Val {
  explicit TokenVersion(Handle h) noexcept;
public:
   explicit TokenVersion(const emlite::Val &v) noexcept;
  static TokenVersion take_ownership(Handle h) noexcept;
    TokenVersion clone() const noexcept;
  static const TokenVersion _1;
};

class OperationType : public emlite::Val {
  explicit OperationType(Handle h) noexcept;
public:
   explicit OperationType(const emlite::Val &v) noexcept;
  static OperationType take_ownership(Handle h) noexcept;
    OperationType clone() const noexcept;
  static const OperationType token_request;
  static const OperationType send_redemption_record;
  static const OperationType token_redemption;
};

class KAnonStatus : public emlite::Val {
  explicit KAnonStatus(Handle h) noexcept;
public:
   explicit KAnonStatus(const emlite::Val &v) noexcept;
  static KAnonStatus take_ownership(Handle h) noexcept;
    KAnonStatus clone() const noexcept;
  static const KAnonStatus passedAndEnforced;
  static const KAnonStatus passedNotEnforced;
  static const KAnonStatus belowThreshold;
  static const KAnonStatus notCalculated;
};

class ImportExportKind : public emlite::Val {
  explicit ImportExportKind(Handle h) noexcept;
public:
   explicit ImportExportKind(const emlite::Val &v) noexcept;
  static ImportExportKind take_ownership(Handle h) noexcept;
    ImportExportKind clone() const noexcept;
  static const ImportExportKind function;
  static const ImportExportKind table;
  static const ImportExportKind memory;
  static const ImportExportKind global;
};

class TableKind : public emlite::Val {
  explicit TableKind(Handle h) noexcept;
public:
   explicit TableKind(const emlite::Val &v) noexcept;
  static TableKind take_ownership(Handle h) noexcept;
    TableKind clone() const noexcept;
  static const TableKind externref;
  static const TableKind anyfunc;
};

class ValueType : public emlite::Val {
  explicit ValueType(Handle h) noexcept;
public:
   explicit ValueType(const emlite::Val &v) noexcept;
  static ValueType take_ownership(Handle h) noexcept;
    ValueType clone() const noexcept;
  static const ValueType i32;
  static const ValueType i64;
  static const ValueType f32;
  static const ValueType f64;
  static const ValueType v128;
  static const ValueType externref;
  static const ValueType anyfunc;
};

class IterationCompositeOperation : public emlite::Val {
  explicit IterationCompositeOperation(Handle h) noexcept;
public:
   explicit IterationCompositeOperation(const emlite::Val &v) noexcept;
  static IterationCompositeOperation take_ownership(Handle h) noexcept;
    IterationCompositeOperation clone() const noexcept;
  static const IterationCompositeOperation replace;
  static const IterationCompositeOperation accumulate;
};

class AnimationTriggerBehavior : public emlite::Val {
  explicit AnimationTriggerBehavior(Handle h) noexcept;
public:
   explicit AnimationTriggerBehavior(const emlite::Val &v) noexcept;
  static AnimationTriggerBehavior take_ownership(Handle h) noexcept;
    AnimationTriggerBehavior clone() const noexcept;
  static const AnimationTriggerBehavior once;
  static const AnimationTriggerBehavior repeat;
  static const AnimationTriggerBehavior alternate;
  static const AnimationTriggerBehavior state;
};

class AnimationPlayState : public emlite::Val {
  explicit AnimationPlayState(Handle h) noexcept;
public:
   explicit AnimationPlayState(const emlite::Val &v) noexcept;
  static AnimationPlayState take_ownership(Handle h) noexcept;
    AnimationPlayState clone() const noexcept;
  static const AnimationPlayState idle;
  static const AnimationPlayState running;
  static const AnimationPlayState paused;
  static const AnimationPlayState finished;
};

class AnimationReplaceState : public emlite::Val {
  explicit AnimationReplaceState(Handle h) noexcept;
public:
   explicit AnimationReplaceState(const emlite::Val &v) noexcept;
  static AnimationReplaceState take_ownership(Handle h) noexcept;
    AnimationReplaceState clone() const noexcept;
  static const AnimationReplaceState active;
  static const AnimationReplaceState removed;
  static const AnimationReplaceState persisted;
};

class FillMode : public emlite::Val {
  explicit FillMode(Handle h) noexcept;
public:
   explicit FillMode(const emlite::Val &v) noexcept;
  static FillMode take_ownership(Handle h) noexcept;
    FillMode clone() const noexcept;
  static const FillMode none;
  static const FillMode forwards;
  static const FillMode backwards;
  static const FillMode both;
  static const FillMode auto_;
};

class PlaybackDirection : public emlite::Val {
  explicit PlaybackDirection(Handle h) noexcept;
public:
   explicit PlaybackDirection(const emlite::Val &v) noexcept;
  static PlaybackDirection take_ownership(Handle h) noexcept;
    PlaybackDirection clone() const noexcept;
  static const PlaybackDirection normal;
  static const PlaybackDirection reverse;
  static const PlaybackDirection alternate;
  static const PlaybackDirection alternate_reverse;
};

class CompositeOperation : public emlite::Val {
  explicit CompositeOperation(Handle h) noexcept;
public:
   explicit CompositeOperation(const emlite::Val &v) noexcept;
  static CompositeOperation take_ownership(Handle h) noexcept;
    CompositeOperation clone() const noexcept;
  static const CompositeOperation replace;
  static const CompositeOperation add;
  static const CompositeOperation accumulate;
};

class CompositeOperationOrAuto : public emlite::Val {
  explicit CompositeOperationOrAuto(Handle h) noexcept;
public:
   explicit CompositeOperationOrAuto(const emlite::Val &v) noexcept;
  static CompositeOperationOrAuto take_ownership(Handle h) noexcept;
    CompositeOperationOrAuto clone() const noexcept;
  static const CompositeOperationOrAuto replace;
  static const CompositeOperationOrAuto add;
  static const CompositeOperationOrAuto accumulate;
  static const CompositeOperationOrAuto auto_;
};

class LockMode : public emlite::Val {
  explicit LockMode(Handle h) noexcept;
public:
   explicit LockMode(const emlite::Val &v) noexcept;
  static LockMode take_ownership(Handle h) noexcept;
    LockMode clone() const noexcept;
  static const LockMode shared;
  static const LockMode exclusive;
};

class OTPCredentialTransportType : public emlite::Val {
  explicit OTPCredentialTransportType(Handle h) noexcept;
public:
   explicit OTPCredentialTransportType(const emlite::Val &v) noexcept;
  static OTPCredentialTransportType take_ownership(Handle h) noexcept;
    OTPCredentialTransportType clone() const noexcept;
  static const OTPCredentialTransportType sms;
};

class AudioContextState : public emlite::Val {
  explicit AudioContextState(Handle h) noexcept;
public:
   explicit AudioContextState(const emlite::Val &v) noexcept;
  static AudioContextState take_ownership(Handle h) noexcept;
    AudioContextState clone() const noexcept;
  static const AudioContextState suspended;
  static const AudioContextState running;
  static const AudioContextState closed;
  static const AudioContextState interrupted;
};

class AudioContextRenderSizeCategory : public emlite::Val {
  explicit AudioContextRenderSizeCategory(Handle h) noexcept;
public:
   explicit AudioContextRenderSizeCategory(const emlite::Val &v) noexcept;
  static AudioContextRenderSizeCategory take_ownership(Handle h) noexcept;
    AudioContextRenderSizeCategory clone() const noexcept;
  static const AudioContextRenderSizeCategory default_;
  static const AudioContextRenderSizeCategory hardware;
};

class AudioContextLatencyCategory : public emlite::Val {
  explicit AudioContextLatencyCategory(Handle h) noexcept;
public:
   explicit AudioContextLatencyCategory(const emlite::Val &v) noexcept;
  static AudioContextLatencyCategory take_ownership(Handle h) noexcept;
    AudioContextLatencyCategory clone() const noexcept;
  static const AudioContextLatencyCategory balanced;
  static const AudioContextLatencyCategory interactive;
  static const AudioContextLatencyCategory playback;
};

class AudioSinkType : public emlite::Val {
  explicit AudioSinkType(Handle h) noexcept;
public:
   explicit AudioSinkType(const emlite::Val &v) noexcept;
  static AudioSinkType take_ownership(Handle h) noexcept;
    AudioSinkType clone() const noexcept;
  static const AudioSinkType none;
};

class ChannelCountMode : public emlite::Val {
  explicit ChannelCountMode(Handle h) noexcept;
public:
   explicit ChannelCountMode(const emlite::Val &v) noexcept;
  static ChannelCountMode take_ownership(Handle h) noexcept;
    ChannelCountMode clone() const noexcept;
  static const ChannelCountMode max;
  static const ChannelCountMode clamped_max;
  static const ChannelCountMode explicit_;
};

class ChannelInterpretation : public emlite::Val {
  explicit ChannelInterpretation(Handle h) noexcept;
public:
   explicit ChannelInterpretation(const emlite::Val &v) noexcept;
  static ChannelInterpretation take_ownership(Handle h) noexcept;
    ChannelInterpretation clone() const noexcept;
  static const ChannelInterpretation speakers;
  static const ChannelInterpretation discrete;
};

class AutomationRate : public emlite::Val {
  explicit AutomationRate(Handle h) noexcept;
public:
   explicit AutomationRate(const emlite::Val &v) noexcept;
  static AutomationRate take_ownership(Handle h) noexcept;
    AutomationRate clone() const noexcept;
  static const AutomationRate a_rate;
  static const AutomationRate k_rate;
};

class BiquadFilterType : public emlite::Val {
  explicit BiquadFilterType(Handle h) noexcept;
public:
   explicit BiquadFilterType(const emlite::Val &v) noexcept;
  static BiquadFilterType take_ownership(Handle h) noexcept;
    BiquadFilterType clone() const noexcept;
  static const BiquadFilterType lowpass;
  static const BiquadFilterType highpass;
  static const BiquadFilterType bandpass;
  static const BiquadFilterType lowshelf;
  static const BiquadFilterType highshelf;
  static const BiquadFilterType peaking;
  static const BiquadFilterType notch;
  static const BiquadFilterType allpass;
};

class OscillatorType : public emlite::Val {
  explicit OscillatorType(Handle h) noexcept;
public:
   explicit OscillatorType(const emlite::Val &v) noexcept;
  static OscillatorType take_ownership(Handle h) noexcept;
    OscillatorType clone() const noexcept;
  static const OscillatorType sine;
  static const OscillatorType square;
  static const OscillatorType sawtooth;
  static const OscillatorType triangle;
  static const OscillatorType custom;
};

class PanningModelType : public emlite::Val {
  explicit PanningModelType(Handle h) noexcept;
public:
   explicit PanningModelType(const emlite::Val &v) noexcept;
  static PanningModelType take_ownership(Handle h) noexcept;
    PanningModelType clone() const noexcept;
  static const PanningModelType equalpower;
  static const PanningModelType HRTF;
};

class DistanceModelType : public emlite::Val {
  explicit DistanceModelType(Handle h) noexcept;
public:
   explicit DistanceModelType(const emlite::Val &v) noexcept;
  static DistanceModelType take_ownership(Handle h) noexcept;
    DistanceModelType clone() const noexcept;
  static const DistanceModelType linear;
  static const DistanceModelType inverse;
  static const DistanceModelType exponential;
};

class OverSampleType : public emlite::Val {
  explicit OverSampleType(Handle h) noexcept;
public:
   explicit OverSampleType(const emlite::Val &v) noexcept;
  static OverSampleType take_ownership(Handle h) noexcept;
    OverSampleType clone() const noexcept;
  static const OverSampleType none;
  static const OverSampleType _2x;
  static const OverSampleType _4x;
};

class AuthenticatorAttachment : public emlite::Val {
  explicit AuthenticatorAttachment(Handle h) noexcept;
public:
   explicit AuthenticatorAttachment(const emlite::Val &v) noexcept;
  static AuthenticatorAttachment take_ownership(Handle h) noexcept;
    AuthenticatorAttachment clone() const noexcept;
  static const AuthenticatorAttachment platform;
  static const AuthenticatorAttachment cross_platform;
};

class ResidentKeyRequirement : public emlite::Val {
  explicit ResidentKeyRequirement(Handle h) noexcept;
public:
   explicit ResidentKeyRequirement(const emlite::Val &v) noexcept;
  static ResidentKeyRequirement take_ownership(Handle h) noexcept;
    ResidentKeyRequirement clone() const noexcept;
  static const ResidentKeyRequirement discouraged;
  static const ResidentKeyRequirement preferred;
  static const ResidentKeyRequirement required;
};

class AttestationConveyancePreference : public emlite::Val {
  explicit AttestationConveyancePreference(Handle h) noexcept;
public:
   explicit AttestationConveyancePreference(const emlite::Val &v) noexcept;
  static AttestationConveyancePreference take_ownership(Handle h) noexcept;
    AttestationConveyancePreference clone() const noexcept;
  static const AttestationConveyancePreference none;
  static const AttestationConveyancePreference indirect;
  static const AttestationConveyancePreference direct;
  static const AttestationConveyancePreference enterprise;
};

class TokenBindingStatus : public emlite::Val {
  explicit TokenBindingStatus(Handle h) noexcept;
public:
   explicit TokenBindingStatus(const emlite::Val &v) noexcept;
  static TokenBindingStatus take_ownership(Handle h) noexcept;
    TokenBindingStatus clone() const noexcept;
  static const TokenBindingStatus present;
  static const TokenBindingStatus supported;
};

class PublicKeyCredentialType : public emlite::Val {
  explicit PublicKeyCredentialType(Handle h) noexcept;
public:
   explicit PublicKeyCredentialType(const emlite::Val &v) noexcept;
  static PublicKeyCredentialType take_ownership(Handle h) noexcept;
    PublicKeyCredentialType clone() const noexcept;
  static const PublicKeyCredentialType public_key;
};

class AuthenticatorTransport : public emlite::Val {
  explicit AuthenticatorTransport(Handle h) noexcept;
public:
   explicit AuthenticatorTransport(const emlite::Val &v) noexcept;
  static AuthenticatorTransport take_ownership(Handle h) noexcept;
    AuthenticatorTransport clone() const noexcept;
  static const AuthenticatorTransport usb;
  static const AuthenticatorTransport nfc;
  static const AuthenticatorTransport ble;
  static const AuthenticatorTransport smart_card;
  static const AuthenticatorTransport hybrid;
  static const AuthenticatorTransport internal;
};

class UserVerificationRequirement : public emlite::Val {
  explicit UserVerificationRequirement(Handle h) noexcept;
public:
   explicit UserVerificationRequirement(const emlite::Val &v) noexcept;
  static UserVerificationRequirement take_ownership(Handle h) noexcept;
    UserVerificationRequirement clone() const noexcept;
  static const UserVerificationRequirement required;
  static const UserVerificationRequirement preferred;
  static const UserVerificationRequirement discouraged;
};

class ClientCapability : public emlite::Val {
  explicit ClientCapability(Handle h) noexcept;
public:
   explicit ClientCapability(const emlite::Val &v) noexcept;
  static ClientCapability take_ownership(Handle h) noexcept;
    ClientCapability clone() const noexcept;
  static const ClientCapability conditionalCreate;
  static const ClientCapability conditionalGet;
  static const ClientCapability hybridTransport;
  static const ClientCapability passkeyPlatformAuthenticator;
  static const ClientCapability userVerifyingPlatformAuthenticator;
  static const ClientCapability relatedOrigins;
  static const ClientCapability signalAllAcceptedCredentials;
  static const ClientCapability signalCurrentUserDetails;
  static const ClientCapability signalUnknownCredential;
};

class PublicKeyCredentialHint : public emlite::Val {
  explicit PublicKeyCredentialHint(Handle h) noexcept;
public:
   explicit PublicKeyCredentialHint(const emlite::Val &v) noexcept;
  static PublicKeyCredentialHint take_ownership(Handle h) noexcept;
    PublicKeyCredentialHint clone() const noexcept;
  static const PublicKeyCredentialHint security_key;
  static const PublicKeyCredentialHint client_device;
  static const PublicKeyCredentialHint hybrid;
};

class LargeBlobSupport : public emlite::Val {
  explicit LargeBlobSupport(Handle h) noexcept;
public:
   explicit LargeBlobSupport(const emlite::Val &v) noexcept;
  static LargeBlobSupport take_ownership(Handle h) noexcept;
    LargeBlobSupport clone() const noexcept;
  static const LargeBlobSupport required;
  static const LargeBlobSupport preferred;
};

class AacBitstreamFormat : public emlite::Val {
  explicit AacBitstreamFormat(Handle h) noexcept;
public:
   explicit AacBitstreamFormat(const emlite::Val &v) noexcept;
  static AacBitstreamFormat take_ownership(Handle h) noexcept;
    AacBitstreamFormat clone() const noexcept;
  static const AacBitstreamFormat aac;
  static const AacBitstreamFormat adts;
};

class AvcBitstreamFormat : public emlite::Val {
  explicit AvcBitstreamFormat(Handle h) noexcept;
public:
   explicit AvcBitstreamFormat(const emlite::Val &v) noexcept;
  static AvcBitstreamFormat take_ownership(Handle h) noexcept;
    AvcBitstreamFormat clone() const noexcept;
  static const AvcBitstreamFormat annexb;
  static const AvcBitstreamFormat avc;
};

class HevcBitstreamFormat : public emlite::Val {
  explicit HevcBitstreamFormat(Handle h) noexcept;
public:
   explicit HevcBitstreamFormat(const emlite::Val &v) noexcept;
  static HevcBitstreamFormat take_ownership(Handle h) noexcept;
    HevcBitstreamFormat clone() const noexcept;
  static const HevcBitstreamFormat annexb;
  static const HevcBitstreamFormat hevc;
};

class OpusBitstreamFormat : public emlite::Val {
  explicit OpusBitstreamFormat(Handle h) noexcept;
public:
   explicit OpusBitstreamFormat(const emlite::Val &v) noexcept;
  static OpusBitstreamFormat take_ownership(Handle h) noexcept;
    OpusBitstreamFormat clone() const noexcept;
  static const OpusBitstreamFormat opus;
  static const OpusBitstreamFormat ogg;
};

class OpusSignal : public emlite::Val {
  explicit OpusSignal(Handle h) noexcept;
public:
   explicit OpusSignal(const emlite::Val &v) noexcept;
  static OpusSignal take_ownership(Handle h) noexcept;
    OpusSignal clone() const noexcept;
  static const OpusSignal auto_;
  static const OpusSignal music;
  static const OpusSignal voice;
};

class OpusApplication : public emlite::Val {
  explicit OpusApplication(Handle h) noexcept;
public:
   explicit OpusApplication(const emlite::Val &v) noexcept;
  static OpusApplication take_ownership(Handle h) noexcept;
    OpusApplication clone() const noexcept;
  static const OpusApplication voip;
  static const OpusApplication audio;
  static const OpusApplication lowdelay;
};

class HardwareAcceleration : public emlite::Val {
  explicit HardwareAcceleration(Handle h) noexcept;
public:
   explicit HardwareAcceleration(const emlite::Val &v) noexcept;
  static HardwareAcceleration take_ownership(Handle h) noexcept;
    HardwareAcceleration clone() const noexcept;
  static const HardwareAcceleration no_preference;
  static const HardwareAcceleration prefer_hardware;
  static const HardwareAcceleration prefer_software;
};

class AlphaOption : public emlite::Val {
  explicit AlphaOption(Handle h) noexcept;
public:
   explicit AlphaOption(const emlite::Val &v) noexcept;
  static AlphaOption take_ownership(Handle h) noexcept;
    AlphaOption clone() const noexcept;
  static const AlphaOption keep;
  static const AlphaOption discard;
};

class LatencyMode : public emlite::Val {
  explicit LatencyMode(Handle h) noexcept;
public:
   explicit LatencyMode(const emlite::Val &v) noexcept;
  static LatencyMode take_ownership(Handle h) noexcept;
    LatencyMode clone() const noexcept;
  static const LatencyMode quality;
  static const LatencyMode realtime;
};

class VideoEncoderBitrateMode : public emlite::Val {
  explicit VideoEncoderBitrateMode(Handle h) noexcept;
public:
   explicit VideoEncoderBitrateMode(const emlite::Val &v) noexcept;
  static VideoEncoderBitrateMode take_ownership(Handle h) noexcept;
    VideoEncoderBitrateMode clone() const noexcept;
  static const VideoEncoderBitrateMode constant;
  static const VideoEncoderBitrateMode variable;
  static const VideoEncoderBitrateMode quantizer;
};

class CodecState : public emlite::Val {
  explicit CodecState(Handle h) noexcept;
public:
   explicit CodecState(const emlite::Val &v) noexcept;
  static CodecState take_ownership(Handle h) noexcept;
    CodecState clone() const noexcept;
  static const CodecState unconfigured;
  static const CodecState configured;
  static const CodecState closed;
};

class EncodedAudioChunkType : public emlite::Val {
  explicit EncodedAudioChunkType(Handle h) noexcept;
public:
   explicit EncodedAudioChunkType(const emlite::Val &v) noexcept;
  static EncodedAudioChunkType take_ownership(Handle h) noexcept;
    EncodedAudioChunkType clone() const noexcept;
  static const EncodedAudioChunkType key;
  static const EncodedAudioChunkType delta;
};

class EncodedVideoChunkType : public emlite::Val {
  explicit EncodedVideoChunkType(Handle h) noexcept;
public:
   explicit EncodedVideoChunkType(const emlite::Val &v) noexcept;
  static EncodedVideoChunkType take_ownership(Handle h) noexcept;
    EncodedVideoChunkType clone() const noexcept;
  static const EncodedVideoChunkType key;
  static const EncodedVideoChunkType delta;
};

class AudioSampleFormat : public emlite::Val {
  explicit AudioSampleFormat(Handle h) noexcept;
public:
   explicit AudioSampleFormat(const emlite::Val &v) noexcept;
  static AudioSampleFormat take_ownership(Handle h) noexcept;
    AudioSampleFormat clone() const noexcept;
  static const AudioSampleFormat u8;
  static const AudioSampleFormat s16;
  static const AudioSampleFormat s32;
  static const AudioSampleFormat f32;
  static const AudioSampleFormat u8_planar;
  static const AudioSampleFormat s16_planar;
  static const AudioSampleFormat s32_planar;
  static const AudioSampleFormat f32_planar;
};

class VideoPixelFormat : public emlite::Val {
  explicit VideoPixelFormat(Handle h) noexcept;
public:
   explicit VideoPixelFormat(const emlite::Val &v) noexcept;
  static VideoPixelFormat take_ownership(Handle h) noexcept;
    VideoPixelFormat clone() const noexcept;
  static const VideoPixelFormat I420;
  static const VideoPixelFormat I420P10;
  static const VideoPixelFormat I420P12;
  static const VideoPixelFormat I420A;
  static const VideoPixelFormat I420AP10;
  static const VideoPixelFormat I420AP12;
  static const VideoPixelFormat I422;
  static const VideoPixelFormat I422P10;
  static const VideoPixelFormat I422P12;
  static const VideoPixelFormat I422A;
  static const VideoPixelFormat I422AP10;
  static const VideoPixelFormat I422AP12;
  static const VideoPixelFormat I444;
  static const VideoPixelFormat I444P10;
  static const VideoPixelFormat I444P12;
  static const VideoPixelFormat I444A;
  static const VideoPixelFormat I444AP10;
  static const VideoPixelFormat I444AP12;
  static const VideoPixelFormat NV12;
  static const VideoPixelFormat RGBA;
  static const VideoPixelFormat RGBX;
  static const VideoPixelFormat BGRA;
  static const VideoPixelFormat BGRX;
};

class VideoColorPrimaries : public emlite::Val {
  explicit VideoColorPrimaries(Handle h) noexcept;
public:
   explicit VideoColorPrimaries(const emlite::Val &v) noexcept;
  static VideoColorPrimaries take_ownership(Handle h) noexcept;
    VideoColorPrimaries clone() const noexcept;
  static const VideoColorPrimaries bt709;
  static const VideoColorPrimaries bt470bg;
  static const VideoColorPrimaries smpte170m;
  static const VideoColorPrimaries bt2020;
  static const VideoColorPrimaries smpte432;
};

class VideoTransferCharacteristics : public emlite::Val {
  explicit VideoTransferCharacteristics(Handle h) noexcept;
public:
   explicit VideoTransferCharacteristics(const emlite::Val &v) noexcept;
  static VideoTransferCharacteristics take_ownership(Handle h) noexcept;
    VideoTransferCharacteristics clone() const noexcept;
  static const VideoTransferCharacteristics bt709;
  static const VideoTransferCharacteristics smpte170m;
  static const VideoTransferCharacteristics iec61966_2_1;
  static const VideoTransferCharacteristics linear;
  static const VideoTransferCharacteristics pq;
  static const VideoTransferCharacteristics hlg;
};

class VideoMatrixCoefficients : public emlite::Val {
  explicit VideoMatrixCoefficients(Handle h) noexcept;
public:
   explicit VideoMatrixCoefficients(const emlite::Val &v) noexcept;
  static VideoMatrixCoefficients take_ownership(Handle h) noexcept;
    VideoMatrixCoefficients clone() const noexcept;
  static const VideoMatrixCoefficients rgb;
  static const VideoMatrixCoefficients bt709;
  static const VideoMatrixCoefficients bt470bg;
  static const VideoMatrixCoefficients smpte170m;
  static const VideoMatrixCoefficients bt2020_ncl;
};

class KeyType : public emlite::Val {
  explicit KeyType(Handle h) noexcept;
public:
   explicit KeyType(const emlite::Val &v) noexcept;
  static KeyType take_ownership(Handle h) noexcept;
    KeyType clone() const noexcept;
  static const KeyType public_;
  static const KeyType private_;
  static const KeyType secret;
};

class KeyUsage : public emlite::Val {
  explicit KeyUsage(Handle h) noexcept;
public:
   explicit KeyUsage(const emlite::Val &v) noexcept;
  static KeyUsage take_ownership(Handle h) noexcept;
    KeyUsage clone() const noexcept;
  static const KeyUsage encrypt;
  static const KeyUsage decrypt;
  static const KeyUsage sign;
  static const KeyUsage verify;
  static const KeyUsage deriveKey;
  static const KeyUsage deriveBits;
  static const KeyUsage wrapKey;
  static const KeyUsage unwrapKey;
};

class KeyFormat : public emlite::Val {
  explicit KeyFormat(Handle h) noexcept;
public:
   explicit KeyFormat(const emlite::Val &v) noexcept;
  static KeyFormat take_ownership(Handle h) noexcept;
    KeyFormat clone() const noexcept;
  static const KeyFormat raw;
  static const KeyFormat spki;
  static const KeyFormat pkcs8;
  static const KeyFormat jwk;
};

class WebGLPowerPreference : public emlite::Val {
  explicit WebGLPowerPreference(Handle h) noexcept;
public:
   explicit WebGLPowerPreference(const emlite::Val &v) noexcept;
  static WebGLPowerPreference take_ownership(Handle h) noexcept;
    WebGLPowerPreference clone() const noexcept;
  static const WebGLPowerPreference default_;
  static const WebGLPowerPreference low_power;
  static const WebGLPowerPreference high_performance;
};

class GPUPowerPreference : public emlite::Val {
  explicit GPUPowerPreference(Handle h) noexcept;
public:
   explicit GPUPowerPreference(const emlite::Val &v) noexcept;
  static GPUPowerPreference take_ownership(Handle h) noexcept;
    GPUPowerPreference clone() const noexcept;
  static const GPUPowerPreference low_power;
  static const GPUPowerPreference high_performance;
};

class GPUFeatureName : public emlite::Val {
  explicit GPUFeatureName(Handle h) noexcept;
public:
   explicit GPUFeatureName(const emlite::Val &v) noexcept;
  static GPUFeatureName take_ownership(Handle h) noexcept;
    GPUFeatureName clone() const noexcept;
  static const GPUFeatureName core_features_and_limits;
  static const GPUFeatureName depth_clip_control;
  static const GPUFeatureName depth32float_stencil8;
  static const GPUFeatureName texture_compression_bc;
  static const GPUFeatureName texture_compression_bc_sliced_3d;
  static const GPUFeatureName texture_compression_etc2;
  static const GPUFeatureName texture_compression_astc;
  static const GPUFeatureName texture_compression_astc_sliced_3d;
  static const GPUFeatureName timestamp_query;
  static const GPUFeatureName indirect_first_instance;
  static const GPUFeatureName shader_f16;
  static const GPUFeatureName rg11b10ufloat_renderable;
  static const GPUFeatureName bgra8unorm_storage;
  static const GPUFeatureName float32_filterable;
  static const GPUFeatureName float32_blendable;
  static const GPUFeatureName clip_distances;
  static const GPUFeatureName dual_source_blending;
  static const GPUFeatureName subgroups;
  static const GPUFeatureName texture_formats_tier1;
  static const GPUFeatureName texture_formats_tier2;
};

class GPUBufferMapState : public emlite::Val {
  explicit GPUBufferMapState(Handle h) noexcept;
public:
   explicit GPUBufferMapState(const emlite::Val &v) noexcept;
  static GPUBufferMapState take_ownership(Handle h) noexcept;
    GPUBufferMapState clone() const noexcept;
  static const GPUBufferMapState unmapped;
  static const GPUBufferMapState pending;
  static const GPUBufferMapState mapped;
};

class GPUTextureDimension : public emlite::Val {
  explicit GPUTextureDimension(Handle h) noexcept;
public:
   explicit GPUTextureDimension(const emlite::Val &v) noexcept;
  static GPUTextureDimension take_ownership(Handle h) noexcept;
    GPUTextureDimension clone() const noexcept;
  static const GPUTextureDimension _1d;
  static const GPUTextureDimension _2d;
  static const GPUTextureDimension _3d;
};

class GPUTextureViewDimension : public emlite::Val {
  explicit GPUTextureViewDimension(Handle h) noexcept;
public:
   explicit GPUTextureViewDimension(const emlite::Val &v) noexcept;
  static GPUTextureViewDimension take_ownership(Handle h) noexcept;
    GPUTextureViewDimension clone() const noexcept;
  static const GPUTextureViewDimension _1d;
  static const GPUTextureViewDimension _2d;
  static const GPUTextureViewDimension _2d_array;
  static const GPUTextureViewDimension cube;
  static const GPUTextureViewDimension cube_array;
  static const GPUTextureViewDimension _3d;
};

class GPUTextureAspect : public emlite::Val {
  explicit GPUTextureAspect(Handle h) noexcept;
public:
   explicit GPUTextureAspect(const emlite::Val &v) noexcept;
  static GPUTextureAspect take_ownership(Handle h) noexcept;
    GPUTextureAspect clone() const noexcept;
  static const GPUTextureAspect all;
  static const GPUTextureAspect stencil_only;
  static const GPUTextureAspect depth_only;
};

class GPUTextureFormat : public emlite::Val {
  explicit GPUTextureFormat(Handle h) noexcept;
public:
   explicit GPUTextureFormat(const emlite::Val &v) noexcept;
  static GPUTextureFormat take_ownership(Handle h) noexcept;
    GPUTextureFormat clone() const noexcept;
  static const GPUTextureFormat r8unorm;
  static const GPUTextureFormat r8snorm;
  static const GPUTextureFormat r8uint;
  static const GPUTextureFormat r8sint;
  static const GPUTextureFormat r16unorm;
  static const GPUTextureFormat r16snorm;
  static const GPUTextureFormat r16uint;
  static const GPUTextureFormat r16sint;
  static const GPUTextureFormat r16float;
  static const GPUTextureFormat rg8unorm;
  static const GPUTextureFormat rg8snorm;
  static const GPUTextureFormat rg8uint;
  static const GPUTextureFormat rg8sint;
  static const GPUTextureFormat r32uint;
  static const GPUTextureFormat r32sint;
  static const GPUTextureFormat r32float;
  static const GPUTextureFormat rg16unorm;
  static const GPUTextureFormat rg16snorm;
  static const GPUTextureFormat rg16uint;
  static const GPUTextureFormat rg16sint;
  static const GPUTextureFormat rg16float;
  static const GPUTextureFormat rgba8unorm;
  static const GPUTextureFormat rgba8unorm_srgb;
  static const GPUTextureFormat rgba8snorm;
  static const GPUTextureFormat rgba8uint;
  static const GPUTextureFormat rgba8sint;
  static const GPUTextureFormat bgra8unorm;
  static const GPUTextureFormat bgra8unorm_srgb;
  static const GPUTextureFormat rgb9e5ufloat;
  static const GPUTextureFormat rgb10a2uint;
  static const GPUTextureFormat rgb10a2unorm;
  static const GPUTextureFormat rg11b10ufloat;
  static const GPUTextureFormat rg32uint;
  static const GPUTextureFormat rg32sint;
  static const GPUTextureFormat rg32float;
  static const GPUTextureFormat rgba16unorm;
  static const GPUTextureFormat rgba16snorm;
  static const GPUTextureFormat rgba16uint;
  static const GPUTextureFormat rgba16sint;
  static const GPUTextureFormat rgba16float;
  static const GPUTextureFormat rgba32uint;
  static const GPUTextureFormat rgba32sint;
  static const GPUTextureFormat rgba32float;
  static const GPUTextureFormat stencil8;
  static const GPUTextureFormat depth16unorm;
  static const GPUTextureFormat depth24plus;
  static const GPUTextureFormat depth24plus_stencil8;
  static const GPUTextureFormat depth32float;
  static const GPUTextureFormat depth32float_stencil8;
  static const GPUTextureFormat bc1_rgba_unorm;
  static const GPUTextureFormat bc1_rgba_unorm_srgb;
  static const GPUTextureFormat bc2_rgba_unorm;
  static const GPUTextureFormat bc2_rgba_unorm_srgb;
  static const GPUTextureFormat bc3_rgba_unorm;
  static const GPUTextureFormat bc3_rgba_unorm_srgb;
  static const GPUTextureFormat bc4_r_unorm;
  static const GPUTextureFormat bc4_r_snorm;
  static const GPUTextureFormat bc5_rg_unorm;
  static const GPUTextureFormat bc5_rg_snorm;
  static const GPUTextureFormat bc6h_rgb_ufloat;
  static const GPUTextureFormat bc6h_rgb_float;
  static const GPUTextureFormat bc7_rgba_unorm;
  static const GPUTextureFormat bc7_rgba_unorm_srgb;
  static const GPUTextureFormat etc2_rgb8unorm;
  static const GPUTextureFormat etc2_rgb8unorm_srgb;
  static const GPUTextureFormat etc2_rgb8a1unorm;
  static const GPUTextureFormat etc2_rgb8a1unorm_srgb;
  static const GPUTextureFormat etc2_rgba8unorm;
  static const GPUTextureFormat etc2_rgba8unorm_srgb;
  static const GPUTextureFormat eac_r11unorm;
  static const GPUTextureFormat eac_r11snorm;
  static const GPUTextureFormat eac_rg11unorm;
  static const GPUTextureFormat eac_rg11snorm;
  static const GPUTextureFormat astc_4x4_unorm;
  static const GPUTextureFormat astc_4x4_unorm_srgb;
  static const GPUTextureFormat astc_5x4_unorm;
  static const GPUTextureFormat astc_5x4_unorm_srgb;
  static const GPUTextureFormat astc_5x5_unorm;
  static const GPUTextureFormat astc_5x5_unorm_srgb;
  static const GPUTextureFormat astc_6x5_unorm;
  static const GPUTextureFormat astc_6x5_unorm_srgb;
  static const GPUTextureFormat astc_6x6_unorm;
  static const GPUTextureFormat astc_6x6_unorm_srgb;
  static const GPUTextureFormat astc_8x5_unorm;
  static const GPUTextureFormat astc_8x5_unorm_srgb;
  static const GPUTextureFormat astc_8x6_unorm;
  static const GPUTextureFormat astc_8x6_unorm_srgb;
  static const GPUTextureFormat astc_8x8_unorm;
  static const GPUTextureFormat astc_8x8_unorm_srgb;
  static const GPUTextureFormat astc_10x5_unorm;
  static const GPUTextureFormat astc_10x5_unorm_srgb;
  static const GPUTextureFormat astc_10x6_unorm;
  static const GPUTextureFormat astc_10x6_unorm_srgb;
  static const GPUTextureFormat astc_10x8_unorm;
  static const GPUTextureFormat astc_10x8_unorm_srgb;
  static const GPUTextureFormat astc_10x10_unorm;
  static const GPUTextureFormat astc_10x10_unorm_srgb;
  static const GPUTextureFormat astc_12x10_unorm;
  static const GPUTextureFormat astc_12x10_unorm_srgb;
  static const GPUTextureFormat astc_12x12_unorm;
  static const GPUTextureFormat astc_12x12_unorm_srgb;
};

class GPUAddressMode : public emlite::Val {
  explicit GPUAddressMode(Handle h) noexcept;
public:
   explicit GPUAddressMode(const emlite::Val &v) noexcept;
  static GPUAddressMode take_ownership(Handle h) noexcept;
    GPUAddressMode clone() const noexcept;
  static const GPUAddressMode clamp_to_edge;
  static const GPUAddressMode repeat;
  static const GPUAddressMode mirror_repeat;
};

class GPUFilterMode : public emlite::Val {
  explicit GPUFilterMode(Handle h) noexcept;
public:
   explicit GPUFilterMode(const emlite::Val &v) noexcept;
  static GPUFilterMode take_ownership(Handle h) noexcept;
    GPUFilterMode clone() const noexcept;
  static const GPUFilterMode nearest;
  static const GPUFilterMode linear;
};

class GPUMipmapFilterMode : public emlite::Val {
  explicit GPUMipmapFilterMode(Handle h) noexcept;
public:
   explicit GPUMipmapFilterMode(const emlite::Val &v) noexcept;
  static GPUMipmapFilterMode take_ownership(Handle h) noexcept;
    GPUMipmapFilterMode clone() const noexcept;
  static const GPUMipmapFilterMode nearest;
  static const GPUMipmapFilterMode linear;
};

class GPUCompareFunction : public emlite::Val {
  explicit GPUCompareFunction(Handle h) noexcept;
public:
   explicit GPUCompareFunction(const emlite::Val &v) noexcept;
  static GPUCompareFunction take_ownership(Handle h) noexcept;
    GPUCompareFunction clone() const noexcept;
  static const GPUCompareFunction never;
  static const GPUCompareFunction less;
  static const GPUCompareFunction equal;
  static const GPUCompareFunction less_equal;
  static const GPUCompareFunction greater;
  static const GPUCompareFunction not_equal;
  static const GPUCompareFunction greater_equal;
  static const GPUCompareFunction always;
};

class GPUBufferBindingType : public emlite::Val {
  explicit GPUBufferBindingType(Handle h) noexcept;
public:
   explicit GPUBufferBindingType(const emlite::Val &v) noexcept;
  static GPUBufferBindingType take_ownership(Handle h) noexcept;
    GPUBufferBindingType clone() const noexcept;
  static const GPUBufferBindingType uniform;
  static const GPUBufferBindingType storage;
  static const GPUBufferBindingType read_only_storage;
};

class GPUSamplerBindingType : public emlite::Val {
  explicit GPUSamplerBindingType(Handle h) noexcept;
public:
   explicit GPUSamplerBindingType(const emlite::Val &v) noexcept;
  static GPUSamplerBindingType take_ownership(Handle h) noexcept;
    GPUSamplerBindingType clone() const noexcept;
  static const GPUSamplerBindingType filtering;
  static const GPUSamplerBindingType non_filtering;
  static const GPUSamplerBindingType comparison;
};

class GPUTextureSampleType : public emlite::Val {
  explicit GPUTextureSampleType(Handle h) noexcept;
public:
   explicit GPUTextureSampleType(const emlite::Val &v) noexcept;
  static GPUTextureSampleType take_ownership(Handle h) noexcept;
    GPUTextureSampleType clone() const noexcept;
  static const GPUTextureSampleType float_;
  static const GPUTextureSampleType unfilterable_float;
  static const GPUTextureSampleType depth;
  static const GPUTextureSampleType sint;
  static const GPUTextureSampleType uint;
};

class GPUStorageTextureAccess : public emlite::Val {
  explicit GPUStorageTextureAccess(Handle h) noexcept;
public:
   explicit GPUStorageTextureAccess(const emlite::Val &v) noexcept;
  static GPUStorageTextureAccess take_ownership(Handle h) noexcept;
    GPUStorageTextureAccess clone() const noexcept;
  static const GPUStorageTextureAccess write_only;
  static const GPUStorageTextureAccess read_only;
  static const GPUStorageTextureAccess read_write;
};

class GPUCompilationMessageType : public emlite::Val {
  explicit GPUCompilationMessageType(Handle h) noexcept;
public:
   explicit GPUCompilationMessageType(const emlite::Val &v) noexcept;
  static GPUCompilationMessageType take_ownership(Handle h) noexcept;
    GPUCompilationMessageType clone() const noexcept;
  static const GPUCompilationMessageType error;
  static const GPUCompilationMessageType warning;
  static const GPUCompilationMessageType info;
};

class GPUPipelineErrorReason : public emlite::Val {
  explicit GPUPipelineErrorReason(Handle h) noexcept;
public:
   explicit GPUPipelineErrorReason(const emlite::Val &v) noexcept;
  static GPUPipelineErrorReason take_ownership(Handle h) noexcept;
    GPUPipelineErrorReason clone() const noexcept;
  static const GPUPipelineErrorReason validation;
  static const GPUPipelineErrorReason internal;
};

class GPUAutoLayoutMode : public emlite::Val {
  explicit GPUAutoLayoutMode(Handle h) noexcept;
public:
   explicit GPUAutoLayoutMode(const emlite::Val &v) noexcept;
  static GPUAutoLayoutMode take_ownership(Handle h) noexcept;
    GPUAutoLayoutMode clone() const noexcept;
  static const GPUAutoLayoutMode auto_;
};

class GPUPrimitiveTopology : public emlite::Val {
  explicit GPUPrimitiveTopology(Handle h) noexcept;
public:
   explicit GPUPrimitiveTopology(const emlite::Val &v) noexcept;
  static GPUPrimitiveTopology take_ownership(Handle h) noexcept;
    GPUPrimitiveTopology clone() const noexcept;
  static const GPUPrimitiveTopology point_list;
  static const GPUPrimitiveTopology line_list;
  static const GPUPrimitiveTopology line_strip;
  static const GPUPrimitiveTopology triangle_list;
  static const GPUPrimitiveTopology triangle_strip;
};

class GPUFrontFace : public emlite::Val {
  explicit GPUFrontFace(Handle h) noexcept;
public:
   explicit GPUFrontFace(const emlite::Val &v) noexcept;
  static GPUFrontFace take_ownership(Handle h) noexcept;
    GPUFrontFace clone() const noexcept;
  static const GPUFrontFace ccw;
  static const GPUFrontFace cw;
};

class GPUCullMode : public emlite::Val {
  explicit GPUCullMode(Handle h) noexcept;
public:
   explicit GPUCullMode(const emlite::Val &v) noexcept;
  static GPUCullMode take_ownership(Handle h) noexcept;
    GPUCullMode clone() const noexcept;
  static const GPUCullMode none;
  static const GPUCullMode front;
  static const GPUCullMode back;
};

class GPUBlendFactor : public emlite::Val {
  explicit GPUBlendFactor(Handle h) noexcept;
public:
   explicit GPUBlendFactor(const emlite::Val &v) noexcept;
  static GPUBlendFactor take_ownership(Handle h) noexcept;
    GPUBlendFactor clone() const noexcept;
  static const GPUBlendFactor zero;
  static const GPUBlendFactor one;
  static const GPUBlendFactor src;
  static const GPUBlendFactor one_minus_src;
  static const GPUBlendFactor src_alpha;
  static const GPUBlendFactor one_minus_src_alpha;
  static const GPUBlendFactor dst;
  static const GPUBlendFactor one_minus_dst;
  static const GPUBlendFactor dst_alpha;
  static const GPUBlendFactor one_minus_dst_alpha;
  static const GPUBlendFactor src_alpha_saturated;
  static const GPUBlendFactor constant;
  static const GPUBlendFactor one_minus_constant;
  static const GPUBlendFactor src1;
  static const GPUBlendFactor one_minus_src1;
  static const GPUBlendFactor src1_alpha;
  static const GPUBlendFactor one_minus_src1_alpha;
};

class GPUBlendOperation : public emlite::Val {
  explicit GPUBlendOperation(Handle h) noexcept;
public:
   explicit GPUBlendOperation(const emlite::Val &v) noexcept;
  static GPUBlendOperation take_ownership(Handle h) noexcept;
    GPUBlendOperation clone() const noexcept;
  static const GPUBlendOperation add;
  static const GPUBlendOperation subtract;
  static const GPUBlendOperation reverse_subtract;
  static const GPUBlendOperation min;
  static const GPUBlendOperation max;
};

class GPUStencilOperation : public emlite::Val {
  explicit GPUStencilOperation(Handle h) noexcept;
public:
   explicit GPUStencilOperation(const emlite::Val &v) noexcept;
  static GPUStencilOperation take_ownership(Handle h) noexcept;
    GPUStencilOperation clone() const noexcept;
  static const GPUStencilOperation keep;
  static const GPUStencilOperation zero;
  static const GPUStencilOperation replace;
  static const GPUStencilOperation invert;
  static const GPUStencilOperation increment_clamp;
  static const GPUStencilOperation decrement_clamp;
  static const GPUStencilOperation increment_wrap;
  static const GPUStencilOperation decrement_wrap;
};

class GPUIndexFormat : public emlite::Val {
  explicit GPUIndexFormat(Handle h) noexcept;
public:
   explicit GPUIndexFormat(const emlite::Val &v) noexcept;
  static GPUIndexFormat take_ownership(Handle h) noexcept;
    GPUIndexFormat clone() const noexcept;
  static const GPUIndexFormat uint16;
  static const GPUIndexFormat uint32;
};

class GPUVertexFormat : public emlite::Val {
  explicit GPUVertexFormat(Handle h) noexcept;
public:
   explicit GPUVertexFormat(const emlite::Val &v) noexcept;
  static GPUVertexFormat take_ownership(Handle h) noexcept;
    GPUVertexFormat clone() const noexcept;
  static const GPUVertexFormat uint8;
  static const GPUVertexFormat uint8x2;
  static const GPUVertexFormat uint8x4;
  static const GPUVertexFormat sint8;
  static const GPUVertexFormat sint8x2;
  static const GPUVertexFormat sint8x4;
  static const GPUVertexFormat unorm8;
  static const GPUVertexFormat unorm8x2;
  static const GPUVertexFormat unorm8x4;
  static const GPUVertexFormat snorm8;
  static const GPUVertexFormat snorm8x2;
  static const GPUVertexFormat snorm8x4;
  static const GPUVertexFormat uint16;
  static const GPUVertexFormat uint16x2;
  static const GPUVertexFormat uint16x4;
  static const GPUVertexFormat sint16;
  static const GPUVertexFormat sint16x2;
  static const GPUVertexFormat sint16x4;
  static const GPUVertexFormat unorm16;
  static const GPUVertexFormat unorm16x2;
  static const GPUVertexFormat unorm16x4;
  static const GPUVertexFormat snorm16;
  static const GPUVertexFormat snorm16x2;
  static const GPUVertexFormat snorm16x4;
  static const GPUVertexFormat float16;
  static const GPUVertexFormat float16x2;
  static const GPUVertexFormat float16x4;
  static const GPUVertexFormat float32;
  static const GPUVertexFormat float32x2;
  static const GPUVertexFormat float32x3;
  static const GPUVertexFormat float32x4;
  static const GPUVertexFormat uint32;
  static const GPUVertexFormat uint32x2;
  static const GPUVertexFormat uint32x3;
  static const GPUVertexFormat uint32x4;
  static const GPUVertexFormat sint32;
  static const GPUVertexFormat sint32x2;
  static const GPUVertexFormat sint32x3;
  static const GPUVertexFormat sint32x4;
  static const GPUVertexFormat unorm10_10_10_2;
  static const GPUVertexFormat unorm8x4_bgra;
};

class GPUVertexStepMode : public emlite::Val {
  explicit GPUVertexStepMode(Handle h) noexcept;
public:
   explicit GPUVertexStepMode(const emlite::Val &v) noexcept;
  static GPUVertexStepMode take_ownership(Handle h) noexcept;
    GPUVertexStepMode clone() const noexcept;
  static const GPUVertexStepMode vertex;
  static const GPUVertexStepMode instance;
};

class GPULoadOp : public emlite::Val {
  explicit GPULoadOp(Handle h) noexcept;
public:
   explicit GPULoadOp(const emlite::Val &v) noexcept;
  static GPULoadOp take_ownership(Handle h) noexcept;
    GPULoadOp clone() const noexcept;
  static const GPULoadOp load;
  static const GPULoadOp clear;
};

class GPUStoreOp : public emlite::Val {
  explicit GPUStoreOp(Handle h) noexcept;
public:
   explicit GPUStoreOp(const emlite::Val &v) noexcept;
  static GPUStoreOp take_ownership(Handle h) noexcept;
    GPUStoreOp clone() const noexcept;
  static const GPUStoreOp store;
  static const GPUStoreOp discard;
};

class GPUQueryType : public emlite::Val {
  explicit GPUQueryType(Handle h) noexcept;
public:
   explicit GPUQueryType(const emlite::Val &v) noexcept;
  static GPUQueryType take_ownership(Handle h) noexcept;
    GPUQueryType clone() const noexcept;
  static const GPUQueryType occlusion;
  static const GPUQueryType timestamp;
};

class GPUCanvasAlphaMode : public emlite::Val {
  explicit GPUCanvasAlphaMode(Handle h) noexcept;
public:
   explicit GPUCanvasAlphaMode(const emlite::Val &v) noexcept;
  static GPUCanvasAlphaMode take_ownership(Handle h) noexcept;
    GPUCanvasAlphaMode clone() const noexcept;
  static const GPUCanvasAlphaMode opaque;
  static const GPUCanvasAlphaMode premultiplied;
};

class GPUCanvasToneMappingMode : public emlite::Val {
  explicit GPUCanvasToneMappingMode(Handle h) noexcept;
public:
   explicit GPUCanvasToneMappingMode(const emlite::Val &v) noexcept;
  static GPUCanvasToneMappingMode take_ownership(Handle h) noexcept;
    GPUCanvasToneMappingMode clone() const noexcept;
  static const GPUCanvasToneMappingMode standard;
  static const GPUCanvasToneMappingMode extended;
};

class GPUDeviceLostReason : public emlite::Val {
  explicit GPUDeviceLostReason(Handle h) noexcept;
public:
   explicit GPUDeviceLostReason(const emlite::Val &v) noexcept;
  static GPUDeviceLostReason take_ownership(Handle h) noexcept;
    GPUDeviceLostReason clone() const noexcept;
  static const GPUDeviceLostReason unknown;
  static const GPUDeviceLostReason destroyed;
};

class GPUErrorFilter : public emlite::Val {
  explicit GPUErrorFilter(Handle h) noexcept;
public:
   explicit GPUErrorFilter(const emlite::Val &v) noexcept;
  static GPUErrorFilter take_ownership(Handle h) noexcept;
    GPUErrorFilter clone() const noexcept;
  static const GPUErrorFilter validation;
  static const GPUErrorFilter out_of_memory;
  static const GPUErrorFilter internal;
};

class HIDUnitSystem : public emlite::Val {
  explicit HIDUnitSystem(Handle h) noexcept;
public:
   explicit HIDUnitSystem(const emlite::Val &v) noexcept;
  static HIDUnitSystem take_ownership(Handle h) noexcept;
    HIDUnitSystem clone() const noexcept;
  static const HIDUnitSystem none;
  static const HIDUnitSystem si_linear;
  static const HIDUnitSystem si_rotation;
  static const HIDUnitSystem english_linear;
  static const HIDUnitSystem english_rotation;
  static const HIDUnitSystem vendor_defined;
  static const HIDUnitSystem reserved;
};

class MIDIPortType : public emlite::Val {
  explicit MIDIPortType(Handle h) noexcept;
public:
   explicit MIDIPortType(const emlite::Val &v) noexcept;
  static MIDIPortType take_ownership(Handle h) noexcept;
    MIDIPortType clone() const noexcept;
  static const MIDIPortType input;
  static const MIDIPortType output;
};

class MIDIPortDeviceState : public emlite::Val {
  explicit MIDIPortDeviceState(Handle h) noexcept;
public:
   explicit MIDIPortDeviceState(const emlite::Val &v) noexcept;
  static MIDIPortDeviceState take_ownership(Handle h) noexcept;
    MIDIPortDeviceState clone() const noexcept;
  static const MIDIPortDeviceState disconnected;
  static const MIDIPortDeviceState connected;
};

class MIDIPortConnectionState : public emlite::Val {
  explicit MIDIPortConnectionState(Handle h) noexcept;
public:
   explicit MIDIPortConnectionState(const emlite::Val &v) noexcept;
  static MIDIPortConnectionState take_ownership(Handle h) noexcept;
    MIDIPortConnectionState clone() const noexcept;
  static const MIDIPortConnectionState open;
  static const MIDIPortConnectionState closed;
  static const MIDIPortConnectionState pending;
};

class MLPowerPreference : public emlite::Val {
  explicit MLPowerPreference(Handle h) noexcept;
public:
   explicit MLPowerPreference(const emlite::Val &v) noexcept;
  static MLPowerPreference take_ownership(Handle h) noexcept;
    MLPowerPreference clone() const noexcept;
  static const MLPowerPreference default_;
  static const MLPowerPreference high_performance;
  static const MLPowerPreference low_power;
};

class MLInputOperandLayout : public emlite::Val {
  explicit MLInputOperandLayout(Handle h) noexcept;
public:
   explicit MLInputOperandLayout(const emlite::Val &v) noexcept;
  static MLInputOperandLayout take_ownership(Handle h) noexcept;
    MLInputOperandLayout clone() const noexcept;
  static const MLInputOperandLayout nchw;
  static const MLInputOperandLayout nhwc;
};

class MLOperandDataType : public emlite::Val {
  explicit MLOperandDataType(Handle h) noexcept;
public:
   explicit MLOperandDataType(const emlite::Val &v) noexcept;
  static MLOperandDataType take_ownership(Handle h) noexcept;
    MLOperandDataType clone() const noexcept;
  static const MLOperandDataType float32;
  static const MLOperandDataType float16;
  static const MLOperandDataType int32;
  static const MLOperandDataType uint32;
  static const MLOperandDataType int64;
  static const MLOperandDataType uint64;
  static const MLOperandDataType int8;
  static const MLOperandDataType uint8;
};

class MLConv2dFilterOperandLayout : public emlite::Val {
  explicit MLConv2dFilterOperandLayout(Handle h) noexcept;
public:
   explicit MLConv2dFilterOperandLayout(const emlite::Val &v) noexcept;
  static MLConv2dFilterOperandLayout take_ownership(Handle h) noexcept;
    MLConv2dFilterOperandLayout clone() const noexcept;
  static const MLConv2dFilterOperandLayout oihw;
  static const MLConv2dFilterOperandLayout hwio;
  static const MLConv2dFilterOperandLayout ohwi;
  static const MLConv2dFilterOperandLayout ihwo;
};

class MLConvTranspose2dFilterOperandLayout : public emlite::Val {
  explicit MLConvTranspose2dFilterOperandLayout(Handle h) noexcept;
public:
   explicit MLConvTranspose2dFilterOperandLayout(const emlite::Val &v) noexcept;
  static MLConvTranspose2dFilterOperandLayout take_ownership(Handle h) noexcept;
    MLConvTranspose2dFilterOperandLayout clone() const noexcept;
  static const MLConvTranspose2dFilterOperandLayout iohw;
  static const MLConvTranspose2dFilterOperandLayout hwoi;
  static const MLConvTranspose2dFilterOperandLayout ohwi;
};

class MLGruWeightLayout : public emlite::Val {
  explicit MLGruWeightLayout(Handle h) noexcept;
public:
   explicit MLGruWeightLayout(const emlite::Val &v) noexcept;
  static MLGruWeightLayout take_ownership(Handle h) noexcept;
    MLGruWeightLayout clone() const noexcept;
  static const MLGruWeightLayout zrn;
  static const MLGruWeightLayout rzn;
};

class MLRecurrentNetworkActivation : public emlite::Val {
  explicit MLRecurrentNetworkActivation(Handle h) noexcept;
public:
   explicit MLRecurrentNetworkActivation(const emlite::Val &v) noexcept;
  static MLRecurrentNetworkActivation take_ownership(Handle h) noexcept;
    MLRecurrentNetworkActivation clone() const noexcept;
  static const MLRecurrentNetworkActivation relu;
  static const MLRecurrentNetworkActivation sigmoid;
  static const MLRecurrentNetworkActivation tanh;
};

class MLRecurrentNetworkDirection : public emlite::Val {
  explicit MLRecurrentNetworkDirection(Handle h) noexcept;
public:
   explicit MLRecurrentNetworkDirection(const emlite::Val &v) noexcept;
  static MLRecurrentNetworkDirection take_ownership(Handle h) noexcept;
    MLRecurrentNetworkDirection clone() const noexcept;
  static const MLRecurrentNetworkDirection forward;
  static const MLRecurrentNetworkDirection backward;
  static const MLRecurrentNetworkDirection both;
};

class MLLstmWeightLayout : public emlite::Val {
  explicit MLLstmWeightLayout(Handle h) noexcept;
public:
   explicit MLLstmWeightLayout(const emlite::Val &v) noexcept;
  static MLLstmWeightLayout take_ownership(Handle h) noexcept;
    MLLstmWeightLayout clone() const noexcept;
  static const MLLstmWeightLayout iofg;
  static const MLLstmWeightLayout ifgo;
};

class MLPaddingMode : public emlite::Val {
  explicit MLPaddingMode(Handle h) noexcept;
public:
   explicit MLPaddingMode(const emlite::Val &v) noexcept;
  static MLPaddingMode take_ownership(Handle h) noexcept;
    MLPaddingMode clone() const noexcept;
  static const MLPaddingMode constant;
  static const MLPaddingMode edge;
  static const MLPaddingMode reflection;
};

class MLRoundingType : public emlite::Val {
  explicit MLRoundingType(Handle h) noexcept;
public:
   explicit MLRoundingType(const emlite::Val &v) noexcept;
  static MLRoundingType take_ownership(Handle h) noexcept;
    MLRoundingType clone() const noexcept;
  static const MLRoundingType floor;
  static const MLRoundingType ceil;
};

class MLInterpolationMode : public emlite::Val {
  explicit MLInterpolationMode(Handle h) noexcept;
public:
   explicit MLInterpolationMode(const emlite::Val &v) noexcept;
  static MLInterpolationMode take_ownership(Handle h) noexcept;
    MLInterpolationMode clone() const noexcept;
  static const MLInterpolationMode nearest_neighbor;
  static const MLInterpolationMode linear;
};

class SFrameTransformRole : public emlite::Val {
  explicit SFrameTransformRole(Handle h) noexcept;
public:
   explicit SFrameTransformRole(const emlite::Val &v) noexcept;
  static SFrameTransformRole take_ownership(Handle h) noexcept;
    SFrameTransformRole clone() const noexcept;
  static const SFrameTransformRole encrypt;
  static const SFrameTransformRole decrypt;
};

class SFrameTransformErrorEventType : public emlite::Val {
  explicit SFrameTransformErrorEventType(Handle h) noexcept;
public:
   explicit SFrameTransformErrorEventType(const emlite::Val &v) noexcept;
  static SFrameTransformErrorEventType take_ownership(Handle h) noexcept;
    SFrameTransformErrorEventType clone() const noexcept;
  static const SFrameTransformErrorEventType authentication;
  static const SFrameTransformErrorEventType keyID;
  static const SFrameTransformErrorEventType syntax;
};

class RTCEncodedVideoFrameType : public emlite::Val {
  explicit RTCEncodedVideoFrameType(Handle h) noexcept;
public:
   explicit RTCEncodedVideoFrameType(const emlite::Val &v) noexcept;
  static RTCEncodedVideoFrameType take_ownership(Handle h) noexcept;
    RTCEncodedVideoFrameType clone() const noexcept;
  static const RTCEncodedVideoFrameType empty;
  static const RTCEncodedVideoFrameType key;
  static const RTCEncodedVideoFrameType delta;
};

class RTCErrorDetailTypeIdp : public emlite::Val {
  explicit RTCErrorDetailTypeIdp(Handle h) noexcept;
public:
   explicit RTCErrorDetailTypeIdp(const emlite::Val &v) noexcept;
  static RTCErrorDetailTypeIdp take_ownership(Handle h) noexcept;
    RTCErrorDetailTypeIdp clone() const noexcept;
  static const RTCErrorDetailTypeIdp idp_bad_script_failure;
  static const RTCErrorDetailTypeIdp idp_execution_failure;
  static const RTCErrorDetailTypeIdp idp_load_failure;
  static const RTCErrorDetailTypeIdp idp_need_login;
  static const RTCErrorDetailTypeIdp idp_timeout;
  static const RTCErrorDetailTypeIdp idp_tls_failure;
  static const RTCErrorDetailTypeIdp idp_token_expired;
  static const RTCErrorDetailTypeIdp idp_token_invalid;
};

class RTCPriorityType : public emlite::Val {
  explicit RTCPriorityType(Handle h) noexcept;
public:
   explicit RTCPriorityType(const emlite::Val &v) noexcept;
  static RTCPriorityType take_ownership(Handle h) noexcept;
    RTCPriorityType clone() const noexcept;
  static const RTCPriorityType very_low;
  static const RTCPriorityType low;
  static const RTCPriorityType medium;
  static const RTCPriorityType high;
};

class RTCStatsType : public emlite::Val {
  explicit RTCStatsType(Handle h) noexcept;
public:
   explicit RTCStatsType(const emlite::Val &v) noexcept;
  static RTCStatsType take_ownership(Handle h) noexcept;
    RTCStatsType clone() const noexcept;
  static const RTCStatsType codec;
  static const RTCStatsType inbound_rtp;
  static const RTCStatsType outbound_rtp;
  static const RTCStatsType remote_inbound_rtp;
  static const RTCStatsType remote_outbound_rtp;
  static const RTCStatsType media_source;
  static const RTCStatsType media_playout;
  static const RTCStatsType peer_connection;
  static const RTCStatsType data_channel;
  static const RTCStatsType transport;
  static const RTCStatsType candidate_pair;
  static const RTCStatsType local_candidate;
  static const RTCStatsType remote_candidate;
  static const RTCStatsType certificate;
};

class RTCQualityLimitationReason : public emlite::Val {
  explicit RTCQualityLimitationReason(Handle h) noexcept;
public:
   explicit RTCQualityLimitationReason(const emlite::Val &v) noexcept;
  static RTCQualityLimitationReason take_ownership(Handle h) noexcept;
    RTCQualityLimitationReason clone() const noexcept;
  static const RTCQualityLimitationReason none;
  static const RTCQualityLimitationReason cpu;
  static const RTCQualityLimitationReason bandwidth;
  static const RTCQualityLimitationReason other;
};

class RTCDtlsRole : public emlite::Val {
  explicit RTCDtlsRole(Handle h) noexcept;
public:
   explicit RTCDtlsRole(const emlite::Val &v) noexcept;
  static RTCDtlsRole take_ownership(Handle h) noexcept;
    RTCDtlsRole clone() const noexcept;
  static const RTCDtlsRole client;
  static const RTCDtlsRole server;
  static const RTCDtlsRole unknown;
};

class RTCStatsIceCandidatePairState : public emlite::Val {
  explicit RTCStatsIceCandidatePairState(Handle h) noexcept;
public:
   explicit RTCStatsIceCandidatePairState(const emlite::Val &v) noexcept;
  static RTCStatsIceCandidatePairState take_ownership(Handle h) noexcept;
    RTCStatsIceCandidatePairState clone() const noexcept;
  static const RTCStatsIceCandidatePairState frozen;
  static const RTCStatsIceCandidatePairState waiting;
  static const RTCStatsIceCandidatePairState in_progress;
  static const RTCStatsIceCandidatePairState failed;
  static const RTCStatsIceCandidatePairState succeeded;
};

class RTCIceTransportPolicy : public emlite::Val {
  explicit RTCIceTransportPolicy(Handle h) noexcept;
public:
   explicit RTCIceTransportPolicy(const emlite::Val &v) noexcept;
  static RTCIceTransportPolicy take_ownership(Handle h) noexcept;
    RTCIceTransportPolicy clone() const noexcept;
  static const RTCIceTransportPolicy relay;
  static const RTCIceTransportPolicy all;
};

class RTCBundlePolicy : public emlite::Val {
  explicit RTCBundlePolicy(Handle h) noexcept;
public:
   explicit RTCBundlePolicy(const emlite::Val &v) noexcept;
  static RTCBundlePolicy take_ownership(Handle h) noexcept;
    RTCBundlePolicy clone() const noexcept;
  static const RTCBundlePolicy balanced;
  static const RTCBundlePolicy max_compat;
  static const RTCBundlePolicy max_bundle;
};

class RTCRtcpMuxPolicy : public emlite::Val {
  explicit RTCRtcpMuxPolicy(Handle h) noexcept;
public:
   explicit RTCRtcpMuxPolicy(const emlite::Val &v) noexcept;
  static RTCRtcpMuxPolicy take_ownership(Handle h) noexcept;
    RTCRtcpMuxPolicy clone() const noexcept;
  static const RTCRtcpMuxPolicy require;
};

class RTCSignalingState : public emlite::Val {
  explicit RTCSignalingState(Handle h) noexcept;
public:
   explicit RTCSignalingState(const emlite::Val &v) noexcept;
  static RTCSignalingState take_ownership(Handle h) noexcept;
    RTCSignalingState clone() const noexcept;
  static const RTCSignalingState stable;
  static const RTCSignalingState have_local_offer;
  static const RTCSignalingState have_remote_offer;
  static const RTCSignalingState have_local_pranswer;
  static const RTCSignalingState have_remote_pranswer;
  static const RTCSignalingState closed;
};

class RTCIceGatheringState : public emlite::Val {
  explicit RTCIceGatheringState(Handle h) noexcept;
public:
   explicit RTCIceGatheringState(const emlite::Val &v) noexcept;
  static RTCIceGatheringState take_ownership(Handle h) noexcept;
    RTCIceGatheringState clone() const noexcept;
  static const RTCIceGatheringState new_;
  static const RTCIceGatheringState gathering;
  static const RTCIceGatheringState complete;
};

class RTCPeerConnectionState : public emlite::Val {
  explicit RTCPeerConnectionState(Handle h) noexcept;
public:
   explicit RTCPeerConnectionState(const emlite::Val &v) noexcept;
  static RTCPeerConnectionState take_ownership(Handle h) noexcept;
    RTCPeerConnectionState clone() const noexcept;
  static const RTCPeerConnectionState closed;
  static const RTCPeerConnectionState failed;
  static const RTCPeerConnectionState disconnected;
  static const RTCPeerConnectionState new_;
  static const RTCPeerConnectionState connecting;
  static const RTCPeerConnectionState connected;
};

class RTCIceConnectionState : public emlite::Val {
  explicit RTCIceConnectionState(Handle h) noexcept;
public:
   explicit RTCIceConnectionState(const emlite::Val &v) noexcept;
  static RTCIceConnectionState take_ownership(Handle h) noexcept;
    RTCIceConnectionState clone() const noexcept;
  static const RTCIceConnectionState closed;
  static const RTCIceConnectionState failed;
  static const RTCIceConnectionState disconnected;
  static const RTCIceConnectionState new_;
  static const RTCIceConnectionState checking;
  static const RTCIceConnectionState completed;
  static const RTCIceConnectionState connected;
};

class RTCSdpType : public emlite::Val {
  explicit RTCSdpType(Handle h) noexcept;
public:
   explicit RTCSdpType(const emlite::Val &v) noexcept;
  static RTCSdpType take_ownership(Handle h) noexcept;
    RTCSdpType clone() const noexcept;
  static const RTCSdpType offer;
  static const RTCSdpType pranswer;
  static const RTCSdpType answer;
  static const RTCSdpType rollback;
};

class RTCIceProtocol : public emlite::Val {
  explicit RTCIceProtocol(Handle h) noexcept;
public:
   explicit RTCIceProtocol(const emlite::Val &v) noexcept;
  static RTCIceProtocol take_ownership(Handle h) noexcept;
    RTCIceProtocol clone() const noexcept;
  static const RTCIceProtocol udp;
  static const RTCIceProtocol tcp;
};

class RTCIceTcpCandidateType : public emlite::Val {
  explicit RTCIceTcpCandidateType(Handle h) noexcept;
public:
   explicit RTCIceTcpCandidateType(const emlite::Val &v) noexcept;
  static RTCIceTcpCandidateType take_ownership(Handle h) noexcept;
    RTCIceTcpCandidateType clone() const noexcept;
  static const RTCIceTcpCandidateType active;
  static const RTCIceTcpCandidateType passive;
  static const RTCIceTcpCandidateType so;
};

class RTCIceCandidateType : public emlite::Val {
  explicit RTCIceCandidateType(Handle h) noexcept;
public:
   explicit RTCIceCandidateType(const emlite::Val &v) noexcept;
  static RTCIceCandidateType take_ownership(Handle h) noexcept;
    RTCIceCandidateType clone() const noexcept;
  static const RTCIceCandidateType host;
  static const RTCIceCandidateType srflx;
  static const RTCIceCandidateType prflx;
  static const RTCIceCandidateType relay;
};

class RTCIceServerTransportProtocol : public emlite::Val {
  explicit RTCIceServerTransportProtocol(Handle h) noexcept;
public:
   explicit RTCIceServerTransportProtocol(const emlite::Val &v) noexcept;
  static RTCIceServerTransportProtocol take_ownership(Handle h) noexcept;
    RTCIceServerTransportProtocol clone() const noexcept;
  static const RTCIceServerTransportProtocol udp;
  static const RTCIceServerTransportProtocol tcp;
  static const RTCIceServerTransportProtocol tls;
};

class RTCRtpTransceiverDirection : public emlite::Val {
  explicit RTCRtpTransceiverDirection(Handle h) noexcept;
public:
   explicit RTCRtpTransceiverDirection(const emlite::Val &v) noexcept;
  static RTCRtpTransceiverDirection take_ownership(Handle h) noexcept;
    RTCRtpTransceiverDirection clone() const noexcept;
  static const RTCRtpTransceiverDirection sendrecv;
  static const RTCRtpTransceiverDirection sendonly;
  static const RTCRtpTransceiverDirection recvonly;
  static const RTCRtpTransceiverDirection inactive;
  static const RTCRtpTransceiverDirection stopped;
};

class RTCDtlsTransportState : public emlite::Val {
  explicit RTCDtlsTransportState(Handle h) noexcept;
public:
   explicit RTCDtlsTransportState(const emlite::Val &v) noexcept;
  static RTCDtlsTransportState take_ownership(Handle h) noexcept;
    RTCDtlsTransportState clone() const noexcept;
  static const RTCDtlsTransportState new_;
  static const RTCDtlsTransportState connecting;
  static const RTCDtlsTransportState connected;
  static const RTCDtlsTransportState closed;
  static const RTCDtlsTransportState failed;
};

class RTCIceGathererState : public emlite::Val {
  explicit RTCIceGathererState(Handle h) noexcept;
public:
   explicit RTCIceGathererState(const emlite::Val &v) noexcept;
  static RTCIceGathererState take_ownership(Handle h) noexcept;
    RTCIceGathererState clone() const noexcept;
  static const RTCIceGathererState new_;
  static const RTCIceGathererState gathering;
  static const RTCIceGathererState complete;
};

class RTCIceTransportState : public emlite::Val {
  explicit RTCIceTransportState(Handle h) noexcept;
public:
   explicit RTCIceTransportState(const emlite::Val &v) noexcept;
  static RTCIceTransportState take_ownership(Handle h) noexcept;
    RTCIceTransportState clone() const noexcept;
  static const RTCIceTransportState closed;
  static const RTCIceTransportState failed;
  static const RTCIceTransportState disconnected;
  static const RTCIceTransportState new_;
  static const RTCIceTransportState checking;
  static const RTCIceTransportState completed;
  static const RTCIceTransportState connected;
};

class RTCIceRole : public emlite::Val {
  explicit RTCIceRole(Handle h) noexcept;
public:
   explicit RTCIceRole(const emlite::Val &v) noexcept;
  static RTCIceRole take_ownership(Handle h) noexcept;
    RTCIceRole clone() const noexcept;
  static const RTCIceRole unknown;
  static const RTCIceRole controlling;
  static const RTCIceRole controlled;
};

class RTCIceComponent : public emlite::Val {
  explicit RTCIceComponent(Handle h) noexcept;
public:
   explicit RTCIceComponent(const emlite::Val &v) noexcept;
  static RTCIceComponent take_ownership(Handle h) noexcept;
    RTCIceComponent clone() const noexcept;
  static const RTCIceComponent rtp;
  static const RTCIceComponent rtcp;
};

class RTCSctpTransportState : public emlite::Val {
  explicit RTCSctpTransportState(Handle h) noexcept;
public:
   explicit RTCSctpTransportState(const emlite::Val &v) noexcept;
  static RTCSctpTransportState take_ownership(Handle h) noexcept;
    RTCSctpTransportState clone() const noexcept;
  static const RTCSctpTransportState connecting;
  static const RTCSctpTransportState connected;
  static const RTCSctpTransportState closed;
};

class RTCDataChannelState : public emlite::Val {
  explicit RTCDataChannelState(Handle h) noexcept;
public:
   explicit RTCDataChannelState(const emlite::Val &v) noexcept;
  static RTCDataChannelState take_ownership(Handle h) noexcept;
    RTCDataChannelState clone() const noexcept;
  static const RTCDataChannelState connecting;
  static const RTCDataChannelState open;
  static const RTCDataChannelState closing;
  static const RTCDataChannelState closed;
};

class RTCErrorDetailType : public emlite::Val {
  explicit RTCErrorDetailType(Handle h) noexcept;
public:
   explicit RTCErrorDetailType(const emlite::Val &v) noexcept;
  static RTCErrorDetailType take_ownership(Handle h) noexcept;
    RTCErrorDetailType clone() const noexcept;
  static const RTCErrorDetailType data_channel_failure;
  static const RTCErrorDetailType dtls_failure;
  static const RTCErrorDetailType fingerprint_failure;
  static const RTCErrorDetailType sctp_failure;
  static const RTCErrorDetailType sdp_syntax_error;
  static const RTCErrorDetailType hardware_encoder_not_available;
  static const RTCErrorDetailType hardware_encoder_error;
};

class BinaryType : public emlite::Val {
  explicit BinaryType(Handle h) noexcept;
public:
   explicit BinaryType(const emlite::Val &v) noexcept;
  static BinaryType take_ownership(Handle h) noexcept;
    BinaryType clone() const noexcept;
  static const BinaryType blob;
  static const BinaryType arraybuffer;
};

class WebTransportReliabilityMode : public emlite::Val {
  explicit WebTransportReliabilityMode(Handle h) noexcept;
public:
   explicit WebTransportReliabilityMode(const emlite::Val &v) noexcept;
  static WebTransportReliabilityMode take_ownership(Handle h) noexcept;
    WebTransportReliabilityMode clone() const noexcept;
  static const WebTransportReliabilityMode pending;
  static const WebTransportReliabilityMode reliable_only;
  static const WebTransportReliabilityMode supports_unreliable;
};

class WebTransportCongestionControl : public emlite::Val {
  explicit WebTransportCongestionControl(Handle h) noexcept;
public:
   explicit WebTransportCongestionControl(const emlite::Val &v) noexcept;
  static WebTransportCongestionControl take_ownership(Handle h) noexcept;
    WebTransportCongestionControl clone() const noexcept;
  static const WebTransportCongestionControl default_;
  static const WebTransportCongestionControl throughput;
  static const WebTransportCongestionControl low_latency;
};

class WebTransportErrorSource : public emlite::Val {
  explicit WebTransportErrorSource(Handle h) noexcept;
public:
   explicit WebTransportErrorSource(const emlite::Val &v) noexcept;
  static WebTransportErrorSource take_ownership(Handle h) noexcept;
    WebTransportErrorSource clone() const noexcept;
  static const WebTransportErrorSource stream;
  static const WebTransportErrorSource session;
};

class USBTransferStatus : public emlite::Val {
  explicit USBTransferStatus(Handle h) noexcept;
public:
   explicit USBTransferStatus(const emlite::Val &v) noexcept;
  static USBTransferStatus take_ownership(Handle h) noexcept;
    USBTransferStatus clone() const noexcept;
  static const USBTransferStatus ok;
  static const USBTransferStatus stall;
  static const USBTransferStatus babble;
};

class USBRequestType : public emlite::Val {
  explicit USBRequestType(Handle h) noexcept;
public:
   explicit USBRequestType(const emlite::Val &v) noexcept;
  static USBRequestType take_ownership(Handle h) noexcept;
    USBRequestType clone() const noexcept;
  static const USBRequestType standard;
  static const USBRequestType class_;
  static const USBRequestType vendor;
};

class USBRecipient : public emlite::Val {
  explicit USBRecipient(Handle h) noexcept;
public:
   explicit USBRecipient(const emlite::Val &v) noexcept;
  static USBRecipient take_ownership(Handle h) noexcept;
    USBRecipient clone() const noexcept;
  static const USBRecipient device;
  static const USBRecipient interface;
  static const USBRecipient endpoint;
  static const USBRecipient other;
};

class USBDirection : public emlite::Val {
  explicit USBDirection(Handle h) noexcept;
public:
   explicit USBDirection(const emlite::Val &v) noexcept;
  static USBDirection take_ownership(Handle h) noexcept;
    USBDirection clone() const noexcept;
  static const USBDirection in;
  static const USBDirection out;
};

class USBEndpointType : public emlite::Val {
  explicit USBEndpointType(Handle h) noexcept;
public:
   explicit USBEndpointType(const emlite::Val &v) noexcept;
  static USBEndpointType take_ownership(Handle h) noexcept;
    USBEndpointType clone() const noexcept;
  static const USBEndpointType bulk;
  static const USBEndpointType interrupt;
  static const USBEndpointType isochronous;
};

class AutoKeyword : public emlite::Val {
  explicit AutoKeyword(Handle h) noexcept;
public:
   explicit AutoKeyword(const emlite::Val &v) noexcept;
  static AutoKeyword take_ownership(Handle h) noexcept;
    AutoKeyword clone() const noexcept;
  static const AutoKeyword auto_;
};

class DirectionSetting : public emlite::Val {
  explicit DirectionSetting(Handle h) noexcept;
public:
   explicit DirectionSetting(const emlite::Val &v) noexcept;
  static DirectionSetting take_ownership(Handle h) noexcept;
    DirectionSetting clone() const noexcept;
  static const DirectionSetting none;
  static const DirectionSetting rl;
  static const DirectionSetting lr;
};

class LineAlignSetting : public emlite::Val {
  explicit LineAlignSetting(Handle h) noexcept;
public:
   explicit LineAlignSetting(const emlite::Val &v) noexcept;
  static LineAlignSetting take_ownership(Handle h) noexcept;
    LineAlignSetting clone() const noexcept;
  static const LineAlignSetting start;
  static const LineAlignSetting center;
  static const LineAlignSetting end;
};

class PositionAlignSetting : public emlite::Val {
  explicit PositionAlignSetting(Handle h) noexcept;
public:
   explicit PositionAlignSetting(const emlite::Val &v) noexcept;
  static PositionAlignSetting take_ownership(Handle h) noexcept;
    PositionAlignSetting clone() const noexcept;
  static const PositionAlignSetting line_left;
  static const PositionAlignSetting center;
  static const PositionAlignSetting line_right;
  static const PositionAlignSetting auto_;
};

class AlignSetting : public emlite::Val {
  explicit AlignSetting(Handle h) noexcept;
public:
   explicit AlignSetting(const emlite::Val &v) noexcept;
  static AlignSetting take_ownership(Handle h) noexcept;
    AlignSetting clone() const noexcept;
  static const AlignSetting start;
  static const AlignSetting center;
  static const AlignSetting end;
  static const AlignSetting left;
  static const AlignSetting right;
};

class ScrollSetting : public emlite::Val {
  explicit ScrollSetting(Handle h) noexcept;
public:
   explicit ScrollSetting(const emlite::Val &v) noexcept;
  static ScrollSetting take_ownership(Handle h) noexcept;
    ScrollSetting clone() const noexcept;
  static const ScrollSetting none;
  static const ScrollSetting up;
};

class XREnvironmentBlendMode : public emlite::Val {
  explicit XREnvironmentBlendMode(Handle h) noexcept;
public:
   explicit XREnvironmentBlendMode(const emlite::Val &v) noexcept;
  static XREnvironmentBlendMode take_ownership(Handle h) noexcept;
    XREnvironmentBlendMode clone() const noexcept;
  static const XREnvironmentBlendMode opaque;
  static const XREnvironmentBlendMode alpha_blend;
  static const XREnvironmentBlendMode additive;
};

class XRInteractionMode : public emlite::Val {
  explicit XRInteractionMode(Handle h) noexcept;
public:
   explicit XRInteractionMode(const emlite::Val &v) noexcept;
  static XRInteractionMode take_ownership(Handle h) noexcept;
    XRInteractionMode clone() const noexcept;
  static const XRInteractionMode screen_space;
  static const XRInteractionMode world_space;
};

class XRDepthType : public emlite::Val {
  explicit XRDepthType(Handle h) noexcept;
public:
   explicit XRDepthType(const emlite::Val &v) noexcept;
  static XRDepthType take_ownership(Handle h) noexcept;
    XRDepthType clone() const noexcept;
  static const XRDepthType raw;
  static const XRDepthType smooth;
};

class XRDepthUsage : public emlite::Val {
  explicit XRDepthUsage(Handle h) noexcept;
public:
   explicit XRDepthUsage(const emlite::Val &v) noexcept;
  static XRDepthUsage take_ownership(Handle h) noexcept;
    XRDepthUsage clone() const noexcept;
  static const XRDepthUsage cpu_optimized;
  static const XRDepthUsage gpu_optimized;
};

class XRDepthDataFormat : public emlite::Val {
  explicit XRDepthDataFormat(Handle h) noexcept;
public:
   explicit XRDepthDataFormat(const emlite::Val &v) noexcept;
  static XRDepthDataFormat take_ownership(Handle h) noexcept;
    XRDepthDataFormat clone() const noexcept;
  static const XRDepthDataFormat luminance_alpha;
  static const XRDepthDataFormat float32;
  static const XRDepthDataFormat unsigned_short;
};

class XRDOMOverlayType : public emlite::Val {
  explicit XRDOMOverlayType(Handle h) noexcept;
public:
   explicit XRDOMOverlayType(const emlite::Val &v) noexcept;
  static XRDOMOverlayType take_ownership(Handle h) noexcept;
    XRDOMOverlayType clone() const noexcept;
  static const XRDOMOverlayType screen;
  static const XRDOMOverlayType floating;
  static const XRDOMOverlayType head_locked;
};

class XRHandJoint : public emlite::Val {
  explicit XRHandJoint(Handle h) noexcept;
public:
   explicit XRHandJoint(const emlite::Val &v) noexcept;
  static XRHandJoint take_ownership(Handle h) noexcept;
    XRHandJoint clone() const noexcept;
  static const XRHandJoint wrist;
  static const XRHandJoint thumb_metacarpal;
  static const XRHandJoint thumb_phalanx_proximal;
  static const XRHandJoint thumb_phalanx_distal;
  static const XRHandJoint thumb_tip;
  static const XRHandJoint index_finger_metacarpal;
  static const XRHandJoint index_finger_phalanx_proximal;
  static const XRHandJoint index_finger_phalanx_intermediate;
  static const XRHandJoint index_finger_phalanx_distal;
  static const XRHandJoint index_finger_tip;
  static const XRHandJoint middle_finger_metacarpal;
  static const XRHandJoint middle_finger_phalanx_proximal;
  static const XRHandJoint middle_finger_phalanx_intermediate;
  static const XRHandJoint middle_finger_phalanx_distal;
  static const XRHandJoint middle_finger_tip;
  static const XRHandJoint ring_finger_metacarpal;
  static const XRHandJoint ring_finger_phalanx_proximal;
  static const XRHandJoint ring_finger_phalanx_intermediate;
  static const XRHandJoint ring_finger_phalanx_distal;
  static const XRHandJoint ring_finger_tip;
  static const XRHandJoint pinky_finger_metacarpal;
  static const XRHandJoint pinky_finger_phalanx_proximal;
  static const XRHandJoint pinky_finger_phalanx_intermediate;
  static const XRHandJoint pinky_finger_phalanx_distal;
  static const XRHandJoint pinky_finger_tip;
};

class XRHitTestTrackableType : public emlite::Val {
  explicit XRHitTestTrackableType(Handle h) noexcept;
public:
   explicit XRHitTestTrackableType(const emlite::Val &v) noexcept;
  static XRHitTestTrackableType take_ownership(Handle h) noexcept;
    XRHitTestTrackableType clone() const noexcept;
  static const XRHitTestTrackableType point;
  static const XRHitTestTrackableType plane;
  static const XRHitTestTrackableType mesh;
};

class XRReflectionFormat : public emlite::Val {
  explicit XRReflectionFormat(Handle h) noexcept;
public:
   explicit XRReflectionFormat(const emlite::Val &v) noexcept;
  static XRReflectionFormat take_ownership(Handle h) noexcept;
    XRReflectionFormat clone() const noexcept;
  static const XRReflectionFormat srgba8;
  static const XRReflectionFormat rgba16f;
};

class XRPlaneOrientation : public emlite::Val {
  explicit XRPlaneOrientation(Handle h) noexcept;
public:
   explicit XRPlaneOrientation(const emlite::Val &v) noexcept;
  static XRPlaneOrientation take_ownership(Handle h) noexcept;
    XRPlaneOrientation clone() const noexcept;
  static const XRPlaneOrientation horizontal;
  static const XRPlaneOrientation vertical;
};

class XRSessionMode : public emlite::Val {
  explicit XRSessionMode(Handle h) noexcept;
public:
   explicit XRSessionMode(const emlite::Val &v) noexcept;
  static XRSessionMode take_ownership(Handle h) noexcept;
    XRSessionMode clone() const noexcept;
  static const XRSessionMode inline_;
  static const XRSessionMode immersive_vr;
  static const XRSessionMode immersive_ar;
};

class XRVisibilityState : public emlite::Val {
  explicit XRVisibilityState(Handle h) noexcept;
public:
   explicit XRVisibilityState(const emlite::Val &v) noexcept;
  static XRVisibilityState take_ownership(Handle h) noexcept;
    XRVisibilityState clone() const noexcept;
  static const XRVisibilityState visible;
  static const XRVisibilityState visible_blurred;
  static const XRVisibilityState hidden;
};

class XRReferenceSpaceType : public emlite::Val {
  explicit XRReferenceSpaceType(Handle h) noexcept;
public:
   explicit XRReferenceSpaceType(const emlite::Val &v) noexcept;
  static XRReferenceSpaceType take_ownership(Handle h) noexcept;
    XRReferenceSpaceType clone() const noexcept;
  static const XRReferenceSpaceType viewer;
  static const XRReferenceSpaceType local;
  static const XRReferenceSpaceType local_floor;
  static const XRReferenceSpaceType bounded_floor;
  static const XRReferenceSpaceType unbounded;
};

class XREye : public emlite::Val {
  explicit XREye(Handle h) noexcept;
public:
   explicit XREye(const emlite::Val &v) noexcept;
  static XREye take_ownership(Handle h) noexcept;
    XREye clone() const noexcept;
  static const XREye none;
  static const XREye left;
  static const XREye right;
};

class XRHandedness : public emlite::Val {
  explicit XRHandedness(Handle h) noexcept;
public:
   explicit XRHandedness(const emlite::Val &v) noexcept;
  static XRHandedness take_ownership(Handle h) noexcept;
    XRHandedness clone() const noexcept;
  static const XRHandedness none;
  static const XRHandedness left;
  static const XRHandedness right;
};

class XRTargetRayMode : public emlite::Val {
  explicit XRTargetRayMode(Handle h) noexcept;
public:
   explicit XRTargetRayMode(const emlite::Val &v) noexcept;
  static XRTargetRayMode take_ownership(Handle h) noexcept;
    XRTargetRayMode clone() const noexcept;
  static const XRTargetRayMode gaze;
  static const XRTargetRayMode tracked_pointer;
  static const XRTargetRayMode screen;
  static const XRTargetRayMode transient_pointer;
};

class XRLayerLayout : public emlite::Val {
  explicit XRLayerLayout(Handle h) noexcept;
public:
   explicit XRLayerLayout(const emlite::Val &v) noexcept;
  static XRLayerLayout take_ownership(Handle h) noexcept;
    XRLayerLayout clone() const noexcept;
  static const XRLayerLayout default_;
  static const XRLayerLayout mono;
  static const XRLayerLayout stereo;
  static const XRLayerLayout stereo_left_right;
  static const XRLayerLayout stereo_top_bottom;
};

class XRLayerQuality : public emlite::Val {
  explicit XRLayerQuality(Handle h) noexcept;
public:
   explicit XRLayerQuality(const emlite::Val &v) noexcept;
  static XRLayerQuality take_ownership(Handle h) noexcept;
    XRLayerQuality clone() const noexcept;
  static const XRLayerQuality default_;
  static const XRLayerQuality text_optimized;
  static const XRLayerQuality graphics_optimized;
};

class XRTextureType : public emlite::Val {
  explicit XRTextureType(Handle h) noexcept;
public:
   explicit XRTextureType(const emlite::Val &v) noexcept;
  static XRTextureType take_ownership(Handle h) noexcept;
    XRTextureType clone() const noexcept;
  static const XRTextureType texture;
  static const XRTextureType texture_array;
};

class SummarizerType : public emlite::Val {
  explicit SummarizerType(Handle h) noexcept;
public:
   explicit SummarizerType(const emlite::Val &v) noexcept;
  static SummarizerType take_ownership(Handle h) noexcept;
    SummarizerType clone() const noexcept;
  static const SummarizerType tldr;
  static const SummarizerType teaser;
  static const SummarizerType key_points;
  static const SummarizerType headline;
};

class SummarizerFormat : public emlite::Val {
  explicit SummarizerFormat(Handle h) noexcept;
public:
   explicit SummarizerFormat(const emlite::Val &v) noexcept;
  static SummarizerFormat take_ownership(Handle h) noexcept;
    SummarizerFormat clone() const noexcept;
  static const SummarizerFormat plain_text;
  static const SummarizerFormat markdown;
};

class SummarizerLength : public emlite::Val {
  explicit SummarizerLength(Handle h) noexcept;
public:
   explicit SummarizerLength(const emlite::Val &v) noexcept;
  static SummarizerLength take_ownership(Handle h) noexcept;
    SummarizerLength clone() const noexcept;
  static const SummarizerLength short_;
  static const SummarizerLength medium;
  static const SummarizerLength long_;
};

class WriterTone : public emlite::Val {
  explicit WriterTone(Handle h) noexcept;
public:
   explicit WriterTone(const emlite::Val &v) noexcept;
  static WriterTone take_ownership(Handle h) noexcept;
    WriterTone clone() const noexcept;
  static const WriterTone formal;
  static const WriterTone neutral;
  static const WriterTone casual;
};

class WriterFormat : public emlite::Val {
  explicit WriterFormat(Handle h) noexcept;
public:
   explicit WriterFormat(const emlite::Val &v) noexcept;
  static WriterFormat take_ownership(Handle h) noexcept;
    WriterFormat clone() const noexcept;
  static const WriterFormat plain_text;
  static const WriterFormat markdown;
};

class WriterLength : public emlite::Val {
  explicit WriterLength(Handle h) noexcept;
public:
   explicit WriterLength(const emlite::Val &v) noexcept;
  static WriterLength take_ownership(Handle h) noexcept;
    WriterLength clone() const noexcept;
  static const WriterLength short_;
  static const WriterLength medium;
  static const WriterLength long_;
};

class RewriterTone : public emlite::Val {
  explicit RewriterTone(Handle h) noexcept;
public:
   explicit RewriterTone(const emlite::Val &v) noexcept;
  static RewriterTone take_ownership(Handle h) noexcept;
    RewriterTone clone() const noexcept;
  static const RewriterTone as_is;
  static const RewriterTone more_formal;
  static const RewriterTone more_casual;
};

class RewriterFormat : public emlite::Val {
  explicit RewriterFormat(Handle h) noexcept;
public:
   explicit RewriterFormat(const emlite::Val &v) noexcept;
  static RewriterFormat take_ownership(Handle h) noexcept;
    RewriterFormat clone() const noexcept;
  static const RewriterFormat as_is;
  static const RewriterFormat plain_text;
  static const RewriterFormat markdown;
};

class RewriterLength : public emlite::Val {
  explicit RewriterLength(Handle h) noexcept;
public:
   explicit RewriterLength(const emlite::Val &v) noexcept;
  static RewriterLength take_ownership(Handle h) noexcept;
    RewriterLength clone() const noexcept;
  static const RewriterLength as_is;
  static const RewriterLength shorter;
  static const RewriterLength longer;
};

class Availability : public emlite::Val {
  explicit Availability(Handle h) noexcept;
public:
   explicit Availability(const emlite::Val &v) noexcept;
  static Availability take_ownership(Handle h) noexcept;
    Availability clone() const noexcept;
  static const Availability unavailable;
  static const Availability downloadable;
  static const Availability downloading;
  static const Availability available;
};

class XMLHttpRequestResponseType : public emlite::Val {
  explicit XMLHttpRequestResponseType(Handle h) noexcept;
public:
   explicit XMLHttpRequestResponseType(const emlite::Val &v) noexcept;
  static XMLHttpRequestResponseType take_ownership(Handle h) noexcept;
    XMLHttpRequestResponseType clone() const noexcept;
  static const XMLHttpRequestResponseType none;
  static const XMLHttpRequestResponseType arraybuffer;
  static const XMLHttpRequestResponseType blob;
  static const XMLHttpRequestResponseType document;
  static const XMLHttpRequestResponseType json;
  static const XMLHttpRequestResponseType text;
};

