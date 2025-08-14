#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>

namespace webbind {

/// Enum type SecurityPolicyViolationEventDisposition
/// [`SecurityPolicyViolationEventDisposition`](https://developer.mozilla.org/en-US/docs/Web/API/SecurityPolicyViolationEventDisposition)
class SecurityPolicyViolationEventDisposition: public emlite::Val {
  explicit SecurityPolicyViolationEventDisposition(Handle h) noexcept;
public:
    enum Value {
        ENFORCE,
        REPORT,
    };

private:
    Value value_;

public:
    SecurityPolicyViolationEventDisposition() noexcept = delete;
    SecurityPolicyViolationEventDisposition(Value v) noexcept;
    explicit SecurityPolicyViolationEventDisposition(const emlite::Val& val) noexcept;
    static SecurityPolicyViolationEventDisposition take_ownership(Handle h) noexcept;
    [[nodiscard]] SecurityPolicyViolationEventDisposition clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const SecurityPolicyViolationEventDisposition& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const SecurityPolicyViolationEventDisposition& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type EndingType
/// [`EndingType`](https://developer.mozilla.org/en-US/docs/Web/API/EndingType)
class EndingType: public emlite::Val {
  explicit EndingType(Handle h) noexcept;
public:
    enum Value {
        TRANSPARENT,
        NATIVE,
    };

private:
    Value value_;

public:
    EndingType() noexcept = delete;
    EndingType(Value v) noexcept;
    explicit EndingType(const emlite::Val& val) noexcept;
    static EndingType take_ownership(Handle h) noexcept;
    [[nodiscard]] EndingType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const EndingType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const EndingType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type IDBRequestReadyState
/// [`IDBRequestReadyState`](https://developer.mozilla.org/en-US/docs/Web/API/IDBRequestReadyState)
class IDBRequestReadyState: public emlite::Val {
  explicit IDBRequestReadyState(Handle h) noexcept;
public:
    enum Value {
        PENDING,
        DONE,
    };

private:
    Value value_;

public:
    IDBRequestReadyState() noexcept = delete;
    IDBRequestReadyState(Value v) noexcept;
    explicit IDBRequestReadyState(const emlite::Val& val) noexcept;
    static IDBRequestReadyState take_ownership(Handle h) noexcept;
    [[nodiscard]] IDBRequestReadyState clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const IDBRequestReadyState& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const IDBRequestReadyState& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type IDBTransactionDurability
/// [`IDBTransactionDurability`](https://developer.mozilla.org/en-US/docs/Web/API/IDBTransactionDurability)
class IDBTransactionDurability: public emlite::Val {
  explicit IDBTransactionDurability(Handle h) noexcept;
public:
    enum Value {
        DEFAULT_,
        STRICT,
        RELAXED,
    };

private:
    Value value_;

public:
    IDBTransactionDurability() noexcept = delete;
    IDBTransactionDurability(Value v) noexcept;
    explicit IDBTransactionDurability(const emlite::Val& val) noexcept;
    static IDBTransactionDurability take_ownership(Handle h) noexcept;
    [[nodiscard]] IDBTransactionDurability clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const IDBTransactionDurability& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const IDBTransactionDurability& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type IDBCursorDirection
/// [`IDBCursorDirection`](https://developer.mozilla.org/en-US/docs/Web/API/IDBCursorDirection)
class IDBCursorDirection: public emlite::Val {
  explicit IDBCursorDirection(Handle h) noexcept;
public:
    enum Value {
        NEXT,
        NEXTUNIQUE,
        PREV,
        PREVUNIQUE,
    };

private:
    Value value_;

public:
    IDBCursorDirection() noexcept = delete;
    IDBCursorDirection(Value v) noexcept;
    explicit IDBCursorDirection(const emlite::Val& val) noexcept;
    static IDBCursorDirection take_ownership(Handle h) noexcept;
    [[nodiscard]] IDBCursorDirection clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const IDBCursorDirection& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const IDBCursorDirection& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type IDBTransactionMode
/// [`IDBTransactionMode`](https://developer.mozilla.org/en-US/docs/Web/API/IDBTransactionMode)
class IDBTransactionMode: public emlite::Val {
  explicit IDBTransactionMode(Handle h) noexcept;
public:
    enum Value {
        READONLY,
        READWRITE,
        VERSIONCHANGE,
    };

private:
    Value value_;

public:
    IDBTransactionMode() noexcept = delete;
    IDBTransactionMode(Value v) noexcept;
    explicit IDBTransactionMode(const emlite::Val& val) noexcept;
    static IDBTransactionMode take_ownership(Handle h) noexcept;
    [[nodiscard]] IDBTransactionMode clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const IDBTransactionMode& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const IDBTransactionMode& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type AccelerometerLocalCoordinateSystem
/// [`AccelerometerLocalCoordinateSystem`](https://developer.mozilla.org/en-US/docs/Web/API/AccelerometerLocalCoordinateSystem)
class AccelerometerLocalCoordinateSystem: public emlite::Val {
  explicit AccelerometerLocalCoordinateSystem(Handle h) noexcept;
public:
    enum Value {
        DEVICE,
        SCREEN,
    };

private:
    Value value_;

public:
    AccelerometerLocalCoordinateSystem() noexcept = delete;
    AccelerometerLocalCoordinateSystem(Value v) noexcept;
    explicit AccelerometerLocalCoordinateSystem(const emlite::Val& val) noexcept;
    static AccelerometerLocalCoordinateSystem take_ownership(Handle h) noexcept;
    [[nodiscard]] AccelerometerLocalCoordinateSystem clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const AccelerometerLocalCoordinateSystem& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const AccelerometerLocalCoordinateSystem& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type AudioSessionType
/// [`AudioSessionType`](https://developer.mozilla.org/en-US/docs/Web/API/AudioSessionType)
class AudioSessionType: public emlite::Val {
  explicit AudioSessionType(Handle h) noexcept;
public:
    enum Value {
        AUTO_,
        PLAYBACK,
        TRANSIENT,
        TRANSIENT_SOLO,
        AMBIENT,
        PLAY_AND_RECORD,
    };

private:
    Value value_;

public:
    AudioSessionType() noexcept = delete;
    AudioSessionType(Value v) noexcept;
    explicit AudioSessionType(const emlite::Val& val) noexcept;
    static AudioSessionType take_ownership(Handle h) noexcept;
    [[nodiscard]] AudioSessionType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const AudioSessionType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const AudioSessionType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type AudioSessionState
/// [`AudioSessionState`](https://developer.mozilla.org/en-US/docs/Web/API/AudioSessionState)
class AudioSessionState: public emlite::Val {
  explicit AudioSessionState(Handle h) noexcept;
public:
    enum Value {
        INACTIVE,
        ACTIVE,
        INTERRUPTED,
    };

private:
    Value value_;

public:
    AudioSessionState() noexcept = delete;
    AudioSessionState(Value v) noexcept;
    explicit AudioSessionState(const emlite::Val& val) noexcept;
    static AudioSessionState take_ownership(Handle h) noexcept;
    [[nodiscard]] AudioSessionState clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const AudioSessionState& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const AudioSessionState& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type AutoplayPolicy
/// [`AutoplayPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/AutoplayPolicy)
class AutoplayPolicy: public emlite::Val {
  explicit AutoplayPolicy(Handle h) noexcept;
public:
    enum Value {
        ALLOWED,
        ALLOWED_MUTED,
        DISALLOWED,
    };

private:
    Value value_;

public:
    AutoplayPolicy() noexcept = delete;
    AutoplayPolicy(Value v) noexcept;
    explicit AutoplayPolicy(const emlite::Val& val) noexcept;
    static AutoplayPolicy take_ownership(Handle h) noexcept;
    [[nodiscard]] AutoplayPolicy clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const AutoplayPolicy& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const AutoplayPolicy& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type AutoplayPolicyMediaType
/// [`AutoplayPolicyMediaType`](https://developer.mozilla.org/en-US/docs/Web/API/AutoplayPolicyMediaType)
class AutoplayPolicyMediaType: public emlite::Val {
  explicit AutoplayPolicyMediaType(Handle h) noexcept;
public:
    enum Value {
        MEDIAELEMENT,
        AUDIOCONTEXT,
    };

private:
    Value value_;

public:
    AutoplayPolicyMediaType() noexcept = delete;
    AutoplayPolicyMediaType(Value v) noexcept;
    explicit AutoplayPolicyMediaType(const emlite::Val& val) noexcept;
    static AutoplayPolicyMediaType take_ownership(Handle h) noexcept;
    [[nodiscard]] AutoplayPolicyMediaType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const AutoplayPolicyMediaType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const AutoplayPolicyMediaType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type BackgroundFetchResult
/// [`BackgroundFetchResult`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchResult)
class BackgroundFetchResult: public emlite::Val {
  explicit BackgroundFetchResult(Handle h) noexcept;
public:
    enum Value {
        NONE,
        SUCCESS,
        FAILURE,
    };

private:
    Value value_;

public:
    BackgroundFetchResult() noexcept = delete;
    BackgroundFetchResult(Value v) noexcept;
    explicit BackgroundFetchResult(const emlite::Val& val) noexcept;
    static BackgroundFetchResult take_ownership(Handle h) noexcept;
    [[nodiscard]] BackgroundFetchResult clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const BackgroundFetchResult& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const BackgroundFetchResult& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type BackgroundFetchFailureReason
/// [`BackgroundFetchFailureReason`](https://developer.mozilla.org/en-US/docs/Web/API/BackgroundFetchFailureReason)
class BackgroundFetchFailureReason: public emlite::Val {
  explicit BackgroundFetchFailureReason(Handle h) noexcept;
public:
    enum Value {
        NONE,
        ABORTED,
        BAD_STATUS,
        FETCH_ERROR,
        QUOTA_EXCEEDED,
        DOWNLOAD_TOTAL_EXCEEDED,
    };

private:
    Value value_;

public:
    BackgroundFetchFailureReason() noexcept = delete;
    BackgroundFetchFailureReason(Value v) noexcept;
    explicit BackgroundFetchFailureReason(const emlite::Val& val) noexcept;
    static BackgroundFetchFailureReason take_ownership(Handle h) noexcept;
    [[nodiscard]] BackgroundFetchFailureReason clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const BackgroundFetchFailureReason& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const BackgroundFetchFailureReason& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type PresentationStyle
/// [`PresentationStyle`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationStyle)
class PresentationStyle: public emlite::Val {
  explicit PresentationStyle(Handle h) noexcept;
public:
    enum Value {
        UNSPECIFIED,
        INLINE_,
        ATTACHMENT,
    };

private:
    Value value_;

public:
    PresentationStyle() noexcept = delete;
    PresentationStyle(Value v) noexcept;
    explicit PresentationStyle(const emlite::Val& val) noexcept;
    static PresentationStyle take_ownership(Handle h) noexcept;
    [[nodiscard]] PresentationStyle clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const PresentationStyle& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const PresentationStyle& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type CompressionFormat
/// [`CompressionFormat`](https://developer.mozilla.org/en-US/docs/Web/API/CompressionFormat)
class CompressionFormat: public emlite::Val {
  explicit CompressionFormat(Handle h) noexcept;
public:
    enum Value {
        DEFLATE,
        DEFLATE_RAW,
        GZIP,
    };

private:
    Value value_;

public:
    CompressionFormat() noexcept = delete;
    CompressionFormat(Value v) noexcept;
    explicit CompressionFormat(const emlite::Val& val) noexcept;
    static CompressionFormat take_ownership(Handle h) noexcept;
    [[nodiscard]] CompressionFormat clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const CompressionFormat& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const CompressionFormat& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type PressureSource
/// [`PressureSource`](https://developer.mozilla.org/en-US/docs/Web/API/PressureSource)
class PressureSource: public emlite::Val {
  explicit PressureSource(Handle h) noexcept;
public:
    enum Value {
        CPU,
    };

private:
    Value value_;

public:
    PressureSource() noexcept = delete;
    PressureSource(Value v) noexcept;
    explicit PressureSource(const emlite::Val& val) noexcept;
    static PressureSource take_ownership(Handle h) noexcept;
    [[nodiscard]] PressureSource clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const PressureSource& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const PressureSource& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type PressureState
/// [`PressureState`](https://developer.mozilla.org/en-US/docs/Web/API/PressureState)
class PressureState: public emlite::Val {
  explicit PressureState(Handle h) noexcept;
public:
    enum Value {
        NOMINAL,
        FAIR,
        SERIOUS,
        CRITICAL,
    };

private:
    Value value_;

public:
    PressureState() noexcept = delete;
    PressureState(Value v) noexcept;
    explicit PressureState(const emlite::Val& val) noexcept;
    static PressureState take_ownership(Handle h) noexcept;
    [[nodiscard]] PressureState clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const PressureState& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const PressureState& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type ContactProperty
/// [`ContactProperty`](https://developer.mozilla.org/en-US/docs/Web/API/ContactProperty)
class ContactProperty: public emlite::Val {
  explicit ContactProperty(Handle h) noexcept;
public:
    enum Value {
        ADDRESS,
        EMAIL,
        ICON,
        NAME,
        TEL,
    };

private:
    Value value_;

public:
    ContactProperty() noexcept = delete;
    ContactProperty(Value v) noexcept;
    explicit ContactProperty(const emlite::Val& val) noexcept;
    static ContactProperty take_ownership(Handle h) noexcept;
    [[nodiscard]] ContactProperty clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const ContactProperty& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const ContactProperty& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type ContentCategory
/// [`ContentCategory`](https://developer.mozilla.org/en-US/docs/Web/API/ContentCategory)
class ContentCategory: public emlite::Val {
  explicit ContentCategory(Handle h) noexcept;
public:
    enum Value {
        NONE,
        HOMEPAGE,
        ARTICLE,
        VIDEO,
        AUDIO,
    };

private:
    Value value_;

public:
    ContentCategory() noexcept = delete;
    ContentCategory(Value v) noexcept;
    explicit ContentCategory(const emlite::Val& val) noexcept;
    static ContentCategory take_ownership(Handle h) noexcept;
    [[nodiscard]] ContentCategory clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const ContentCategory& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const ContentCategory& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type CookieSameSite
/// [`CookieSameSite`](https://developer.mozilla.org/en-US/docs/Web/API/CookieSameSite)
class CookieSameSite: public emlite::Val {
  explicit CookieSameSite(Handle h) noexcept;
public:
    enum Value {
        STRICT,
        LAX,
        NONE,
    };

private:
    Value value_;

public:
    CookieSameSite() noexcept = delete;
    CookieSameSite(Value v) noexcept;
    explicit CookieSameSite(const emlite::Val& val) noexcept;
    static CookieSameSite take_ownership(Handle h) noexcept;
    [[nodiscard]] CookieSameSite clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const CookieSameSite& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const CookieSameSite& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type CredentialMediationRequirement
/// [`CredentialMediationRequirement`](https://developer.mozilla.org/en-US/docs/Web/API/CredentialMediationRequirement)
class CredentialMediationRequirement: public emlite::Val {
  explicit CredentialMediationRequirement(Handle h) noexcept;
public:
    enum Value {
        SILENT,
        OPTIONAL,
        CONDITIONAL,
        REQUIRED,
    };

private:
    Value value_;

public:
    CredentialMediationRequirement() noexcept = delete;
    CredentialMediationRequirement(Value v) noexcept;
    explicit CredentialMediationRequirement(const emlite::Val& val) noexcept;
    static CredentialMediationRequirement take_ownership(Handle h) noexcept;
    [[nodiscard]] CredentialMediationRequirement clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const CredentialMediationRequirement& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const CredentialMediationRequirement& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type ScriptingPolicyViolationType
/// [`ScriptingPolicyViolationType`](https://developer.mozilla.org/en-US/docs/Web/API/ScriptingPolicyViolationType)
class ScriptingPolicyViolationType: public emlite::Val {
  explicit ScriptingPolicyViolationType(Handle h) noexcept;
public:
    enum Value {
        EXTERNALSCRIPT,
        INLINESCRIPT,
        INLINEEVENTHANDLER,
        EVAL,
    };

private:
    Value value_;

public:
    ScriptingPolicyViolationType() noexcept = delete;
    ScriptingPolicyViolationType(Value v) noexcept;
    explicit ScriptingPolicyViolationType(const emlite::Val& val) noexcept;
    static ScriptingPolicyViolationType take_ownership(Handle h) noexcept;
    [[nodiscard]] ScriptingPolicyViolationType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const ScriptingPolicyViolationType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const ScriptingPolicyViolationType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type FontFaceLoadStatus
/// [`FontFaceLoadStatus`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceLoadStatus)
class FontFaceLoadStatus: public emlite::Val {
  explicit FontFaceLoadStatus(Handle h) noexcept;
public:
    enum Value {
        UNLOADED,
        LOADING,
        LOADED,
        ERROR,
    };

private:
    Value value_;

public:
    FontFaceLoadStatus() noexcept = delete;
    FontFaceLoadStatus(Value v) noexcept;
    explicit FontFaceLoadStatus(const emlite::Val& val) noexcept;
    static FontFaceLoadStatus take_ownership(Handle h) noexcept;
    [[nodiscard]] FontFaceLoadStatus clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const FontFaceLoadStatus& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const FontFaceLoadStatus& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type FontFaceSetLoadStatus
/// [`FontFaceSetLoadStatus`](https://developer.mozilla.org/en-US/docs/Web/API/FontFaceSetLoadStatus)
class FontFaceSetLoadStatus: public emlite::Val {
  explicit FontFaceSetLoadStatus(Handle h) noexcept;
public:
    enum Value {
        LOADING,
        LOADED,
    };

private:
    Value value_;

public:
    FontFaceSetLoadStatus() noexcept = delete;
    FontFaceSetLoadStatus(Value v) noexcept;
    explicit FontFaceSetLoadStatus(const emlite::Val& val) noexcept;
    static FontFaceSetLoadStatus take_ownership(Handle h) noexcept;
    [[nodiscard]] FontFaceSetLoadStatus clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const FontFaceSetLoadStatus& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const FontFaceSetLoadStatus& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type HighlightType
/// [`HighlightType`](https://developer.mozilla.org/en-US/docs/Web/API/HighlightType)
class HighlightType: public emlite::Val {
  explicit HighlightType(Handle h) noexcept;
public:
    enum Value {
        HIGHLIGHT,
        SPELLING_ERROR,
        GRAMMAR_ERROR,
    };

private:
    Value value_;

public:
    HighlightType() noexcept = delete;
    HighlightType(Value v) noexcept;
    explicit HighlightType(const emlite::Val& val) noexcept;
    static HighlightType take_ownership(Handle h) noexcept;
    [[nodiscard]] HighlightType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const HighlightType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const HighlightType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type ChildDisplayType
/// [`ChildDisplayType`](https://developer.mozilla.org/en-US/docs/Web/API/ChildDisplayType)
class ChildDisplayType: public emlite::Val {
  explicit ChildDisplayType(Handle h) noexcept;
public:
    enum Value {
        BLOCK,
        NORMAL,
    };

private:
    Value value_;

public:
    ChildDisplayType() noexcept = delete;
    ChildDisplayType(Value v) noexcept;
    explicit ChildDisplayType(const emlite::Val& val) noexcept;
    static ChildDisplayType take_ownership(Handle h) noexcept;
    [[nodiscard]] ChildDisplayType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const ChildDisplayType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const ChildDisplayType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type LayoutSizingMode
/// [`LayoutSizingMode`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutSizingMode)
class LayoutSizingMode: public emlite::Val {
  explicit LayoutSizingMode(Handle h) noexcept;
public:
    enum Value {
        BLOCK_LIKE,
        MANUAL,
    };

private:
    Value value_;

public:
    LayoutSizingMode() noexcept = delete;
    LayoutSizingMode(Value v) noexcept;
    explicit LayoutSizingMode(const emlite::Val& val) noexcept;
    static LayoutSizingMode take_ownership(Handle h) noexcept;
    [[nodiscard]] LayoutSizingMode clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const LayoutSizingMode& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const LayoutSizingMode& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type BlockFragmentationType
/// [`BlockFragmentationType`](https://developer.mozilla.org/en-US/docs/Web/API/BlockFragmentationType)
class BlockFragmentationType: public emlite::Val {
  explicit BlockFragmentationType(Handle h) noexcept;
public:
    enum Value {
        NONE,
        PAGE,
        COLUMN,
        REGION,
    };

private:
    Value value_;

public:
    BlockFragmentationType() noexcept = delete;
    BlockFragmentationType(Value v) noexcept;
    explicit BlockFragmentationType(const emlite::Val& val) noexcept;
    static BlockFragmentationType take_ownership(Handle h) noexcept;
    [[nodiscard]] BlockFragmentationType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const BlockFragmentationType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const BlockFragmentationType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type BreakType
/// [`BreakType`](https://developer.mozilla.org/en-US/docs/Web/API/BreakType)
class BreakType: public emlite::Val {
  explicit BreakType(Handle h) noexcept;
public:
    enum Value {
        NONE,
        LINE,
        COLUMN,
        PAGE,
        REGION,
    };

private:
    Value value_;

public:
    BreakType() noexcept = delete;
    BreakType(Value v) noexcept;
    explicit BreakType(const emlite::Val& val) noexcept;
    static BreakType take_ownership(Handle h) noexcept;
    [[nodiscard]] BreakType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const BreakType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const BreakType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type SpatialNavigationDirection
/// [`SpatialNavigationDirection`](https://developer.mozilla.org/en-US/docs/Web/API/SpatialNavigationDirection)
class SpatialNavigationDirection: public emlite::Val {
  explicit SpatialNavigationDirection(Handle h) noexcept;
public:
    enum Value {
        UP,
        DOWN,
        LEFT,
        RIGHT,
    };

private:
    Value value_;

public:
    SpatialNavigationDirection() noexcept = delete;
    SpatialNavigationDirection(Value v) noexcept;
    explicit SpatialNavigationDirection(const emlite::Val& val) noexcept;
    static SpatialNavigationDirection take_ownership(Handle h) noexcept;
    [[nodiscard]] SpatialNavigationDirection clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const SpatialNavigationDirection& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const SpatialNavigationDirection& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type FocusableAreaSearchMode
/// [`FocusableAreaSearchMode`](https://developer.mozilla.org/en-US/docs/Web/API/FocusableAreaSearchMode)
class FocusableAreaSearchMode: public emlite::Val {
  explicit FocusableAreaSearchMode(Handle h) noexcept;
public:
    enum Value {
        VISIBLE,
        ALL,
    };

private:
    Value value_;

public:
    FocusableAreaSearchMode() noexcept = delete;
    FocusableAreaSearchMode(Value v) noexcept;
    explicit FocusableAreaSearchMode(const emlite::Val& val) noexcept;
    static FocusableAreaSearchMode take_ownership(Handle h) noexcept;
    [[nodiscard]] FocusableAreaSearchMode clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const FocusableAreaSearchMode& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const FocusableAreaSearchMode& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type CSSNumericBaseType
/// [`CSSNumericBaseType`](https://developer.mozilla.org/en-US/docs/Web/API/CSSNumericBaseType)
class CSSNumericBaseType: public emlite::Val {
  explicit CSSNumericBaseType(Handle h) noexcept;
public:
    enum Value {
        LENGTH,
        ANGLE,
        TIME,
        FREQUENCY,
        RESOLUTION,
        FLEX,
        PERCENT,
    };

private:
    Value value_;

public:
    CSSNumericBaseType() noexcept = delete;
    CSSNumericBaseType(Value v) noexcept;
    explicit CSSNumericBaseType(const emlite::Val& val) noexcept;
    static CSSNumericBaseType take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSNumericBaseType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const CSSNumericBaseType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const CSSNumericBaseType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type CSSMathOperator
/// [`CSSMathOperator`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMathOperator)
class CSSMathOperator: public emlite::Val {
  explicit CSSMathOperator(Handle h) noexcept;
public:
    enum Value {
        SUM,
        PRODUCT,
        NEGATE,
        INVERT,
        MIN,
        MAX,
        CLAMP,
    };

private:
    Value value_;

public:
    CSSMathOperator() noexcept = delete;
    CSSMathOperator(Value v) noexcept;
    explicit CSSMathOperator(const emlite::Val& val) noexcept;
    static CSSMathOperator take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSMathOperator clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const CSSMathOperator& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const CSSMathOperator& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type ScrollBehavior
/// [`ScrollBehavior`](https://developer.mozilla.org/en-US/docs/Web/API/ScrollBehavior)
class ScrollBehavior: public emlite::Val {
  explicit ScrollBehavior(Handle h) noexcept;
public:
    enum Value {
        AUTO_,
        INSTANT,
        SMOOTH,
    };

private:
    Value value_;

public:
    ScrollBehavior() noexcept = delete;
    ScrollBehavior(Value v) noexcept;
    explicit ScrollBehavior(const emlite::Val& val) noexcept;
    static ScrollBehavior take_ownership(Handle h) noexcept;
    [[nodiscard]] ScrollBehavior clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const ScrollBehavior& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const ScrollBehavior& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type ScrollLogicalPosition
/// [`ScrollLogicalPosition`](https://developer.mozilla.org/en-US/docs/Web/API/ScrollLogicalPosition)
class ScrollLogicalPosition: public emlite::Val {
  explicit ScrollLogicalPosition(Handle h) noexcept;
public:
    enum Value {
        START,
        CENTER,
        END,
        NEAREST,
    };

private:
    Value value_;

public:
    ScrollLogicalPosition() noexcept = delete;
    ScrollLogicalPosition(Value v) noexcept;
    explicit ScrollLogicalPosition(const emlite::Val& val) noexcept;
    static ScrollLogicalPosition take_ownership(Handle h) noexcept;
    [[nodiscard]] ScrollLogicalPosition clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const ScrollLogicalPosition& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const ScrollLogicalPosition& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type ScrollIntoViewContainer
/// [`ScrollIntoViewContainer`](https://developer.mozilla.org/en-US/docs/Web/API/ScrollIntoViewContainer)
class ScrollIntoViewContainer: public emlite::Val {
  explicit ScrollIntoViewContainer(Handle h) noexcept;
public:
    enum Value {
        ALL,
        NEAREST,
    };

private:
    Value value_;

public:
    ScrollIntoViewContainer() noexcept = delete;
    ScrollIntoViewContainer(Value v) noexcept;
    explicit ScrollIntoViewContainer(const emlite::Val& val) noexcept;
    static ScrollIntoViewContainer take_ownership(Handle h) noexcept;
    [[nodiscard]] ScrollIntoViewContainer clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const ScrollIntoViewContainer& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const ScrollIntoViewContainer& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type CSSBoxType
/// [`CSSBoxType`](https://developer.mozilla.org/en-US/docs/Web/API/CSSBoxType)
class CSSBoxType: public emlite::Val {
  explicit CSSBoxType(Handle h) noexcept;
public:
    enum Value {
        MARGIN,
        BORDER,
        PADDING,
        CONTENT,
    };

private:
    Value value_;

public:
    CSSBoxType() noexcept = delete;
    CSSBoxType(Value v) noexcept;
    explicit CSSBoxType(const emlite::Val& val) noexcept;
    static CSSBoxType take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSBoxType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const CSSBoxType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const CSSBoxType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type DevicePostureType
/// [`DevicePostureType`](https://developer.mozilla.org/en-US/docs/Web/API/DevicePostureType)
class DevicePostureType: public emlite::Val {
  explicit DevicePostureType(Handle h) noexcept;
public:
    enum Value {
        CONTINUOUS,
        FOLDED,
    };

private:
    Value value_;

public:
    DevicePostureType() noexcept = delete;
    DevicePostureType(Value v) noexcept;
    explicit DevicePostureType(const emlite::Val& val) noexcept;
    static DevicePostureType take_ownership(Handle h) noexcept;
    [[nodiscard]] DevicePostureType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const DevicePostureType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const DevicePostureType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type ItemType
/// [`ItemType`](https://developer.mozilla.org/en-US/docs/Web/API/ItemType)
class ItemType: public emlite::Val {
  explicit ItemType(Handle h) noexcept;
public:
    enum Value {
        PRODUCT,
        SUBSCRIPTION,
    };

private:
    Value value_;

public:
    ItemType() noexcept = delete;
    ItemType(Value v) noexcept;
    explicit ItemType(const emlite::Val& val) noexcept;
    static ItemType take_ownership(Handle h) noexcept;
    [[nodiscard]] ItemType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const ItemType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const ItemType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type ShadowRootMode
/// [`ShadowRootMode`](https://developer.mozilla.org/en-US/docs/Web/API/ShadowRootMode)
class ShadowRootMode: public emlite::Val {
  explicit ShadowRootMode(Handle h) noexcept;
public:
    enum Value {
        OPEN,
        CLOSED,
    };

private:
    Value value_;

public:
    ShadowRootMode() noexcept = delete;
    ShadowRootMode(Value v) noexcept;
    explicit ShadowRootMode(const emlite::Val& val) noexcept;
    static ShadowRootMode take_ownership(Handle h) noexcept;
    [[nodiscard]] ShadowRootMode clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const ShadowRootMode& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const ShadowRootMode& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type SlotAssignmentMode
/// [`SlotAssignmentMode`](https://developer.mozilla.org/en-US/docs/Web/API/SlotAssignmentMode)
class SlotAssignmentMode: public emlite::Val {
  explicit SlotAssignmentMode(Handle h) noexcept;
public:
    enum Value {
        MANUAL,
        NAMED,
    };

private:
    Value value_;

public:
    SlotAssignmentMode() noexcept = delete;
    SlotAssignmentMode(Value v) noexcept;
    explicit SlotAssignmentMode(const emlite::Val& val) noexcept;
    static SlotAssignmentMode take_ownership(Handle h) noexcept;
    [[nodiscard]] SlotAssignmentMode clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const SlotAssignmentMode& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const SlotAssignmentMode& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type UnderlineStyle
/// [`UnderlineStyle`](https://developer.mozilla.org/en-US/docs/Web/API/UnderlineStyle)
class UnderlineStyle: public emlite::Val {
  explicit UnderlineStyle(Handle h) noexcept;
public:
    enum Value {
        NONE,
        SOLID,
        DOTTED,
        DASHED,
        WAVY,
    };

private:
    Value value_;

public:
    UnderlineStyle() noexcept = delete;
    UnderlineStyle(Value v) noexcept;
    explicit UnderlineStyle(const emlite::Val& val) noexcept;
    static UnderlineStyle take_ownership(Handle h) noexcept;
    [[nodiscard]] UnderlineStyle clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const UnderlineStyle& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const UnderlineStyle& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type UnderlineThickness
/// [`UnderlineThickness`](https://developer.mozilla.org/en-US/docs/Web/API/UnderlineThickness)
class UnderlineThickness: public emlite::Val {
  explicit UnderlineThickness(Handle h) noexcept;
public:
    enum Value {
        NONE,
        THIN,
        THICK,
    };

private:
    Value value_;

public:
    UnderlineThickness() noexcept = delete;
    UnderlineThickness(Value v) noexcept;
    explicit UnderlineThickness(const emlite::Val& val) noexcept;
    static UnderlineThickness take_ownership(Handle h) noexcept;
    [[nodiscard]] UnderlineThickness clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const UnderlineThickness& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const UnderlineThickness& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type MediaKeysRequirement
/// [`MediaKeysRequirement`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeysRequirement)
class MediaKeysRequirement: public emlite::Val {
  explicit MediaKeysRequirement(Handle h) noexcept;
public:
    enum Value {
        REQUIRED,
        OPTIONAL,
        NOT_ALLOWED,
    };

private:
    Value value_;

public:
    MediaKeysRequirement() noexcept = delete;
    MediaKeysRequirement(Value v) noexcept;
    explicit MediaKeysRequirement(const emlite::Val& val) noexcept;
    static MediaKeysRequirement take_ownership(Handle h) noexcept;
    [[nodiscard]] MediaKeysRequirement clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const MediaKeysRequirement& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const MediaKeysRequirement& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type MediaKeySessionType
/// [`MediaKeySessionType`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeySessionType)
class MediaKeySessionType: public emlite::Val {
  explicit MediaKeySessionType(Handle h) noexcept;
public:
    enum Value {
        TEMPORARY,
        PERSISTENT_LICENSE,
    };

private:
    Value value_;

public:
    MediaKeySessionType() noexcept = delete;
    MediaKeySessionType(Value v) noexcept;
    explicit MediaKeySessionType(const emlite::Val& val) noexcept;
    static MediaKeySessionType take_ownership(Handle h) noexcept;
    [[nodiscard]] MediaKeySessionType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const MediaKeySessionType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const MediaKeySessionType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type MediaKeySessionClosedReason
/// [`MediaKeySessionClosedReason`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeySessionClosedReason)
class MediaKeySessionClosedReason: public emlite::Val {
  explicit MediaKeySessionClosedReason(Handle h) noexcept;
public:
    enum Value {
        INTERNAL_ERROR,
        CLOSED_BY_APPLICATION,
        RELEASE_ACKNOWLEDGED,
        HARDWARE_CONTEXT_RESET,
        RESOURCE_EVICTED,
    };

private:
    Value value_;

public:
    MediaKeySessionClosedReason() noexcept = delete;
    MediaKeySessionClosedReason(Value v) noexcept;
    explicit MediaKeySessionClosedReason(const emlite::Val& val) noexcept;
    static MediaKeySessionClosedReason take_ownership(Handle h) noexcept;
    [[nodiscard]] MediaKeySessionClosedReason clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const MediaKeySessionClosedReason& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const MediaKeySessionClosedReason& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type MediaKeyStatus
/// [`MediaKeyStatus`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeyStatus)
class MediaKeyStatus: public emlite::Val {
  explicit MediaKeyStatus(Handle h) noexcept;
public:
    enum Value {
        USABLE,
        EXPIRED,
        RELEASED,
        OUTPUT_RESTRICTED,
        OUTPUT_DOWNSCALED,
        USABLE_IN_FUTURE,
        STATUS_PENDING,
        INTERNAL_ERROR,
    };

private:
    Value value_;

public:
    MediaKeyStatus() noexcept = delete;
    MediaKeyStatus(Value v) noexcept;
    explicit MediaKeyStatus(const emlite::Val& val) noexcept;
    static MediaKeyStatus take_ownership(Handle h) noexcept;
    [[nodiscard]] MediaKeyStatus clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const MediaKeyStatus& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const MediaKeyStatus& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type MediaKeyMessageType
/// [`MediaKeyMessageType`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeyMessageType)
class MediaKeyMessageType: public emlite::Val {
  explicit MediaKeyMessageType(Handle h) noexcept;
public:
    enum Value {
        LICENSE_REQUEST,
        LICENSE_RENEWAL,
        LICENSE_RELEASE,
        INDIVIDUALIZATION_REQUEST,
    };

private:
    Value value_;

public:
    MediaKeyMessageType() noexcept = delete;
    MediaKeyMessageType(Value v) noexcept;
    explicit MediaKeyMessageType(const emlite::Val& val) noexcept;
    static MediaKeyMessageType take_ownership(Handle h) noexcept;
    [[nodiscard]] MediaKeyMessageType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const MediaKeyMessageType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const MediaKeyMessageType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type IdentityCredentialRequestOptionsContext
/// [`IdentityCredentialRequestOptionsContext`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityCredentialRequestOptionsContext)
class IdentityCredentialRequestOptionsContext: public emlite::Val {
  explicit IdentityCredentialRequestOptionsContext(Handle h) noexcept;
public:
    enum Value {
        SIGNIN,
        SIGNUP,
        USE,
        CONTINUE_,
    };

private:
    Value value_;

public:
    IdentityCredentialRequestOptionsContext() noexcept = delete;
    IdentityCredentialRequestOptionsContext(Value v) noexcept;
    explicit IdentityCredentialRequestOptionsContext(const emlite::Val& val) noexcept;
    static IdentityCredentialRequestOptionsContext take_ownership(Handle h) noexcept;
    [[nodiscard]] IdentityCredentialRequestOptionsContext clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const IdentityCredentialRequestOptionsContext& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const IdentityCredentialRequestOptionsContext& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type IdentityCredentialRequestOptionsMode
/// [`IdentityCredentialRequestOptionsMode`](https://developer.mozilla.org/en-US/docs/Web/API/IdentityCredentialRequestOptionsMode)
class IdentityCredentialRequestOptionsMode: public emlite::Val {
  explicit IdentityCredentialRequestOptionsMode(Handle h) noexcept;
public:
    enum Value {
        ACTIVE,
        PASSIVE,
    };

private:
    Value value_;

public:
    IdentityCredentialRequestOptionsMode() noexcept = delete;
    IdentityCredentialRequestOptionsMode(Value v) noexcept;
    explicit IdentityCredentialRequestOptionsMode(const emlite::Val& val) noexcept;
    static IdentityCredentialRequestOptionsMode take_ownership(Handle h) noexcept;
    [[nodiscard]] IdentityCredentialRequestOptionsMode clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const IdentityCredentialRequestOptionsMode& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const IdentityCredentialRequestOptionsMode& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type OpaqueProperty
/// [`OpaqueProperty`](https://developer.mozilla.org/en-US/docs/Web/API/OpaqueProperty)
class OpaqueProperty: public emlite::Val {
  explicit OpaqueProperty(Handle h) noexcept;
public:
    enum Value {
        OPAQUE,
    };

private:
    Value value_;

public:
    OpaqueProperty() noexcept = delete;
    OpaqueProperty(Value v) noexcept;
    explicit OpaqueProperty(const emlite::Val& val) noexcept;
    static OpaqueProperty take_ownership(Handle h) noexcept;
    [[nodiscard]] OpaqueProperty clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const OpaqueProperty& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const OpaqueProperty& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type FenceReportingDestination
/// [`FenceReportingDestination`](https://developer.mozilla.org/en-US/docs/Web/API/FenceReportingDestination)
class FenceReportingDestination: public emlite::Val {
  explicit FenceReportingDestination(Handle h) noexcept;
public:
    enum Value {
        BUYER,
        SELLER,
        COMPONENT_SELLER,
        DIRECT_SELLER,
        SHARED_STORAGE_SELECT_URL,
    };

private:
    Value value_;

public:
    FenceReportingDestination() noexcept = delete;
    FenceReportingDestination(Value v) noexcept;
    explicit FenceReportingDestination(const emlite::Val& val) noexcept;
    static FenceReportingDestination take_ownership(Handle h) noexcept;
    [[nodiscard]] FenceReportingDestination clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const FenceReportingDestination& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const FenceReportingDestination& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RequestDestination
/// [`RequestDestination`](https://developer.mozilla.org/en-US/docs/Web/API/RequestDestination)
class RequestDestination: public emlite::Val {
  explicit RequestDestination(Handle h) noexcept;
public:
    enum Value {
        NONE,
        AUDIO,
        AUDIOWORKLET,
        DOCUMENT,
        EMBED,
        FONT,
        FRAME,
        IFRAME,
        IMAGE,
        JSON,
        MANIFEST,
        OBJECT,
        PAINTWORKLET,
        REPORT,
        SCRIPT,
        SHAREDWORKER,
        STYLE,
        TRACK,
        VIDEO,
        WORKER,
        XSLT,
    };

private:
    Value value_;

public:
    RequestDestination() noexcept = delete;
    RequestDestination(Value v) noexcept;
    explicit RequestDestination(const emlite::Val& val) noexcept;
    static RequestDestination take_ownership(Handle h) noexcept;
    [[nodiscard]] RequestDestination clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RequestDestination& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RequestDestination& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RequestMode
/// [`RequestMode`](https://developer.mozilla.org/en-US/docs/Web/API/RequestMode)
class RequestMode: public emlite::Val {
  explicit RequestMode(Handle h) noexcept;
public:
    enum Value {
        NAVIGATE,
        SAME_ORIGIN,
        NO_CORS,
        CORS,
    };

private:
    Value value_;

public:
    RequestMode() noexcept = delete;
    RequestMode(Value v) noexcept;
    explicit RequestMode(const emlite::Val& val) noexcept;
    static RequestMode take_ownership(Handle h) noexcept;
    [[nodiscard]] RequestMode clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RequestMode& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RequestMode& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RequestCredentials
/// [`RequestCredentials`](https://developer.mozilla.org/en-US/docs/Web/API/RequestCredentials)
class RequestCredentials: public emlite::Val {
  explicit RequestCredentials(Handle h) noexcept;
public:
    enum Value {
        OMIT,
        SAME_ORIGIN,
        INCLUDE,
    };

private:
    Value value_;

public:
    RequestCredentials() noexcept = delete;
    RequestCredentials(Value v) noexcept;
    explicit RequestCredentials(const emlite::Val& val) noexcept;
    static RequestCredentials take_ownership(Handle h) noexcept;
    [[nodiscard]] RequestCredentials clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RequestCredentials& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RequestCredentials& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RequestCache
/// [`RequestCache`](https://developer.mozilla.org/en-US/docs/Web/API/RequestCache)
class RequestCache: public emlite::Val {
  explicit RequestCache(Handle h) noexcept;
public:
    enum Value {
        DEFAULT_,
        NO_STORE,
        RELOAD,
        NO_CACHE,
        FORCE_CACHE,
        ONLY_IF_CACHED,
    };

private:
    Value value_;

public:
    RequestCache() noexcept = delete;
    RequestCache(Value v) noexcept;
    explicit RequestCache(const emlite::Val& val) noexcept;
    static RequestCache take_ownership(Handle h) noexcept;
    [[nodiscard]] RequestCache clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RequestCache& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RequestCache& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RequestRedirect
/// [`RequestRedirect`](https://developer.mozilla.org/en-US/docs/Web/API/RequestRedirect)
class RequestRedirect: public emlite::Val {
  explicit RequestRedirect(Handle h) noexcept;
public:
    enum Value {
        FOLLOW,
        ERROR,
        MANUAL,
    };

private:
    Value value_;

public:
    RequestRedirect() noexcept = delete;
    RequestRedirect(Value v) noexcept;
    explicit RequestRedirect(const emlite::Val& val) noexcept;
    static RequestRedirect take_ownership(Handle h) noexcept;
    [[nodiscard]] RequestRedirect clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RequestRedirect& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RequestRedirect& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RequestDuplex
/// [`RequestDuplex`](https://developer.mozilla.org/en-US/docs/Web/API/RequestDuplex)
class RequestDuplex: public emlite::Val {
  explicit RequestDuplex(Handle h) noexcept;
public:
    enum Value {
        HALF,
    };

private:
    Value value_;

public:
    RequestDuplex() noexcept = delete;
    RequestDuplex(Value v) noexcept;
    explicit RequestDuplex(const emlite::Val& val) noexcept;
    static RequestDuplex take_ownership(Handle h) noexcept;
    [[nodiscard]] RequestDuplex clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RequestDuplex& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RequestDuplex& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RequestPriority
/// [`RequestPriority`](https://developer.mozilla.org/en-US/docs/Web/API/RequestPriority)
class RequestPriority: public emlite::Val {
  explicit RequestPriority(Handle h) noexcept;
public:
    enum Value {
        HIGH,
        LOW,
        AUTO_,
    };

private:
    Value value_;

public:
    RequestPriority() noexcept = delete;
    RequestPriority(Value v) noexcept;
    explicit RequestPriority(const emlite::Val& val) noexcept;
    static RequestPriority take_ownership(Handle h) noexcept;
    [[nodiscard]] RequestPriority clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RequestPriority& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RequestPriority& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type ResponseType
/// [`ResponseType`](https://developer.mozilla.org/en-US/docs/Web/API/ResponseType)
class ResponseType: public emlite::Val {
  explicit ResponseType(Handle h) noexcept;
public:
    enum Value {
        BASIC,
        CORS,
        DEFAULT_,
        ERROR,
        OPAQUE,
        OPAQUEREDIRECT,
    };

private:
    Value value_;

public:
    ResponseType() noexcept = delete;
    ResponseType(Value v) noexcept;
    explicit ResponseType(const emlite::Val& val) noexcept;
    static ResponseType take_ownership(Handle h) noexcept;
    [[nodiscard]] ResponseType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const ResponseType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const ResponseType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type FileSystemPermissionMode
/// [`FileSystemPermissionMode`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemPermissionMode)
class FileSystemPermissionMode: public emlite::Val {
  explicit FileSystemPermissionMode(Handle h) noexcept;
public:
    enum Value {
        READ,
        READWRITE,
    };

private:
    Value value_;

public:
    FileSystemPermissionMode() noexcept = delete;
    FileSystemPermissionMode(Value v) noexcept;
    explicit FileSystemPermissionMode(const emlite::Val& val) noexcept;
    static FileSystemPermissionMode take_ownership(Handle h) noexcept;
    [[nodiscard]] FileSystemPermissionMode clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const FileSystemPermissionMode& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const FileSystemPermissionMode& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type WellKnownDirectory
/// [`WellKnownDirectory`](https://developer.mozilla.org/en-US/docs/Web/API/WellKnownDirectory)
class WellKnownDirectory: public emlite::Val {
  explicit WellKnownDirectory(Handle h) noexcept;
public:
    enum Value {
        DESKTOP,
        DOCUMENTS,
        DOWNLOADS,
        MUSIC,
        PICTURES,
        VIDEOS,
    };

private:
    Value value_;

public:
    WellKnownDirectory() noexcept = delete;
    WellKnownDirectory(Value v) noexcept;
    explicit WellKnownDirectory(const emlite::Val& val) noexcept;
    static WellKnownDirectory take_ownership(Handle h) noexcept;
    [[nodiscard]] WellKnownDirectory clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const WellKnownDirectory& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const WellKnownDirectory& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type FileSystemHandleKind
/// [`FileSystemHandleKind`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemHandleKind)
class FileSystemHandleKind: public emlite::Val {
  explicit FileSystemHandleKind(Handle h) noexcept;
public:
    enum Value {
        FILE,
        DIRECTORY,
    };

private:
    Value value_;

public:
    FileSystemHandleKind() noexcept = delete;
    FileSystemHandleKind(Value v) noexcept;
    explicit FileSystemHandleKind(const emlite::Val& val) noexcept;
    static FileSystemHandleKind take_ownership(Handle h) noexcept;
    [[nodiscard]] FileSystemHandleKind clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const FileSystemHandleKind& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const FileSystemHandleKind& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type WriteCommandType
/// [`WriteCommandType`](https://developer.mozilla.org/en-US/docs/Web/API/WriteCommandType)
class WriteCommandType: public emlite::Val {
  explicit WriteCommandType(Handle h) noexcept;
public:
    enum Value {
        WRITE,
        SEEK,
        TRUNCATE,
    };

private:
    Value value_;

public:
    WriteCommandType() noexcept = delete;
    WriteCommandType(Value v) noexcept;
    explicit WriteCommandType(const emlite::Val& val) noexcept;
    static WriteCommandType take_ownership(Handle h) noexcept;
    [[nodiscard]] WriteCommandType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const WriteCommandType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const WriteCommandType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type FullscreenNavigationUI
/// [`FullscreenNavigationUI`](https://developer.mozilla.org/en-US/docs/Web/API/FullscreenNavigationUI)
class FullscreenNavigationUI: public emlite::Val {
  explicit FullscreenNavigationUI(Handle h) noexcept;
public:
    enum Value {
        AUTO_,
        SHOW,
        HIDE,
    };

private:
    Value value_;

public:
    FullscreenNavigationUI() noexcept = delete;
    FullscreenNavigationUI(Value v) noexcept;
    explicit FullscreenNavigationUI(const emlite::Val& val) noexcept;
    static FullscreenNavigationUI take_ownership(Handle h) noexcept;
    [[nodiscard]] FullscreenNavigationUI clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const FullscreenNavigationUI& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const FullscreenNavigationUI& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type GamepadHand
/// [`GamepadHand`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadHand)
class GamepadHand: public emlite::Val {
  explicit GamepadHand(Handle h) noexcept;
public:
    enum Value {
        NONE,
        LEFT,
        RIGHT,
    };

private:
    Value value_;

public:
    GamepadHand() noexcept = delete;
    GamepadHand(Value v) noexcept;
    explicit GamepadHand(const emlite::Val& val) noexcept;
    static GamepadHand take_ownership(Handle h) noexcept;
    [[nodiscard]] GamepadHand clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const GamepadHand& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const GamepadHand& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type GamepadMappingType
/// [`GamepadMappingType`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadMappingType)
class GamepadMappingType: public emlite::Val {
  explicit GamepadMappingType(Handle h) noexcept;
public:
    enum Value {
        NONE,
        STANDARD,
        XR_STANDARD,
    };

private:
    Value value_;

public:
    GamepadMappingType() noexcept = delete;
    GamepadMappingType(Value v) noexcept;
    explicit GamepadMappingType(const emlite::Val& val) noexcept;
    static GamepadMappingType take_ownership(Handle h) noexcept;
    [[nodiscard]] GamepadMappingType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const GamepadMappingType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const GamepadMappingType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type GamepadHapticsResult
/// [`GamepadHapticsResult`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadHapticsResult)
class GamepadHapticsResult: public emlite::Val {
  explicit GamepadHapticsResult(Handle h) noexcept;
public:
    enum Value {
        COMPLETE,
        PREEMPTED,
    };

private:
    Value value_;

public:
    GamepadHapticsResult() noexcept = delete;
    GamepadHapticsResult(Value v) noexcept;
    explicit GamepadHapticsResult(const emlite::Val& val) noexcept;
    static GamepadHapticsResult take_ownership(Handle h) noexcept;
    [[nodiscard]] GamepadHapticsResult clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const GamepadHapticsResult& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const GamepadHapticsResult& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type GamepadHapticEffectType
/// [`GamepadHapticEffectType`](https://developer.mozilla.org/en-US/docs/Web/API/GamepadHapticEffectType)
class GamepadHapticEffectType: public emlite::Val {
  explicit GamepadHapticEffectType(Handle h) noexcept;
public:
    enum Value {
        DUAL_RUMBLE,
        TRIGGER_RUMBLE,
    };

private:
    Value value_;

public:
    GamepadHapticEffectType() noexcept = delete;
    GamepadHapticEffectType(Value v) noexcept;
    explicit GamepadHapticEffectType(const emlite::Val& val) noexcept;
    static GamepadHapticEffectType take_ownership(Handle h) noexcept;
    [[nodiscard]] GamepadHapticEffectType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const GamepadHapticEffectType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const GamepadHapticEffectType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type GyroscopeLocalCoordinateSystem
/// [`GyroscopeLocalCoordinateSystem`](https://developer.mozilla.org/en-US/docs/Web/API/GyroscopeLocalCoordinateSystem)
class GyroscopeLocalCoordinateSystem: public emlite::Val {
  explicit GyroscopeLocalCoordinateSystem(Handle h) noexcept;
public:
    enum Value {
        DEVICE,
        SCREEN,
    };

private:
    Value value_;

public:
    GyroscopeLocalCoordinateSystem() noexcept = delete;
    GyroscopeLocalCoordinateSystem(Value v) noexcept;
    explicit GyroscopeLocalCoordinateSystem(const emlite::Val& val) noexcept;
    static GyroscopeLocalCoordinateSystem take_ownership(Handle h) noexcept;
    [[nodiscard]] GyroscopeLocalCoordinateSystem clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const GyroscopeLocalCoordinateSystem& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const GyroscopeLocalCoordinateSystem& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type HandwritingRecognitionType
/// [`HandwritingRecognitionType`](https://developer.mozilla.org/en-US/docs/Web/API/HandwritingRecognitionType)
class HandwritingRecognitionType: public emlite::Val {
  explicit HandwritingRecognitionType(Handle h) noexcept;
public:
    enum Value {
        TEXT,
        PER_CHARACTER,
    };

private:
    Value value_;

public:
    HandwritingRecognitionType() noexcept = delete;
    HandwritingRecognitionType(Value v) noexcept;
    explicit HandwritingRecognitionType(const emlite::Val& val) noexcept;
    static HandwritingRecognitionType take_ownership(Handle h) noexcept;
    [[nodiscard]] HandwritingRecognitionType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const HandwritingRecognitionType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const HandwritingRecognitionType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type HandwritingInputType
/// [`HandwritingInputType`](https://developer.mozilla.org/en-US/docs/Web/API/HandwritingInputType)
class HandwritingInputType: public emlite::Val {
  explicit HandwritingInputType(Handle h) noexcept;
public:
    enum Value {
        MOUSE,
        STYLUS,
        TOUCH,
    };

private:
    Value value_;

public:
    HandwritingInputType() noexcept = delete;
    HandwritingInputType(Value v) noexcept;
    explicit HandwritingInputType(const emlite::Val& val) noexcept;
    static HandwritingInputType take_ownership(Handle h) noexcept;
    [[nodiscard]] HandwritingInputType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const HandwritingInputType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const HandwritingInputType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type DocumentReadyState
/// [`DocumentReadyState`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentReadyState)
class DocumentReadyState: public emlite::Val {
  explicit DocumentReadyState(Handle h) noexcept;
public:
    enum Value {
        LOADING,
        INTERACTIVE,
        COMPLETE,
    };

private:
    Value value_;

public:
    DocumentReadyState() noexcept = delete;
    DocumentReadyState(Value v) noexcept;
    explicit DocumentReadyState(const emlite::Val& val) noexcept;
    static DocumentReadyState take_ownership(Handle h) noexcept;
    [[nodiscard]] DocumentReadyState clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const DocumentReadyState& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const DocumentReadyState& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type DocumentVisibilityState
/// [`DocumentVisibilityState`](https://developer.mozilla.org/en-US/docs/Web/API/DocumentVisibilityState)
class DocumentVisibilityState: public emlite::Val {
  explicit DocumentVisibilityState(Handle h) noexcept;
public:
    enum Value {
        VISIBLE,
        HIDDEN,
    };

private:
    Value value_;

public:
    DocumentVisibilityState() noexcept = delete;
    DocumentVisibilityState(Value v) noexcept;
    explicit DocumentVisibilityState(const emlite::Val& val) noexcept;
    static DocumentVisibilityState take_ownership(Handle h) noexcept;
    [[nodiscard]] DocumentVisibilityState clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const DocumentVisibilityState& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const DocumentVisibilityState& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type CanPlayTypeResult
/// [`CanPlayTypeResult`](https://developer.mozilla.org/en-US/docs/Web/API/CanPlayTypeResult)
class CanPlayTypeResult: public emlite::Val {
  explicit CanPlayTypeResult(Handle h) noexcept;
public:
    enum Value {
        NONE,
        MAYBE,
        PROBABLY,
    };

private:
    Value value_;

public:
    CanPlayTypeResult() noexcept = delete;
    CanPlayTypeResult(Value v) noexcept;
    explicit CanPlayTypeResult(const emlite::Val& val) noexcept;
    static CanPlayTypeResult take_ownership(Handle h) noexcept;
    [[nodiscard]] CanPlayTypeResult clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const CanPlayTypeResult& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const CanPlayTypeResult& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type TextTrackMode
/// [`TextTrackMode`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrackMode)
class TextTrackMode: public emlite::Val {
  explicit TextTrackMode(Handle h) noexcept;
public:
    enum Value {
        DISABLED,
        HIDDEN,
        SHOWING,
    };

private:
    Value value_;

public:
    TextTrackMode() noexcept = delete;
    TextTrackMode(Value v) noexcept;
    explicit TextTrackMode(const emlite::Val& val) noexcept;
    static TextTrackMode take_ownership(Handle h) noexcept;
    [[nodiscard]] TextTrackMode clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const TextTrackMode& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const TextTrackMode& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type TextTrackKind
/// [`TextTrackKind`](https://developer.mozilla.org/en-US/docs/Web/API/TextTrackKind)
class TextTrackKind: public emlite::Val {
  explicit TextTrackKind(Handle h) noexcept;
public:
    enum Value {
        SUBTITLES,
        CAPTIONS,
        DESCRIPTIONS,
        CHAPTERS,
        METADATA,
    };

private:
    Value value_;

public:
    TextTrackKind() noexcept = delete;
    TextTrackKind(Value v) noexcept;
    explicit TextTrackKind(const emlite::Val& val) noexcept;
    static TextTrackKind take_ownership(Handle h) noexcept;
    [[nodiscard]] TextTrackKind clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const TextTrackKind& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const TextTrackKind& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type SelectionMode
/// [`SelectionMode`](https://developer.mozilla.org/en-US/docs/Web/API/SelectionMode)
class SelectionMode: public emlite::Val {
  explicit SelectionMode(Handle h) noexcept;
public:
    enum Value {
        SELECT,
        START,
        END,
        PRESERVE,
    };

private:
    Value value_;

public:
    SelectionMode() noexcept = delete;
    SelectionMode(Value v) noexcept;
    explicit SelectionMode(const emlite::Val& val) noexcept;
    static SelectionMode take_ownership(Handle h) noexcept;
    [[nodiscard]] SelectionMode clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const SelectionMode& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const SelectionMode& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type PredefinedColorSpace
/// [`PredefinedColorSpace`](https://developer.mozilla.org/en-US/docs/Web/API/PredefinedColorSpace)
class PredefinedColorSpace: public emlite::Val {
  explicit PredefinedColorSpace(Handle h) noexcept;
public:
    enum Value {
        SRGB,
        DISPLAY_P3,
    };

private:
    Value value_;

public:
    PredefinedColorSpace() noexcept = delete;
    PredefinedColorSpace(Value v) noexcept;
    explicit PredefinedColorSpace(const emlite::Val& val) noexcept;
    static PredefinedColorSpace take_ownership(Handle h) noexcept;
    [[nodiscard]] PredefinedColorSpace clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const PredefinedColorSpace& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const PredefinedColorSpace& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type CanvasColorType
/// [`CanvasColorType`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasColorType)
class CanvasColorType: public emlite::Val {
  explicit CanvasColorType(Handle h) noexcept;
public:
    enum Value {
        UNORM8,
        FLOAT16,
    };

private:
    Value value_;

public:
    CanvasColorType() noexcept = delete;
    CanvasColorType(Value v) noexcept;
    explicit CanvasColorType(const emlite::Val& val) noexcept;
    static CanvasColorType take_ownership(Handle h) noexcept;
    [[nodiscard]] CanvasColorType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const CanvasColorType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const CanvasColorType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type CanvasFillRule
/// [`CanvasFillRule`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasFillRule)
class CanvasFillRule: public emlite::Val {
  explicit CanvasFillRule(Handle h) noexcept;
public:
    enum Value {
        NONZERO,
        EVENODD,
    };

private:
    Value value_;

public:
    CanvasFillRule() noexcept = delete;
    CanvasFillRule(Value v) noexcept;
    explicit CanvasFillRule(const emlite::Val& val) noexcept;
    static CanvasFillRule take_ownership(Handle h) noexcept;
    [[nodiscard]] CanvasFillRule clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const CanvasFillRule& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const CanvasFillRule& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type ImageSmoothingQuality
/// [`ImageSmoothingQuality`](https://developer.mozilla.org/en-US/docs/Web/API/ImageSmoothingQuality)
class ImageSmoothingQuality: public emlite::Val {
  explicit ImageSmoothingQuality(Handle h) noexcept;
public:
    enum Value {
        LOW,
        MEDIUM,
        HIGH,
    };

private:
    Value value_;

public:
    ImageSmoothingQuality() noexcept = delete;
    ImageSmoothingQuality(Value v) noexcept;
    explicit ImageSmoothingQuality(const emlite::Val& val) noexcept;
    static ImageSmoothingQuality take_ownership(Handle h) noexcept;
    [[nodiscard]] ImageSmoothingQuality clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const ImageSmoothingQuality& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const ImageSmoothingQuality& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type CanvasLineCap
/// [`CanvasLineCap`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasLineCap)
class CanvasLineCap: public emlite::Val {
  explicit CanvasLineCap(Handle h) noexcept;
public:
    enum Value {
        BUTT,
        ROUND,
        SQUARE,
    };

private:
    Value value_;

public:
    CanvasLineCap() noexcept = delete;
    CanvasLineCap(Value v) noexcept;
    explicit CanvasLineCap(const emlite::Val& val) noexcept;
    static CanvasLineCap take_ownership(Handle h) noexcept;
    [[nodiscard]] CanvasLineCap clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const CanvasLineCap& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const CanvasLineCap& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type CanvasLineJoin
/// [`CanvasLineJoin`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasLineJoin)
class CanvasLineJoin: public emlite::Val {
  explicit CanvasLineJoin(Handle h) noexcept;
public:
    enum Value {
        ROUND,
        BEVEL,
        MITER,
    };

private:
    Value value_;

public:
    CanvasLineJoin() noexcept = delete;
    CanvasLineJoin(Value v) noexcept;
    explicit CanvasLineJoin(const emlite::Val& val) noexcept;
    static CanvasLineJoin take_ownership(Handle h) noexcept;
    [[nodiscard]] CanvasLineJoin clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const CanvasLineJoin& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const CanvasLineJoin& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type CanvasTextAlign
/// [`CanvasTextAlign`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasTextAlign)
class CanvasTextAlign: public emlite::Val {
  explicit CanvasTextAlign(Handle h) noexcept;
public:
    enum Value {
        START,
        END,
        LEFT,
        RIGHT,
        CENTER,
    };

private:
    Value value_;

public:
    CanvasTextAlign() noexcept = delete;
    CanvasTextAlign(Value v) noexcept;
    explicit CanvasTextAlign(const emlite::Val& val) noexcept;
    static CanvasTextAlign take_ownership(Handle h) noexcept;
    [[nodiscard]] CanvasTextAlign clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const CanvasTextAlign& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const CanvasTextAlign& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type CanvasTextBaseline
/// [`CanvasTextBaseline`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasTextBaseline)
class CanvasTextBaseline: public emlite::Val {
  explicit CanvasTextBaseline(Handle h) noexcept;
public:
    enum Value {
        TOP,
        HANGING,
        MIDDLE,
        ALPHABETIC,
        IDEOGRAPHIC,
        BOTTOM,
    };

private:
    Value value_;

public:
    CanvasTextBaseline() noexcept = delete;
    CanvasTextBaseline(Value v) noexcept;
    explicit CanvasTextBaseline(const emlite::Val& val) noexcept;
    static CanvasTextBaseline take_ownership(Handle h) noexcept;
    [[nodiscard]] CanvasTextBaseline clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const CanvasTextBaseline& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const CanvasTextBaseline& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type CanvasDirection
/// [`CanvasDirection`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasDirection)
class CanvasDirection: public emlite::Val {
  explicit CanvasDirection(Handle h) noexcept;
public:
    enum Value {
        LTR,
        RTL,
        INHERIT,
    };

private:
    Value value_;

public:
    CanvasDirection() noexcept = delete;
    CanvasDirection(Value v) noexcept;
    explicit CanvasDirection(const emlite::Val& val) noexcept;
    static CanvasDirection take_ownership(Handle h) noexcept;
    [[nodiscard]] CanvasDirection clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const CanvasDirection& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const CanvasDirection& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type CanvasFontKerning
/// [`CanvasFontKerning`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasFontKerning)
class CanvasFontKerning: public emlite::Val {
  explicit CanvasFontKerning(Handle h) noexcept;
public:
    enum Value {
        AUTO_,
        NORMAL,
        NONE,
    };

private:
    Value value_;

public:
    CanvasFontKerning() noexcept = delete;
    CanvasFontKerning(Value v) noexcept;
    explicit CanvasFontKerning(const emlite::Val& val) noexcept;
    static CanvasFontKerning take_ownership(Handle h) noexcept;
    [[nodiscard]] CanvasFontKerning clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const CanvasFontKerning& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const CanvasFontKerning& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type CanvasFontStretch
/// [`CanvasFontStretch`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasFontStretch)
class CanvasFontStretch: public emlite::Val {
  explicit CanvasFontStretch(Handle h) noexcept;
public:
    enum Value {
        ULTRA_CONDENSED,
        EXTRA_CONDENSED,
        CONDENSED,
        SEMI_CONDENSED,
        NORMAL,
        SEMI_EXPANDED,
        EXPANDED,
        EXTRA_EXPANDED,
        ULTRA_EXPANDED,
    };

private:
    Value value_;

public:
    CanvasFontStretch() noexcept = delete;
    CanvasFontStretch(Value v) noexcept;
    explicit CanvasFontStretch(const emlite::Val& val) noexcept;
    static CanvasFontStretch take_ownership(Handle h) noexcept;
    [[nodiscard]] CanvasFontStretch clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const CanvasFontStretch& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const CanvasFontStretch& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type CanvasFontVariantCaps
/// [`CanvasFontVariantCaps`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasFontVariantCaps)
class CanvasFontVariantCaps: public emlite::Val {
  explicit CanvasFontVariantCaps(Handle h) noexcept;
public:
    enum Value {
        NORMAL,
        SMALL_CAPS,
        ALL_SMALL_CAPS,
        PETITE_CAPS,
        ALL_PETITE_CAPS,
        UNICASE,
        TITLING_CAPS,
    };

private:
    Value value_;

public:
    CanvasFontVariantCaps() noexcept = delete;
    CanvasFontVariantCaps(Value v) noexcept;
    explicit CanvasFontVariantCaps(const emlite::Val& val) noexcept;
    static CanvasFontVariantCaps take_ownership(Handle h) noexcept;
    [[nodiscard]] CanvasFontVariantCaps clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const CanvasFontVariantCaps& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const CanvasFontVariantCaps& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type CanvasTextRendering
/// [`CanvasTextRendering`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasTextRendering)
class CanvasTextRendering: public emlite::Val {
  explicit CanvasTextRendering(Handle h) noexcept;
public:
    enum Value {
        AUTO_,
        OPTIMIZESPEED,
        OPTIMIZELEGIBILITY,
        GEOMETRICPRECISION,
    };

private:
    Value value_;

public:
    CanvasTextRendering() noexcept = delete;
    CanvasTextRendering(Value v) noexcept;
    explicit CanvasTextRendering(const emlite::Val& val) noexcept;
    static CanvasTextRendering take_ownership(Handle h) noexcept;
    [[nodiscard]] CanvasTextRendering clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const CanvasTextRendering& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const CanvasTextRendering& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type OffscreenRenderingContextId
/// [`OffscreenRenderingContextId`](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenRenderingContextId)
class OffscreenRenderingContextId: public emlite::Val {
  explicit OffscreenRenderingContextId(Handle h) noexcept;
public:
    enum Value {
        _2D,
        BITMAPRENDERER,
        WEBGL,
        WEBGL2,
        WEBGPU,
    };

private:
    Value value_;

public:
    OffscreenRenderingContextId() noexcept = delete;
    OffscreenRenderingContextId(Value v) noexcept;
    explicit OffscreenRenderingContextId(const emlite::Val& val) noexcept;
    static OffscreenRenderingContextId take_ownership(Handle h) noexcept;
    [[nodiscard]] OffscreenRenderingContextId clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const OffscreenRenderingContextId& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const OffscreenRenderingContextId& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type ScrollRestoration
/// [`ScrollRestoration`](https://developer.mozilla.org/en-US/docs/Web/API/ScrollRestoration)
class ScrollRestoration: public emlite::Val {
  explicit ScrollRestoration(Handle h) noexcept;
public:
    enum Value {
        AUTO_,
        MANUAL,
    };

private:
    Value value_;

public:
    ScrollRestoration() noexcept = delete;
    ScrollRestoration(Value v) noexcept;
    explicit ScrollRestoration(const emlite::Val& val) noexcept;
    static ScrollRestoration take_ownership(Handle h) noexcept;
    [[nodiscard]] ScrollRestoration clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const ScrollRestoration& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const ScrollRestoration& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type NavigationHistoryBehavior
/// [`NavigationHistoryBehavior`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationHistoryBehavior)
class NavigationHistoryBehavior: public emlite::Val {
  explicit NavigationHistoryBehavior(Handle h) noexcept;
public:
    enum Value {
        AUTO_,
        PUSH,
        REPLACE,
    };

private:
    Value value_;

public:
    NavigationHistoryBehavior() noexcept = delete;
    NavigationHistoryBehavior(Value v) noexcept;
    explicit NavigationHistoryBehavior(const emlite::Val& val) noexcept;
    static NavigationHistoryBehavior take_ownership(Handle h) noexcept;
    [[nodiscard]] NavigationHistoryBehavior clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const NavigationHistoryBehavior& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const NavigationHistoryBehavior& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type NavigationType
/// [`NavigationType`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationType)
class NavigationType: public emlite::Val {
  explicit NavigationType(Handle h) noexcept;
public:
    enum Value {
        PUSH,
        REPLACE,
        RELOAD,
        TRAVERSE,
    };

private:
    Value value_;

public:
    NavigationType() noexcept = delete;
    NavigationType(Value v) noexcept;
    explicit NavigationType(const emlite::Val& val) noexcept;
    static NavigationType take_ownership(Handle h) noexcept;
    [[nodiscard]] NavigationType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const NavigationType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const NavigationType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type NavigationFocusReset
/// [`NavigationFocusReset`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationFocusReset)
class NavigationFocusReset: public emlite::Val {
  explicit NavigationFocusReset(Handle h) noexcept;
public:
    enum Value {
        AFTER_TRANSITION,
        MANUAL,
    };

private:
    Value value_;

public:
    NavigationFocusReset() noexcept = delete;
    NavigationFocusReset(Value v) noexcept;
    explicit NavigationFocusReset(const emlite::Val& val) noexcept;
    static NavigationFocusReset take_ownership(Handle h) noexcept;
    [[nodiscard]] NavigationFocusReset clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const NavigationFocusReset& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const NavigationFocusReset& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type NavigationScrollBehavior
/// [`NavigationScrollBehavior`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationScrollBehavior)
class NavigationScrollBehavior: public emlite::Val {
  explicit NavigationScrollBehavior(Handle h) noexcept;
public:
    enum Value {
        AFTER_TRANSITION,
        MANUAL,
    };

private:
    Value value_;

public:
    NavigationScrollBehavior() noexcept = delete;
    NavigationScrollBehavior(Value v) noexcept;
    explicit NavigationScrollBehavior(const emlite::Val& val) noexcept;
    static NavigationScrollBehavior take_ownership(Handle h) noexcept;
    [[nodiscard]] NavigationScrollBehavior clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const NavigationScrollBehavior& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const NavigationScrollBehavior& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type DOMParserSupportedType
/// [`DOMParserSupportedType`](https://developer.mozilla.org/en-US/docs/Web/API/DOMParserSupportedType)
class DOMParserSupportedType: public emlite::Val {
  explicit DOMParserSupportedType(Handle h) noexcept;
public:
    enum Value {
        TEXT_HTML,
        TEXT_XML,
        APPLICATION_XML,
        APPLICATION_XHTML_XML,
        IMAGE_SVG_XML,
    };

private:
    Value value_;

public:
    DOMParserSupportedType() noexcept = delete;
    DOMParserSupportedType(Value v) noexcept;
    explicit DOMParserSupportedType(const emlite::Val& val) noexcept;
    static DOMParserSupportedType take_ownership(Handle h) noexcept;
    [[nodiscard]] DOMParserSupportedType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const DOMParserSupportedType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const DOMParserSupportedType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type ImageDataPixelFormat
/// [`ImageDataPixelFormat`](https://developer.mozilla.org/en-US/docs/Web/API/ImageDataPixelFormat)
class ImageDataPixelFormat: public emlite::Val {
  explicit ImageDataPixelFormat(Handle h) noexcept;
public:
    enum Value {
        RGBA_UNORM8,
        RGBA_FLOAT16,
    };

private:
    Value value_;

public:
    ImageDataPixelFormat() noexcept = delete;
    ImageDataPixelFormat(Value v) noexcept;
    explicit ImageDataPixelFormat(const emlite::Val& val) noexcept;
    static ImageDataPixelFormat take_ownership(Handle h) noexcept;
    [[nodiscard]] ImageDataPixelFormat clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const ImageDataPixelFormat& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const ImageDataPixelFormat& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type ImageOrientation
/// [`ImageOrientation`](https://developer.mozilla.org/en-US/docs/Web/API/ImageOrientation)
class ImageOrientation: public emlite::Val {
  explicit ImageOrientation(Handle h) noexcept;
public:
    enum Value {
        FROM_IMAGE,
        FLIPY,
    };

private:
    Value value_;

public:
    ImageOrientation() noexcept = delete;
    ImageOrientation(Value v) noexcept;
    explicit ImageOrientation(const emlite::Val& val) noexcept;
    static ImageOrientation take_ownership(Handle h) noexcept;
    [[nodiscard]] ImageOrientation clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const ImageOrientation& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const ImageOrientation& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type PremultiplyAlpha
/// [`PremultiplyAlpha`](https://developer.mozilla.org/en-US/docs/Web/API/PremultiplyAlpha)
class PremultiplyAlpha: public emlite::Val {
  explicit PremultiplyAlpha(Handle h) noexcept;
public:
    enum Value {
        NONE,
        PREMULTIPLY,
        DEFAULT_,
    };

private:
    Value value_;

public:
    PremultiplyAlpha() noexcept = delete;
    PremultiplyAlpha(Value v) noexcept;
    explicit PremultiplyAlpha(const emlite::Val& val) noexcept;
    static PremultiplyAlpha take_ownership(Handle h) noexcept;
    [[nodiscard]] PremultiplyAlpha clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const PremultiplyAlpha& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const PremultiplyAlpha& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type ColorSpaceConversion
/// [`ColorSpaceConversion`](https://developer.mozilla.org/en-US/docs/Web/API/ColorSpaceConversion)
class ColorSpaceConversion: public emlite::Val {
  explicit ColorSpaceConversion(Handle h) noexcept;
public:
    enum Value {
        NONE,
        DEFAULT_,
    };

private:
    Value value_;

public:
    ColorSpaceConversion() noexcept = delete;
    ColorSpaceConversion(Value v) noexcept;
    explicit ColorSpaceConversion(const emlite::Val& val) noexcept;
    static ColorSpaceConversion take_ownership(Handle h) noexcept;
    [[nodiscard]] ColorSpaceConversion clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const ColorSpaceConversion& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const ColorSpaceConversion& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type ResizeQuality
/// [`ResizeQuality`](https://developer.mozilla.org/en-US/docs/Web/API/ResizeQuality)
class ResizeQuality: public emlite::Val {
  explicit ResizeQuality(Handle h) noexcept;
public:
    enum Value {
        PIXELATED,
        LOW,
        MEDIUM,
        HIGH,
    };

private:
    Value value_;

public:
    ResizeQuality() noexcept = delete;
    ResizeQuality(Value v) noexcept;
    explicit ResizeQuality(const emlite::Val& val) noexcept;
    static ResizeQuality take_ownership(Handle h) noexcept;
    [[nodiscard]] ResizeQuality clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const ResizeQuality& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const ResizeQuality& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type WorkerType
/// [`WorkerType`](https://developer.mozilla.org/en-US/docs/Web/API/WorkerType)
class WorkerType: public emlite::Val {
  explicit WorkerType(Handle h) noexcept;
public:
    enum Value {
        CLASSIC,
        MODULE_,
    };

private:
    Value value_;

public:
    WorkerType() noexcept = delete;
    WorkerType(Value v) noexcept;
    explicit WorkerType(const emlite::Val& val) noexcept;
    static WorkerType take_ownership(Handle h) noexcept;
    [[nodiscard]] WorkerType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const WorkerType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const WorkerType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type UserIdleState
/// [`UserIdleState`](https://developer.mozilla.org/en-US/docs/Web/API/UserIdleState)
class UserIdleState: public emlite::Val {
  explicit UserIdleState(Handle h) noexcept;
public:
    enum Value {
        ACTIVE,
        IDLE,
    };

private:
    Value value_;

public:
    UserIdleState() noexcept = delete;
    UserIdleState(Value v) noexcept;
    explicit UserIdleState(const emlite::Val& val) noexcept;
    static UserIdleState take_ownership(Handle h) noexcept;
    [[nodiscard]] UserIdleState clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const UserIdleState& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const UserIdleState& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type ScreenIdleState
/// [`ScreenIdleState`](https://developer.mozilla.org/en-US/docs/Web/API/ScreenIdleState)
class ScreenIdleState: public emlite::Val {
  explicit ScreenIdleState(Handle h) noexcept;
public:
    enum Value {
        LOCKED,
        UNLOCKED,
    };

private:
    Value value_;

public:
    ScreenIdleState() noexcept = delete;
    ScreenIdleState(Value v) noexcept;
    explicit ScreenIdleState(const emlite::Val& val) noexcept;
    static ScreenIdleState take_ownership(Handle h) noexcept;
    [[nodiscard]] ScreenIdleState clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const ScreenIdleState& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const ScreenIdleState& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RedEyeReduction
/// [`RedEyeReduction`](https://developer.mozilla.org/en-US/docs/Web/API/RedEyeReduction)
class RedEyeReduction: public emlite::Val {
  explicit RedEyeReduction(Handle h) noexcept;
public:
    enum Value {
        NEVER,
        ALWAYS,
        CONTROLLABLE,
    };

private:
    Value value_;

public:
    RedEyeReduction() noexcept = delete;
    RedEyeReduction(Value v) noexcept;
    explicit RedEyeReduction(const emlite::Val& val) noexcept;
    static RedEyeReduction take_ownership(Handle h) noexcept;
    [[nodiscard]] RedEyeReduction clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RedEyeReduction& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RedEyeReduction& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type FillLightMode
/// [`FillLightMode`](https://developer.mozilla.org/en-US/docs/Web/API/FillLightMode)
class FillLightMode: public emlite::Val {
  explicit FillLightMode(Handle h) noexcept;
public:
    enum Value {
        AUTO_,
        OFF,
        FLASH,
    };

private:
    Value value_;

public:
    FillLightMode() noexcept = delete;
    FillLightMode(Value v) noexcept;
    explicit FillLightMode(const emlite::Val& val) noexcept;
    static FillLightMode take_ownership(Handle h) noexcept;
    [[nodiscard]] FillLightMode clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const FillLightMode& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const FillLightMode& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type MeteringMode
/// [`MeteringMode`](https://developer.mozilla.org/en-US/docs/Web/API/MeteringMode)
class MeteringMode: public emlite::Val {
  explicit MeteringMode(Handle h) noexcept;
public:
    enum Value {
        NONE,
        MANUAL,
        SINGLE_SHOT,
        CONTINUOUS,
    };

private:
    Value value_;

public:
    MeteringMode() noexcept = delete;
    MeteringMode(Value v) noexcept;
    explicit MeteringMode(const emlite::Val& val) noexcept;
    static MeteringMode take_ownership(Handle h) noexcept;
    [[nodiscard]] MeteringMode clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const MeteringMode& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const MeteringMode& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type LoginStatus
/// [`LoginStatus`](https://developer.mozilla.org/en-US/docs/Web/API/LoginStatus)
class LoginStatus: public emlite::Val {
  explicit LoginStatus(Handle h) noexcept;
public:
    enum Value {
        LOGGED_IN,
        LOGGED_OUT,
    };

private:
    Value value_;

public:
    LoginStatus() noexcept = delete;
    LoginStatus(Value v) noexcept;
    explicit LoginStatus(const emlite::Val& val) noexcept;
    static LoginStatus take_ownership(Handle h) noexcept;
    [[nodiscard]] LoginStatus clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const LoginStatus& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const LoginStatus& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type ScriptInvokerType
/// [`ScriptInvokerType`](https://developer.mozilla.org/en-US/docs/Web/API/ScriptInvokerType)
class ScriptInvokerType: public emlite::Val {
  explicit ScriptInvokerType(Handle h) noexcept;
public:
    enum Value {
        CLASSIC_SCRIPT,
        MODULE_SCRIPT,
        EVENT_LISTENER,
        USER_CALLBACK,
        RESOLVE_PROMISE,
        REJECT_PROMISE,
    };

private:
    Value value_;

public:
    ScriptInvokerType() noexcept = delete;
    ScriptInvokerType(Value v) noexcept;
    explicit ScriptInvokerType(const emlite::Val& val) noexcept;
    static ScriptInvokerType take_ownership(Handle h) noexcept;
    [[nodiscard]] ScriptInvokerType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const ScriptInvokerType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const ScriptInvokerType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type ScriptWindowAttribution
/// [`ScriptWindowAttribution`](https://developer.mozilla.org/en-US/docs/Web/API/ScriptWindowAttribution)
class ScriptWindowAttribution: public emlite::Val {
  explicit ScriptWindowAttribution(Handle h) noexcept;
public:
    enum Value {
        SELF,
        DESCENDANT,
        ANCESTOR,
        SAME_PAGE,
        OTHER,
    };

private:
    Value value_;

public:
    ScriptWindowAttribution() noexcept = delete;
    ScriptWindowAttribution(Value v) noexcept;
    explicit ScriptWindowAttribution(const emlite::Val& val) noexcept;
    static ScriptWindowAttribution take_ownership(Handle h) noexcept;
    [[nodiscard]] ScriptWindowAttribution clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const ScriptWindowAttribution& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const ScriptWindowAttribution& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type MagnetometerLocalCoordinateSystem
/// [`MagnetometerLocalCoordinateSystem`](https://developer.mozilla.org/en-US/docs/Web/API/MagnetometerLocalCoordinateSystem)
class MagnetometerLocalCoordinateSystem: public emlite::Val {
  explicit MagnetometerLocalCoordinateSystem(Handle h) noexcept;
public:
    enum Value {
        DEVICE,
        SCREEN,
    };

private:
    Value value_;

public:
    MagnetometerLocalCoordinateSystem() noexcept = delete;
    MagnetometerLocalCoordinateSystem(Value v) noexcept;
    explicit MagnetometerLocalCoordinateSystem(const emlite::Val& val) noexcept;
    static MagnetometerLocalCoordinateSystem take_ownership(Handle h) noexcept;
    [[nodiscard]] MagnetometerLocalCoordinateSystem clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const MagnetometerLocalCoordinateSystem& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const MagnetometerLocalCoordinateSystem& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type AppBannerPromptOutcome
/// [`AppBannerPromptOutcome`](https://developer.mozilla.org/en-US/docs/Web/API/AppBannerPromptOutcome)
class AppBannerPromptOutcome: public emlite::Val {
  explicit AppBannerPromptOutcome(Handle h) noexcept;
public:
    enum Value {
        ACCEPTED,
        DISMISSED,
    };

private:
    Value value_;

public:
    AppBannerPromptOutcome() noexcept = delete;
    AppBannerPromptOutcome(Value v) noexcept;
    explicit AppBannerPromptOutcome(const emlite::Val& val) noexcept;
    static AppBannerPromptOutcome take_ownership(Handle h) noexcept;
    [[nodiscard]] AppBannerPromptOutcome clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const AppBannerPromptOutcome& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const AppBannerPromptOutcome& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type MediaDecodingType
/// [`MediaDecodingType`](https://developer.mozilla.org/en-US/docs/Web/API/MediaDecodingType)
class MediaDecodingType: public emlite::Val {
  explicit MediaDecodingType(Handle h) noexcept;
public:
    enum Value {
        FILE,
        MEDIA_SOURCE,
        WEBRTC,
    };

private:
    Value value_;

public:
    MediaDecodingType() noexcept = delete;
    MediaDecodingType(Value v) noexcept;
    explicit MediaDecodingType(const emlite::Val& val) noexcept;
    static MediaDecodingType take_ownership(Handle h) noexcept;
    [[nodiscard]] MediaDecodingType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const MediaDecodingType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const MediaDecodingType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type MediaEncodingType
/// [`MediaEncodingType`](https://developer.mozilla.org/en-US/docs/Web/API/MediaEncodingType)
class MediaEncodingType: public emlite::Val {
  explicit MediaEncodingType(Handle h) noexcept;
public:
    enum Value {
        RECORD,
        WEBRTC,
    };

private:
    Value value_;

public:
    MediaEncodingType() noexcept = delete;
    MediaEncodingType(Value v) noexcept;
    explicit MediaEncodingType(const emlite::Val& val) noexcept;
    static MediaEncodingType take_ownership(Handle h) noexcept;
    [[nodiscard]] MediaEncodingType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const MediaEncodingType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const MediaEncodingType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type HdrMetadataType
/// [`HdrMetadataType`](https://developer.mozilla.org/en-US/docs/Web/API/HdrMetadataType)
class HdrMetadataType: public emlite::Val {
  explicit HdrMetadataType(Handle h) noexcept;
public:
    enum Value {
        SMPTEST2086,
        SMPTEST2094_10,
        SMPTEST2094_40,
    };

private:
    Value value_;

public:
    HdrMetadataType() noexcept = delete;
    HdrMetadataType(Value v) noexcept;
    explicit HdrMetadataType(const emlite::Val& val) noexcept;
    static HdrMetadataType take_ownership(Handle h) noexcept;
    [[nodiscard]] HdrMetadataType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const HdrMetadataType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const HdrMetadataType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type ColorGamut
/// [`ColorGamut`](https://developer.mozilla.org/en-US/docs/Web/API/ColorGamut)
class ColorGamut: public emlite::Val {
  explicit ColorGamut(Handle h) noexcept;
public:
    enum Value {
        SRGB,
        P3,
        REC2020,
    };

private:
    Value value_;

public:
    ColorGamut() noexcept = delete;
    ColorGamut(Value v) noexcept;
    explicit ColorGamut(const emlite::Val& val) noexcept;
    static ColorGamut take_ownership(Handle h) noexcept;
    [[nodiscard]] ColorGamut clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const ColorGamut& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const ColorGamut& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type TransferFunction
/// [`TransferFunction`](https://developer.mozilla.org/en-US/docs/Web/API/TransferFunction)
class TransferFunction: public emlite::Val {
  explicit TransferFunction(Handle h) noexcept;
public:
    enum Value {
        SRGB,
        PQ,
        HLG,
    };

private:
    Value value_;

public:
    TransferFunction() noexcept = delete;
    TransferFunction(Value v) noexcept;
    explicit TransferFunction(const emlite::Val& val) noexcept;
    static TransferFunction take_ownership(Handle h) noexcept;
    [[nodiscard]] TransferFunction clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const TransferFunction& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const TransferFunction& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type ReadyState
/// [`ReadyState`](https://developer.mozilla.org/en-US/docs/Web/API/ReadyState)
class ReadyState: public emlite::Val {
  explicit ReadyState(Handle h) noexcept;
public:
    enum Value {
        CLOSED,
        OPEN,
        ENDED,
    };

private:
    Value value_;

public:
    ReadyState() noexcept = delete;
    ReadyState(Value v) noexcept;
    explicit ReadyState(const emlite::Val& val) noexcept;
    static ReadyState take_ownership(Handle h) noexcept;
    [[nodiscard]] ReadyState clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const ReadyState& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const ReadyState& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type EndOfStreamError
/// [`EndOfStreamError`](https://developer.mozilla.org/en-US/docs/Web/API/EndOfStreamError)
class EndOfStreamError: public emlite::Val {
  explicit EndOfStreamError(Handle h) noexcept;
public:
    enum Value {
        NETWORK,
        DECODE,
    };

private:
    Value value_;

public:
    EndOfStreamError() noexcept = delete;
    EndOfStreamError(Value v) noexcept;
    explicit EndOfStreamError(const emlite::Val& val) noexcept;
    static EndOfStreamError take_ownership(Handle h) noexcept;
    [[nodiscard]] EndOfStreamError clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const EndOfStreamError& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const EndOfStreamError& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type AppendMode
/// [`AppendMode`](https://developer.mozilla.org/en-US/docs/Web/API/AppendMode)
class AppendMode: public emlite::Val {
  explicit AppendMode(Handle h) noexcept;
public:
    enum Value {
        SEGMENTS,
        SEQUENCE,
    };

private:
    Value value_;

public:
    AppendMode() noexcept = delete;
    AppendMode(Value v) noexcept;
    explicit AppendMode(const emlite::Val& val) noexcept;
    static AppendMode take_ownership(Handle h) noexcept;
    [[nodiscard]] AppendMode clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const AppendMode& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const AppendMode& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type MockCapturePromptResult
/// [`MockCapturePromptResult`](https://developer.mozilla.org/en-US/docs/Web/API/MockCapturePromptResult)
class MockCapturePromptResult: public emlite::Val {
  explicit MockCapturePromptResult(Handle h) noexcept;
public:
    enum Value {
        GRANTED,
        DENIED,
    };

private:
    Value value_;

public:
    MockCapturePromptResult() noexcept = delete;
    MockCapturePromptResult(Value v) noexcept;
    explicit MockCapturePromptResult(const emlite::Val& val) noexcept;
    static MockCapturePromptResult take_ownership(Handle h) noexcept;
    [[nodiscard]] MockCapturePromptResult clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const MockCapturePromptResult& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const MockCapturePromptResult& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type CaptureAction
/// [`CaptureAction`](https://developer.mozilla.org/en-US/docs/Web/API/CaptureAction)
class CaptureAction: public emlite::Val {
  explicit CaptureAction(Handle h) noexcept;
public:
    enum Value {
        NEXT,
        PREVIOUS,
        FIRST,
        LAST,
    };

private:
    Value value_;

public:
    CaptureAction() noexcept = delete;
    CaptureAction(Value v) noexcept;
    explicit CaptureAction(const emlite::Val& val) noexcept;
    static CaptureAction take_ownership(Handle h) noexcept;
    [[nodiscard]] CaptureAction clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const CaptureAction& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const CaptureAction& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type MediaStreamTrackState
/// [`MediaStreamTrackState`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrackState)
class MediaStreamTrackState: public emlite::Val {
  explicit MediaStreamTrackState(Handle h) noexcept;
public:
    enum Value {
        LIVE,
        ENDED,
    };

private:
    Value value_;

public:
    MediaStreamTrackState() noexcept = delete;
    MediaStreamTrackState(Value v) noexcept;
    explicit MediaStreamTrackState(const emlite::Val& val) noexcept;
    static MediaStreamTrackState take_ownership(Handle h) noexcept;
    [[nodiscard]] MediaStreamTrackState clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const MediaStreamTrackState& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const MediaStreamTrackState& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type VideoFacingModeEnum
/// [`VideoFacingModeEnum`](https://developer.mozilla.org/en-US/docs/Web/API/VideoFacingModeEnum)
class VideoFacingModeEnum: public emlite::Val {
  explicit VideoFacingModeEnum(Handle h) noexcept;
public:
    enum Value {
        USER,
        ENVIRONMENT,
        LEFT,
        RIGHT,
    };

private:
    Value value_;

public:
    VideoFacingModeEnum() noexcept = delete;
    VideoFacingModeEnum(Value v) noexcept;
    explicit VideoFacingModeEnum(const emlite::Val& val) noexcept;
    static VideoFacingModeEnum take_ownership(Handle h) noexcept;
    [[nodiscard]] VideoFacingModeEnum clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const VideoFacingModeEnum& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const VideoFacingModeEnum& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type VideoResizeModeEnum
/// [`VideoResizeModeEnum`](https://developer.mozilla.org/en-US/docs/Web/API/VideoResizeModeEnum)
class VideoResizeModeEnum: public emlite::Val {
  explicit VideoResizeModeEnum(Handle h) noexcept;
public:
    enum Value {
        NONE,
        CROP_AND_SCALE,
    };

private:
    Value value_;

public:
    VideoResizeModeEnum() noexcept = delete;
    VideoResizeModeEnum(Value v) noexcept;
    explicit VideoResizeModeEnum(const emlite::Val& val) noexcept;
    static VideoResizeModeEnum take_ownership(Handle h) noexcept;
    [[nodiscard]] VideoResizeModeEnum clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const VideoResizeModeEnum& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const VideoResizeModeEnum& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type EchoCancellationModeEnum
/// [`EchoCancellationModeEnum`](https://developer.mozilla.org/en-US/docs/Web/API/EchoCancellationModeEnum)
class EchoCancellationModeEnum: public emlite::Val {
  explicit EchoCancellationModeEnum(Handle h) noexcept;
public:
    enum Value {
        ALL,
        REMOTE_ONLY,
    };

private:
    Value value_;

public:
    EchoCancellationModeEnum() noexcept = delete;
    EchoCancellationModeEnum(Value v) noexcept;
    explicit EchoCancellationModeEnum(const emlite::Val& val) noexcept;
    static EchoCancellationModeEnum take_ownership(Handle h) noexcept;
    [[nodiscard]] EchoCancellationModeEnum clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const EchoCancellationModeEnum& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const EchoCancellationModeEnum& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type MediaDeviceKind
/// [`MediaDeviceKind`](https://developer.mozilla.org/en-US/docs/Web/API/MediaDeviceKind)
class MediaDeviceKind: public emlite::Val {
  explicit MediaDeviceKind(Handle h) noexcept;
public:
    enum Value {
        AUDIOINPUT,
        AUDIOOUTPUT,
        VIDEOINPUT,
    };

private:
    Value value_;

public:
    MediaDeviceKind() noexcept = delete;
    MediaDeviceKind(Value v) noexcept;
    explicit MediaDeviceKind(const emlite::Val& val) noexcept;
    static MediaDeviceKind take_ownership(Handle h) noexcept;
    [[nodiscard]] MediaDeviceKind clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const MediaDeviceKind& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const MediaDeviceKind& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type MediaSessionPlaybackState
/// [`MediaSessionPlaybackState`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSessionPlaybackState)
class MediaSessionPlaybackState: public emlite::Val {
  explicit MediaSessionPlaybackState(Handle h) noexcept;
public:
    enum Value {
        NONE,
        PAUSED,
        PLAYING,
    };

private:
    Value value_;

public:
    MediaSessionPlaybackState() noexcept = delete;
    MediaSessionPlaybackState(Value v) noexcept;
    explicit MediaSessionPlaybackState(const emlite::Val& val) noexcept;
    static MediaSessionPlaybackState take_ownership(Handle h) noexcept;
    [[nodiscard]] MediaSessionPlaybackState clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const MediaSessionPlaybackState& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const MediaSessionPlaybackState& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type MediaSessionAction
/// [`MediaSessionAction`](https://developer.mozilla.org/en-US/docs/Web/API/MediaSessionAction)
class MediaSessionAction: public emlite::Val {
  explicit MediaSessionAction(Handle h) noexcept;
public:
    enum Value {
        PLAY,
        PAUSE,
        SEEKBACKWARD,
        SEEKFORWARD,
        PREVIOUSTRACK,
        NEXTTRACK,
        SKIPAD,
        STOP,
        SEEKTO,
        TOGGLEMICROPHONE,
        TOGGLECAMERA,
        TOGGLESCREENSHARE,
        HANGUP,
        PREVIOUSSLIDE,
        NEXTSLIDE,
        ENTERPICTUREINPICTURE,
        VOICEACTIVITY,
    };

private:
    Value value_;

public:
    MediaSessionAction() noexcept = delete;
    MediaSessionAction(Value v) noexcept;
    explicit MediaSessionAction(const emlite::Val& val) noexcept;
    static MediaSessionAction take_ownership(Handle h) noexcept;
    [[nodiscard]] MediaSessionAction clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const MediaSessionAction& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const MediaSessionAction& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type BitrateMode
/// [`BitrateMode`](https://developer.mozilla.org/en-US/docs/Web/API/BitrateMode)
class BitrateMode: public emlite::Val {
  explicit BitrateMode(Handle h) noexcept;
public:
    enum Value {
        CONSTANT,
        VARIABLE,
    };

private:
    Value value_;

public:
    BitrateMode() noexcept = delete;
    BitrateMode(Value v) noexcept;
    explicit BitrateMode(const emlite::Val& val) noexcept;
    static BitrateMode take_ownership(Handle h) noexcept;
    [[nodiscard]] BitrateMode clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const BitrateMode& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const BitrateMode& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RecordingState
/// [`RecordingState`](https://developer.mozilla.org/en-US/docs/Web/API/RecordingState)
class RecordingState: public emlite::Val {
  explicit RecordingState(Handle h) noexcept;
public:
    enum Value {
        INACTIVE,
        RECORDING,
        PAUSED,
    };

private:
    Value value_;

public:
    RecordingState() noexcept = delete;
    RecordingState(Value v) noexcept;
    explicit RecordingState(const emlite::Val& val) noexcept;
    static RecordingState take_ownership(Handle h) noexcept;
    [[nodiscard]] RecordingState clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RecordingState& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RecordingState& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RTCDegradationPreference
/// [`RTCDegradationPreference`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDegradationPreference)
class RTCDegradationPreference: public emlite::Val {
  explicit RTCDegradationPreference(Handle h) noexcept;
public:
    enum Value {
        MAINTAIN_FRAMERATE,
        MAINTAIN_RESOLUTION,
        BALANCED,
    };

private:
    Value value_;

public:
    RTCDegradationPreference() noexcept = delete;
    RTCDegradationPreference(Value v) noexcept;
    explicit RTCDegradationPreference(const emlite::Val& val) noexcept;
    static RTCDegradationPreference take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCDegradationPreference clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RTCDegradationPreference& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RTCDegradationPreference& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type NavigationTimingType
/// [`NavigationTimingType`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationTimingType)
class NavigationTimingType: public emlite::Val {
  explicit NavigationTimingType(Handle h) noexcept;
public:
    enum Value {
        NAVIGATE,
        RELOAD,
        BACK_FORWARD,
        PRERENDER,
    };

private:
    Value value_;

public:
    NavigationTimingType() noexcept = delete;
    NavigationTimingType(Value v) noexcept;
    explicit NavigationTimingType(const emlite::Val& val) noexcept;
    static NavigationTimingType take_ownership(Handle h) noexcept;
    [[nodiscard]] NavigationTimingType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const NavigationTimingType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const NavigationTimingType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type ConnectionType
/// [`ConnectionType`](https://developer.mozilla.org/en-US/docs/Web/API/ConnectionType)
class ConnectionType: public emlite::Val {
  explicit ConnectionType(Handle h) noexcept;
public:
    enum Value {
        BLUETOOTH,
        CELLULAR,
        ETHERNET,
        MIXED,
        NONE,
        OTHER,
        UNKNOWN,
        WIFI,
        WIMAX,
    };

private:
    Value value_;

public:
    ConnectionType() noexcept = delete;
    ConnectionType(Value v) noexcept;
    explicit ConnectionType(const emlite::Val& val) noexcept;
    static ConnectionType take_ownership(Handle h) noexcept;
    [[nodiscard]] ConnectionType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const ConnectionType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const ConnectionType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type EffectiveConnectionType
/// [`EffectiveConnectionType`](https://developer.mozilla.org/en-US/docs/Web/API/EffectiveConnectionType)
class EffectiveConnectionType: public emlite::Val {
  explicit EffectiveConnectionType(Handle h) noexcept;
public:
    enum Value {
        _2G,
        _3G,
        _4G,
        SLOW_2G,
    };

private:
    Value value_;

public:
    EffectiveConnectionType() noexcept = delete;
    EffectiveConnectionType(Value v) noexcept;
    explicit EffectiveConnectionType(const emlite::Val& val) noexcept;
    static EffectiveConnectionType take_ownership(Handle h) noexcept;
    [[nodiscard]] EffectiveConnectionType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const EffectiveConnectionType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const EffectiveConnectionType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type NotificationPermission
/// [`NotificationPermission`](https://developer.mozilla.org/en-US/docs/Web/API/NotificationPermission)
class NotificationPermission: public emlite::Val {
  explicit NotificationPermission(Handle h) noexcept;
public:
    enum Value {
        DEFAULT_,
        DENIED,
        GRANTED,
    };

private:
    Value value_;

public:
    NotificationPermission() noexcept = delete;
    NotificationPermission(Value v) noexcept;
    explicit NotificationPermission(const emlite::Val& val) noexcept;
    static NotificationPermission take_ownership(Handle h) noexcept;
    [[nodiscard]] NotificationPermission clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const NotificationPermission& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const NotificationPermission& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type NotificationDirection
/// [`NotificationDirection`](https://developer.mozilla.org/en-US/docs/Web/API/NotificationDirection)
class NotificationDirection: public emlite::Val {
  explicit NotificationDirection(Handle h) noexcept;
public:
    enum Value {
        AUTO_,
        LTR,
        RTL,
    };

private:
    Value value_;

public:
    NotificationDirection() noexcept = delete;
    NotificationDirection(Value v) noexcept;
    explicit NotificationDirection(const emlite::Val& val) noexcept;
    static NotificationDirection take_ownership(Handle h) noexcept;
    [[nodiscard]] NotificationDirection clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const NotificationDirection& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const NotificationDirection& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type OrientationSensorLocalCoordinateSystem
/// [`OrientationSensorLocalCoordinateSystem`](https://developer.mozilla.org/en-US/docs/Web/API/OrientationSensorLocalCoordinateSystem)
class OrientationSensorLocalCoordinateSystem: public emlite::Val {
  explicit OrientationSensorLocalCoordinateSystem(Handle h) noexcept;
public:
    enum Value {
        DEVICE,
        SCREEN,
    };

private:
    Value value_;

public:
    OrientationSensorLocalCoordinateSystem() noexcept = delete;
    OrientationSensorLocalCoordinateSystem(Value v) noexcept;
    explicit OrientationSensorLocalCoordinateSystem(const emlite::Val& val) noexcept;
    static OrientationSensorLocalCoordinateSystem take_ownership(Handle h) noexcept;
    [[nodiscard]] OrientationSensorLocalCoordinateSystem clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const OrientationSensorLocalCoordinateSystem& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const OrientationSensorLocalCoordinateSystem& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type ClientLifecycleState
/// [`ClientLifecycleState`](https://developer.mozilla.org/en-US/docs/Web/API/ClientLifecycleState)
class ClientLifecycleState: public emlite::Val {
  explicit ClientLifecycleState(Handle h) noexcept;
public:
    enum Value {
        ACTIVE,
        FROZEN,
    };

private:
    Value value_;

public:
    ClientLifecycleState() noexcept = delete;
    ClientLifecycleState(Value v) noexcept;
    explicit ClientLifecycleState(const emlite::Val& val) noexcept;
    static ClientLifecycleState take_ownership(Handle h) noexcept;
    [[nodiscard]] ClientLifecycleState clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const ClientLifecycleState& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const ClientLifecycleState& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type PaymentDelegation
/// [`PaymentDelegation`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentDelegation)
class PaymentDelegation: public emlite::Val {
  explicit PaymentDelegation(Handle h) noexcept;
public:
    enum Value {
        SHIPPINGADDRESS,
        PAYERNAME,
        PAYERPHONE,
        PAYEREMAIL,
    };

private:
    Value value_;

public:
    PaymentDelegation() noexcept = delete;
    PaymentDelegation(Value v) noexcept;
    explicit PaymentDelegation(const emlite::Val& val) noexcept;
    static PaymentDelegation take_ownership(Handle h) noexcept;
    [[nodiscard]] PaymentDelegation clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const PaymentDelegation& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const PaymentDelegation& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type PaymentShippingType
/// [`PaymentShippingType`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentShippingType)
class PaymentShippingType: public emlite::Val {
  explicit PaymentShippingType(Handle h) noexcept;
public:
    enum Value {
        SHIPPING,
        DELIVERY,
        PICKUP,
    };

private:
    Value value_;

public:
    PaymentShippingType() noexcept = delete;
    PaymentShippingType(Value v) noexcept;
    explicit PaymentShippingType(const emlite::Val& val) noexcept;
    static PaymentShippingType take_ownership(Handle h) noexcept;
    [[nodiscard]] PaymentShippingType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const PaymentShippingType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const PaymentShippingType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type PaymentComplete
/// [`PaymentComplete`](https://developer.mozilla.org/en-US/docs/Web/API/PaymentComplete)
class PaymentComplete: public emlite::Val {
  explicit PaymentComplete(Handle h) noexcept;
public:
    enum Value {
        FAIL,
        SUCCESS,
        UNKNOWN,
    };

private:
    Value value_;

public:
    PaymentComplete() noexcept = delete;
    PaymentComplete(Value v) noexcept;
    explicit PaymentComplete(const emlite::Val& val) noexcept;
    static PaymentComplete take_ownership(Handle h) noexcept;
    [[nodiscard]] PaymentComplete clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const PaymentComplete& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const PaymentComplete& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type PermissionState
/// [`PermissionState`](https://developer.mozilla.org/en-US/docs/Web/API/PermissionState)
class PermissionState: public emlite::Val {
  explicit PermissionState(Handle h) noexcept;
public:
    enum Value {
        GRANTED,
        DENIED,
        PROMPT,
    };

private:
    Value value_;

public:
    PermissionState() noexcept = delete;
    PermissionState(Value v) noexcept;
    explicit PermissionState(const emlite::Val& val) noexcept;
    static PermissionState take_ownership(Handle h) noexcept;
    [[nodiscard]] PermissionState clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const PermissionState& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const PermissionState& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type PointerAxis
/// [`PointerAxis`](https://developer.mozilla.org/en-US/docs/Web/API/PointerAxis)
class PointerAxis: public emlite::Val {
  explicit PointerAxis(Handle h) noexcept;
public:
    enum Value {
        BLOCK,
        INLINE_,
        X,
        Y,
    };

private:
    Value value_;

public:
    PointerAxis() noexcept = delete;
    PointerAxis(Value v) noexcept;
    explicit PointerAxis(const emlite::Val& val) noexcept;
    static PointerAxis take_ownership(Handle h) noexcept;
    [[nodiscard]] PointerAxis clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const PointerAxis& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const PointerAxis& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type PresentationConnectionState
/// [`PresentationConnectionState`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationConnectionState)
class PresentationConnectionState: public emlite::Val {
  explicit PresentationConnectionState(Handle h) noexcept;
public:
    enum Value {
        CONNECTING,
        CONNECTED,
        CLOSED,
        TERMINATED,
    };

private:
    Value value_;

public:
    PresentationConnectionState() noexcept = delete;
    PresentationConnectionState(Value v) noexcept;
    explicit PresentationConnectionState(const emlite::Val& val) noexcept;
    static PresentationConnectionState take_ownership(Handle h) noexcept;
    [[nodiscard]] PresentationConnectionState clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const PresentationConnectionState& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const PresentationConnectionState& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type PresentationConnectionCloseReason
/// [`PresentationConnectionCloseReason`](https://developer.mozilla.org/en-US/docs/Web/API/PresentationConnectionCloseReason)
class PresentationConnectionCloseReason: public emlite::Val {
  explicit PresentationConnectionCloseReason(Handle h) noexcept;
public:
    enum Value {
        ERROR,
        CLOSED,
        WENTAWAY,
    };

private:
    Value value_;

public:
    PresentationConnectionCloseReason() noexcept = delete;
    PresentationConnectionCloseReason(Value v) noexcept;
    explicit PresentationConnectionCloseReason(const emlite::Val& val) noexcept;
    static PresentationConnectionCloseReason take_ownership(Handle h) noexcept;
    [[nodiscard]] PresentationConnectionCloseReason clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const PresentationConnectionCloseReason& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const PresentationConnectionCloseReason& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type AttributionAggregationProtocol
/// [`AttributionAggregationProtocol`](https://developer.mozilla.org/en-US/docs/Web/API/AttributionAggregationProtocol)
class AttributionAggregationProtocol: public emlite::Val {
  explicit AttributionAggregationProtocol(Handle h) noexcept;
public:
    enum Value {
        DAP_15_HISTOGRAM,
        TEE_00,
    };

private:
    Value value_;

public:
    AttributionAggregationProtocol() noexcept = delete;
    AttributionAggregationProtocol(Value v) noexcept;
    explicit AttributionAggregationProtocol(const emlite::Val& val) noexcept;
    static AttributionAggregationProtocol take_ownership(Handle h) noexcept;
    [[nodiscard]] AttributionAggregationProtocol clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const AttributionAggregationProtocol& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const AttributionAggregationProtocol& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type AttributionLogic
/// [`AttributionLogic`](https://developer.mozilla.org/en-US/docs/Web/API/AttributionLogic)
class AttributionLogic: public emlite::Val {
  explicit AttributionLogic(Handle h) noexcept;
public:
    enum Value {
        LAST_N_TOUCH,
    };

private:
    Value value_;

public:
    AttributionLogic() noexcept = delete;
    AttributionLogic(Value v) noexcept;
    explicit AttributionLogic(const emlite::Val& val) noexcept;
    static AttributionLogic take_ownership(Handle h) noexcept;
    [[nodiscard]] AttributionLogic clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const AttributionLogic& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const AttributionLogic& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type IPAddressSpace
/// [`IPAddressSpace`](https://developer.mozilla.org/en-US/docs/Web/API/IPAddressSpace)
class IPAddressSpace: public emlite::Val {
  explicit IPAddressSpace(Handle h) noexcept;
public:
    enum Value {
        PUBLIC_,
        PRIVATE_,
        LOCAL,
    };

private:
    Value value_;

public:
    IPAddressSpace() noexcept = delete;
    IPAddressSpace(Value v) noexcept;
    explicit IPAddressSpace(const emlite::Val& val) noexcept;
    static IPAddressSpace take_ownership(Handle h) noexcept;
    [[nodiscard]] IPAddressSpace clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const IPAddressSpace& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const IPAddressSpace& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type PushEncryptionKeyName
/// [`PushEncryptionKeyName`](https://developer.mozilla.org/en-US/docs/Web/API/PushEncryptionKeyName)
class PushEncryptionKeyName: public emlite::Val {
  explicit PushEncryptionKeyName(Handle h) noexcept;
public:
    enum Value {
        P256DH,
        AUTH,
    };

private:
    Value value_;

public:
    PushEncryptionKeyName() noexcept = delete;
    PushEncryptionKeyName(Value v) noexcept;
    explicit PushEncryptionKeyName(const emlite::Val& val) noexcept;
    static PushEncryptionKeyName take_ownership(Handle h) noexcept;
    [[nodiscard]] PushEncryptionKeyName clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const PushEncryptionKeyName& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const PushEncryptionKeyName& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type ReferrerPolicy
/// [`ReferrerPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/ReferrerPolicy)
class ReferrerPolicy: public emlite::Val {
  explicit ReferrerPolicy(Handle h) noexcept;
public:
    enum Value {
        NONE,
        NO_REFERRER,
        NO_REFERRER_WHEN_DOWNGRADE,
        SAME_ORIGIN,
        ORIGIN,
        STRICT_ORIGIN,
        ORIGIN_WHEN_CROSS_ORIGIN,
        STRICT_ORIGIN_WHEN_CROSS_ORIGIN,
        UNSAFE_URL,
    };

private:
    Value value_;

public:
    ReferrerPolicy() noexcept = delete;
    ReferrerPolicy(Value v) noexcept;
    explicit ReferrerPolicy(const emlite::Val& val) noexcept;
    static ReferrerPolicy take_ownership(Handle h) noexcept;
    [[nodiscard]] ReferrerPolicy clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const ReferrerPolicy& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const ReferrerPolicy& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RemotePlaybackState
/// [`RemotePlaybackState`](https://developer.mozilla.org/en-US/docs/Web/API/RemotePlaybackState)
class RemotePlaybackState: public emlite::Val {
  explicit RemotePlaybackState(Handle h) noexcept;
public:
    enum Value {
        CONNECTING,
        CONNECTED,
        DISCONNECTED,
    };

private:
    Value value_;

public:
    RemotePlaybackState() noexcept = delete;
    RemotePlaybackState(Value v) noexcept;
    explicit RemotePlaybackState(const emlite::Val& val) noexcept;
    static RemotePlaybackState take_ownership(Handle h) noexcept;
    [[nodiscard]] RemotePlaybackState clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RemotePlaybackState& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RemotePlaybackState& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type ResizeObserverBoxOptions
/// [`ResizeObserverBoxOptions`](https://developer.mozilla.org/en-US/docs/Web/API/ResizeObserverBoxOptions)
class ResizeObserverBoxOptions: public emlite::Val {
  explicit ResizeObserverBoxOptions(Handle h) noexcept;
public:
    enum Value {
        BORDER_BOX,
        CONTENT_BOX,
        DEVICE_PIXEL_CONTENT_BOX,
    };

private:
    Value value_;

public:
    ResizeObserverBoxOptions() noexcept = delete;
    ResizeObserverBoxOptions(Value v) noexcept;
    explicit ResizeObserverBoxOptions(const emlite::Val& val) noexcept;
    static ResizeObserverBoxOptions take_ownership(Handle h) noexcept;
    [[nodiscard]] ResizeObserverBoxOptions clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const ResizeObserverBoxOptions& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const ResizeObserverBoxOptions& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RenderBlockingStatusType
/// [`RenderBlockingStatusType`](https://developer.mozilla.org/en-US/docs/Web/API/RenderBlockingStatusType)
class RenderBlockingStatusType: public emlite::Val {
  explicit RenderBlockingStatusType(Handle h) noexcept;
public:
    enum Value {
        BLOCKING,
        NON_BLOCKING,
    };

private:
    Value value_;

public:
    RenderBlockingStatusType() noexcept = delete;
    RenderBlockingStatusType(Value v) noexcept;
    explicit RenderBlockingStatusType(const emlite::Val& val) noexcept;
    static RenderBlockingStatusType take_ownership(Handle h) noexcept;
    [[nodiscard]] RenderBlockingStatusType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RenderBlockingStatusType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RenderBlockingStatusType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type SameSiteCookiesType
/// [`SameSiteCookiesType`](https://developer.mozilla.org/en-US/docs/Web/API/SameSiteCookiesType)
class SameSiteCookiesType: public emlite::Val {
  explicit SameSiteCookiesType(Handle h) noexcept;
public:
    enum Value {
        ALL,
        NONE,
    };

private:
    Value value_;

public:
    SameSiteCookiesType() noexcept = delete;
    SameSiteCookiesType(Value v) noexcept;
    explicit SameSiteCookiesType(const emlite::Val& val) noexcept;
    static SameSiteCookiesType take_ownership(Handle h) noexcept;
    [[nodiscard]] SameSiteCookiesType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const SameSiteCookiesType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const SameSiteCookiesType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type SanitizerPresets
/// [`SanitizerPresets`](https://developer.mozilla.org/en-US/docs/Web/API/SanitizerPresets)
class SanitizerPresets: public emlite::Val {
  explicit SanitizerPresets(Handle h) noexcept;
public:
    enum Value {
        DEFAULT_,
    };

private:
    Value value_;

public:
    SanitizerPresets() noexcept = delete;
    SanitizerPresets(Value v) noexcept;
    explicit SanitizerPresets(const emlite::Val& val) noexcept;
    static SanitizerPresets take_ownership(Handle h) noexcept;
    [[nodiscard]] SanitizerPresets clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const SanitizerPresets& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const SanitizerPresets& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type TaskPriority
/// [`TaskPriority`](https://developer.mozilla.org/en-US/docs/Web/API/TaskPriority)
class TaskPriority: public emlite::Val {
  explicit TaskPriority(Handle h) noexcept;
public:
    enum Value {
        USER_BLOCKING,
        USER_VISIBLE,
        BACKGROUND,
    };

private:
    Value value_;

public:
    TaskPriority() noexcept = delete;
    TaskPriority(Value v) noexcept;
    explicit TaskPriority(const emlite::Val& val) noexcept;
    static TaskPriority take_ownership(Handle h) noexcept;
    [[nodiscard]] TaskPriority clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const TaskPriority& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const TaskPriority& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type CaptureStartFocusBehavior
/// [`CaptureStartFocusBehavior`](https://developer.mozilla.org/en-US/docs/Web/API/CaptureStartFocusBehavior)
class CaptureStartFocusBehavior: public emlite::Val {
  explicit CaptureStartFocusBehavior(Handle h) noexcept;
public:
    enum Value {
        FOCUS_CAPTURING_APPLICATION,
        FOCUS_CAPTURED_SURFACE,
        NO_FOCUS_CHANGE,
    };

private:
    Value value_;

public:
    CaptureStartFocusBehavior() noexcept = delete;
    CaptureStartFocusBehavior(Value v) noexcept;
    explicit CaptureStartFocusBehavior(const emlite::Val& val) noexcept;
    static CaptureStartFocusBehavior take_ownership(Handle h) noexcept;
    [[nodiscard]] CaptureStartFocusBehavior clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const CaptureStartFocusBehavior& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const CaptureStartFocusBehavior& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type SelfCapturePreferenceEnum
/// [`SelfCapturePreferenceEnum`](https://developer.mozilla.org/en-US/docs/Web/API/SelfCapturePreferenceEnum)
class SelfCapturePreferenceEnum: public emlite::Val {
  explicit SelfCapturePreferenceEnum(Handle h) noexcept;
public:
    enum Value {
        INCLUDE,
        EXCLUDE,
    };

private:
    Value value_;

public:
    SelfCapturePreferenceEnum() noexcept = delete;
    SelfCapturePreferenceEnum(Value v) noexcept;
    explicit SelfCapturePreferenceEnum(const emlite::Val& val) noexcept;
    static SelfCapturePreferenceEnum take_ownership(Handle h) noexcept;
    [[nodiscard]] SelfCapturePreferenceEnum clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const SelfCapturePreferenceEnum& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const SelfCapturePreferenceEnum& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type SystemAudioPreferenceEnum
/// [`SystemAudioPreferenceEnum`](https://developer.mozilla.org/en-US/docs/Web/API/SystemAudioPreferenceEnum)
class SystemAudioPreferenceEnum: public emlite::Val {
  explicit SystemAudioPreferenceEnum(Handle h) noexcept;
public:
    enum Value {
        INCLUDE,
        EXCLUDE,
    };

private:
    Value value_;

public:
    SystemAudioPreferenceEnum() noexcept = delete;
    SystemAudioPreferenceEnum(Value v) noexcept;
    explicit SystemAudioPreferenceEnum(const emlite::Val& val) noexcept;
    static SystemAudioPreferenceEnum take_ownership(Handle h) noexcept;
    [[nodiscard]] SystemAudioPreferenceEnum clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const SystemAudioPreferenceEnum& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const SystemAudioPreferenceEnum& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type WindowAudioPreferenceEnum
/// [`WindowAudioPreferenceEnum`](https://developer.mozilla.org/en-US/docs/Web/API/WindowAudioPreferenceEnum)
class WindowAudioPreferenceEnum: public emlite::Val {
  explicit WindowAudioPreferenceEnum(Handle h) noexcept;
public:
    enum Value {
        SYSTEM,
        WINDOW,
        EXCLUDE,
    };

private:
    Value value_;

public:
    WindowAudioPreferenceEnum() noexcept = delete;
    WindowAudioPreferenceEnum(Value v) noexcept;
    explicit WindowAudioPreferenceEnum(const emlite::Val& val) noexcept;
    static WindowAudioPreferenceEnum take_ownership(Handle h) noexcept;
    [[nodiscard]] WindowAudioPreferenceEnum clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const WindowAudioPreferenceEnum& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const WindowAudioPreferenceEnum& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type SurfaceSwitchingPreferenceEnum
/// [`SurfaceSwitchingPreferenceEnum`](https://developer.mozilla.org/en-US/docs/Web/API/SurfaceSwitchingPreferenceEnum)
class SurfaceSwitchingPreferenceEnum: public emlite::Val {
  explicit SurfaceSwitchingPreferenceEnum(Handle h) noexcept;
public:
    enum Value {
        INCLUDE,
        EXCLUDE,
    };

private:
    Value value_;

public:
    SurfaceSwitchingPreferenceEnum() noexcept = delete;
    SurfaceSwitchingPreferenceEnum(Value v) noexcept;
    explicit SurfaceSwitchingPreferenceEnum(const emlite::Val& val) noexcept;
    static SurfaceSwitchingPreferenceEnum take_ownership(Handle h) noexcept;
    [[nodiscard]] SurfaceSwitchingPreferenceEnum clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const SurfaceSwitchingPreferenceEnum& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const SurfaceSwitchingPreferenceEnum& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type MonitorTypeSurfacesEnum
/// [`MonitorTypeSurfacesEnum`](https://developer.mozilla.org/en-US/docs/Web/API/MonitorTypeSurfacesEnum)
class MonitorTypeSurfacesEnum: public emlite::Val {
  explicit MonitorTypeSurfacesEnum(Handle h) noexcept;
public:
    enum Value {
        INCLUDE,
        EXCLUDE,
    };

private:
    Value value_;

public:
    MonitorTypeSurfacesEnum() noexcept = delete;
    MonitorTypeSurfacesEnum(Value v) noexcept;
    explicit MonitorTypeSurfacesEnum(const emlite::Val& val) noexcept;
    static MonitorTypeSurfacesEnum take_ownership(Handle h) noexcept;
    [[nodiscard]] MonitorTypeSurfacesEnum clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const MonitorTypeSurfacesEnum& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const MonitorTypeSurfacesEnum& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type DisplayCaptureSurfaceType
/// [`DisplayCaptureSurfaceType`](https://developer.mozilla.org/en-US/docs/Web/API/DisplayCaptureSurfaceType)
class DisplayCaptureSurfaceType: public emlite::Val {
  explicit DisplayCaptureSurfaceType(Handle h) noexcept;
public:
    enum Value {
        MONITOR,
        WINDOW,
        BROWSER,
    };

private:
    Value value_;

public:
    DisplayCaptureSurfaceType() noexcept = delete;
    DisplayCaptureSurfaceType(Value v) noexcept;
    explicit DisplayCaptureSurfaceType(const emlite::Val& val) noexcept;
    static DisplayCaptureSurfaceType take_ownership(Handle h) noexcept;
    [[nodiscard]] DisplayCaptureSurfaceType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const DisplayCaptureSurfaceType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const DisplayCaptureSurfaceType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type CursorCaptureConstraint
/// [`CursorCaptureConstraint`](https://developer.mozilla.org/en-US/docs/Web/API/CursorCaptureConstraint)
class CursorCaptureConstraint: public emlite::Val {
  explicit CursorCaptureConstraint(Handle h) noexcept;
public:
    enum Value {
        NEVER,
        ALWAYS,
        MOTION,
    };

private:
    Value value_;

public:
    CursorCaptureConstraint() noexcept = delete;
    CursorCaptureConstraint(Value v) noexcept;
    explicit CursorCaptureConstraint(const emlite::Val& val) noexcept;
    static CursorCaptureConstraint take_ownership(Handle h) noexcept;
    [[nodiscard]] CursorCaptureConstraint clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const CursorCaptureConstraint& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const CursorCaptureConstraint& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type OrientationLockType
/// [`OrientationLockType`](https://developer.mozilla.org/en-US/docs/Web/API/OrientationLockType)
class OrientationLockType: public emlite::Val {
  explicit OrientationLockType(Handle h) noexcept;
public:
    enum Value {
        ANY,
        NATURAL,
        LANDSCAPE,
        PORTRAIT,
        PORTRAIT_PRIMARY,
        PORTRAIT_SECONDARY,
        LANDSCAPE_PRIMARY,
        LANDSCAPE_SECONDARY,
    };

private:
    Value value_;

public:
    OrientationLockType() noexcept = delete;
    OrientationLockType(Value v) noexcept;
    explicit OrientationLockType(const emlite::Val& val) noexcept;
    static OrientationLockType take_ownership(Handle h) noexcept;
    [[nodiscard]] OrientationLockType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const OrientationLockType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const OrientationLockType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type OrientationType
/// [`OrientationType`](https://developer.mozilla.org/en-US/docs/Web/API/OrientationType)
class OrientationType: public emlite::Val {
  explicit OrientationType(Handle h) noexcept;
public:
    enum Value {
        PORTRAIT_PRIMARY,
        PORTRAIT_SECONDARY,
        LANDSCAPE_PRIMARY,
        LANDSCAPE_SECONDARY,
    };

private:
    Value value_;

public:
    OrientationType() noexcept = delete;
    OrientationType(Value v) noexcept;
    explicit OrientationType(const emlite::Val& val) noexcept;
    static OrientationType take_ownership(Handle h) noexcept;
    [[nodiscard]] OrientationType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const OrientationType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const OrientationType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type WakeLockType
/// [`WakeLockType`](https://developer.mozilla.org/en-US/docs/Web/API/WakeLockType)
class WakeLockType: public emlite::Val {
  explicit WakeLockType(Handle h) noexcept;
public:
    enum Value {
        SCREEN,
    };

private:
    Value value_;

public:
    WakeLockType() noexcept = delete;
    WakeLockType(Value v) noexcept;
    explicit WakeLockType(const emlite::Val& val) noexcept;
    static WakeLockType take_ownership(Handle h) noexcept;
    [[nodiscard]] WakeLockType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const WakeLockType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const WakeLockType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type ScrollAxis
/// [`ScrollAxis`](https://developer.mozilla.org/en-US/docs/Web/API/ScrollAxis)
class ScrollAxis: public emlite::Val {
  explicit ScrollAxis(Handle h) noexcept;
public:
    enum Value {
        BLOCK,
        INLINE_,
        X,
        Y,
    };

private:
    Value value_;

public:
    ScrollAxis() noexcept = delete;
    ScrollAxis(Value v) noexcept;
    explicit ScrollAxis(const emlite::Val& val) noexcept;
    static ScrollAxis take_ownership(Handle h) noexcept;
    [[nodiscard]] ScrollAxis clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const ScrollAxis& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const ScrollAxis& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type SecurePaymentConfirmationAvailability
/// [`SecurePaymentConfirmationAvailability`](https://developer.mozilla.org/en-US/docs/Web/API/SecurePaymentConfirmationAvailability)
class SecurePaymentConfirmationAvailability: public emlite::Val {
  explicit SecurePaymentConfirmationAvailability(Handle h) noexcept;
public:
    enum Value {
        AVAILABLE,
        UNAVAILABLE_UNKNOWN_REASON,
        UNAVAILABLE_FEATURE_NOT_ENABLED,
        UNAVAILABLE_NO_PERMISSION_POLICY,
        UNAVAILABLE_NO_USER_VERIFYING_PLATFORM_AUTHENTICATOR,
    };

private:
    Value value_;

public:
    SecurePaymentConfirmationAvailability() noexcept = delete;
    SecurePaymentConfirmationAvailability(Value v) noexcept;
    explicit SecurePaymentConfirmationAvailability(const emlite::Val& val) noexcept;
    static SecurePaymentConfirmationAvailability take_ownership(Handle h) noexcept;
    [[nodiscard]] SecurePaymentConfirmationAvailability clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const SecurePaymentConfirmationAvailability& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const SecurePaymentConfirmationAvailability& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type ParityType
/// [`ParityType`](https://developer.mozilla.org/en-US/docs/Web/API/ParityType)
class ParityType: public emlite::Val {
  explicit ParityType(Handle h) noexcept;
public:
    enum Value {
        NONE,
        EVEN,
        ODD,
    };

private:
    Value value_;

public:
    ParityType() noexcept = delete;
    ParityType(Value v) noexcept;
    explicit ParityType(const emlite::Val& val) noexcept;
    static ParityType take_ownership(Handle h) noexcept;
    [[nodiscard]] ParityType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const ParityType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const ParityType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type FlowControlType
/// [`FlowControlType`](https://developer.mozilla.org/en-US/docs/Web/API/FlowControlType)
class FlowControlType: public emlite::Val {
  explicit FlowControlType(Handle h) noexcept;
public:
    enum Value {
        NONE,
        HARDWARE,
    };

private:
    Value value_;

public:
    FlowControlType() noexcept = delete;
    FlowControlType(Value v) noexcept;
    explicit FlowControlType(const emlite::Val& val) noexcept;
    static FlowControlType take_ownership(Handle h) noexcept;
    [[nodiscard]] FlowControlType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const FlowControlType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const FlowControlType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type ServiceWorkerState
/// [`ServiceWorkerState`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerState)
class ServiceWorkerState: public emlite::Val {
  explicit ServiceWorkerState(Handle h) noexcept;
public:
    enum Value {
        PARSED,
        INSTALLING,
        INSTALLED,
        ACTIVATING,
        ACTIVATED,
        REDUNDANT,
    };

private:
    Value value_;

public:
    ServiceWorkerState() noexcept = delete;
    ServiceWorkerState(Value v) noexcept;
    explicit ServiceWorkerState(const emlite::Val& val) noexcept;
    static ServiceWorkerState take_ownership(Handle h) noexcept;
    [[nodiscard]] ServiceWorkerState clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const ServiceWorkerState& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const ServiceWorkerState& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type ServiceWorkerUpdateViaCache
/// [`ServiceWorkerUpdateViaCache`](https://developer.mozilla.org/en-US/docs/Web/API/ServiceWorkerUpdateViaCache)
class ServiceWorkerUpdateViaCache: public emlite::Val {
  explicit ServiceWorkerUpdateViaCache(Handle h) noexcept;
public:
    enum Value {
        IMPORTS,
        ALL,
        NONE,
    };

private:
    Value value_;

public:
    ServiceWorkerUpdateViaCache() noexcept = delete;
    ServiceWorkerUpdateViaCache(Value v) noexcept;
    explicit ServiceWorkerUpdateViaCache(const emlite::Val& val) noexcept;
    static ServiceWorkerUpdateViaCache take_ownership(Handle h) noexcept;
    [[nodiscard]] ServiceWorkerUpdateViaCache clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const ServiceWorkerUpdateViaCache& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const ServiceWorkerUpdateViaCache& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type FrameType
/// [`FrameType`](https://developer.mozilla.org/en-US/docs/Web/API/FrameType)
class FrameType: public emlite::Val {
  explicit FrameType(Handle h) noexcept;
public:
    enum Value {
        AUXILIARY,
        TOP_LEVEL,
        NESTED,
        NONE,
    };

private:
    Value value_;

public:
    FrameType() noexcept = delete;
    FrameType(Value v) noexcept;
    explicit FrameType(const emlite::Val& val) noexcept;
    static FrameType take_ownership(Handle h) noexcept;
    [[nodiscard]] FrameType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const FrameType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const FrameType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type ClientType
/// [`ClientType`](https://developer.mozilla.org/en-US/docs/Web/API/ClientType)
class ClientType: public emlite::Val {
  explicit ClientType(Handle h) noexcept;
public:
    enum Value {
        WINDOW,
        WORKER,
        SHAREDWORKER,
        ALL,
    };

private:
    Value value_;

public:
    ClientType() noexcept = delete;
    ClientType(Value v) noexcept;
    explicit ClientType(const emlite::Val& val) noexcept;
    static ClientType take_ownership(Handle h) noexcept;
    [[nodiscard]] ClientType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const ClientType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const ClientType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RunningStatus
/// [`RunningStatus`](https://developer.mozilla.org/en-US/docs/Web/API/RunningStatus)
class RunningStatus: public emlite::Val {
  explicit RunningStatus(Handle h) noexcept;
public:
    enum Value {
        RUNNING,
        NOT_RUNNING,
    };

private:
    Value value_;

public:
    RunningStatus() noexcept = delete;
    RunningStatus(Value v) noexcept;
    explicit RunningStatus(const emlite::Val& val) noexcept;
    static RunningStatus take_ownership(Handle h) noexcept;
    [[nodiscard]] RunningStatus clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RunningStatus& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RunningStatus& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RouterSourceEnum
/// [`RouterSourceEnum`](https://developer.mozilla.org/en-US/docs/Web/API/RouterSourceEnum)
class RouterSourceEnum: public emlite::Val {
  explicit RouterSourceEnum(Handle h) noexcept;
public:
    enum Value {
        CACHE,
        FETCH_EVENT,
        NETWORK,
        RACE_NETWORK_AND_FETCH_HANDLER,
    };

private:
    Value value_;

public:
    RouterSourceEnum() noexcept = delete;
    RouterSourceEnum(Value v) noexcept;
    explicit RouterSourceEnum(const emlite::Val& val) noexcept;
    static RouterSourceEnum take_ownership(Handle h) noexcept;
    [[nodiscard]] RouterSourceEnum clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RouterSourceEnum& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RouterSourceEnum& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type LandmarkType
/// [`LandmarkType`](https://developer.mozilla.org/en-US/docs/Web/API/LandmarkType)
class LandmarkType: public emlite::Val {
  explicit LandmarkType(Handle h) noexcept;
public:
    enum Value {
        MOUTH,
        EYE,
        NOSE,
    };

private:
    Value value_;

public:
    LandmarkType() noexcept = delete;
    LandmarkType(Value v) noexcept;
    explicit LandmarkType(const emlite::Val& val) noexcept;
    static LandmarkType take_ownership(Handle h) noexcept;
    [[nodiscard]] LandmarkType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const LandmarkType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const LandmarkType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type BarcodeFormat
/// [`BarcodeFormat`](https://developer.mozilla.org/en-US/docs/Web/API/BarcodeFormat)
class BarcodeFormat: public emlite::Val {
  explicit BarcodeFormat(Handle h) noexcept;
public:
    enum Value {
        AZTEC,
        CODE_128,
        CODE_39,
        CODE_93,
        CODABAR,
        DATA_MATRIX,
        EAN_13,
        EAN_8,
        ITF,
        PDF417,
        QR_CODE,
        UNKNOWN,
        UPC_A,
        UPC_E,
    };

private:
    Value value_;

public:
    BarcodeFormat() noexcept = delete;
    BarcodeFormat(Value v) noexcept;
    explicit BarcodeFormat(const emlite::Val& val) noexcept;
    static BarcodeFormat take_ownership(Handle h) noexcept;
    [[nodiscard]] BarcodeFormat clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const BarcodeFormat& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const BarcodeFormat& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type SpeechRecognitionErrorCode
/// [`SpeechRecognitionErrorCode`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionErrorCode)
class SpeechRecognitionErrorCode: public emlite::Val {
  explicit SpeechRecognitionErrorCode(Handle h) noexcept;
public:
    enum Value {
        NO_SPEECH,
        ABORTED,
        AUDIO_CAPTURE,
        NETWORK,
        NOT_ALLOWED,
        SERVICE_NOT_ALLOWED,
        LANGUAGE_NOT_SUPPORTED,
        PHRASES_NOT_SUPPORTED,
    };

private:
    Value value_;

public:
    SpeechRecognitionErrorCode() noexcept = delete;
    SpeechRecognitionErrorCode(Value v) noexcept;
    explicit SpeechRecognitionErrorCode(const emlite::Val& val) noexcept;
    static SpeechRecognitionErrorCode take_ownership(Handle h) noexcept;
    [[nodiscard]] SpeechRecognitionErrorCode clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const SpeechRecognitionErrorCode& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const SpeechRecognitionErrorCode& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type AvailabilityStatus
/// [`AvailabilityStatus`](https://developer.mozilla.org/en-US/docs/Web/API/AvailabilityStatus)
class AvailabilityStatus: public emlite::Val {
  explicit AvailabilityStatus(Handle h) noexcept;
public:
    enum Value {
        UNAVAILABLE,
        DOWNLOADABLE,
        DOWNLOADING,
        AVAILABLE,
    };

private:
    Value value_;

public:
    AvailabilityStatus() noexcept = delete;
    AvailabilityStatus(Value v) noexcept;
    explicit AvailabilityStatus(const emlite::Val& val) noexcept;
    static AvailabilityStatus take_ownership(Handle h) noexcept;
    [[nodiscard]] AvailabilityStatus clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const AvailabilityStatus& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const AvailabilityStatus& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type SpeechSynthesisErrorCode
/// [`SpeechSynthesisErrorCode`](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisErrorCode)
class SpeechSynthesisErrorCode: public emlite::Val {
  explicit SpeechSynthesisErrorCode(Handle h) noexcept;
public:
    enum Value {
        CANCELED,
        INTERRUPTED,
        AUDIO_BUSY,
        AUDIO_HARDWARE,
        NETWORK,
        SYNTHESIS_UNAVAILABLE,
        SYNTHESIS_FAILED,
        LANGUAGE_UNAVAILABLE,
        VOICE_UNAVAILABLE,
        TEXT_TOO_LONG,
        INVALID_ARGUMENT,
        NOT_ALLOWED,
    };

private:
    Value value_;

public:
    SpeechSynthesisErrorCode() noexcept = delete;
    SpeechSynthesisErrorCode(Value v) noexcept;
    explicit SpeechSynthesisErrorCode(const emlite::Val& val) noexcept;
    static SpeechSynthesisErrorCode take_ownership(Handle h) noexcept;
    [[nodiscard]] SpeechSynthesisErrorCode clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const SpeechSynthesisErrorCode& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const SpeechSynthesisErrorCode& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type ReadableStreamReaderMode
/// [`ReadableStreamReaderMode`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStreamReaderMode)
class ReadableStreamReaderMode: public emlite::Val {
  explicit ReadableStreamReaderMode(Handle h) noexcept;
public:
    enum Value {
        BYOB,
    };

private:
    Value value_;

public:
    ReadableStreamReaderMode() noexcept = delete;
    ReadableStreamReaderMode(Value v) noexcept;
    explicit ReadableStreamReaderMode(const emlite::Val& val) noexcept;
    static ReadableStreamReaderMode take_ownership(Handle h) noexcept;
    [[nodiscard]] ReadableStreamReaderMode clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const ReadableStreamReaderMode& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const ReadableStreamReaderMode& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type ReadableStreamType
/// [`ReadableStreamType`](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStreamType)
class ReadableStreamType: public emlite::Val {
  explicit ReadableStreamType(Handle h) noexcept;
public:
    enum Value {
        BYTES,
    };

private:
    Value value_;

public:
    ReadableStreamType() noexcept = delete;
    ReadableStreamType(Value v) noexcept;
    explicit ReadableStreamType(const emlite::Val& val) noexcept;
    static ReadableStreamType take_ownership(Handle h) noexcept;
    [[nodiscard]] ReadableStreamType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const ReadableStreamType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const ReadableStreamType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type TouchType
/// [`TouchType`](https://developer.mozilla.org/en-US/docs/Web/API/TouchType)
class TouchType: public emlite::Val {
  explicit TouchType(Handle h) noexcept;
public:
    enum Value {
        DIRECT,
        STYLUS,
    };

private:
    Value value_;

public:
    TouchType() noexcept = delete;
    TouchType(Value v) noexcept;
    explicit TouchType(const emlite::Val& val) noexcept;
    static TouchType take_ownership(Handle h) noexcept;
    [[nodiscard]] TouchType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const TouchType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const TouchType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RefreshPolicy
/// [`RefreshPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/RefreshPolicy)
class RefreshPolicy: public emlite::Val {
  explicit RefreshPolicy(Handle h) noexcept;
public:
    enum Value {
        NONE,
        REFRESH,
    };

private:
    Value value_;

public:
    RefreshPolicy() noexcept = delete;
    RefreshPolicy(Value v) noexcept;
    explicit RefreshPolicy(const emlite::Val& val) noexcept;
    static RefreshPolicy take_ownership(Handle h) noexcept;
    [[nodiscard]] RefreshPolicy clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RefreshPolicy& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RefreshPolicy& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type TokenVersion
/// [`TokenVersion`](https://developer.mozilla.org/en-US/docs/Web/API/TokenVersion)
class TokenVersion: public emlite::Val {
  explicit TokenVersion(Handle h) noexcept;
public:
    enum Value {
        _1,
    };

private:
    Value value_;

public:
    TokenVersion() noexcept = delete;
    TokenVersion(Value v) noexcept;
    explicit TokenVersion(const emlite::Val& val) noexcept;
    static TokenVersion take_ownership(Handle h) noexcept;
    [[nodiscard]] TokenVersion clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const TokenVersion& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const TokenVersion& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type OperationType
/// [`OperationType`](https://developer.mozilla.org/en-US/docs/Web/API/OperationType)
class OperationType: public emlite::Val {
  explicit OperationType(Handle h) noexcept;
public:
    enum Value {
        TOKEN_REQUEST,
        SEND_REDEMPTION_RECORD,
        TOKEN_REDEMPTION,
    };

private:
    Value value_;

public:
    OperationType() noexcept = delete;
    OperationType(Value v) noexcept;
    explicit OperationType(const emlite::Val& val) noexcept;
    static OperationType take_ownership(Handle h) noexcept;
    [[nodiscard]] OperationType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const OperationType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const OperationType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type KAnonStatus
/// [`KAnonStatus`](https://developer.mozilla.org/en-US/docs/Web/API/KAnonStatus)
class KAnonStatus: public emlite::Val {
  explicit KAnonStatus(Handle h) noexcept;
public:
    enum Value {
        PASSEDANDENFORCED,
        PASSEDNOTENFORCED,
        BELOWTHRESHOLD,
        NOTCALCULATED,
    };

private:
    Value value_;

public:
    KAnonStatus() noexcept = delete;
    KAnonStatus(Value v) noexcept;
    explicit KAnonStatus(const emlite::Val& val) noexcept;
    static KAnonStatus take_ownership(Handle h) noexcept;
    [[nodiscard]] KAnonStatus clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const KAnonStatus& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const KAnonStatus& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type ImportExportKind
/// [`ImportExportKind`](https://developer.mozilla.org/en-US/docs/Web/API/ImportExportKind)
class ImportExportKind: public emlite::Val {
  explicit ImportExportKind(Handle h) noexcept;
public:
    enum Value {
        FUNCTION,
        TABLE,
        MEMORY,
        GLOBAL,
    };

private:
    Value value_;

public:
    ImportExportKind() noexcept = delete;
    ImportExportKind(Value v) noexcept;
    explicit ImportExportKind(const emlite::Val& val) noexcept;
    static ImportExportKind take_ownership(Handle h) noexcept;
    [[nodiscard]] ImportExportKind clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const ImportExportKind& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const ImportExportKind& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type TableKind
/// [`TableKind`](https://developer.mozilla.org/en-US/docs/Web/API/TableKind)
class TableKind: public emlite::Val {
  explicit TableKind(Handle h) noexcept;
public:
    enum Value {
        EXTERNREF,
        ANYFUNC,
    };

private:
    Value value_;

public:
    TableKind() noexcept = delete;
    TableKind(Value v) noexcept;
    explicit TableKind(const emlite::Val& val) noexcept;
    static TableKind take_ownership(Handle h) noexcept;
    [[nodiscard]] TableKind clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const TableKind& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const TableKind& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type ValueType
/// [`ValueType`](https://developer.mozilla.org/en-US/docs/Web/API/ValueType)
class ValueType: public emlite::Val {
  explicit ValueType(Handle h) noexcept;
public:
    enum Value {
        I32,
        I64,
        F32,
        F64,
        V128,
        EXTERNREF,
        ANYFUNC,
    };

private:
    Value value_;

public:
    ValueType() noexcept = delete;
    ValueType(Value v) noexcept;
    explicit ValueType(const emlite::Val& val) noexcept;
    static ValueType take_ownership(Handle h) noexcept;
    [[nodiscard]] ValueType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const ValueType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const ValueType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type IterationCompositeOperation
/// [`IterationCompositeOperation`](https://developer.mozilla.org/en-US/docs/Web/API/IterationCompositeOperation)
class IterationCompositeOperation: public emlite::Val {
  explicit IterationCompositeOperation(Handle h) noexcept;
public:
    enum Value {
        REPLACE,
        ACCUMULATE,
    };

private:
    Value value_;

public:
    IterationCompositeOperation() noexcept = delete;
    IterationCompositeOperation(Value v) noexcept;
    explicit IterationCompositeOperation(const emlite::Val& val) noexcept;
    static IterationCompositeOperation take_ownership(Handle h) noexcept;
    [[nodiscard]] IterationCompositeOperation clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const IterationCompositeOperation& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const IterationCompositeOperation& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type AnimationTriggerBehavior
/// [`AnimationTriggerBehavior`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationTriggerBehavior)
class AnimationTriggerBehavior: public emlite::Val {
  explicit AnimationTriggerBehavior(Handle h) noexcept;
public:
    enum Value {
        ONCE,
        REPEAT,
        ALTERNATE,
        STATE,
    };

private:
    Value value_;

public:
    AnimationTriggerBehavior() noexcept = delete;
    AnimationTriggerBehavior(Value v) noexcept;
    explicit AnimationTriggerBehavior(const emlite::Val& val) noexcept;
    static AnimationTriggerBehavior take_ownership(Handle h) noexcept;
    [[nodiscard]] AnimationTriggerBehavior clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const AnimationTriggerBehavior& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const AnimationTriggerBehavior& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type AnimationPlayState
/// [`AnimationPlayState`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationPlayState)
class AnimationPlayState: public emlite::Val {
  explicit AnimationPlayState(Handle h) noexcept;
public:
    enum Value {
        IDLE,
        RUNNING,
        PAUSED,
        FINISHED,
    };

private:
    Value value_;

public:
    AnimationPlayState() noexcept = delete;
    AnimationPlayState(Value v) noexcept;
    explicit AnimationPlayState(const emlite::Val& val) noexcept;
    static AnimationPlayState take_ownership(Handle h) noexcept;
    [[nodiscard]] AnimationPlayState clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const AnimationPlayState& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const AnimationPlayState& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type AnimationReplaceState
/// [`AnimationReplaceState`](https://developer.mozilla.org/en-US/docs/Web/API/AnimationReplaceState)
class AnimationReplaceState: public emlite::Val {
  explicit AnimationReplaceState(Handle h) noexcept;
public:
    enum Value {
        ACTIVE,
        REMOVED,
        PERSISTED,
    };

private:
    Value value_;

public:
    AnimationReplaceState() noexcept = delete;
    AnimationReplaceState(Value v) noexcept;
    explicit AnimationReplaceState(const emlite::Val& val) noexcept;
    static AnimationReplaceState take_ownership(Handle h) noexcept;
    [[nodiscard]] AnimationReplaceState clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const AnimationReplaceState& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const AnimationReplaceState& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type FillMode
/// [`FillMode`](https://developer.mozilla.org/en-US/docs/Web/API/FillMode)
class FillMode: public emlite::Val {
  explicit FillMode(Handle h) noexcept;
public:
    enum Value {
        NONE,
        FORWARDS,
        BACKWARDS,
        BOTH,
        AUTO_,
    };

private:
    Value value_;

public:
    FillMode() noexcept = delete;
    FillMode(Value v) noexcept;
    explicit FillMode(const emlite::Val& val) noexcept;
    static FillMode take_ownership(Handle h) noexcept;
    [[nodiscard]] FillMode clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const FillMode& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const FillMode& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type PlaybackDirection
/// [`PlaybackDirection`](https://developer.mozilla.org/en-US/docs/Web/API/PlaybackDirection)
class PlaybackDirection: public emlite::Val {
  explicit PlaybackDirection(Handle h) noexcept;
public:
    enum Value {
        NORMAL,
        REVERSE,
        ALTERNATE,
        ALTERNATE_REVERSE,
    };

private:
    Value value_;

public:
    PlaybackDirection() noexcept = delete;
    PlaybackDirection(Value v) noexcept;
    explicit PlaybackDirection(const emlite::Val& val) noexcept;
    static PlaybackDirection take_ownership(Handle h) noexcept;
    [[nodiscard]] PlaybackDirection clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const PlaybackDirection& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const PlaybackDirection& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type CompositeOperation
/// [`CompositeOperation`](https://developer.mozilla.org/en-US/docs/Web/API/CompositeOperation)
class CompositeOperation: public emlite::Val {
  explicit CompositeOperation(Handle h) noexcept;
public:
    enum Value {
        REPLACE,
        ADD,
        ACCUMULATE,
    };

private:
    Value value_;

public:
    CompositeOperation() noexcept = delete;
    CompositeOperation(Value v) noexcept;
    explicit CompositeOperation(const emlite::Val& val) noexcept;
    static CompositeOperation take_ownership(Handle h) noexcept;
    [[nodiscard]] CompositeOperation clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const CompositeOperation& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const CompositeOperation& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type CompositeOperationOrAuto
/// [`CompositeOperationOrAuto`](https://developer.mozilla.org/en-US/docs/Web/API/CompositeOperationOrAuto)
class CompositeOperationOrAuto: public emlite::Val {
  explicit CompositeOperationOrAuto(Handle h) noexcept;
public:
    enum Value {
        REPLACE,
        ADD,
        ACCUMULATE,
        AUTO_,
    };

private:
    Value value_;

public:
    CompositeOperationOrAuto() noexcept = delete;
    CompositeOperationOrAuto(Value v) noexcept;
    explicit CompositeOperationOrAuto(const emlite::Val& val) noexcept;
    static CompositeOperationOrAuto take_ownership(Handle h) noexcept;
    [[nodiscard]] CompositeOperationOrAuto clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const CompositeOperationOrAuto& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const CompositeOperationOrAuto& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type LockMode
/// [`LockMode`](https://developer.mozilla.org/en-US/docs/Web/API/LockMode)
class LockMode: public emlite::Val {
  explicit LockMode(Handle h) noexcept;
public:
    enum Value {
        SHARED,
        EXCLUSIVE,
    };

private:
    Value value_;

public:
    LockMode() noexcept = delete;
    LockMode(Value v) noexcept;
    explicit LockMode(const emlite::Val& val) noexcept;
    static LockMode take_ownership(Handle h) noexcept;
    [[nodiscard]] LockMode clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const LockMode& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const LockMode& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type OTPCredentialTransportType
/// [`OTPCredentialTransportType`](https://developer.mozilla.org/en-US/docs/Web/API/OTPCredentialTransportType)
class OTPCredentialTransportType: public emlite::Val {
  explicit OTPCredentialTransportType(Handle h) noexcept;
public:
    enum Value {
        SMS,
    };

private:
    Value value_;

public:
    OTPCredentialTransportType() noexcept = delete;
    OTPCredentialTransportType(Value v) noexcept;
    explicit OTPCredentialTransportType(const emlite::Val& val) noexcept;
    static OTPCredentialTransportType take_ownership(Handle h) noexcept;
    [[nodiscard]] OTPCredentialTransportType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const OTPCredentialTransportType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const OTPCredentialTransportType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type AudioContextState
/// [`AudioContextState`](https://developer.mozilla.org/en-US/docs/Web/API/AudioContextState)
class AudioContextState: public emlite::Val {
  explicit AudioContextState(Handle h) noexcept;
public:
    enum Value {
        SUSPENDED,
        RUNNING,
        CLOSED,
        INTERRUPTED,
    };

private:
    Value value_;

public:
    AudioContextState() noexcept = delete;
    AudioContextState(Value v) noexcept;
    explicit AudioContextState(const emlite::Val& val) noexcept;
    static AudioContextState take_ownership(Handle h) noexcept;
    [[nodiscard]] AudioContextState clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const AudioContextState& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const AudioContextState& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type AudioContextRenderSizeCategory
/// [`AudioContextRenderSizeCategory`](https://developer.mozilla.org/en-US/docs/Web/API/AudioContextRenderSizeCategory)
class AudioContextRenderSizeCategory: public emlite::Val {
  explicit AudioContextRenderSizeCategory(Handle h) noexcept;
public:
    enum Value {
        DEFAULT_,
        HARDWARE,
    };

private:
    Value value_;

public:
    AudioContextRenderSizeCategory() noexcept = delete;
    AudioContextRenderSizeCategory(Value v) noexcept;
    explicit AudioContextRenderSizeCategory(const emlite::Val& val) noexcept;
    static AudioContextRenderSizeCategory take_ownership(Handle h) noexcept;
    [[nodiscard]] AudioContextRenderSizeCategory clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const AudioContextRenderSizeCategory& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const AudioContextRenderSizeCategory& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type AudioContextLatencyCategory
/// [`AudioContextLatencyCategory`](https://developer.mozilla.org/en-US/docs/Web/API/AudioContextLatencyCategory)
class AudioContextLatencyCategory: public emlite::Val {
  explicit AudioContextLatencyCategory(Handle h) noexcept;
public:
    enum Value {
        BALANCED,
        INTERACTIVE,
        PLAYBACK,
    };

private:
    Value value_;

public:
    AudioContextLatencyCategory() noexcept = delete;
    AudioContextLatencyCategory(Value v) noexcept;
    explicit AudioContextLatencyCategory(const emlite::Val& val) noexcept;
    static AudioContextLatencyCategory take_ownership(Handle h) noexcept;
    [[nodiscard]] AudioContextLatencyCategory clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const AudioContextLatencyCategory& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const AudioContextLatencyCategory& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type AudioSinkType
/// [`AudioSinkType`](https://developer.mozilla.org/en-US/docs/Web/API/AudioSinkType)
class AudioSinkType: public emlite::Val {
  explicit AudioSinkType(Handle h) noexcept;
public:
    enum Value {
        NONE,
    };

private:
    Value value_;

public:
    AudioSinkType() noexcept = delete;
    AudioSinkType(Value v) noexcept;
    explicit AudioSinkType(const emlite::Val& val) noexcept;
    static AudioSinkType take_ownership(Handle h) noexcept;
    [[nodiscard]] AudioSinkType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const AudioSinkType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const AudioSinkType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type ChannelCountMode
/// [`ChannelCountMode`](https://developer.mozilla.org/en-US/docs/Web/API/ChannelCountMode)
class ChannelCountMode: public emlite::Val {
  explicit ChannelCountMode(Handle h) noexcept;
public:
    enum Value {
        MAX,
        CLAMPED_MAX,
        EXPLICIT_,
    };

private:
    Value value_;

public:
    ChannelCountMode() noexcept = delete;
    ChannelCountMode(Value v) noexcept;
    explicit ChannelCountMode(const emlite::Val& val) noexcept;
    static ChannelCountMode take_ownership(Handle h) noexcept;
    [[nodiscard]] ChannelCountMode clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const ChannelCountMode& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const ChannelCountMode& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type ChannelInterpretation
/// [`ChannelInterpretation`](https://developer.mozilla.org/en-US/docs/Web/API/ChannelInterpretation)
class ChannelInterpretation: public emlite::Val {
  explicit ChannelInterpretation(Handle h) noexcept;
public:
    enum Value {
        SPEAKERS,
        DISCRETE,
    };

private:
    Value value_;

public:
    ChannelInterpretation() noexcept = delete;
    ChannelInterpretation(Value v) noexcept;
    explicit ChannelInterpretation(const emlite::Val& val) noexcept;
    static ChannelInterpretation take_ownership(Handle h) noexcept;
    [[nodiscard]] ChannelInterpretation clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const ChannelInterpretation& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const ChannelInterpretation& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type AutomationRate
/// [`AutomationRate`](https://developer.mozilla.org/en-US/docs/Web/API/AutomationRate)
class AutomationRate: public emlite::Val {
  explicit AutomationRate(Handle h) noexcept;
public:
    enum Value {
        A_RATE,
        K_RATE,
    };

private:
    Value value_;

public:
    AutomationRate() noexcept = delete;
    AutomationRate(Value v) noexcept;
    explicit AutomationRate(const emlite::Val& val) noexcept;
    static AutomationRate take_ownership(Handle h) noexcept;
    [[nodiscard]] AutomationRate clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const AutomationRate& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const AutomationRate& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type BiquadFilterType
/// [`BiquadFilterType`](https://developer.mozilla.org/en-US/docs/Web/API/BiquadFilterType)
class BiquadFilterType: public emlite::Val {
  explicit BiquadFilterType(Handle h) noexcept;
public:
    enum Value {
        LOWPASS,
        HIGHPASS,
        BANDPASS,
        LOWSHELF,
        HIGHSHELF,
        PEAKING,
        NOTCH,
        ALLPASS,
    };

private:
    Value value_;

public:
    BiquadFilterType() noexcept = delete;
    BiquadFilterType(Value v) noexcept;
    explicit BiquadFilterType(const emlite::Val& val) noexcept;
    static BiquadFilterType take_ownership(Handle h) noexcept;
    [[nodiscard]] BiquadFilterType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const BiquadFilterType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const BiquadFilterType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type OscillatorType
/// [`OscillatorType`](https://developer.mozilla.org/en-US/docs/Web/API/OscillatorType)
class OscillatorType: public emlite::Val {
  explicit OscillatorType(Handle h) noexcept;
public:
    enum Value {
        SINE,
        SQUARE,
        SAWTOOTH,
        TRIANGLE,
        CUSTOM,
    };

private:
    Value value_;

public:
    OscillatorType() noexcept = delete;
    OscillatorType(Value v) noexcept;
    explicit OscillatorType(const emlite::Val& val) noexcept;
    static OscillatorType take_ownership(Handle h) noexcept;
    [[nodiscard]] OscillatorType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const OscillatorType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const OscillatorType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type PanningModelType
/// [`PanningModelType`](https://developer.mozilla.org/en-US/docs/Web/API/PanningModelType)
class PanningModelType: public emlite::Val {
  explicit PanningModelType(Handle h) noexcept;
public:
    enum Value {
        EQUALPOWER,
        HRTF,
    };

private:
    Value value_;

public:
    PanningModelType() noexcept = delete;
    PanningModelType(Value v) noexcept;
    explicit PanningModelType(const emlite::Val& val) noexcept;
    static PanningModelType take_ownership(Handle h) noexcept;
    [[nodiscard]] PanningModelType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const PanningModelType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const PanningModelType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type DistanceModelType
/// [`DistanceModelType`](https://developer.mozilla.org/en-US/docs/Web/API/DistanceModelType)
class DistanceModelType: public emlite::Val {
  explicit DistanceModelType(Handle h) noexcept;
public:
    enum Value {
        LINEAR,
        INVERSE,
        EXPONENTIAL,
    };

private:
    Value value_;

public:
    DistanceModelType() noexcept = delete;
    DistanceModelType(Value v) noexcept;
    explicit DistanceModelType(const emlite::Val& val) noexcept;
    static DistanceModelType take_ownership(Handle h) noexcept;
    [[nodiscard]] DistanceModelType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const DistanceModelType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const DistanceModelType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type OverSampleType
/// [`OverSampleType`](https://developer.mozilla.org/en-US/docs/Web/API/OverSampleType)
class OverSampleType: public emlite::Val {
  explicit OverSampleType(Handle h) noexcept;
public:
    enum Value {
        NONE,
        _2X,
        _4X,
    };

private:
    Value value_;

public:
    OverSampleType() noexcept = delete;
    OverSampleType(Value v) noexcept;
    explicit OverSampleType(const emlite::Val& val) noexcept;
    static OverSampleType take_ownership(Handle h) noexcept;
    [[nodiscard]] OverSampleType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const OverSampleType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const OverSampleType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type AuthenticatorAttachment
/// [`AuthenticatorAttachment`](https://developer.mozilla.org/en-US/docs/Web/API/AuthenticatorAttachment)
class AuthenticatorAttachment: public emlite::Val {
  explicit AuthenticatorAttachment(Handle h) noexcept;
public:
    enum Value {
        PLATFORM,
        CROSS_PLATFORM,
    };

private:
    Value value_;

public:
    AuthenticatorAttachment() noexcept = delete;
    AuthenticatorAttachment(Value v) noexcept;
    explicit AuthenticatorAttachment(const emlite::Val& val) noexcept;
    static AuthenticatorAttachment take_ownership(Handle h) noexcept;
    [[nodiscard]] AuthenticatorAttachment clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const AuthenticatorAttachment& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const AuthenticatorAttachment& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type ResidentKeyRequirement
/// [`ResidentKeyRequirement`](https://developer.mozilla.org/en-US/docs/Web/API/ResidentKeyRequirement)
class ResidentKeyRequirement: public emlite::Val {
  explicit ResidentKeyRequirement(Handle h) noexcept;
public:
    enum Value {
        DISCOURAGED,
        PREFERRED,
        REQUIRED,
    };

private:
    Value value_;

public:
    ResidentKeyRequirement() noexcept = delete;
    ResidentKeyRequirement(Value v) noexcept;
    explicit ResidentKeyRequirement(const emlite::Val& val) noexcept;
    static ResidentKeyRequirement take_ownership(Handle h) noexcept;
    [[nodiscard]] ResidentKeyRequirement clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const ResidentKeyRequirement& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const ResidentKeyRequirement& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type AttestationConveyancePreference
/// [`AttestationConveyancePreference`](https://developer.mozilla.org/en-US/docs/Web/API/AttestationConveyancePreference)
class AttestationConveyancePreference: public emlite::Val {
  explicit AttestationConveyancePreference(Handle h) noexcept;
public:
    enum Value {
        NONE,
        INDIRECT,
        DIRECT,
        ENTERPRISE,
    };

private:
    Value value_;

public:
    AttestationConveyancePreference() noexcept = delete;
    AttestationConveyancePreference(Value v) noexcept;
    explicit AttestationConveyancePreference(const emlite::Val& val) noexcept;
    static AttestationConveyancePreference take_ownership(Handle h) noexcept;
    [[nodiscard]] AttestationConveyancePreference clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const AttestationConveyancePreference& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const AttestationConveyancePreference& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type TokenBindingStatus
/// [`TokenBindingStatus`](https://developer.mozilla.org/en-US/docs/Web/API/TokenBindingStatus)
class TokenBindingStatus: public emlite::Val {
  explicit TokenBindingStatus(Handle h) noexcept;
public:
    enum Value {
        PRESENT,
        SUPPORTED,
    };

private:
    Value value_;

public:
    TokenBindingStatus() noexcept = delete;
    TokenBindingStatus(Value v) noexcept;
    explicit TokenBindingStatus(const emlite::Val& val) noexcept;
    static TokenBindingStatus take_ownership(Handle h) noexcept;
    [[nodiscard]] TokenBindingStatus clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const TokenBindingStatus& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const TokenBindingStatus& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type PublicKeyCredentialType
/// [`PublicKeyCredentialType`](https://developer.mozilla.org/en-US/docs/Web/API/PublicKeyCredentialType)
class PublicKeyCredentialType: public emlite::Val {
  explicit PublicKeyCredentialType(Handle h) noexcept;
public:
    enum Value {
        PUBLIC_KEY,
    };

private:
    Value value_;

public:
    PublicKeyCredentialType() noexcept = delete;
    PublicKeyCredentialType(Value v) noexcept;
    explicit PublicKeyCredentialType(const emlite::Val& val) noexcept;
    static PublicKeyCredentialType take_ownership(Handle h) noexcept;
    [[nodiscard]] PublicKeyCredentialType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const PublicKeyCredentialType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const PublicKeyCredentialType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type AuthenticatorTransport
/// [`AuthenticatorTransport`](https://developer.mozilla.org/en-US/docs/Web/API/AuthenticatorTransport)
class AuthenticatorTransport: public emlite::Val {
  explicit AuthenticatorTransport(Handle h) noexcept;
public:
    enum Value {
        USB,
        NFC,
        BLE,
        SMART_CARD,
        HYBRID,
        INTERNAL,
    };

private:
    Value value_;

public:
    AuthenticatorTransport() noexcept = delete;
    AuthenticatorTransport(Value v) noexcept;
    explicit AuthenticatorTransport(const emlite::Val& val) noexcept;
    static AuthenticatorTransport take_ownership(Handle h) noexcept;
    [[nodiscard]] AuthenticatorTransport clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const AuthenticatorTransport& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const AuthenticatorTransport& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type UserVerificationRequirement
/// [`UserVerificationRequirement`](https://developer.mozilla.org/en-US/docs/Web/API/UserVerificationRequirement)
class UserVerificationRequirement: public emlite::Val {
  explicit UserVerificationRequirement(Handle h) noexcept;
public:
    enum Value {
        REQUIRED,
        PREFERRED,
        DISCOURAGED,
    };

private:
    Value value_;

public:
    UserVerificationRequirement() noexcept = delete;
    UserVerificationRequirement(Value v) noexcept;
    explicit UserVerificationRequirement(const emlite::Val& val) noexcept;
    static UserVerificationRequirement take_ownership(Handle h) noexcept;
    [[nodiscard]] UserVerificationRequirement clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const UserVerificationRequirement& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const UserVerificationRequirement& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type ClientCapability
/// [`ClientCapability`](https://developer.mozilla.org/en-US/docs/Web/API/ClientCapability)
class ClientCapability: public emlite::Val {
  explicit ClientCapability(Handle h) noexcept;
public:
    enum Value {
        CONDITIONALCREATE,
        CONDITIONALGET,
        HYBRIDTRANSPORT,
        PASSKEYPLATFORMAUTHENTICATOR,
        USERVERIFYINGPLATFORMAUTHENTICATOR,
        RELATEDORIGINS,
        SIGNALALLACCEPTEDCREDENTIALS,
        SIGNALCURRENTUSERDETAILS,
        SIGNALUNKNOWNCREDENTIAL,
    };

private:
    Value value_;

public:
    ClientCapability() noexcept = delete;
    ClientCapability(Value v) noexcept;
    explicit ClientCapability(const emlite::Val& val) noexcept;
    static ClientCapability take_ownership(Handle h) noexcept;
    [[nodiscard]] ClientCapability clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const ClientCapability& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const ClientCapability& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type PublicKeyCredentialHint
/// [`PublicKeyCredentialHint`](https://developer.mozilla.org/en-US/docs/Web/API/PublicKeyCredentialHint)
class PublicKeyCredentialHint: public emlite::Val {
  explicit PublicKeyCredentialHint(Handle h) noexcept;
public:
    enum Value {
        SECURITY_KEY,
        CLIENT_DEVICE,
        HYBRID,
    };

private:
    Value value_;

public:
    PublicKeyCredentialHint() noexcept = delete;
    PublicKeyCredentialHint(Value v) noexcept;
    explicit PublicKeyCredentialHint(const emlite::Val& val) noexcept;
    static PublicKeyCredentialHint take_ownership(Handle h) noexcept;
    [[nodiscard]] PublicKeyCredentialHint clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const PublicKeyCredentialHint& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const PublicKeyCredentialHint& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type LargeBlobSupport
/// [`LargeBlobSupport`](https://developer.mozilla.org/en-US/docs/Web/API/LargeBlobSupport)
class LargeBlobSupport: public emlite::Val {
  explicit LargeBlobSupport(Handle h) noexcept;
public:
    enum Value {
        REQUIRED,
        PREFERRED,
    };

private:
    Value value_;

public:
    LargeBlobSupport() noexcept = delete;
    LargeBlobSupport(Value v) noexcept;
    explicit LargeBlobSupport(const emlite::Val& val) noexcept;
    static LargeBlobSupport take_ownership(Handle h) noexcept;
    [[nodiscard]] LargeBlobSupport clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const LargeBlobSupport& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const LargeBlobSupport& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type AacBitstreamFormat
/// [`AacBitstreamFormat`](https://developer.mozilla.org/en-US/docs/Web/API/AacBitstreamFormat)
class AacBitstreamFormat: public emlite::Val {
  explicit AacBitstreamFormat(Handle h) noexcept;
public:
    enum Value {
        AAC,
        ADTS,
    };

private:
    Value value_;

public:
    AacBitstreamFormat() noexcept = delete;
    AacBitstreamFormat(Value v) noexcept;
    explicit AacBitstreamFormat(const emlite::Val& val) noexcept;
    static AacBitstreamFormat take_ownership(Handle h) noexcept;
    [[nodiscard]] AacBitstreamFormat clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const AacBitstreamFormat& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const AacBitstreamFormat& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type AvcBitstreamFormat
/// [`AvcBitstreamFormat`](https://developer.mozilla.org/en-US/docs/Web/API/AvcBitstreamFormat)
class AvcBitstreamFormat: public emlite::Val {
  explicit AvcBitstreamFormat(Handle h) noexcept;
public:
    enum Value {
        ANNEXB,
        AVC,
    };

private:
    Value value_;

public:
    AvcBitstreamFormat() noexcept = delete;
    AvcBitstreamFormat(Value v) noexcept;
    explicit AvcBitstreamFormat(const emlite::Val& val) noexcept;
    static AvcBitstreamFormat take_ownership(Handle h) noexcept;
    [[nodiscard]] AvcBitstreamFormat clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const AvcBitstreamFormat& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const AvcBitstreamFormat& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type HevcBitstreamFormat
/// [`HevcBitstreamFormat`](https://developer.mozilla.org/en-US/docs/Web/API/HevcBitstreamFormat)
class HevcBitstreamFormat: public emlite::Val {
  explicit HevcBitstreamFormat(Handle h) noexcept;
public:
    enum Value {
        ANNEXB,
        HEVC,
    };

private:
    Value value_;

public:
    HevcBitstreamFormat() noexcept = delete;
    HevcBitstreamFormat(Value v) noexcept;
    explicit HevcBitstreamFormat(const emlite::Val& val) noexcept;
    static HevcBitstreamFormat take_ownership(Handle h) noexcept;
    [[nodiscard]] HevcBitstreamFormat clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const HevcBitstreamFormat& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const HevcBitstreamFormat& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type OpusBitstreamFormat
/// [`OpusBitstreamFormat`](https://developer.mozilla.org/en-US/docs/Web/API/OpusBitstreamFormat)
class OpusBitstreamFormat: public emlite::Val {
  explicit OpusBitstreamFormat(Handle h) noexcept;
public:
    enum Value {
        OPUS,
        OGG,
    };

private:
    Value value_;

public:
    OpusBitstreamFormat() noexcept = delete;
    OpusBitstreamFormat(Value v) noexcept;
    explicit OpusBitstreamFormat(const emlite::Val& val) noexcept;
    static OpusBitstreamFormat take_ownership(Handle h) noexcept;
    [[nodiscard]] OpusBitstreamFormat clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const OpusBitstreamFormat& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const OpusBitstreamFormat& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type OpusSignal
/// [`OpusSignal`](https://developer.mozilla.org/en-US/docs/Web/API/OpusSignal)
class OpusSignal: public emlite::Val {
  explicit OpusSignal(Handle h) noexcept;
public:
    enum Value {
        AUTO_,
        MUSIC,
        VOICE,
    };

private:
    Value value_;

public:
    OpusSignal() noexcept = delete;
    OpusSignal(Value v) noexcept;
    explicit OpusSignal(const emlite::Val& val) noexcept;
    static OpusSignal take_ownership(Handle h) noexcept;
    [[nodiscard]] OpusSignal clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const OpusSignal& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const OpusSignal& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type OpusApplication
/// [`OpusApplication`](https://developer.mozilla.org/en-US/docs/Web/API/OpusApplication)
class OpusApplication: public emlite::Val {
  explicit OpusApplication(Handle h) noexcept;
public:
    enum Value {
        VOIP,
        AUDIO,
        LOWDELAY,
    };

private:
    Value value_;

public:
    OpusApplication() noexcept = delete;
    OpusApplication(Value v) noexcept;
    explicit OpusApplication(const emlite::Val& val) noexcept;
    static OpusApplication take_ownership(Handle h) noexcept;
    [[nodiscard]] OpusApplication clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const OpusApplication& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const OpusApplication& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type HardwareAcceleration
/// [`HardwareAcceleration`](https://developer.mozilla.org/en-US/docs/Web/API/HardwareAcceleration)
class HardwareAcceleration: public emlite::Val {
  explicit HardwareAcceleration(Handle h) noexcept;
public:
    enum Value {
        NO_PREFERENCE,
        PREFER_HARDWARE,
        PREFER_SOFTWARE,
    };

private:
    Value value_;

public:
    HardwareAcceleration() noexcept = delete;
    HardwareAcceleration(Value v) noexcept;
    explicit HardwareAcceleration(const emlite::Val& val) noexcept;
    static HardwareAcceleration take_ownership(Handle h) noexcept;
    [[nodiscard]] HardwareAcceleration clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const HardwareAcceleration& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const HardwareAcceleration& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type AlphaOption
/// [`AlphaOption`](https://developer.mozilla.org/en-US/docs/Web/API/AlphaOption)
class AlphaOption: public emlite::Val {
  explicit AlphaOption(Handle h) noexcept;
public:
    enum Value {
        KEEP,
        DISCARD,
    };

private:
    Value value_;

public:
    AlphaOption() noexcept = delete;
    AlphaOption(Value v) noexcept;
    explicit AlphaOption(const emlite::Val& val) noexcept;
    static AlphaOption take_ownership(Handle h) noexcept;
    [[nodiscard]] AlphaOption clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const AlphaOption& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const AlphaOption& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type LatencyMode
/// [`LatencyMode`](https://developer.mozilla.org/en-US/docs/Web/API/LatencyMode)
class LatencyMode: public emlite::Val {
  explicit LatencyMode(Handle h) noexcept;
public:
    enum Value {
        QUALITY,
        REALTIME,
    };

private:
    Value value_;

public:
    LatencyMode() noexcept = delete;
    LatencyMode(Value v) noexcept;
    explicit LatencyMode(const emlite::Val& val) noexcept;
    static LatencyMode take_ownership(Handle h) noexcept;
    [[nodiscard]] LatencyMode clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const LatencyMode& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const LatencyMode& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type VideoEncoderBitrateMode
/// [`VideoEncoderBitrateMode`](https://developer.mozilla.org/en-US/docs/Web/API/VideoEncoderBitrateMode)
class VideoEncoderBitrateMode: public emlite::Val {
  explicit VideoEncoderBitrateMode(Handle h) noexcept;
public:
    enum Value {
        CONSTANT,
        VARIABLE,
        QUANTIZER,
    };

private:
    Value value_;

public:
    VideoEncoderBitrateMode() noexcept = delete;
    VideoEncoderBitrateMode(Value v) noexcept;
    explicit VideoEncoderBitrateMode(const emlite::Val& val) noexcept;
    static VideoEncoderBitrateMode take_ownership(Handle h) noexcept;
    [[nodiscard]] VideoEncoderBitrateMode clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const VideoEncoderBitrateMode& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const VideoEncoderBitrateMode& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type CodecState
/// [`CodecState`](https://developer.mozilla.org/en-US/docs/Web/API/CodecState)
class CodecState: public emlite::Val {
  explicit CodecState(Handle h) noexcept;
public:
    enum Value {
        UNCONFIGURED,
        CONFIGURED,
        CLOSED,
    };

private:
    Value value_;

public:
    CodecState() noexcept = delete;
    CodecState(Value v) noexcept;
    explicit CodecState(const emlite::Val& val) noexcept;
    static CodecState take_ownership(Handle h) noexcept;
    [[nodiscard]] CodecState clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const CodecState& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const CodecState& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type EncodedAudioChunkType
/// [`EncodedAudioChunkType`](https://developer.mozilla.org/en-US/docs/Web/API/EncodedAudioChunkType)
class EncodedAudioChunkType: public emlite::Val {
  explicit EncodedAudioChunkType(Handle h) noexcept;
public:
    enum Value {
        KEY,
        DELTA,
    };

private:
    Value value_;

public:
    EncodedAudioChunkType() noexcept = delete;
    EncodedAudioChunkType(Value v) noexcept;
    explicit EncodedAudioChunkType(const emlite::Val& val) noexcept;
    static EncodedAudioChunkType take_ownership(Handle h) noexcept;
    [[nodiscard]] EncodedAudioChunkType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const EncodedAudioChunkType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const EncodedAudioChunkType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type EncodedVideoChunkType
/// [`EncodedVideoChunkType`](https://developer.mozilla.org/en-US/docs/Web/API/EncodedVideoChunkType)
class EncodedVideoChunkType: public emlite::Val {
  explicit EncodedVideoChunkType(Handle h) noexcept;
public:
    enum Value {
        KEY,
        DELTA,
    };

private:
    Value value_;

public:
    EncodedVideoChunkType() noexcept = delete;
    EncodedVideoChunkType(Value v) noexcept;
    explicit EncodedVideoChunkType(const emlite::Val& val) noexcept;
    static EncodedVideoChunkType take_ownership(Handle h) noexcept;
    [[nodiscard]] EncodedVideoChunkType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const EncodedVideoChunkType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const EncodedVideoChunkType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type AudioSampleFormat
/// [`AudioSampleFormat`](https://developer.mozilla.org/en-US/docs/Web/API/AudioSampleFormat)
class AudioSampleFormat: public emlite::Val {
  explicit AudioSampleFormat(Handle h) noexcept;
public:
    enum Value {
        U8,
        S16,
        S32,
        F32,
        U8_PLANAR,
        S16_PLANAR,
        S32_PLANAR,
        F32_PLANAR,
    };

private:
    Value value_;

public:
    AudioSampleFormat() noexcept = delete;
    AudioSampleFormat(Value v) noexcept;
    explicit AudioSampleFormat(const emlite::Val& val) noexcept;
    static AudioSampleFormat take_ownership(Handle h) noexcept;
    [[nodiscard]] AudioSampleFormat clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const AudioSampleFormat& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const AudioSampleFormat& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type VideoPixelFormat
/// [`VideoPixelFormat`](https://developer.mozilla.org/en-US/docs/Web/API/VideoPixelFormat)
class VideoPixelFormat: public emlite::Val {
  explicit VideoPixelFormat(Handle h) noexcept;
public:
    enum Value {
        I420,
        I420P10,
        I420P12,
        I420A,
        I420AP10,
        I420AP12,
        I422,
        I422P10,
        I422P12,
        I422A,
        I422AP10,
        I422AP12,
        I444,
        I444P10,
        I444P12,
        I444A,
        I444AP10,
        I444AP12,
        NV12,
        RGBA,
        RGBX,
        BGRA,
        BGRX,
    };

private:
    Value value_;

public:
    VideoPixelFormat() noexcept = delete;
    VideoPixelFormat(Value v) noexcept;
    explicit VideoPixelFormat(const emlite::Val& val) noexcept;
    static VideoPixelFormat take_ownership(Handle h) noexcept;
    [[nodiscard]] VideoPixelFormat clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const VideoPixelFormat& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const VideoPixelFormat& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type VideoColorPrimaries
/// [`VideoColorPrimaries`](https://developer.mozilla.org/en-US/docs/Web/API/VideoColorPrimaries)
class VideoColorPrimaries: public emlite::Val {
  explicit VideoColorPrimaries(Handle h) noexcept;
public:
    enum Value {
        BT709,
        BT470BG,
        SMPTE170M,
        BT2020,
        SMPTE432,
    };

private:
    Value value_;

public:
    VideoColorPrimaries() noexcept = delete;
    VideoColorPrimaries(Value v) noexcept;
    explicit VideoColorPrimaries(const emlite::Val& val) noexcept;
    static VideoColorPrimaries take_ownership(Handle h) noexcept;
    [[nodiscard]] VideoColorPrimaries clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const VideoColorPrimaries& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const VideoColorPrimaries& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type VideoTransferCharacteristics
/// [`VideoTransferCharacteristics`](https://developer.mozilla.org/en-US/docs/Web/API/VideoTransferCharacteristics)
class VideoTransferCharacteristics: public emlite::Val {
  explicit VideoTransferCharacteristics(Handle h) noexcept;
public:
    enum Value {
        BT709,
        SMPTE170M,
        IEC61966_2_1,
        LINEAR,
        PQ,
        HLG,
    };

private:
    Value value_;

public:
    VideoTransferCharacteristics() noexcept = delete;
    VideoTransferCharacteristics(Value v) noexcept;
    explicit VideoTransferCharacteristics(const emlite::Val& val) noexcept;
    static VideoTransferCharacteristics take_ownership(Handle h) noexcept;
    [[nodiscard]] VideoTransferCharacteristics clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const VideoTransferCharacteristics& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const VideoTransferCharacteristics& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type VideoMatrixCoefficients
/// [`VideoMatrixCoefficients`](https://developer.mozilla.org/en-US/docs/Web/API/VideoMatrixCoefficients)
class VideoMatrixCoefficients: public emlite::Val {
  explicit VideoMatrixCoefficients(Handle h) noexcept;
public:
    enum Value {
        RGB,
        BT709,
        BT470BG,
        SMPTE170M,
        BT2020_NCL,
    };

private:
    Value value_;

public:
    VideoMatrixCoefficients() noexcept = delete;
    VideoMatrixCoefficients(Value v) noexcept;
    explicit VideoMatrixCoefficients(const emlite::Val& val) noexcept;
    static VideoMatrixCoefficients take_ownership(Handle h) noexcept;
    [[nodiscard]] VideoMatrixCoefficients clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const VideoMatrixCoefficients& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const VideoMatrixCoefficients& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type KeyType
/// [`KeyType`](https://developer.mozilla.org/en-US/docs/Web/API/KeyType)
class KeyType: public emlite::Val {
  explicit KeyType(Handle h) noexcept;
public:
    enum Value {
        PUBLIC_,
        PRIVATE_,
        SECRET,
    };

private:
    Value value_;

public:
    KeyType() noexcept = delete;
    KeyType(Value v) noexcept;
    explicit KeyType(const emlite::Val& val) noexcept;
    static KeyType take_ownership(Handle h) noexcept;
    [[nodiscard]] KeyType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const KeyType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const KeyType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type KeyUsage
/// [`KeyUsage`](https://developer.mozilla.org/en-US/docs/Web/API/KeyUsage)
class KeyUsage: public emlite::Val {
  explicit KeyUsage(Handle h) noexcept;
public:
    enum Value {
        ENCRYPT,
        DECRYPT,
        SIGN,
        VERIFY,
        DERIVEKEY,
        DERIVEBITS,
        WRAPKEY,
        UNWRAPKEY,
    };

private:
    Value value_;

public:
    KeyUsage() noexcept = delete;
    KeyUsage(Value v) noexcept;
    explicit KeyUsage(const emlite::Val& val) noexcept;
    static KeyUsage take_ownership(Handle h) noexcept;
    [[nodiscard]] KeyUsage clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const KeyUsage& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const KeyUsage& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type KeyFormat
/// [`KeyFormat`](https://developer.mozilla.org/en-US/docs/Web/API/KeyFormat)
class KeyFormat: public emlite::Val {
  explicit KeyFormat(Handle h) noexcept;
public:
    enum Value {
        RAW,
        SPKI,
        PKCS8,
        JWK,
    };

private:
    Value value_;

public:
    KeyFormat() noexcept = delete;
    KeyFormat(Value v) noexcept;
    explicit KeyFormat(const emlite::Val& val) noexcept;
    static KeyFormat take_ownership(Handle h) noexcept;
    [[nodiscard]] KeyFormat clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const KeyFormat& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const KeyFormat& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type WebGLPowerPreference
/// [`WebGLPowerPreference`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLPowerPreference)
class WebGLPowerPreference: public emlite::Val {
  explicit WebGLPowerPreference(Handle h) noexcept;
public:
    enum Value {
        DEFAULT_,
        LOW_POWER,
        HIGH_PERFORMANCE,
    };

private:
    Value value_;

public:
    WebGLPowerPreference() noexcept = delete;
    WebGLPowerPreference(Value v) noexcept;
    explicit WebGLPowerPreference(const emlite::Val& val) noexcept;
    static WebGLPowerPreference take_ownership(Handle h) noexcept;
    [[nodiscard]] WebGLPowerPreference clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const WebGLPowerPreference& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const WebGLPowerPreference& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type GPUPowerPreference
/// [`GPUPowerPreference`](https://developer.mozilla.org/en-US/docs/Web/API/GPUPowerPreference)
class GPUPowerPreference: public emlite::Val {
  explicit GPUPowerPreference(Handle h) noexcept;
public:
    enum Value {
        LOW_POWER,
        HIGH_PERFORMANCE,
    };

private:
    Value value_;

public:
    GPUPowerPreference() noexcept = delete;
    GPUPowerPreference(Value v) noexcept;
    explicit GPUPowerPreference(const emlite::Val& val) noexcept;
    static GPUPowerPreference take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUPowerPreference clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const GPUPowerPreference& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const GPUPowerPreference& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type GPUFeatureName
/// [`GPUFeatureName`](https://developer.mozilla.org/en-US/docs/Web/API/GPUFeatureName)
class GPUFeatureName: public emlite::Val {
  explicit GPUFeatureName(Handle h) noexcept;
public:
    enum Value {
        CORE_FEATURES_AND_LIMITS,
        DEPTH_CLIP_CONTROL,
        DEPTH32FLOAT_STENCIL8,
        TEXTURE_COMPRESSION_BC,
        TEXTURE_COMPRESSION_BC_SLICED_3D,
        TEXTURE_COMPRESSION_ETC2,
        TEXTURE_COMPRESSION_ASTC,
        TEXTURE_COMPRESSION_ASTC_SLICED_3D,
        TIMESTAMP_QUERY,
        INDIRECT_FIRST_INSTANCE,
        SHADER_F16,
        RG11B10UFLOAT_RENDERABLE,
        BGRA8UNORM_STORAGE,
        FLOAT32_FILTERABLE,
        FLOAT32_BLENDABLE,
        CLIP_DISTANCES,
        DUAL_SOURCE_BLENDING,
        SUBGROUPS,
        TEXTURE_FORMATS_TIER1,
        TEXTURE_FORMATS_TIER2,
    };

private:
    Value value_;

public:
    GPUFeatureName() noexcept = delete;
    GPUFeatureName(Value v) noexcept;
    explicit GPUFeatureName(const emlite::Val& val) noexcept;
    static GPUFeatureName take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUFeatureName clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const GPUFeatureName& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const GPUFeatureName& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type GPUBufferMapState
/// [`GPUBufferMapState`](https://developer.mozilla.org/en-US/docs/Web/API/GPUBufferMapState)
class GPUBufferMapState: public emlite::Val {
  explicit GPUBufferMapState(Handle h) noexcept;
public:
    enum Value {
        UNMAPPED,
        PENDING,
        MAPPED,
    };

private:
    Value value_;

public:
    GPUBufferMapState() noexcept = delete;
    GPUBufferMapState(Value v) noexcept;
    explicit GPUBufferMapState(const emlite::Val& val) noexcept;
    static GPUBufferMapState take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUBufferMapState clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const GPUBufferMapState& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const GPUBufferMapState& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type GPUTextureDimension
/// [`GPUTextureDimension`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTextureDimension)
class GPUTextureDimension: public emlite::Val {
  explicit GPUTextureDimension(Handle h) noexcept;
public:
    enum Value {
        _1D,
        _2D,
        _3D,
    };

private:
    Value value_;

public:
    GPUTextureDimension() noexcept = delete;
    GPUTextureDimension(Value v) noexcept;
    explicit GPUTextureDimension(const emlite::Val& val) noexcept;
    static GPUTextureDimension take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUTextureDimension clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const GPUTextureDimension& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const GPUTextureDimension& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type GPUTextureViewDimension
/// [`GPUTextureViewDimension`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTextureViewDimension)
class GPUTextureViewDimension: public emlite::Val {
  explicit GPUTextureViewDimension(Handle h) noexcept;
public:
    enum Value {
        _1D,
        _2D,
        _2D_ARRAY,
        CUBE,
        CUBE_ARRAY,
        _3D,
    };

private:
    Value value_;

public:
    GPUTextureViewDimension() noexcept = delete;
    GPUTextureViewDimension(Value v) noexcept;
    explicit GPUTextureViewDimension(const emlite::Val& val) noexcept;
    static GPUTextureViewDimension take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUTextureViewDimension clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const GPUTextureViewDimension& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const GPUTextureViewDimension& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type GPUTextureAspect
/// [`GPUTextureAspect`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTextureAspect)
class GPUTextureAspect: public emlite::Val {
  explicit GPUTextureAspect(Handle h) noexcept;
public:
    enum Value {
        ALL,
        STENCIL_ONLY,
        DEPTH_ONLY,
    };

private:
    Value value_;

public:
    GPUTextureAspect() noexcept = delete;
    GPUTextureAspect(Value v) noexcept;
    explicit GPUTextureAspect(const emlite::Val& val) noexcept;
    static GPUTextureAspect take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUTextureAspect clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const GPUTextureAspect& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const GPUTextureAspect& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type GPUTextureFormat
/// [`GPUTextureFormat`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTextureFormat)
class GPUTextureFormat: public emlite::Val {
  explicit GPUTextureFormat(Handle h) noexcept;
public:
    enum Value {
        R8UNORM,
        R8SNORM,
        R8UINT,
        R8SINT,
        R16UNORM,
        R16SNORM,
        R16UINT,
        R16SINT,
        R16FLOAT,
        RG8UNORM,
        RG8SNORM,
        RG8UINT,
        RG8SINT,
        R32UINT,
        R32SINT,
        R32FLOAT,
        RG16UNORM,
        RG16SNORM,
        RG16UINT,
        RG16SINT,
        RG16FLOAT,
        RGBA8UNORM,
        RGBA8UNORM_SRGB,
        RGBA8SNORM,
        RGBA8UINT,
        RGBA8SINT,
        BGRA8UNORM,
        BGRA8UNORM_SRGB,
        RGB9E5UFLOAT,
        RGB10A2UINT,
        RGB10A2UNORM,
        RG11B10UFLOAT,
        RG32UINT,
        RG32SINT,
        RG32FLOAT,
        RGBA16UNORM,
        RGBA16SNORM,
        RGBA16UINT,
        RGBA16SINT,
        RGBA16FLOAT,
        RGBA32UINT,
        RGBA32SINT,
        RGBA32FLOAT,
        STENCIL8,
        DEPTH16UNORM,
        DEPTH24PLUS,
        DEPTH24PLUS_STENCIL8,
        DEPTH32FLOAT,
        DEPTH32FLOAT_STENCIL8,
        BC1_RGBA_UNORM,
        BC1_RGBA_UNORM_SRGB,
        BC2_RGBA_UNORM,
        BC2_RGBA_UNORM_SRGB,
        BC3_RGBA_UNORM,
        BC3_RGBA_UNORM_SRGB,
        BC4_R_UNORM,
        BC4_R_SNORM,
        BC5_RG_UNORM,
        BC5_RG_SNORM,
        BC6H_RGB_UFLOAT,
        BC6H_RGB_FLOAT,
        BC7_RGBA_UNORM,
        BC7_RGBA_UNORM_SRGB,
        ETC2_RGB8UNORM,
        ETC2_RGB8UNORM_SRGB,
        ETC2_RGB8A1UNORM,
        ETC2_RGB8A1UNORM_SRGB,
        ETC2_RGBA8UNORM,
        ETC2_RGBA8UNORM_SRGB,
        EAC_R11UNORM,
        EAC_R11SNORM,
        EAC_RG11UNORM,
        EAC_RG11SNORM,
        ASTC_4X4_UNORM,
        ASTC_4X4_UNORM_SRGB,
        ASTC_5X4_UNORM,
        ASTC_5X4_UNORM_SRGB,
        ASTC_5X5_UNORM,
        ASTC_5X5_UNORM_SRGB,
        ASTC_6X5_UNORM,
        ASTC_6X5_UNORM_SRGB,
        ASTC_6X6_UNORM,
        ASTC_6X6_UNORM_SRGB,
        ASTC_8X5_UNORM,
        ASTC_8X5_UNORM_SRGB,
        ASTC_8X6_UNORM,
        ASTC_8X6_UNORM_SRGB,
        ASTC_8X8_UNORM,
        ASTC_8X8_UNORM_SRGB,
        ASTC_10X5_UNORM,
        ASTC_10X5_UNORM_SRGB,
        ASTC_10X6_UNORM,
        ASTC_10X6_UNORM_SRGB,
        ASTC_10X8_UNORM,
        ASTC_10X8_UNORM_SRGB,
        ASTC_10X10_UNORM,
        ASTC_10X10_UNORM_SRGB,
        ASTC_12X10_UNORM,
        ASTC_12X10_UNORM_SRGB,
        ASTC_12X12_UNORM,
        ASTC_12X12_UNORM_SRGB,
    };

private:
    Value value_;

public:
    GPUTextureFormat() noexcept = delete;
    GPUTextureFormat(Value v) noexcept;
    explicit GPUTextureFormat(const emlite::Val& val) noexcept;
    static GPUTextureFormat take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUTextureFormat clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const GPUTextureFormat& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const GPUTextureFormat& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type GPUAddressMode
/// [`GPUAddressMode`](https://developer.mozilla.org/en-US/docs/Web/API/GPUAddressMode)
class GPUAddressMode: public emlite::Val {
  explicit GPUAddressMode(Handle h) noexcept;
public:
    enum Value {
        CLAMP_TO_EDGE,
        REPEAT,
        MIRROR_REPEAT,
    };

private:
    Value value_;

public:
    GPUAddressMode() noexcept = delete;
    GPUAddressMode(Value v) noexcept;
    explicit GPUAddressMode(const emlite::Val& val) noexcept;
    static GPUAddressMode take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUAddressMode clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const GPUAddressMode& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const GPUAddressMode& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type GPUFilterMode
/// [`GPUFilterMode`](https://developer.mozilla.org/en-US/docs/Web/API/GPUFilterMode)
class GPUFilterMode: public emlite::Val {
  explicit GPUFilterMode(Handle h) noexcept;
public:
    enum Value {
        NEAREST,
        LINEAR,
    };

private:
    Value value_;

public:
    GPUFilterMode() noexcept = delete;
    GPUFilterMode(Value v) noexcept;
    explicit GPUFilterMode(const emlite::Val& val) noexcept;
    static GPUFilterMode take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUFilterMode clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const GPUFilterMode& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const GPUFilterMode& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type GPUMipmapFilterMode
/// [`GPUMipmapFilterMode`](https://developer.mozilla.org/en-US/docs/Web/API/GPUMipmapFilterMode)
class GPUMipmapFilterMode: public emlite::Val {
  explicit GPUMipmapFilterMode(Handle h) noexcept;
public:
    enum Value {
        NEAREST,
        LINEAR,
    };

private:
    Value value_;

public:
    GPUMipmapFilterMode() noexcept = delete;
    GPUMipmapFilterMode(Value v) noexcept;
    explicit GPUMipmapFilterMode(const emlite::Val& val) noexcept;
    static GPUMipmapFilterMode take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUMipmapFilterMode clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const GPUMipmapFilterMode& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const GPUMipmapFilterMode& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type GPUCompareFunction
/// [`GPUCompareFunction`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCompareFunction)
class GPUCompareFunction: public emlite::Val {
  explicit GPUCompareFunction(Handle h) noexcept;
public:
    enum Value {
        NEVER,
        LESS,
        EQUAL,
        LESS_EQUAL,
        GREATER,
        NOT_EQUAL,
        GREATER_EQUAL,
        ALWAYS,
    };

private:
    Value value_;

public:
    GPUCompareFunction() noexcept = delete;
    GPUCompareFunction(Value v) noexcept;
    explicit GPUCompareFunction(const emlite::Val& val) noexcept;
    static GPUCompareFunction take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUCompareFunction clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const GPUCompareFunction& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const GPUCompareFunction& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type GPUBufferBindingType
/// [`GPUBufferBindingType`](https://developer.mozilla.org/en-US/docs/Web/API/GPUBufferBindingType)
class GPUBufferBindingType: public emlite::Val {
  explicit GPUBufferBindingType(Handle h) noexcept;
public:
    enum Value {
        UNIFORM,
        STORAGE,
        READ_ONLY_STORAGE,
    };

private:
    Value value_;

public:
    GPUBufferBindingType() noexcept = delete;
    GPUBufferBindingType(Value v) noexcept;
    explicit GPUBufferBindingType(const emlite::Val& val) noexcept;
    static GPUBufferBindingType take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUBufferBindingType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const GPUBufferBindingType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const GPUBufferBindingType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type GPUSamplerBindingType
/// [`GPUSamplerBindingType`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSamplerBindingType)
class GPUSamplerBindingType: public emlite::Val {
  explicit GPUSamplerBindingType(Handle h) noexcept;
public:
    enum Value {
        FILTERING,
        NON_FILTERING,
        COMPARISON,
    };

private:
    Value value_;

public:
    GPUSamplerBindingType() noexcept = delete;
    GPUSamplerBindingType(Value v) noexcept;
    explicit GPUSamplerBindingType(const emlite::Val& val) noexcept;
    static GPUSamplerBindingType take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUSamplerBindingType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const GPUSamplerBindingType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const GPUSamplerBindingType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type GPUTextureSampleType
/// [`GPUTextureSampleType`](https://developer.mozilla.org/en-US/docs/Web/API/GPUTextureSampleType)
class GPUTextureSampleType: public emlite::Val {
  explicit GPUTextureSampleType(Handle h) noexcept;
public:
    enum Value {
        FLOAT_,
        UNFILTERABLE_FLOAT,
        DEPTH,
        SINT,
        UINT,
    };

private:
    Value value_;

public:
    GPUTextureSampleType() noexcept = delete;
    GPUTextureSampleType(Value v) noexcept;
    explicit GPUTextureSampleType(const emlite::Val& val) noexcept;
    static GPUTextureSampleType take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUTextureSampleType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const GPUTextureSampleType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const GPUTextureSampleType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type GPUStorageTextureAccess
/// [`GPUStorageTextureAccess`](https://developer.mozilla.org/en-US/docs/Web/API/GPUStorageTextureAccess)
class GPUStorageTextureAccess: public emlite::Val {
  explicit GPUStorageTextureAccess(Handle h) noexcept;
public:
    enum Value {
        WRITE_ONLY,
        READ_ONLY,
        READ_WRITE,
    };

private:
    Value value_;

public:
    GPUStorageTextureAccess() noexcept = delete;
    GPUStorageTextureAccess(Value v) noexcept;
    explicit GPUStorageTextureAccess(const emlite::Val& val) noexcept;
    static GPUStorageTextureAccess take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUStorageTextureAccess clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const GPUStorageTextureAccess& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const GPUStorageTextureAccess& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type GPUCompilationMessageType
/// [`GPUCompilationMessageType`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCompilationMessageType)
class GPUCompilationMessageType: public emlite::Val {
  explicit GPUCompilationMessageType(Handle h) noexcept;
public:
    enum Value {
        ERROR,
        WARNING,
        INFO,
    };

private:
    Value value_;

public:
    GPUCompilationMessageType() noexcept = delete;
    GPUCompilationMessageType(Value v) noexcept;
    explicit GPUCompilationMessageType(const emlite::Val& val) noexcept;
    static GPUCompilationMessageType take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUCompilationMessageType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const GPUCompilationMessageType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const GPUCompilationMessageType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type GPUPipelineErrorReason
/// [`GPUPipelineErrorReason`](https://developer.mozilla.org/en-US/docs/Web/API/GPUPipelineErrorReason)
class GPUPipelineErrorReason: public emlite::Val {
  explicit GPUPipelineErrorReason(Handle h) noexcept;
public:
    enum Value {
        VALIDATION,
        INTERNAL,
    };

private:
    Value value_;

public:
    GPUPipelineErrorReason() noexcept = delete;
    GPUPipelineErrorReason(Value v) noexcept;
    explicit GPUPipelineErrorReason(const emlite::Val& val) noexcept;
    static GPUPipelineErrorReason take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUPipelineErrorReason clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const GPUPipelineErrorReason& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const GPUPipelineErrorReason& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type GPUAutoLayoutMode
/// [`GPUAutoLayoutMode`](https://developer.mozilla.org/en-US/docs/Web/API/GPUAutoLayoutMode)
class GPUAutoLayoutMode: public emlite::Val {
  explicit GPUAutoLayoutMode(Handle h) noexcept;
public:
    enum Value {
        AUTO_,
    };

private:
    Value value_;

public:
    GPUAutoLayoutMode() noexcept = delete;
    GPUAutoLayoutMode(Value v) noexcept;
    explicit GPUAutoLayoutMode(const emlite::Val& val) noexcept;
    static GPUAutoLayoutMode take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUAutoLayoutMode clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const GPUAutoLayoutMode& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const GPUAutoLayoutMode& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type GPUPrimitiveTopology
/// [`GPUPrimitiveTopology`](https://developer.mozilla.org/en-US/docs/Web/API/GPUPrimitiveTopology)
class GPUPrimitiveTopology: public emlite::Val {
  explicit GPUPrimitiveTopology(Handle h) noexcept;
public:
    enum Value {
        POINT_LIST,
        LINE_LIST,
        LINE_STRIP,
        TRIANGLE_LIST,
        TRIANGLE_STRIP,
    };

private:
    Value value_;

public:
    GPUPrimitiveTopology() noexcept = delete;
    GPUPrimitiveTopology(Value v) noexcept;
    explicit GPUPrimitiveTopology(const emlite::Val& val) noexcept;
    static GPUPrimitiveTopology take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUPrimitiveTopology clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const GPUPrimitiveTopology& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const GPUPrimitiveTopology& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type GPUFrontFace
/// [`GPUFrontFace`](https://developer.mozilla.org/en-US/docs/Web/API/GPUFrontFace)
class GPUFrontFace: public emlite::Val {
  explicit GPUFrontFace(Handle h) noexcept;
public:
    enum Value {
        CCW,
        CW,
    };

private:
    Value value_;

public:
    GPUFrontFace() noexcept = delete;
    GPUFrontFace(Value v) noexcept;
    explicit GPUFrontFace(const emlite::Val& val) noexcept;
    static GPUFrontFace take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUFrontFace clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const GPUFrontFace& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const GPUFrontFace& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type GPUCullMode
/// [`GPUCullMode`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCullMode)
class GPUCullMode: public emlite::Val {
  explicit GPUCullMode(Handle h) noexcept;
public:
    enum Value {
        NONE,
        FRONT,
        BACK,
    };

private:
    Value value_;

public:
    GPUCullMode() noexcept = delete;
    GPUCullMode(Value v) noexcept;
    explicit GPUCullMode(const emlite::Val& val) noexcept;
    static GPUCullMode take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUCullMode clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const GPUCullMode& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const GPUCullMode& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type GPUBlendFactor
/// [`GPUBlendFactor`](https://developer.mozilla.org/en-US/docs/Web/API/GPUBlendFactor)
class GPUBlendFactor: public emlite::Val {
  explicit GPUBlendFactor(Handle h) noexcept;
public:
    enum Value {
        ZERO,
        ONE,
        SRC,
        ONE_MINUS_SRC,
        SRC_ALPHA,
        ONE_MINUS_SRC_ALPHA,
        DST,
        ONE_MINUS_DST,
        DST_ALPHA,
        ONE_MINUS_DST_ALPHA,
        SRC_ALPHA_SATURATED,
        CONSTANT,
        ONE_MINUS_CONSTANT,
        SRC1,
        ONE_MINUS_SRC1,
        SRC1_ALPHA,
        ONE_MINUS_SRC1_ALPHA,
    };

private:
    Value value_;

public:
    GPUBlendFactor() noexcept = delete;
    GPUBlendFactor(Value v) noexcept;
    explicit GPUBlendFactor(const emlite::Val& val) noexcept;
    static GPUBlendFactor take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUBlendFactor clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const GPUBlendFactor& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const GPUBlendFactor& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type GPUBlendOperation
/// [`GPUBlendOperation`](https://developer.mozilla.org/en-US/docs/Web/API/GPUBlendOperation)
class GPUBlendOperation: public emlite::Val {
  explicit GPUBlendOperation(Handle h) noexcept;
public:
    enum Value {
        ADD,
        SUBTRACT,
        REVERSE_SUBTRACT,
        MIN,
        MAX,
    };

private:
    Value value_;

public:
    GPUBlendOperation() noexcept = delete;
    GPUBlendOperation(Value v) noexcept;
    explicit GPUBlendOperation(const emlite::Val& val) noexcept;
    static GPUBlendOperation take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUBlendOperation clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const GPUBlendOperation& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const GPUBlendOperation& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type GPUStencilOperation
/// [`GPUStencilOperation`](https://developer.mozilla.org/en-US/docs/Web/API/GPUStencilOperation)
class GPUStencilOperation: public emlite::Val {
  explicit GPUStencilOperation(Handle h) noexcept;
public:
    enum Value {
        KEEP,
        ZERO,
        REPLACE,
        INVERT,
        INCREMENT_CLAMP,
        DECREMENT_CLAMP,
        INCREMENT_WRAP,
        DECREMENT_WRAP,
    };

private:
    Value value_;

public:
    GPUStencilOperation() noexcept = delete;
    GPUStencilOperation(Value v) noexcept;
    explicit GPUStencilOperation(const emlite::Val& val) noexcept;
    static GPUStencilOperation take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUStencilOperation clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const GPUStencilOperation& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const GPUStencilOperation& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type GPUIndexFormat
/// [`GPUIndexFormat`](https://developer.mozilla.org/en-US/docs/Web/API/GPUIndexFormat)
class GPUIndexFormat: public emlite::Val {
  explicit GPUIndexFormat(Handle h) noexcept;
public:
    enum Value {
        UINT16,
        UINT32,
    };

private:
    Value value_;

public:
    GPUIndexFormat() noexcept = delete;
    GPUIndexFormat(Value v) noexcept;
    explicit GPUIndexFormat(const emlite::Val& val) noexcept;
    static GPUIndexFormat take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUIndexFormat clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const GPUIndexFormat& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const GPUIndexFormat& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type GPUVertexFormat
/// [`GPUVertexFormat`](https://developer.mozilla.org/en-US/docs/Web/API/GPUVertexFormat)
class GPUVertexFormat: public emlite::Val {
  explicit GPUVertexFormat(Handle h) noexcept;
public:
    enum Value {
        UINT8,
        UINT8X2,
        UINT8X4,
        SINT8,
        SINT8X2,
        SINT8X4,
        UNORM8,
        UNORM8X2,
        UNORM8X4,
        SNORM8,
        SNORM8X2,
        SNORM8X4,
        UINT16,
        UINT16X2,
        UINT16X4,
        SINT16,
        SINT16X2,
        SINT16X4,
        UNORM16,
        UNORM16X2,
        UNORM16X4,
        SNORM16,
        SNORM16X2,
        SNORM16X4,
        FLOAT16,
        FLOAT16X2,
        FLOAT16X4,
        FLOAT32,
        FLOAT32X2,
        FLOAT32X3,
        FLOAT32X4,
        UINT32,
        UINT32X2,
        UINT32X3,
        UINT32X4,
        SINT32,
        SINT32X2,
        SINT32X3,
        SINT32X4,
        UNORM10_10_10_2,
        UNORM8X4_BGRA,
    };

private:
    Value value_;

public:
    GPUVertexFormat() noexcept = delete;
    GPUVertexFormat(Value v) noexcept;
    explicit GPUVertexFormat(const emlite::Val& val) noexcept;
    static GPUVertexFormat take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUVertexFormat clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const GPUVertexFormat& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const GPUVertexFormat& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type GPUVertexStepMode
/// [`GPUVertexStepMode`](https://developer.mozilla.org/en-US/docs/Web/API/GPUVertexStepMode)
class GPUVertexStepMode: public emlite::Val {
  explicit GPUVertexStepMode(Handle h) noexcept;
public:
    enum Value {
        VERTEX,
        INSTANCE,
    };

private:
    Value value_;

public:
    GPUVertexStepMode() noexcept = delete;
    GPUVertexStepMode(Value v) noexcept;
    explicit GPUVertexStepMode(const emlite::Val& val) noexcept;
    static GPUVertexStepMode take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUVertexStepMode clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const GPUVertexStepMode& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const GPUVertexStepMode& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type GPULoadOp
/// [`GPULoadOp`](https://developer.mozilla.org/en-US/docs/Web/API/GPULoadOp)
class GPULoadOp: public emlite::Val {
  explicit GPULoadOp(Handle h) noexcept;
public:
    enum Value {
        LOAD,
        CLEAR,
    };

private:
    Value value_;

public:
    GPULoadOp() noexcept = delete;
    GPULoadOp(Value v) noexcept;
    explicit GPULoadOp(const emlite::Val& val) noexcept;
    static GPULoadOp take_ownership(Handle h) noexcept;
    [[nodiscard]] GPULoadOp clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const GPULoadOp& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const GPULoadOp& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type GPUStoreOp
/// [`GPUStoreOp`](https://developer.mozilla.org/en-US/docs/Web/API/GPUStoreOp)
class GPUStoreOp: public emlite::Val {
  explicit GPUStoreOp(Handle h) noexcept;
public:
    enum Value {
        STORE,
        DISCARD,
    };

private:
    Value value_;

public:
    GPUStoreOp() noexcept = delete;
    GPUStoreOp(Value v) noexcept;
    explicit GPUStoreOp(const emlite::Val& val) noexcept;
    static GPUStoreOp take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUStoreOp clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const GPUStoreOp& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const GPUStoreOp& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type GPUQueryType
/// [`GPUQueryType`](https://developer.mozilla.org/en-US/docs/Web/API/GPUQueryType)
class GPUQueryType: public emlite::Val {
  explicit GPUQueryType(Handle h) noexcept;
public:
    enum Value {
        OCCLUSION,
        TIMESTAMP,
    };

private:
    Value value_;

public:
    GPUQueryType() noexcept = delete;
    GPUQueryType(Value v) noexcept;
    explicit GPUQueryType(const emlite::Val& val) noexcept;
    static GPUQueryType take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUQueryType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const GPUQueryType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const GPUQueryType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type GPUCanvasAlphaMode
/// [`GPUCanvasAlphaMode`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCanvasAlphaMode)
class GPUCanvasAlphaMode: public emlite::Val {
  explicit GPUCanvasAlphaMode(Handle h) noexcept;
public:
    enum Value {
        OPAQUE,
        PREMULTIPLIED,
    };

private:
    Value value_;

public:
    GPUCanvasAlphaMode() noexcept = delete;
    GPUCanvasAlphaMode(Value v) noexcept;
    explicit GPUCanvasAlphaMode(const emlite::Val& val) noexcept;
    static GPUCanvasAlphaMode take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUCanvasAlphaMode clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const GPUCanvasAlphaMode& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const GPUCanvasAlphaMode& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type GPUCanvasToneMappingMode
/// [`GPUCanvasToneMappingMode`](https://developer.mozilla.org/en-US/docs/Web/API/GPUCanvasToneMappingMode)
class GPUCanvasToneMappingMode: public emlite::Val {
  explicit GPUCanvasToneMappingMode(Handle h) noexcept;
public:
    enum Value {
        STANDARD,
        EXTENDED,
    };

private:
    Value value_;

public:
    GPUCanvasToneMappingMode() noexcept = delete;
    GPUCanvasToneMappingMode(Value v) noexcept;
    explicit GPUCanvasToneMappingMode(const emlite::Val& val) noexcept;
    static GPUCanvasToneMappingMode take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUCanvasToneMappingMode clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const GPUCanvasToneMappingMode& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const GPUCanvasToneMappingMode& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type GPUDeviceLostReason
/// [`GPUDeviceLostReason`](https://developer.mozilla.org/en-US/docs/Web/API/GPUDeviceLostReason)
class GPUDeviceLostReason: public emlite::Val {
  explicit GPUDeviceLostReason(Handle h) noexcept;
public:
    enum Value {
        UNKNOWN,
        DESTROYED,
    };

private:
    Value value_;

public:
    GPUDeviceLostReason() noexcept = delete;
    GPUDeviceLostReason(Value v) noexcept;
    explicit GPUDeviceLostReason(const emlite::Val& val) noexcept;
    static GPUDeviceLostReason take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUDeviceLostReason clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const GPUDeviceLostReason& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const GPUDeviceLostReason& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type GPUErrorFilter
/// [`GPUErrorFilter`](https://developer.mozilla.org/en-US/docs/Web/API/GPUErrorFilter)
class GPUErrorFilter: public emlite::Val {
  explicit GPUErrorFilter(Handle h) noexcept;
public:
    enum Value {
        VALIDATION,
        OUT_OF_MEMORY,
        INTERNAL,
    };

private:
    Value value_;

public:
    GPUErrorFilter() noexcept = delete;
    GPUErrorFilter(Value v) noexcept;
    explicit GPUErrorFilter(const emlite::Val& val) noexcept;
    static GPUErrorFilter take_ownership(Handle h) noexcept;
    [[nodiscard]] GPUErrorFilter clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const GPUErrorFilter& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const GPUErrorFilter& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type HIDUnitSystem
/// [`HIDUnitSystem`](https://developer.mozilla.org/en-US/docs/Web/API/HIDUnitSystem)
class HIDUnitSystem: public emlite::Val {
  explicit HIDUnitSystem(Handle h) noexcept;
public:
    enum Value {
        NONE,
        SI_LINEAR,
        SI_ROTATION,
        ENGLISH_LINEAR,
        ENGLISH_ROTATION,
        VENDOR_DEFINED,
        RESERVED,
    };

private:
    Value value_;

public:
    HIDUnitSystem() noexcept = delete;
    HIDUnitSystem(Value v) noexcept;
    explicit HIDUnitSystem(const emlite::Val& val) noexcept;
    static HIDUnitSystem take_ownership(Handle h) noexcept;
    [[nodiscard]] HIDUnitSystem clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const HIDUnitSystem& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const HIDUnitSystem& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type MIDIPortType
/// [`MIDIPortType`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIPortType)
class MIDIPortType: public emlite::Val {
  explicit MIDIPortType(Handle h) noexcept;
public:
    enum Value {
        INPUT,
        OUTPUT,
    };

private:
    Value value_;

public:
    MIDIPortType() noexcept = delete;
    MIDIPortType(Value v) noexcept;
    explicit MIDIPortType(const emlite::Val& val) noexcept;
    static MIDIPortType take_ownership(Handle h) noexcept;
    [[nodiscard]] MIDIPortType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const MIDIPortType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const MIDIPortType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type MIDIPortDeviceState
/// [`MIDIPortDeviceState`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIPortDeviceState)
class MIDIPortDeviceState: public emlite::Val {
  explicit MIDIPortDeviceState(Handle h) noexcept;
public:
    enum Value {
        DISCONNECTED,
        CONNECTED,
    };

private:
    Value value_;

public:
    MIDIPortDeviceState() noexcept = delete;
    MIDIPortDeviceState(Value v) noexcept;
    explicit MIDIPortDeviceState(const emlite::Val& val) noexcept;
    static MIDIPortDeviceState take_ownership(Handle h) noexcept;
    [[nodiscard]] MIDIPortDeviceState clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const MIDIPortDeviceState& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const MIDIPortDeviceState& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type MIDIPortConnectionState
/// [`MIDIPortConnectionState`](https://developer.mozilla.org/en-US/docs/Web/API/MIDIPortConnectionState)
class MIDIPortConnectionState: public emlite::Val {
  explicit MIDIPortConnectionState(Handle h) noexcept;
public:
    enum Value {
        OPEN,
        CLOSED,
        PENDING,
    };

private:
    Value value_;

public:
    MIDIPortConnectionState() noexcept = delete;
    MIDIPortConnectionState(Value v) noexcept;
    explicit MIDIPortConnectionState(const emlite::Val& val) noexcept;
    static MIDIPortConnectionState take_ownership(Handle h) noexcept;
    [[nodiscard]] MIDIPortConnectionState clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const MIDIPortConnectionState& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const MIDIPortConnectionState& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type MLPowerPreference
/// [`MLPowerPreference`](https://developer.mozilla.org/en-US/docs/Web/API/MLPowerPreference)
class MLPowerPreference: public emlite::Val {
  explicit MLPowerPreference(Handle h) noexcept;
public:
    enum Value {
        DEFAULT_,
        HIGH_PERFORMANCE,
        LOW_POWER,
    };

private:
    Value value_;

public:
    MLPowerPreference() noexcept = delete;
    MLPowerPreference(Value v) noexcept;
    explicit MLPowerPreference(const emlite::Val& val) noexcept;
    static MLPowerPreference take_ownership(Handle h) noexcept;
    [[nodiscard]] MLPowerPreference clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const MLPowerPreference& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const MLPowerPreference& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type MLInputOperandLayout
/// [`MLInputOperandLayout`](https://developer.mozilla.org/en-US/docs/Web/API/MLInputOperandLayout)
class MLInputOperandLayout: public emlite::Val {
  explicit MLInputOperandLayout(Handle h) noexcept;
public:
    enum Value {
        NCHW,
        NHWC,
    };

private:
    Value value_;

public:
    MLInputOperandLayout() noexcept = delete;
    MLInputOperandLayout(Value v) noexcept;
    explicit MLInputOperandLayout(const emlite::Val& val) noexcept;
    static MLInputOperandLayout take_ownership(Handle h) noexcept;
    [[nodiscard]] MLInputOperandLayout clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const MLInputOperandLayout& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const MLInputOperandLayout& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type MLOperandDataType
/// [`MLOperandDataType`](https://developer.mozilla.org/en-US/docs/Web/API/MLOperandDataType)
class MLOperandDataType: public emlite::Val {
  explicit MLOperandDataType(Handle h) noexcept;
public:
    enum Value {
        FLOAT32,
        FLOAT16,
        INT32,
        UINT32,
        INT64,
        UINT64,
        INT8,
        UINT8,
    };

private:
    Value value_;

public:
    MLOperandDataType() noexcept = delete;
    MLOperandDataType(Value v) noexcept;
    explicit MLOperandDataType(const emlite::Val& val) noexcept;
    static MLOperandDataType take_ownership(Handle h) noexcept;
    [[nodiscard]] MLOperandDataType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const MLOperandDataType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const MLOperandDataType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type MLConv2dFilterOperandLayout
/// [`MLConv2dFilterOperandLayout`](https://developer.mozilla.org/en-US/docs/Web/API/MLConv2dFilterOperandLayout)
class MLConv2dFilterOperandLayout: public emlite::Val {
  explicit MLConv2dFilterOperandLayout(Handle h) noexcept;
public:
    enum Value {
        OIHW,
        HWIO,
        OHWI,
        IHWO,
    };

private:
    Value value_;

public:
    MLConv2dFilterOperandLayout() noexcept = delete;
    MLConv2dFilterOperandLayout(Value v) noexcept;
    explicit MLConv2dFilterOperandLayout(const emlite::Val& val) noexcept;
    static MLConv2dFilterOperandLayout take_ownership(Handle h) noexcept;
    [[nodiscard]] MLConv2dFilterOperandLayout clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const MLConv2dFilterOperandLayout& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const MLConv2dFilterOperandLayout& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type MLConvTranspose2dFilterOperandLayout
/// [`MLConvTranspose2dFilterOperandLayout`](https://developer.mozilla.org/en-US/docs/Web/API/MLConvTranspose2dFilterOperandLayout)
class MLConvTranspose2dFilterOperandLayout: public emlite::Val {
  explicit MLConvTranspose2dFilterOperandLayout(Handle h) noexcept;
public:
    enum Value {
        IOHW,
        HWOI,
        OHWI,
    };

private:
    Value value_;

public:
    MLConvTranspose2dFilterOperandLayout() noexcept = delete;
    MLConvTranspose2dFilterOperandLayout(Value v) noexcept;
    explicit MLConvTranspose2dFilterOperandLayout(const emlite::Val& val) noexcept;
    static MLConvTranspose2dFilterOperandLayout take_ownership(Handle h) noexcept;
    [[nodiscard]] MLConvTranspose2dFilterOperandLayout clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const MLConvTranspose2dFilterOperandLayout& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const MLConvTranspose2dFilterOperandLayout& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type MLGruWeightLayout
/// [`MLGruWeightLayout`](https://developer.mozilla.org/en-US/docs/Web/API/MLGruWeightLayout)
class MLGruWeightLayout: public emlite::Val {
  explicit MLGruWeightLayout(Handle h) noexcept;
public:
    enum Value {
        ZRN,
        RZN,
    };

private:
    Value value_;

public:
    MLGruWeightLayout() noexcept = delete;
    MLGruWeightLayout(Value v) noexcept;
    explicit MLGruWeightLayout(const emlite::Val& val) noexcept;
    static MLGruWeightLayout take_ownership(Handle h) noexcept;
    [[nodiscard]] MLGruWeightLayout clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const MLGruWeightLayout& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const MLGruWeightLayout& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type MLRecurrentNetworkActivation
/// [`MLRecurrentNetworkActivation`](https://developer.mozilla.org/en-US/docs/Web/API/MLRecurrentNetworkActivation)
class MLRecurrentNetworkActivation: public emlite::Val {
  explicit MLRecurrentNetworkActivation(Handle h) noexcept;
public:
    enum Value {
        RELU,
        SIGMOID,
        TANH,
    };

private:
    Value value_;

public:
    MLRecurrentNetworkActivation() noexcept = delete;
    MLRecurrentNetworkActivation(Value v) noexcept;
    explicit MLRecurrentNetworkActivation(const emlite::Val& val) noexcept;
    static MLRecurrentNetworkActivation take_ownership(Handle h) noexcept;
    [[nodiscard]] MLRecurrentNetworkActivation clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const MLRecurrentNetworkActivation& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const MLRecurrentNetworkActivation& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type MLRecurrentNetworkDirection
/// [`MLRecurrentNetworkDirection`](https://developer.mozilla.org/en-US/docs/Web/API/MLRecurrentNetworkDirection)
class MLRecurrentNetworkDirection: public emlite::Val {
  explicit MLRecurrentNetworkDirection(Handle h) noexcept;
public:
    enum Value {
        FORWARD,
        BACKWARD,
        BOTH,
    };

private:
    Value value_;

public:
    MLRecurrentNetworkDirection() noexcept = delete;
    MLRecurrentNetworkDirection(Value v) noexcept;
    explicit MLRecurrentNetworkDirection(const emlite::Val& val) noexcept;
    static MLRecurrentNetworkDirection take_ownership(Handle h) noexcept;
    [[nodiscard]] MLRecurrentNetworkDirection clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const MLRecurrentNetworkDirection& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const MLRecurrentNetworkDirection& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type MLLstmWeightLayout
/// [`MLLstmWeightLayout`](https://developer.mozilla.org/en-US/docs/Web/API/MLLstmWeightLayout)
class MLLstmWeightLayout: public emlite::Val {
  explicit MLLstmWeightLayout(Handle h) noexcept;
public:
    enum Value {
        IOFG,
        IFGO,
    };

private:
    Value value_;

public:
    MLLstmWeightLayout() noexcept = delete;
    MLLstmWeightLayout(Value v) noexcept;
    explicit MLLstmWeightLayout(const emlite::Val& val) noexcept;
    static MLLstmWeightLayout take_ownership(Handle h) noexcept;
    [[nodiscard]] MLLstmWeightLayout clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const MLLstmWeightLayout& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const MLLstmWeightLayout& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type MLPaddingMode
/// [`MLPaddingMode`](https://developer.mozilla.org/en-US/docs/Web/API/MLPaddingMode)
class MLPaddingMode: public emlite::Val {
  explicit MLPaddingMode(Handle h) noexcept;
public:
    enum Value {
        CONSTANT,
        EDGE,
        REFLECTION,
    };

private:
    Value value_;

public:
    MLPaddingMode() noexcept = delete;
    MLPaddingMode(Value v) noexcept;
    explicit MLPaddingMode(const emlite::Val& val) noexcept;
    static MLPaddingMode take_ownership(Handle h) noexcept;
    [[nodiscard]] MLPaddingMode clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const MLPaddingMode& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const MLPaddingMode& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type MLRoundingType
/// [`MLRoundingType`](https://developer.mozilla.org/en-US/docs/Web/API/MLRoundingType)
class MLRoundingType: public emlite::Val {
  explicit MLRoundingType(Handle h) noexcept;
public:
    enum Value {
        FLOOR,
        CEIL,
    };

private:
    Value value_;

public:
    MLRoundingType() noexcept = delete;
    MLRoundingType(Value v) noexcept;
    explicit MLRoundingType(const emlite::Val& val) noexcept;
    static MLRoundingType take_ownership(Handle h) noexcept;
    [[nodiscard]] MLRoundingType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const MLRoundingType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const MLRoundingType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type MLInterpolationMode
/// [`MLInterpolationMode`](https://developer.mozilla.org/en-US/docs/Web/API/MLInterpolationMode)
class MLInterpolationMode: public emlite::Val {
  explicit MLInterpolationMode(Handle h) noexcept;
public:
    enum Value {
        NEAREST_NEIGHBOR,
        LINEAR,
    };

private:
    Value value_;

public:
    MLInterpolationMode() noexcept = delete;
    MLInterpolationMode(Value v) noexcept;
    explicit MLInterpolationMode(const emlite::Val& val) noexcept;
    static MLInterpolationMode take_ownership(Handle h) noexcept;
    [[nodiscard]] MLInterpolationMode clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const MLInterpolationMode& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const MLInterpolationMode& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type SFrameTransformRole
/// [`SFrameTransformRole`](https://developer.mozilla.org/en-US/docs/Web/API/SFrameTransformRole)
class SFrameTransformRole: public emlite::Val {
  explicit SFrameTransformRole(Handle h) noexcept;
public:
    enum Value {
        ENCRYPT,
        DECRYPT,
    };

private:
    Value value_;

public:
    SFrameTransformRole() noexcept = delete;
    SFrameTransformRole(Value v) noexcept;
    explicit SFrameTransformRole(const emlite::Val& val) noexcept;
    static SFrameTransformRole take_ownership(Handle h) noexcept;
    [[nodiscard]] SFrameTransformRole clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const SFrameTransformRole& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const SFrameTransformRole& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type SFrameCipherSuite
/// [`SFrameCipherSuite`](https://developer.mozilla.org/en-US/docs/Web/API/SFrameCipherSuite)
class SFrameCipherSuite: public emlite::Val {
  explicit SFrameCipherSuite(Handle h) noexcept;
public:
    enum Value {
        AES_128_CTR_HMAC_SHA256_80,
        AES_128_CTR_HMAC_SHA256_64,
        AES_128_CTR_HMAC_SHA256_32,
        AES_128_GCM_SHA256_128,
        AES_256_GCM_SHA512_128,
    };

private:
    Value value_;

public:
    SFrameCipherSuite() noexcept = delete;
    SFrameCipherSuite(Value v) noexcept;
    explicit SFrameCipherSuite(const emlite::Val& val) noexcept;
    static SFrameCipherSuite take_ownership(Handle h) noexcept;
    [[nodiscard]] SFrameCipherSuite clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const SFrameCipherSuite& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const SFrameCipherSuite& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type SFrameTransformErrorEventType
/// [`SFrameTransformErrorEventType`](https://developer.mozilla.org/en-US/docs/Web/API/SFrameTransformErrorEventType)
class SFrameTransformErrorEventType: public emlite::Val {
  explicit SFrameTransformErrorEventType(Handle h) noexcept;
public:
    enum Value {
        AUTHENTICATION,
        KEYID,
        SYNTAX,
    };

private:
    Value value_;

public:
    SFrameTransformErrorEventType() noexcept = delete;
    SFrameTransformErrorEventType(Value v) noexcept;
    explicit SFrameTransformErrorEventType(const emlite::Val& val) noexcept;
    static SFrameTransformErrorEventType take_ownership(Handle h) noexcept;
    [[nodiscard]] SFrameTransformErrorEventType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const SFrameTransformErrorEventType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const SFrameTransformErrorEventType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RTCEncodedVideoFrameType
/// [`RTCEncodedVideoFrameType`](https://developer.mozilla.org/en-US/docs/Web/API/RTCEncodedVideoFrameType)
class RTCEncodedVideoFrameType: public emlite::Val {
  explicit RTCEncodedVideoFrameType(Handle h) noexcept;
public:
    enum Value {
        EMPTY,
        KEY,
        DELTA,
    };

private:
    Value value_;

public:
    RTCEncodedVideoFrameType() noexcept = delete;
    RTCEncodedVideoFrameType(Value v) noexcept;
    explicit RTCEncodedVideoFrameType(const emlite::Val& val) noexcept;
    static RTCEncodedVideoFrameType take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCEncodedVideoFrameType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RTCEncodedVideoFrameType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RTCEncodedVideoFrameType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RTCErrorDetailTypeIdp
/// [`RTCErrorDetailTypeIdp`](https://developer.mozilla.org/en-US/docs/Web/API/RTCErrorDetailTypeIdp)
class RTCErrorDetailTypeIdp: public emlite::Val {
  explicit RTCErrorDetailTypeIdp(Handle h) noexcept;
public:
    enum Value {
        IDP_BAD_SCRIPT_FAILURE,
        IDP_EXECUTION_FAILURE,
        IDP_LOAD_FAILURE,
        IDP_NEED_LOGIN,
        IDP_TIMEOUT,
        IDP_TLS_FAILURE,
        IDP_TOKEN_EXPIRED,
        IDP_TOKEN_INVALID,
    };

private:
    Value value_;

public:
    RTCErrorDetailTypeIdp() noexcept = delete;
    RTCErrorDetailTypeIdp(Value v) noexcept;
    explicit RTCErrorDetailTypeIdp(const emlite::Val& val) noexcept;
    static RTCErrorDetailTypeIdp take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCErrorDetailTypeIdp clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RTCErrorDetailTypeIdp& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RTCErrorDetailTypeIdp& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RTCPriorityType
/// [`RTCPriorityType`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPriorityType)
class RTCPriorityType: public emlite::Val {
  explicit RTCPriorityType(Handle h) noexcept;
public:
    enum Value {
        VERY_LOW,
        LOW,
        MEDIUM,
        HIGH,
    };

private:
    Value value_;

public:
    RTCPriorityType() noexcept = delete;
    RTCPriorityType(Value v) noexcept;
    explicit RTCPriorityType(const emlite::Val& val) noexcept;
    static RTCPriorityType take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCPriorityType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RTCPriorityType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RTCPriorityType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RTCStatsType
/// [`RTCStatsType`](https://developer.mozilla.org/en-US/docs/Web/API/RTCStatsType)
class RTCStatsType: public emlite::Val {
  explicit RTCStatsType(Handle h) noexcept;
public:
    enum Value {
        CODEC,
        INBOUND_RTP,
        OUTBOUND_RTP,
        REMOTE_INBOUND_RTP,
        REMOTE_OUTBOUND_RTP,
        MEDIA_SOURCE,
        MEDIA_PLAYOUT,
        PEER_CONNECTION,
        DATA_CHANNEL,
        TRANSPORT,
        CANDIDATE_PAIR,
        LOCAL_CANDIDATE,
        REMOTE_CANDIDATE,
        CERTIFICATE,
    };

private:
    Value value_;

public:
    RTCStatsType() noexcept = delete;
    RTCStatsType(Value v) noexcept;
    explicit RTCStatsType(const emlite::Val& val) noexcept;
    static RTCStatsType take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCStatsType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RTCStatsType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RTCStatsType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RTCQualityLimitationReason
/// [`RTCQualityLimitationReason`](https://developer.mozilla.org/en-US/docs/Web/API/RTCQualityLimitationReason)
class RTCQualityLimitationReason: public emlite::Val {
  explicit RTCQualityLimitationReason(Handle h) noexcept;
public:
    enum Value {
        NONE,
        CPU,
        BANDWIDTH,
        OTHER,
    };

private:
    Value value_;

public:
    RTCQualityLimitationReason() noexcept = delete;
    RTCQualityLimitationReason(Value v) noexcept;
    explicit RTCQualityLimitationReason(const emlite::Val& val) noexcept;
    static RTCQualityLimitationReason take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCQualityLimitationReason clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RTCQualityLimitationReason& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RTCQualityLimitationReason& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RTCDtlsRole
/// [`RTCDtlsRole`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDtlsRole)
class RTCDtlsRole: public emlite::Val {
  explicit RTCDtlsRole(Handle h) noexcept;
public:
    enum Value {
        CLIENT,
        SERVER,
        UNKNOWN,
    };

private:
    Value value_;

public:
    RTCDtlsRole() noexcept = delete;
    RTCDtlsRole(Value v) noexcept;
    explicit RTCDtlsRole(const emlite::Val& val) noexcept;
    static RTCDtlsRole take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCDtlsRole clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RTCDtlsRole& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RTCDtlsRole& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RTCStatsIceCandidatePairState
/// [`RTCStatsIceCandidatePairState`](https://developer.mozilla.org/en-US/docs/Web/API/RTCStatsIceCandidatePairState)
class RTCStatsIceCandidatePairState: public emlite::Val {
  explicit RTCStatsIceCandidatePairState(Handle h) noexcept;
public:
    enum Value {
        FROZEN,
        WAITING,
        IN_PROGRESS,
        FAILED,
        SUCCEEDED,
    };

private:
    Value value_;

public:
    RTCStatsIceCandidatePairState() noexcept = delete;
    RTCStatsIceCandidatePairState(Value v) noexcept;
    explicit RTCStatsIceCandidatePairState(const emlite::Val& val) noexcept;
    static RTCStatsIceCandidatePairState take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCStatsIceCandidatePairState clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RTCStatsIceCandidatePairState& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RTCStatsIceCandidatePairState& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RTCIceTransportPolicy
/// [`RTCIceTransportPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransportPolicy)
class RTCIceTransportPolicy: public emlite::Val {
  explicit RTCIceTransportPolicy(Handle h) noexcept;
public:
    enum Value {
        RELAY,
        ALL,
    };

private:
    Value value_;

public:
    RTCIceTransportPolicy() noexcept = delete;
    RTCIceTransportPolicy(Value v) noexcept;
    explicit RTCIceTransportPolicy(const emlite::Val& val) noexcept;
    static RTCIceTransportPolicy take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCIceTransportPolicy clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RTCIceTransportPolicy& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RTCIceTransportPolicy& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RTCBundlePolicy
/// [`RTCBundlePolicy`](https://developer.mozilla.org/en-US/docs/Web/API/RTCBundlePolicy)
class RTCBundlePolicy: public emlite::Val {
  explicit RTCBundlePolicy(Handle h) noexcept;
public:
    enum Value {
        BALANCED,
        MAX_COMPAT,
        MAX_BUNDLE,
    };

private:
    Value value_;

public:
    RTCBundlePolicy() noexcept = delete;
    RTCBundlePolicy(Value v) noexcept;
    explicit RTCBundlePolicy(const emlite::Val& val) noexcept;
    static RTCBundlePolicy take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCBundlePolicy clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RTCBundlePolicy& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RTCBundlePolicy& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RTCRtcpMuxPolicy
/// [`RTCRtcpMuxPolicy`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtcpMuxPolicy)
class RTCRtcpMuxPolicy: public emlite::Val {
  explicit RTCRtcpMuxPolicy(Handle h) noexcept;
public:
    enum Value {
        REQUIRE,
    };

private:
    Value value_;

public:
    RTCRtcpMuxPolicy() noexcept = delete;
    RTCRtcpMuxPolicy(Value v) noexcept;
    explicit RTCRtcpMuxPolicy(const emlite::Val& val) noexcept;
    static RTCRtcpMuxPolicy take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCRtcpMuxPolicy clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RTCRtcpMuxPolicy& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RTCRtcpMuxPolicy& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RTCSignalingState
/// [`RTCSignalingState`](https://developer.mozilla.org/en-US/docs/Web/API/RTCSignalingState)
class RTCSignalingState: public emlite::Val {
  explicit RTCSignalingState(Handle h) noexcept;
public:
    enum Value {
        STABLE,
        HAVE_LOCAL_OFFER,
        HAVE_REMOTE_OFFER,
        HAVE_LOCAL_PRANSWER,
        HAVE_REMOTE_PRANSWER,
        CLOSED,
    };

private:
    Value value_;

public:
    RTCSignalingState() noexcept = delete;
    RTCSignalingState(Value v) noexcept;
    explicit RTCSignalingState(const emlite::Val& val) noexcept;
    static RTCSignalingState take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCSignalingState clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RTCSignalingState& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RTCSignalingState& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RTCIceGatheringState
/// [`RTCIceGatheringState`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceGatheringState)
class RTCIceGatheringState: public emlite::Val {
  explicit RTCIceGatheringState(Handle h) noexcept;
public:
    enum Value {
        NEW_,
        GATHERING,
        COMPLETE,
    };

private:
    Value value_;

public:
    RTCIceGatheringState() noexcept = delete;
    RTCIceGatheringState(Value v) noexcept;
    explicit RTCIceGatheringState(const emlite::Val& val) noexcept;
    static RTCIceGatheringState take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCIceGatheringState clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RTCIceGatheringState& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RTCIceGatheringState& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RTCPeerConnectionState
/// [`RTCPeerConnectionState`](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnectionState)
class RTCPeerConnectionState: public emlite::Val {
  explicit RTCPeerConnectionState(Handle h) noexcept;
public:
    enum Value {
        CLOSED,
        FAILED,
        DISCONNECTED,
        NEW_,
        CONNECTING,
        CONNECTED,
    };

private:
    Value value_;

public:
    RTCPeerConnectionState() noexcept = delete;
    RTCPeerConnectionState(Value v) noexcept;
    explicit RTCPeerConnectionState(const emlite::Val& val) noexcept;
    static RTCPeerConnectionState take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCPeerConnectionState clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RTCPeerConnectionState& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RTCPeerConnectionState& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RTCIceConnectionState
/// [`RTCIceConnectionState`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceConnectionState)
class RTCIceConnectionState: public emlite::Val {
  explicit RTCIceConnectionState(Handle h) noexcept;
public:
    enum Value {
        CLOSED,
        FAILED,
        DISCONNECTED,
        NEW_,
        CHECKING,
        COMPLETED,
        CONNECTED,
    };

private:
    Value value_;

public:
    RTCIceConnectionState() noexcept = delete;
    RTCIceConnectionState(Value v) noexcept;
    explicit RTCIceConnectionState(const emlite::Val& val) noexcept;
    static RTCIceConnectionState take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCIceConnectionState clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RTCIceConnectionState& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RTCIceConnectionState& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RTCSdpType
/// [`RTCSdpType`](https://developer.mozilla.org/en-US/docs/Web/API/RTCSdpType)
class RTCSdpType: public emlite::Val {
  explicit RTCSdpType(Handle h) noexcept;
public:
    enum Value {
        OFFER,
        PRANSWER,
        ANSWER,
        ROLLBACK,
    };

private:
    Value value_;

public:
    RTCSdpType() noexcept = delete;
    RTCSdpType(Value v) noexcept;
    explicit RTCSdpType(const emlite::Val& val) noexcept;
    static RTCSdpType take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCSdpType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RTCSdpType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RTCSdpType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RTCIceProtocol
/// [`RTCIceProtocol`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceProtocol)
class RTCIceProtocol: public emlite::Val {
  explicit RTCIceProtocol(Handle h) noexcept;
public:
    enum Value {
        UDP,
        TCP,
    };

private:
    Value value_;

public:
    RTCIceProtocol() noexcept = delete;
    RTCIceProtocol(Value v) noexcept;
    explicit RTCIceProtocol(const emlite::Val& val) noexcept;
    static RTCIceProtocol take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCIceProtocol clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RTCIceProtocol& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RTCIceProtocol& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RTCIceTcpCandidateType
/// [`RTCIceTcpCandidateType`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTcpCandidateType)
class RTCIceTcpCandidateType: public emlite::Val {
  explicit RTCIceTcpCandidateType(Handle h) noexcept;
public:
    enum Value {
        ACTIVE,
        PASSIVE,
        SO,
    };

private:
    Value value_;

public:
    RTCIceTcpCandidateType() noexcept = delete;
    RTCIceTcpCandidateType(Value v) noexcept;
    explicit RTCIceTcpCandidateType(const emlite::Val& val) noexcept;
    static RTCIceTcpCandidateType take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCIceTcpCandidateType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RTCIceTcpCandidateType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RTCIceTcpCandidateType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RTCIceCandidateType
/// [`RTCIceCandidateType`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidateType)
class RTCIceCandidateType: public emlite::Val {
  explicit RTCIceCandidateType(Handle h) noexcept;
public:
    enum Value {
        HOST,
        SRFLX,
        PRFLX,
        RELAY,
    };

private:
    Value value_;

public:
    RTCIceCandidateType() noexcept = delete;
    RTCIceCandidateType(Value v) noexcept;
    explicit RTCIceCandidateType(const emlite::Val& val) noexcept;
    static RTCIceCandidateType take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCIceCandidateType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RTCIceCandidateType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RTCIceCandidateType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RTCIceServerTransportProtocol
/// [`RTCIceServerTransportProtocol`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceServerTransportProtocol)
class RTCIceServerTransportProtocol: public emlite::Val {
  explicit RTCIceServerTransportProtocol(Handle h) noexcept;
public:
    enum Value {
        UDP,
        TCP,
        TLS,
    };

private:
    Value value_;

public:
    RTCIceServerTransportProtocol() noexcept = delete;
    RTCIceServerTransportProtocol(Value v) noexcept;
    explicit RTCIceServerTransportProtocol(const emlite::Val& val) noexcept;
    static RTCIceServerTransportProtocol take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCIceServerTransportProtocol clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RTCIceServerTransportProtocol& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RTCIceServerTransportProtocol& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RTCRtpTransceiverDirection
/// [`RTCRtpTransceiverDirection`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpTransceiverDirection)
class RTCRtpTransceiverDirection: public emlite::Val {
  explicit RTCRtpTransceiverDirection(Handle h) noexcept;
public:
    enum Value {
        SENDRECV,
        SENDONLY,
        RECVONLY,
        INACTIVE,
        STOPPED,
    };

private:
    Value value_;

public:
    RTCRtpTransceiverDirection() noexcept = delete;
    RTCRtpTransceiverDirection(Value v) noexcept;
    explicit RTCRtpTransceiverDirection(const emlite::Val& val) noexcept;
    static RTCRtpTransceiverDirection take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCRtpTransceiverDirection clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RTCRtpTransceiverDirection& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RTCRtpTransceiverDirection& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RTCDtlsTransportState
/// [`RTCDtlsTransportState`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDtlsTransportState)
class RTCDtlsTransportState: public emlite::Val {
  explicit RTCDtlsTransportState(Handle h) noexcept;
public:
    enum Value {
        NEW_,
        CONNECTING,
        CONNECTED,
        CLOSED,
        FAILED,
    };

private:
    Value value_;

public:
    RTCDtlsTransportState() noexcept = delete;
    RTCDtlsTransportState(Value v) noexcept;
    explicit RTCDtlsTransportState(const emlite::Val& val) noexcept;
    static RTCDtlsTransportState take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCDtlsTransportState clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RTCDtlsTransportState& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RTCDtlsTransportState& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RTCIceGathererState
/// [`RTCIceGathererState`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceGathererState)
class RTCIceGathererState: public emlite::Val {
  explicit RTCIceGathererState(Handle h) noexcept;
public:
    enum Value {
        NEW_,
        GATHERING,
        COMPLETE,
    };

private:
    Value value_;

public:
    RTCIceGathererState() noexcept = delete;
    RTCIceGathererState(Value v) noexcept;
    explicit RTCIceGathererState(const emlite::Val& val) noexcept;
    static RTCIceGathererState take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCIceGathererState clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RTCIceGathererState& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RTCIceGathererState& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RTCIceTransportState
/// [`RTCIceTransportState`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceTransportState)
class RTCIceTransportState: public emlite::Val {
  explicit RTCIceTransportState(Handle h) noexcept;
public:
    enum Value {
        CLOSED,
        FAILED,
        DISCONNECTED,
        NEW_,
        CHECKING,
        COMPLETED,
        CONNECTED,
    };

private:
    Value value_;

public:
    RTCIceTransportState() noexcept = delete;
    RTCIceTransportState(Value v) noexcept;
    explicit RTCIceTransportState(const emlite::Val& val) noexcept;
    static RTCIceTransportState take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCIceTransportState clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RTCIceTransportState& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RTCIceTransportState& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RTCIceRole
/// [`RTCIceRole`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceRole)
class RTCIceRole: public emlite::Val {
  explicit RTCIceRole(Handle h) noexcept;
public:
    enum Value {
        UNKNOWN,
        CONTROLLING,
        CONTROLLED,
    };

private:
    Value value_;

public:
    RTCIceRole() noexcept = delete;
    RTCIceRole(Value v) noexcept;
    explicit RTCIceRole(const emlite::Val& val) noexcept;
    static RTCIceRole take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCIceRole clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RTCIceRole& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RTCIceRole& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RTCIceComponent
/// [`RTCIceComponent`](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceComponent)
class RTCIceComponent: public emlite::Val {
  explicit RTCIceComponent(Handle h) noexcept;
public:
    enum Value {
        RTP,
        RTCP,
    };

private:
    Value value_;

public:
    RTCIceComponent() noexcept = delete;
    RTCIceComponent(Value v) noexcept;
    explicit RTCIceComponent(const emlite::Val& val) noexcept;
    static RTCIceComponent take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCIceComponent clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RTCIceComponent& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RTCIceComponent& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RTCSctpTransportState
/// [`RTCSctpTransportState`](https://developer.mozilla.org/en-US/docs/Web/API/RTCSctpTransportState)
class RTCSctpTransportState: public emlite::Val {
  explicit RTCSctpTransportState(Handle h) noexcept;
public:
    enum Value {
        CONNECTING,
        CONNECTED,
        CLOSED,
    };

private:
    Value value_;

public:
    RTCSctpTransportState() noexcept = delete;
    RTCSctpTransportState(Value v) noexcept;
    explicit RTCSctpTransportState(const emlite::Val& val) noexcept;
    static RTCSctpTransportState take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCSctpTransportState clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RTCSctpTransportState& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RTCSctpTransportState& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RTCDataChannelState
/// [`RTCDataChannelState`](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannelState)
class RTCDataChannelState: public emlite::Val {
  explicit RTCDataChannelState(Handle h) noexcept;
public:
    enum Value {
        CONNECTING,
        OPEN,
        CLOSING,
        CLOSED,
    };

private:
    Value value_;

public:
    RTCDataChannelState() noexcept = delete;
    RTCDataChannelState(Value v) noexcept;
    explicit RTCDataChannelState(const emlite::Val& val) noexcept;
    static RTCDataChannelState take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCDataChannelState clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RTCDataChannelState& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RTCDataChannelState& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RTCErrorDetailType
/// [`RTCErrorDetailType`](https://developer.mozilla.org/en-US/docs/Web/API/RTCErrorDetailType)
class RTCErrorDetailType: public emlite::Val {
  explicit RTCErrorDetailType(Handle h) noexcept;
public:
    enum Value {
        DATA_CHANNEL_FAILURE,
        DTLS_FAILURE,
        FINGERPRINT_FAILURE,
        SCTP_FAILURE,
        SDP_SYNTAX_ERROR,
        HARDWARE_ENCODER_NOT_AVAILABLE,
        HARDWARE_ENCODER_ERROR,
    };

private:
    Value value_;

public:
    RTCErrorDetailType() noexcept = delete;
    RTCErrorDetailType(Value v) noexcept;
    explicit RTCErrorDetailType(const emlite::Val& val) noexcept;
    static RTCErrorDetailType take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCErrorDetailType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RTCErrorDetailType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RTCErrorDetailType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type BinaryType
/// [`BinaryType`](https://developer.mozilla.org/en-US/docs/Web/API/BinaryType)
class BinaryType: public emlite::Val {
  explicit BinaryType(Handle h) noexcept;
public:
    enum Value {
        BLOB,
        ARRAYBUFFER,
    };

private:
    Value value_;

public:
    BinaryType() noexcept = delete;
    BinaryType(Value v) noexcept;
    explicit BinaryType(const emlite::Val& val) noexcept;
    static BinaryType take_ownership(Handle h) noexcept;
    [[nodiscard]] BinaryType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const BinaryType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const BinaryType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type WebTransportReliabilityMode
/// [`WebTransportReliabilityMode`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportReliabilityMode)
class WebTransportReliabilityMode: public emlite::Val {
  explicit WebTransportReliabilityMode(Handle h) noexcept;
public:
    enum Value {
        PENDING,
        RELIABLE_ONLY,
        SUPPORTS_UNRELIABLE,
    };

private:
    Value value_;

public:
    WebTransportReliabilityMode() noexcept = delete;
    WebTransportReliabilityMode(Value v) noexcept;
    explicit WebTransportReliabilityMode(const emlite::Val& val) noexcept;
    static WebTransportReliabilityMode take_ownership(Handle h) noexcept;
    [[nodiscard]] WebTransportReliabilityMode clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const WebTransportReliabilityMode& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const WebTransportReliabilityMode& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type WebTransportCongestionControl
/// [`WebTransportCongestionControl`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportCongestionControl)
class WebTransportCongestionControl: public emlite::Val {
  explicit WebTransportCongestionControl(Handle h) noexcept;
public:
    enum Value {
        DEFAULT_,
        THROUGHPUT,
        LOW_LATENCY,
    };

private:
    Value value_;

public:
    WebTransportCongestionControl() noexcept = delete;
    WebTransportCongestionControl(Value v) noexcept;
    explicit WebTransportCongestionControl(const emlite::Val& val) noexcept;
    static WebTransportCongestionControl take_ownership(Handle h) noexcept;
    [[nodiscard]] WebTransportCongestionControl clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const WebTransportCongestionControl& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const WebTransportCongestionControl& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type DatagramsReadableMode
/// [`DatagramsReadableMode`](https://developer.mozilla.org/en-US/docs/Web/API/DatagramsReadableMode)
class DatagramsReadableMode: public emlite::Val {
  explicit DatagramsReadableMode(Handle h) noexcept;
public:
    enum Value {
        BYTES,
    };

private:
    Value value_;

public:
    DatagramsReadableMode() noexcept = delete;
    DatagramsReadableMode(Value v) noexcept;
    explicit DatagramsReadableMode(const emlite::Val& val) noexcept;
    static DatagramsReadableMode take_ownership(Handle h) noexcept;
    [[nodiscard]] DatagramsReadableMode clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const DatagramsReadableMode& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const DatagramsReadableMode& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type WebTransportErrorSource
/// [`WebTransportErrorSource`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportErrorSource)
class WebTransportErrorSource: public emlite::Val {
  explicit WebTransportErrorSource(Handle h) noexcept;
public:
    enum Value {
        STREAM,
        SESSION,
    };

private:
    Value value_;

public:
    WebTransportErrorSource() noexcept = delete;
    WebTransportErrorSource(Value v) noexcept;
    explicit WebTransportErrorSource(const emlite::Val& val) noexcept;
    static WebTransportErrorSource take_ownership(Handle h) noexcept;
    [[nodiscard]] WebTransportErrorSource clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const WebTransportErrorSource& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const WebTransportErrorSource& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type USBTransferStatus
/// [`USBTransferStatus`](https://developer.mozilla.org/en-US/docs/Web/API/USBTransferStatus)
class USBTransferStatus: public emlite::Val {
  explicit USBTransferStatus(Handle h) noexcept;
public:
    enum Value {
        OK,
        STALL,
        BABBLE,
    };

private:
    Value value_;

public:
    USBTransferStatus() noexcept = delete;
    USBTransferStatus(Value v) noexcept;
    explicit USBTransferStatus(const emlite::Val& val) noexcept;
    static USBTransferStatus take_ownership(Handle h) noexcept;
    [[nodiscard]] USBTransferStatus clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const USBTransferStatus& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const USBTransferStatus& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type USBRequestType
/// [`USBRequestType`](https://developer.mozilla.org/en-US/docs/Web/API/USBRequestType)
class USBRequestType: public emlite::Val {
  explicit USBRequestType(Handle h) noexcept;
public:
    enum Value {
        STANDARD,
        CLASS_,
        VENDOR,
    };

private:
    Value value_;

public:
    USBRequestType() noexcept = delete;
    USBRequestType(Value v) noexcept;
    explicit USBRequestType(const emlite::Val& val) noexcept;
    static USBRequestType take_ownership(Handle h) noexcept;
    [[nodiscard]] USBRequestType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const USBRequestType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const USBRequestType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type USBRecipient
/// [`USBRecipient`](https://developer.mozilla.org/en-US/docs/Web/API/USBRecipient)
class USBRecipient: public emlite::Val {
  explicit USBRecipient(Handle h) noexcept;
public:
    enum Value {
        DEVICE,
        INTERFACE,
        ENDPOINT,
        OTHER,
    };

private:
    Value value_;

public:
    USBRecipient() noexcept = delete;
    USBRecipient(Value v) noexcept;
    explicit USBRecipient(const emlite::Val& val) noexcept;
    static USBRecipient take_ownership(Handle h) noexcept;
    [[nodiscard]] USBRecipient clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const USBRecipient& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const USBRecipient& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type USBDirection
/// [`USBDirection`](https://developer.mozilla.org/en-US/docs/Web/API/USBDirection)
class USBDirection: public emlite::Val {
  explicit USBDirection(Handle h) noexcept;
public:
    enum Value {
        IN,
        OUT,
    };

private:
    Value value_;

public:
    USBDirection() noexcept = delete;
    USBDirection(Value v) noexcept;
    explicit USBDirection(const emlite::Val& val) noexcept;
    static USBDirection take_ownership(Handle h) noexcept;
    [[nodiscard]] USBDirection clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const USBDirection& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const USBDirection& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type USBEndpointType
/// [`USBEndpointType`](https://developer.mozilla.org/en-US/docs/Web/API/USBEndpointType)
class USBEndpointType: public emlite::Val {
  explicit USBEndpointType(Handle h) noexcept;
public:
    enum Value {
        BULK,
        INTERRUPT,
        ISOCHRONOUS,
    };

private:
    Value value_;

public:
    USBEndpointType() noexcept = delete;
    USBEndpointType(Value v) noexcept;
    explicit USBEndpointType(const emlite::Val& val) noexcept;
    static USBEndpointType take_ownership(Handle h) noexcept;
    [[nodiscard]] USBEndpointType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const USBEndpointType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const USBEndpointType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type AutoKeyword
/// [`AutoKeyword`](https://developer.mozilla.org/en-US/docs/Web/API/AutoKeyword)
class AutoKeyword: public emlite::Val {
  explicit AutoKeyword(Handle h) noexcept;
public:
    enum Value {
        AUTO_,
    };

private:
    Value value_;

public:
    AutoKeyword() noexcept = delete;
    AutoKeyword(Value v) noexcept;
    explicit AutoKeyword(const emlite::Val& val) noexcept;
    static AutoKeyword take_ownership(Handle h) noexcept;
    [[nodiscard]] AutoKeyword clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const AutoKeyword& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const AutoKeyword& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type DirectionSetting
/// [`DirectionSetting`](https://developer.mozilla.org/en-US/docs/Web/API/DirectionSetting)
class DirectionSetting: public emlite::Val {
  explicit DirectionSetting(Handle h) noexcept;
public:
    enum Value {
        NONE,
        RL,
        LR,
    };

private:
    Value value_;

public:
    DirectionSetting() noexcept = delete;
    DirectionSetting(Value v) noexcept;
    explicit DirectionSetting(const emlite::Val& val) noexcept;
    static DirectionSetting take_ownership(Handle h) noexcept;
    [[nodiscard]] DirectionSetting clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const DirectionSetting& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const DirectionSetting& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type LineAlignSetting
/// [`LineAlignSetting`](https://developer.mozilla.org/en-US/docs/Web/API/LineAlignSetting)
class LineAlignSetting: public emlite::Val {
  explicit LineAlignSetting(Handle h) noexcept;
public:
    enum Value {
        START,
        CENTER,
        END,
    };

private:
    Value value_;

public:
    LineAlignSetting() noexcept = delete;
    LineAlignSetting(Value v) noexcept;
    explicit LineAlignSetting(const emlite::Val& val) noexcept;
    static LineAlignSetting take_ownership(Handle h) noexcept;
    [[nodiscard]] LineAlignSetting clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const LineAlignSetting& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const LineAlignSetting& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type PositionAlignSetting
/// [`PositionAlignSetting`](https://developer.mozilla.org/en-US/docs/Web/API/PositionAlignSetting)
class PositionAlignSetting: public emlite::Val {
  explicit PositionAlignSetting(Handle h) noexcept;
public:
    enum Value {
        LINE_LEFT,
        CENTER,
        LINE_RIGHT,
        AUTO_,
    };

private:
    Value value_;

public:
    PositionAlignSetting() noexcept = delete;
    PositionAlignSetting(Value v) noexcept;
    explicit PositionAlignSetting(const emlite::Val& val) noexcept;
    static PositionAlignSetting take_ownership(Handle h) noexcept;
    [[nodiscard]] PositionAlignSetting clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const PositionAlignSetting& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const PositionAlignSetting& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type AlignSetting
/// [`AlignSetting`](https://developer.mozilla.org/en-US/docs/Web/API/AlignSetting)
class AlignSetting: public emlite::Val {
  explicit AlignSetting(Handle h) noexcept;
public:
    enum Value {
        START,
        CENTER,
        END,
        LEFT,
        RIGHT,
    };

private:
    Value value_;

public:
    AlignSetting() noexcept = delete;
    AlignSetting(Value v) noexcept;
    explicit AlignSetting(const emlite::Val& val) noexcept;
    static AlignSetting take_ownership(Handle h) noexcept;
    [[nodiscard]] AlignSetting clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const AlignSetting& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const AlignSetting& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type ScrollSetting
/// [`ScrollSetting`](https://developer.mozilla.org/en-US/docs/Web/API/ScrollSetting)
class ScrollSetting: public emlite::Val {
  explicit ScrollSetting(Handle h) noexcept;
public:
    enum Value {
        NONE,
        UP,
    };

private:
    Value value_;

public:
    ScrollSetting() noexcept = delete;
    ScrollSetting(Value v) noexcept;
    explicit ScrollSetting(const emlite::Val& val) noexcept;
    static ScrollSetting take_ownership(Handle h) noexcept;
    [[nodiscard]] ScrollSetting clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const ScrollSetting& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const ScrollSetting& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type XREnvironmentBlendMode
/// [`XREnvironmentBlendMode`](https://developer.mozilla.org/en-US/docs/Web/API/XREnvironmentBlendMode)
class XREnvironmentBlendMode: public emlite::Val {
  explicit XREnvironmentBlendMode(Handle h) noexcept;
public:
    enum Value {
        OPAQUE,
        ALPHA_BLEND,
        ADDITIVE,
    };

private:
    Value value_;

public:
    XREnvironmentBlendMode() noexcept = delete;
    XREnvironmentBlendMode(Value v) noexcept;
    explicit XREnvironmentBlendMode(const emlite::Val& val) noexcept;
    static XREnvironmentBlendMode take_ownership(Handle h) noexcept;
    [[nodiscard]] XREnvironmentBlendMode clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const XREnvironmentBlendMode& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const XREnvironmentBlendMode& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type XRInteractionMode
/// [`XRInteractionMode`](https://developer.mozilla.org/en-US/docs/Web/API/XRInteractionMode)
class XRInteractionMode: public emlite::Val {
  explicit XRInteractionMode(Handle h) noexcept;
public:
    enum Value {
        SCREEN_SPACE,
        WORLD_SPACE,
    };

private:
    Value value_;

public:
    XRInteractionMode() noexcept = delete;
    XRInteractionMode(Value v) noexcept;
    explicit XRInteractionMode(const emlite::Val& val) noexcept;
    static XRInteractionMode take_ownership(Handle h) noexcept;
    [[nodiscard]] XRInteractionMode clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const XRInteractionMode& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const XRInteractionMode& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type XRDepthType
/// [`XRDepthType`](https://developer.mozilla.org/en-US/docs/Web/API/XRDepthType)
class XRDepthType: public emlite::Val {
  explicit XRDepthType(Handle h) noexcept;
public:
    enum Value {
        RAW,
        SMOOTH,
    };

private:
    Value value_;

public:
    XRDepthType() noexcept = delete;
    XRDepthType(Value v) noexcept;
    explicit XRDepthType(const emlite::Val& val) noexcept;
    static XRDepthType take_ownership(Handle h) noexcept;
    [[nodiscard]] XRDepthType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const XRDepthType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const XRDepthType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type XRDepthUsage
/// [`XRDepthUsage`](https://developer.mozilla.org/en-US/docs/Web/API/XRDepthUsage)
class XRDepthUsage: public emlite::Val {
  explicit XRDepthUsage(Handle h) noexcept;
public:
    enum Value {
        CPU_OPTIMIZED,
        GPU_OPTIMIZED,
    };

private:
    Value value_;

public:
    XRDepthUsage() noexcept = delete;
    XRDepthUsage(Value v) noexcept;
    explicit XRDepthUsage(const emlite::Val& val) noexcept;
    static XRDepthUsage take_ownership(Handle h) noexcept;
    [[nodiscard]] XRDepthUsage clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const XRDepthUsage& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const XRDepthUsage& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type XRDepthDataFormat
/// [`XRDepthDataFormat`](https://developer.mozilla.org/en-US/docs/Web/API/XRDepthDataFormat)
class XRDepthDataFormat: public emlite::Val {
  explicit XRDepthDataFormat(Handle h) noexcept;
public:
    enum Value {
        LUMINANCE_ALPHA,
        FLOAT32,
        UNSIGNED_SHORT,
    };

private:
    Value value_;

public:
    XRDepthDataFormat() noexcept = delete;
    XRDepthDataFormat(Value v) noexcept;
    explicit XRDepthDataFormat(const emlite::Val& val) noexcept;
    static XRDepthDataFormat take_ownership(Handle h) noexcept;
    [[nodiscard]] XRDepthDataFormat clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const XRDepthDataFormat& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const XRDepthDataFormat& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type XRDOMOverlayType
/// [`XRDOMOverlayType`](https://developer.mozilla.org/en-US/docs/Web/API/XRDOMOverlayType)
class XRDOMOverlayType: public emlite::Val {
  explicit XRDOMOverlayType(Handle h) noexcept;
public:
    enum Value {
        SCREEN,
        FLOATING,
        HEAD_LOCKED,
    };

private:
    Value value_;

public:
    XRDOMOverlayType() noexcept = delete;
    XRDOMOverlayType(Value v) noexcept;
    explicit XRDOMOverlayType(const emlite::Val& val) noexcept;
    static XRDOMOverlayType take_ownership(Handle h) noexcept;
    [[nodiscard]] XRDOMOverlayType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const XRDOMOverlayType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const XRDOMOverlayType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type XRHandJoint
/// [`XRHandJoint`](https://developer.mozilla.org/en-US/docs/Web/API/XRHandJoint)
class XRHandJoint: public emlite::Val {
  explicit XRHandJoint(Handle h) noexcept;
public:
    enum Value {
        WRIST,
        THUMB_METACARPAL,
        THUMB_PHALANX_PROXIMAL,
        THUMB_PHALANX_DISTAL,
        THUMB_TIP,
        INDEX_FINGER_METACARPAL,
        INDEX_FINGER_PHALANX_PROXIMAL,
        INDEX_FINGER_PHALANX_INTERMEDIATE,
        INDEX_FINGER_PHALANX_DISTAL,
        INDEX_FINGER_TIP,
        MIDDLE_FINGER_METACARPAL,
        MIDDLE_FINGER_PHALANX_PROXIMAL,
        MIDDLE_FINGER_PHALANX_INTERMEDIATE,
        MIDDLE_FINGER_PHALANX_DISTAL,
        MIDDLE_FINGER_TIP,
        RING_FINGER_METACARPAL,
        RING_FINGER_PHALANX_PROXIMAL,
        RING_FINGER_PHALANX_INTERMEDIATE,
        RING_FINGER_PHALANX_DISTAL,
        RING_FINGER_TIP,
        PINKY_FINGER_METACARPAL,
        PINKY_FINGER_PHALANX_PROXIMAL,
        PINKY_FINGER_PHALANX_INTERMEDIATE,
        PINKY_FINGER_PHALANX_DISTAL,
        PINKY_FINGER_TIP,
    };

private:
    Value value_;

public:
    XRHandJoint() noexcept = delete;
    XRHandJoint(Value v) noexcept;
    explicit XRHandJoint(const emlite::Val& val) noexcept;
    static XRHandJoint take_ownership(Handle h) noexcept;
    [[nodiscard]] XRHandJoint clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const XRHandJoint& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const XRHandJoint& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type XRHitTestTrackableType
/// [`XRHitTestTrackableType`](https://developer.mozilla.org/en-US/docs/Web/API/XRHitTestTrackableType)
class XRHitTestTrackableType: public emlite::Val {
  explicit XRHitTestTrackableType(Handle h) noexcept;
public:
    enum Value {
        POINT,
        PLANE,
        MESH,
    };

private:
    Value value_;

public:
    XRHitTestTrackableType() noexcept = delete;
    XRHitTestTrackableType(Value v) noexcept;
    explicit XRHitTestTrackableType(const emlite::Val& val) noexcept;
    static XRHitTestTrackableType take_ownership(Handle h) noexcept;
    [[nodiscard]] XRHitTestTrackableType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const XRHitTestTrackableType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const XRHitTestTrackableType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type XRReflectionFormat
/// [`XRReflectionFormat`](https://developer.mozilla.org/en-US/docs/Web/API/XRReflectionFormat)
class XRReflectionFormat: public emlite::Val {
  explicit XRReflectionFormat(Handle h) noexcept;
public:
    enum Value {
        SRGBA8,
        RGBA16F,
    };

private:
    Value value_;

public:
    XRReflectionFormat() noexcept = delete;
    XRReflectionFormat(Value v) noexcept;
    explicit XRReflectionFormat(const emlite::Val& val) noexcept;
    static XRReflectionFormat take_ownership(Handle h) noexcept;
    [[nodiscard]] XRReflectionFormat clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const XRReflectionFormat& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const XRReflectionFormat& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type XRPlaneOrientation
/// [`XRPlaneOrientation`](https://developer.mozilla.org/en-US/docs/Web/API/XRPlaneOrientation)
class XRPlaneOrientation: public emlite::Val {
  explicit XRPlaneOrientation(Handle h) noexcept;
public:
    enum Value {
        HORIZONTAL,
        VERTICAL,
    };

private:
    Value value_;

public:
    XRPlaneOrientation() noexcept = delete;
    XRPlaneOrientation(Value v) noexcept;
    explicit XRPlaneOrientation(const emlite::Val& val) noexcept;
    static XRPlaneOrientation take_ownership(Handle h) noexcept;
    [[nodiscard]] XRPlaneOrientation clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const XRPlaneOrientation& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const XRPlaneOrientation& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type XRSessionMode
/// [`XRSessionMode`](https://developer.mozilla.org/en-US/docs/Web/API/XRSessionMode)
class XRSessionMode: public emlite::Val {
  explicit XRSessionMode(Handle h) noexcept;
public:
    enum Value {
        INLINE_,
        IMMERSIVE_VR,
        IMMERSIVE_AR,
    };

private:
    Value value_;

public:
    XRSessionMode() noexcept = delete;
    XRSessionMode(Value v) noexcept;
    explicit XRSessionMode(const emlite::Val& val) noexcept;
    static XRSessionMode take_ownership(Handle h) noexcept;
    [[nodiscard]] XRSessionMode clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const XRSessionMode& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const XRSessionMode& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type XRVisibilityState
/// [`XRVisibilityState`](https://developer.mozilla.org/en-US/docs/Web/API/XRVisibilityState)
class XRVisibilityState: public emlite::Val {
  explicit XRVisibilityState(Handle h) noexcept;
public:
    enum Value {
        VISIBLE,
        VISIBLE_BLURRED,
        HIDDEN,
    };

private:
    Value value_;

public:
    XRVisibilityState() noexcept = delete;
    XRVisibilityState(Value v) noexcept;
    explicit XRVisibilityState(const emlite::Val& val) noexcept;
    static XRVisibilityState take_ownership(Handle h) noexcept;
    [[nodiscard]] XRVisibilityState clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const XRVisibilityState& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const XRVisibilityState& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type XRReferenceSpaceType
/// [`XRReferenceSpaceType`](https://developer.mozilla.org/en-US/docs/Web/API/XRReferenceSpaceType)
class XRReferenceSpaceType: public emlite::Val {
  explicit XRReferenceSpaceType(Handle h) noexcept;
public:
    enum Value {
        VIEWER,
        LOCAL,
        LOCAL_FLOOR,
        BOUNDED_FLOOR,
        UNBOUNDED,
    };

private:
    Value value_;

public:
    XRReferenceSpaceType() noexcept = delete;
    XRReferenceSpaceType(Value v) noexcept;
    explicit XRReferenceSpaceType(const emlite::Val& val) noexcept;
    static XRReferenceSpaceType take_ownership(Handle h) noexcept;
    [[nodiscard]] XRReferenceSpaceType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const XRReferenceSpaceType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const XRReferenceSpaceType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type XREye
/// [`XREye`](https://developer.mozilla.org/en-US/docs/Web/API/XREye)
class XREye: public emlite::Val {
  explicit XREye(Handle h) noexcept;
public:
    enum Value {
        NONE,
        LEFT,
        RIGHT,
    };

private:
    Value value_;

public:
    XREye() noexcept = delete;
    XREye(Value v) noexcept;
    explicit XREye(const emlite::Val& val) noexcept;
    static XREye take_ownership(Handle h) noexcept;
    [[nodiscard]] XREye clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const XREye& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const XREye& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type XRHandedness
/// [`XRHandedness`](https://developer.mozilla.org/en-US/docs/Web/API/XRHandedness)
class XRHandedness: public emlite::Val {
  explicit XRHandedness(Handle h) noexcept;
public:
    enum Value {
        NONE,
        LEFT,
        RIGHT,
    };

private:
    Value value_;

public:
    XRHandedness() noexcept = delete;
    XRHandedness(Value v) noexcept;
    explicit XRHandedness(const emlite::Val& val) noexcept;
    static XRHandedness take_ownership(Handle h) noexcept;
    [[nodiscard]] XRHandedness clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const XRHandedness& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const XRHandedness& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type XRTargetRayMode
/// [`XRTargetRayMode`](https://developer.mozilla.org/en-US/docs/Web/API/XRTargetRayMode)
class XRTargetRayMode: public emlite::Val {
  explicit XRTargetRayMode(Handle h) noexcept;
public:
    enum Value {
        GAZE,
        TRACKED_POINTER,
        SCREEN,
        TRANSIENT_POINTER,
    };

private:
    Value value_;

public:
    XRTargetRayMode() noexcept = delete;
    XRTargetRayMode(Value v) noexcept;
    explicit XRTargetRayMode(const emlite::Val& val) noexcept;
    static XRTargetRayMode take_ownership(Handle h) noexcept;
    [[nodiscard]] XRTargetRayMode clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const XRTargetRayMode& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const XRTargetRayMode& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type XRLayerLayout
/// [`XRLayerLayout`](https://developer.mozilla.org/en-US/docs/Web/API/XRLayerLayout)
class XRLayerLayout: public emlite::Val {
  explicit XRLayerLayout(Handle h) noexcept;
public:
    enum Value {
        DEFAULT_,
        MONO,
        STEREO,
        STEREO_LEFT_RIGHT,
        STEREO_TOP_BOTTOM,
    };

private:
    Value value_;

public:
    XRLayerLayout() noexcept = delete;
    XRLayerLayout(Value v) noexcept;
    explicit XRLayerLayout(const emlite::Val& val) noexcept;
    static XRLayerLayout take_ownership(Handle h) noexcept;
    [[nodiscard]] XRLayerLayout clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const XRLayerLayout& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const XRLayerLayout& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type XRLayerQuality
/// [`XRLayerQuality`](https://developer.mozilla.org/en-US/docs/Web/API/XRLayerQuality)
class XRLayerQuality: public emlite::Val {
  explicit XRLayerQuality(Handle h) noexcept;
public:
    enum Value {
        DEFAULT_,
        TEXT_OPTIMIZED,
        GRAPHICS_OPTIMIZED,
    };

private:
    Value value_;

public:
    XRLayerQuality() noexcept = delete;
    XRLayerQuality(Value v) noexcept;
    explicit XRLayerQuality(const emlite::Val& val) noexcept;
    static XRLayerQuality take_ownership(Handle h) noexcept;
    [[nodiscard]] XRLayerQuality clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const XRLayerQuality& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const XRLayerQuality& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type XRTextureType
/// [`XRTextureType`](https://developer.mozilla.org/en-US/docs/Web/API/XRTextureType)
class XRTextureType: public emlite::Val {
  explicit XRTextureType(Handle h) noexcept;
public:
    enum Value {
        TEXTURE,
        TEXTURE_ARRAY,
    };

private:
    Value value_;

public:
    XRTextureType() noexcept = delete;
    XRTextureType(Value v) noexcept;
    explicit XRTextureType(const emlite::Val& val) noexcept;
    static XRTextureType take_ownership(Handle h) noexcept;
    [[nodiscard]] XRTextureType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const XRTextureType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const XRTextureType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type SummarizerType
/// [`SummarizerType`](https://developer.mozilla.org/en-US/docs/Web/API/SummarizerType)
class SummarizerType: public emlite::Val {
  explicit SummarizerType(Handle h) noexcept;
public:
    enum Value {
        TLDR,
        TEASER,
        KEY_POINTS,
        HEADLINE,
    };

private:
    Value value_;

public:
    SummarizerType() noexcept = delete;
    SummarizerType(Value v) noexcept;
    explicit SummarizerType(const emlite::Val& val) noexcept;
    static SummarizerType take_ownership(Handle h) noexcept;
    [[nodiscard]] SummarizerType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const SummarizerType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const SummarizerType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type SummarizerFormat
/// [`SummarizerFormat`](https://developer.mozilla.org/en-US/docs/Web/API/SummarizerFormat)
class SummarizerFormat: public emlite::Val {
  explicit SummarizerFormat(Handle h) noexcept;
public:
    enum Value {
        PLAIN_TEXT,
        MARKDOWN,
    };

private:
    Value value_;

public:
    SummarizerFormat() noexcept = delete;
    SummarizerFormat(Value v) noexcept;
    explicit SummarizerFormat(const emlite::Val& val) noexcept;
    static SummarizerFormat take_ownership(Handle h) noexcept;
    [[nodiscard]] SummarizerFormat clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const SummarizerFormat& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const SummarizerFormat& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type SummarizerLength
/// [`SummarizerLength`](https://developer.mozilla.org/en-US/docs/Web/API/SummarizerLength)
class SummarizerLength: public emlite::Val {
  explicit SummarizerLength(Handle h) noexcept;
public:
    enum Value {
        SHORT_,
        MEDIUM,
        LONG_,
    };

private:
    Value value_;

public:
    SummarizerLength() noexcept = delete;
    SummarizerLength(Value v) noexcept;
    explicit SummarizerLength(const emlite::Val& val) noexcept;
    static SummarizerLength take_ownership(Handle h) noexcept;
    [[nodiscard]] SummarizerLength clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const SummarizerLength& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const SummarizerLength& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type WriterTone
/// [`WriterTone`](https://developer.mozilla.org/en-US/docs/Web/API/WriterTone)
class WriterTone: public emlite::Val {
  explicit WriterTone(Handle h) noexcept;
public:
    enum Value {
        FORMAL,
        NEUTRAL,
        CASUAL,
    };

private:
    Value value_;

public:
    WriterTone() noexcept = delete;
    WriterTone(Value v) noexcept;
    explicit WriterTone(const emlite::Val& val) noexcept;
    static WriterTone take_ownership(Handle h) noexcept;
    [[nodiscard]] WriterTone clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const WriterTone& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const WriterTone& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type WriterFormat
/// [`WriterFormat`](https://developer.mozilla.org/en-US/docs/Web/API/WriterFormat)
class WriterFormat: public emlite::Val {
  explicit WriterFormat(Handle h) noexcept;
public:
    enum Value {
        PLAIN_TEXT,
        MARKDOWN,
    };

private:
    Value value_;

public:
    WriterFormat() noexcept = delete;
    WriterFormat(Value v) noexcept;
    explicit WriterFormat(const emlite::Val& val) noexcept;
    static WriterFormat take_ownership(Handle h) noexcept;
    [[nodiscard]] WriterFormat clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const WriterFormat& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const WriterFormat& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type WriterLength
/// [`WriterLength`](https://developer.mozilla.org/en-US/docs/Web/API/WriterLength)
class WriterLength: public emlite::Val {
  explicit WriterLength(Handle h) noexcept;
public:
    enum Value {
        SHORT_,
        MEDIUM,
        LONG_,
    };

private:
    Value value_;

public:
    WriterLength() noexcept = delete;
    WriterLength(Value v) noexcept;
    explicit WriterLength(const emlite::Val& val) noexcept;
    static WriterLength take_ownership(Handle h) noexcept;
    [[nodiscard]] WriterLength clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const WriterLength& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const WriterLength& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RewriterTone
/// [`RewriterTone`](https://developer.mozilla.org/en-US/docs/Web/API/RewriterTone)
class RewriterTone: public emlite::Val {
  explicit RewriterTone(Handle h) noexcept;
public:
    enum Value {
        AS_IS,
        MORE_FORMAL,
        MORE_CASUAL,
    };

private:
    Value value_;

public:
    RewriterTone() noexcept = delete;
    RewriterTone(Value v) noexcept;
    explicit RewriterTone(const emlite::Val& val) noexcept;
    static RewriterTone take_ownership(Handle h) noexcept;
    [[nodiscard]] RewriterTone clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RewriterTone& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RewriterTone& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RewriterFormat
/// [`RewriterFormat`](https://developer.mozilla.org/en-US/docs/Web/API/RewriterFormat)
class RewriterFormat: public emlite::Val {
  explicit RewriterFormat(Handle h) noexcept;
public:
    enum Value {
        AS_IS,
        PLAIN_TEXT,
        MARKDOWN,
    };

private:
    Value value_;

public:
    RewriterFormat() noexcept = delete;
    RewriterFormat(Value v) noexcept;
    explicit RewriterFormat(const emlite::Val& val) noexcept;
    static RewriterFormat take_ownership(Handle h) noexcept;
    [[nodiscard]] RewriterFormat clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RewriterFormat& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RewriterFormat& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type RewriterLength
/// [`RewriterLength`](https://developer.mozilla.org/en-US/docs/Web/API/RewriterLength)
class RewriterLength: public emlite::Val {
  explicit RewriterLength(Handle h) noexcept;
public:
    enum Value {
        AS_IS,
        SHORTER,
        LONGER,
    };

private:
    Value value_;

public:
    RewriterLength() noexcept = delete;
    RewriterLength(Value v) noexcept;
    explicit RewriterLength(const emlite::Val& val) noexcept;
    static RewriterLength take_ownership(Handle h) noexcept;
    [[nodiscard]] RewriterLength clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const RewriterLength& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const RewriterLength& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type Availability
/// [`Availability`](https://developer.mozilla.org/en-US/docs/Web/API/Availability)
class Availability: public emlite::Val {
  explicit Availability(Handle h) noexcept;
public:
    enum Value {
        UNAVAILABLE,
        DOWNLOADABLE,
        DOWNLOADING,
        AVAILABLE,
    };

private:
    Value value_;

public:
    Availability() noexcept = delete;
    Availability(Value v) noexcept;
    explicit Availability(const emlite::Val& val) noexcept;
    static Availability take_ownership(Handle h) noexcept;
    [[nodiscard]] Availability clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const Availability& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const Availability& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

/// Enum type XMLHttpRequestResponseType
/// [`XMLHttpRequestResponseType`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequestResponseType)
class XMLHttpRequestResponseType: public emlite::Val {
  explicit XMLHttpRequestResponseType(Handle h) noexcept;
public:
    enum Value {
        NONE,
        ARRAYBUFFER,
        BLOB,
        DOCUMENT,
        JSON,
        TEXT,
    };

private:
    Value value_;

public:
    XMLHttpRequestResponseType() noexcept = delete;
    XMLHttpRequestResponseType(Value v) noexcept;
    explicit XMLHttpRequestResponseType(const emlite::Val& val) noexcept;
    static XMLHttpRequestResponseType take_ownership(Handle h) noexcept;
    [[nodiscard]] XMLHttpRequestResponseType clone() const noexcept;

    [[nodiscard]] constexpr Value value() const noexcept { return value_; }
    [[nodiscard]] static Value from_string(const char *str) noexcept;
    [[nodiscard]] static const char* to_string(Value value_) noexcept;

    /// Comparison operators
    [[nodiscard]] constexpr bool operator==(const XMLHttpRequestResponseType& other) const noexcept { return value_ == other.value_; }
    [[nodiscard]] constexpr bool operator!=(const XMLHttpRequestResponseType& other) const noexcept { return value_ != other.value_; }
    [[nodiscard]] constexpr bool operator==(Value v) const noexcept { return value_ == v; }
    [[nodiscard]] constexpr bool operator!=(Value v) const noexcept { return value_ != v; }

};

} // namespace webbind