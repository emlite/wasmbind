#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>

namespace webbind {

/// Enum type SecurityPolicyViolationEventDisposition
/// [`SecurityPolicyViolationEventDisposition`](https://developer.mozilla.org/en-US/docs/Web/API/SecurityPolicyViolationEventDisposition)
class SecurityPolicyViolationEventDisposition : public emlite::Val {
  explicit SecurityPolicyViolationEventDisposition(Handle h) noexcept;
public:
   explicit SecurityPolicyViolationEventDisposition(const emlite::Val &v) noexcept;
  static SecurityPolicyViolationEventDisposition take_ownership(Handle h) noexcept;
    [[nodiscard]] SecurityPolicyViolationEventDisposition clone() const noexcept;
  static const SecurityPolicyViolationEventDisposition enforce();
  static const SecurityPolicyViolationEventDisposition report();
};

/// Enum type EndingType
/// [`EndingType`](https://developer.mozilla.org/en-US/docs/Web/API/EndingType)
class EndingType : public emlite::Val {
  explicit EndingType(Handle h) noexcept;
public:
   explicit EndingType(const emlite::Val &v) noexcept;
  static EndingType take_ownership(Handle h) noexcept;
    [[nodiscard]] EndingType clone() const noexcept;
  static const EndingType transparent();
  static const EndingType native();
};

/// Enum type IDBRequestReadyState
/// [`IDBRequestReadyState`](https://developer.mozilla.org/en-US/docs/Web/API/IDBRequestReadyState)
class IDBRequestReadyState : public emlite::Val {
  explicit IDBRequestReadyState(Handle h) noexcept;
public:
   explicit IDBRequestReadyState(const emlite::Val &v) noexcept;
  static IDBRequestReadyState take_ownership(Handle h) noexcept;
    [[nodiscard]] IDBRequestReadyState clone() const noexcept;
  static const IDBRequestReadyState pending();
  static const IDBRequestReadyState done();
};

/// Enum type IDBTransactionDurability
/// [`IDBTransactionDurability`](https://developer.mozilla.org/en-US/docs/Web/API/IDBTransactionDurability)
class IDBTransactionDurability : public emlite::Val {
  explicit IDBTransactionDurability(Handle h) noexcept;
public:
   explicit IDBTransactionDurability(const emlite::Val &v) noexcept;
  static IDBTransactionDurability take_ownership(Handle h) noexcept;
    [[nodiscard]] IDBTransactionDurability clone() const noexcept;
  static const IDBTransactionDurability default_();
  static const IDBTransactionDurability strict();
  static const IDBTransactionDurability relaxed();
};

/// Enum type IDBCursorDirection
/// [`IDBCursorDirection`](https://developer.mozilla.org/en-US/docs/Web/API/IDBCursorDirection)
class IDBCursorDirection : public emlite::Val {
  explicit IDBCursorDirection(Handle h) noexcept;
public:
   explicit IDBCursorDirection(const emlite::Val &v) noexcept;
  static IDBCursorDirection take_ownership(Handle h) noexcept;
    [[nodiscard]] IDBCursorDirection clone() const noexcept;
  static const IDBCursorDirection next();
  static const IDBCursorDirection nextunique();
  static const IDBCursorDirection prev();
  static const IDBCursorDirection prevunique();
};

/// Enum type IDBTransactionMode
/// [`IDBTransactionMode`](https://developer.mozilla.org/en-US/docs/Web/API/IDBTransactionMode)
class IDBTransactionMode : public emlite::Val {
  explicit IDBTransactionMode(Handle h) noexcept;
public:
   explicit IDBTransactionMode(const emlite::Val &v) noexcept;
  static IDBTransactionMode take_ownership(Handle h) noexcept;
    [[nodiscard]] IDBTransactionMode clone() const noexcept;
  static const IDBTransactionMode readonly();
  static const IDBTransactionMode readwrite();
  static const IDBTransactionMode versionchange();
};

/// Enum type AccelerometerLocalCoordinateSystem
/// [`AccelerometerLocalCoordinateSystem`](https://developer.mozilla.org/en-US/docs/Web/API/AccelerometerLocalCoordinateSystem)
class AccelerometerLocalCoordinateSystem : public emlite::Val {
  explicit AccelerometerLocalCoordinateSystem(Handle h) noexcept;
public:
   explicit AccelerometerLocalCoordinateSystem(const emlite::Val &v) noexcept;
  static AccelerometerLocalCoordinateSystem take_ownership(Handle h) noexcept;
    [[nodiscard]] AccelerometerLocalCoordinateSystem clone() const noexcept;
  static const AccelerometerLocalCoordinateSystem device();
  static const AccelerometerLocalCoordinateSystem screen();
};

/// Enum type AudioSessionType
/// [`AudioSessionType`](https://developer.mozilla.org/en-US/docs/Web/API/AudioSessionType)
class AudioSessionType : public emlite::Val {
  explicit AudioSessionType(Handle h) noexcept;
public:
   explicit AudioSessionType(const emlite::Val &v) noexcept;
  static AudioSessionType take_ownership(Handle h) noexcept;
    [[nodiscard]] AudioSessionType clone() const noexcept;
  static const AudioSessionType auto_();
  static const AudioSessionType playback();
  static const AudioSessionType transient();
  static const AudioSessionType transient_solo();
  static const AudioSessionType ambient();
  static const AudioSessionType play_and_record();
};

/// Enum type AudioSessionState
/// [`AudioSessionState`](https://developer.mozilla.org/en-US/docs/Web/API/AudioSessionState)
class AudioSessionState : public emlite::Val {
  explicit AudioSessionState(Handle h) noexcept;
public:
   explicit AudioSessionState(const emlite::Val &v) noexcept;
  static AudioSessionState take_ownership(Handle h) noexcept;
    [[nodiscard]] AudioSessionState clone() const noexcept;
  static const AudioSessionState inactive();
  static const AudioSessionState active();
  static const AudioSessionState interrupted();
};

/// Enum type AutoplayPolicy
/// [`AutoplayPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/AutoplayPolicy)
class AutoplayPolicy : public emlite::Val {
  explicit AutoplayPolicy(Handle h) noexcept;
public:
   explicit AutoplayPolicy(const emlite::Val &v) noexcept;
  static AutoplayPolicy take_ownership(Handle h) noexcept;
    [[nodiscard]] AutoplayPolicy clone() const noexcept;
  static const AutoplayPolicy allowed();
  static const AutoplayPolicy allowed_muted();
  static const AutoplayPolicy disallowed();
};

/// Enum type AutoplayPolicyMediaType
/// [`AutoplayPolicyMediaType`](https://developer.mozilla.org/en-US/docs/Web/API/AutoplayPolicyMediaType)
class AutoplayPolicyMediaType : public emlite::Val {
  explicit AutoplayPolicyMediaType(Handle h) noexcept;
public:
   explicit AutoplayPolicyMediaType(const emlite::Val &v) noexcept;
  static AutoplayPolicyMediaType take_ownership(Handle h) noexcept;
    [[nodiscard]] AutoplayPolicyMediaType clone() const noexcept;
  static const AutoplayPolicyMediaType mediaelement();
  static const AutoplayPolicyMediaType audiocontext();
};

/// Enum type BackgroundFetchResult
/// [`BackgroundFetchResult`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchResult)
class BackgroundFetchResult : public emlite::Val {
  explicit BackgroundFetchResult(Handle h) noexcept;
public:
   explicit BackgroundFetchResult(const emlite::Val &v) noexcept;
  static BackgroundFetchResult take_ownership(Handle h) noexcept;
    [[nodiscard]] BackgroundFetchResult clone() const noexcept;
  static const BackgroundFetchResult none();
  static const BackgroundFetchResult success();
  static const BackgroundFetchResult failure();
};

/// Enum type BackgroundFetchFailureReason
/// [`BackgroundFetchFailureReason`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchFailureReason)
class BackgroundFetchFailureReason : public emlite::Val {
  explicit BackgroundFetchFailureReason(Handle h) noexcept;
public:
   explicit BackgroundFetchFailureReason(const emlite::Val &v) noexcept;
  static BackgroundFetchFailureReason take_ownership(Handle h) noexcept;
    [[nodiscard]] BackgroundFetchFailureReason clone() const noexcept;
  static const BackgroundFetchFailureReason none();
  static const BackgroundFetchFailureReason aborted();
  static const BackgroundFetchFailureReason bad_status();
  static const BackgroundFetchFailureReason fetch_error();
  static const BackgroundFetchFailureReason quota_exceeded();
  static const BackgroundFetchFailureReason download_total_exceeded();
};

/// Enum type PresentationStyle
/// [`PresentationStyle`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationStyle)
class PresentationStyle : public emlite::Val {
  explicit PresentationStyle(Handle h) noexcept;
public:
   explicit PresentationStyle(const emlite::Val &v) noexcept;
  static PresentationStyle take_ownership(Handle h) noexcept;
    [[nodiscard]] PresentationStyle clone() const noexcept;
  static const PresentationStyle unspecified();
  static const PresentationStyle inline_();
  static const PresentationStyle attachment();
};

/// Enum type CompressionFormat
/// [`CompressionFormat`](https://developer.mozilla.org/en-US/docs/Web/API/CompressionFormat)
class CompressionFormat : public emlite::Val {
  explicit CompressionFormat(Handle h) noexcept;
public:
   explicit CompressionFormat(const emlite::Val &v) noexcept;
  static CompressionFormat take_ownership(Handle h) noexcept;
    [[nodiscard]] CompressionFormat clone() const noexcept;
  static const CompressionFormat deflate();
  static const CompressionFormat deflate_raw();
  static const CompressionFormat gzip();
};

/// Enum type PressureSource
/// [`PressureSource`](https://developer.mozilla.org/en-US/docs/Web/API/PressureSource)
class PressureSource : public emlite::Val {
  explicit PressureSource(Handle h) noexcept;
public:
   explicit PressureSource(const emlite::Val &v) noexcept;
  static PressureSource take_ownership(Handle h) noexcept;
    [[nodiscard]] PressureSource clone() const noexcept;
  static const PressureSource cpu();
};

/// Enum type PressureState
/// [`PressureState`](https://developer.mozilla.org/en-US/docs/Web/API/PressureState)
class PressureState : public emlite::Val {
  explicit PressureState(Handle h) noexcept;
public:
   explicit PressureState(const emlite::Val &v) noexcept;
  static PressureState take_ownership(Handle h) noexcept;
    [[nodiscard]] PressureState clone() const noexcept;
  static const PressureState nominal();
  static const PressureState fair();
  static const PressureState serious();
  static const PressureState critical();
};

/// Enum type ContactProperty
/// [`ContactProperty`](https://developer.mozilla.org/en-US/docs/Web/API/ContactProperty)
class ContactProperty : public emlite::Val {
  explicit ContactProperty(Handle h) noexcept;
public:
   explicit ContactProperty(const emlite::Val &v) noexcept;
  static ContactProperty take_ownership(Handle h) noexcept;
    [[nodiscard]] ContactProperty clone() const noexcept;
  static const ContactProperty address();
  static const ContactProperty email();
  static const ContactProperty icon();
  static const ContactProperty name();
  static const ContactProperty tel();
};

/// Enum type ContentCategory
/// [`ContentCategory`](https://developer.mozilla.org/en-US/docs/Web/API/ContentCategory)
class ContentCategory : public emlite::Val {
  explicit ContentCategory(Handle h) noexcept;
public:
   explicit ContentCategory(const emlite::Val &v) noexcept;
  static ContentCategory take_ownership(Handle h) noexcept;
    [[nodiscard]] ContentCategory clone() const noexcept;
  static const ContentCategory none();
  static const ContentCategory homepage();
  static const ContentCategory article();
  static const ContentCategory video();
  static const ContentCategory audio();
};

/// Enum type CookieSameSite
/// [`CookieSameSite`](https://developer.mozilla.org/en-US/docs/Web/API/CookieSameSite)
class CookieSameSite : public emlite::Val {
  explicit CookieSameSite(Handle h) noexcept;
public:
   explicit CookieSameSite(const emlite::Val &v) noexcept;
  static CookieSameSite take_ownership(Handle h) noexcept;
    [[nodiscard]] CookieSameSite clone() const noexcept;
  static const CookieSameSite strict();
  static const CookieSameSite lax();
  static const CookieSameSite none();
};

/// Enum type CredentialMediationRequirement
/// [`CredentialMediationRequirement`](https://developer.mozilla.org/en-US/docs/Web/API/CredentialMediationRequirement)
class CredentialMediationRequirement : public emlite::Val {
  explicit CredentialMediationRequirement(Handle h) noexcept;
public:
   explicit CredentialMediationRequirement(const emlite::Val &v) noexcept;
  static CredentialMediationRequirement take_ownership(Handle h) noexcept;
    [[nodiscard]] CredentialMediationRequirement clone() const noexcept;
  static const CredentialMediationRequirement silent();
  static const CredentialMediationRequirement optional();
  static const CredentialMediationRequirement conditional();
  static const CredentialMediationRequirement required();
};

/// Enum type ScriptingPolicyViolationType
/// [`ScriptingPolicyViolationType`](https://developer.mozilla.org/en-US/docs/Web/API/ScriptingPolicyViolationType)
class ScriptingPolicyViolationType : public emlite::Val {
  explicit ScriptingPolicyViolationType(Handle h) noexcept;
public:
   explicit ScriptingPolicyViolationType(const emlite::Val &v) noexcept;
  static ScriptingPolicyViolationType take_ownership(Handle h) noexcept;
    [[nodiscard]] ScriptingPolicyViolationType clone() const noexcept;
  static const ScriptingPolicyViolationType externalScript();
  static const ScriptingPolicyViolationType inlineScript();
  static const ScriptingPolicyViolationType inlineEventHandler();
  static const ScriptingPolicyViolationType eval();
};

/// Enum type FontFaceLoadStatus
/// [`FontFaceLoadStatus`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceLoadStatus)
class FontFaceLoadStatus : public emlite::Val {
  explicit FontFaceLoadStatus(Handle h) noexcept;
public:
   explicit FontFaceLoadStatus(const emlite::Val &v) noexcept;
  static FontFaceLoadStatus take_ownership(Handle h) noexcept;
    [[nodiscard]] FontFaceLoadStatus clone() const noexcept;
  static const FontFaceLoadStatus unloaded();
  static const FontFaceLoadStatus loading();
  static const FontFaceLoadStatus loaded();
  static const FontFaceLoadStatus error();
};

/// Enum type FontFaceSetLoadStatus
/// [`FontFaceSetLoadStatus`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceSetLoadStatus)
class FontFaceSetLoadStatus : public emlite::Val {
  explicit FontFaceSetLoadStatus(Handle h) noexcept;
public:
   explicit FontFaceSetLoadStatus(const emlite::Val &v) noexcept;
  static FontFaceSetLoadStatus take_ownership(Handle h) noexcept;
    [[nodiscard]] FontFaceSetLoadStatus clone() const noexcept;
  static const FontFaceSetLoadStatus loading();
  static const FontFaceSetLoadStatus loaded();
};

/// Enum type HighlightType
/// [`HighlightType`](https://developer.mozilla.org/en-US/docs/Web/API/HighlightType)
class HighlightType : public emlite::Val {
  explicit HighlightType(Handle h) noexcept;
public:
   explicit HighlightType(const emlite::Val &v) noexcept;
  static HighlightType take_ownership(Handle h) noexcept;
    [[nodiscard]] HighlightType clone() const noexcept;
  static const HighlightType highlight();
  static const HighlightType spelling_error();
  static const HighlightType grammar_error();
};

/// Enum type ChildDisplayType
/// [`ChildDisplayType`](https://developer.mozilla.org/en-US/docs/Web/API/ChildDisplayType)
class ChildDisplayType : public emlite::Val {
  explicit ChildDisplayType(Handle h) noexcept;
public:
   explicit ChildDisplayType(const emlite::Val &v) noexcept;
  static ChildDisplayType take_ownership(Handle h) noexcept;
    [[nodiscard]] ChildDisplayType clone() const noexcept;
  static const ChildDisplayType block();
  static const ChildDisplayType normal();
};

/// Enum type LayoutSizingMode
/// [`LayoutSizingMode`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutSizingMode)
class LayoutSizingMode : public emlite::Val {
  explicit LayoutSizingMode(Handle h) noexcept;
public:
   explicit LayoutSizingMode(const emlite::Val &v) noexcept;
  static LayoutSizingMode take_ownership(Handle h) noexcept;
    [[nodiscard]] LayoutSizingMode clone() const noexcept;
  static const LayoutSizingMode block_like();
  static const LayoutSizingMode manual();
};

/// Enum type BlockFragmentationType
/// [`BlockFragmentationType`](https://developer.mozilla.org/en-US/docs/Web/API/BlockFragmentationType)
class BlockFragmentationType : public emlite::Val {
  explicit BlockFragmentationType(Handle h) noexcept;
public:
   explicit BlockFragmentationType(const emlite::Val &v) noexcept;
  static BlockFragmentationType take_ownership(Handle h) noexcept;
    [[nodiscard]] BlockFragmentationType clone() const noexcept;
  static const BlockFragmentationType none();
  static const BlockFragmentationType page();
  static const BlockFragmentationType column();
  static const BlockFragmentationType region();
};

/// Enum type BreakType
/// [`BreakType`](https://developer.mozilla.org/en-US/docs/Web/API/BreakType)
class BreakType : public emlite::Val {
  explicit BreakType(Handle h) noexcept;
public:
   explicit BreakType(const emlite::Val &v) noexcept;
  static BreakType take_ownership(Handle h) noexcept;
    [[nodiscard]] BreakType clone() const noexcept;
  static const BreakType none();
  static const BreakType line();
  static const BreakType column();
  static const BreakType page();
  static const BreakType region();
};

/// Enum type SpatialNavigationDirection
/// [`SpatialNavigationDirection`](https://developer.mozilla.org/en-US/docs/Web/API/SpatialNavigationDirection)
class SpatialNavigationDirection : public emlite::Val {
  explicit SpatialNavigationDirection(Handle h) noexcept;
public:
   explicit SpatialNavigationDirection(const emlite::Val &v) noexcept;
  static SpatialNavigationDirection take_ownership(Handle h) noexcept;
    [[nodiscard]] SpatialNavigationDirection clone() const noexcept;
  static const SpatialNavigationDirection up();
  static const SpatialNavigationDirection down();
  static const SpatialNavigationDirection left();
  static const SpatialNavigationDirection right();
};

/// Enum type FocusableAreaSearchMode
/// [`FocusableAreaSearchMode`](https://developer.mozilla.org/en-US/docs/Web/API/FocusableAreaSearchMode)
class FocusableAreaSearchMode : public emlite::Val {
  explicit FocusableAreaSearchMode(Handle h) noexcept;
public:
   explicit FocusableAreaSearchMode(const emlite::Val &v) noexcept;
  static FocusableAreaSearchMode take_ownership(Handle h) noexcept;
    [[nodiscard]] FocusableAreaSearchMode clone() const noexcept;
  static const FocusableAreaSearchMode visible();
  static const FocusableAreaSearchMode all();
};

/// Enum type CSSNumericBaseType
/// [`CSSNumericBaseType`](https://developer.mozilla.org/en-US/docs/Web/API/CSSNumericBaseType)
class CSSNumericBaseType : public emlite::Val {
  explicit CSSNumericBaseType(Handle h) noexcept;
public:
   explicit CSSNumericBaseType(const emlite::Val &v) noexcept;
  static CSSNumericBaseType take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSNumericBaseType clone() const noexcept;
  static const CSSNumericBaseType length();
  static const CSSNumericBaseType angle();
  static const CSSNumericBaseType time();
  static const CSSNumericBaseType frequency();
  static const CSSNumericBaseType resolution();
  static const CSSNumericBaseType flex();
  static const CSSNumericBaseType percent();
};

/// Enum type CSSMathOperator
/// [`CSSMathOperator`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMathOperator)
class CSSMathOperator : public emlite::Val {
  explicit CSSMathOperator(Handle h) noexcept;
public:
   explicit CSSMathOperator(const emlite::Val &v) noexcept;
  static CSSMathOperator take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSMathOperator clone() const noexcept;
  static const CSSMathOperator sum();
  static const CSSMathOperator product();
  static const CSSMathOperator negate();
  static const CSSMathOperator invert();
  static const CSSMathOperator min();
  static const CSSMathOperator max();
  static const CSSMathOperator clamp();
};

/// Enum type ScrollBehavior
/// [`ScrollBehavior`](https://developer.mozilla.org/en-US/docs/Web/API/ScrollBehavior)
class ScrollBehavior : public emlite::Val {
  explicit ScrollBehavior(Handle h) noexcept;
public:
   explicit ScrollBehavior(const emlite::Val &v) noexcept;
  static ScrollBehavior take_ownership(Handle h) noexcept;
    [[nodiscard]] ScrollBehavior clone() const noexcept;
  static const ScrollBehavior auto_();
  static const ScrollBehavior instant();
  static const ScrollBehavior smooth();
};

/// Enum type ScrollLogicalPosition
/// [`ScrollLogicalPosition`](https://developer.mozilla.org/en-US/docs/Web/API/ScrollLogicalPosition)
class ScrollLogicalPosition : public emlite::Val {
  explicit ScrollLogicalPosition(Handle h) noexcept;
public:
   explicit ScrollLogicalPosition(const emlite::Val &v) noexcept;
  static ScrollLogicalPosition take_ownership(Handle h) noexcept;
    [[nodiscard]] ScrollLogicalPosition clone() const noexcept;
  static const ScrollLogicalPosition start();
  static const ScrollLogicalPosition center();
  static const ScrollLogicalPosition end();
  static const ScrollLogicalPosition nearest();
};

/// Enum type ScrollIntoViewContainer
/// [`ScrollIntoViewContainer`](https://developer.mozilla.org/en-US/docs/Web/API/ScrollIntoViewContainer)
class ScrollIntoViewContainer : public emlite::Val {
  explicit ScrollIntoViewContainer(Handle h) noexcept;
public:
   explicit ScrollIntoViewContainer(const emlite::Val &v) noexcept;
  static ScrollIntoViewContainer take_ownership(Handle h) noexcept;
    [[nodiscard]] ScrollIntoViewContainer clone() const noexcept;
  static const ScrollIntoViewContainer all();
  static const ScrollIntoViewContainer nearest();
};

/// Enum type CSSBoxType
/// [`CSSBoxType`](https://developer.mozilla.org/en-US/docs/Web/API/CSSBoxType)
class CSSBoxType : public emlite::Val {
  explicit CSSBoxType(Handle h) noexcept;
public:
   explicit CSSBoxType(const emlite::Val &v) noexcept;
  static CSSBoxType take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSBoxType clone() const noexcept;
  static const CSSBoxType margin();
  static const CSSBoxType border();
  static const CSSBoxType padding();
  static const CSSBoxType content();
};

/// Enum type DevicePostureType
/// [`DevicePostureType`](https://developer.mozilla.org/en-US/docs/Web/API/DevicePostureType)
class DevicePostureType : public emlite::Val {
  explicit DevicePostureType(Handle h) noexcept;
public:
   explicit DevicePostureType(const emlite::Val &v) noexcept;
  static DevicePostureType take_ownership(Handle h) noexcept;
    [[nodiscard]] DevicePostureType clone() const noexcept;
  static const DevicePostureType continuous();
  static const DevicePostureType folded();
};

/// Enum type ItemType
/// [`ItemType`](https://developer.mozilla.org/en-US/docs/Web/API/ItemType)
class ItemType : public emlite::Val {
  explicit ItemType(Handle h) noexcept;
public:
   explicit ItemType(const emlite::Val &v) noexcept;
  static ItemType take_ownership(Handle h) noexcept;
    [[nodiscard]] ItemType clone() const noexcept;
  static const ItemType product();
  static const ItemType subscription();
};

/// Enum type ShadowRootMode
/// [`ShadowRootMode`](https://developer.mozilla.org/en-US/docs/Web/API/ShadowRootMode)
class ShadowRootMode : public emlite::Val {
  explicit ShadowRootMode(Handle h) noexcept;
public:
   explicit ShadowRootMode(const emlite::Val &v) noexcept;
  static ShadowRootMode take_ownership(Handle h) noexcept;
    [[nodiscard]] ShadowRootMode clone() const noexcept;
  static const ShadowRootMode open();
  static const ShadowRootMode closed();
};

/// Enum type SlotAssignmentMode
/// [`SlotAssignmentMode`](https://developer.mozilla.org/en-US/docs/Web/API/SlotAssignmentMode)
class SlotAssignmentMode : public emlite::Val {
  explicit SlotAssignmentMode(Handle h) noexcept;
public:
   explicit SlotAssignmentMode(const emlite::Val &v) noexcept;
  static SlotAssignmentMode take_ownership(Handle h) noexcept;
    [[nodiscard]] SlotAssignmentMode clone() const noexcept;
  static const SlotAssignmentMode manual();
  static const SlotAssignmentMode named();
};

/// Enum type UnderlineStyle
/// [`UnderlineStyle`](https://developer.mozilla.org/en-US/docs/Web/API/UnderlineStyle)
class UnderlineStyle : public emlite::Val {
  explicit UnderlineStyle(Handle h) noexcept;
public:
   explicit UnderlineStyle(const emlite::Val &v) noexcept;
  static UnderlineStyle take_ownership(Handle h) noexcept;
    [[nodiscard]] UnderlineStyle clone() const noexcept;
  static const UnderlineStyle none();
  static const UnderlineStyle solid();
  static const UnderlineStyle dotted();
  static const UnderlineStyle dashed();
  static const UnderlineStyle wavy();
};

/// Enum type UnderlineThickness
/// [`UnderlineThickness`](https://developer.mozilla.org/en-US/docs/Web/API/UnderlineThickness)
class UnderlineThickness : public emlite::Val {
  explicit UnderlineThickness(Handle h) noexcept;
public:
   explicit UnderlineThickness(const emlite::Val &v) noexcept;
  static UnderlineThickness take_ownership(Handle h) noexcept;
    [[nodiscard]] UnderlineThickness clone() const noexcept;
  static const UnderlineThickness none();
  static const UnderlineThickness thin();
  static const UnderlineThickness thick();
};

/// Enum type MediaKeysRequirement
/// [`MediaKeysRequirement`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeysRequirement)
class MediaKeysRequirement : public emlite::Val {
  explicit MediaKeysRequirement(Handle h) noexcept;
public:
   explicit MediaKeysRequirement(const emlite::Val &v) noexcept;
  static MediaKeysRequirement take_ownership(Handle h) noexcept;
    [[nodiscard]] MediaKeysRequirement clone() const noexcept;
  static const MediaKeysRequirement required();
  static const MediaKeysRequirement optional();
  static const MediaKeysRequirement not_allowed();
};

/// Enum type MediaKeySessionType
/// [`MediaKeySessionType`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeySessionType)
class MediaKeySessionType : public emlite::Val {
  explicit MediaKeySessionType(Handle h) noexcept;
public:
   explicit MediaKeySessionType(const emlite::Val &v) noexcept;
  static MediaKeySessionType take_ownership(Handle h) noexcept;
    [[nodiscard]] MediaKeySessionType clone() const noexcept;
  static const MediaKeySessionType temporary();
  static const MediaKeySessionType persistent_license();
};

/// Enum type MediaKeySessionClosedReason
/// [`MediaKeySessionClosedReason`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeySessionClosedReason)
class MediaKeySessionClosedReason : public emlite::Val {
  explicit MediaKeySessionClosedReason(Handle h) noexcept;
public:
   explicit MediaKeySessionClosedReason(const emlite::Val &v) noexcept;
  static MediaKeySessionClosedReason take_ownership(Handle h) noexcept;
    [[nodiscard]] MediaKeySessionClosedReason clone() const noexcept;
  static const MediaKeySessionClosedReason internal_error();
  static const MediaKeySessionClosedReason closed_by_application();
  static const MediaKeySessionClosedReason release_acknowledged();
  static const MediaKeySessionClosedReason hardware_context_reset();
  static const MediaKeySessionClosedReason resource_evicted();
};

/// Enum type MediaKeyStatus
/// [`MediaKeyStatus`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeyStatus)
class MediaKeyStatus : public emlite::Val {
  explicit MediaKeyStatus(Handle h) noexcept;
public:
   explicit MediaKeyStatus(const emlite::Val &v) noexcept;
  static MediaKeyStatus take_ownership(Handle h) noexcept;
    [[nodiscard]] MediaKeyStatus clone() const noexcept;
  static const MediaKeyStatus usable();
  static const MediaKeyStatus expired();
  static const MediaKeyStatus released();
  static const MediaKeyStatus output_restricted();
  static const MediaKeyStatus output_downscaled();
  static const MediaKeyStatus usable_in_future();
  static const MediaKeyStatus status_pending();
  static const MediaKeyStatus internal_error();
};

/// Enum type MediaKeyMessageType
/// [`MediaKeyMessageType`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeyMessageType)
class MediaKeyMessageType : public emlite::Val {
  explicit MediaKeyMessageType(Handle h) noexcept;
public:
   explicit MediaKeyMessageType(const emlite::Val &v) noexcept;
  static MediaKeyMessageType take_ownership(Handle h) noexcept;
    [[nodiscard]] MediaKeyMessageType clone() const noexcept;
  static const MediaKeyMessageType license_request();
  static const MediaKeyMessageType license_renewal();
  static const MediaKeyMessageType license_release();
  static const MediaKeyMessageType individualization_request();
};

/// Enum type IdentityCredentialRequestOptionsContext
/// [`IdentityCredentialRequestOptionsContext`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityCredentialRequestOptionsContext)
class IdentityCredentialRequestOptionsContext : public emlite::Val {
  explicit IdentityCredentialRequestOptionsContext(Handle h) noexcept;
public:
   explicit IdentityCredentialRequestOptionsContext(const emlite::Val &v) noexcept;
  static IdentityCredentialRequestOptionsContext take_ownership(Handle h) noexcept;
    [[nodiscard]] IdentityCredentialRequestOptionsContext clone() const noexcept;
  static const IdentityCredentialRequestOptionsContext signin();
  static const IdentityCredentialRequestOptionsContext signup();
  static const IdentityCredentialRequestOptionsContext use();
  static const IdentityCredentialRequestOptionsContext continue_();
};

/// Enum type IdentityCredentialRequestOptionsMode
/// [`IdentityCredentialRequestOptionsMode`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityCredentialRequestOptionsMode)
class IdentityCredentialRequestOptionsMode : public emlite::Val {
  explicit IdentityCredentialRequestOptionsMode(Handle h) noexcept;
public:
   explicit IdentityCredentialRequestOptionsMode(const emlite::Val &v) noexcept;
  static IdentityCredentialRequestOptionsMode take_ownership(Handle h) noexcept;
    [[nodiscard]] IdentityCredentialRequestOptionsMode clone() const noexcept;
  static const IdentityCredentialRequestOptionsMode active();
  static const IdentityCredentialRequestOptionsMode passive();
};

/// Enum type OpaqueProperty
/// [`OpaqueProperty`](https://developer.mozilla.org/en-US/docs/Web/API/OpaqueProperty)
class OpaqueProperty : public emlite::Val {
  explicit OpaqueProperty(Handle h) noexcept;
public:
   explicit OpaqueProperty(const emlite::Val &v) noexcept;
  static OpaqueProperty take_ownership(Handle h) noexcept;
    [[nodiscard]] OpaqueProperty clone() const noexcept;
  static const OpaqueProperty opaque();
};

/// Enum type FenceReportingDestination
/// [`FenceReportingDestination`](https://developer.mozilla.org/en-US/docs/Web/API/FenceReportingDestination)
class FenceReportingDestination : public emlite::Val {
  explicit FenceReportingDestination(Handle h) noexcept;
public:
   explicit FenceReportingDestination(const emlite::Val &v) noexcept;
  static FenceReportingDestination take_ownership(Handle h) noexcept;
    [[nodiscard]] FenceReportingDestination clone() const noexcept;
  static const FenceReportingDestination buyer();
  static const FenceReportingDestination seller();
  static const FenceReportingDestination component_seller();
  static const FenceReportingDestination direct_seller();
  static const FenceReportingDestination shared_storage_select_url();
};

/// Enum type RequestDestination
/// [`RequestDestination`](https://developer.mozilla.org/en-US/docs/Web/API/RequestDestination)
class RequestDestination : public emlite::Val {
  explicit RequestDestination(Handle h) noexcept;
public:
   explicit RequestDestination(const emlite::Val &v) noexcept;
  static RequestDestination take_ownership(Handle h) noexcept;
    [[nodiscard]] RequestDestination clone() const noexcept;
  static const RequestDestination none();
  static const RequestDestination audio();
  static const RequestDestination audioworklet();
  static const RequestDestination document();
  static const RequestDestination embed();
  static const RequestDestination font();
  static const RequestDestination frame();
  static const RequestDestination iframe();
  static const RequestDestination image();
  static const RequestDestination json();
  static const RequestDestination manifest();
  static const RequestDestination object();
  static const RequestDestination paintworklet();
  static const RequestDestination report();
  static const RequestDestination script();
  static const RequestDestination sharedworker();
  static const RequestDestination style();
  static const RequestDestination track();
  static const RequestDestination video();
  static const RequestDestination worker();
  static const RequestDestination xslt();
};

/// Enum type RequestMode
/// [`RequestMode`](https://developer.mozilla.org/en-US/docs/Web/API/RequestMode)
class RequestMode : public emlite::Val {
  explicit RequestMode(Handle h) noexcept;
public:
   explicit RequestMode(const emlite::Val &v) noexcept;
  static RequestMode take_ownership(Handle h) noexcept;
    [[nodiscard]] RequestMode clone() const noexcept;
  static const RequestMode navigate();
  static const RequestMode same_origin();
  static const RequestMode no_cors();
  static const RequestMode cors();
};

/// Enum type RequestCredentials
/// [`RequestCredentials`](https://developer.mozilla.org/en-US/docs/Web/API/RequestCredentials)
class RequestCredentials : public emlite::Val {
  explicit RequestCredentials(Handle h) noexcept;
public:
   explicit RequestCredentials(const emlite::Val &v) noexcept;
  static RequestCredentials take_ownership(Handle h) noexcept;
    [[nodiscard]] RequestCredentials clone() const noexcept;
  static const RequestCredentials omit();
  static const RequestCredentials same_origin();
  static const RequestCredentials include();
};

/// Enum type RequestCache
/// [`RequestCache`](https://developer.mozilla.org/en-US/docs/Web/API/RequestCache)
class RequestCache : public emlite::Val {
  explicit RequestCache(Handle h) noexcept;
public:
   explicit RequestCache(const emlite::Val &v) noexcept;
  static RequestCache take_ownership(Handle h) noexcept;
    [[nodiscard]] RequestCache clone() const noexcept;
  static const RequestCache default_();
  static const RequestCache no_store();
  static const RequestCache reload();
  static const RequestCache no_cache();
  static const RequestCache force_cache();
  static const RequestCache only_if_cached();
};

/// Enum type RequestRedirect
/// [`RequestRedirect`](https://developer.mozilla.org/en-US/docs/Web/API/RequestRedirect)
class RequestRedirect : public emlite::Val {
  explicit RequestRedirect(Handle h) noexcept;
public:
   explicit RequestRedirect(const emlite::Val &v) noexcept;
  static RequestRedirect take_ownership(Handle h) noexcept;
    [[nodiscard]] RequestRedirect clone() const noexcept;
  static const RequestRedirect follow();
  static const RequestRedirect error();
  static const RequestRedirect manual();
};

/// Enum type RequestDuplex
/// [`RequestDuplex`](https://developer.mozilla.org/en-US/docs/Web/API/RequestDuplex)
class RequestDuplex : public emlite::Val {
  explicit RequestDuplex(Handle h) noexcept;
public:
   explicit RequestDuplex(const emlite::Val &v) noexcept;
  static RequestDuplex take_ownership(Handle h) noexcept;
    [[nodiscard]] RequestDuplex clone() const noexcept;
  static const RequestDuplex half();
};

/// Enum type RequestPriority
/// [`RequestPriority`](https://developer.mozilla.org/en-US/docs/Web/API/RequestPriority)
class RequestPriority : public emlite::Val {
  explicit RequestPriority(Handle h) noexcept;
public:
   explicit RequestPriority(const emlite::Val &v) noexcept;
  static RequestPriority take_ownership(Handle h) noexcept;
    [[nodiscard]] RequestPriority clone() const noexcept;
  static const RequestPriority high();
  static const RequestPriority low();
  static const RequestPriority auto_();
};

/// Enum type ResponseType
/// [`ResponseType`](https://developer.mozilla.org/en-US/docs/Web/API/ResponseType)
class ResponseType : public emlite::Val {
  explicit ResponseType(Handle h) noexcept;
public:
   explicit ResponseType(const emlite::Val &v) noexcept;
  static ResponseType take_ownership(Handle h) noexcept;
    [[nodiscard]] ResponseType clone() const noexcept;
  static const ResponseType basic();
  static const ResponseType cors();
  static const ResponseType default_();
  static const ResponseType error();
  static const ResponseType opaque();
  static const ResponseType opaqueredirect();
};

/// Enum type FileSystemPermissionMode
/// [`FileSystemPermissionMode`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemPermissionMode)
class FileSystemPermissionMode : public emlite::Val {
  explicit FileSystemPermissionMode(Handle h) noexcept;
public:
   explicit FileSystemPermissionMode(const emlite::Val &v) noexcept;
  static FileSystemPermissionMode take_ownership(Handle h) noexcept;
    [[nodiscard]] FileSystemPermissionMode clone() const noexcept;
  static const FileSystemPermissionMode read();
  static const FileSystemPermissionMode readwrite();
};

/// Enum type WellKnownDirectory
/// [`WellKnownDirectory`](https://developer.mozilla.org/en-US/docs/Web/API/WellKnownDirectory)
class WellKnownDirectory : public emlite::Val {
  explicit WellKnownDirectory(Handle h) noexcept;
public:
   explicit WellKnownDirectory(const emlite::Val &v) noexcept;
  static WellKnownDirectory take_ownership(Handle h) noexcept;
    [[nodiscard]] WellKnownDirectory clone() const noexcept;
  static const WellKnownDirectory desktop();
  static const WellKnownDirectory documents();
  static const WellKnownDirectory downloads();
  static const WellKnownDirectory music();
  static const WellKnownDirectory pictures();
  static const WellKnownDirectory videos();
};

/// Enum type FileSystemHandleKind
/// [`FileSystemHandleKind`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemHandleKind)
class FileSystemHandleKind : public emlite::Val {
  explicit FileSystemHandleKind(Handle h) noexcept;
public:
   explicit FileSystemHandleKind(const emlite::Val &v) noexcept;
  static FileSystemHandleKind take_ownership(Handle h) noexcept;
    [[nodiscard]] FileSystemHandleKind clone() const noexcept;
  static const FileSystemHandleKind file();
  static const FileSystemHandleKind directory();
};

/// Enum type WriteCommandType
/// [`WriteCommandType`](https://developer.mozilla.org/en-US/docs/Web/API/WriteCommandType)
class WriteCommandType : public emlite::Val {
  explicit WriteCommandType(Handle h) noexcept;
public:
   explicit WriteCommandType(const emlite::Val &v) noexcept;
  static WriteCommandType take_ownership(Handle h) noexcept;
    [[nodiscard]] WriteCommandType clone() const noexcept;
  static const WriteCommandType write();
  static const WriteCommandType seek();
  static const WriteCommandType truncate();
};

/// Enum type FullscreenNavigationUI
/// [`FullscreenNavigationUI`](https://developer.mozilla.org/en-US/docs/Web/API/FullscreenNavigationUI)
class FullscreenNavigationUI : public emlite::Val {
  explicit FullscreenNavigationUI(Handle h) noexcept;
public:
   explicit FullscreenNavigationUI(const emlite::Val &v) noexcept;
  static FullscreenNavigationUI take_ownership(Handle h) noexcept;
    [[nodiscard]] FullscreenNavigationUI clone() const noexcept;
  static const FullscreenNavigationUI auto_();
  static const FullscreenNavigationUI show();
  static const FullscreenNavigationUI hide();
};

/// Enum type GamepadHand
/// [`GamepadHand`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadHand)
class GamepadHand : public emlite::Val {
  explicit GamepadHand(Handle h) noexcept;
public:
   explicit GamepadHand(const emlite::Val &v) noexcept;
  static GamepadHand take_ownership(Handle h) noexcept;
    [[nodiscard]] GamepadHand clone() const noexcept;
  static const GamepadHand none();
  static const GamepadHand left();
  static const GamepadHand right();
};

/// Enum type GamepadMappingType
/// [`GamepadMappingType`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadMappingType)
class GamepadMappingType : public emlite::Val {
  explicit GamepadMappingType(Handle h) noexcept;
public:
   explicit GamepadMappingType(const emlite::Val &v) noexcept;
  static GamepadMappingType take_ownership(Handle h) noexcept;
    [[nodiscard]] GamepadMappingType clone() const noexcept;
  static const GamepadMappingType none();
  static const GamepadMappingType standard();
  static const GamepadMappingType xr_standard();
};

/// Enum type GamepadHapticsResult
/// [`GamepadHapticsResult`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadHapticsResult)
class GamepadHapticsResult : public emlite::Val {
  explicit GamepadHapticsResult(Handle h) noexcept;
public:
   explicit GamepadHapticsResult(const emlite::Val &v) noexcept;
  static GamepadHapticsResult take_ownership(Handle h) noexcept;
    [[nodiscard]] GamepadHapticsResult clone() const noexcept;
  static const GamepadHapticsResult complete();
  static const GamepadHapticsResult preempted();
};

/// Enum type GamepadHapticEffectType
/// [`GamepadHapticEffectType`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadHapticEffectType)
class GamepadHapticEffectType : public emlite::Val {
  explicit GamepadHapticEffectType(Handle h) noexcept;
public:
   explicit GamepadHapticEffectType(const emlite::Val &v) noexcept;
  static GamepadHapticEffectType take_ownership(Handle h) noexcept;
    [[nodiscard]] GamepadHapticEffectType clone() const noexcept;
  static const GamepadHapticEffectType dual_rumble();
  static const GamepadHapticEffectType trigger_rumble();
};

/// Enum type GyroscopeLocalCoordinateSystem
/// [`GyroscopeLocalCoordinateSystem`](https://developer.mozilla.org/en-US/docs/Web/API/GyroscopeLocalCoordinateSystem)
class GyroscopeLocalCoordinateSystem : public emlite::Val {
  explicit GyroscopeLocalCoordinateSystem(Handle h) noexcept;
public:
   explicit GyroscopeLocalCoordinateSystem(const emlite::Val &v) noexcept;
  static GyroscopeLocalCoordinateSystem take_ownership(Handle h) noexcept;
    [[nodiscard]] GyroscopeLocalCoordinateSystem clone() const noexcept;
  static const GyroscopeLocalCoordinateSystem device();
  static const GyroscopeLocalCoordinateSystem screen();
};

/// Enum type HandwritingRecognitionType
/// [`HandwritingRecognitionType`](https://developer.mozilla.org/en-US/docs/Web/API/HandwritingRecognitionType)
class HandwritingRecognitionType : public emlite::Val {
  explicit HandwritingRecognitionType(Handle h) noexcept;
public:
   explicit HandwritingRecognitionType(const emlite::Val &v) noexcept;
  static HandwritingRecognitionType take_ownership(Handle h) noexcept;
    [[nodiscard]] HandwritingRecognitionType clone() const noexcept;
  static const HandwritingRecognitionType text();
  static const HandwritingRecognitionType per_character();
};

/// Enum type HandwritingInputType
/// [`HandwritingInputType`](https://developer.mozilla.org/en-US/docs/Web/API/HandwritingInputType)
class HandwritingInputType : public emlite::Val {
  explicit HandwritingInputType(Handle h) noexcept;
public:
   explicit HandwritingInputType(const emlite::Val &v) noexcept;
  static HandwritingInputType take_ownership(Handle h) noexcept;
    [[nodiscard]] HandwritingInputType clone() const noexcept;
  static const HandwritingInputType mouse();
  static const HandwritingInputType stylus();
  static const HandwritingInputType touch();
};

/// Enum type DocumentReadyState
/// [`DocumentReadyState`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentReadyState)
class DocumentReadyState : public emlite::Val {
  explicit DocumentReadyState(Handle h) noexcept;
public:
   explicit DocumentReadyState(const emlite::Val &v) noexcept;
  static DocumentReadyState take_ownership(Handle h) noexcept;
    [[nodiscard]] DocumentReadyState clone() const noexcept;
  static const DocumentReadyState loading();
  static const DocumentReadyState interactive();
  static const DocumentReadyState complete();
};

/// Enum type DocumentVisibilityState
/// [`DocumentVisibilityState`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentVisibilityState)
class DocumentVisibilityState : public emlite::Val {
  explicit DocumentVisibilityState(Handle h) noexcept;
public:
   explicit DocumentVisibilityState(const emlite::Val &v) noexcept;
  static DocumentVisibilityState take_ownership(Handle h) noexcept;
    [[nodiscard]] DocumentVisibilityState clone() const noexcept;
  static const DocumentVisibilityState visible();
  static const DocumentVisibilityState hidden();
};

/// Enum type CanPlayTypeResult
/// [`CanPlayTypeResult`](https://developer.mozilla.org/en-US/docs/Web/API/CanPlayTypeResult)
class CanPlayTypeResult : public emlite::Val {
  explicit CanPlayTypeResult(Handle h) noexcept;
public:
   explicit CanPlayTypeResult(const emlite::Val &v) noexcept;
  static CanPlayTypeResult take_ownership(Handle h) noexcept;
    [[nodiscard]] CanPlayTypeResult clone() const noexcept;
  static const CanPlayTypeResult none();
  static const CanPlayTypeResult maybe();
  static const CanPlayTypeResult probably();
};

/// Enum type TextTrackMode
/// [`TextTrackMode`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrackMode)
class TextTrackMode : public emlite::Val {
  explicit TextTrackMode(Handle h) noexcept;
public:
   explicit TextTrackMode(const emlite::Val &v) noexcept;
  static TextTrackMode take_ownership(Handle h) noexcept;
    [[nodiscard]] TextTrackMode clone() const noexcept;
  static const TextTrackMode disabled();
  static const TextTrackMode hidden();
  static const TextTrackMode showing();
};

/// Enum type TextTrackKind
/// [`TextTrackKind`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrackKind)
class TextTrackKind : public emlite::Val {
  explicit TextTrackKind(Handle h) noexcept;
public:
   explicit TextTrackKind(const emlite::Val &v) noexcept;
  static TextTrackKind take_ownership(Handle h) noexcept;
    [[nodiscard]] TextTrackKind clone() const noexcept;
  static const TextTrackKind subtitles();
  static const TextTrackKind captions();
  static const TextTrackKind descriptions();
  static const TextTrackKind chapters();
  static const TextTrackKind metadata();
};

/// Enum type SelectionMode
/// [`SelectionMode`](https://developer.mozilla.org/en-US/docs/Web/API/SelectionMode)
class SelectionMode : public emlite::Val {
  explicit SelectionMode(Handle h) noexcept;
public:
   explicit SelectionMode(const emlite::Val &v) noexcept;
  static SelectionMode take_ownership(Handle h) noexcept;
    [[nodiscard]] SelectionMode clone() const noexcept;
  static const SelectionMode select();
  static const SelectionMode start();
  static const SelectionMode end();
  static const SelectionMode preserve();
};

/// Enum type PredefinedColorSpace
/// [`PredefinedColorSpace`](https://developer.mozilla.org/en-US/docs/Web/API/PredefinedColorSpace)
class PredefinedColorSpace : public emlite::Val {
  explicit PredefinedColorSpace(Handle h) noexcept;
public:
   explicit PredefinedColorSpace(const emlite::Val &v) noexcept;
  static PredefinedColorSpace take_ownership(Handle h) noexcept;
    [[nodiscard]] PredefinedColorSpace clone() const noexcept;
  static const PredefinedColorSpace srgb();
  static const PredefinedColorSpace display_p3();
};

/// Enum type CanvasColorType
/// [`CanvasColorType`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasColorType)
class CanvasColorType : public emlite::Val {
  explicit CanvasColorType(Handle h) noexcept;
public:
   explicit CanvasColorType(const emlite::Val &v) noexcept;
  static CanvasColorType take_ownership(Handle h) noexcept;
    [[nodiscard]] CanvasColorType clone() const noexcept;
  static const CanvasColorType unorm8();
  static const CanvasColorType float16();
};

/// Enum type CanvasFillRule
/// [`CanvasFillRule`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasFillRule)
class CanvasFillRule : public emlite::Val {
  explicit CanvasFillRule(Handle h) noexcept;
public:
   explicit CanvasFillRule(const emlite::Val &v) noexcept;
  static CanvasFillRule take_ownership(Handle h) noexcept;
    [[nodiscard]] CanvasFillRule clone() const noexcept;
  static const CanvasFillRule nonzero();
  static const CanvasFillRule evenodd();
};

/// Enum type ImageSmoothingQuality
/// [`ImageSmoothingQuality`](https://developer.mozilla.org/en-US/docs/Web/API/ImageSmoothingQuality)
class ImageSmoothingQuality : public emlite::Val {
  explicit ImageSmoothingQuality(Handle h) noexcept;
public:
   explicit ImageSmoothingQuality(const emlite::Val &v) noexcept;
  static ImageSmoothingQuality take_ownership(Handle h) noexcept;
    [[nodiscard]] ImageSmoothingQuality clone() const noexcept;
  static const ImageSmoothingQuality low();
  static const ImageSmoothingQuality medium();
  static const ImageSmoothingQuality high();
};

/// Enum type CanvasLineCap
/// [`CanvasLineCap`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasLineCap)
class CanvasLineCap : public emlite::Val {
  explicit CanvasLineCap(Handle h) noexcept;
public:
   explicit CanvasLineCap(const emlite::Val &v) noexcept;
  static CanvasLineCap take_ownership(Handle h) noexcept;
    [[nodiscard]] CanvasLineCap clone() const noexcept;
  static const CanvasLineCap butt();
  static const CanvasLineCap round();
  static const CanvasLineCap square();
};

/// Enum type CanvasLineJoin
/// [`CanvasLineJoin`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasLineJoin)
class CanvasLineJoin : public emlite::Val {
  explicit CanvasLineJoin(Handle h) noexcept;
public:
   explicit CanvasLineJoin(const emlite::Val &v) noexcept;
  static CanvasLineJoin take_ownership(Handle h) noexcept;
    [[nodiscard]] CanvasLineJoin clone() const noexcept;
  static const CanvasLineJoin round();
  static const CanvasLineJoin bevel();
  static const CanvasLineJoin miter();
};

/// Enum type CanvasTextAlign
/// [`CanvasTextAlign`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasTextAlign)
class CanvasTextAlign : public emlite::Val {
  explicit CanvasTextAlign(Handle h) noexcept;
public:
   explicit CanvasTextAlign(const emlite::Val &v) noexcept;
  static CanvasTextAlign take_ownership(Handle h) noexcept;
    [[nodiscard]] CanvasTextAlign clone() const noexcept;
  static const CanvasTextAlign start();
  static const CanvasTextAlign end();
  static const CanvasTextAlign left();
  static const CanvasTextAlign right();
  static const CanvasTextAlign center();
};

/// Enum type CanvasTextBaseline
/// [`CanvasTextBaseline`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasTextBaseline)
class CanvasTextBaseline : public emlite::Val {
  explicit CanvasTextBaseline(Handle h) noexcept;
public:
   explicit CanvasTextBaseline(const emlite::Val &v) noexcept;
  static CanvasTextBaseline take_ownership(Handle h) noexcept;
    [[nodiscard]] CanvasTextBaseline clone() const noexcept;
  static const CanvasTextBaseline top();
  static const CanvasTextBaseline hanging();
  static const CanvasTextBaseline middle();
  static const CanvasTextBaseline alphabetic();
  static const CanvasTextBaseline ideographic();
  static const CanvasTextBaseline bottom();
};

/// Enum type CanvasDirection
/// [`CanvasDirection`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasDirection)
class CanvasDirection : public emlite::Val {
  explicit CanvasDirection(Handle h) noexcept;
public:
   explicit CanvasDirection(const emlite::Val &v) noexcept;
  static CanvasDirection take_ownership(Handle h) noexcept;
    [[nodiscard]] CanvasDirection clone() const noexcept;
  static const CanvasDirection ltr();
  static const CanvasDirection rtl();
  static const CanvasDirection inherit();
};

/// Enum type CanvasFontKerning
/// [`CanvasFontKerning`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasFontKerning)
class CanvasFontKerning : public emlite::Val {
  explicit CanvasFontKerning(Handle h) noexcept;
public:
   explicit CanvasFontKerning(const emlite::Val &v) noexcept;
  static CanvasFontKerning take_ownership(Handle h) noexcept;
    [[nodiscard]] CanvasFontKerning clone() const noexcept;
  static const CanvasFontKerning auto_();
  static const CanvasFontKerning normal();
  static const CanvasFontKerning none();
};

/// Enum type CanvasFontStretch
/// [`CanvasFontStretch`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasFontStretch)
class CanvasFontStretch : public emlite::Val {
  explicit CanvasFontStretch(Handle h) noexcept;
public:
   explicit CanvasFontStretch(const emlite::Val &v) noexcept;
  static CanvasFontStretch take_ownership(Handle h) noexcept;
    [[nodiscard]] CanvasFontStretch clone() const noexcept;
  static const CanvasFontStretch ultra_condensed();
  static const CanvasFontStretch extra_condensed();
  static const CanvasFontStretch condensed();
  static const CanvasFontStretch semi_condensed();
  static const CanvasFontStretch normal();
  static const CanvasFontStretch semi_expanded();
  static const CanvasFontStretch expanded();
  static const CanvasFontStretch extra_expanded();
  static const CanvasFontStretch ultra_expanded();
};

/// Enum type CanvasFontVariantCaps
/// [`CanvasFontVariantCaps`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasFontVariantCaps)
class CanvasFontVariantCaps : public emlite::Val {
  explicit CanvasFontVariantCaps(Handle h) noexcept;
public:
   explicit CanvasFontVariantCaps(const emlite::Val &v) noexcept;
  static CanvasFontVariantCaps take_ownership(Handle h) noexcept;
    [[nodiscard]] CanvasFontVariantCaps clone() const noexcept;
  static const CanvasFontVariantCaps normal();
  static const CanvasFontVariantCaps small_caps();
  static const CanvasFontVariantCaps all_small_caps();
  static const CanvasFontVariantCaps petite_caps();
  static const CanvasFontVariantCaps all_petite_caps();
  static const CanvasFontVariantCaps unicase();
  static const CanvasFontVariantCaps titling_caps();
};

/// Enum type CanvasTextRendering
/// [`CanvasTextRendering`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasTextRendering)
class CanvasTextRendering : public emlite::Val {
  explicit CanvasTextRendering(Handle h) noexcept;
public:
   explicit CanvasTextRendering(const emlite::Val &v) noexcept;
  static CanvasTextRendering take_ownership(Handle h) noexcept;
    [[nodiscard]] CanvasTextRendering clone() const noexcept;
  static const CanvasTextRendering auto_();
  static const CanvasTextRendering optimizeSpeed();
  static const CanvasTextRendering optimizeLegibility();
  static const CanvasTextRendering geometricPrecision();
};

/// Enum type OffscreenRenderingContextId
/// [`OffscreenRenderingContextId`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenRenderingContextId)
class OffscreenRenderingContextId : public emlite::Val {
  explicit OffscreenRenderingContextId(Handle h) noexcept;
public:
   explicit OffscreenRenderingContextId(const emlite::Val &v) noexcept;
  static OffscreenRenderingContextId take_ownership(Handle h) noexcept;
    [[nodiscard]] OffscreenRenderingContextId clone() const noexcept;
  static const OffscreenRenderingContextId _2d();
  static const OffscreenRenderingContextId bitmaprenderer();
  static const OffscreenRenderingContextId webgl();
  static const OffscreenRenderingContextId webgl2();
  static const OffscreenRenderingContextId webgpu();
};

/// Enum type ScrollRestoration
/// [`ScrollRestoration`](https://developer.mozilla.org/en-US/docs/Web/API/ScrollRestoration)
class ScrollRestoration : public emlite::Val {
  explicit ScrollRestoration(Handle h) noexcept;
public:
   explicit ScrollRestoration(const emlite::Val &v) noexcept;
  static ScrollRestoration take_ownership(Handle h) noexcept;
    [[nodiscard]] ScrollRestoration clone() const noexcept;
  static const ScrollRestoration auto_();
  static const ScrollRestoration manual();
};

/// Enum type NavigationHistoryBehavior
/// [`NavigationHistoryBehavior`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationHistoryBehavior)
class NavigationHistoryBehavior : public emlite::Val {
  explicit NavigationHistoryBehavior(Handle h) noexcept;
public:
   explicit NavigationHistoryBehavior(const emlite::Val &v) noexcept;
  static NavigationHistoryBehavior take_ownership(Handle h) noexcept;
    [[nodiscard]] NavigationHistoryBehavior clone() const noexcept;
  static const NavigationHistoryBehavior auto_();
  static const NavigationHistoryBehavior push();
  static const NavigationHistoryBehavior replace();
};

/// Enum type NavigationType
/// [`NavigationType`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationType)
class NavigationType : public emlite::Val {
  explicit NavigationType(Handle h) noexcept;
public:
   explicit NavigationType(const emlite::Val &v) noexcept;
  static NavigationType take_ownership(Handle h) noexcept;
    [[nodiscard]] NavigationType clone() const noexcept;
  static const NavigationType push();
  static const NavigationType replace();
  static const NavigationType reload();
  static const NavigationType traverse();
};

/// Enum type NavigationFocusReset
/// [`NavigationFocusReset`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationFocusReset)
class NavigationFocusReset : public emlite::Val {
  explicit NavigationFocusReset(Handle h) noexcept;
public:
   explicit NavigationFocusReset(const emlite::Val &v) noexcept;
  static NavigationFocusReset take_ownership(Handle h) noexcept;
    [[nodiscard]] NavigationFocusReset clone() const noexcept;
  static const NavigationFocusReset after_transition();
  static const NavigationFocusReset manual();
};

/// Enum type NavigationScrollBehavior
/// [`NavigationScrollBehavior`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationScrollBehavior)
class NavigationScrollBehavior : public emlite::Val {
  explicit NavigationScrollBehavior(Handle h) noexcept;
public:
   explicit NavigationScrollBehavior(const emlite::Val &v) noexcept;
  static NavigationScrollBehavior take_ownership(Handle h) noexcept;
    [[nodiscard]] NavigationScrollBehavior clone() const noexcept;
  static const NavigationScrollBehavior after_transition();
  static const NavigationScrollBehavior manual();
};

/// Enum type DOMParserSupportedType
/// [`DOMParserSupportedType`](https://developer.mozilla.org/en-US/docs/Web/API/DOMParserSupportedType)
class DOMParserSupportedType : public emlite::Val {
  explicit DOMParserSupportedType(Handle h) noexcept;
public:
   explicit DOMParserSupportedType(const emlite::Val &v) noexcept;
  static DOMParserSupportedType take_ownership(Handle h) noexcept;
    [[nodiscard]] DOMParserSupportedType clone() const noexcept;
  static const DOMParserSupportedType text_html();
  static const DOMParserSupportedType text_xml();
  static const DOMParserSupportedType application_xml();
  static const DOMParserSupportedType application_xhtml_xml();
  static const DOMParserSupportedType image_svg_xml();
};

/// Enum type ImageDataPixelFormat
/// [`ImageDataPixelFormat`](https://developer.mozilla.org/en-US/docs/Web/API/ImageDataPixelFormat)
class ImageDataPixelFormat : public emlite::Val {
  explicit ImageDataPixelFormat(Handle h) noexcept;
public:
   explicit ImageDataPixelFormat(const emlite::Val &v) noexcept;
  static ImageDataPixelFormat take_ownership(Handle h) noexcept;
    [[nodiscard]] ImageDataPixelFormat clone() const noexcept;
  static const ImageDataPixelFormat rgba_unorm8();
  static const ImageDataPixelFormat rgba_float16();
};

/// Enum type ImageOrientation
/// [`ImageOrientation`](https://developer.mozilla.org/en-US/docs/Web/API/ImageOrientation)
class ImageOrientation : public emlite::Val {
  explicit ImageOrientation(Handle h) noexcept;
public:
   explicit ImageOrientation(const emlite::Val &v) noexcept;
  static ImageOrientation take_ownership(Handle h) noexcept;
    [[nodiscard]] ImageOrientation clone() const noexcept;
  static const ImageOrientation from_image();
  static const ImageOrientation flipY();
};

/// Enum type PremultiplyAlpha
/// [`PremultiplyAlpha`](https://developer.mozilla.org/en-US/docs/Web/API/PremultiplyAlpha)
class PremultiplyAlpha : public emlite::Val {
  explicit PremultiplyAlpha(Handle h) noexcept;
public:
   explicit PremultiplyAlpha(const emlite::Val &v) noexcept;
  static PremultiplyAlpha take_ownership(Handle h) noexcept;
    [[nodiscard]] PremultiplyAlpha clone() const noexcept;
  static const PremultiplyAlpha none();
  static const PremultiplyAlpha premultiply();
  static const PremultiplyAlpha default_();
};

/// Enum type ColorSpaceConversion
/// [`ColorSpaceConversion`](https://developer.mozilla.org/en-US/docs/Web/API/ColorSpaceConversion)
class ColorSpaceConversion : public emlite::Val {
  explicit ColorSpaceConversion(Handle h) noexcept;
public:
   explicit ColorSpaceConversion(const emlite::Val &v) noexcept;
  static ColorSpaceConversion take_ownership(Handle h) noexcept;
    [[nodiscard]] ColorSpaceConversion clone() const noexcept;
  static const ColorSpaceConversion none();
  static const ColorSpaceConversion default_();
};

/// Enum type ResizeQuality
/// [`ResizeQuality`](https://developer.mozilla.org/en-US/docs/Web/API/ResizeQuality)
class ResizeQuality : public emlite::Val {
  explicit ResizeQuality(Handle h) noexcept;
public:
   explicit ResizeQuality(const emlite::Val &v) noexcept;
  static ResizeQuality take_ownership(Handle h) noexcept;
    [[nodiscard]] ResizeQuality clone() const noexcept;
  static const ResizeQuality pixelated();
  static const ResizeQuality low();
  static const ResizeQuality medium();
  static const ResizeQuality high();
};

/// Enum type WorkerType
/// [`WorkerType`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerType)
class WorkerType : public emlite::Val {
  explicit WorkerType(Handle h) noexcept;
public:
   explicit WorkerType(const emlite::Val &v) noexcept;
  static WorkerType take_ownership(Handle h) noexcept;
    [[nodiscard]] WorkerType clone() const noexcept;
  static const WorkerType classic();
  static const WorkerType module_();
};

/// Enum type UserIdleState
/// [`UserIdleState`](https://developer.mozilla.org/en-US/docs/Web/API/UserIdleState)
class UserIdleState : public emlite::Val {
  explicit UserIdleState(Handle h) noexcept;
public:
   explicit UserIdleState(const emlite::Val &v) noexcept;
  static UserIdleState take_ownership(Handle h) noexcept;
    [[nodiscard]] UserIdleState clone() const noexcept;
  static const UserIdleState active();
  static const UserIdleState idle();
};

/// Enum type ScreenIdleState
/// [`ScreenIdleState`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenIdleState)
class ScreenIdleState : public emlite::Val {
  explicit ScreenIdleState(Handle h) noexcept;
public:
   explicit ScreenIdleState(const emlite::Val &v) noexcept;
  static ScreenIdleState take_ownership(Handle h) noexcept;
    [[nodiscard]] ScreenIdleState clone() const noexcept;
  static const ScreenIdleState locked();
  static const ScreenIdleState unlocked();
};

/// Enum type RedEyeReduction
/// [`RedEyeReduction`](https://developer.mozilla.org/en-US/docs/Web/API/RedEyeReduction)
class RedEyeReduction : public emlite::Val {
  explicit RedEyeReduction(Handle h) noexcept;
public:
   explicit RedEyeReduction(const emlite::Val &v) noexcept;
  static RedEyeReduction take_ownership(Handle h) noexcept;
    [[nodiscard]] RedEyeReduction clone() const noexcept;
  static const RedEyeReduction never();
  static const RedEyeReduction always();
  static const RedEyeReduction controllable();
};

/// Enum type FillLightMode
/// [`FillLightMode`](https://developer.mozilla.org/en-US/docs/Web/API/FillLightMode)
class FillLightMode : public emlite::Val {
  explicit FillLightMode(Handle h) noexcept;
public:
   explicit FillLightMode(const emlite::Val &v) noexcept;
  static FillLightMode take_ownership(Handle h) noexcept;
    [[nodiscard]] FillLightMode clone() const noexcept;
  static const FillLightMode auto_();
  static const FillLightMode off();
  static const FillLightMode flash();
};

/// Enum type MeteringMode
/// [`MeteringMode`](https://developer.mozilla.org/en-US/docs/Web/API/MeteringMode)
class MeteringMode : public emlite::Val {
  explicit MeteringMode(Handle h) noexcept;
public:
   explicit MeteringMode(const emlite::Val &v) noexcept;
  static MeteringMode take_ownership(Handle h) noexcept;
    [[nodiscard]] MeteringMode clone() const noexcept;
  static const MeteringMode none();
  static const MeteringMode manual();
  static const MeteringMode single_shot();
  static const MeteringMode continuous();
};

/// Enum type LoginStatus
/// [`LoginStatus`](https://developer.mozilla.org/en-US/docs/Web/API/LoginStatus)
class LoginStatus : public emlite::Val {
  explicit LoginStatus(Handle h) noexcept;
public:
   explicit LoginStatus(const emlite::Val &v) noexcept;
  static LoginStatus take_ownership(Handle h) noexcept;
    [[nodiscard]] LoginStatus clone() const noexcept;
  static const LoginStatus logged_in();
  static const LoginStatus logged_out();
};

/// Enum type ScriptInvokerType
/// [`ScriptInvokerType`](https://developer.mozilla.org/en-US/docs/Web/API/ScriptInvokerType)
class ScriptInvokerType : public emlite::Val {
  explicit ScriptInvokerType(Handle h) noexcept;
public:
   explicit ScriptInvokerType(const emlite::Val &v) noexcept;
  static ScriptInvokerType take_ownership(Handle h) noexcept;
    [[nodiscard]] ScriptInvokerType clone() const noexcept;
  static const ScriptInvokerType classic_script();
  static const ScriptInvokerType module_script();
  static const ScriptInvokerType event_listener();
  static const ScriptInvokerType user_callback();
  static const ScriptInvokerType resolve_promise();
  static const ScriptInvokerType reject_promise();
};

/// Enum type ScriptWindowAttribution
/// [`ScriptWindowAttribution`](https://developer.mozilla.org/en-US/docs/Web/API/ScriptWindowAttribution)
class ScriptWindowAttribution : public emlite::Val {
  explicit ScriptWindowAttribution(Handle h) noexcept;
public:
   explicit ScriptWindowAttribution(const emlite::Val &v) noexcept;
  static ScriptWindowAttribution take_ownership(Handle h) noexcept;
    [[nodiscard]] ScriptWindowAttribution clone() const noexcept;
  static const ScriptWindowAttribution self();
  static const ScriptWindowAttribution descendant();
  static const ScriptWindowAttribution ancestor();
  static const ScriptWindowAttribution same_page();
  static const ScriptWindowAttribution other();
};

/// Enum type MagnetometerLocalCoordinateSystem
/// [`MagnetometerLocalCoordinateSystem`](https://developer.mozilla.org/en-US/docs/Web/API/MagnetometerLocalCoordinateSystem)
class MagnetometerLocalCoordinateSystem : public emlite::Val {
  explicit MagnetometerLocalCoordinateSystem(Handle h) noexcept;
public:
   explicit MagnetometerLocalCoordinateSystem(const emlite::Val &v) noexcept;
  static MagnetometerLocalCoordinateSystem take_ownership(Handle h) noexcept;
    [[nodiscard]] MagnetometerLocalCoordinateSystem clone() const noexcept;
  static const MagnetometerLocalCoordinateSystem device();
  static const MagnetometerLocalCoordinateSystem screen();
};

/// Enum type AppBannerPromptOutcome
/// [`AppBannerPromptOutcome`](https://developer.mozilla.org/en-US/docs/Web/API/AppBannerPromptOutcome)
class AppBannerPromptOutcome : public emlite::Val {
  explicit AppBannerPromptOutcome(Handle h) noexcept;
public:
   explicit AppBannerPromptOutcome(const emlite::Val &v) noexcept;
  static AppBannerPromptOutcome take_ownership(Handle h) noexcept;
    [[nodiscard]] AppBannerPromptOutcome clone() const noexcept;
  static const AppBannerPromptOutcome accepted();
  static const AppBannerPromptOutcome dismissed();
};

/// Enum type MediaDecodingType
/// [`MediaDecodingType`](https://developer.mozilla.org/en-US/docs/Web/API/MediaDecodingType)
class MediaDecodingType : public emlite::Val {
  explicit MediaDecodingType(Handle h) noexcept;
public:
   explicit MediaDecodingType(const emlite::Val &v) noexcept;
  static MediaDecodingType take_ownership(Handle h) noexcept;
    [[nodiscard]] MediaDecodingType clone() const noexcept;
  static const MediaDecodingType file();
  static const MediaDecodingType media_source();
  static const MediaDecodingType webrtc();
};

/// Enum type MediaEncodingType
/// [`MediaEncodingType`](https://developer.mozilla.org/en-US/docs/Web/API/MediaEncodingType)
class MediaEncodingType : public emlite::Val {
  explicit MediaEncodingType(Handle h) noexcept;
public:
   explicit MediaEncodingType(const emlite::Val &v) noexcept;
  static MediaEncodingType take_ownership(Handle h) noexcept;
    [[nodiscard]] MediaEncodingType clone() const noexcept;
  static const MediaEncodingType record();
  static const MediaEncodingType webrtc();
};

/// Enum type HdrMetadataType
/// [`HdrMetadataType`](https://developer.mozilla.org/en-US/docs/Web/API/HdrMetadataType)
class HdrMetadataType : public emlite::Val {
  explicit HdrMetadataType(Handle h) noexcept;
public:
   explicit HdrMetadataType(const emlite::Val &v) noexcept;
  static HdrMetadataType take_ownership(Handle h) noexcept;
    [[nodiscard]] HdrMetadataType clone() const noexcept;
  static const HdrMetadataType smpteSt2086();
  static const HdrMetadataType smpteSt2094_10();
  static const HdrMetadataType smpteSt2094_40();
};

/// Enum type ColorGamut
/// [`ColorGamut`](https://developer.mozilla.org/en-US/docs/Web/API/ColorGamut)
class ColorGamut : public emlite::Val {
  explicit ColorGamut(Handle h) noexcept;
public:
   explicit ColorGamut(const emlite::Val &v) noexcept;
  static ColorGamut take_ownership(Handle h) noexcept;
    [[nodiscard]] ColorGamut clone() const noexcept;
  static const ColorGamut srgb();
  static const ColorGamut p3();
  static const ColorGamut rec2020();
};

/// Enum type TransferFunction
/// [`TransferFunction`](https://developer.mozilla.org/en-US/docs/Web/API/TransferFunction)
class TransferFunction : public emlite::Val {
  explicit TransferFunction(Handle h) noexcept;
public:
   explicit TransferFunction(const emlite::Val &v) noexcept;
  static TransferFunction take_ownership(Handle h) noexcept;
    [[nodiscard]] TransferFunction clone() const noexcept;
  static const TransferFunction srgb();
  static const TransferFunction pq();
  static const TransferFunction hlg();
};

/// Enum type ReadyState
/// [`ReadyState`](https://developer.mozilla.org/en-US/docs/Web/API/ReadyState)
class ReadyState : public emlite::Val {
  explicit ReadyState(Handle h) noexcept;
public:
   explicit ReadyState(const emlite::Val &v) noexcept;
  static ReadyState take_ownership(Handle h) noexcept;
    [[nodiscard]] ReadyState clone() const noexcept;
  static const ReadyState closed();
  static const ReadyState open();
  static const ReadyState ended();
};

/// Enum type EndOfStreamError
/// [`EndOfStreamError`](https://developer.mozilla.org/en-US/docs/Web/API/EndOfStreamError)
class EndOfStreamError : public emlite::Val {
  explicit EndOfStreamError(Handle h) noexcept;
public:
   explicit EndOfStreamError(const emlite::Val &v) noexcept;
  static EndOfStreamError take_ownership(Handle h) noexcept;
    [[nodiscard]] EndOfStreamError clone() const noexcept;
  static const EndOfStreamError network();
  static const EndOfStreamError decode();
};

/// Enum type AppendMode
/// [`AppendMode`](https://developer.mozilla.org/en-US/docs/Web/API/AppendMode)
class AppendMode : public emlite::Val {
  explicit AppendMode(Handle h) noexcept;
public:
   explicit AppendMode(const emlite::Val &v) noexcept;
  static AppendMode take_ownership(Handle h) noexcept;
    [[nodiscard]] AppendMode clone() const noexcept;
  static const AppendMode segments();
  static const AppendMode sequence();
};

/// Enum type MockCapturePromptResult
/// [`MockCapturePromptResult`](https://developer.mozilla.org/en-US/docs/Web/API/MockCapturePromptResult)
class MockCapturePromptResult : public emlite::Val {
  explicit MockCapturePromptResult(Handle h) noexcept;
public:
   explicit MockCapturePromptResult(const emlite::Val &v) noexcept;
  static MockCapturePromptResult take_ownership(Handle h) noexcept;
    [[nodiscard]] MockCapturePromptResult clone() const noexcept;
  static const MockCapturePromptResult granted();
  static const MockCapturePromptResult denied();
};

/// Enum type CaptureAction
/// [`CaptureAction`](https://developer.mozilla.org/en-US/docs/Web/API/CaptureAction)
class CaptureAction : public emlite::Val {
  explicit CaptureAction(Handle h) noexcept;
public:
   explicit CaptureAction(const emlite::Val &v) noexcept;
  static CaptureAction take_ownership(Handle h) noexcept;
    [[nodiscard]] CaptureAction clone() const noexcept;
  static const CaptureAction next();
  static const CaptureAction previous();
  static const CaptureAction first();
  static const CaptureAction last();
};

/// Enum type MediaStreamTrackState
/// [`MediaStreamTrackState`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrackState)
class MediaStreamTrackState : public emlite::Val {
  explicit MediaStreamTrackState(Handle h) noexcept;
public:
   explicit MediaStreamTrackState(const emlite::Val &v) noexcept;
  static MediaStreamTrackState take_ownership(Handle h) noexcept;
    [[nodiscard]] MediaStreamTrackState clone() const noexcept;
  static const MediaStreamTrackState live();
  static const MediaStreamTrackState ended();
};

/// Enum type VideoFacingModeEnum
/// [`VideoFacingModeEnum`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFacingModeEnum)
class VideoFacingModeEnum : public emlite::Val {
  explicit VideoFacingModeEnum(Handle h) noexcept;
public:
   explicit VideoFacingModeEnum(const emlite::Val &v) noexcept;
  static VideoFacingModeEnum take_ownership(Handle h) noexcept;
    [[nodiscard]] VideoFacingModeEnum clone() const noexcept;
  static const VideoFacingModeEnum user();
  static const VideoFacingModeEnum environment();
  static const VideoFacingModeEnum left();
  static const VideoFacingModeEnum right();
};

/// Enum type VideoResizeModeEnum
/// [`VideoResizeModeEnum`](https://developer.mozilla.org/en-US/docs/Web/API/VideoResizeModeEnum)
class VideoResizeModeEnum : public emlite::Val {
  explicit VideoResizeModeEnum(Handle h) noexcept;
public:
   explicit VideoResizeModeEnum(const emlite::Val &v) noexcept;
  static VideoResizeModeEnum take_ownership(Handle h) noexcept;
    [[nodiscard]] VideoResizeModeEnum clone() const noexcept;
  static const VideoResizeModeEnum none();
  static const VideoResizeModeEnum crop_and_scale();
};

/// Enum type EchoCancellationModeEnum
/// [`EchoCancellationModeEnum`](https://developer.mozilla.org/en-US/docs/Web/API/EchoCancellationModeEnum)
class EchoCancellationModeEnum : public emlite::Val {
  explicit EchoCancellationModeEnum(Handle h) noexcept;
public:
   explicit EchoCancellationModeEnum(const emlite::Val &v) noexcept;
  static EchoCancellationModeEnum take_ownership(Handle h) noexcept;
    [[nodiscard]] EchoCancellationModeEnum clone() const noexcept;
  static const EchoCancellationModeEnum all();
  static const EchoCancellationModeEnum remote_only();
};

/// Enum type MediaDeviceKind
/// [`MediaDeviceKind`](https://developer.mozilla.org/en-US/docs/Web/API/MediaDeviceKind)
class MediaDeviceKind : public emlite::Val {
  explicit MediaDeviceKind(Handle h) noexcept;
public:
   explicit MediaDeviceKind(const emlite::Val &v) noexcept;
  static MediaDeviceKind take_ownership(Handle h) noexcept;
    [[nodiscard]] MediaDeviceKind clone() const noexcept;
  static const MediaDeviceKind audioinput();
  static const MediaDeviceKind audiooutput();
  static const MediaDeviceKind videoinput();
};

/// Enum type MediaSessionPlaybackState
/// [`MediaSessionPlaybackState`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSessionPlaybackState)
class MediaSessionPlaybackState : public emlite::Val {
  explicit MediaSessionPlaybackState(Handle h) noexcept;
public:
   explicit MediaSessionPlaybackState(const emlite::Val &v) noexcept;
  static MediaSessionPlaybackState take_ownership(Handle h) noexcept;
    [[nodiscard]] MediaSessionPlaybackState clone() const noexcept;
  static const MediaSessionPlaybackState none();
  static const MediaSessionPlaybackState paused();
  static const MediaSessionPlaybackState playing();
};

/// Enum type MediaSessionAction
/// [`MediaSessionAction`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSessionAction)
class MediaSessionAction : public emlite::Val {
  explicit MediaSessionAction(Handle h) noexcept;
public:
   explicit MediaSessionAction(const emlite::Val &v) noexcept;
  static MediaSessionAction take_ownership(Handle h) noexcept;
    [[nodiscard]] MediaSessionAction clone() const noexcept;
  static const MediaSessionAction play();
  static const MediaSessionAction pause();
  static const MediaSessionAction seekbackward();
  static const MediaSessionAction seekforward();
  static const MediaSessionAction previoustrack();
  static const MediaSessionAction nexttrack();
  static const MediaSessionAction skipad();
  static const MediaSessionAction stop();
  static const MediaSessionAction seekto();
  static const MediaSessionAction togglemicrophone();
  static const MediaSessionAction togglecamera();
  static const MediaSessionAction togglescreenshare();
  static const MediaSessionAction hangup();
  static const MediaSessionAction previousslide();
  static const MediaSessionAction nextslide();
  static const MediaSessionAction enterpictureinpicture();
  static const MediaSessionAction voiceactivity();
};

/// Enum type BitrateMode
/// [`BitrateMode`](https://developer.mozilla.org/en-US/docs/Web/API/BitrateMode)
class BitrateMode : public emlite::Val {
  explicit BitrateMode(Handle h) noexcept;
public:
   explicit BitrateMode(const emlite::Val &v) noexcept;
  static BitrateMode take_ownership(Handle h) noexcept;
    [[nodiscard]] BitrateMode clone() const noexcept;
  static const BitrateMode constant();
  static const BitrateMode variable();
};

/// Enum type RecordingState
/// [`RecordingState`](https://developer.mozilla.org/en-US/docs/Web/API/RecordingState)
class RecordingState : public emlite::Val {
  explicit RecordingState(Handle h) noexcept;
public:
   explicit RecordingState(const emlite::Val &v) noexcept;
  static RecordingState take_ownership(Handle h) noexcept;
    [[nodiscard]] RecordingState clone() const noexcept;
  static const RecordingState inactive();
  static const RecordingState recording();
  static const RecordingState paused();
};

/// Enum type RTCDegradationPreference
/// [`RTCDegradationPreference`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDegradationPreference)
class RTCDegradationPreference : public emlite::Val {
  explicit RTCDegradationPreference(Handle h) noexcept;
public:
   explicit RTCDegradationPreference(const emlite::Val &v) noexcept;
  static RTCDegradationPreference take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCDegradationPreference clone() const noexcept;
  static const RTCDegradationPreference maintain_framerate();
  static const RTCDegradationPreference maintain_resolution();
  static const RTCDegradationPreference balanced();
};

/// Enum type NavigationTimingType
/// [`NavigationTimingType`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationTimingType)
class NavigationTimingType : public emlite::Val {
  explicit NavigationTimingType(Handle h) noexcept;
public:
   explicit NavigationTimingType(const emlite::Val &v) noexcept;
  static NavigationTimingType take_ownership(Handle h) noexcept;
    [[nodiscard]] NavigationTimingType clone() const noexcept;
  static const NavigationTimingType navigate();
  static const NavigationTimingType reload();
  static const NavigationTimingType back_forward();
  static const NavigationTimingType prerender();
};

/// Enum type ConnectionType
/// [`ConnectionType`](https://developer.mozilla.org/en-US/docs/Web/API/ConnectionType)
class ConnectionType : public emlite::Val {
  explicit ConnectionType(Handle h) noexcept;
public:
   explicit ConnectionType(const emlite::Val &v) noexcept;
  static ConnectionType take_ownership(Handle h) noexcept;
    [[nodiscard]] ConnectionType clone() const noexcept;
  static const ConnectionType bluetooth();
  static const ConnectionType cellular();
  static const ConnectionType ethernet();
  static const ConnectionType mixed();
  static const ConnectionType none();
  static const ConnectionType other();
  static const ConnectionType unknown();
  static const ConnectionType wifi();
  static const ConnectionType wimax();
};

/// Enum type EffectiveConnectionType
/// [`EffectiveConnectionType`](https://developer.mozilla.org/en-US/docs/Web/API/EffectiveConnectionType)
class EffectiveConnectionType : public emlite::Val {
  explicit EffectiveConnectionType(Handle h) noexcept;
public:
   explicit EffectiveConnectionType(const emlite::Val &v) noexcept;
  static EffectiveConnectionType take_ownership(Handle h) noexcept;
    [[nodiscard]] EffectiveConnectionType clone() const noexcept;
  static const EffectiveConnectionType _2g();
  static const EffectiveConnectionType _3g();
  static const EffectiveConnectionType _4g();
  static const EffectiveConnectionType slow_2g();
};

/// Enum type NotificationPermission
/// [`NotificationPermission`](https://developer.mozilla.org/en-US/docs/Web/API/NotificationPermission)
class NotificationPermission : public emlite::Val {
  explicit NotificationPermission(Handle h) noexcept;
public:
   explicit NotificationPermission(const emlite::Val &v) noexcept;
  static NotificationPermission take_ownership(Handle h) noexcept;
    [[nodiscard]] NotificationPermission clone() const noexcept;
  static const NotificationPermission default_();
  static const NotificationPermission denied();
  static const NotificationPermission granted();
};

/// Enum type NotificationDirection
/// [`NotificationDirection`](https://developer.mozilla.org/en-US/docs/Web/API/NotificationDirection)
class NotificationDirection : public emlite::Val {
  explicit NotificationDirection(Handle h) noexcept;
public:
   explicit NotificationDirection(const emlite::Val &v) noexcept;
  static NotificationDirection take_ownership(Handle h) noexcept;
    [[nodiscard]] NotificationDirection clone() const noexcept;
  static const NotificationDirection auto_();
  static const NotificationDirection ltr();
  static const NotificationDirection rtl();
};

/// Enum type OrientationSensorLocalCoordinateSystem
/// [`OrientationSensorLocalCoordinateSystem`](https://developer.mozilla.org/en-US/docs/Web/API/OrientationSensorLocalCoordinateSystem)
class OrientationSensorLocalCoordinateSystem : public emlite::Val {
  explicit OrientationSensorLocalCoordinateSystem(Handle h) noexcept;
public:
   explicit OrientationSensorLocalCoordinateSystem(const emlite::Val &v) noexcept;
  static OrientationSensorLocalCoordinateSystem take_ownership(Handle h) noexcept;
    [[nodiscard]] OrientationSensorLocalCoordinateSystem clone() const noexcept;
  static const OrientationSensorLocalCoordinateSystem device();
  static const OrientationSensorLocalCoordinateSystem screen();
};

/// Enum type ClientLifecycleState
/// [`ClientLifecycleState`](https://developer.mozilla.org/en-US/docs/Web/API/ClientLifecycleState)
class ClientLifecycleState : public emlite::Val {
  explicit ClientLifecycleState(Handle h) noexcept;
public:
   explicit ClientLifecycleState(const emlite::Val &v) noexcept;
  static ClientLifecycleState take_ownership(Handle h) noexcept;
    [[nodiscard]] ClientLifecycleState clone() const noexcept;
  static const ClientLifecycleState active();
  static const ClientLifecycleState frozen();
};

/// Enum type PaymentDelegation
/// [`PaymentDelegation`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentDelegation)
class PaymentDelegation : public emlite::Val {
  explicit PaymentDelegation(Handle h) noexcept;
public:
   explicit PaymentDelegation(const emlite::Val &v) noexcept;
  static PaymentDelegation take_ownership(Handle h) noexcept;
    [[nodiscard]] PaymentDelegation clone() const noexcept;
  static const PaymentDelegation shippingAddress();
  static const PaymentDelegation payerName();
  static const PaymentDelegation payerPhone();
  static const PaymentDelegation payerEmail();
};

/// Enum type PaymentShippingType
/// [`PaymentShippingType`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentShippingType)
class PaymentShippingType : public emlite::Val {
  explicit PaymentShippingType(Handle h) noexcept;
public:
   explicit PaymentShippingType(const emlite::Val &v) noexcept;
  static PaymentShippingType take_ownership(Handle h) noexcept;
    [[nodiscard]] PaymentShippingType clone() const noexcept;
  static const PaymentShippingType shipping();
  static const PaymentShippingType delivery();
  static const PaymentShippingType pickup();
};

/// Enum type PaymentComplete
/// [`PaymentComplete`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentComplete)
class PaymentComplete : public emlite::Val {
  explicit PaymentComplete(Handle h) noexcept;
public:
   explicit PaymentComplete(const emlite::Val &v) noexcept;
  static PaymentComplete take_ownership(Handle h) noexcept;
    [[nodiscard]] PaymentComplete clone() const noexcept;
  static const PaymentComplete fail();
  static const PaymentComplete success();
  static const PaymentComplete unknown();
};

/// Enum type PermissionState
/// [`PermissionState`](https://developer.mozilla.org/en-US/docs/Web/API/PermissionState)
class PermissionState : public emlite::Val {
  explicit PermissionState(Handle h) noexcept;
public:
   explicit PermissionState(const emlite::Val &v) noexcept;
  static PermissionState take_ownership(Handle h) noexcept;
    [[nodiscard]] PermissionState clone() const noexcept;
  static const PermissionState granted();
  static const PermissionState denied();
  static const PermissionState prompt();
};

/// Enum type PointerAxis
/// [`PointerAxis`](https://developer.mozilla.org/en-US/docs/Web/API/PointerAxis)
class PointerAxis : public emlite::Val {
  explicit PointerAxis(Handle h) noexcept;
public:
   explicit PointerAxis(const emlite::Val &v) noexcept;
  static PointerAxis take_ownership(Handle h) noexcept;
    [[nodiscard]] PointerAxis clone() const noexcept;
  static const PointerAxis block();
  static const PointerAxis inline_();
  static const PointerAxis x();
  static const PointerAxis y();
};

/// Enum type PresentationConnectionState
/// [`PresentationConnectionState`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationConnectionState)
class PresentationConnectionState : public emlite::Val {
  explicit PresentationConnectionState(Handle h) noexcept;
public:
   explicit PresentationConnectionState(const emlite::Val &v) noexcept;
  static PresentationConnectionState take_ownership(Handle h) noexcept;
    [[nodiscard]] PresentationConnectionState clone() const noexcept;
  static const PresentationConnectionState connecting();
  static const PresentationConnectionState connected();
  static const PresentationConnectionState closed();
  static const PresentationConnectionState terminated();
};

/// Enum type PresentationConnectionCloseReason
/// [`PresentationConnectionCloseReason`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationConnectionCloseReason)
class PresentationConnectionCloseReason : public emlite::Val {
  explicit PresentationConnectionCloseReason(Handle h) noexcept;
public:
   explicit PresentationConnectionCloseReason(const emlite::Val &v) noexcept;
  static PresentationConnectionCloseReason take_ownership(Handle h) noexcept;
    [[nodiscard]] PresentationConnectionCloseReason clone() const noexcept;
  static const PresentationConnectionCloseReason error();
  static const PresentationConnectionCloseReason closed();
  static const PresentationConnectionCloseReason wentaway();
};

/// Enum type PrivateAttributionAggregationProtocol
/// [`PrivateAttributionAggregationProtocol`](https://developer.mozilla.org/en-US/docs/Web/API/PrivateAttributionAggregationProtocol)
class PrivateAttributionAggregationProtocol : public emlite::Val {
  explicit PrivateAttributionAggregationProtocol(Handle h) noexcept;
public:
   explicit PrivateAttributionAggregationProtocol(const emlite::Val &v) noexcept;
  static PrivateAttributionAggregationProtocol take_ownership(Handle h) noexcept;
    [[nodiscard]] PrivateAttributionAggregationProtocol clone() const noexcept;
  static const PrivateAttributionAggregationProtocol dap_12_histogram();
  static const PrivateAttributionAggregationProtocol tee_00();
};

/// Enum type AttributionLogic
/// [`AttributionLogic`](https://developer.mozilla.org/en-US/docs/Web/API/AttributionLogic)
class AttributionLogic : public emlite::Val {
  explicit AttributionLogic(Handle h) noexcept;
public:
   explicit AttributionLogic(const emlite::Val &v) noexcept;
  static AttributionLogic take_ownership(Handle h) noexcept;
    [[nodiscard]] AttributionLogic clone() const noexcept;
  static const AttributionLogic last_touch();
};

/// Enum type IPAddressSpace
/// [`IPAddressSpace`](https://developer.mozilla.org/en-US/docs/Web/API/IPAddressSpace)
class IPAddressSpace : public emlite::Val {
  explicit IPAddressSpace(Handle h) noexcept;
public:
   explicit IPAddressSpace(const emlite::Val &v) noexcept;
  static IPAddressSpace take_ownership(Handle h) noexcept;
    [[nodiscard]] IPAddressSpace clone() const noexcept;
  static const IPAddressSpace public_();
  static const IPAddressSpace private_();
  static const IPAddressSpace local();
};

/// Enum type PushEncryptionKeyName
/// [`PushEncryptionKeyName`](https://developer.mozilla.org/en-US/docs/Web/API/PushEncryptionKeyName)
class PushEncryptionKeyName : public emlite::Val {
  explicit PushEncryptionKeyName(Handle h) noexcept;
public:
   explicit PushEncryptionKeyName(const emlite::Val &v) noexcept;
  static PushEncryptionKeyName take_ownership(Handle h) noexcept;
    [[nodiscard]] PushEncryptionKeyName clone() const noexcept;
  static const PushEncryptionKeyName p256dh();
  static const PushEncryptionKeyName auth();
};

/// Enum type ReferrerPolicy
/// [`ReferrerPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/ReferrerPolicy)
class ReferrerPolicy : public emlite::Val {
  explicit ReferrerPolicy(Handle h) noexcept;
public:
   explicit ReferrerPolicy(const emlite::Val &v) noexcept;
  static ReferrerPolicy take_ownership(Handle h) noexcept;
    [[nodiscard]] ReferrerPolicy clone() const noexcept;
  static const ReferrerPolicy none();
  static const ReferrerPolicy no_referrer();
  static const ReferrerPolicy no_referrer_when_downgrade();
  static const ReferrerPolicy same_origin();
  static const ReferrerPolicy origin();
  static const ReferrerPolicy strict_origin();
  static const ReferrerPolicy origin_when_cross_origin();
  static const ReferrerPolicy strict_origin_when_cross_origin();
  static const ReferrerPolicy unsafe_url();
};

/// Enum type RemotePlaybackState
/// [`RemotePlaybackState`](https://developer.mozilla.org/en-US/docs/Web/API/RemotePlaybackState)
class RemotePlaybackState : public emlite::Val {
  explicit RemotePlaybackState(Handle h) noexcept;
public:
   explicit RemotePlaybackState(const emlite::Val &v) noexcept;
  static RemotePlaybackState take_ownership(Handle h) noexcept;
    [[nodiscard]] RemotePlaybackState clone() const noexcept;
  static const RemotePlaybackState connecting();
  static const RemotePlaybackState connected();
  static const RemotePlaybackState disconnected();
};

/// Enum type ResizeObserverBoxOptions
/// [`ResizeObserverBoxOptions`](https://developer.mozilla.org/en-US/docs/Web/API/ResizeObserverBoxOptions)
class ResizeObserverBoxOptions : public emlite::Val {
  explicit ResizeObserverBoxOptions(Handle h) noexcept;
public:
   explicit ResizeObserverBoxOptions(const emlite::Val &v) noexcept;
  static ResizeObserverBoxOptions take_ownership(Handle h) noexcept;
    [[nodiscard]] ResizeObserverBoxOptions clone() const noexcept;
  static const ResizeObserverBoxOptions border_box();
  static const ResizeObserverBoxOptions content_box();
  static const ResizeObserverBoxOptions device_pixel_content_box();
};

/// Enum type RenderBlockingStatusType
/// [`RenderBlockingStatusType`](https://developer.mozilla.org/en-US/docs/Web/API/RenderBlockingStatusType)
class RenderBlockingStatusType : public emlite::Val {
  explicit RenderBlockingStatusType(Handle h) noexcept;
public:
   explicit RenderBlockingStatusType(const emlite::Val &v) noexcept;
  static RenderBlockingStatusType take_ownership(Handle h) noexcept;
    [[nodiscard]] RenderBlockingStatusType clone() const noexcept;
  static const RenderBlockingStatusType blocking();
  static const RenderBlockingStatusType non_blocking();
};

/// Enum type SameSiteCookiesType
/// [`SameSiteCookiesType`](https://developer.mozilla.org/en-US/docs/Web/API/SameSiteCookiesType)
class SameSiteCookiesType : public emlite::Val {
  explicit SameSiteCookiesType(Handle h) noexcept;
public:
   explicit SameSiteCookiesType(const emlite::Val &v) noexcept;
  static SameSiteCookiesType take_ownership(Handle h) noexcept;
    [[nodiscard]] SameSiteCookiesType clone() const noexcept;
  static const SameSiteCookiesType all();
  static const SameSiteCookiesType none();
};

/// Enum type SanitizerPresets
/// [`SanitizerPresets`](https://developer.mozilla.org/en-US/docs/Web/API/SanitizerPresets)
class SanitizerPresets : public emlite::Val {
  explicit SanitizerPresets(Handle h) noexcept;
public:
   explicit SanitizerPresets(const emlite::Val &v) noexcept;
  static SanitizerPresets take_ownership(Handle h) noexcept;
    [[nodiscard]] SanitizerPresets clone() const noexcept;
  static const SanitizerPresets default_();
};

/// Enum type TaskPriority
/// [`TaskPriority`](https://developer.mozilla.org/en-US/docs/Web/API/TaskPriority)
class TaskPriority : public emlite::Val {
  explicit TaskPriority(Handle h) noexcept;
public:
   explicit TaskPriority(const emlite::Val &v) noexcept;
  static TaskPriority take_ownership(Handle h) noexcept;
    [[nodiscard]] TaskPriority clone() const noexcept;
  static const TaskPriority user_blocking();
  static const TaskPriority user_visible();
  static const TaskPriority background();
};

/// Enum type CaptureStartFocusBehavior
/// [`CaptureStartFocusBehavior`](https://developer.mozilla.org/en-US/docs/Web/API/CaptureStartFocusBehavior)
class CaptureStartFocusBehavior : public emlite::Val {
  explicit CaptureStartFocusBehavior(Handle h) noexcept;
public:
   explicit CaptureStartFocusBehavior(const emlite::Val &v) noexcept;
  static CaptureStartFocusBehavior take_ownership(Handle h) noexcept;
    [[nodiscard]] CaptureStartFocusBehavior clone() const noexcept;
  static const CaptureStartFocusBehavior focus_capturing_application();
  static const CaptureStartFocusBehavior focus_captured_surface();
  static const CaptureStartFocusBehavior no_focus_change();
};

/// Enum type SelfCapturePreferenceEnum
/// [`SelfCapturePreferenceEnum`](https://developer.mozilla.org/en-US/docs/Web/API/SelfCapturePreferenceEnum)
class SelfCapturePreferenceEnum : public emlite::Val {
  explicit SelfCapturePreferenceEnum(Handle h) noexcept;
public:
   explicit SelfCapturePreferenceEnum(const emlite::Val &v) noexcept;
  static SelfCapturePreferenceEnum take_ownership(Handle h) noexcept;
    [[nodiscard]] SelfCapturePreferenceEnum clone() const noexcept;
  static const SelfCapturePreferenceEnum include();
  static const SelfCapturePreferenceEnum exclude();
};

/// Enum type SystemAudioPreferenceEnum
/// [`SystemAudioPreferenceEnum`](https://developer.mozilla.org/en-US/docs/Web/API/SystemAudioPreferenceEnum)
class SystemAudioPreferenceEnum : public emlite::Val {
  explicit SystemAudioPreferenceEnum(Handle h) noexcept;
public:
   explicit SystemAudioPreferenceEnum(const emlite::Val &v) noexcept;
  static SystemAudioPreferenceEnum take_ownership(Handle h) noexcept;
    [[nodiscard]] SystemAudioPreferenceEnum clone() const noexcept;
  static const SystemAudioPreferenceEnum include();
  static const SystemAudioPreferenceEnum exclude();
};

/// Enum type WindowAudioPreferenceEnum
/// [`WindowAudioPreferenceEnum`](https://developer.mozilla.org/en-US/docs/Web/API/WindowAudioPreferenceEnum)
class WindowAudioPreferenceEnum : public emlite::Val {
  explicit WindowAudioPreferenceEnum(Handle h) noexcept;
public:
   explicit WindowAudioPreferenceEnum(const emlite::Val &v) noexcept;
  static WindowAudioPreferenceEnum take_ownership(Handle h) noexcept;
    [[nodiscard]] WindowAudioPreferenceEnum clone() const noexcept;
  static const WindowAudioPreferenceEnum system();
  static const WindowAudioPreferenceEnum window();
  static const WindowAudioPreferenceEnum exclude();
};

/// Enum type SurfaceSwitchingPreferenceEnum
/// [`SurfaceSwitchingPreferenceEnum`](https://developer.mozilla.org/en-US/docs/Web/API/SurfaceSwitchingPreferenceEnum)
class SurfaceSwitchingPreferenceEnum : public emlite::Val {
  explicit SurfaceSwitchingPreferenceEnum(Handle h) noexcept;
public:
   explicit SurfaceSwitchingPreferenceEnum(const emlite::Val &v) noexcept;
  static SurfaceSwitchingPreferenceEnum take_ownership(Handle h) noexcept;
    [[nodiscard]] SurfaceSwitchingPreferenceEnum clone() const noexcept;
  static const SurfaceSwitchingPreferenceEnum include();
  static const SurfaceSwitchingPreferenceEnum exclude();
};

/// Enum type MonitorTypeSurfacesEnum
/// [`MonitorTypeSurfacesEnum`](https://developer.mozilla.org/en-US/docs/Web/API/MonitorTypeSurfacesEnum)
class MonitorTypeSurfacesEnum : public emlite::Val {
  explicit MonitorTypeSurfacesEnum(Handle h) noexcept;
public:
   explicit MonitorTypeSurfacesEnum(const emlite::Val &v) noexcept;
  static MonitorTypeSurfacesEnum take_ownership(Handle h) noexcept;
    [[nodiscard]] MonitorTypeSurfacesEnum clone() const noexcept;
  static const MonitorTypeSurfacesEnum include();
  static const MonitorTypeSurfacesEnum exclude();
};

/// Enum type DisplayCaptureSurfaceType
/// [`DisplayCaptureSurfaceType`](https://developer.mozilla.org/en-US/docs/Web/API/DisplayCaptureSurfaceType)
class DisplayCaptureSurfaceType : public emlite::Val {
  explicit DisplayCaptureSurfaceType(Handle h) noexcept;
public:
   explicit DisplayCaptureSurfaceType(const emlite::Val &v) noexcept;
  static DisplayCaptureSurfaceType take_ownership(Handle h) noexcept;
    [[nodiscard]] DisplayCaptureSurfaceType clone() const noexcept;
  static const DisplayCaptureSurfaceType monitor();
  static const DisplayCaptureSurfaceType window();
  static const DisplayCaptureSurfaceType browser();
};

/// Enum type CursorCaptureConstraint
/// [`CursorCaptureConstraint`](https://developer.mozilla.org/en-US/docs/Web/API/CursorCaptureConstraint)
class CursorCaptureConstraint : public emlite::Val {
  explicit CursorCaptureConstraint(Handle h) noexcept;
public:
   explicit CursorCaptureConstraint(const emlite::Val &v) noexcept;
  static CursorCaptureConstraint take_ownership(Handle h) noexcept;
    [[nodiscard]] CursorCaptureConstraint clone() const noexcept;
  static const CursorCaptureConstraint never();
  static const CursorCaptureConstraint always();
  static const CursorCaptureConstraint motion();
};

/// Enum type OrientationLockType
/// [`OrientationLockType`](https://developer.mozilla.org/en-US/docs/Web/API/OrientationLockType)
class OrientationLockType : public emlite::Val {
  explicit OrientationLockType(Handle h) noexcept;
public:
   explicit OrientationLockType(const emlite::Val &v) noexcept;
  static OrientationLockType take_ownership(Handle h) noexcept;
    [[nodiscard]] OrientationLockType clone() const noexcept;
  static const OrientationLockType any();
  static const OrientationLockType natural();
  static const OrientationLockType landscape();
  static const OrientationLockType portrait();
  static const OrientationLockType portrait_primary();
  static const OrientationLockType portrait_secondary();
  static const OrientationLockType landscape_primary();
  static const OrientationLockType landscape_secondary();
};

/// Enum type OrientationType
/// [`OrientationType`](https://developer.mozilla.org/en-US/docs/Web/API/OrientationType)
class OrientationType : public emlite::Val {
  explicit OrientationType(Handle h) noexcept;
public:
   explicit OrientationType(const emlite::Val &v) noexcept;
  static OrientationType take_ownership(Handle h) noexcept;
    [[nodiscard]] OrientationType clone() const noexcept;
  static const OrientationType portrait_primary();
  static const OrientationType portrait_secondary();
  static const OrientationType landscape_primary();
  static const OrientationType landscape_secondary();
};

/// Enum type WakeLockType
/// [`WakeLockType`](https://developer.mozilla.org/en-US/docs/Web/API/WakeLockType)
class WakeLockType : public emlite::Val {
  explicit WakeLockType(Handle h) noexcept;
public:
   explicit WakeLockType(const emlite::Val &v) noexcept;
  static WakeLockType take_ownership(Handle h) noexcept;
    [[nodiscard]] WakeLockType clone() const noexcept;
  static const WakeLockType screen();
};

/// Enum type ScrollAxis
/// [`ScrollAxis`](https://developer.mozilla.org/en-US/docs/Web/API/ScrollAxis)
class ScrollAxis : public emlite::Val {
  explicit ScrollAxis(Handle h) noexcept;
public:
   explicit ScrollAxis(const emlite::Val &v) noexcept;
  static ScrollAxis take_ownership(Handle h) noexcept;
    [[nodiscard]] ScrollAxis clone() const noexcept;
  static const ScrollAxis block();
  static const ScrollAxis inline_();
  static const ScrollAxis x();
  static const ScrollAxis y();
};

/// Enum type SecurePaymentConfirmationAvailability
/// [`SecurePaymentConfirmationAvailability`](https://developer.mozilla.org/en-US/docs/Web/API/SecurePaymentConfirmationAvailability)
class SecurePaymentConfirmationAvailability : public emlite::Val {
  explicit SecurePaymentConfirmationAvailability(Handle h) noexcept;
public:
   explicit SecurePaymentConfirmationAvailability(const emlite::Val &v) noexcept;
  static SecurePaymentConfirmationAvailability take_ownership(Handle h) noexcept;
    [[nodiscard]] SecurePaymentConfirmationAvailability clone() const noexcept;
  static const SecurePaymentConfirmationAvailability available();
  static const SecurePaymentConfirmationAvailability unavailable_unknown_reason();
  static const SecurePaymentConfirmationAvailability unavailable_feature_not_enabled();
  static const SecurePaymentConfirmationAvailability unavailable_no_permission_policy();
  static const SecurePaymentConfirmationAvailability unavailable_no_user_verifying_platform_authenticator();
};

/// Enum type ParityType
/// [`ParityType`](https://developer.mozilla.org/en-US/docs/Web/API/ParityType)
class ParityType : public emlite::Val {
  explicit ParityType(Handle h) noexcept;
public:
   explicit ParityType(const emlite::Val &v) noexcept;
  static ParityType take_ownership(Handle h) noexcept;
    [[nodiscard]] ParityType clone() const noexcept;
  static const ParityType none();
  static const ParityType even();
  static const ParityType odd();
};

/// Enum type FlowControlType
/// [`FlowControlType`](https://developer.mozilla.org/en-US/docs/Web/API/FlowControlType)
class FlowControlType : public emlite::Val {
  explicit FlowControlType(Handle h) noexcept;
public:
   explicit FlowControlType(const emlite::Val &v) noexcept;
  static FlowControlType take_ownership(Handle h) noexcept;
    [[nodiscard]] FlowControlType clone() const noexcept;
  static const FlowControlType none();
  static const FlowControlType hardware();
};

/// Enum type ServiceWorkerState
/// [`ServiceWorkerState`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerState)
class ServiceWorkerState : public emlite::Val {
  explicit ServiceWorkerState(Handle h) noexcept;
public:
   explicit ServiceWorkerState(const emlite::Val &v) noexcept;
  static ServiceWorkerState take_ownership(Handle h) noexcept;
    [[nodiscard]] ServiceWorkerState clone() const noexcept;
  static const ServiceWorkerState parsed();
  static const ServiceWorkerState installing();
  static const ServiceWorkerState installed();
  static const ServiceWorkerState activating();
  static const ServiceWorkerState activated();
  static const ServiceWorkerState redundant();
};

/// Enum type ServiceWorkerUpdateViaCache
/// [`ServiceWorkerUpdateViaCache`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerUpdateViaCache)
class ServiceWorkerUpdateViaCache : public emlite::Val {
  explicit ServiceWorkerUpdateViaCache(Handle h) noexcept;
public:
   explicit ServiceWorkerUpdateViaCache(const emlite::Val &v) noexcept;
  static ServiceWorkerUpdateViaCache take_ownership(Handle h) noexcept;
    [[nodiscard]] ServiceWorkerUpdateViaCache clone() const noexcept;
  static const ServiceWorkerUpdateViaCache imports();
  static const ServiceWorkerUpdateViaCache all();
  static const ServiceWorkerUpdateViaCache none();
};

/// Enum type FrameType
/// [`FrameType`](https://developer.mozilla.org/en-US/docs/Web/API/FrameType)
class FrameType : public emlite::Val {
  explicit FrameType(Handle h) noexcept;
public:
   explicit FrameType(const emlite::Val &v) noexcept;
  static FrameType take_ownership(Handle h) noexcept;
    [[nodiscard]] FrameType clone() const noexcept;
  static const FrameType auxiliary();
  static const FrameType top_level();
  static const FrameType nested();
  static const FrameType none();
};

/// Enum type ClientType
/// [`ClientType`](https://developer.mozilla.org/en-US/docs/Web/API/ClientType)
class ClientType : public emlite::Val {
  explicit ClientType(Handle h) noexcept;
public:
   explicit ClientType(const emlite::Val &v) noexcept;
  static ClientType take_ownership(Handle h) noexcept;
    [[nodiscard]] ClientType clone() const noexcept;
  static const ClientType window();
  static const ClientType worker();
  static const ClientType sharedworker();
  static const ClientType all();
};

/// Enum type RunningStatus
/// [`RunningStatus`](https://developer.mozilla.org/en-US/docs/Web/API/RunningStatus)
class RunningStatus : public emlite::Val {
  explicit RunningStatus(Handle h) noexcept;
public:
   explicit RunningStatus(const emlite::Val &v) noexcept;
  static RunningStatus take_ownership(Handle h) noexcept;
    [[nodiscard]] RunningStatus clone() const noexcept;
  static const RunningStatus running();
  static const RunningStatus not_running();
};

/// Enum type RouterSourceEnum
/// [`RouterSourceEnum`](https://developer.mozilla.org/en-US/docs/Web/API/RouterSourceEnum)
class RouterSourceEnum : public emlite::Val {
  explicit RouterSourceEnum(Handle h) noexcept;
public:
   explicit RouterSourceEnum(const emlite::Val &v) noexcept;
  static RouterSourceEnum take_ownership(Handle h) noexcept;
    [[nodiscard]] RouterSourceEnum clone() const noexcept;
  static const RouterSourceEnum cache();
  static const RouterSourceEnum fetch_event();
  static const RouterSourceEnum network();
  static const RouterSourceEnum race_network_and_fetch_handler();
};

/// Enum type LandmarkType
/// [`LandmarkType`](https://developer.mozilla.org/en-US/docs/Web/API/LandmarkType)
class LandmarkType : public emlite::Val {
  explicit LandmarkType(Handle h) noexcept;
public:
   explicit LandmarkType(const emlite::Val &v) noexcept;
  static LandmarkType take_ownership(Handle h) noexcept;
    [[nodiscard]] LandmarkType clone() const noexcept;
  static const LandmarkType mouth();
  static const LandmarkType eye();
  static const LandmarkType nose();
};

/// Enum type BarcodeFormat
/// [`BarcodeFormat`](https://developer.mozilla.org/en-US/docs/Web/API/BarcodeFormat)
class BarcodeFormat : public emlite::Val {
  explicit BarcodeFormat(Handle h) noexcept;
public:
   explicit BarcodeFormat(const emlite::Val &v) noexcept;
  static BarcodeFormat take_ownership(Handle h) noexcept;
    [[nodiscard]] BarcodeFormat clone() const noexcept;
  static const BarcodeFormat aztec();
  static const BarcodeFormat code_128();
  static const BarcodeFormat code_39();
  static const BarcodeFormat code_93();
  static const BarcodeFormat codabar();
  static const BarcodeFormat data_matrix();
  static const BarcodeFormat ean_13();
  static const BarcodeFormat ean_8();
  static const BarcodeFormat itf();
  static const BarcodeFormat pdf417();
  static const BarcodeFormat qr_code();
  static const BarcodeFormat unknown();
  static const BarcodeFormat upc_a();
  static const BarcodeFormat upc_e();
};

/// Enum type SpeechRecognitionErrorCode
/// [`SpeechRecognitionErrorCode`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionErrorCode)
class SpeechRecognitionErrorCode : public emlite::Val {
  explicit SpeechRecognitionErrorCode(Handle h) noexcept;
public:
   explicit SpeechRecognitionErrorCode(const emlite::Val &v) noexcept;
  static SpeechRecognitionErrorCode take_ownership(Handle h) noexcept;
    [[nodiscard]] SpeechRecognitionErrorCode clone() const noexcept;
  static const SpeechRecognitionErrorCode no_speech();
  static const SpeechRecognitionErrorCode aborted();
  static const SpeechRecognitionErrorCode audio_capture();
  static const SpeechRecognitionErrorCode network();
  static const SpeechRecognitionErrorCode not_allowed();
  static const SpeechRecognitionErrorCode service_not_allowed();
  static const SpeechRecognitionErrorCode language_not_supported();
  static const SpeechRecognitionErrorCode phrases_not_supported();
};

/// Enum type AvailabilityStatus
/// [`AvailabilityStatus`](https://developer.mozilla.org/en-US/docs/Web/API/AvailabilityStatus)
class AvailabilityStatus : public emlite::Val {
  explicit AvailabilityStatus(Handle h) noexcept;
public:
   explicit AvailabilityStatus(const emlite::Val &v) noexcept;
  static AvailabilityStatus take_ownership(Handle h) noexcept;
    [[nodiscard]] AvailabilityStatus clone() const noexcept;
  static const AvailabilityStatus unavailable();
  static const AvailabilityStatus downloadable();
  static const AvailabilityStatus downloading();
  static const AvailabilityStatus available();
};

/// Enum type SpeechSynthesisErrorCode
/// [`SpeechSynthesisErrorCode`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisErrorCode)
class SpeechSynthesisErrorCode : public emlite::Val {
  explicit SpeechSynthesisErrorCode(Handle h) noexcept;
public:
   explicit SpeechSynthesisErrorCode(const emlite::Val &v) noexcept;
  static SpeechSynthesisErrorCode take_ownership(Handle h) noexcept;
    [[nodiscard]] SpeechSynthesisErrorCode clone() const noexcept;
  static const SpeechSynthesisErrorCode canceled();
  static const SpeechSynthesisErrorCode interrupted();
  static const SpeechSynthesisErrorCode audio_busy();
  static const SpeechSynthesisErrorCode audio_hardware();
  static const SpeechSynthesisErrorCode network();
  static const SpeechSynthesisErrorCode synthesis_unavailable();
  static const SpeechSynthesisErrorCode synthesis_failed();
  static const SpeechSynthesisErrorCode language_unavailable();
  static const SpeechSynthesisErrorCode voice_unavailable();
  static const SpeechSynthesisErrorCode text_too_long();
  static const SpeechSynthesisErrorCode invalid_argument();
  static const SpeechSynthesisErrorCode not_allowed();
};

/// Enum type ReadableStreamReaderMode
/// [`ReadableStreamReaderMode`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStreamReaderMode)
class ReadableStreamReaderMode : public emlite::Val {
  explicit ReadableStreamReaderMode(Handle h) noexcept;
public:
   explicit ReadableStreamReaderMode(const emlite::Val &v) noexcept;
  static ReadableStreamReaderMode take_ownership(Handle h) noexcept;
    [[nodiscard]] ReadableStreamReaderMode clone() const noexcept;
  static const ReadableStreamReaderMode byob();
};

/// Enum type ReadableStreamType
/// [`ReadableStreamType`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStreamType)
class ReadableStreamType : public emlite::Val {
  explicit ReadableStreamType(Handle h) noexcept;
public:
   explicit ReadableStreamType(const emlite::Val &v) noexcept;
  static ReadableStreamType take_ownership(Handle h) noexcept;
    [[nodiscard]] ReadableStreamType clone() const noexcept;
  static const ReadableStreamType bytes();
};

/// Enum type TouchType
/// [`TouchType`](https://developer.mozilla.org/en-US/docs/Web/API/TouchType)
class TouchType : public emlite::Val {
  explicit TouchType(Handle h) noexcept;
public:
   explicit TouchType(const emlite::Val &v) noexcept;
  static TouchType take_ownership(Handle h) noexcept;
    [[nodiscard]] TouchType clone() const noexcept;
  static const TouchType direct();
  static const TouchType stylus();
};

/// Enum type RefreshPolicy
/// [`RefreshPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/RefreshPolicy)
class RefreshPolicy : public emlite::Val {
  explicit RefreshPolicy(Handle h) noexcept;
public:
   explicit RefreshPolicy(const emlite::Val &v) noexcept;
  static RefreshPolicy take_ownership(Handle h) noexcept;
    [[nodiscard]] RefreshPolicy clone() const noexcept;
  static const RefreshPolicy none();
  static const RefreshPolicy refresh();
};

/// Enum type TokenVersion
/// [`TokenVersion`](https://developer.mozilla.org/en-US/docs/Web/API/TokenVersion)
class TokenVersion : public emlite::Val {
  explicit TokenVersion(Handle h) noexcept;
public:
   explicit TokenVersion(const emlite::Val &v) noexcept;
  static TokenVersion take_ownership(Handle h) noexcept;
    [[nodiscard]] TokenVersion clone() const noexcept;
  static const TokenVersion _1();
};

/// Enum type OperationType
/// [`OperationType`](https://developer.mozilla.org/en-US/docs/Web/API/OperationType)
class OperationType : public emlite::Val {
  explicit OperationType(Handle h) noexcept;
public:
   explicit OperationType(const emlite::Val &v) noexcept;
  static OperationType take_ownership(Handle h) noexcept;
    [[nodiscard]] OperationType clone() const noexcept;
  static const OperationType token_request();
  static const OperationType send_redemption_record();
  static const OperationType token_redemption();
};

/// Enum type KAnonStatus
/// [`KAnonStatus`](https://developer.mozilla.org/en-US/docs/Web/API/KAnonStatus)
class KAnonStatus : public emlite::Val {
  explicit KAnonStatus(Handle h) noexcept;
public:
   explicit KAnonStatus(const emlite::Val &v) noexcept;
  static KAnonStatus take_ownership(Handle h) noexcept;
    [[nodiscard]] KAnonStatus clone() const noexcept;
  static const KAnonStatus passedAndEnforced();
  static const KAnonStatus passedNotEnforced();
  static const KAnonStatus belowThreshold();
  static const KAnonStatus notCalculated();
};

/// Enum type ImportExportKind
/// [`ImportExportKind`](https://developer.mozilla.org/en-US/docs/Web/API/ImportExportKind)
class ImportExportKind : public emlite::Val {
  explicit ImportExportKind(Handle h) noexcept;
public:
   explicit ImportExportKind(const emlite::Val &v) noexcept;
  static ImportExportKind take_ownership(Handle h) noexcept;
    [[nodiscard]] ImportExportKind clone() const noexcept;
  static const ImportExportKind function();
  static const ImportExportKind table();
  static const ImportExportKind memory();
  static const ImportExportKind global();
};

/// Enum type TableKind
/// [`TableKind`](https://developer.mozilla.org/en-US/docs/Web/API/TableKind)
class TableKind : public emlite::Val {
  explicit TableKind(Handle h) noexcept;
public:
   explicit TableKind(const emlite::Val &v) noexcept;
  static TableKind take_ownership(Handle h) noexcept;
    [[nodiscard]] TableKind clone() const noexcept;
  static const TableKind externref();
  static const TableKind anyfunc();
};

/// Enum type ValueType
/// [`ValueType`](https://developer.mozilla.org/en-US/docs/Web/API/ValueType)
class ValueType : public emlite::Val {
  explicit ValueType(Handle h) noexcept;
public:
   explicit ValueType(const emlite::Val &v) noexcept;
  static ValueType take_ownership(Handle h) noexcept;
    [[nodiscard]] ValueType clone() const noexcept;
  static const ValueType i32();
  static const ValueType i64();
  static const ValueType f32();
  static const ValueType f64();
  static const ValueType v128();
  static const ValueType externref();
  static const ValueType anyfunc();
};

/// Enum type IterationCompositeOperation
/// [`IterationCompositeOperation`](https://developer.mozilla.org/en-US/docs/Web/API/IterationCompositeOperation)
class IterationCompositeOperation : public emlite::Val {
  explicit IterationCompositeOperation(Handle h) noexcept;
public:
   explicit IterationCompositeOperation(const emlite::Val &v) noexcept;
  static IterationCompositeOperation take_ownership(Handle h) noexcept;
    [[nodiscard]] IterationCompositeOperation clone() const noexcept;
  static const IterationCompositeOperation replace();
  static const IterationCompositeOperation accumulate();
};

/// Enum type AnimationTriggerBehavior
/// [`AnimationTriggerBehavior`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationTriggerBehavior)
class AnimationTriggerBehavior : public emlite::Val {
  explicit AnimationTriggerBehavior(Handle h) noexcept;
public:
   explicit AnimationTriggerBehavior(const emlite::Val &v) noexcept;
  static AnimationTriggerBehavior take_ownership(Handle h) noexcept;
    [[nodiscard]] AnimationTriggerBehavior clone() const noexcept;
  static const AnimationTriggerBehavior once();
  static const AnimationTriggerBehavior repeat();
  static const AnimationTriggerBehavior alternate();
  static const AnimationTriggerBehavior state();
};

/// Enum type AnimationPlayState
/// [`AnimationPlayState`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationPlayState)
class AnimationPlayState : public emlite::Val {
  explicit AnimationPlayState(Handle h) noexcept;
public:
   explicit AnimationPlayState(const emlite::Val &v) noexcept;
  static AnimationPlayState take_ownership(Handle h) noexcept;
    [[nodiscard]] AnimationPlayState clone() const noexcept;
  static const AnimationPlayState idle();
  static const AnimationPlayState running();
  static const AnimationPlayState paused();
  static const AnimationPlayState finished();
};

/// Enum type AnimationReplaceState
/// [`AnimationReplaceState`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationReplaceState)
class AnimationReplaceState : public emlite::Val {
  explicit AnimationReplaceState(Handle h) noexcept;
public:
   explicit AnimationReplaceState(const emlite::Val &v) noexcept;
  static AnimationReplaceState take_ownership(Handle h) noexcept;
    [[nodiscard]] AnimationReplaceState clone() const noexcept;
  static const AnimationReplaceState active();
  static const AnimationReplaceState removed();
  static const AnimationReplaceState persisted();
};

/// Enum type FillMode
/// [`FillMode`](https://developer.mozilla.org/en-US/docs/Web/API/FillMode)
class FillMode : public emlite::Val {
  explicit FillMode(Handle h) noexcept;
public:
   explicit FillMode(const emlite::Val &v) noexcept;
  static FillMode take_ownership(Handle h) noexcept;
    [[nodiscard]] FillMode clone() const noexcept;
  static const FillMode none();
  static const FillMode forwards();
  static const FillMode backwards();
  static const FillMode both();
  static const FillMode auto_();
};

/// Enum type PlaybackDirection
/// [`PlaybackDirection`](https://developer.mozilla.org/en-US/docs/Web/API/PlaybackDirection)
class PlaybackDirection : public emlite::Val {
  explicit PlaybackDirection(Handle h) noexcept;
public:
   explicit PlaybackDirection(const emlite::Val &v) noexcept;
  static PlaybackDirection take_ownership(Handle h) noexcept;
    [[nodiscard]] PlaybackDirection clone() const noexcept;
  static const PlaybackDirection normal();
  static const PlaybackDirection reverse();
  static const PlaybackDirection alternate();
  static const PlaybackDirection alternate_reverse();
};

/// Enum type CompositeOperation
/// [`CompositeOperation`](https://developer.mozilla.org/en-US/docs/Web/API/CompositeOperation)
class CompositeOperation : public emlite::Val {
  explicit CompositeOperation(Handle h) noexcept;
public:
   explicit CompositeOperation(const emlite::Val &v) noexcept;
  static CompositeOperation take_ownership(Handle h) noexcept;
    [[nodiscard]] CompositeOperation clone() const noexcept;
  static const CompositeOperation replace();
  static const CompositeOperation add();
  static const CompositeOperation accumulate();
};

/// Enum type CompositeOperationOrAuto
/// [`CompositeOperationOrAuto`](https://developer.mozilla.org/en-US/docs/Web/API/CompositeOperationOrAuto)
class CompositeOperationOrAuto : public emlite::Val {
  explicit CompositeOperationOrAuto(Handle h) noexcept;
public:
   explicit CompositeOperationOrAuto(const emlite::Val &v) noexcept;
  static CompositeOperationOrAuto take_ownership(Handle h) noexcept;
    [[nodiscard]] CompositeOperationOrAuto clone() const noexcept;
  static const CompositeOperationOrAuto replace();
  static const CompositeOperationOrAuto add();
  static const CompositeOperationOrAuto accumulate();
  static const CompositeOperationOrAuto auto_();
};

/// Enum type LockMode
/// [`LockMode`](https://developer.mozilla.org/en-US/docs/Web/API/LockMode)
class LockMode : public emlite::Val {
  explicit LockMode(Handle h) noexcept;
public:
   explicit LockMode(const emlite::Val &v) noexcept;
  static LockMode take_ownership(Handle h) noexcept;
    [[nodiscard]] LockMode clone() const noexcept;
  static const LockMode shared();
  static const LockMode exclusive();
};

/// Enum type OTPCredentialTransportType
/// [`OTPCredentialTransportType`](https://developer.mozilla.org/en-US/docs/Web/API/OTPCredentialTransportType)
class OTPCredentialTransportType : public emlite::Val {
  explicit OTPCredentialTransportType(Handle h) noexcept;
public:
   explicit OTPCredentialTransportType(const emlite::Val &v) noexcept;
  static OTPCredentialTransportType take_ownership(Handle h) noexcept;
    [[nodiscard]] OTPCredentialTransportType clone() const noexcept;
  static const OTPCredentialTransportType sms();
};

/// Enum type AudioContextState
/// [`AudioContextState`](https://developer.mozilla.org/en-US/docs/Web/API/AudioContextState)
class AudioContextState : public emlite::Val {
  explicit AudioContextState(Handle h) noexcept;
public:
   explicit AudioContextState(const emlite::Val &v) noexcept;
  static AudioContextState take_ownership(Handle h) noexcept;
    [[nodiscard]] AudioContextState clone() const noexcept;
  static const AudioContextState suspended();
  static const AudioContextState running();
  static const AudioContextState closed();
  static const AudioContextState interrupted();
};

/// Enum type AudioContextRenderSizeCategory
/// [`AudioContextRenderSizeCategory`](https://developer.mozilla.org/en-US/docs/Web/API/AudioContextRenderSizeCategory)
class AudioContextRenderSizeCategory : public emlite::Val {
  explicit AudioContextRenderSizeCategory(Handle h) noexcept;
public:
   explicit AudioContextRenderSizeCategory(const emlite::Val &v) noexcept;
  static AudioContextRenderSizeCategory take_ownership(Handle h) noexcept;
    [[nodiscard]] AudioContextRenderSizeCategory clone() const noexcept;
  static const AudioContextRenderSizeCategory default_();
  static const AudioContextRenderSizeCategory hardware();
};

/// Enum type AudioContextLatencyCategory
/// [`AudioContextLatencyCategory`](https://developer.mozilla.org/en-US/docs/Web/API/AudioContextLatencyCategory)
class AudioContextLatencyCategory : public emlite::Val {
  explicit AudioContextLatencyCategory(Handle h) noexcept;
public:
   explicit AudioContextLatencyCategory(const emlite::Val &v) noexcept;
  static AudioContextLatencyCategory take_ownership(Handle h) noexcept;
    [[nodiscard]] AudioContextLatencyCategory clone() const noexcept;
  static const AudioContextLatencyCategory balanced();
  static const AudioContextLatencyCategory interactive();
  static const AudioContextLatencyCategory playback();
};

/// Enum type AudioSinkType
/// [`AudioSinkType`](https://developer.mozilla.org/en-US/docs/Web/API/AudioSinkType)
class AudioSinkType : public emlite::Val {
  explicit AudioSinkType(Handle h) noexcept;
public:
   explicit AudioSinkType(const emlite::Val &v) noexcept;
  static AudioSinkType take_ownership(Handle h) noexcept;
    [[nodiscard]] AudioSinkType clone() const noexcept;
  static const AudioSinkType none();
};

/// Enum type ChannelCountMode
/// [`ChannelCountMode`](https://developer.mozilla.org/en-US/docs/Web/API/ChannelCountMode)
class ChannelCountMode : public emlite::Val {
  explicit ChannelCountMode(Handle h) noexcept;
public:
   explicit ChannelCountMode(const emlite::Val &v) noexcept;
  static ChannelCountMode take_ownership(Handle h) noexcept;
    [[nodiscard]] ChannelCountMode clone() const noexcept;
  static const ChannelCountMode max();
  static const ChannelCountMode clamped_max();
  static const ChannelCountMode explicit_();
};

/// Enum type ChannelInterpretation
/// [`ChannelInterpretation`](https://developer.mozilla.org/en-US/docs/Web/API/ChannelInterpretation)
class ChannelInterpretation : public emlite::Val {
  explicit ChannelInterpretation(Handle h) noexcept;
public:
   explicit ChannelInterpretation(const emlite::Val &v) noexcept;
  static ChannelInterpretation take_ownership(Handle h) noexcept;
    [[nodiscard]] ChannelInterpretation clone() const noexcept;
  static const ChannelInterpretation speakers();
  static const ChannelInterpretation discrete();
};

/// Enum type AutomationRate
/// [`AutomationRate`](https://developer.mozilla.org/en-US/docs/Web/API/AutomationRate)
class AutomationRate : public emlite::Val {
  explicit AutomationRate(Handle h) noexcept;
public:
   explicit AutomationRate(const emlite::Val &v) noexcept;
  static AutomationRate take_ownership(Handle h) noexcept;
    [[nodiscard]] AutomationRate clone() const noexcept;
  static const AutomationRate a_rate();
  static const AutomationRate k_rate();
};

/// Enum type BiquadFilterType
/// [`BiquadFilterType`](https://developer.mozilla.org/en-US/docs/Web/API/BiquadFilterType)
class BiquadFilterType : public emlite::Val {
  explicit BiquadFilterType(Handle h) noexcept;
public:
   explicit BiquadFilterType(const emlite::Val &v) noexcept;
  static BiquadFilterType take_ownership(Handle h) noexcept;
    [[nodiscard]] BiquadFilterType clone() const noexcept;
  static const BiquadFilterType lowpass();
  static const BiquadFilterType highpass();
  static const BiquadFilterType bandpass();
  static const BiquadFilterType lowshelf();
  static const BiquadFilterType highshelf();
  static const BiquadFilterType peaking();
  static const BiquadFilterType notch();
  static const BiquadFilterType allpass();
};

/// Enum type OscillatorType
/// [`OscillatorType`](https://developer.mozilla.org/en-US/docs/Web/API/OscillatorType)
class OscillatorType : public emlite::Val {
  explicit OscillatorType(Handle h) noexcept;
public:
   explicit OscillatorType(const emlite::Val &v) noexcept;
  static OscillatorType take_ownership(Handle h) noexcept;
    [[nodiscard]] OscillatorType clone() const noexcept;
  static const OscillatorType sine();
  static const OscillatorType square();
  static const OscillatorType sawtooth();
  static const OscillatorType triangle();
  static const OscillatorType custom();
};

/// Enum type PanningModelType
/// [`PanningModelType`](https://developer.mozilla.org/en-US/docs/Web/API/PanningModelType)
class PanningModelType : public emlite::Val {
  explicit PanningModelType(Handle h) noexcept;
public:
   explicit PanningModelType(const emlite::Val &v) noexcept;
  static PanningModelType take_ownership(Handle h) noexcept;
    [[nodiscard]] PanningModelType clone() const noexcept;
  static const PanningModelType equalpower();
  static const PanningModelType HRTF();
};

/// Enum type DistanceModelType
/// [`DistanceModelType`](https://developer.mozilla.org/en-US/docs/Web/API/DistanceModelType)
class DistanceModelType : public emlite::Val {
  explicit DistanceModelType(Handle h) noexcept;
public:
   explicit DistanceModelType(const emlite::Val &v) noexcept;
  static DistanceModelType take_ownership(Handle h) noexcept;
    [[nodiscard]] DistanceModelType clone() const noexcept;
  static const DistanceModelType linear();
  static const DistanceModelType inverse();
  static const DistanceModelType exponential();
};

/// Enum type OverSampleType
/// [`OverSampleType`](https://developer.mozilla.org/en-US/docs/Web/API/OverSampleType)
class OverSampleType : public emlite::Val {
  explicit OverSampleType(Handle h) noexcept;
public:
   explicit OverSampleType(const emlite::Val &v) noexcept;
  static OverSampleType take_ownership(Handle h) noexcept;
    [[nodiscard]] OverSampleType clone() const noexcept;
  static const OverSampleType none();
  static const OverSampleType _2x();
  static const OverSampleType _4x();
};

/// Enum type AuthenticatorAttachment
/// [`AuthenticatorAttachment`](https://developer.mozilla.org/en-US/docs/Web/API/AuthenticatorAttachment)
class AuthenticatorAttachment : public emlite::Val {
  explicit AuthenticatorAttachment(Handle h) noexcept;
public:
   explicit AuthenticatorAttachment(const emlite::Val &v) noexcept;
  static AuthenticatorAttachment take_ownership(Handle h) noexcept;
    [[nodiscard]] AuthenticatorAttachment clone() const noexcept;
  static const AuthenticatorAttachment platform();
  static const AuthenticatorAttachment cross_platform();
};

/// Enum type ResidentKeyRequirement
/// [`ResidentKeyRequirement`](https://developer.mozilla.org/en-US/docs/Web/API/ResidentKeyRequirement)
class ResidentKeyRequirement : public emlite::Val {
  explicit ResidentKeyRequirement(Handle h) noexcept;
public:
   explicit ResidentKeyRequirement(const emlite::Val &v) noexcept;
  static ResidentKeyRequirement take_ownership(Handle h) noexcept;
    [[nodiscard]] ResidentKeyRequirement clone() const noexcept;
  static const ResidentKeyRequirement discouraged();
  static const ResidentKeyRequirement preferred();
  static const ResidentKeyRequirement required();
};

/// Enum type AttestationConveyancePreference
/// [`AttestationConveyancePreference`](https://developer.mozilla.org/en-US/docs/Web/API/AttestationConveyancePreference)
class AttestationConveyancePreference : public emlite::Val {
  explicit AttestationConveyancePreference(Handle h) noexcept;
public:
   explicit AttestationConveyancePreference(const emlite::Val &v) noexcept;
  static AttestationConveyancePreference take_ownership(Handle h) noexcept;
    [[nodiscard]] AttestationConveyancePreference clone() const noexcept;
  static const AttestationConveyancePreference none();
  static const AttestationConveyancePreference indirect();
  static const AttestationConveyancePreference direct();
  static const AttestationConveyancePreference enterprise();
};

/// Enum type TokenBindingStatus
/// [`TokenBindingStatus`](https://developer.mozilla.org/en-US/docs/Web/API/TokenBindingStatus)
class TokenBindingStatus : public emlite::Val {
  explicit TokenBindingStatus(Handle h) noexcept;
public:
   explicit TokenBindingStatus(const emlite::Val &v) noexcept;
  static TokenBindingStatus take_ownership(Handle h) noexcept;
    [[nodiscard]] TokenBindingStatus clone() const noexcept;
  static const TokenBindingStatus present();
  static const TokenBindingStatus supported();
};

/// Enum type PublicKeyCredentialType
/// [`PublicKeyCredentialType`](https://developer.mozilla.org/en-US/docs/Web/API/PublicKeyCredentialType)
class PublicKeyCredentialType : public emlite::Val {
  explicit PublicKeyCredentialType(Handle h) noexcept;
public:
   explicit PublicKeyCredentialType(const emlite::Val &v) noexcept;
  static PublicKeyCredentialType take_ownership(Handle h) noexcept;
    [[nodiscard]] PublicKeyCredentialType clone() const noexcept;
  static const PublicKeyCredentialType public_key();
};

/// Enum type AuthenticatorTransport
/// [`AuthenticatorTransport`](https://developer.mozilla.org/en-US/docs/Web/API/AuthenticatorTransport)
class AuthenticatorTransport : public emlite::Val {
  explicit AuthenticatorTransport(Handle h) noexcept;
public:
   explicit AuthenticatorTransport(const emlite::Val &v) noexcept;
  static AuthenticatorTransport take_ownership(Handle h) noexcept;
    [[nodiscard]] AuthenticatorTransport clone() const noexcept;
  static const AuthenticatorTransport usb();
  static const AuthenticatorTransport nfc();
  static const AuthenticatorTransport ble();
  static const AuthenticatorTransport smart_card();
  static const AuthenticatorTransport hybrid();
  static const AuthenticatorTransport internal();
};

/// Enum type UserVerificationRequirement
/// [`UserVerificationRequirement`](https://developer.mozilla.org/en-US/docs/Web/API/UserVerificationRequirement)
class UserVerificationRequirement : public emlite::Val {
  explicit UserVerificationRequirement(Handle h) noexcept;
public:
   explicit UserVerificationRequirement(const emlite::Val &v) noexcept;
  static UserVerificationRequirement take_ownership(Handle h) noexcept;
    [[nodiscard]] UserVerificationRequirement clone() const noexcept;
  static const UserVerificationRequirement required();
  static const UserVerificationRequirement preferred();
  static const UserVerificationRequirement discouraged();
};

/// Enum type ClientCapability
/// [`ClientCapability`](https://developer.mozilla.org/en-US/docs/Web/API/ClientCapability)
class ClientCapability : public emlite::Val {
  explicit ClientCapability(Handle h) noexcept;
public:
   explicit ClientCapability(const emlite::Val &v) noexcept;
  static ClientCapability take_ownership(Handle h) noexcept;
    [[nodiscard]] ClientCapability clone() const noexcept;
  static const ClientCapability conditionalCreate();
  static const ClientCapability conditionalGet();
  static const ClientCapability hybridTransport();
  static const ClientCapability passkeyPlatformAuthenticator();
  static const ClientCapability userVerifyingPlatformAuthenticator();
  static const ClientCapability relatedOrigins();
  static const ClientCapability signalAllAcceptedCredentials();
  static const ClientCapability signalCurrentUserDetails();
  static const ClientCapability signalUnknownCredential();
};

/// Enum type PublicKeyCredentialHint
/// [`PublicKeyCredentialHint`](https://developer.mozilla.org/en-US/docs/Web/API/PublicKeyCredentialHint)
class PublicKeyCredentialHint : public emlite::Val {
  explicit PublicKeyCredentialHint(Handle h) noexcept;
public:
   explicit PublicKeyCredentialHint(const emlite::Val &v) noexcept;
  static PublicKeyCredentialHint take_ownership(Handle h) noexcept;
    [[nodiscard]] PublicKeyCredentialHint clone() const noexcept;
  static const PublicKeyCredentialHint security_key();
  static const PublicKeyCredentialHint client_device();
  static const PublicKeyCredentialHint hybrid();
};

/// Enum type LargeBlobSupport
/// [`LargeBlobSupport`](https://developer.mozilla.org/en-US/docs/Web/API/LargeBlobSupport)
class LargeBlobSupport : public emlite::Val {
  explicit LargeBlobSupport(Handle h) noexcept;
public:
   explicit LargeBlobSupport(const emlite::Val &v) noexcept;
  static LargeBlobSupport take_ownership(Handle h) noexcept;
    [[nodiscard]] LargeBlobSupport clone() const noexcept;
  static const LargeBlobSupport required();
  static const LargeBlobSupport preferred();
};

/// Enum type AacBitstreamFormat
/// [`AacBitstreamFormat`](https://developer.mozilla.org/en-US/docs/Web/API/AacBitstreamFormat)
class AacBitstreamFormat : public emlite::Val {
  explicit AacBitstreamFormat(Handle h) noexcept;
public:
   explicit AacBitstreamFormat(const emlite::Val &v) noexcept;
  static AacBitstreamFormat take_ownership(Handle h) noexcept;
    [[nodiscard]] AacBitstreamFormat clone() const noexcept;
  static const AacBitstreamFormat aac();
  static const AacBitstreamFormat adts();
};

/// Enum type AvcBitstreamFormat
/// [`AvcBitstreamFormat`](https://developer.mozilla.org/en-US/docs/Web/API/AvcBitstreamFormat)
class AvcBitstreamFormat : public emlite::Val {
  explicit AvcBitstreamFormat(Handle h) noexcept;
public:
   explicit AvcBitstreamFormat(const emlite::Val &v) noexcept;
  static AvcBitstreamFormat take_ownership(Handle h) noexcept;
    [[nodiscard]] AvcBitstreamFormat clone() const noexcept;
  static const AvcBitstreamFormat annexb();
  static const AvcBitstreamFormat avc();
};

/// Enum type HevcBitstreamFormat
/// [`HevcBitstreamFormat`](https://developer.mozilla.org/en-US/docs/Web/API/HevcBitstreamFormat)
class HevcBitstreamFormat : public emlite::Val {
  explicit HevcBitstreamFormat(Handle h) noexcept;
public:
   explicit HevcBitstreamFormat(const emlite::Val &v) noexcept;
  static HevcBitstreamFormat take_ownership(Handle h) noexcept;
    [[nodiscard]] HevcBitstreamFormat clone() const noexcept;
  static const HevcBitstreamFormat annexb();
  static const HevcBitstreamFormat hevc();
};

/// Enum type OpusBitstreamFormat
/// [`OpusBitstreamFormat`](https://developer.mozilla.org/en-US/docs/Web/API/OpusBitstreamFormat)
class OpusBitstreamFormat : public emlite::Val {
  explicit OpusBitstreamFormat(Handle h) noexcept;
public:
   explicit OpusBitstreamFormat(const emlite::Val &v) noexcept;
  static OpusBitstreamFormat take_ownership(Handle h) noexcept;
    [[nodiscard]] OpusBitstreamFormat clone() const noexcept;
  static const OpusBitstreamFormat opus();
  static const OpusBitstreamFormat ogg();
};

/// Enum type OpusSignal
/// [`OpusSignal`](https://developer.mozilla.org/en-US/docs/Web/API/OpusSignal)
class OpusSignal : public emlite::Val {
  explicit OpusSignal(Handle h) noexcept;
public:
   explicit OpusSignal(const emlite::Val &v) noexcept;
  static OpusSignal take_ownership(Handle h) noexcept;
    [[nodiscard]] OpusSignal clone() const noexcept;
  static const OpusSignal auto_();
  static const OpusSignal music();
  static const OpusSignal voice();
};

/// Enum type OpusApplication
/// [`OpusApplication`](https://developer.mozilla.org/en-US/docs/Web/API/OpusApplication)
class OpusApplication : public emlite::Val {
  explicit OpusApplication(Handle h) noexcept;
public:
   explicit OpusApplication(const emlite::Val &v) noexcept;
  static OpusApplication take_ownership(Handle h) noexcept;
    [[nodiscard]] OpusApplication clone() const noexcept;
  static const OpusApplication voip();
  static const OpusApplication audio();
  static const OpusApplication lowdelay();
};

/// Enum type HardwareAcceleration
/// [`HardwareAcceleration`](https://developer.mozilla.org/en-US/docs/Web/API/HardwareAcceleration)
class HardwareAcceleration : public emlite::Val {
  explicit HardwareAcceleration(Handle h) noexcept;
public:
   explicit HardwareAcceleration(const emlite::Val &v) noexcept;
  static HardwareAcceleration take_ownership(Handle h) noexcept;
    [[nodiscard]] HardwareAcceleration clone() const noexcept;
  static const HardwareAcceleration no_preference();
  static const HardwareAcceleration prefer_hardware();
  static const HardwareAcceleration prefer_software();
};

/// Enum type AlphaOption
/// [`AlphaOption`](https://developer.mozilla.org/en-US/docs/Web/API/AlphaOption)
class AlphaOption : public emlite::Val {
  explicit AlphaOption(Handle h) noexcept;
public:
   explicit AlphaOption(const emlite::Val &v) noexcept;
  static AlphaOption take_ownership(Handle h) noexcept;
    [[nodiscard]] AlphaOption clone() const noexcept;
  static const AlphaOption keep();
  static const AlphaOption discard();
};

/// Enum type LatencyMode
/// [`LatencyMode`](https://developer.mozilla.org/en-US/docs/Web/API/LatencyMode)
class LatencyMode : public emlite::Val {
  explicit LatencyMode(Handle h) noexcept;
public:
   explicit LatencyMode(const emlite::Val &v) noexcept;
  static LatencyMode take_ownership(Handle h) noexcept;
    [[nodiscard]] LatencyMode clone() const noexcept;
  static const LatencyMode quality();
  static const LatencyMode realtime();
};

/// Enum type VideoEncoderBitrateMode
/// [`VideoEncoderBitrateMode`](https://developer.mozilla.org/en-US/docs/Web/API/VideoEncoderBitrateMode)
class VideoEncoderBitrateMode : public emlite::Val {
  explicit VideoEncoderBitrateMode(Handle h) noexcept;
public:
   explicit VideoEncoderBitrateMode(const emlite::Val &v) noexcept;
  static VideoEncoderBitrateMode take_ownership(Handle h) noexcept;
    [[nodiscard]] VideoEncoderBitrateMode clone() const noexcept;
  static const VideoEncoderBitrateMode constant();
  static const VideoEncoderBitrateMode variable();
  static const VideoEncoderBitrateMode quantizer();
};

/// Enum type CodecState
/// [`CodecState`](https://developer.mozilla.org/en-US/docs/Web/API/CodecState)
class CodecState : public emlite::Val {
  explicit CodecState(Handle h) noexcept;
public:
   explicit CodecState(const emlite::Val &v) noexcept;
  static CodecState take_ownership(Handle h) noexcept;
    [[nodiscard]] CodecState clone() const noexcept;
  static const CodecState unconfigured();
  static const CodecState configured();
  static const CodecState closed();
};

/// Enum type EncodedAudioChunkType
/// [`EncodedAudioChunkType`](https://developer.mozilla.org/en-US/docs/Web/API/EncodedAudioChunkType)
class EncodedAudioChunkType : public emlite::Val {
  explicit EncodedAudioChunkType(Handle h) noexcept;
public:
   explicit EncodedAudioChunkType(const emlite::Val &v) noexcept;
  static EncodedAudioChunkType take_ownership(Handle h) noexcept;
    [[nodiscard]] EncodedAudioChunkType clone() const noexcept;
  static const EncodedAudioChunkType key();
  static const EncodedAudioChunkType delta();
};

/// Enum type EncodedVideoChunkType
/// [`EncodedVideoChunkType`](https://developer.mozilla.org/en-US/docs/Web/API/EncodedVideoChunkType)
class EncodedVideoChunkType : public emlite::Val {
  explicit EncodedVideoChunkType(Handle h) noexcept;
public:
   explicit EncodedVideoChunkType(const emlite::Val &v) noexcept;
  static EncodedVideoChunkType take_ownership(Handle h) noexcept;
    [[nodiscard]] EncodedVideoChunkType clone() const noexcept;
  static const EncodedVideoChunkType key();
  static const EncodedVideoChunkType delta();
};

/// Enum type AudioSampleFormat
/// [`AudioSampleFormat`](https://developer.mozilla.org/en-US/docs/Web/API/AudioSampleFormat)
class AudioSampleFormat : public emlite::Val {
  explicit AudioSampleFormat(Handle h) noexcept;
public:
   explicit AudioSampleFormat(const emlite::Val &v) noexcept;
  static AudioSampleFormat take_ownership(Handle h) noexcept;
    [[nodiscard]] AudioSampleFormat clone() const noexcept;
  static const AudioSampleFormat u8();
  static const AudioSampleFormat s16();
  static const AudioSampleFormat s32();
  static const AudioSampleFormat f32();
  static const AudioSampleFormat u8_planar();
  static const AudioSampleFormat s16_planar();
  static const AudioSampleFormat s32_planar();
  static const AudioSampleFormat f32_planar();
};

/// Enum type VideoPixelFormat
/// [`VideoPixelFormat`](https://developer.mozilla.org/en-US/docs/Web/API/VideoPixelFormat)
class VideoPixelFormat : public emlite::Val {
  explicit VideoPixelFormat(Handle h) noexcept;
public:
   explicit VideoPixelFormat(const emlite::Val &v) noexcept;
  static VideoPixelFormat take_ownership(Handle h) noexcept;
    [[nodiscard]] VideoPixelFormat clone() const noexcept;
  static const VideoPixelFormat I420();
  static const VideoPixelFormat I420P10();
  static const VideoPixelFormat I420P12();
  static const VideoPixelFormat I420A();
  static const VideoPixelFormat I420AP10();
  static const VideoPixelFormat I420AP12();
  static const VideoPixelFormat I422();
  static const VideoPixelFormat I422P10();
  static const VideoPixelFormat I422P12();
  static const VideoPixelFormat I422A();
  static const VideoPixelFormat I422AP10();
  static const VideoPixelFormat I422AP12();
  static const VideoPixelFormat I444();
  static const VideoPixelFormat I444P10();
  static const VideoPixelFormat I444P12();
  static const VideoPixelFormat I444A();
  static const VideoPixelFormat I444AP10();
  static const VideoPixelFormat I444AP12();
  static const VideoPixelFormat NV12();
  static const VideoPixelFormat RGBA();
  static const VideoPixelFormat RGBX();
  static const VideoPixelFormat BGRA();
  static const VideoPixelFormat BGRX();
};

/// Enum type VideoColorPrimaries
/// [`VideoColorPrimaries`](https://developer.mozilla.org/en-US/docs/Web/API/VideoColorPrimaries)
class VideoColorPrimaries : public emlite::Val {
  explicit VideoColorPrimaries(Handle h) noexcept;
public:
   explicit VideoColorPrimaries(const emlite::Val &v) noexcept;
  static VideoColorPrimaries take_ownership(Handle h) noexcept;
    [[nodiscard]] VideoColorPrimaries clone() const noexcept;
  static const VideoColorPrimaries bt709();
  static const VideoColorPrimaries bt470bg();
  static const VideoColorPrimaries smpte170m();
  static const VideoColorPrimaries bt2020();
  static const VideoColorPrimaries smpte432();
};

/// Enum type VideoTransferCharacteristics
/// [`VideoTransferCharacteristics`](https://developer.mozilla.org/en-US/docs/Web/API/VideoTransferCharacteristics)
class VideoTransferCharacteristics : public emlite::Val {
  explicit VideoTransferCharacteristics(Handle h) noexcept;
public:
   explicit VideoTransferCharacteristics(const emlite::Val &v) noexcept;
  static VideoTransferCharacteristics take_ownership(Handle h) noexcept;
    [[nodiscard]] VideoTransferCharacteristics clone() const noexcept;
  static const VideoTransferCharacteristics bt709();
  static const VideoTransferCharacteristics smpte170m();
  static const VideoTransferCharacteristics iec61966_2_1();
  static const VideoTransferCharacteristics linear();
  static const VideoTransferCharacteristics pq();
  static const VideoTransferCharacteristics hlg();
};

/// Enum type VideoMatrixCoefficients
/// [`VideoMatrixCoefficients`](https://developer.mozilla.org/en-US/docs/Web/API/VideoMatrixCoefficients)
class VideoMatrixCoefficients : public emlite::Val {
  explicit VideoMatrixCoefficients(Handle h) noexcept;
public:
   explicit VideoMatrixCoefficients(const emlite::Val &v) noexcept;
  static VideoMatrixCoefficients take_ownership(Handle h) noexcept;
    [[nodiscard]] VideoMatrixCoefficients clone() const noexcept;
  static const VideoMatrixCoefficients rgb();
  static const VideoMatrixCoefficients bt709();
  static const VideoMatrixCoefficients bt470bg();
  static const VideoMatrixCoefficients smpte170m();
  static const VideoMatrixCoefficients bt2020_ncl();
};

/// Enum type KeyType
/// [`KeyType`](https://developer.mozilla.org/en-US/docs/Web/API/KeyType)
class KeyType : public emlite::Val {
  explicit KeyType(Handle h) noexcept;
public:
   explicit KeyType(const emlite::Val &v) noexcept;
  static KeyType take_ownership(Handle h) noexcept;
    [[nodiscard]] KeyType clone() const noexcept;
  static const KeyType public_();
  static const KeyType private_();
  static const KeyType secret();
};

/// Enum type KeyUsage
/// [`KeyUsage`](https://developer.mozilla.org/en-US/docs/Web/API/KeyUsage)
class KeyUsage : public emlite::Val {
  explicit KeyUsage(Handle h) noexcept;
public:
   explicit KeyUsage(const emlite::Val &v) noexcept;
  static KeyUsage take_ownership(Handle h) noexcept;
    [[nodiscard]] KeyUsage clone() const noexcept;
  static const KeyUsage encrypt();
  static const KeyUsage decrypt();
  static const KeyUsage sign();
  static const KeyUsage verify();
  static const KeyUsage deriveKey();
  static const KeyUsage deriveBits();
  static const KeyUsage wrapKey();
  static const KeyUsage unwrapKey();
};

/// Enum type KeyFormat
/// [`KeyFormat`](https://developer.mozilla.org/en-US/docs/Web/API/KeyFormat)
class KeyFormat : public emlite::Val {
  explicit KeyFormat(Handle h) noexcept;
public:
   explicit KeyFormat(const emlite::Val &v) noexcept;
  static KeyFormat take_ownership(Handle h) noexcept;
    [[nodiscard]] KeyFormat clone() const noexcept;
  static const KeyFormat raw();
  static const KeyFormat spki();
  static const KeyFormat pkcs8();
  static const KeyFormat jwk();
};

/// Enum type WebGLPowerPreference
/// [`WebGLPowerPreference`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLPowerPreference)
class WebGLPowerPreference : public emlite::Val {
  explicit WebGLPowerPreference(Handle h) noexcept;
public:
   explicit WebGLPowerPreference(const emlite::Val &v) noexcept;
  static WebGLPowerPreference take_ownership(Handle h) noexcept;
    [[nodiscard]] WebGLPowerPreference clone() const noexcept;
  static const WebGLPowerPreference default_();
  static const WebGLPowerPreference low_power();
  static const WebGLPowerPreference high_performance();
};

/// Enum type GPUPowerPreference
/// [`GPUPowerPreference`](https://developer.mozilla.org/en-US/docs/Web/API/GPUPowerPreference)
class GPUPowerPreference : public emlite::Val {
  explicit GPUPowerPreference(Handle h) noexcept;
public:
   explicit GPUPowerPreference(const emlite::Val &v) noexcept;
  static GPUPowerPreference take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUPowerPreference clone() const noexcept;
  static const GPUPowerPreference low_power();
  static const GPUPowerPreference high_performance();
};

/// Enum type GPUFeatureName
/// [`GPUFeatureName`](https://developer.mozilla.org/en-US/docs/Web/API/GPUFeatureName)
class GPUFeatureName : public emlite::Val {
  explicit GPUFeatureName(Handle h) noexcept;
public:
   explicit GPUFeatureName(const emlite::Val &v) noexcept;
  static GPUFeatureName take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUFeatureName clone() const noexcept;
  static const GPUFeatureName core_features_and_limits();
  static const GPUFeatureName depth_clip_control();
  static const GPUFeatureName depth32float_stencil8();
  static const GPUFeatureName texture_compression_bc();
  static const GPUFeatureName texture_compression_bc_sliced_3d();
  static const GPUFeatureName texture_compression_etc2();
  static const GPUFeatureName texture_compression_astc();
  static const GPUFeatureName texture_compression_astc_sliced_3d();
  static const GPUFeatureName timestamp_query();
  static const GPUFeatureName indirect_first_instance();
  static const GPUFeatureName shader_f16();
  static const GPUFeatureName rg11b10ufloat_renderable();
  static const GPUFeatureName bgra8unorm_storage();
  static const GPUFeatureName float32_filterable();
  static const GPUFeatureName float32_blendable();
  static const GPUFeatureName clip_distances();
  static const GPUFeatureName dual_source_blending();
  static const GPUFeatureName subgroups();
  static const GPUFeatureName texture_formats_tier1();
  static const GPUFeatureName texture_formats_tier2();
};

/// Enum type GPUBufferMapState
/// [`GPUBufferMapState`](https://developer.mozilla.org/en-US/docs/Web/API/GPUBufferMapState)
class GPUBufferMapState : public emlite::Val {
  explicit GPUBufferMapState(Handle h) noexcept;
public:
   explicit GPUBufferMapState(const emlite::Val &v) noexcept;
  static GPUBufferMapState take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUBufferMapState clone() const noexcept;
  static const GPUBufferMapState unmapped();
  static const GPUBufferMapState pending();
  static const GPUBufferMapState mapped();
};

/// Enum type GPUTextureDimension
/// [`GPUTextureDimension`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTextureDimension)
class GPUTextureDimension : public emlite::Val {
  explicit GPUTextureDimension(Handle h) noexcept;
public:
   explicit GPUTextureDimension(const emlite::Val &v) noexcept;
  static GPUTextureDimension take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUTextureDimension clone() const noexcept;
  static const GPUTextureDimension _1d();
  static const GPUTextureDimension _2d();
  static const GPUTextureDimension _3d();
};

/// Enum type GPUTextureViewDimension
/// [`GPUTextureViewDimension`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTextureViewDimension)
class GPUTextureViewDimension : public emlite::Val {
  explicit GPUTextureViewDimension(Handle h) noexcept;
public:
   explicit GPUTextureViewDimension(const emlite::Val &v) noexcept;
  static GPUTextureViewDimension take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUTextureViewDimension clone() const noexcept;
  static const GPUTextureViewDimension _1d();
  static const GPUTextureViewDimension _2d();
  static const GPUTextureViewDimension _2d_array();
  static const GPUTextureViewDimension cube();
  static const GPUTextureViewDimension cube_array();
  static const GPUTextureViewDimension _3d();
};

/// Enum type GPUTextureAspect
/// [`GPUTextureAspect`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTextureAspect)
class GPUTextureAspect : public emlite::Val {
  explicit GPUTextureAspect(Handle h) noexcept;
public:
   explicit GPUTextureAspect(const emlite::Val &v) noexcept;
  static GPUTextureAspect take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUTextureAspect clone() const noexcept;
  static const GPUTextureAspect all();
  static const GPUTextureAspect stencil_only();
  static const GPUTextureAspect depth_only();
};

/// Enum type GPUTextureFormat
/// [`GPUTextureFormat`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTextureFormat)
class GPUTextureFormat : public emlite::Val {
  explicit GPUTextureFormat(Handle h) noexcept;
public:
   explicit GPUTextureFormat(const emlite::Val &v) noexcept;
  static GPUTextureFormat take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUTextureFormat clone() const noexcept;
  static const GPUTextureFormat r8unorm();
  static const GPUTextureFormat r8snorm();
  static const GPUTextureFormat r8uint();
  static const GPUTextureFormat r8sint();
  static const GPUTextureFormat r16unorm();
  static const GPUTextureFormat r16snorm();
  static const GPUTextureFormat r16uint();
  static const GPUTextureFormat r16sint();
  static const GPUTextureFormat r16float();
  static const GPUTextureFormat rg8unorm();
  static const GPUTextureFormat rg8snorm();
  static const GPUTextureFormat rg8uint();
  static const GPUTextureFormat rg8sint();
  static const GPUTextureFormat r32uint();
  static const GPUTextureFormat r32sint();
  static const GPUTextureFormat r32float();
  static const GPUTextureFormat rg16unorm();
  static const GPUTextureFormat rg16snorm();
  static const GPUTextureFormat rg16uint();
  static const GPUTextureFormat rg16sint();
  static const GPUTextureFormat rg16float();
  static const GPUTextureFormat rgba8unorm();
  static const GPUTextureFormat rgba8unorm_srgb();
  static const GPUTextureFormat rgba8snorm();
  static const GPUTextureFormat rgba8uint();
  static const GPUTextureFormat rgba8sint();
  static const GPUTextureFormat bgra8unorm();
  static const GPUTextureFormat bgra8unorm_srgb();
  static const GPUTextureFormat rgb9e5ufloat();
  static const GPUTextureFormat rgb10a2uint();
  static const GPUTextureFormat rgb10a2unorm();
  static const GPUTextureFormat rg11b10ufloat();
  static const GPUTextureFormat rg32uint();
  static const GPUTextureFormat rg32sint();
  static const GPUTextureFormat rg32float();
  static const GPUTextureFormat rgba16unorm();
  static const GPUTextureFormat rgba16snorm();
  static const GPUTextureFormat rgba16uint();
  static const GPUTextureFormat rgba16sint();
  static const GPUTextureFormat rgba16float();
  static const GPUTextureFormat rgba32uint();
  static const GPUTextureFormat rgba32sint();
  static const GPUTextureFormat rgba32float();
  static const GPUTextureFormat stencil8();
  static const GPUTextureFormat depth16unorm();
  static const GPUTextureFormat depth24plus();
  static const GPUTextureFormat depth24plus_stencil8();
  static const GPUTextureFormat depth32float();
  static const GPUTextureFormat depth32float_stencil8();
  static const GPUTextureFormat bc1_rgba_unorm();
  static const GPUTextureFormat bc1_rgba_unorm_srgb();
  static const GPUTextureFormat bc2_rgba_unorm();
  static const GPUTextureFormat bc2_rgba_unorm_srgb();
  static const GPUTextureFormat bc3_rgba_unorm();
  static const GPUTextureFormat bc3_rgba_unorm_srgb();
  static const GPUTextureFormat bc4_r_unorm();
  static const GPUTextureFormat bc4_r_snorm();
  static const GPUTextureFormat bc5_rg_unorm();
  static const GPUTextureFormat bc5_rg_snorm();
  static const GPUTextureFormat bc6h_rgb_ufloat();
  static const GPUTextureFormat bc6h_rgb_float();
  static const GPUTextureFormat bc7_rgba_unorm();
  static const GPUTextureFormat bc7_rgba_unorm_srgb();
  static const GPUTextureFormat etc2_rgb8unorm();
  static const GPUTextureFormat etc2_rgb8unorm_srgb();
  static const GPUTextureFormat etc2_rgb8a1unorm();
  static const GPUTextureFormat etc2_rgb8a1unorm_srgb();
  static const GPUTextureFormat etc2_rgba8unorm();
  static const GPUTextureFormat etc2_rgba8unorm_srgb();
  static const GPUTextureFormat eac_r11unorm();
  static const GPUTextureFormat eac_r11snorm();
  static const GPUTextureFormat eac_rg11unorm();
  static const GPUTextureFormat eac_rg11snorm();
  static const GPUTextureFormat astc_4x4_unorm();
  static const GPUTextureFormat astc_4x4_unorm_srgb();
  static const GPUTextureFormat astc_5x4_unorm();
  static const GPUTextureFormat astc_5x4_unorm_srgb();
  static const GPUTextureFormat astc_5x5_unorm();
  static const GPUTextureFormat astc_5x5_unorm_srgb();
  static const GPUTextureFormat astc_6x5_unorm();
  static const GPUTextureFormat astc_6x5_unorm_srgb();
  static const GPUTextureFormat astc_6x6_unorm();
  static const GPUTextureFormat astc_6x6_unorm_srgb();
  static const GPUTextureFormat astc_8x5_unorm();
  static const GPUTextureFormat astc_8x5_unorm_srgb();
  static const GPUTextureFormat astc_8x6_unorm();
  static const GPUTextureFormat astc_8x6_unorm_srgb();
  static const GPUTextureFormat astc_8x8_unorm();
  static const GPUTextureFormat astc_8x8_unorm_srgb();
  static const GPUTextureFormat astc_10x5_unorm();
  static const GPUTextureFormat astc_10x5_unorm_srgb();
  static const GPUTextureFormat astc_10x6_unorm();
  static const GPUTextureFormat astc_10x6_unorm_srgb();
  static const GPUTextureFormat astc_10x8_unorm();
  static const GPUTextureFormat astc_10x8_unorm_srgb();
  static const GPUTextureFormat astc_10x10_unorm();
  static const GPUTextureFormat astc_10x10_unorm_srgb();
  static const GPUTextureFormat astc_12x10_unorm();
  static const GPUTextureFormat astc_12x10_unorm_srgb();
  static const GPUTextureFormat astc_12x12_unorm();
  static const GPUTextureFormat astc_12x12_unorm_srgb();
};

/// Enum type GPUAddressMode
/// [`GPUAddressMode`](https://developer.mozilla.org/en-US/docs/Web/API/GPUAddressMode)
class GPUAddressMode : public emlite::Val {
  explicit GPUAddressMode(Handle h) noexcept;
public:
   explicit GPUAddressMode(const emlite::Val &v) noexcept;
  static GPUAddressMode take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUAddressMode clone() const noexcept;
  static const GPUAddressMode clamp_to_edge();
  static const GPUAddressMode repeat();
  static const GPUAddressMode mirror_repeat();
};

/// Enum type GPUFilterMode
/// [`GPUFilterMode`](https://developer.mozilla.org/en-US/docs/Web/API/GPUFilterMode)
class GPUFilterMode : public emlite::Val {
  explicit GPUFilterMode(Handle h) noexcept;
public:
   explicit GPUFilterMode(const emlite::Val &v) noexcept;
  static GPUFilterMode take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUFilterMode clone() const noexcept;
  static const GPUFilterMode nearest();
  static const GPUFilterMode linear();
};

/// Enum type GPUMipmapFilterMode
/// [`GPUMipmapFilterMode`](https://developer.mozilla.org/en-US/docs/Web/API/GPUMipmapFilterMode)
class GPUMipmapFilterMode : public emlite::Val {
  explicit GPUMipmapFilterMode(Handle h) noexcept;
public:
   explicit GPUMipmapFilterMode(const emlite::Val &v) noexcept;
  static GPUMipmapFilterMode take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUMipmapFilterMode clone() const noexcept;
  static const GPUMipmapFilterMode nearest();
  static const GPUMipmapFilterMode linear();
};

/// Enum type GPUCompareFunction
/// [`GPUCompareFunction`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCompareFunction)
class GPUCompareFunction : public emlite::Val {
  explicit GPUCompareFunction(Handle h) noexcept;
public:
   explicit GPUCompareFunction(const emlite::Val &v) noexcept;
  static GPUCompareFunction take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUCompareFunction clone() const noexcept;
  static const GPUCompareFunction never();
  static const GPUCompareFunction less();
  static const GPUCompareFunction equal();
  static const GPUCompareFunction less_equal();
  static const GPUCompareFunction greater();
  static const GPUCompareFunction not_equal();
  static const GPUCompareFunction greater_equal();
  static const GPUCompareFunction always();
};

/// Enum type GPUBufferBindingType
/// [`GPUBufferBindingType`](https://developer.mozilla.org/en-US/docs/Web/API/GPUBufferBindingType)
class GPUBufferBindingType : public emlite::Val {
  explicit GPUBufferBindingType(Handle h) noexcept;
public:
   explicit GPUBufferBindingType(const emlite::Val &v) noexcept;
  static GPUBufferBindingType take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUBufferBindingType clone() const noexcept;
  static const GPUBufferBindingType uniform();
  static const GPUBufferBindingType storage();
  static const GPUBufferBindingType read_only_storage();
};

/// Enum type GPUSamplerBindingType
/// [`GPUSamplerBindingType`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSamplerBindingType)
class GPUSamplerBindingType : public emlite::Val {
  explicit GPUSamplerBindingType(Handle h) noexcept;
public:
   explicit GPUSamplerBindingType(const emlite::Val &v) noexcept;
  static GPUSamplerBindingType take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUSamplerBindingType clone() const noexcept;
  static const GPUSamplerBindingType filtering();
  static const GPUSamplerBindingType non_filtering();
  static const GPUSamplerBindingType comparison();
};

/// Enum type GPUTextureSampleType
/// [`GPUTextureSampleType`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTextureSampleType)
class GPUTextureSampleType : public emlite::Val {
  explicit GPUTextureSampleType(Handle h) noexcept;
public:
   explicit GPUTextureSampleType(const emlite::Val &v) noexcept;
  static GPUTextureSampleType take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUTextureSampleType clone() const noexcept;
  static const GPUTextureSampleType float_();
  static const GPUTextureSampleType unfilterable_float();
  static const GPUTextureSampleType depth();
  static const GPUTextureSampleType sint();
  static const GPUTextureSampleType uint();
};

/// Enum type GPUStorageTextureAccess
/// [`GPUStorageTextureAccess`](https://developer.mozilla.org/en-US/docs/Web/API/GPUStorageTextureAccess)
class GPUStorageTextureAccess : public emlite::Val {
  explicit GPUStorageTextureAccess(Handle h) noexcept;
public:
   explicit GPUStorageTextureAccess(const emlite::Val &v) noexcept;
  static GPUStorageTextureAccess take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUStorageTextureAccess clone() const noexcept;
  static const GPUStorageTextureAccess write_only();
  static const GPUStorageTextureAccess read_only();
  static const GPUStorageTextureAccess read_write();
};

/// Enum type GPUCompilationMessageType
/// [`GPUCompilationMessageType`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCompilationMessageType)
class GPUCompilationMessageType : public emlite::Val {
  explicit GPUCompilationMessageType(Handle h) noexcept;
public:
   explicit GPUCompilationMessageType(const emlite::Val &v) noexcept;
  static GPUCompilationMessageType take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUCompilationMessageType clone() const noexcept;
  static const GPUCompilationMessageType error();
  static const GPUCompilationMessageType warning();
  static const GPUCompilationMessageType info();
};

/// Enum type GPUPipelineErrorReason
/// [`GPUPipelineErrorReason`](https://developer.mozilla.org/en-US/docs/Web/API/GPUPipelineErrorReason)
class GPUPipelineErrorReason : public emlite::Val {
  explicit GPUPipelineErrorReason(Handle h) noexcept;
public:
   explicit GPUPipelineErrorReason(const emlite::Val &v) noexcept;
  static GPUPipelineErrorReason take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUPipelineErrorReason clone() const noexcept;
  static const GPUPipelineErrorReason validation();
  static const GPUPipelineErrorReason internal();
};

/// Enum type GPUAutoLayoutMode
/// [`GPUAutoLayoutMode`](https://developer.mozilla.org/en-US/docs/Web/API/GPUAutoLayoutMode)
class GPUAutoLayoutMode : public emlite::Val {
  explicit GPUAutoLayoutMode(Handle h) noexcept;
public:
   explicit GPUAutoLayoutMode(const emlite::Val &v) noexcept;
  static GPUAutoLayoutMode take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUAutoLayoutMode clone() const noexcept;
  static const GPUAutoLayoutMode auto_();
};

/// Enum type GPUPrimitiveTopology
/// [`GPUPrimitiveTopology`](https://developer.mozilla.org/en-US/docs/Web/API/GPUPrimitiveTopology)
class GPUPrimitiveTopology : public emlite::Val {
  explicit GPUPrimitiveTopology(Handle h) noexcept;
public:
   explicit GPUPrimitiveTopology(const emlite::Val &v) noexcept;
  static GPUPrimitiveTopology take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUPrimitiveTopology clone() const noexcept;
  static const GPUPrimitiveTopology point_list();
  static const GPUPrimitiveTopology line_list();
  static const GPUPrimitiveTopology line_strip();
  static const GPUPrimitiveTopology triangle_list();
  static const GPUPrimitiveTopology triangle_strip();
};

/// Enum type GPUFrontFace
/// [`GPUFrontFace`](https://developer.mozilla.org/en-US/docs/Web/API/GPUFrontFace)
class GPUFrontFace : public emlite::Val {
  explicit GPUFrontFace(Handle h) noexcept;
public:
   explicit GPUFrontFace(const emlite::Val &v) noexcept;
  static GPUFrontFace take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUFrontFace clone() const noexcept;
  static const GPUFrontFace ccw();
  static const GPUFrontFace cw();
};

/// Enum type GPUCullMode
/// [`GPUCullMode`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCullMode)
class GPUCullMode : public emlite::Val {
  explicit GPUCullMode(Handle h) noexcept;
public:
   explicit GPUCullMode(const emlite::Val &v) noexcept;
  static GPUCullMode take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUCullMode clone() const noexcept;
  static const GPUCullMode none();
  static const GPUCullMode front();
  static const GPUCullMode back();
};

/// Enum type GPUBlendFactor
/// [`GPUBlendFactor`](https://developer.mozilla.org/en-US/docs/Web/API/GPUBlendFactor)
class GPUBlendFactor : public emlite::Val {
  explicit GPUBlendFactor(Handle h) noexcept;
public:
   explicit GPUBlendFactor(const emlite::Val &v) noexcept;
  static GPUBlendFactor take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUBlendFactor clone() const noexcept;
  static const GPUBlendFactor zero();
  static const GPUBlendFactor one();
  static const GPUBlendFactor src();
  static const GPUBlendFactor one_minus_src();
  static const GPUBlendFactor src_alpha();
  static const GPUBlendFactor one_minus_src_alpha();
  static const GPUBlendFactor dst();
  static const GPUBlendFactor one_minus_dst();
  static const GPUBlendFactor dst_alpha();
  static const GPUBlendFactor one_minus_dst_alpha();
  static const GPUBlendFactor src_alpha_saturated();
  static const GPUBlendFactor constant();
  static const GPUBlendFactor one_minus_constant();
  static const GPUBlendFactor src1();
  static const GPUBlendFactor one_minus_src1();
  static const GPUBlendFactor src1_alpha();
  static const GPUBlendFactor one_minus_src1_alpha();
};

/// Enum type GPUBlendOperation
/// [`GPUBlendOperation`](https://developer.mozilla.org/en-US/docs/Web/API/GPUBlendOperation)
class GPUBlendOperation : public emlite::Val {
  explicit GPUBlendOperation(Handle h) noexcept;
public:
   explicit GPUBlendOperation(const emlite::Val &v) noexcept;
  static GPUBlendOperation take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUBlendOperation clone() const noexcept;
  static const GPUBlendOperation add();
  static const GPUBlendOperation subtract();
  static const GPUBlendOperation reverse_subtract();
  static const GPUBlendOperation min();
  static const GPUBlendOperation max();
};

/// Enum type GPUStencilOperation
/// [`GPUStencilOperation`](https://developer.mozilla.org/en-US/docs/Web/API/GPUStencilOperation)
class GPUStencilOperation : public emlite::Val {
  explicit GPUStencilOperation(Handle h) noexcept;
public:
   explicit GPUStencilOperation(const emlite::Val &v) noexcept;
  static GPUStencilOperation take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUStencilOperation clone() const noexcept;
  static const GPUStencilOperation keep();
  static const GPUStencilOperation zero();
  static const GPUStencilOperation replace();
  static const GPUStencilOperation invert();
  static const GPUStencilOperation increment_clamp();
  static const GPUStencilOperation decrement_clamp();
  static const GPUStencilOperation increment_wrap();
  static const GPUStencilOperation decrement_wrap();
};

/// Enum type GPUIndexFormat
/// [`GPUIndexFormat`](https://developer.mozilla.org/en-US/docs/Web/API/GPUIndexFormat)
class GPUIndexFormat : public emlite::Val {
  explicit GPUIndexFormat(Handle h) noexcept;
public:
   explicit GPUIndexFormat(const emlite::Val &v) noexcept;
  static GPUIndexFormat take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUIndexFormat clone() const noexcept;
  static const GPUIndexFormat uint16();
  static const GPUIndexFormat uint32();
};

/// Enum type GPUVertexFormat
/// [`GPUVertexFormat`](https://developer.mozilla.org/en-US/docs/Web/API/GPUVertexFormat)
class GPUVertexFormat : public emlite::Val {
  explicit GPUVertexFormat(Handle h) noexcept;
public:
   explicit GPUVertexFormat(const emlite::Val &v) noexcept;
  static GPUVertexFormat take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUVertexFormat clone() const noexcept;
  static const GPUVertexFormat uint8();
  static const GPUVertexFormat uint8x2();
  static const GPUVertexFormat uint8x4();
  static const GPUVertexFormat sint8();
  static const GPUVertexFormat sint8x2();
  static const GPUVertexFormat sint8x4();
  static const GPUVertexFormat unorm8();
  static const GPUVertexFormat unorm8x2();
  static const GPUVertexFormat unorm8x4();
  static const GPUVertexFormat snorm8();
  static const GPUVertexFormat snorm8x2();
  static const GPUVertexFormat snorm8x4();
  static const GPUVertexFormat uint16();
  static const GPUVertexFormat uint16x2();
  static const GPUVertexFormat uint16x4();
  static const GPUVertexFormat sint16();
  static const GPUVertexFormat sint16x2();
  static const GPUVertexFormat sint16x4();
  static const GPUVertexFormat unorm16();
  static const GPUVertexFormat unorm16x2();
  static const GPUVertexFormat unorm16x4();
  static const GPUVertexFormat snorm16();
  static const GPUVertexFormat snorm16x2();
  static const GPUVertexFormat snorm16x4();
  static const GPUVertexFormat float16();
  static const GPUVertexFormat float16x2();
  static const GPUVertexFormat float16x4();
  static const GPUVertexFormat float32();
  static const GPUVertexFormat float32x2();
  static const GPUVertexFormat float32x3();
  static const GPUVertexFormat float32x4();
  static const GPUVertexFormat uint32();
  static const GPUVertexFormat uint32x2();
  static const GPUVertexFormat uint32x3();
  static const GPUVertexFormat uint32x4();
  static const GPUVertexFormat sint32();
  static const GPUVertexFormat sint32x2();
  static const GPUVertexFormat sint32x3();
  static const GPUVertexFormat sint32x4();
  static const GPUVertexFormat unorm10_10_10_2();
  static const GPUVertexFormat unorm8x4_bgra();
};

/// Enum type GPUVertexStepMode
/// [`GPUVertexStepMode`](https://developer.mozilla.org/en-US/docs/Web/API/GPUVertexStepMode)
class GPUVertexStepMode : public emlite::Val {
  explicit GPUVertexStepMode(Handle h) noexcept;
public:
   explicit GPUVertexStepMode(const emlite::Val &v) noexcept;
  static GPUVertexStepMode take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUVertexStepMode clone() const noexcept;
  static const GPUVertexStepMode vertex();
  static const GPUVertexStepMode instance();
};

/// Enum type GPULoadOp
/// [`GPULoadOp`](https://developer.mozilla.org/en-US/docs/Web/API/GPULoadOp)
class GPULoadOp : public emlite::Val {
  explicit GPULoadOp(Handle h) noexcept;
public:
   explicit GPULoadOp(const emlite::Val &v) noexcept;
  static GPULoadOp take_ownership(Handle h) noexcept;
    [[nodiscard]] GPULoadOp clone() const noexcept;
  static const GPULoadOp load();
  static const GPULoadOp clear();
};

/// Enum type GPUStoreOp
/// [`GPUStoreOp`](https://developer.mozilla.org/en-US/docs/Web/API/GPUStoreOp)
class GPUStoreOp : public emlite::Val {
  explicit GPUStoreOp(Handle h) noexcept;
public:
   explicit GPUStoreOp(const emlite::Val &v) noexcept;
  static GPUStoreOp take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUStoreOp clone() const noexcept;
  static const GPUStoreOp store();
  static const GPUStoreOp discard();
};

/// Enum type GPUQueryType
/// [`GPUQueryType`](https://developer.mozilla.org/en-US/docs/Web/API/GPUQueryType)
class GPUQueryType : public emlite::Val {
  explicit GPUQueryType(Handle h) noexcept;
public:
   explicit GPUQueryType(const emlite::Val &v) noexcept;
  static GPUQueryType take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUQueryType clone() const noexcept;
  static const GPUQueryType occlusion();
  static const GPUQueryType timestamp();
};

/// Enum type GPUCanvasAlphaMode
/// [`GPUCanvasAlphaMode`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCanvasAlphaMode)
class GPUCanvasAlphaMode : public emlite::Val {
  explicit GPUCanvasAlphaMode(Handle h) noexcept;
public:
   explicit GPUCanvasAlphaMode(const emlite::Val &v) noexcept;
  static GPUCanvasAlphaMode take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUCanvasAlphaMode clone() const noexcept;
  static const GPUCanvasAlphaMode opaque();
  static const GPUCanvasAlphaMode premultiplied();
};

/// Enum type GPUCanvasToneMappingMode
/// [`GPUCanvasToneMappingMode`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCanvasToneMappingMode)
class GPUCanvasToneMappingMode : public emlite::Val {
  explicit GPUCanvasToneMappingMode(Handle h) noexcept;
public:
   explicit GPUCanvasToneMappingMode(const emlite::Val &v) noexcept;
  static GPUCanvasToneMappingMode take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUCanvasToneMappingMode clone() const noexcept;
  static const GPUCanvasToneMappingMode standard();
  static const GPUCanvasToneMappingMode extended();
};

/// Enum type GPUDeviceLostReason
/// [`GPUDeviceLostReason`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDeviceLostReason)
class GPUDeviceLostReason : public emlite::Val {
  explicit GPUDeviceLostReason(Handle h) noexcept;
public:
   explicit GPUDeviceLostReason(const emlite::Val &v) noexcept;
  static GPUDeviceLostReason take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUDeviceLostReason clone() const noexcept;
  static const GPUDeviceLostReason unknown();
  static const GPUDeviceLostReason destroyed();
};

/// Enum type GPUErrorFilter
/// [`GPUErrorFilter`](https://developer.mozilla.org/en-US/docs/Web/API/GPUErrorFilter)
class GPUErrorFilter : public emlite::Val {
  explicit GPUErrorFilter(Handle h) noexcept;
public:
   explicit GPUErrorFilter(const emlite::Val &v) noexcept;
  static GPUErrorFilter take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUErrorFilter clone() const noexcept;
  static const GPUErrorFilter validation();
  static const GPUErrorFilter out_of_memory();
  static const GPUErrorFilter internal();
};

/// Enum type HIDUnitSystem
/// [`HIDUnitSystem`](https://developer.mozilla.org/en-US/docs/Web/API/HIDUnitSystem)
class HIDUnitSystem : public emlite::Val {
  explicit HIDUnitSystem(Handle h) noexcept;
public:
   explicit HIDUnitSystem(const emlite::Val &v) noexcept;
  static HIDUnitSystem take_ownership(Handle h) noexcept;
    [[nodiscard]] HIDUnitSystem clone() const noexcept;
  static const HIDUnitSystem none();
  static const HIDUnitSystem si_linear();
  static const HIDUnitSystem si_rotation();
  static const HIDUnitSystem english_linear();
  static const HIDUnitSystem english_rotation();
  static const HIDUnitSystem vendor_defined();
  static const HIDUnitSystem reserved();
};

/// Enum type MIDIPortType
/// [`MIDIPortType`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIPortType)
class MIDIPortType : public emlite::Val {
  explicit MIDIPortType(Handle h) noexcept;
public:
   explicit MIDIPortType(const emlite::Val &v) noexcept;
  static MIDIPortType take_ownership(Handle h) noexcept;
    [[nodiscard]] MIDIPortType clone() const noexcept;
  static const MIDIPortType input();
  static const MIDIPortType output();
};

/// Enum type MIDIPortDeviceState
/// [`MIDIPortDeviceState`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIPortDeviceState)
class MIDIPortDeviceState : public emlite::Val {
  explicit MIDIPortDeviceState(Handle h) noexcept;
public:
   explicit MIDIPortDeviceState(const emlite::Val &v) noexcept;
  static MIDIPortDeviceState take_ownership(Handle h) noexcept;
    [[nodiscard]] MIDIPortDeviceState clone() const noexcept;
  static const MIDIPortDeviceState disconnected();
  static const MIDIPortDeviceState connected();
};

/// Enum type MIDIPortConnectionState
/// [`MIDIPortConnectionState`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIPortConnectionState)
class MIDIPortConnectionState : public emlite::Val {
  explicit MIDIPortConnectionState(Handle h) noexcept;
public:
   explicit MIDIPortConnectionState(const emlite::Val &v) noexcept;
  static MIDIPortConnectionState take_ownership(Handle h) noexcept;
    [[nodiscard]] MIDIPortConnectionState clone() const noexcept;
  static const MIDIPortConnectionState open();
  static const MIDIPortConnectionState closed();
  static const MIDIPortConnectionState pending();
};

/// Enum type MLPowerPreference
/// [`MLPowerPreference`](https://developer.mozilla.org/en-US/docs/Web/API/MLPowerPreference)
class MLPowerPreference : public emlite::Val {
  explicit MLPowerPreference(Handle h) noexcept;
public:
   explicit MLPowerPreference(const emlite::Val &v) noexcept;
  static MLPowerPreference take_ownership(Handle h) noexcept;
    [[nodiscard]] MLPowerPreference clone() const noexcept;
  static const MLPowerPreference default_();
  static const MLPowerPreference high_performance();
  static const MLPowerPreference low_power();
};

/// Enum type MLInputOperandLayout
/// [`MLInputOperandLayout`](https://developer.mozilla.org/en-US/docs/Web/API/MLInputOperandLayout)
class MLInputOperandLayout : public emlite::Val {
  explicit MLInputOperandLayout(Handle h) noexcept;
public:
   explicit MLInputOperandLayout(const emlite::Val &v) noexcept;
  static MLInputOperandLayout take_ownership(Handle h) noexcept;
    [[nodiscard]] MLInputOperandLayout clone() const noexcept;
  static const MLInputOperandLayout nchw();
  static const MLInputOperandLayout nhwc();
};

/// Enum type MLOperandDataType
/// [`MLOperandDataType`](https://developer.mozilla.org/en-US/docs/Web/API/MLOperandDataType)
class MLOperandDataType : public emlite::Val {
  explicit MLOperandDataType(Handle h) noexcept;
public:
   explicit MLOperandDataType(const emlite::Val &v) noexcept;
  static MLOperandDataType take_ownership(Handle h) noexcept;
    [[nodiscard]] MLOperandDataType clone() const noexcept;
  static const MLOperandDataType float32();
  static const MLOperandDataType float16();
  static const MLOperandDataType int32();
  static const MLOperandDataType uint32();
  static const MLOperandDataType int64();
  static const MLOperandDataType uint64();
  static const MLOperandDataType int8();
  static const MLOperandDataType uint8();
};

/// Enum type MLConv2dFilterOperandLayout
/// [`MLConv2dFilterOperandLayout`](https://developer.mozilla.org/en-US/docs/Web/API/MLConv2dFilterOperandLayout)
class MLConv2dFilterOperandLayout : public emlite::Val {
  explicit MLConv2dFilterOperandLayout(Handle h) noexcept;
public:
   explicit MLConv2dFilterOperandLayout(const emlite::Val &v) noexcept;
  static MLConv2dFilterOperandLayout take_ownership(Handle h) noexcept;
    [[nodiscard]] MLConv2dFilterOperandLayout clone() const noexcept;
  static const MLConv2dFilterOperandLayout oihw();
  static const MLConv2dFilterOperandLayout hwio();
  static const MLConv2dFilterOperandLayout ohwi();
  static const MLConv2dFilterOperandLayout ihwo();
};

/// Enum type MLConvTranspose2dFilterOperandLayout
/// [`MLConvTranspose2dFilterOperandLayout`](https://developer.mozilla.org/en-US/docs/Web/API/MLConvTranspose2dFilterOperandLayout)
class MLConvTranspose2dFilterOperandLayout : public emlite::Val {
  explicit MLConvTranspose2dFilterOperandLayout(Handle h) noexcept;
public:
   explicit MLConvTranspose2dFilterOperandLayout(const emlite::Val &v) noexcept;
  static MLConvTranspose2dFilterOperandLayout take_ownership(Handle h) noexcept;
    [[nodiscard]] MLConvTranspose2dFilterOperandLayout clone() const noexcept;
  static const MLConvTranspose2dFilterOperandLayout iohw();
  static const MLConvTranspose2dFilterOperandLayout hwoi();
  static const MLConvTranspose2dFilterOperandLayout ohwi();
};

/// Enum type MLGruWeightLayout
/// [`MLGruWeightLayout`](https://developer.mozilla.org/en-US/docs/Web/API/MLGruWeightLayout)
class MLGruWeightLayout : public emlite::Val {
  explicit MLGruWeightLayout(Handle h) noexcept;
public:
   explicit MLGruWeightLayout(const emlite::Val &v) noexcept;
  static MLGruWeightLayout take_ownership(Handle h) noexcept;
    [[nodiscard]] MLGruWeightLayout clone() const noexcept;
  static const MLGruWeightLayout zrn();
  static const MLGruWeightLayout rzn();
};

/// Enum type MLRecurrentNetworkActivation
/// [`MLRecurrentNetworkActivation`](https://developer.mozilla.org/en-US/docs/Web/API/MLRecurrentNetworkActivation)
class MLRecurrentNetworkActivation : public emlite::Val {
  explicit MLRecurrentNetworkActivation(Handle h) noexcept;
public:
   explicit MLRecurrentNetworkActivation(const emlite::Val &v) noexcept;
  static MLRecurrentNetworkActivation take_ownership(Handle h) noexcept;
    [[nodiscard]] MLRecurrentNetworkActivation clone() const noexcept;
  static const MLRecurrentNetworkActivation relu();
  static const MLRecurrentNetworkActivation sigmoid();
  static const MLRecurrentNetworkActivation tanh();
};

/// Enum type MLRecurrentNetworkDirection
/// [`MLRecurrentNetworkDirection`](https://developer.mozilla.org/en-US/docs/Web/API/MLRecurrentNetworkDirection)
class MLRecurrentNetworkDirection : public emlite::Val {
  explicit MLRecurrentNetworkDirection(Handle h) noexcept;
public:
   explicit MLRecurrentNetworkDirection(const emlite::Val &v) noexcept;
  static MLRecurrentNetworkDirection take_ownership(Handle h) noexcept;
    [[nodiscard]] MLRecurrentNetworkDirection clone() const noexcept;
  static const MLRecurrentNetworkDirection forward();
  static const MLRecurrentNetworkDirection backward();
  static const MLRecurrentNetworkDirection both();
};

/// Enum type MLLstmWeightLayout
/// [`MLLstmWeightLayout`](https://developer.mozilla.org/en-US/docs/Web/API/MLLstmWeightLayout)
class MLLstmWeightLayout : public emlite::Val {
  explicit MLLstmWeightLayout(Handle h) noexcept;
public:
   explicit MLLstmWeightLayout(const emlite::Val &v) noexcept;
  static MLLstmWeightLayout take_ownership(Handle h) noexcept;
    [[nodiscard]] MLLstmWeightLayout clone() const noexcept;
  static const MLLstmWeightLayout iofg();
  static const MLLstmWeightLayout ifgo();
};

/// Enum type MLPaddingMode
/// [`MLPaddingMode`](https://developer.mozilla.org/en-US/docs/Web/API/MLPaddingMode)
class MLPaddingMode : public emlite::Val {
  explicit MLPaddingMode(Handle h) noexcept;
public:
   explicit MLPaddingMode(const emlite::Val &v) noexcept;
  static MLPaddingMode take_ownership(Handle h) noexcept;
    [[nodiscard]] MLPaddingMode clone() const noexcept;
  static const MLPaddingMode constant();
  static const MLPaddingMode edge();
  static const MLPaddingMode reflection();
};

/// Enum type MLRoundingType
/// [`MLRoundingType`](https://developer.mozilla.org/en-US/docs/Web/API/MLRoundingType)
class MLRoundingType : public emlite::Val {
  explicit MLRoundingType(Handle h) noexcept;
public:
   explicit MLRoundingType(const emlite::Val &v) noexcept;
  static MLRoundingType take_ownership(Handle h) noexcept;
    [[nodiscard]] MLRoundingType clone() const noexcept;
  static const MLRoundingType floor();
  static const MLRoundingType ceil();
};

/// Enum type MLInterpolationMode
/// [`MLInterpolationMode`](https://developer.mozilla.org/en-US/docs/Web/API/MLInterpolationMode)
class MLInterpolationMode : public emlite::Val {
  explicit MLInterpolationMode(Handle h) noexcept;
public:
   explicit MLInterpolationMode(const emlite::Val &v) noexcept;
  static MLInterpolationMode take_ownership(Handle h) noexcept;
    [[nodiscard]] MLInterpolationMode clone() const noexcept;
  static const MLInterpolationMode nearest_neighbor();
  static const MLInterpolationMode linear();
};

/// Enum type SFrameTransformRole
/// [`SFrameTransformRole`](https://developer.mozilla.org/en-US/docs/Web/API/SFrameTransformRole)
class SFrameTransformRole : public emlite::Val {
  explicit SFrameTransformRole(Handle h) noexcept;
public:
   explicit SFrameTransformRole(const emlite::Val &v) noexcept;
  static SFrameTransformRole take_ownership(Handle h) noexcept;
    [[nodiscard]] SFrameTransformRole clone() const noexcept;
  static const SFrameTransformRole encrypt();
  static const SFrameTransformRole decrypt();
};

/// Enum type SFrameTransformErrorEventType
/// [`SFrameTransformErrorEventType`](https://developer.mozilla.org/en-US/docs/Web/API/SFrameTransformErrorEventType)
class SFrameTransformErrorEventType : public emlite::Val {
  explicit SFrameTransformErrorEventType(Handle h) noexcept;
public:
   explicit SFrameTransformErrorEventType(const emlite::Val &v) noexcept;
  static SFrameTransformErrorEventType take_ownership(Handle h) noexcept;
    [[nodiscard]] SFrameTransformErrorEventType clone() const noexcept;
  static const SFrameTransformErrorEventType authentication();
  static const SFrameTransformErrorEventType keyID();
  static const SFrameTransformErrorEventType syntax();
};

/// Enum type RTCEncodedVideoFrameType
/// [`RTCEncodedVideoFrameType`](https://developer.mozilla.org/en-US/docs/Web/API/RTCEncodedVideoFrameType)
class RTCEncodedVideoFrameType : public emlite::Val {
  explicit RTCEncodedVideoFrameType(Handle h) noexcept;
public:
   explicit RTCEncodedVideoFrameType(const emlite::Val &v) noexcept;
  static RTCEncodedVideoFrameType take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCEncodedVideoFrameType clone() const noexcept;
  static const RTCEncodedVideoFrameType empty();
  static const RTCEncodedVideoFrameType key();
  static const RTCEncodedVideoFrameType delta();
};

/// Enum type RTCErrorDetailTypeIdp
/// [`RTCErrorDetailTypeIdp`](https://developer.mozilla.org/en-US/docs/Web/API/RTCErrorDetailTypeIdp)
class RTCErrorDetailTypeIdp : public emlite::Val {
  explicit RTCErrorDetailTypeIdp(Handle h) noexcept;
public:
   explicit RTCErrorDetailTypeIdp(const emlite::Val &v) noexcept;
  static RTCErrorDetailTypeIdp take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCErrorDetailTypeIdp clone() const noexcept;
  static const RTCErrorDetailTypeIdp idp_bad_script_failure();
  static const RTCErrorDetailTypeIdp idp_execution_failure();
  static const RTCErrorDetailTypeIdp idp_load_failure();
  static const RTCErrorDetailTypeIdp idp_need_login();
  static const RTCErrorDetailTypeIdp idp_timeout();
  static const RTCErrorDetailTypeIdp idp_tls_failure();
  static const RTCErrorDetailTypeIdp idp_token_expired();
  static const RTCErrorDetailTypeIdp idp_token_invalid();
};

/// Enum type RTCPriorityType
/// [`RTCPriorityType`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPriorityType)
class RTCPriorityType : public emlite::Val {
  explicit RTCPriorityType(Handle h) noexcept;
public:
   explicit RTCPriorityType(const emlite::Val &v) noexcept;
  static RTCPriorityType take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCPriorityType clone() const noexcept;
  static const RTCPriorityType very_low();
  static const RTCPriorityType low();
  static const RTCPriorityType medium();
  static const RTCPriorityType high();
};

/// Enum type RTCStatsType
/// [`RTCStatsType`](https://developer.mozilla.org/en-US/docs/Web/API/RTCStatsType)
class RTCStatsType : public emlite::Val {
  explicit RTCStatsType(Handle h) noexcept;
public:
   explicit RTCStatsType(const emlite::Val &v) noexcept;
  static RTCStatsType take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCStatsType clone() const noexcept;
  static const RTCStatsType codec();
  static const RTCStatsType inbound_rtp();
  static const RTCStatsType outbound_rtp();
  static const RTCStatsType remote_inbound_rtp();
  static const RTCStatsType remote_outbound_rtp();
  static const RTCStatsType media_source();
  static const RTCStatsType media_playout();
  static const RTCStatsType peer_connection();
  static const RTCStatsType data_channel();
  static const RTCStatsType transport();
  static const RTCStatsType candidate_pair();
  static const RTCStatsType local_candidate();
  static const RTCStatsType remote_candidate();
  static const RTCStatsType certificate();
};

/// Enum type RTCQualityLimitationReason
/// [`RTCQualityLimitationReason`](https://developer.mozilla.org/en-US/docs/Web/API/RTCQualityLimitationReason)
class RTCQualityLimitationReason : public emlite::Val {
  explicit RTCQualityLimitationReason(Handle h) noexcept;
public:
   explicit RTCQualityLimitationReason(const emlite::Val &v) noexcept;
  static RTCQualityLimitationReason take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCQualityLimitationReason clone() const noexcept;
  static const RTCQualityLimitationReason none();
  static const RTCQualityLimitationReason cpu();
  static const RTCQualityLimitationReason bandwidth();
  static const RTCQualityLimitationReason other();
};

/// Enum type RTCDtlsRole
/// [`RTCDtlsRole`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDtlsRole)
class RTCDtlsRole : public emlite::Val {
  explicit RTCDtlsRole(Handle h) noexcept;
public:
   explicit RTCDtlsRole(const emlite::Val &v) noexcept;
  static RTCDtlsRole take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCDtlsRole clone() const noexcept;
  static const RTCDtlsRole client();
  static const RTCDtlsRole server();
  static const RTCDtlsRole unknown();
};

/// Enum type RTCStatsIceCandidatePairState
/// [`RTCStatsIceCandidatePairState`](https://developer.mozilla.org/en-US/docs/Web/API/RTCStatsIceCandidatePairState)
class RTCStatsIceCandidatePairState : public emlite::Val {
  explicit RTCStatsIceCandidatePairState(Handle h) noexcept;
public:
   explicit RTCStatsIceCandidatePairState(const emlite::Val &v) noexcept;
  static RTCStatsIceCandidatePairState take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCStatsIceCandidatePairState clone() const noexcept;
  static const RTCStatsIceCandidatePairState frozen();
  static const RTCStatsIceCandidatePairState waiting();
  static const RTCStatsIceCandidatePairState in_progress();
  static const RTCStatsIceCandidatePairState failed();
  static const RTCStatsIceCandidatePairState succeeded();
};

/// Enum type RTCIceTransportPolicy
/// [`RTCIceTransportPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransportPolicy)
class RTCIceTransportPolicy : public emlite::Val {
  explicit RTCIceTransportPolicy(Handle h) noexcept;
public:
   explicit RTCIceTransportPolicy(const emlite::Val &v) noexcept;
  static RTCIceTransportPolicy take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCIceTransportPolicy clone() const noexcept;
  static const RTCIceTransportPolicy relay();
  static const RTCIceTransportPolicy all();
};

/// Enum type RTCBundlePolicy
/// [`RTCBundlePolicy`](https://developer.mozilla.org/en-US/docs/Web/API/RTCBundlePolicy)
class RTCBundlePolicy : public emlite::Val {
  explicit RTCBundlePolicy(Handle h) noexcept;
public:
   explicit RTCBundlePolicy(const emlite::Val &v) noexcept;
  static RTCBundlePolicy take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCBundlePolicy clone() const noexcept;
  static const RTCBundlePolicy balanced();
  static const RTCBundlePolicy max_compat();
  static const RTCBundlePolicy max_bundle();
};

/// Enum type RTCRtcpMuxPolicy
/// [`RTCRtcpMuxPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtcpMuxPolicy)
class RTCRtcpMuxPolicy : public emlite::Val {
  explicit RTCRtcpMuxPolicy(Handle h) noexcept;
public:
   explicit RTCRtcpMuxPolicy(const emlite::Val &v) noexcept;
  static RTCRtcpMuxPolicy take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCRtcpMuxPolicy clone() const noexcept;
  static const RTCRtcpMuxPolicy require();
};

/// Enum type RTCSignalingState
/// [`RTCSignalingState`](https://developer.mozilla.org/en-US/docs/Web/API/RTCSignalingState)
class RTCSignalingState : public emlite::Val {
  explicit RTCSignalingState(Handle h) noexcept;
public:
   explicit RTCSignalingState(const emlite::Val &v) noexcept;
  static RTCSignalingState take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCSignalingState clone() const noexcept;
  static const RTCSignalingState stable();
  static const RTCSignalingState have_local_offer();
  static const RTCSignalingState have_remote_offer();
  static const RTCSignalingState have_local_pranswer();
  static const RTCSignalingState have_remote_pranswer();
  static const RTCSignalingState closed();
};

/// Enum type RTCIceGatheringState
/// [`RTCIceGatheringState`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceGatheringState)
class RTCIceGatheringState : public emlite::Val {
  explicit RTCIceGatheringState(Handle h) noexcept;
public:
   explicit RTCIceGatheringState(const emlite::Val &v) noexcept;
  static RTCIceGatheringState take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCIceGatheringState clone() const noexcept;
  static const RTCIceGatheringState new_();
  static const RTCIceGatheringState gathering();
  static const RTCIceGatheringState complete();
};

/// Enum type RTCPeerConnectionState
/// [`RTCPeerConnectionState`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnectionState)
class RTCPeerConnectionState : public emlite::Val {
  explicit RTCPeerConnectionState(Handle h) noexcept;
public:
   explicit RTCPeerConnectionState(const emlite::Val &v) noexcept;
  static RTCPeerConnectionState take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCPeerConnectionState clone() const noexcept;
  static const RTCPeerConnectionState closed();
  static const RTCPeerConnectionState failed();
  static const RTCPeerConnectionState disconnected();
  static const RTCPeerConnectionState new_();
  static const RTCPeerConnectionState connecting();
  static const RTCPeerConnectionState connected();
};

/// Enum type RTCIceConnectionState
/// [`RTCIceConnectionState`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceConnectionState)
class RTCIceConnectionState : public emlite::Val {
  explicit RTCIceConnectionState(Handle h) noexcept;
public:
   explicit RTCIceConnectionState(const emlite::Val &v) noexcept;
  static RTCIceConnectionState take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCIceConnectionState clone() const noexcept;
  static const RTCIceConnectionState closed();
  static const RTCIceConnectionState failed();
  static const RTCIceConnectionState disconnected();
  static const RTCIceConnectionState new_();
  static const RTCIceConnectionState checking();
  static const RTCIceConnectionState completed();
  static const RTCIceConnectionState connected();
};

/// Enum type RTCSdpType
/// [`RTCSdpType`](https://developer.mozilla.org/en-US/docs/Web/API/RTCSdpType)
class RTCSdpType : public emlite::Val {
  explicit RTCSdpType(Handle h) noexcept;
public:
   explicit RTCSdpType(const emlite::Val &v) noexcept;
  static RTCSdpType take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCSdpType clone() const noexcept;
  static const RTCSdpType offer();
  static const RTCSdpType pranswer();
  static const RTCSdpType answer();
  static const RTCSdpType rollback();
};

/// Enum type RTCIceProtocol
/// [`RTCIceProtocol`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceProtocol)
class RTCIceProtocol : public emlite::Val {
  explicit RTCIceProtocol(Handle h) noexcept;
public:
   explicit RTCIceProtocol(const emlite::Val &v) noexcept;
  static RTCIceProtocol take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCIceProtocol clone() const noexcept;
  static const RTCIceProtocol udp();
  static const RTCIceProtocol tcp();
};

/// Enum type RTCIceTcpCandidateType
/// [`RTCIceTcpCandidateType`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTcpCandidateType)
class RTCIceTcpCandidateType : public emlite::Val {
  explicit RTCIceTcpCandidateType(Handle h) noexcept;
public:
   explicit RTCIceTcpCandidateType(const emlite::Val &v) noexcept;
  static RTCIceTcpCandidateType take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCIceTcpCandidateType clone() const noexcept;
  static const RTCIceTcpCandidateType active();
  static const RTCIceTcpCandidateType passive();
  static const RTCIceTcpCandidateType so();
};

/// Enum type RTCIceCandidateType
/// [`RTCIceCandidateType`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidateType)
class RTCIceCandidateType : public emlite::Val {
  explicit RTCIceCandidateType(Handle h) noexcept;
public:
   explicit RTCIceCandidateType(const emlite::Val &v) noexcept;
  static RTCIceCandidateType take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCIceCandidateType clone() const noexcept;
  static const RTCIceCandidateType host();
  static const RTCIceCandidateType srflx();
  static const RTCIceCandidateType prflx();
  static const RTCIceCandidateType relay();
};

/// Enum type RTCIceServerTransportProtocol
/// [`RTCIceServerTransportProtocol`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceServerTransportProtocol)
class RTCIceServerTransportProtocol : public emlite::Val {
  explicit RTCIceServerTransportProtocol(Handle h) noexcept;
public:
   explicit RTCIceServerTransportProtocol(const emlite::Val &v) noexcept;
  static RTCIceServerTransportProtocol take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCIceServerTransportProtocol clone() const noexcept;
  static const RTCIceServerTransportProtocol udp();
  static const RTCIceServerTransportProtocol tcp();
  static const RTCIceServerTransportProtocol tls();
};

/// Enum type RTCRtpTransceiverDirection
/// [`RTCRtpTransceiverDirection`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpTransceiverDirection)
class RTCRtpTransceiverDirection : public emlite::Val {
  explicit RTCRtpTransceiverDirection(Handle h) noexcept;
public:
   explicit RTCRtpTransceiverDirection(const emlite::Val &v) noexcept;
  static RTCRtpTransceiverDirection take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCRtpTransceiverDirection clone() const noexcept;
  static const RTCRtpTransceiverDirection sendrecv();
  static const RTCRtpTransceiverDirection sendonly();
  static const RTCRtpTransceiverDirection recvonly();
  static const RTCRtpTransceiverDirection inactive();
  static const RTCRtpTransceiverDirection stopped();
};

/// Enum type RTCDtlsTransportState
/// [`RTCDtlsTransportState`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDtlsTransportState)
class RTCDtlsTransportState : public emlite::Val {
  explicit RTCDtlsTransportState(Handle h) noexcept;
public:
   explicit RTCDtlsTransportState(const emlite::Val &v) noexcept;
  static RTCDtlsTransportState take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCDtlsTransportState clone() const noexcept;
  static const RTCDtlsTransportState new_();
  static const RTCDtlsTransportState connecting();
  static const RTCDtlsTransportState connected();
  static const RTCDtlsTransportState closed();
  static const RTCDtlsTransportState failed();
};

/// Enum type RTCIceGathererState
/// [`RTCIceGathererState`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceGathererState)
class RTCIceGathererState : public emlite::Val {
  explicit RTCIceGathererState(Handle h) noexcept;
public:
   explicit RTCIceGathererState(const emlite::Val &v) noexcept;
  static RTCIceGathererState take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCIceGathererState clone() const noexcept;
  static const RTCIceGathererState new_();
  static const RTCIceGathererState gathering();
  static const RTCIceGathererState complete();
};

/// Enum type RTCIceTransportState
/// [`RTCIceTransportState`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransportState)
class RTCIceTransportState : public emlite::Val {
  explicit RTCIceTransportState(Handle h) noexcept;
public:
   explicit RTCIceTransportState(const emlite::Val &v) noexcept;
  static RTCIceTransportState take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCIceTransportState clone() const noexcept;
  static const RTCIceTransportState closed();
  static const RTCIceTransportState failed();
  static const RTCIceTransportState disconnected();
  static const RTCIceTransportState new_();
  static const RTCIceTransportState checking();
  static const RTCIceTransportState completed();
  static const RTCIceTransportState connected();
};

/// Enum type RTCIceRole
/// [`RTCIceRole`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceRole)
class RTCIceRole : public emlite::Val {
  explicit RTCIceRole(Handle h) noexcept;
public:
   explicit RTCIceRole(const emlite::Val &v) noexcept;
  static RTCIceRole take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCIceRole clone() const noexcept;
  static const RTCIceRole unknown();
  static const RTCIceRole controlling();
  static const RTCIceRole controlled();
};

/// Enum type RTCIceComponent
/// [`RTCIceComponent`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceComponent)
class RTCIceComponent : public emlite::Val {
  explicit RTCIceComponent(Handle h) noexcept;
public:
   explicit RTCIceComponent(const emlite::Val &v) noexcept;
  static RTCIceComponent take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCIceComponent clone() const noexcept;
  static const RTCIceComponent rtp();
  static const RTCIceComponent rtcp();
};

/// Enum type RTCSctpTransportState
/// [`RTCSctpTransportState`](https://developer.mozilla.org/en-US/docs/Web/API/RTCSctpTransportState)
class RTCSctpTransportState : public emlite::Val {
  explicit RTCSctpTransportState(Handle h) noexcept;
public:
   explicit RTCSctpTransportState(const emlite::Val &v) noexcept;
  static RTCSctpTransportState take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCSctpTransportState clone() const noexcept;
  static const RTCSctpTransportState connecting();
  static const RTCSctpTransportState connected();
  static const RTCSctpTransportState closed();
};

/// Enum type RTCDataChannelState
/// [`RTCDataChannelState`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannelState)
class RTCDataChannelState : public emlite::Val {
  explicit RTCDataChannelState(Handle h) noexcept;
public:
   explicit RTCDataChannelState(const emlite::Val &v) noexcept;
  static RTCDataChannelState take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCDataChannelState clone() const noexcept;
  static const RTCDataChannelState connecting();
  static const RTCDataChannelState open();
  static const RTCDataChannelState closing();
  static const RTCDataChannelState closed();
};

/// Enum type RTCErrorDetailType
/// [`RTCErrorDetailType`](https://developer.mozilla.org/en-US/docs/Web/API/RTCErrorDetailType)
class RTCErrorDetailType : public emlite::Val {
  explicit RTCErrorDetailType(Handle h) noexcept;
public:
   explicit RTCErrorDetailType(const emlite::Val &v) noexcept;
  static RTCErrorDetailType take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCErrorDetailType clone() const noexcept;
  static const RTCErrorDetailType data_channel_failure();
  static const RTCErrorDetailType dtls_failure();
  static const RTCErrorDetailType fingerprint_failure();
  static const RTCErrorDetailType sctp_failure();
  static const RTCErrorDetailType sdp_syntax_error();
  static const RTCErrorDetailType hardware_encoder_not_available();
  static const RTCErrorDetailType hardware_encoder_error();
};

/// Enum type BinaryType
/// [`BinaryType`](https://developer.mozilla.org/en-US/docs/Web/API/BinaryType)
class BinaryType : public emlite::Val {
  explicit BinaryType(Handle h) noexcept;
public:
   explicit BinaryType(const emlite::Val &v) noexcept;
  static BinaryType take_ownership(Handle h) noexcept;
    [[nodiscard]] BinaryType clone() const noexcept;
  static const BinaryType blob();
  static const BinaryType arraybuffer();
};

/// Enum type WebTransportReliabilityMode
/// [`WebTransportReliabilityMode`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportReliabilityMode)
class WebTransportReliabilityMode : public emlite::Val {
  explicit WebTransportReliabilityMode(Handle h) noexcept;
public:
   explicit WebTransportReliabilityMode(const emlite::Val &v) noexcept;
  static WebTransportReliabilityMode take_ownership(Handle h) noexcept;
    [[nodiscard]] WebTransportReliabilityMode clone() const noexcept;
  static const WebTransportReliabilityMode pending();
  static const WebTransportReliabilityMode reliable_only();
  static const WebTransportReliabilityMode supports_unreliable();
};

/// Enum type WebTransportCongestionControl
/// [`WebTransportCongestionControl`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportCongestionControl)
class WebTransportCongestionControl : public emlite::Val {
  explicit WebTransportCongestionControl(Handle h) noexcept;
public:
   explicit WebTransportCongestionControl(const emlite::Val &v) noexcept;
  static WebTransportCongestionControl take_ownership(Handle h) noexcept;
    [[nodiscard]] WebTransportCongestionControl clone() const noexcept;
  static const WebTransportCongestionControl default_();
  static const WebTransportCongestionControl throughput();
  static const WebTransportCongestionControl low_latency();
};

/// Enum type WebTransportErrorSource
/// [`WebTransportErrorSource`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportErrorSource)
class WebTransportErrorSource : public emlite::Val {
  explicit WebTransportErrorSource(Handle h) noexcept;
public:
   explicit WebTransportErrorSource(const emlite::Val &v) noexcept;
  static WebTransportErrorSource take_ownership(Handle h) noexcept;
    [[nodiscard]] WebTransportErrorSource clone() const noexcept;
  static const WebTransportErrorSource stream();
  static const WebTransportErrorSource session();
};

/// Enum type USBTransferStatus
/// [`USBTransferStatus`](https://developer.mozilla.org/en-US/docs/Web/API/USBTransferStatus)
class USBTransferStatus : public emlite::Val {
  explicit USBTransferStatus(Handle h) noexcept;
public:
   explicit USBTransferStatus(const emlite::Val &v) noexcept;
  static USBTransferStatus take_ownership(Handle h) noexcept;
    [[nodiscard]] USBTransferStatus clone() const noexcept;
  static const USBTransferStatus ok();
  static const USBTransferStatus stall();
  static const USBTransferStatus babble();
};

/// Enum type USBRequestType
/// [`USBRequestType`](https://developer.mozilla.org/en-US/docs/Web/API/USBRequestType)
class USBRequestType : public emlite::Val {
  explicit USBRequestType(Handle h) noexcept;
public:
   explicit USBRequestType(const emlite::Val &v) noexcept;
  static USBRequestType take_ownership(Handle h) noexcept;
    [[nodiscard]] USBRequestType clone() const noexcept;
  static const USBRequestType standard();
  static const USBRequestType class_();
  static const USBRequestType vendor();
};

/// Enum type USBRecipient
/// [`USBRecipient`](https://developer.mozilla.org/en-US/docs/Web/API/USBRecipient)
class USBRecipient : public emlite::Val {
  explicit USBRecipient(Handle h) noexcept;
public:
   explicit USBRecipient(const emlite::Val &v) noexcept;
  static USBRecipient take_ownership(Handle h) noexcept;
    [[nodiscard]] USBRecipient clone() const noexcept;
  static const USBRecipient device();
  static const USBRecipient interface();
  static const USBRecipient endpoint();
  static const USBRecipient other();
};

/// Enum type USBDirection
/// [`USBDirection`](https://developer.mozilla.org/en-US/docs/Web/API/USBDirection)
class USBDirection : public emlite::Val {
  explicit USBDirection(Handle h) noexcept;
public:
   explicit USBDirection(const emlite::Val &v) noexcept;
  static USBDirection take_ownership(Handle h) noexcept;
    [[nodiscard]] USBDirection clone() const noexcept;
  static const USBDirection in();
  static const USBDirection out();
};

/// Enum type USBEndpointType
/// [`USBEndpointType`](https://developer.mozilla.org/en-US/docs/Web/API/USBEndpointType)
class USBEndpointType : public emlite::Val {
  explicit USBEndpointType(Handle h) noexcept;
public:
   explicit USBEndpointType(const emlite::Val &v) noexcept;
  static USBEndpointType take_ownership(Handle h) noexcept;
    [[nodiscard]] USBEndpointType clone() const noexcept;
  static const USBEndpointType bulk();
  static const USBEndpointType interrupt();
  static const USBEndpointType isochronous();
};

/// Enum type AutoKeyword
/// [`AutoKeyword`](https://developer.mozilla.org/en-US/docs/Web/API/AutoKeyword)
class AutoKeyword : public emlite::Val {
  explicit AutoKeyword(Handle h) noexcept;
public:
   explicit AutoKeyword(const emlite::Val &v) noexcept;
  static AutoKeyword take_ownership(Handle h) noexcept;
    [[nodiscard]] AutoKeyword clone() const noexcept;
  static const AutoKeyword auto_();
};

/// Enum type DirectionSetting
/// [`DirectionSetting`](https://developer.mozilla.org/en-US/docs/Web/API/DirectionSetting)
class DirectionSetting : public emlite::Val {
  explicit DirectionSetting(Handle h) noexcept;
public:
   explicit DirectionSetting(const emlite::Val &v) noexcept;
  static DirectionSetting take_ownership(Handle h) noexcept;
    [[nodiscard]] DirectionSetting clone() const noexcept;
  static const DirectionSetting none();
  static const DirectionSetting rl();
  static const DirectionSetting lr();
};

/// Enum type LineAlignSetting
/// [`LineAlignSetting`](https://developer.mozilla.org/en-US/docs/Web/API/LineAlignSetting)
class LineAlignSetting : public emlite::Val {
  explicit LineAlignSetting(Handle h) noexcept;
public:
   explicit LineAlignSetting(const emlite::Val &v) noexcept;
  static LineAlignSetting take_ownership(Handle h) noexcept;
    [[nodiscard]] LineAlignSetting clone() const noexcept;
  static const LineAlignSetting start();
  static const LineAlignSetting center();
  static const LineAlignSetting end();
};

/// Enum type PositionAlignSetting
/// [`PositionAlignSetting`](https://developer.mozilla.org/en-US/docs/Web/API/PositionAlignSetting)
class PositionAlignSetting : public emlite::Val {
  explicit PositionAlignSetting(Handle h) noexcept;
public:
   explicit PositionAlignSetting(const emlite::Val &v) noexcept;
  static PositionAlignSetting take_ownership(Handle h) noexcept;
    [[nodiscard]] PositionAlignSetting clone() const noexcept;
  static const PositionAlignSetting line_left();
  static const PositionAlignSetting center();
  static const PositionAlignSetting line_right();
  static const PositionAlignSetting auto_();
};

/// Enum type AlignSetting
/// [`AlignSetting`](https://developer.mozilla.org/en-US/docs/Web/API/AlignSetting)
class AlignSetting : public emlite::Val {
  explicit AlignSetting(Handle h) noexcept;
public:
   explicit AlignSetting(const emlite::Val &v) noexcept;
  static AlignSetting take_ownership(Handle h) noexcept;
    [[nodiscard]] AlignSetting clone() const noexcept;
  static const AlignSetting start();
  static const AlignSetting center();
  static const AlignSetting end();
  static const AlignSetting left();
  static const AlignSetting right();
};

/// Enum type ScrollSetting
/// [`ScrollSetting`](https://developer.mozilla.org/en-US/docs/Web/API/ScrollSetting)
class ScrollSetting : public emlite::Val {
  explicit ScrollSetting(Handle h) noexcept;
public:
   explicit ScrollSetting(const emlite::Val &v) noexcept;
  static ScrollSetting take_ownership(Handle h) noexcept;
    [[nodiscard]] ScrollSetting clone() const noexcept;
  static const ScrollSetting none();
  static const ScrollSetting up();
};

/// Enum type XREnvironmentBlendMode
/// [`XREnvironmentBlendMode`](https://developer.mozilla.org/en-US/docs/Web/API/XREnvironmentBlendMode)
class XREnvironmentBlendMode : public emlite::Val {
  explicit XREnvironmentBlendMode(Handle h) noexcept;
public:
   explicit XREnvironmentBlendMode(const emlite::Val &v) noexcept;
  static XREnvironmentBlendMode take_ownership(Handle h) noexcept;
    [[nodiscard]] XREnvironmentBlendMode clone() const noexcept;
  static const XREnvironmentBlendMode opaque();
  static const XREnvironmentBlendMode alpha_blend();
  static const XREnvironmentBlendMode additive();
};

/// Enum type XRInteractionMode
/// [`XRInteractionMode`](https://developer.mozilla.org/en-US/docs/Web/API/XRInteractionMode)
class XRInteractionMode : public emlite::Val {
  explicit XRInteractionMode(Handle h) noexcept;
public:
   explicit XRInteractionMode(const emlite::Val &v) noexcept;
  static XRInteractionMode take_ownership(Handle h) noexcept;
    [[nodiscard]] XRInteractionMode clone() const noexcept;
  static const XRInteractionMode screen_space();
  static const XRInteractionMode world_space();
};

/// Enum type XRDepthType
/// [`XRDepthType`](https://developer.mozilla.org/en-US/docs/Web/API/XRDepthType)
class XRDepthType : public emlite::Val {
  explicit XRDepthType(Handle h) noexcept;
public:
   explicit XRDepthType(const emlite::Val &v) noexcept;
  static XRDepthType take_ownership(Handle h) noexcept;
    [[nodiscard]] XRDepthType clone() const noexcept;
  static const XRDepthType raw();
  static const XRDepthType smooth();
};

/// Enum type XRDepthUsage
/// [`XRDepthUsage`](https://developer.mozilla.org/en-US/docs/Web/API/XRDepthUsage)
class XRDepthUsage : public emlite::Val {
  explicit XRDepthUsage(Handle h) noexcept;
public:
   explicit XRDepthUsage(const emlite::Val &v) noexcept;
  static XRDepthUsage take_ownership(Handle h) noexcept;
    [[nodiscard]] XRDepthUsage clone() const noexcept;
  static const XRDepthUsage cpu_optimized();
  static const XRDepthUsage gpu_optimized();
};

/// Enum type XRDepthDataFormat
/// [`XRDepthDataFormat`](https://developer.mozilla.org/en-US/docs/Web/API/XRDepthDataFormat)
class XRDepthDataFormat : public emlite::Val {
  explicit XRDepthDataFormat(Handle h) noexcept;
public:
   explicit XRDepthDataFormat(const emlite::Val &v) noexcept;
  static XRDepthDataFormat take_ownership(Handle h) noexcept;
    [[nodiscard]] XRDepthDataFormat clone() const noexcept;
  static const XRDepthDataFormat luminance_alpha();
  static const XRDepthDataFormat float32();
  static const XRDepthDataFormat unsigned_short();
};

/// Enum type XRDOMOverlayType
/// [`XRDOMOverlayType`](https://developer.mozilla.org/en-US/docs/Web/API/XRDOMOverlayType)
class XRDOMOverlayType : public emlite::Val {
  explicit XRDOMOverlayType(Handle h) noexcept;
public:
   explicit XRDOMOverlayType(const emlite::Val &v) noexcept;
  static XRDOMOverlayType take_ownership(Handle h) noexcept;
    [[nodiscard]] XRDOMOverlayType clone() const noexcept;
  static const XRDOMOverlayType screen();
  static const XRDOMOverlayType floating();
  static const XRDOMOverlayType head_locked();
};

/// Enum type XRHandJoint
/// [`XRHandJoint`](https://developer.mozilla.org/en-US/docs/Web/API/XRHandJoint)
class XRHandJoint : public emlite::Val {
  explicit XRHandJoint(Handle h) noexcept;
public:
   explicit XRHandJoint(const emlite::Val &v) noexcept;
  static XRHandJoint take_ownership(Handle h) noexcept;
    [[nodiscard]] XRHandJoint clone() const noexcept;
  static const XRHandJoint wrist();
  static const XRHandJoint thumb_metacarpal();
  static const XRHandJoint thumb_phalanx_proximal();
  static const XRHandJoint thumb_phalanx_distal();
  static const XRHandJoint thumb_tip();
  static const XRHandJoint index_finger_metacarpal();
  static const XRHandJoint index_finger_phalanx_proximal();
  static const XRHandJoint index_finger_phalanx_intermediate();
  static const XRHandJoint index_finger_phalanx_distal();
  static const XRHandJoint index_finger_tip();
  static const XRHandJoint middle_finger_metacarpal();
  static const XRHandJoint middle_finger_phalanx_proximal();
  static const XRHandJoint middle_finger_phalanx_intermediate();
  static const XRHandJoint middle_finger_phalanx_distal();
  static const XRHandJoint middle_finger_tip();
  static const XRHandJoint ring_finger_metacarpal();
  static const XRHandJoint ring_finger_phalanx_proximal();
  static const XRHandJoint ring_finger_phalanx_intermediate();
  static const XRHandJoint ring_finger_phalanx_distal();
  static const XRHandJoint ring_finger_tip();
  static const XRHandJoint pinky_finger_metacarpal();
  static const XRHandJoint pinky_finger_phalanx_proximal();
  static const XRHandJoint pinky_finger_phalanx_intermediate();
  static const XRHandJoint pinky_finger_phalanx_distal();
  static const XRHandJoint pinky_finger_tip();
};

/// Enum type XRHitTestTrackableType
/// [`XRHitTestTrackableType`](https://developer.mozilla.org/en-US/docs/Web/API/XRHitTestTrackableType)
class XRHitTestTrackableType : public emlite::Val {
  explicit XRHitTestTrackableType(Handle h) noexcept;
public:
   explicit XRHitTestTrackableType(const emlite::Val &v) noexcept;
  static XRHitTestTrackableType take_ownership(Handle h) noexcept;
    [[nodiscard]] XRHitTestTrackableType clone() const noexcept;
  static const XRHitTestTrackableType point();
  static const XRHitTestTrackableType plane();
  static const XRHitTestTrackableType mesh();
};

/// Enum type XRReflectionFormat
/// [`XRReflectionFormat`](https://developer.mozilla.org/en-US/docs/Web/API/XRReflectionFormat)
class XRReflectionFormat : public emlite::Val {
  explicit XRReflectionFormat(Handle h) noexcept;
public:
   explicit XRReflectionFormat(const emlite::Val &v) noexcept;
  static XRReflectionFormat take_ownership(Handle h) noexcept;
    [[nodiscard]] XRReflectionFormat clone() const noexcept;
  static const XRReflectionFormat srgba8();
  static const XRReflectionFormat rgba16f();
};

/// Enum type XRPlaneOrientation
/// [`XRPlaneOrientation`](https://developer.mozilla.org/en-US/docs/Web/API/XRPlaneOrientation)
class XRPlaneOrientation : public emlite::Val {
  explicit XRPlaneOrientation(Handle h) noexcept;
public:
   explicit XRPlaneOrientation(const emlite::Val &v) noexcept;
  static XRPlaneOrientation take_ownership(Handle h) noexcept;
    [[nodiscard]] XRPlaneOrientation clone() const noexcept;
  static const XRPlaneOrientation horizontal();
  static const XRPlaneOrientation vertical();
};

/// Enum type XRSessionMode
/// [`XRSessionMode`](https://developer.mozilla.org/en-US/docs/Web/API/XRSessionMode)
class XRSessionMode : public emlite::Val {
  explicit XRSessionMode(Handle h) noexcept;
public:
   explicit XRSessionMode(const emlite::Val &v) noexcept;
  static XRSessionMode take_ownership(Handle h) noexcept;
    [[nodiscard]] XRSessionMode clone() const noexcept;
  static const XRSessionMode inline_();
  static const XRSessionMode immersive_vr();
  static const XRSessionMode immersive_ar();
};

/// Enum type XRVisibilityState
/// [`XRVisibilityState`](https://developer.mozilla.org/en-US/docs/Web/API/XRVisibilityState)
class XRVisibilityState : public emlite::Val {
  explicit XRVisibilityState(Handle h) noexcept;
public:
   explicit XRVisibilityState(const emlite::Val &v) noexcept;
  static XRVisibilityState take_ownership(Handle h) noexcept;
    [[nodiscard]] XRVisibilityState clone() const noexcept;
  static const XRVisibilityState visible();
  static const XRVisibilityState visible_blurred();
  static const XRVisibilityState hidden();
};

/// Enum type XRReferenceSpaceType
/// [`XRReferenceSpaceType`](https://developer.mozilla.org/en-US/docs/Web/API/XRReferenceSpaceType)
class XRReferenceSpaceType : public emlite::Val {
  explicit XRReferenceSpaceType(Handle h) noexcept;
public:
   explicit XRReferenceSpaceType(const emlite::Val &v) noexcept;
  static XRReferenceSpaceType take_ownership(Handle h) noexcept;
    [[nodiscard]] XRReferenceSpaceType clone() const noexcept;
  static const XRReferenceSpaceType viewer();
  static const XRReferenceSpaceType local();
  static const XRReferenceSpaceType local_floor();
  static const XRReferenceSpaceType bounded_floor();
  static const XRReferenceSpaceType unbounded();
};

/// Enum type XREye
/// [`XREye`](https://developer.mozilla.org/en-US/docs/Web/API/XREye)
class XREye : public emlite::Val {
  explicit XREye(Handle h) noexcept;
public:
   explicit XREye(const emlite::Val &v) noexcept;
  static XREye take_ownership(Handle h) noexcept;
    [[nodiscard]] XREye clone() const noexcept;
  static const XREye none();
  static const XREye left();
  static const XREye right();
};

/// Enum type XRHandedness
/// [`XRHandedness`](https://developer.mozilla.org/en-US/docs/Web/API/XRHandedness)
class XRHandedness : public emlite::Val {
  explicit XRHandedness(Handle h) noexcept;
public:
   explicit XRHandedness(const emlite::Val &v) noexcept;
  static XRHandedness take_ownership(Handle h) noexcept;
    [[nodiscard]] XRHandedness clone() const noexcept;
  static const XRHandedness none();
  static const XRHandedness left();
  static const XRHandedness right();
};

/// Enum type XRTargetRayMode
/// [`XRTargetRayMode`](https://developer.mozilla.org/en-US/docs/Web/API/XRTargetRayMode)
class XRTargetRayMode : public emlite::Val {
  explicit XRTargetRayMode(Handle h) noexcept;
public:
   explicit XRTargetRayMode(const emlite::Val &v) noexcept;
  static XRTargetRayMode take_ownership(Handle h) noexcept;
    [[nodiscard]] XRTargetRayMode clone() const noexcept;
  static const XRTargetRayMode gaze();
  static const XRTargetRayMode tracked_pointer();
  static const XRTargetRayMode screen();
  static const XRTargetRayMode transient_pointer();
};

/// Enum type XRLayerLayout
/// [`XRLayerLayout`](https://developer.mozilla.org/en-US/docs/Web/API/XRLayerLayout)
class XRLayerLayout : public emlite::Val {
  explicit XRLayerLayout(Handle h) noexcept;
public:
   explicit XRLayerLayout(const emlite::Val &v) noexcept;
  static XRLayerLayout take_ownership(Handle h) noexcept;
    [[nodiscard]] XRLayerLayout clone() const noexcept;
  static const XRLayerLayout default_();
  static const XRLayerLayout mono();
  static const XRLayerLayout stereo();
  static const XRLayerLayout stereo_left_right();
  static const XRLayerLayout stereo_top_bottom();
};

/// Enum type XRLayerQuality
/// [`XRLayerQuality`](https://developer.mozilla.org/en-US/docs/Web/API/XRLayerQuality)
class XRLayerQuality : public emlite::Val {
  explicit XRLayerQuality(Handle h) noexcept;
public:
   explicit XRLayerQuality(const emlite::Val &v) noexcept;
  static XRLayerQuality take_ownership(Handle h) noexcept;
    [[nodiscard]] XRLayerQuality clone() const noexcept;
  static const XRLayerQuality default_();
  static const XRLayerQuality text_optimized();
  static const XRLayerQuality graphics_optimized();
};

/// Enum type XRTextureType
/// [`XRTextureType`](https://developer.mozilla.org/en-US/docs/Web/API/XRTextureType)
class XRTextureType : public emlite::Val {
  explicit XRTextureType(Handle h) noexcept;
public:
   explicit XRTextureType(const emlite::Val &v) noexcept;
  static XRTextureType take_ownership(Handle h) noexcept;
    [[nodiscard]] XRTextureType clone() const noexcept;
  static const XRTextureType texture();
  static const XRTextureType texture_array();
};

/// Enum type SummarizerType
/// [`SummarizerType`](https://developer.mozilla.org/en-US/docs/Web/API/SummarizerType)
class SummarizerType : public emlite::Val {
  explicit SummarizerType(Handle h) noexcept;
public:
   explicit SummarizerType(const emlite::Val &v) noexcept;
  static SummarizerType take_ownership(Handle h) noexcept;
    [[nodiscard]] SummarizerType clone() const noexcept;
  static const SummarizerType tldr();
  static const SummarizerType teaser();
  static const SummarizerType key_points();
  static const SummarizerType headline();
};

/// Enum type SummarizerFormat
/// [`SummarizerFormat`](https://developer.mozilla.org/en-US/docs/Web/API/SummarizerFormat)
class SummarizerFormat : public emlite::Val {
  explicit SummarizerFormat(Handle h) noexcept;
public:
   explicit SummarizerFormat(const emlite::Val &v) noexcept;
  static SummarizerFormat take_ownership(Handle h) noexcept;
    [[nodiscard]] SummarizerFormat clone() const noexcept;
  static const SummarizerFormat plain_text();
  static const SummarizerFormat markdown();
};

/// Enum type SummarizerLength
/// [`SummarizerLength`](https://developer.mozilla.org/en-US/docs/Web/API/SummarizerLength)
class SummarizerLength : public emlite::Val {
  explicit SummarizerLength(Handle h) noexcept;
public:
   explicit SummarizerLength(const emlite::Val &v) noexcept;
  static SummarizerLength take_ownership(Handle h) noexcept;
    [[nodiscard]] SummarizerLength clone() const noexcept;
  static const SummarizerLength short_();
  static const SummarizerLength medium();
  static const SummarizerLength long_();
};

/// Enum type WriterTone
/// [`WriterTone`](https://developer.mozilla.org/en-US/docs/Web/API/WriterTone)
class WriterTone : public emlite::Val {
  explicit WriterTone(Handle h) noexcept;
public:
   explicit WriterTone(const emlite::Val &v) noexcept;
  static WriterTone take_ownership(Handle h) noexcept;
    [[nodiscard]] WriterTone clone() const noexcept;
  static const WriterTone formal();
  static const WriterTone neutral();
  static const WriterTone casual();
};

/// Enum type WriterFormat
/// [`WriterFormat`](https://developer.mozilla.org/en-US/docs/Web/API/WriterFormat)
class WriterFormat : public emlite::Val {
  explicit WriterFormat(Handle h) noexcept;
public:
   explicit WriterFormat(const emlite::Val &v) noexcept;
  static WriterFormat take_ownership(Handle h) noexcept;
    [[nodiscard]] WriterFormat clone() const noexcept;
  static const WriterFormat plain_text();
  static const WriterFormat markdown();
};

/// Enum type WriterLength
/// [`WriterLength`](https://developer.mozilla.org/en-US/docs/Web/API/WriterLength)
class WriterLength : public emlite::Val {
  explicit WriterLength(Handle h) noexcept;
public:
   explicit WriterLength(const emlite::Val &v) noexcept;
  static WriterLength take_ownership(Handle h) noexcept;
    [[nodiscard]] WriterLength clone() const noexcept;
  static const WriterLength short_();
  static const WriterLength medium();
  static const WriterLength long_();
};

/// Enum type RewriterTone
/// [`RewriterTone`](https://developer.mozilla.org/en-US/docs/Web/API/RewriterTone)
class RewriterTone : public emlite::Val {
  explicit RewriterTone(Handle h) noexcept;
public:
   explicit RewriterTone(const emlite::Val &v) noexcept;
  static RewriterTone take_ownership(Handle h) noexcept;
    [[nodiscard]] RewriterTone clone() const noexcept;
  static const RewriterTone as_is();
  static const RewriterTone more_formal();
  static const RewriterTone more_casual();
};

/// Enum type RewriterFormat
/// [`RewriterFormat`](https://developer.mozilla.org/en-US/docs/Web/API/RewriterFormat)
class RewriterFormat : public emlite::Val {
  explicit RewriterFormat(Handle h) noexcept;
public:
   explicit RewriterFormat(const emlite::Val &v) noexcept;
  static RewriterFormat take_ownership(Handle h) noexcept;
    [[nodiscard]] RewriterFormat clone() const noexcept;
  static const RewriterFormat as_is();
  static const RewriterFormat plain_text();
  static const RewriterFormat markdown();
};

/// Enum type RewriterLength
/// [`RewriterLength`](https://developer.mozilla.org/en-US/docs/Web/API/RewriterLength)
class RewriterLength : public emlite::Val {
  explicit RewriterLength(Handle h) noexcept;
public:
   explicit RewriterLength(const emlite::Val &v) noexcept;
  static RewriterLength take_ownership(Handle h) noexcept;
    [[nodiscard]] RewriterLength clone() const noexcept;
  static const RewriterLength as_is();
  static const RewriterLength shorter();
  static const RewriterLength longer();
};

/// Enum type Availability
/// [`Availability`](https://developer.mozilla.org/en-US/docs/Web/API/Availability)
class Availability : public emlite::Val {
  explicit Availability(Handle h) noexcept;
public:
   explicit Availability(const emlite::Val &v) noexcept;
  static Availability take_ownership(Handle h) noexcept;
    [[nodiscard]] Availability clone() const noexcept;
  static const Availability unavailable();
  static const Availability downloadable();
  static const Availability downloading();
  static const Availability available();
};

/// Enum type XMLHttpRequestResponseType
/// [`XMLHttpRequestResponseType`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequestResponseType)
class XMLHttpRequestResponseType : public emlite::Val {
  explicit XMLHttpRequestResponseType(Handle h) noexcept;
public:
   explicit XMLHttpRequestResponseType(const emlite::Val &v) noexcept;
  static XMLHttpRequestResponseType take_ownership(Handle h) noexcept;
    [[nodiscard]] XMLHttpRequestResponseType clone() const noexcept;
  static const XMLHttpRequestResponseType none();
  static const XMLHttpRequestResponseType arraybuffer();
  static const XMLHttpRequestResponseType blob();
  static const XMLHttpRequestResponseType document();
  static const XMLHttpRequestResponseType json();
  static const XMLHttpRequestResponseType text();
};

} // namespace webbind