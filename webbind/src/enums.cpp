#include <webbind/enums.hpp>

namespace webbind {

SecurityPolicyViolationEventDisposition::Value SecurityPolicyViolationEventDisposition::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "enforce", strlen("enforce"))) {
        return ENFORCE;
    }
    else if (__builtin_strncmp(str, "report", strlen("report"))) {
        return REPORT;
    }
    else {
        // Default to first value for invalid input
        return ENFORCE;
    }
}

SecurityPolicyViolationEventDisposition::SecurityPolicyViolationEventDisposition(Value v) noexcept : emlite::Val(SecurityPolicyViolationEventDisposition::to_string(v)), value_(v) {}
SecurityPolicyViolationEventDisposition::SecurityPolicyViolationEventDisposition(Handle h) noexcept: emlite::Val(h) {
    value_ = SecurityPolicyViolationEventDisposition::from_string(as<emlite::Uniq<char[]>>().get());
}

SecurityPolicyViolationEventDisposition::SecurityPolicyViolationEventDisposition(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = SecurityPolicyViolationEventDisposition::from_string(as<emlite::Uniq<char[]>>().get());
}

SecurityPolicyViolationEventDisposition SecurityPolicyViolationEventDisposition::take_ownership(Handle h) noexcept { return SecurityPolicyViolationEventDisposition(h); }
SecurityPolicyViolationEventDisposition SecurityPolicyViolationEventDisposition::clone() const noexcept { return *this; }
const char* SecurityPolicyViolationEventDisposition::to_string(SecurityPolicyViolationEventDisposition::Value value_) noexcept {
    switch (value_) {
        case ENFORCE:
            return "enforce";
        case REPORT:
            return "report";
        default:
            return "enforce"; // fallback to first value
    }
}

EndingType::Value EndingType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "transparent", strlen("transparent"))) {
        return TRANSPARENT;
    }
    else if (__builtin_strncmp(str, "native", strlen("native"))) {
        return NATIVE;
    }
    else {
        // Default to first value for invalid input
        return TRANSPARENT;
    }
}

EndingType::EndingType(Value v) noexcept : emlite::Val(EndingType::to_string(v)), value_(v) {}
EndingType::EndingType(Handle h) noexcept: emlite::Val(h) {
    value_ = EndingType::from_string(as<emlite::Uniq<char[]>>().get());
}

EndingType::EndingType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = EndingType::from_string(as<emlite::Uniq<char[]>>().get());
}

EndingType EndingType::take_ownership(Handle h) noexcept { return EndingType(h); }
EndingType EndingType::clone() const noexcept { return *this; }
const char* EndingType::to_string(EndingType::Value value_) noexcept {
    switch (value_) {
        case TRANSPARENT:
            return "transparent";
        case NATIVE:
            return "native";
        default:
            return "transparent"; // fallback to first value
    }
}

IDBRequestReadyState::Value IDBRequestReadyState::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "pending", strlen("pending"))) {
        return PENDING;
    }
    else if (__builtin_strncmp(str, "done", strlen("done"))) {
        return DONE;
    }
    else {
        // Default to first value for invalid input
        return PENDING;
    }
}

IDBRequestReadyState::IDBRequestReadyState(Value v) noexcept : emlite::Val(IDBRequestReadyState::to_string(v)), value_(v) {}
IDBRequestReadyState::IDBRequestReadyState(Handle h) noexcept: emlite::Val(h) {
    value_ = IDBRequestReadyState::from_string(as<emlite::Uniq<char[]>>().get());
}

IDBRequestReadyState::IDBRequestReadyState(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = IDBRequestReadyState::from_string(as<emlite::Uniq<char[]>>().get());
}

IDBRequestReadyState IDBRequestReadyState::take_ownership(Handle h) noexcept { return IDBRequestReadyState(h); }
IDBRequestReadyState IDBRequestReadyState::clone() const noexcept { return *this; }
const char* IDBRequestReadyState::to_string(IDBRequestReadyState::Value value_) noexcept {
    switch (value_) {
        case PENDING:
            return "pending";
        case DONE:
            return "done";
        default:
            return "pending"; // fallback to first value
    }
}

IDBTransactionDurability::Value IDBTransactionDurability::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "default", strlen("default"))) {
        return DEFAULT_;
    }
    else if (__builtin_strncmp(str, "strict", strlen("strict"))) {
        return STRICT;
    }
    else if (__builtin_strncmp(str, "relaxed", strlen("relaxed"))) {
        return RELAXED;
    }
    else {
        // Default to first value for invalid input
        return DEFAULT_;
    }
}

IDBTransactionDurability::IDBTransactionDurability(Value v) noexcept : emlite::Val(IDBTransactionDurability::to_string(v)), value_(v) {}
IDBTransactionDurability::IDBTransactionDurability(Handle h) noexcept: emlite::Val(h) {
    value_ = IDBTransactionDurability::from_string(as<emlite::Uniq<char[]>>().get());
}

IDBTransactionDurability::IDBTransactionDurability(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = IDBTransactionDurability::from_string(as<emlite::Uniq<char[]>>().get());
}

IDBTransactionDurability IDBTransactionDurability::take_ownership(Handle h) noexcept { return IDBTransactionDurability(h); }
IDBTransactionDurability IDBTransactionDurability::clone() const noexcept { return *this; }
const char* IDBTransactionDurability::to_string(IDBTransactionDurability::Value value_) noexcept {
    switch (value_) {
        case DEFAULT_:
            return "default";
        case STRICT:
            return "strict";
        case RELAXED:
            return "relaxed";
        default:
            return "default"; // fallback to first value
    }
}

IDBCursorDirection::Value IDBCursorDirection::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "next", strlen("next"))) {
        return NEXT;
    }
    else if (__builtin_strncmp(str, "nextunique", strlen("nextunique"))) {
        return NEXTUNIQUE;
    }
    else if (__builtin_strncmp(str, "prev", strlen("prev"))) {
        return PREV;
    }
    else if (__builtin_strncmp(str, "prevunique", strlen("prevunique"))) {
        return PREVUNIQUE;
    }
    else {
        // Default to first value for invalid input
        return NEXT;
    }
}

IDBCursorDirection::IDBCursorDirection(Value v) noexcept : emlite::Val(IDBCursorDirection::to_string(v)), value_(v) {}
IDBCursorDirection::IDBCursorDirection(Handle h) noexcept: emlite::Val(h) {
    value_ = IDBCursorDirection::from_string(as<emlite::Uniq<char[]>>().get());
}

IDBCursorDirection::IDBCursorDirection(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = IDBCursorDirection::from_string(as<emlite::Uniq<char[]>>().get());
}

IDBCursorDirection IDBCursorDirection::take_ownership(Handle h) noexcept { return IDBCursorDirection(h); }
IDBCursorDirection IDBCursorDirection::clone() const noexcept { return *this; }
const char* IDBCursorDirection::to_string(IDBCursorDirection::Value value_) noexcept {
    switch (value_) {
        case NEXT:
            return "next";
        case NEXTUNIQUE:
            return "nextunique";
        case PREV:
            return "prev";
        case PREVUNIQUE:
            return "prevunique";
        default:
            return "next"; // fallback to first value
    }
}

IDBTransactionMode::Value IDBTransactionMode::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "readonly", strlen("readonly"))) {
        return READONLY;
    }
    else if (__builtin_strncmp(str, "readwrite", strlen("readwrite"))) {
        return READWRITE;
    }
    else if (__builtin_strncmp(str, "versionchange", strlen("versionchange"))) {
        return VERSIONCHANGE;
    }
    else {
        // Default to first value for invalid input
        return READONLY;
    }
}

IDBTransactionMode::IDBTransactionMode(Value v) noexcept : emlite::Val(IDBTransactionMode::to_string(v)), value_(v) {}
IDBTransactionMode::IDBTransactionMode(Handle h) noexcept: emlite::Val(h) {
    value_ = IDBTransactionMode::from_string(as<emlite::Uniq<char[]>>().get());
}

IDBTransactionMode::IDBTransactionMode(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = IDBTransactionMode::from_string(as<emlite::Uniq<char[]>>().get());
}

IDBTransactionMode IDBTransactionMode::take_ownership(Handle h) noexcept { return IDBTransactionMode(h); }
IDBTransactionMode IDBTransactionMode::clone() const noexcept { return *this; }
const char* IDBTransactionMode::to_string(IDBTransactionMode::Value value_) noexcept {
    switch (value_) {
        case READONLY:
            return "readonly";
        case READWRITE:
            return "readwrite";
        case VERSIONCHANGE:
            return "versionchange";
        default:
            return "readonly"; // fallback to first value
    }
}

AccelerometerLocalCoordinateSystem::Value AccelerometerLocalCoordinateSystem::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "device", strlen("device"))) {
        return DEVICE;
    }
    else if (__builtin_strncmp(str, "screen", strlen("screen"))) {
        return SCREEN;
    }
    else {
        // Default to first value for invalid input
        return DEVICE;
    }
}

AccelerometerLocalCoordinateSystem::AccelerometerLocalCoordinateSystem(Value v) noexcept : emlite::Val(AccelerometerLocalCoordinateSystem::to_string(v)), value_(v) {}
AccelerometerLocalCoordinateSystem::AccelerometerLocalCoordinateSystem(Handle h) noexcept: emlite::Val(h) {
    value_ = AccelerometerLocalCoordinateSystem::from_string(as<emlite::Uniq<char[]>>().get());
}

AccelerometerLocalCoordinateSystem::AccelerometerLocalCoordinateSystem(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = AccelerometerLocalCoordinateSystem::from_string(as<emlite::Uniq<char[]>>().get());
}

AccelerometerLocalCoordinateSystem AccelerometerLocalCoordinateSystem::take_ownership(Handle h) noexcept { return AccelerometerLocalCoordinateSystem(h); }
AccelerometerLocalCoordinateSystem AccelerometerLocalCoordinateSystem::clone() const noexcept { return *this; }
const char* AccelerometerLocalCoordinateSystem::to_string(AccelerometerLocalCoordinateSystem::Value value_) noexcept {
    switch (value_) {
        case DEVICE:
            return "device";
        case SCREEN:
            return "screen";
        default:
            return "device"; // fallback to first value
    }
}

AudioSessionType::Value AudioSessionType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "auto", strlen("auto"))) {
        return AUTO_;
    }
    else if (__builtin_strncmp(str, "playback", strlen("playback"))) {
        return PLAYBACK;
    }
    else if (__builtin_strncmp(str, "transient", strlen("transient"))) {
        return TRANSIENT;
    }
    else if (__builtin_strncmp(str, "transient-solo", strlen("transient-solo"))) {
        return TRANSIENT_SOLO;
    }
    else if (__builtin_strncmp(str, "ambient", strlen("ambient"))) {
        return AMBIENT;
    }
    else if (__builtin_strncmp(str, "play-and-record", strlen("play-and-record"))) {
        return PLAY_AND_RECORD;
    }
    else {
        // Default to first value for invalid input
        return AUTO_;
    }
}

AudioSessionType::AudioSessionType(Value v) noexcept : emlite::Val(AudioSessionType::to_string(v)), value_(v) {}
AudioSessionType::AudioSessionType(Handle h) noexcept: emlite::Val(h) {
    value_ = AudioSessionType::from_string(as<emlite::Uniq<char[]>>().get());
}

AudioSessionType::AudioSessionType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = AudioSessionType::from_string(as<emlite::Uniq<char[]>>().get());
}

AudioSessionType AudioSessionType::take_ownership(Handle h) noexcept { return AudioSessionType(h); }
AudioSessionType AudioSessionType::clone() const noexcept { return *this; }
const char* AudioSessionType::to_string(AudioSessionType::Value value_) noexcept {
    switch (value_) {
        case AUTO_:
            return "auto";
        case PLAYBACK:
            return "playback";
        case TRANSIENT:
            return "transient";
        case TRANSIENT_SOLO:
            return "transient-solo";
        case AMBIENT:
            return "ambient";
        case PLAY_AND_RECORD:
            return "play-and-record";
        default:
            return "auto"; // fallback to first value
    }
}

AudioSessionState::Value AudioSessionState::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "inactive", strlen("inactive"))) {
        return INACTIVE;
    }
    else if (__builtin_strncmp(str, "active", strlen("active"))) {
        return ACTIVE;
    }
    else if (__builtin_strncmp(str, "interrupted", strlen("interrupted"))) {
        return INTERRUPTED;
    }
    else {
        // Default to first value for invalid input
        return INACTIVE;
    }
}

AudioSessionState::AudioSessionState(Value v) noexcept : emlite::Val(AudioSessionState::to_string(v)), value_(v) {}
AudioSessionState::AudioSessionState(Handle h) noexcept: emlite::Val(h) {
    value_ = AudioSessionState::from_string(as<emlite::Uniq<char[]>>().get());
}

AudioSessionState::AudioSessionState(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = AudioSessionState::from_string(as<emlite::Uniq<char[]>>().get());
}

AudioSessionState AudioSessionState::take_ownership(Handle h) noexcept { return AudioSessionState(h); }
AudioSessionState AudioSessionState::clone() const noexcept { return *this; }
const char* AudioSessionState::to_string(AudioSessionState::Value value_) noexcept {
    switch (value_) {
        case INACTIVE:
            return "inactive";
        case ACTIVE:
            return "active";
        case INTERRUPTED:
            return "interrupted";
        default:
            return "inactive"; // fallback to first value
    }
}

AutoplayPolicy::Value AutoplayPolicy::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "allowed", strlen("allowed"))) {
        return ALLOWED;
    }
    else if (__builtin_strncmp(str, "allowed-muted", strlen("allowed-muted"))) {
        return ALLOWED_MUTED;
    }
    else if (__builtin_strncmp(str, "disallowed", strlen("disallowed"))) {
        return DISALLOWED;
    }
    else {
        // Default to first value for invalid input
        return ALLOWED;
    }
}

AutoplayPolicy::AutoplayPolicy(Value v) noexcept : emlite::Val(AutoplayPolicy::to_string(v)), value_(v) {}
AutoplayPolicy::AutoplayPolicy(Handle h) noexcept: emlite::Val(h) {
    value_ = AutoplayPolicy::from_string(as<emlite::Uniq<char[]>>().get());
}

AutoplayPolicy::AutoplayPolicy(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = AutoplayPolicy::from_string(as<emlite::Uniq<char[]>>().get());
}

AutoplayPolicy AutoplayPolicy::take_ownership(Handle h) noexcept { return AutoplayPolicy(h); }
AutoplayPolicy AutoplayPolicy::clone() const noexcept { return *this; }
const char* AutoplayPolicy::to_string(AutoplayPolicy::Value value_) noexcept {
    switch (value_) {
        case ALLOWED:
            return "allowed";
        case ALLOWED_MUTED:
            return "allowed-muted";
        case DISALLOWED:
            return "disallowed";
        default:
            return "allowed"; // fallback to first value
    }
}

AutoplayPolicyMediaType::Value AutoplayPolicyMediaType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "mediaelement", strlen("mediaelement"))) {
        return MEDIAELEMENT;
    }
    else if (__builtin_strncmp(str, "audiocontext", strlen("audiocontext"))) {
        return AUDIOCONTEXT;
    }
    else {
        // Default to first value for invalid input
        return MEDIAELEMENT;
    }
}

AutoplayPolicyMediaType::AutoplayPolicyMediaType(Value v) noexcept : emlite::Val(AutoplayPolicyMediaType::to_string(v)), value_(v) {}
AutoplayPolicyMediaType::AutoplayPolicyMediaType(Handle h) noexcept: emlite::Val(h) {
    value_ = AutoplayPolicyMediaType::from_string(as<emlite::Uniq<char[]>>().get());
}

AutoplayPolicyMediaType::AutoplayPolicyMediaType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = AutoplayPolicyMediaType::from_string(as<emlite::Uniq<char[]>>().get());
}

AutoplayPolicyMediaType AutoplayPolicyMediaType::take_ownership(Handle h) noexcept { return AutoplayPolicyMediaType(h); }
AutoplayPolicyMediaType AutoplayPolicyMediaType::clone() const noexcept { return *this; }
const char* AutoplayPolicyMediaType::to_string(AutoplayPolicyMediaType::Value value_) noexcept {
    switch (value_) {
        case MEDIAELEMENT:
            return "mediaelement";
        case AUDIOCONTEXT:
            return "audiocontext";
        default:
            return "mediaelement"; // fallback to first value
    }
}

BackgroundFetchResult::Value BackgroundFetchResult::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "", strlen(""))) {
        return NONE;
    }
    else if (__builtin_strncmp(str, "success", strlen("success"))) {
        return SUCCESS;
    }
    else if (__builtin_strncmp(str, "failure", strlen("failure"))) {
        return FAILURE;
    }
    else {
        // Default to first value for invalid input
        return NONE;
    }
}

BackgroundFetchResult::BackgroundFetchResult(Value v) noexcept : emlite::Val(BackgroundFetchResult::to_string(v)), value_(v) {}
BackgroundFetchResult::BackgroundFetchResult(Handle h) noexcept: emlite::Val(h) {
    value_ = BackgroundFetchResult::from_string(as<emlite::Uniq<char[]>>().get());
}

BackgroundFetchResult::BackgroundFetchResult(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = BackgroundFetchResult::from_string(as<emlite::Uniq<char[]>>().get());
}

BackgroundFetchResult BackgroundFetchResult::take_ownership(Handle h) noexcept { return BackgroundFetchResult(h); }
BackgroundFetchResult BackgroundFetchResult::clone() const noexcept { return *this; }
const char* BackgroundFetchResult::to_string(BackgroundFetchResult::Value value_) noexcept {
    switch (value_) {
        case NONE:
            return "";
        case SUCCESS:
            return "success";
        case FAILURE:
            return "failure";
        default:
            return ""; // fallback to first value
    }
}

BackgroundFetchFailureReason::Value BackgroundFetchFailureReason::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "", strlen(""))) {
        return NONE;
    }
    else if (__builtin_strncmp(str, "aborted", strlen("aborted"))) {
        return ABORTED;
    }
    else if (__builtin_strncmp(str, "bad-status", strlen("bad-status"))) {
        return BAD_STATUS;
    }
    else if (__builtin_strncmp(str, "fetch-error", strlen("fetch-error"))) {
        return FETCH_ERROR;
    }
    else if (__builtin_strncmp(str, "quota-exceeded", strlen("quota-exceeded"))) {
        return QUOTA_EXCEEDED;
    }
    else if (__builtin_strncmp(str, "download-total-exceeded", strlen("download-total-exceeded"))) {
        return DOWNLOAD_TOTAL_EXCEEDED;
    }
    else {
        // Default to first value for invalid input
        return NONE;
    }
}

BackgroundFetchFailureReason::BackgroundFetchFailureReason(Value v) noexcept : emlite::Val(BackgroundFetchFailureReason::to_string(v)), value_(v) {}
BackgroundFetchFailureReason::BackgroundFetchFailureReason(Handle h) noexcept: emlite::Val(h) {
    value_ = BackgroundFetchFailureReason::from_string(as<emlite::Uniq<char[]>>().get());
}

BackgroundFetchFailureReason::BackgroundFetchFailureReason(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = BackgroundFetchFailureReason::from_string(as<emlite::Uniq<char[]>>().get());
}

BackgroundFetchFailureReason BackgroundFetchFailureReason::take_ownership(Handle h) noexcept { return BackgroundFetchFailureReason(h); }
BackgroundFetchFailureReason BackgroundFetchFailureReason::clone() const noexcept { return *this; }
const char* BackgroundFetchFailureReason::to_string(BackgroundFetchFailureReason::Value value_) noexcept {
    switch (value_) {
        case NONE:
            return "";
        case ABORTED:
            return "aborted";
        case BAD_STATUS:
            return "bad-status";
        case FETCH_ERROR:
            return "fetch-error";
        case QUOTA_EXCEEDED:
            return "quota-exceeded";
        case DOWNLOAD_TOTAL_EXCEEDED:
            return "download-total-exceeded";
        default:
            return ""; // fallback to first value
    }
}

PresentationStyle::Value PresentationStyle::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "unspecified", strlen("unspecified"))) {
        return UNSPECIFIED;
    }
    else if (__builtin_strncmp(str, "inline", strlen("inline"))) {
        return INLINE_;
    }
    else if (__builtin_strncmp(str, "attachment", strlen("attachment"))) {
        return ATTACHMENT;
    }
    else {
        // Default to first value for invalid input
        return UNSPECIFIED;
    }
}

PresentationStyle::PresentationStyle(Value v) noexcept : emlite::Val(PresentationStyle::to_string(v)), value_(v) {}
PresentationStyle::PresentationStyle(Handle h) noexcept: emlite::Val(h) {
    value_ = PresentationStyle::from_string(as<emlite::Uniq<char[]>>().get());
}

PresentationStyle::PresentationStyle(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = PresentationStyle::from_string(as<emlite::Uniq<char[]>>().get());
}

PresentationStyle PresentationStyle::take_ownership(Handle h) noexcept { return PresentationStyle(h); }
PresentationStyle PresentationStyle::clone() const noexcept { return *this; }
const char* PresentationStyle::to_string(PresentationStyle::Value value_) noexcept {
    switch (value_) {
        case UNSPECIFIED:
            return "unspecified";
        case INLINE_:
            return "inline";
        case ATTACHMENT:
            return "attachment";
        default:
            return "unspecified"; // fallback to first value
    }
}

CompressionFormat::Value CompressionFormat::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "deflate", strlen("deflate"))) {
        return DEFLATE;
    }
    else if (__builtin_strncmp(str, "deflate-raw", strlen("deflate-raw"))) {
        return DEFLATE_RAW;
    }
    else if (__builtin_strncmp(str, "gzip", strlen("gzip"))) {
        return GZIP;
    }
    else {
        // Default to first value for invalid input
        return DEFLATE;
    }
}

CompressionFormat::CompressionFormat(Value v) noexcept : emlite::Val(CompressionFormat::to_string(v)), value_(v) {}
CompressionFormat::CompressionFormat(Handle h) noexcept: emlite::Val(h) {
    value_ = CompressionFormat::from_string(as<emlite::Uniq<char[]>>().get());
}

CompressionFormat::CompressionFormat(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = CompressionFormat::from_string(as<emlite::Uniq<char[]>>().get());
}

CompressionFormat CompressionFormat::take_ownership(Handle h) noexcept { return CompressionFormat(h); }
CompressionFormat CompressionFormat::clone() const noexcept { return *this; }
const char* CompressionFormat::to_string(CompressionFormat::Value value_) noexcept {
    switch (value_) {
        case DEFLATE:
            return "deflate";
        case DEFLATE_RAW:
            return "deflate-raw";
        case GZIP:
            return "gzip";
        default:
            return "deflate"; // fallback to first value
    }
}

PressureSource::Value PressureSource::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "cpu", strlen("cpu"))) {
        return CPU;
    }
    else {
        // Default to first value for invalid input
        return CPU;
    }
}

PressureSource::PressureSource(Value v) noexcept : emlite::Val(PressureSource::to_string(v)), value_(v) {}
PressureSource::PressureSource(Handle h) noexcept: emlite::Val(h) {
    value_ = PressureSource::from_string(as<emlite::Uniq<char[]>>().get());
}

PressureSource::PressureSource(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = PressureSource::from_string(as<emlite::Uniq<char[]>>().get());
}

PressureSource PressureSource::take_ownership(Handle h) noexcept { return PressureSource(h); }
PressureSource PressureSource::clone() const noexcept { return *this; }
const char* PressureSource::to_string(PressureSource::Value value_) noexcept {
    switch (value_) {
        case CPU:
            return "cpu";
        default:
            return "cpu"; // fallback to first value
    }
}

PressureState::Value PressureState::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "nominal", strlen("nominal"))) {
        return NOMINAL;
    }
    else if (__builtin_strncmp(str, "fair", strlen("fair"))) {
        return FAIR;
    }
    else if (__builtin_strncmp(str, "serious", strlen("serious"))) {
        return SERIOUS;
    }
    else if (__builtin_strncmp(str, "critical", strlen("critical"))) {
        return CRITICAL;
    }
    else {
        // Default to first value for invalid input
        return NOMINAL;
    }
}

PressureState::PressureState(Value v) noexcept : emlite::Val(PressureState::to_string(v)), value_(v) {}
PressureState::PressureState(Handle h) noexcept: emlite::Val(h) {
    value_ = PressureState::from_string(as<emlite::Uniq<char[]>>().get());
}

PressureState::PressureState(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = PressureState::from_string(as<emlite::Uniq<char[]>>().get());
}

PressureState PressureState::take_ownership(Handle h) noexcept { return PressureState(h); }
PressureState PressureState::clone() const noexcept { return *this; }
const char* PressureState::to_string(PressureState::Value value_) noexcept {
    switch (value_) {
        case NOMINAL:
            return "nominal";
        case FAIR:
            return "fair";
        case SERIOUS:
            return "serious";
        case CRITICAL:
            return "critical";
        default:
            return "nominal"; // fallback to first value
    }
}

ContactProperty::Value ContactProperty::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "address", strlen("address"))) {
        return ADDRESS;
    }
    else if (__builtin_strncmp(str, "email", strlen("email"))) {
        return EMAIL;
    }
    else if (__builtin_strncmp(str, "icon", strlen("icon"))) {
        return ICON;
    }
    else if (__builtin_strncmp(str, "name", strlen("name"))) {
        return NAME;
    }
    else if (__builtin_strncmp(str, "tel", strlen("tel"))) {
        return TEL;
    }
    else {
        // Default to first value for invalid input
        return ADDRESS;
    }
}

ContactProperty::ContactProperty(Value v) noexcept : emlite::Val(ContactProperty::to_string(v)), value_(v) {}
ContactProperty::ContactProperty(Handle h) noexcept: emlite::Val(h) {
    value_ = ContactProperty::from_string(as<emlite::Uniq<char[]>>().get());
}

ContactProperty::ContactProperty(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = ContactProperty::from_string(as<emlite::Uniq<char[]>>().get());
}

ContactProperty ContactProperty::take_ownership(Handle h) noexcept { return ContactProperty(h); }
ContactProperty ContactProperty::clone() const noexcept { return *this; }
const char* ContactProperty::to_string(ContactProperty::Value value_) noexcept {
    switch (value_) {
        case ADDRESS:
            return "address";
        case EMAIL:
            return "email";
        case ICON:
            return "icon";
        case NAME:
            return "name";
        case TEL:
            return "tel";
        default:
            return "address"; // fallback to first value
    }
}

ContentCategory::Value ContentCategory::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "", strlen(""))) {
        return NONE;
    }
    else if (__builtin_strncmp(str, "homepage", strlen("homepage"))) {
        return HOMEPAGE;
    }
    else if (__builtin_strncmp(str, "article", strlen("article"))) {
        return ARTICLE;
    }
    else if (__builtin_strncmp(str, "video", strlen("video"))) {
        return VIDEO;
    }
    else if (__builtin_strncmp(str, "audio", strlen("audio"))) {
        return AUDIO;
    }
    else {
        // Default to first value for invalid input
        return NONE;
    }
}

ContentCategory::ContentCategory(Value v) noexcept : emlite::Val(ContentCategory::to_string(v)), value_(v) {}
ContentCategory::ContentCategory(Handle h) noexcept: emlite::Val(h) {
    value_ = ContentCategory::from_string(as<emlite::Uniq<char[]>>().get());
}

ContentCategory::ContentCategory(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = ContentCategory::from_string(as<emlite::Uniq<char[]>>().get());
}

ContentCategory ContentCategory::take_ownership(Handle h) noexcept { return ContentCategory(h); }
ContentCategory ContentCategory::clone() const noexcept { return *this; }
const char* ContentCategory::to_string(ContentCategory::Value value_) noexcept {
    switch (value_) {
        case NONE:
            return "";
        case HOMEPAGE:
            return "homepage";
        case ARTICLE:
            return "article";
        case VIDEO:
            return "video";
        case AUDIO:
            return "audio";
        default:
            return ""; // fallback to first value
    }
}

CookieSameSite::Value CookieSameSite::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "strict", strlen("strict"))) {
        return STRICT;
    }
    else if (__builtin_strncmp(str, "lax", strlen("lax"))) {
        return LAX;
    }
    else if (__builtin_strncmp(str, "none", strlen("none"))) {
        return NONE;
    }
    else {
        // Default to first value for invalid input
        return STRICT;
    }
}

CookieSameSite::CookieSameSite(Value v) noexcept : emlite::Val(CookieSameSite::to_string(v)), value_(v) {}
CookieSameSite::CookieSameSite(Handle h) noexcept: emlite::Val(h) {
    value_ = CookieSameSite::from_string(as<emlite::Uniq<char[]>>().get());
}

CookieSameSite::CookieSameSite(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = CookieSameSite::from_string(as<emlite::Uniq<char[]>>().get());
}

CookieSameSite CookieSameSite::take_ownership(Handle h) noexcept { return CookieSameSite(h); }
CookieSameSite CookieSameSite::clone() const noexcept { return *this; }
const char* CookieSameSite::to_string(CookieSameSite::Value value_) noexcept {
    switch (value_) {
        case STRICT:
            return "strict";
        case LAX:
            return "lax";
        case NONE:
            return "none";
        default:
            return "strict"; // fallback to first value
    }
}

CredentialMediationRequirement::Value CredentialMediationRequirement::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "silent", strlen("silent"))) {
        return SILENT;
    }
    else if (__builtin_strncmp(str, "optional", strlen("optional"))) {
        return OPTIONAL;
    }
    else if (__builtin_strncmp(str, "conditional", strlen("conditional"))) {
        return CONDITIONAL;
    }
    else if (__builtin_strncmp(str, "required", strlen("required"))) {
        return REQUIRED;
    }
    else {
        // Default to first value for invalid input
        return SILENT;
    }
}

CredentialMediationRequirement::CredentialMediationRequirement(Value v) noexcept : emlite::Val(CredentialMediationRequirement::to_string(v)), value_(v) {}
CredentialMediationRequirement::CredentialMediationRequirement(Handle h) noexcept: emlite::Val(h) {
    value_ = CredentialMediationRequirement::from_string(as<emlite::Uniq<char[]>>().get());
}

CredentialMediationRequirement::CredentialMediationRequirement(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = CredentialMediationRequirement::from_string(as<emlite::Uniq<char[]>>().get());
}

CredentialMediationRequirement CredentialMediationRequirement::take_ownership(Handle h) noexcept { return CredentialMediationRequirement(h); }
CredentialMediationRequirement CredentialMediationRequirement::clone() const noexcept { return *this; }
const char* CredentialMediationRequirement::to_string(CredentialMediationRequirement::Value value_) noexcept {
    switch (value_) {
        case SILENT:
            return "silent";
        case OPTIONAL:
            return "optional";
        case CONDITIONAL:
            return "conditional";
        case REQUIRED:
            return "required";
        default:
            return "silent"; // fallback to first value
    }
}

ScriptingPolicyViolationType::Value ScriptingPolicyViolationType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "externalScript", strlen("externalScript"))) {
        return EXTERNALSCRIPT;
    }
    else if (__builtin_strncmp(str, "inlineScript", strlen("inlineScript"))) {
        return INLINESCRIPT;
    }
    else if (__builtin_strncmp(str, "inlineEventHandler", strlen("inlineEventHandler"))) {
        return INLINEEVENTHANDLER;
    }
    else if (__builtin_strncmp(str, "eval", strlen("eval"))) {
        return EVAL;
    }
    else {
        // Default to first value for invalid input
        return EXTERNALSCRIPT;
    }
}

ScriptingPolicyViolationType::ScriptingPolicyViolationType(Value v) noexcept : emlite::Val(ScriptingPolicyViolationType::to_string(v)), value_(v) {}
ScriptingPolicyViolationType::ScriptingPolicyViolationType(Handle h) noexcept: emlite::Val(h) {
    value_ = ScriptingPolicyViolationType::from_string(as<emlite::Uniq<char[]>>().get());
}

ScriptingPolicyViolationType::ScriptingPolicyViolationType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = ScriptingPolicyViolationType::from_string(as<emlite::Uniq<char[]>>().get());
}

ScriptingPolicyViolationType ScriptingPolicyViolationType::take_ownership(Handle h) noexcept { return ScriptingPolicyViolationType(h); }
ScriptingPolicyViolationType ScriptingPolicyViolationType::clone() const noexcept { return *this; }
const char* ScriptingPolicyViolationType::to_string(ScriptingPolicyViolationType::Value value_) noexcept {
    switch (value_) {
        case EXTERNALSCRIPT:
            return "externalScript";
        case INLINESCRIPT:
            return "inlineScript";
        case INLINEEVENTHANDLER:
            return "inlineEventHandler";
        case EVAL:
            return "eval";
        default:
            return "externalScript"; // fallback to first value
    }
}

FontFaceLoadStatus::Value FontFaceLoadStatus::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "unloaded", strlen("unloaded"))) {
        return UNLOADED;
    }
    else if (__builtin_strncmp(str, "loading", strlen("loading"))) {
        return LOADING;
    }
    else if (__builtin_strncmp(str, "loaded", strlen("loaded"))) {
        return LOADED;
    }
    else if (__builtin_strncmp(str, "error", strlen("error"))) {
        return ERROR;
    }
    else {
        // Default to first value for invalid input
        return UNLOADED;
    }
}

FontFaceLoadStatus::FontFaceLoadStatus(Value v) noexcept : emlite::Val(FontFaceLoadStatus::to_string(v)), value_(v) {}
FontFaceLoadStatus::FontFaceLoadStatus(Handle h) noexcept: emlite::Val(h) {
    value_ = FontFaceLoadStatus::from_string(as<emlite::Uniq<char[]>>().get());
}

FontFaceLoadStatus::FontFaceLoadStatus(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = FontFaceLoadStatus::from_string(as<emlite::Uniq<char[]>>().get());
}

FontFaceLoadStatus FontFaceLoadStatus::take_ownership(Handle h) noexcept { return FontFaceLoadStatus(h); }
FontFaceLoadStatus FontFaceLoadStatus::clone() const noexcept { return *this; }
const char* FontFaceLoadStatus::to_string(FontFaceLoadStatus::Value value_) noexcept {
    switch (value_) {
        case UNLOADED:
            return "unloaded";
        case LOADING:
            return "loading";
        case LOADED:
            return "loaded";
        case ERROR:
            return "error";
        default:
            return "unloaded"; // fallback to first value
    }
}

FontFaceSetLoadStatus::Value FontFaceSetLoadStatus::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "loading", strlen("loading"))) {
        return LOADING;
    }
    else if (__builtin_strncmp(str, "loaded", strlen("loaded"))) {
        return LOADED;
    }
    else {
        // Default to first value for invalid input
        return LOADING;
    }
}

FontFaceSetLoadStatus::FontFaceSetLoadStatus(Value v) noexcept : emlite::Val(FontFaceSetLoadStatus::to_string(v)), value_(v) {}
FontFaceSetLoadStatus::FontFaceSetLoadStatus(Handle h) noexcept: emlite::Val(h) {
    value_ = FontFaceSetLoadStatus::from_string(as<emlite::Uniq<char[]>>().get());
}

FontFaceSetLoadStatus::FontFaceSetLoadStatus(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = FontFaceSetLoadStatus::from_string(as<emlite::Uniq<char[]>>().get());
}

FontFaceSetLoadStatus FontFaceSetLoadStatus::take_ownership(Handle h) noexcept { return FontFaceSetLoadStatus(h); }
FontFaceSetLoadStatus FontFaceSetLoadStatus::clone() const noexcept { return *this; }
const char* FontFaceSetLoadStatus::to_string(FontFaceSetLoadStatus::Value value_) noexcept {
    switch (value_) {
        case LOADING:
            return "loading";
        case LOADED:
            return "loaded";
        default:
            return "loading"; // fallback to first value
    }
}

HighlightType::Value HighlightType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "highlight", strlen("highlight"))) {
        return HIGHLIGHT;
    }
    else if (__builtin_strncmp(str, "spelling-error", strlen("spelling-error"))) {
        return SPELLING_ERROR;
    }
    else if (__builtin_strncmp(str, "grammar-error", strlen("grammar-error"))) {
        return GRAMMAR_ERROR;
    }
    else {
        // Default to first value for invalid input
        return HIGHLIGHT;
    }
}

HighlightType::HighlightType(Value v) noexcept : emlite::Val(HighlightType::to_string(v)), value_(v) {}
HighlightType::HighlightType(Handle h) noexcept: emlite::Val(h) {
    value_ = HighlightType::from_string(as<emlite::Uniq<char[]>>().get());
}

HighlightType::HighlightType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = HighlightType::from_string(as<emlite::Uniq<char[]>>().get());
}

HighlightType HighlightType::take_ownership(Handle h) noexcept { return HighlightType(h); }
HighlightType HighlightType::clone() const noexcept { return *this; }
const char* HighlightType::to_string(HighlightType::Value value_) noexcept {
    switch (value_) {
        case HIGHLIGHT:
            return "highlight";
        case SPELLING_ERROR:
            return "spelling-error";
        case GRAMMAR_ERROR:
            return "grammar-error";
        default:
            return "highlight"; // fallback to first value
    }
}

ChildDisplayType::Value ChildDisplayType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "block", strlen("block"))) {
        return BLOCK;
    }
    else if (__builtin_strncmp(str, "normal", strlen("normal"))) {
        return NORMAL;
    }
    else {
        // Default to first value for invalid input
        return BLOCK;
    }
}

ChildDisplayType::ChildDisplayType(Value v) noexcept : emlite::Val(ChildDisplayType::to_string(v)), value_(v) {}
ChildDisplayType::ChildDisplayType(Handle h) noexcept: emlite::Val(h) {
    value_ = ChildDisplayType::from_string(as<emlite::Uniq<char[]>>().get());
}

ChildDisplayType::ChildDisplayType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = ChildDisplayType::from_string(as<emlite::Uniq<char[]>>().get());
}

ChildDisplayType ChildDisplayType::take_ownership(Handle h) noexcept { return ChildDisplayType(h); }
ChildDisplayType ChildDisplayType::clone() const noexcept { return *this; }
const char* ChildDisplayType::to_string(ChildDisplayType::Value value_) noexcept {
    switch (value_) {
        case BLOCK:
            return "block";
        case NORMAL:
            return "normal";
        default:
            return "block"; // fallback to first value
    }
}

LayoutSizingMode::Value LayoutSizingMode::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "block-like", strlen("block-like"))) {
        return BLOCK_LIKE;
    }
    else if (__builtin_strncmp(str, "manual", strlen("manual"))) {
        return MANUAL;
    }
    else {
        // Default to first value for invalid input
        return BLOCK_LIKE;
    }
}

LayoutSizingMode::LayoutSizingMode(Value v) noexcept : emlite::Val(LayoutSizingMode::to_string(v)), value_(v) {}
LayoutSizingMode::LayoutSizingMode(Handle h) noexcept: emlite::Val(h) {
    value_ = LayoutSizingMode::from_string(as<emlite::Uniq<char[]>>().get());
}

LayoutSizingMode::LayoutSizingMode(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = LayoutSizingMode::from_string(as<emlite::Uniq<char[]>>().get());
}

LayoutSizingMode LayoutSizingMode::take_ownership(Handle h) noexcept { return LayoutSizingMode(h); }
LayoutSizingMode LayoutSizingMode::clone() const noexcept { return *this; }
const char* LayoutSizingMode::to_string(LayoutSizingMode::Value value_) noexcept {
    switch (value_) {
        case BLOCK_LIKE:
            return "block-like";
        case MANUAL:
            return "manual";
        default:
            return "block-like"; // fallback to first value
    }
}

BlockFragmentationType::Value BlockFragmentationType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "none", strlen("none"))) {
        return NONE;
    }
    else if (__builtin_strncmp(str, "page", strlen("page"))) {
        return PAGE;
    }
    else if (__builtin_strncmp(str, "column", strlen("column"))) {
        return COLUMN;
    }
    else if (__builtin_strncmp(str, "region", strlen("region"))) {
        return REGION;
    }
    else {
        // Default to first value for invalid input
        return NONE;
    }
}

BlockFragmentationType::BlockFragmentationType(Value v) noexcept : emlite::Val(BlockFragmentationType::to_string(v)), value_(v) {}
BlockFragmentationType::BlockFragmentationType(Handle h) noexcept: emlite::Val(h) {
    value_ = BlockFragmentationType::from_string(as<emlite::Uniq<char[]>>().get());
}

BlockFragmentationType::BlockFragmentationType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = BlockFragmentationType::from_string(as<emlite::Uniq<char[]>>().get());
}

BlockFragmentationType BlockFragmentationType::take_ownership(Handle h) noexcept { return BlockFragmentationType(h); }
BlockFragmentationType BlockFragmentationType::clone() const noexcept { return *this; }
const char* BlockFragmentationType::to_string(BlockFragmentationType::Value value_) noexcept {
    switch (value_) {
        case NONE:
            return "none";
        case PAGE:
            return "page";
        case COLUMN:
            return "column";
        case REGION:
            return "region";
        default:
            return "none"; // fallback to first value
    }
}

BreakType::Value BreakType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "none", strlen("none"))) {
        return NONE;
    }
    else if (__builtin_strncmp(str, "line", strlen("line"))) {
        return LINE;
    }
    else if (__builtin_strncmp(str, "column", strlen("column"))) {
        return COLUMN;
    }
    else if (__builtin_strncmp(str, "page", strlen("page"))) {
        return PAGE;
    }
    else if (__builtin_strncmp(str, "region", strlen("region"))) {
        return REGION;
    }
    else {
        // Default to first value for invalid input
        return NONE;
    }
}

BreakType::BreakType(Value v) noexcept : emlite::Val(BreakType::to_string(v)), value_(v) {}
BreakType::BreakType(Handle h) noexcept: emlite::Val(h) {
    value_ = BreakType::from_string(as<emlite::Uniq<char[]>>().get());
}

BreakType::BreakType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = BreakType::from_string(as<emlite::Uniq<char[]>>().get());
}

BreakType BreakType::take_ownership(Handle h) noexcept { return BreakType(h); }
BreakType BreakType::clone() const noexcept { return *this; }
const char* BreakType::to_string(BreakType::Value value_) noexcept {
    switch (value_) {
        case NONE:
            return "none";
        case LINE:
            return "line";
        case COLUMN:
            return "column";
        case PAGE:
            return "page";
        case REGION:
            return "region";
        default:
            return "none"; // fallback to first value
    }
}

SpatialNavigationDirection::Value SpatialNavigationDirection::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "up", strlen("up"))) {
        return UP;
    }
    else if (__builtin_strncmp(str, "down", strlen("down"))) {
        return DOWN;
    }
    else if (__builtin_strncmp(str, "left", strlen("left"))) {
        return LEFT;
    }
    else if (__builtin_strncmp(str, "right", strlen("right"))) {
        return RIGHT;
    }
    else {
        // Default to first value for invalid input
        return UP;
    }
}

SpatialNavigationDirection::SpatialNavigationDirection(Value v) noexcept : emlite::Val(SpatialNavigationDirection::to_string(v)), value_(v) {}
SpatialNavigationDirection::SpatialNavigationDirection(Handle h) noexcept: emlite::Val(h) {
    value_ = SpatialNavigationDirection::from_string(as<emlite::Uniq<char[]>>().get());
}

SpatialNavigationDirection::SpatialNavigationDirection(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = SpatialNavigationDirection::from_string(as<emlite::Uniq<char[]>>().get());
}

SpatialNavigationDirection SpatialNavigationDirection::take_ownership(Handle h) noexcept { return SpatialNavigationDirection(h); }
SpatialNavigationDirection SpatialNavigationDirection::clone() const noexcept { return *this; }
const char* SpatialNavigationDirection::to_string(SpatialNavigationDirection::Value value_) noexcept {
    switch (value_) {
        case UP:
            return "up";
        case DOWN:
            return "down";
        case LEFT:
            return "left";
        case RIGHT:
            return "right";
        default:
            return "up"; // fallback to first value
    }
}

FocusableAreaSearchMode::Value FocusableAreaSearchMode::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "visible", strlen("visible"))) {
        return VISIBLE;
    }
    else if (__builtin_strncmp(str, "all", strlen("all"))) {
        return ALL;
    }
    else {
        // Default to first value for invalid input
        return VISIBLE;
    }
}

FocusableAreaSearchMode::FocusableAreaSearchMode(Value v) noexcept : emlite::Val(FocusableAreaSearchMode::to_string(v)), value_(v) {}
FocusableAreaSearchMode::FocusableAreaSearchMode(Handle h) noexcept: emlite::Val(h) {
    value_ = FocusableAreaSearchMode::from_string(as<emlite::Uniq<char[]>>().get());
}

FocusableAreaSearchMode::FocusableAreaSearchMode(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = FocusableAreaSearchMode::from_string(as<emlite::Uniq<char[]>>().get());
}

FocusableAreaSearchMode FocusableAreaSearchMode::take_ownership(Handle h) noexcept { return FocusableAreaSearchMode(h); }
FocusableAreaSearchMode FocusableAreaSearchMode::clone() const noexcept { return *this; }
const char* FocusableAreaSearchMode::to_string(FocusableAreaSearchMode::Value value_) noexcept {
    switch (value_) {
        case VISIBLE:
            return "visible";
        case ALL:
            return "all";
        default:
            return "visible"; // fallback to first value
    }
}

CSSNumericBaseType::Value CSSNumericBaseType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "length", strlen("length"))) {
        return LENGTH;
    }
    else if (__builtin_strncmp(str, "angle", strlen("angle"))) {
        return ANGLE;
    }
    else if (__builtin_strncmp(str, "time", strlen("time"))) {
        return TIME;
    }
    else if (__builtin_strncmp(str, "frequency", strlen("frequency"))) {
        return FREQUENCY;
    }
    else if (__builtin_strncmp(str, "resolution", strlen("resolution"))) {
        return RESOLUTION;
    }
    else if (__builtin_strncmp(str, "flex", strlen("flex"))) {
        return FLEX;
    }
    else if (__builtin_strncmp(str, "percent", strlen("percent"))) {
        return PERCENT;
    }
    else {
        // Default to first value for invalid input
        return LENGTH;
    }
}

CSSNumericBaseType::CSSNumericBaseType(Value v) noexcept : emlite::Val(CSSNumericBaseType::to_string(v)), value_(v) {}
CSSNumericBaseType::CSSNumericBaseType(Handle h) noexcept: emlite::Val(h) {
    value_ = CSSNumericBaseType::from_string(as<emlite::Uniq<char[]>>().get());
}

CSSNumericBaseType::CSSNumericBaseType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = CSSNumericBaseType::from_string(as<emlite::Uniq<char[]>>().get());
}

CSSNumericBaseType CSSNumericBaseType::take_ownership(Handle h) noexcept { return CSSNumericBaseType(h); }
CSSNumericBaseType CSSNumericBaseType::clone() const noexcept { return *this; }
const char* CSSNumericBaseType::to_string(CSSNumericBaseType::Value value_) noexcept {
    switch (value_) {
        case LENGTH:
            return "length";
        case ANGLE:
            return "angle";
        case TIME:
            return "time";
        case FREQUENCY:
            return "frequency";
        case RESOLUTION:
            return "resolution";
        case FLEX:
            return "flex";
        case PERCENT:
            return "percent";
        default:
            return "length"; // fallback to first value
    }
}

CSSMathOperator::Value CSSMathOperator::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "sum", strlen("sum"))) {
        return SUM;
    }
    else if (__builtin_strncmp(str, "product", strlen("product"))) {
        return PRODUCT;
    }
    else if (__builtin_strncmp(str, "negate", strlen("negate"))) {
        return NEGATE;
    }
    else if (__builtin_strncmp(str, "invert", strlen("invert"))) {
        return INVERT;
    }
    else if (__builtin_strncmp(str, "min", strlen("min"))) {
        return MIN;
    }
    else if (__builtin_strncmp(str, "max", strlen("max"))) {
        return MAX;
    }
    else if (__builtin_strncmp(str, "clamp", strlen("clamp"))) {
        return CLAMP;
    }
    else {
        // Default to first value for invalid input
        return SUM;
    }
}

CSSMathOperator::CSSMathOperator(Value v) noexcept : emlite::Val(CSSMathOperator::to_string(v)), value_(v) {}
CSSMathOperator::CSSMathOperator(Handle h) noexcept: emlite::Val(h) {
    value_ = CSSMathOperator::from_string(as<emlite::Uniq<char[]>>().get());
}

CSSMathOperator::CSSMathOperator(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = CSSMathOperator::from_string(as<emlite::Uniq<char[]>>().get());
}

CSSMathOperator CSSMathOperator::take_ownership(Handle h) noexcept { return CSSMathOperator(h); }
CSSMathOperator CSSMathOperator::clone() const noexcept { return *this; }
const char* CSSMathOperator::to_string(CSSMathOperator::Value value_) noexcept {
    switch (value_) {
        case SUM:
            return "sum";
        case PRODUCT:
            return "product";
        case NEGATE:
            return "negate";
        case INVERT:
            return "invert";
        case MIN:
            return "min";
        case MAX:
            return "max";
        case CLAMP:
            return "clamp";
        default:
            return "sum"; // fallback to first value
    }
}

ScrollBehavior::Value ScrollBehavior::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "auto", strlen("auto"))) {
        return AUTO_;
    }
    else if (__builtin_strncmp(str, "instant", strlen("instant"))) {
        return INSTANT;
    }
    else if (__builtin_strncmp(str, "smooth", strlen("smooth"))) {
        return SMOOTH;
    }
    else {
        // Default to first value for invalid input
        return AUTO_;
    }
}

ScrollBehavior::ScrollBehavior(Value v) noexcept : emlite::Val(ScrollBehavior::to_string(v)), value_(v) {}
ScrollBehavior::ScrollBehavior(Handle h) noexcept: emlite::Val(h) {
    value_ = ScrollBehavior::from_string(as<emlite::Uniq<char[]>>().get());
}

ScrollBehavior::ScrollBehavior(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = ScrollBehavior::from_string(as<emlite::Uniq<char[]>>().get());
}

ScrollBehavior ScrollBehavior::take_ownership(Handle h) noexcept { return ScrollBehavior(h); }
ScrollBehavior ScrollBehavior::clone() const noexcept { return *this; }
const char* ScrollBehavior::to_string(ScrollBehavior::Value value_) noexcept {
    switch (value_) {
        case AUTO_:
            return "auto";
        case INSTANT:
            return "instant";
        case SMOOTH:
            return "smooth";
        default:
            return "auto"; // fallback to first value
    }
}

ScrollLogicalPosition::Value ScrollLogicalPosition::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "start", strlen("start"))) {
        return START;
    }
    else if (__builtin_strncmp(str, "center", strlen("center"))) {
        return CENTER;
    }
    else if (__builtin_strncmp(str, "end", strlen("end"))) {
        return END;
    }
    else if (__builtin_strncmp(str, "nearest", strlen("nearest"))) {
        return NEAREST;
    }
    else {
        // Default to first value for invalid input
        return START;
    }
}

ScrollLogicalPosition::ScrollLogicalPosition(Value v) noexcept : emlite::Val(ScrollLogicalPosition::to_string(v)), value_(v) {}
ScrollLogicalPosition::ScrollLogicalPosition(Handle h) noexcept: emlite::Val(h) {
    value_ = ScrollLogicalPosition::from_string(as<emlite::Uniq<char[]>>().get());
}

ScrollLogicalPosition::ScrollLogicalPosition(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = ScrollLogicalPosition::from_string(as<emlite::Uniq<char[]>>().get());
}

ScrollLogicalPosition ScrollLogicalPosition::take_ownership(Handle h) noexcept { return ScrollLogicalPosition(h); }
ScrollLogicalPosition ScrollLogicalPosition::clone() const noexcept { return *this; }
const char* ScrollLogicalPosition::to_string(ScrollLogicalPosition::Value value_) noexcept {
    switch (value_) {
        case START:
            return "start";
        case CENTER:
            return "center";
        case END:
            return "end";
        case NEAREST:
            return "nearest";
        default:
            return "start"; // fallback to first value
    }
}

ScrollIntoViewContainer::Value ScrollIntoViewContainer::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "all", strlen("all"))) {
        return ALL;
    }
    else if (__builtin_strncmp(str, "nearest", strlen("nearest"))) {
        return NEAREST;
    }
    else {
        // Default to first value for invalid input
        return ALL;
    }
}

ScrollIntoViewContainer::ScrollIntoViewContainer(Value v) noexcept : emlite::Val(ScrollIntoViewContainer::to_string(v)), value_(v) {}
ScrollIntoViewContainer::ScrollIntoViewContainer(Handle h) noexcept: emlite::Val(h) {
    value_ = ScrollIntoViewContainer::from_string(as<emlite::Uniq<char[]>>().get());
}

ScrollIntoViewContainer::ScrollIntoViewContainer(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = ScrollIntoViewContainer::from_string(as<emlite::Uniq<char[]>>().get());
}

ScrollIntoViewContainer ScrollIntoViewContainer::take_ownership(Handle h) noexcept { return ScrollIntoViewContainer(h); }
ScrollIntoViewContainer ScrollIntoViewContainer::clone() const noexcept { return *this; }
const char* ScrollIntoViewContainer::to_string(ScrollIntoViewContainer::Value value_) noexcept {
    switch (value_) {
        case ALL:
            return "all";
        case NEAREST:
            return "nearest";
        default:
            return "all"; // fallback to first value
    }
}

CSSBoxType::Value CSSBoxType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "margin", strlen("margin"))) {
        return MARGIN;
    }
    else if (__builtin_strncmp(str, "border", strlen("border"))) {
        return BORDER;
    }
    else if (__builtin_strncmp(str, "padding", strlen("padding"))) {
        return PADDING;
    }
    else if (__builtin_strncmp(str, "content", strlen("content"))) {
        return CONTENT;
    }
    else {
        // Default to first value for invalid input
        return MARGIN;
    }
}

CSSBoxType::CSSBoxType(Value v) noexcept : emlite::Val(CSSBoxType::to_string(v)), value_(v) {}
CSSBoxType::CSSBoxType(Handle h) noexcept: emlite::Val(h) {
    value_ = CSSBoxType::from_string(as<emlite::Uniq<char[]>>().get());
}

CSSBoxType::CSSBoxType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = CSSBoxType::from_string(as<emlite::Uniq<char[]>>().get());
}

CSSBoxType CSSBoxType::take_ownership(Handle h) noexcept { return CSSBoxType(h); }
CSSBoxType CSSBoxType::clone() const noexcept { return *this; }
const char* CSSBoxType::to_string(CSSBoxType::Value value_) noexcept {
    switch (value_) {
        case MARGIN:
            return "margin";
        case BORDER:
            return "border";
        case PADDING:
            return "padding";
        case CONTENT:
            return "content";
        default:
            return "margin"; // fallback to first value
    }
}

DevicePostureType::Value DevicePostureType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "continuous", strlen("continuous"))) {
        return CONTINUOUS;
    }
    else if (__builtin_strncmp(str, "folded", strlen("folded"))) {
        return FOLDED;
    }
    else {
        // Default to first value for invalid input
        return CONTINUOUS;
    }
}

DevicePostureType::DevicePostureType(Value v) noexcept : emlite::Val(DevicePostureType::to_string(v)), value_(v) {}
DevicePostureType::DevicePostureType(Handle h) noexcept: emlite::Val(h) {
    value_ = DevicePostureType::from_string(as<emlite::Uniq<char[]>>().get());
}

DevicePostureType::DevicePostureType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = DevicePostureType::from_string(as<emlite::Uniq<char[]>>().get());
}

DevicePostureType DevicePostureType::take_ownership(Handle h) noexcept { return DevicePostureType(h); }
DevicePostureType DevicePostureType::clone() const noexcept { return *this; }
const char* DevicePostureType::to_string(DevicePostureType::Value value_) noexcept {
    switch (value_) {
        case CONTINUOUS:
            return "continuous";
        case FOLDED:
            return "folded";
        default:
            return "continuous"; // fallback to first value
    }
}

ItemType::Value ItemType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "product", strlen("product"))) {
        return PRODUCT;
    }
    else if (__builtin_strncmp(str, "subscription", strlen("subscription"))) {
        return SUBSCRIPTION;
    }
    else {
        // Default to first value for invalid input
        return PRODUCT;
    }
}

ItemType::ItemType(Value v) noexcept : emlite::Val(ItemType::to_string(v)), value_(v) {}
ItemType::ItemType(Handle h) noexcept: emlite::Val(h) {
    value_ = ItemType::from_string(as<emlite::Uniq<char[]>>().get());
}

ItemType::ItemType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = ItemType::from_string(as<emlite::Uniq<char[]>>().get());
}

ItemType ItemType::take_ownership(Handle h) noexcept { return ItemType(h); }
ItemType ItemType::clone() const noexcept { return *this; }
const char* ItemType::to_string(ItemType::Value value_) noexcept {
    switch (value_) {
        case PRODUCT:
            return "product";
        case SUBSCRIPTION:
            return "subscription";
        default:
            return "product"; // fallback to first value
    }
}

ShadowRootMode::Value ShadowRootMode::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "open", strlen("open"))) {
        return OPEN;
    }
    else if (__builtin_strncmp(str, "closed", strlen("closed"))) {
        return CLOSED;
    }
    else {
        // Default to first value for invalid input
        return OPEN;
    }
}

ShadowRootMode::ShadowRootMode(Value v) noexcept : emlite::Val(ShadowRootMode::to_string(v)), value_(v) {}
ShadowRootMode::ShadowRootMode(Handle h) noexcept: emlite::Val(h) {
    value_ = ShadowRootMode::from_string(as<emlite::Uniq<char[]>>().get());
}

ShadowRootMode::ShadowRootMode(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = ShadowRootMode::from_string(as<emlite::Uniq<char[]>>().get());
}

ShadowRootMode ShadowRootMode::take_ownership(Handle h) noexcept { return ShadowRootMode(h); }
ShadowRootMode ShadowRootMode::clone() const noexcept { return *this; }
const char* ShadowRootMode::to_string(ShadowRootMode::Value value_) noexcept {
    switch (value_) {
        case OPEN:
            return "open";
        case CLOSED:
            return "closed";
        default:
            return "open"; // fallback to first value
    }
}

SlotAssignmentMode::Value SlotAssignmentMode::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "manual", strlen("manual"))) {
        return MANUAL;
    }
    else if (__builtin_strncmp(str, "named", strlen("named"))) {
        return NAMED;
    }
    else {
        // Default to first value for invalid input
        return MANUAL;
    }
}

SlotAssignmentMode::SlotAssignmentMode(Value v) noexcept : emlite::Val(SlotAssignmentMode::to_string(v)), value_(v) {}
SlotAssignmentMode::SlotAssignmentMode(Handle h) noexcept: emlite::Val(h) {
    value_ = SlotAssignmentMode::from_string(as<emlite::Uniq<char[]>>().get());
}

SlotAssignmentMode::SlotAssignmentMode(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = SlotAssignmentMode::from_string(as<emlite::Uniq<char[]>>().get());
}

SlotAssignmentMode SlotAssignmentMode::take_ownership(Handle h) noexcept { return SlotAssignmentMode(h); }
SlotAssignmentMode SlotAssignmentMode::clone() const noexcept { return *this; }
const char* SlotAssignmentMode::to_string(SlotAssignmentMode::Value value_) noexcept {
    switch (value_) {
        case MANUAL:
            return "manual";
        case NAMED:
            return "named";
        default:
            return "manual"; // fallback to first value
    }
}

UnderlineStyle::Value UnderlineStyle::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "none", strlen("none"))) {
        return NONE;
    }
    else if (__builtin_strncmp(str, "solid", strlen("solid"))) {
        return SOLID;
    }
    else if (__builtin_strncmp(str, "dotted", strlen("dotted"))) {
        return DOTTED;
    }
    else if (__builtin_strncmp(str, "dashed", strlen("dashed"))) {
        return DASHED;
    }
    else if (__builtin_strncmp(str, "wavy", strlen("wavy"))) {
        return WAVY;
    }
    else {
        // Default to first value for invalid input
        return NONE;
    }
}

UnderlineStyle::UnderlineStyle(Value v) noexcept : emlite::Val(UnderlineStyle::to_string(v)), value_(v) {}
UnderlineStyle::UnderlineStyle(Handle h) noexcept: emlite::Val(h) {
    value_ = UnderlineStyle::from_string(as<emlite::Uniq<char[]>>().get());
}

UnderlineStyle::UnderlineStyle(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = UnderlineStyle::from_string(as<emlite::Uniq<char[]>>().get());
}

UnderlineStyle UnderlineStyle::take_ownership(Handle h) noexcept { return UnderlineStyle(h); }
UnderlineStyle UnderlineStyle::clone() const noexcept { return *this; }
const char* UnderlineStyle::to_string(UnderlineStyle::Value value_) noexcept {
    switch (value_) {
        case NONE:
            return "none";
        case SOLID:
            return "solid";
        case DOTTED:
            return "dotted";
        case DASHED:
            return "dashed";
        case WAVY:
            return "wavy";
        default:
            return "none"; // fallback to first value
    }
}

UnderlineThickness::Value UnderlineThickness::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "none", strlen("none"))) {
        return NONE;
    }
    else if (__builtin_strncmp(str, "thin", strlen("thin"))) {
        return THIN;
    }
    else if (__builtin_strncmp(str, "thick", strlen("thick"))) {
        return THICK;
    }
    else {
        // Default to first value for invalid input
        return NONE;
    }
}

UnderlineThickness::UnderlineThickness(Value v) noexcept : emlite::Val(UnderlineThickness::to_string(v)), value_(v) {}
UnderlineThickness::UnderlineThickness(Handle h) noexcept: emlite::Val(h) {
    value_ = UnderlineThickness::from_string(as<emlite::Uniq<char[]>>().get());
}

UnderlineThickness::UnderlineThickness(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = UnderlineThickness::from_string(as<emlite::Uniq<char[]>>().get());
}

UnderlineThickness UnderlineThickness::take_ownership(Handle h) noexcept { return UnderlineThickness(h); }
UnderlineThickness UnderlineThickness::clone() const noexcept { return *this; }
const char* UnderlineThickness::to_string(UnderlineThickness::Value value_) noexcept {
    switch (value_) {
        case NONE:
            return "none";
        case THIN:
            return "thin";
        case THICK:
            return "thick";
        default:
            return "none"; // fallback to first value
    }
}

MediaKeysRequirement::Value MediaKeysRequirement::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "required", strlen("required"))) {
        return REQUIRED;
    }
    else if (__builtin_strncmp(str, "optional", strlen("optional"))) {
        return OPTIONAL;
    }
    else if (__builtin_strncmp(str, "not-allowed", strlen("not-allowed"))) {
        return NOT_ALLOWED;
    }
    else {
        // Default to first value for invalid input
        return REQUIRED;
    }
}

MediaKeysRequirement::MediaKeysRequirement(Value v) noexcept : emlite::Val(MediaKeysRequirement::to_string(v)), value_(v) {}
MediaKeysRequirement::MediaKeysRequirement(Handle h) noexcept: emlite::Val(h) {
    value_ = MediaKeysRequirement::from_string(as<emlite::Uniq<char[]>>().get());
}

MediaKeysRequirement::MediaKeysRequirement(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = MediaKeysRequirement::from_string(as<emlite::Uniq<char[]>>().get());
}

MediaKeysRequirement MediaKeysRequirement::take_ownership(Handle h) noexcept { return MediaKeysRequirement(h); }
MediaKeysRequirement MediaKeysRequirement::clone() const noexcept { return *this; }
const char* MediaKeysRequirement::to_string(MediaKeysRequirement::Value value_) noexcept {
    switch (value_) {
        case REQUIRED:
            return "required";
        case OPTIONAL:
            return "optional";
        case NOT_ALLOWED:
            return "not-allowed";
        default:
            return "required"; // fallback to first value
    }
}

MediaKeySessionType::Value MediaKeySessionType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "temporary", strlen("temporary"))) {
        return TEMPORARY;
    }
    else if (__builtin_strncmp(str, "persistent-license", strlen("persistent-license"))) {
        return PERSISTENT_LICENSE;
    }
    else {
        // Default to first value for invalid input
        return TEMPORARY;
    }
}

MediaKeySessionType::MediaKeySessionType(Value v) noexcept : emlite::Val(MediaKeySessionType::to_string(v)), value_(v) {}
MediaKeySessionType::MediaKeySessionType(Handle h) noexcept: emlite::Val(h) {
    value_ = MediaKeySessionType::from_string(as<emlite::Uniq<char[]>>().get());
}

MediaKeySessionType::MediaKeySessionType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = MediaKeySessionType::from_string(as<emlite::Uniq<char[]>>().get());
}

MediaKeySessionType MediaKeySessionType::take_ownership(Handle h) noexcept { return MediaKeySessionType(h); }
MediaKeySessionType MediaKeySessionType::clone() const noexcept { return *this; }
const char* MediaKeySessionType::to_string(MediaKeySessionType::Value value_) noexcept {
    switch (value_) {
        case TEMPORARY:
            return "temporary";
        case PERSISTENT_LICENSE:
            return "persistent-license";
        default:
            return "temporary"; // fallback to first value
    }
}

MediaKeySessionClosedReason::Value MediaKeySessionClosedReason::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "internal-error", strlen("internal-error"))) {
        return INTERNAL_ERROR;
    }
    else if (__builtin_strncmp(str, "closed-by-application", strlen("closed-by-application"))) {
        return CLOSED_BY_APPLICATION;
    }
    else if (__builtin_strncmp(str, "release-acknowledged", strlen("release-acknowledged"))) {
        return RELEASE_ACKNOWLEDGED;
    }
    else if (__builtin_strncmp(str, "hardware-context-reset", strlen("hardware-context-reset"))) {
        return HARDWARE_CONTEXT_RESET;
    }
    else if (__builtin_strncmp(str, "resource-evicted", strlen("resource-evicted"))) {
        return RESOURCE_EVICTED;
    }
    else {
        // Default to first value for invalid input
        return INTERNAL_ERROR;
    }
}

MediaKeySessionClosedReason::MediaKeySessionClosedReason(Value v) noexcept : emlite::Val(MediaKeySessionClosedReason::to_string(v)), value_(v) {}
MediaKeySessionClosedReason::MediaKeySessionClosedReason(Handle h) noexcept: emlite::Val(h) {
    value_ = MediaKeySessionClosedReason::from_string(as<emlite::Uniq<char[]>>().get());
}

MediaKeySessionClosedReason::MediaKeySessionClosedReason(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = MediaKeySessionClosedReason::from_string(as<emlite::Uniq<char[]>>().get());
}

MediaKeySessionClosedReason MediaKeySessionClosedReason::take_ownership(Handle h) noexcept { return MediaKeySessionClosedReason(h); }
MediaKeySessionClosedReason MediaKeySessionClosedReason::clone() const noexcept { return *this; }
const char* MediaKeySessionClosedReason::to_string(MediaKeySessionClosedReason::Value value_) noexcept {
    switch (value_) {
        case INTERNAL_ERROR:
            return "internal-error";
        case CLOSED_BY_APPLICATION:
            return "closed-by-application";
        case RELEASE_ACKNOWLEDGED:
            return "release-acknowledged";
        case HARDWARE_CONTEXT_RESET:
            return "hardware-context-reset";
        case RESOURCE_EVICTED:
            return "resource-evicted";
        default:
            return "internal-error"; // fallback to first value
    }
}

MediaKeyStatus::Value MediaKeyStatus::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "usable", strlen("usable"))) {
        return USABLE;
    }
    else if (__builtin_strncmp(str, "expired", strlen("expired"))) {
        return EXPIRED;
    }
    else if (__builtin_strncmp(str, "released", strlen("released"))) {
        return RELEASED;
    }
    else if (__builtin_strncmp(str, "output-restricted", strlen("output-restricted"))) {
        return OUTPUT_RESTRICTED;
    }
    else if (__builtin_strncmp(str, "output-downscaled", strlen("output-downscaled"))) {
        return OUTPUT_DOWNSCALED;
    }
    else if (__builtin_strncmp(str, "usable-in-future", strlen("usable-in-future"))) {
        return USABLE_IN_FUTURE;
    }
    else if (__builtin_strncmp(str, "status-pending", strlen("status-pending"))) {
        return STATUS_PENDING;
    }
    else if (__builtin_strncmp(str, "internal-error", strlen("internal-error"))) {
        return INTERNAL_ERROR;
    }
    else {
        // Default to first value for invalid input
        return USABLE;
    }
}

MediaKeyStatus::MediaKeyStatus(Value v) noexcept : emlite::Val(MediaKeyStatus::to_string(v)), value_(v) {}
MediaKeyStatus::MediaKeyStatus(Handle h) noexcept: emlite::Val(h) {
    value_ = MediaKeyStatus::from_string(as<emlite::Uniq<char[]>>().get());
}

MediaKeyStatus::MediaKeyStatus(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = MediaKeyStatus::from_string(as<emlite::Uniq<char[]>>().get());
}

MediaKeyStatus MediaKeyStatus::take_ownership(Handle h) noexcept { return MediaKeyStatus(h); }
MediaKeyStatus MediaKeyStatus::clone() const noexcept { return *this; }
const char* MediaKeyStatus::to_string(MediaKeyStatus::Value value_) noexcept {
    switch (value_) {
        case USABLE:
            return "usable";
        case EXPIRED:
            return "expired";
        case RELEASED:
            return "released";
        case OUTPUT_RESTRICTED:
            return "output-restricted";
        case OUTPUT_DOWNSCALED:
            return "output-downscaled";
        case USABLE_IN_FUTURE:
            return "usable-in-future";
        case STATUS_PENDING:
            return "status-pending";
        case INTERNAL_ERROR:
            return "internal-error";
        default:
            return "usable"; // fallback to first value
    }
}

MediaKeyMessageType::Value MediaKeyMessageType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "license-request", strlen("license-request"))) {
        return LICENSE_REQUEST;
    }
    else if (__builtin_strncmp(str, "license-renewal", strlen("license-renewal"))) {
        return LICENSE_RENEWAL;
    }
    else if (__builtin_strncmp(str, "license-release", strlen("license-release"))) {
        return LICENSE_RELEASE;
    }
    else if (__builtin_strncmp(str, "individualization-request", strlen("individualization-request"))) {
        return INDIVIDUALIZATION_REQUEST;
    }
    else {
        // Default to first value for invalid input
        return LICENSE_REQUEST;
    }
}

MediaKeyMessageType::MediaKeyMessageType(Value v) noexcept : emlite::Val(MediaKeyMessageType::to_string(v)), value_(v) {}
MediaKeyMessageType::MediaKeyMessageType(Handle h) noexcept: emlite::Val(h) {
    value_ = MediaKeyMessageType::from_string(as<emlite::Uniq<char[]>>().get());
}

MediaKeyMessageType::MediaKeyMessageType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = MediaKeyMessageType::from_string(as<emlite::Uniq<char[]>>().get());
}

MediaKeyMessageType MediaKeyMessageType::take_ownership(Handle h) noexcept { return MediaKeyMessageType(h); }
MediaKeyMessageType MediaKeyMessageType::clone() const noexcept { return *this; }
const char* MediaKeyMessageType::to_string(MediaKeyMessageType::Value value_) noexcept {
    switch (value_) {
        case LICENSE_REQUEST:
            return "license-request";
        case LICENSE_RENEWAL:
            return "license-renewal";
        case LICENSE_RELEASE:
            return "license-release";
        case INDIVIDUALIZATION_REQUEST:
            return "individualization-request";
        default:
            return "license-request"; // fallback to first value
    }
}

IdentityCredentialRequestOptionsContext::Value IdentityCredentialRequestOptionsContext::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "signin", strlen("signin"))) {
        return SIGNIN;
    }
    else if (__builtin_strncmp(str, "signup", strlen("signup"))) {
        return SIGNUP;
    }
    else if (__builtin_strncmp(str, "use", strlen("use"))) {
        return USE;
    }
    else if (__builtin_strncmp(str, "continue", strlen("continue"))) {
        return CONTINUE_;
    }
    else {
        // Default to first value for invalid input
        return SIGNIN;
    }
}

IdentityCredentialRequestOptionsContext::IdentityCredentialRequestOptionsContext(Value v) noexcept : emlite::Val(IdentityCredentialRequestOptionsContext::to_string(v)), value_(v) {}
IdentityCredentialRequestOptionsContext::IdentityCredentialRequestOptionsContext(Handle h) noexcept: emlite::Val(h) {
    value_ = IdentityCredentialRequestOptionsContext::from_string(as<emlite::Uniq<char[]>>().get());
}

IdentityCredentialRequestOptionsContext::IdentityCredentialRequestOptionsContext(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = IdentityCredentialRequestOptionsContext::from_string(as<emlite::Uniq<char[]>>().get());
}

IdentityCredentialRequestOptionsContext IdentityCredentialRequestOptionsContext::take_ownership(Handle h) noexcept { return IdentityCredentialRequestOptionsContext(h); }
IdentityCredentialRequestOptionsContext IdentityCredentialRequestOptionsContext::clone() const noexcept { return *this; }
const char* IdentityCredentialRequestOptionsContext::to_string(IdentityCredentialRequestOptionsContext::Value value_) noexcept {
    switch (value_) {
        case SIGNIN:
            return "signin";
        case SIGNUP:
            return "signup";
        case USE:
            return "use";
        case CONTINUE_:
            return "continue";
        default:
            return "signin"; // fallback to first value
    }
}

IdentityCredentialRequestOptionsMode::Value IdentityCredentialRequestOptionsMode::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "active", strlen("active"))) {
        return ACTIVE;
    }
    else if (__builtin_strncmp(str, "passive", strlen("passive"))) {
        return PASSIVE;
    }
    else {
        // Default to first value for invalid input
        return ACTIVE;
    }
}

IdentityCredentialRequestOptionsMode::IdentityCredentialRequestOptionsMode(Value v) noexcept : emlite::Val(IdentityCredentialRequestOptionsMode::to_string(v)), value_(v) {}
IdentityCredentialRequestOptionsMode::IdentityCredentialRequestOptionsMode(Handle h) noexcept: emlite::Val(h) {
    value_ = IdentityCredentialRequestOptionsMode::from_string(as<emlite::Uniq<char[]>>().get());
}

IdentityCredentialRequestOptionsMode::IdentityCredentialRequestOptionsMode(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = IdentityCredentialRequestOptionsMode::from_string(as<emlite::Uniq<char[]>>().get());
}

IdentityCredentialRequestOptionsMode IdentityCredentialRequestOptionsMode::take_ownership(Handle h) noexcept { return IdentityCredentialRequestOptionsMode(h); }
IdentityCredentialRequestOptionsMode IdentityCredentialRequestOptionsMode::clone() const noexcept { return *this; }
const char* IdentityCredentialRequestOptionsMode::to_string(IdentityCredentialRequestOptionsMode::Value value_) noexcept {
    switch (value_) {
        case ACTIVE:
            return "active";
        case PASSIVE:
            return "passive";
        default:
            return "active"; // fallback to first value
    }
}

OpaqueProperty::Value OpaqueProperty::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "opaque", strlen("opaque"))) {
        return OPAQUE;
    }
    else {
        // Default to first value for invalid input
        return OPAQUE;
    }
}

OpaqueProperty::OpaqueProperty(Value v) noexcept : emlite::Val(OpaqueProperty::to_string(v)), value_(v) {}
OpaqueProperty::OpaqueProperty(Handle h) noexcept: emlite::Val(h) {
    value_ = OpaqueProperty::from_string(as<emlite::Uniq<char[]>>().get());
}

OpaqueProperty::OpaqueProperty(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = OpaqueProperty::from_string(as<emlite::Uniq<char[]>>().get());
}

OpaqueProperty OpaqueProperty::take_ownership(Handle h) noexcept { return OpaqueProperty(h); }
OpaqueProperty OpaqueProperty::clone() const noexcept { return *this; }
const char* OpaqueProperty::to_string(OpaqueProperty::Value value_) noexcept {
    switch (value_) {
        case OPAQUE:
            return "opaque";
        default:
            return "opaque"; // fallback to first value
    }
}

FenceReportingDestination::Value FenceReportingDestination::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "buyer", strlen("buyer"))) {
        return BUYER;
    }
    else if (__builtin_strncmp(str, "seller", strlen("seller"))) {
        return SELLER;
    }
    else if (__builtin_strncmp(str, "component-seller", strlen("component-seller"))) {
        return COMPONENT_SELLER;
    }
    else if (__builtin_strncmp(str, "direct-seller", strlen("direct-seller"))) {
        return DIRECT_SELLER;
    }
    else if (__builtin_strncmp(str, "shared-storage-select-url", strlen("shared-storage-select-url"))) {
        return SHARED_STORAGE_SELECT_URL;
    }
    else {
        // Default to first value for invalid input
        return BUYER;
    }
}

FenceReportingDestination::FenceReportingDestination(Value v) noexcept : emlite::Val(FenceReportingDestination::to_string(v)), value_(v) {}
FenceReportingDestination::FenceReportingDestination(Handle h) noexcept: emlite::Val(h) {
    value_ = FenceReportingDestination::from_string(as<emlite::Uniq<char[]>>().get());
}

FenceReportingDestination::FenceReportingDestination(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = FenceReportingDestination::from_string(as<emlite::Uniq<char[]>>().get());
}

FenceReportingDestination FenceReportingDestination::take_ownership(Handle h) noexcept { return FenceReportingDestination(h); }
FenceReportingDestination FenceReportingDestination::clone() const noexcept { return *this; }
const char* FenceReportingDestination::to_string(FenceReportingDestination::Value value_) noexcept {
    switch (value_) {
        case BUYER:
            return "buyer";
        case SELLER:
            return "seller";
        case COMPONENT_SELLER:
            return "component-seller";
        case DIRECT_SELLER:
            return "direct-seller";
        case SHARED_STORAGE_SELECT_URL:
            return "shared-storage-select-url";
        default:
            return "buyer"; // fallback to first value
    }
}

RequestDestination::Value RequestDestination::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "", strlen(""))) {
        return NONE;
    }
    else if (__builtin_strncmp(str, "audio", strlen("audio"))) {
        return AUDIO;
    }
    else if (__builtin_strncmp(str, "audioworklet", strlen("audioworklet"))) {
        return AUDIOWORKLET;
    }
    else if (__builtin_strncmp(str, "document", strlen("document"))) {
        return DOCUMENT;
    }
    else if (__builtin_strncmp(str, "embed", strlen("embed"))) {
        return EMBED;
    }
    else if (__builtin_strncmp(str, "font", strlen("font"))) {
        return FONT;
    }
    else if (__builtin_strncmp(str, "frame", strlen("frame"))) {
        return FRAME;
    }
    else if (__builtin_strncmp(str, "iframe", strlen("iframe"))) {
        return IFRAME;
    }
    else if (__builtin_strncmp(str, "image", strlen("image"))) {
        return IMAGE;
    }
    else if (__builtin_strncmp(str, "json", strlen("json"))) {
        return JSON;
    }
    else if (__builtin_strncmp(str, "manifest", strlen("manifest"))) {
        return MANIFEST;
    }
    else if (__builtin_strncmp(str, "object", strlen("object"))) {
        return OBJECT;
    }
    else if (__builtin_strncmp(str, "paintworklet", strlen("paintworklet"))) {
        return PAINTWORKLET;
    }
    else if (__builtin_strncmp(str, "report", strlen("report"))) {
        return REPORT;
    }
    else if (__builtin_strncmp(str, "script", strlen("script"))) {
        return SCRIPT;
    }
    else if (__builtin_strncmp(str, "sharedworker", strlen("sharedworker"))) {
        return SHAREDWORKER;
    }
    else if (__builtin_strncmp(str, "style", strlen("style"))) {
        return STYLE;
    }
    else if (__builtin_strncmp(str, "track", strlen("track"))) {
        return TRACK;
    }
    else if (__builtin_strncmp(str, "video", strlen("video"))) {
        return VIDEO;
    }
    else if (__builtin_strncmp(str, "worker", strlen("worker"))) {
        return WORKER;
    }
    else if (__builtin_strncmp(str, "xslt", strlen("xslt"))) {
        return XSLT;
    }
    else {
        // Default to first value for invalid input
        return NONE;
    }
}

RequestDestination::RequestDestination(Value v) noexcept : emlite::Val(RequestDestination::to_string(v)), value_(v) {}
RequestDestination::RequestDestination(Handle h) noexcept: emlite::Val(h) {
    value_ = RequestDestination::from_string(as<emlite::Uniq<char[]>>().get());
}

RequestDestination::RequestDestination(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RequestDestination::from_string(as<emlite::Uniq<char[]>>().get());
}

RequestDestination RequestDestination::take_ownership(Handle h) noexcept { return RequestDestination(h); }
RequestDestination RequestDestination::clone() const noexcept { return *this; }
const char* RequestDestination::to_string(RequestDestination::Value value_) noexcept {
    switch (value_) {
        case NONE:
            return "";
        case AUDIO:
            return "audio";
        case AUDIOWORKLET:
            return "audioworklet";
        case DOCUMENT:
            return "document";
        case EMBED:
            return "embed";
        case FONT:
            return "font";
        case FRAME:
            return "frame";
        case IFRAME:
            return "iframe";
        case IMAGE:
            return "image";
        case JSON:
            return "json";
        case MANIFEST:
            return "manifest";
        case OBJECT:
            return "object";
        case PAINTWORKLET:
            return "paintworklet";
        case REPORT:
            return "report";
        case SCRIPT:
            return "script";
        case SHAREDWORKER:
            return "sharedworker";
        case STYLE:
            return "style";
        case TRACK:
            return "track";
        case VIDEO:
            return "video";
        case WORKER:
            return "worker";
        case XSLT:
            return "xslt";
        default:
            return ""; // fallback to first value
    }
}

RequestMode::Value RequestMode::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "navigate", strlen("navigate"))) {
        return NAVIGATE;
    }
    else if (__builtin_strncmp(str, "same-origin", strlen("same-origin"))) {
        return SAME_ORIGIN;
    }
    else if (__builtin_strncmp(str, "no-cors", strlen("no-cors"))) {
        return NO_CORS;
    }
    else if (__builtin_strncmp(str, "cors", strlen("cors"))) {
        return CORS;
    }
    else {
        // Default to first value for invalid input
        return NAVIGATE;
    }
}

RequestMode::RequestMode(Value v) noexcept : emlite::Val(RequestMode::to_string(v)), value_(v) {}
RequestMode::RequestMode(Handle h) noexcept: emlite::Val(h) {
    value_ = RequestMode::from_string(as<emlite::Uniq<char[]>>().get());
}

RequestMode::RequestMode(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RequestMode::from_string(as<emlite::Uniq<char[]>>().get());
}

RequestMode RequestMode::take_ownership(Handle h) noexcept { return RequestMode(h); }
RequestMode RequestMode::clone() const noexcept { return *this; }
const char* RequestMode::to_string(RequestMode::Value value_) noexcept {
    switch (value_) {
        case NAVIGATE:
            return "navigate";
        case SAME_ORIGIN:
            return "same-origin";
        case NO_CORS:
            return "no-cors";
        case CORS:
            return "cors";
        default:
            return "navigate"; // fallback to first value
    }
}

RequestCredentials::Value RequestCredentials::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "omit", strlen("omit"))) {
        return OMIT;
    }
    else if (__builtin_strncmp(str, "same-origin", strlen("same-origin"))) {
        return SAME_ORIGIN;
    }
    else if (__builtin_strncmp(str, "include", strlen("include"))) {
        return INCLUDE;
    }
    else {
        // Default to first value for invalid input
        return OMIT;
    }
}

RequestCredentials::RequestCredentials(Value v) noexcept : emlite::Val(RequestCredentials::to_string(v)), value_(v) {}
RequestCredentials::RequestCredentials(Handle h) noexcept: emlite::Val(h) {
    value_ = RequestCredentials::from_string(as<emlite::Uniq<char[]>>().get());
}

RequestCredentials::RequestCredentials(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RequestCredentials::from_string(as<emlite::Uniq<char[]>>().get());
}

RequestCredentials RequestCredentials::take_ownership(Handle h) noexcept { return RequestCredentials(h); }
RequestCredentials RequestCredentials::clone() const noexcept { return *this; }
const char* RequestCredentials::to_string(RequestCredentials::Value value_) noexcept {
    switch (value_) {
        case OMIT:
            return "omit";
        case SAME_ORIGIN:
            return "same-origin";
        case INCLUDE:
            return "include";
        default:
            return "omit"; // fallback to first value
    }
}

RequestCache::Value RequestCache::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "default", strlen("default"))) {
        return DEFAULT_;
    }
    else if (__builtin_strncmp(str, "no-store", strlen("no-store"))) {
        return NO_STORE;
    }
    else if (__builtin_strncmp(str, "reload", strlen("reload"))) {
        return RELOAD;
    }
    else if (__builtin_strncmp(str, "no-cache", strlen("no-cache"))) {
        return NO_CACHE;
    }
    else if (__builtin_strncmp(str, "force-cache", strlen("force-cache"))) {
        return FORCE_CACHE;
    }
    else if (__builtin_strncmp(str, "only-if-cached", strlen("only-if-cached"))) {
        return ONLY_IF_CACHED;
    }
    else {
        // Default to first value for invalid input
        return DEFAULT_;
    }
}

RequestCache::RequestCache(Value v) noexcept : emlite::Val(RequestCache::to_string(v)), value_(v) {}
RequestCache::RequestCache(Handle h) noexcept: emlite::Val(h) {
    value_ = RequestCache::from_string(as<emlite::Uniq<char[]>>().get());
}

RequestCache::RequestCache(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RequestCache::from_string(as<emlite::Uniq<char[]>>().get());
}

RequestCache RequestCache::take_ownership(Handle h) noexcept { return RequestCache(h); }
RequestCache RequestCache::clone() const noexcept { return *this; }
const char* RequestCache::to_string(RequestCache::Value value_) noexcept {
    switch (value_) {
        case DEFAULT_:
            return "default";
        case NO_STORE:
            return "no-store";
        case RELOAD:
            return "reload";
        case NO_CACHE:
            return "no-cache";
        case FORCE_CACHE:
            return "force-cache";
        case ONLY_IF_CACHED:
            return "only-if-cached";
        default:
            return "default"; // fallback to first value
    }
}

RequestRedirect::Value RequestRedirect::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "follow", strlen("follow"))) {
        return FOLLOW;
    }
    else if (__builtin_strncmp(str, "error", strlen("error"))) {
        return ERROR;
    }
    else if (__builtin_strncmp(str, "manual", strlen("manual"))) {
        return MANUAL;
    }
    else {
        // Default to first value for invalid input
        return FOLLOW;
    }
}

RequestRedirect::RequestRedirect(Value v) noexcept : emlite::Val(RequestRedirect::to_string(v)), value_(v) {}
RequestRedirect::RequestRedirect(Handle h) noexcept: emlite::Val(h) {
    value_ = RequestRedirect::from_string(as<emlite::Uniq<char[]>>().get());
}

RequestRedirect::RequestRedirect(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RequestRedirect::from_string(as<emlite::Uniq<char[]>>().get());
}

RequestRedirect RequestRedirect::take_ownership(Handle h) noexcept { return RequestRedirect(h); }
RequestRedirect RequestRedirect::clone() const noexcept { return *this; }
const char* RequestRedirect::to_string(RequestRedirect::Value value_) noexcept {
    switch (value_) {
        case FOLLOW:
            return "follow";
        case ERROR:
            return "error";
        case MANUAL:
            return "manual";
        default:
            return "follow"; // fallback to first value
    }
}

RequestDuplex::Value RequestDuplex::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "half", strlen("half"))) {
        return HALF;
    }
    else {
        // Default to first value for invalid input
        return HALF;
    }
}

RequestDuplex::RequestDuplex(Value v) noexcept : emlite::Val(RequestDuplex::to_string(v)), value_(v) {}
RequestDuplex::RequestDuplex(Handle h) noexcept: emlite::Val(h) {
    value_ = RequestDuplex::from_string(as<emlite::Uniq<char[]>>().get());
}

RequestDuplex::RequestDuplex(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RequestDuplex::from_string(as<emlite::Uniq<char[]>>().get());
}

RequestDuplex RequestDuplex::take_ownership(Handle h) noexcept { return RequestDuplex(h); }
RequestDuplex RequestDuplex::clone() const noexcept { return *this; }
const char* RequestDuplex::to_string(RequestDuplex::Value value_) noexcept {
    switch (value_) {
        case HALF:
            return "half";
        default:
            return "half"; // fallback to first value
    }
}

RequestPriority::Value RequestPriority::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "high", strlen("high"))) {
        return HIGH;
    }
    else if (__builtin_strncmp(str, "low", strlen("low"))) {
        return LOW;
    }
    else if (__builtin_strncmp(str, "auto", strlen("auto"))) {
        return AUTO_;
    }
    else {
        // Default to first value for invalid input
        return HIGH;
    }
}

RequestPriority::RequestPriority(Value v) noexcept : emlite::Val(RequestPriority::to_string(v)), value_(v) {}
RequestPriority::RequestPriority(Handle h) noexcept: emlite::Val(h) {
    value_ = RequestPriority::from_string(as<emlite::Uniq<char[]>>().get());
}

RequestPriority::RequestPriority(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RequestPriority::from_string(as<emlite::Uniq<char[]>>().get());
}

RequestPriority RequestPriority::take_ownership(Handle h) noexcept { return RequestPriority(h); }
RequestPriority RequestPriority::clone() const noexcept { return *this; }
const char* RequestPriority::to_string(RequestPriority::Value value_) noexcept {
    switch (value_) {
        case HIGH:
            return "high";
        case LOW:
            return "low";
        case AUTO_:
            return "auto";
        default:
            return "high"; // fallback to first value
    }
}

ResponseType::Value ResponseType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "basic", strlen("basic"))) {
        return BASIC;
    }
    else if (__builtin_strncmp(str, "cors", strlen("cors"))) {
        return CORS;
    }
    else if (__builtin_strncmp(str, "default", strlen("default"))) {
        return DEFAULT_;
    }
    else if (__builtin_strncmp(str, "error", strlen("error"))) {
        return ERROR;
    }
    else if (__builtin_strncmp(str, "opaque", strlen("opaque"))) {
        return OPAQUE;
    }
    else if (__builtin_strncmp(str, "opaqueredirect", strlen("opaqueredirect"))) {
        return OPAQUEREDIRECT;
    }
    else {
        // Default to first value for invalid input
        return BASIC;
    }
}

ResponseType::ResponseType(Value v) noexcept : emlite::Val(ResponseType::to_string(v)), value_(v) {}
ResponseType::ResponseType(Handle h) noexcept: emlite::Val(h) {
    value_ = ResponseType::from_string(as<emlite::Uniq<char[]>>().get());
}

ResponseType::ResponseType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = ResponseType::from_string(as<emlite::Uniq<char[]>>().get());
}

ResponseType ResponseType::take_ownership(Handle h) noexcept { return ResponseType(h); }
ResponseType ResponseType::clone() const noexcept { return *this; }
const char* ResponseType::to_string(ResponseType::Value value_) noexcept {
    switch (value_) {
        case BASIC:
            return "basic";
        case CORS:
            return "cors";
        case DEFAULT_:
            return "default";
        case ERROR:
            return "error";
        case OPAQUE:
            return "opaque";
        case OPAQUEREDIRECT:
            return "opaqueredirect";
        default:
            return "basic"; // fallback to first value
    }
}

FileSystemPermissionMode::Value FileSystemPermissionMode::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "read", strlen("read"))) {
        return READ;
    }
    else if (__builtin_strncmp(str, "readwrite", strlen("readwrite"))) {
        return READWRITE;
    }
    else {
        // Default to first value for invalid input
        return READ;
    }
}

FileSystemPermissionMode::FileSystemPermissionMode(Value v) noexcept : emlite::Val(FileSystemPermissionMode::to_string(v)), value_(v) {}
FileSystemPermissionMode::FileSystemPermissionMode(Handle h) noexcept: emlite::Val(h) {
    value_ = FileSystemPermissionMode::from_string(as<emlite::Uniq<char[]>>().get());
}

FileSystemPermissionMode::FileSystemPermissionMode(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = FileSystemPermissionMode::from_string(as<emlite::Uniq<char[]>>().get());
}

FileSystemPermissionMode FileSystemPermissionMode::take_ownership(Handle h) noexcept { return FileSystemPermissionMode(h); }
FileSystemPermissionMode FileSystemPermissionMode::clone() const noexcept { return *this; }
const char* FileSystemPermissionMode::to_string(FileSystemPermissionMode::Value value_) noexcept {
    switch (value_) {
        case READ:
            return "read";
        case READWRITE:
            return "readwrite";
        default:
            return "read"; // fallback to first value
    }
}

WellKnownDirectory::Value WellKnownDirectory::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "desktop", strlen("desktop"))) {
        return DESKTOP;
    }
    else if (__builtin_strncmp(str, "documents", strlen("documents"))) {
        return DOCUMENTS;
    }
    else if (__builtin_strncmp(str, "downloads", strlen("downloads"))) {
        return DOWNLOADS;
    }
    else if (__builtin_strncmp(str, "music", strlen("music"))) {
        return MUSIC;
    }
    else if (__builtin_strncmp(str, "pictures", strlen("pictures"))) {
        return PICTURES;
    }
    else if (__builtin_strncmp(str, "videos", strlen("videos"))) {
        return VIDEOS;
    }
    else {
        // Default to first value for invalid input
        return DESKTOP;
    }
}

WellKnownDirectory::WellKnownDirectory(Value v) noexcept : emlite::Val(WellKnownDirectory::to_string(v)), value_(v) {}
WellKnownDirectory::WellKnownDirectory(Handle h) noexcept: emlite::Val(h) {
    value_ = WellKnownDirectory::from_string(as<emlite::Uniq<char[]>>().get());
}

WellKnownDirectory::WellKnownDirectory(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = WellKnownDirectory::from_string(as<emlite::Uniq<char[]>>().get());
}

WellKnownDirectory WellKnownDirectory::take_ownership(Handle h) noexcept { return WellKnownDirectory(h); }
WellKnownDirectory WellKnownDirectory::clone() const noexcept { return *this; }
const char* WellKnownDirectory::to_string(WellKnownDirectory::Value value_) noexcept {
    switch (value_) {
        case DESKTOP:
            return "desktop";
        case DOCUMENTS:
            return "documents";
        case DOWNLOADS:
            return "downloads";
        case MUSIC:
            return "music";
        case PICTURES:
            return "pictures";
        case VIDEOS:
            return "videos";
        default:
            return "desktop"; // fallback to first value
    }
}

FileSystemHandleKind::Value FileSystemHandleKind::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "file", strlen("file"))) {
        return FILE;
    }
    else if (__builtin_strncmp(str, "directory", strlen("directory"))) {
        return DIRECTORY;
    }
    else {
        // Default to first value for invalid input
        return FILE;
    }
}

FileSystemHandleKind::FileSystemHandleKind(Value v) noexcept : emlite::Val(FileSystemHandleKind::to_string(v)), value_(v) {}
FileSystemHandleKind::FileSystemHandleKind(Handle h) noexcept: emlite::Val(h) {
    value_ = FileSystemHandleKind::from_string(as<emlite::Uniq<char[]>>().get());
}

FileSystemHandleKind::FileSystemHandleKind(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = FileSystemHandleKind::from_string(as<emlite::Uniq<char[]>>().get());
}

FileSystemHandleKind FileSystemHandleKind::take_ownership(Handle h) noexcept { return FileSystemHandleKind(h); }
FileSystemHandleKind FileSystemHandleKind::clone() const noexcept { return *this; }
const char* FileSystemHandleKind::to_string(FileSystemHandleKind::Value value_) noexcept {
    switch (value_) {
        case FILE:
            return "file";
        case DIRECTORY:
            return "directory";
        default:
            return "file"; // fallback to first value
    }
}

WriteCommandType::Value WriteCommandType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "write", strlen("write"))) {
        return WRITE;
    }
    else if (__builtin_strncmp(str, "seek", strlen("seek"))) {
        return SEEK;
    }
    else if (__builtin_strncmp(str, "truncate", strlen("truncate"))) {
        return TRUNCATE;
    }
    else {
        // Default to first value for invalid input
        return WRITE;
    }
}

WriteCommandType::WriteCommandType(Value v) noexcept : emlite::Val(WriteCommandType::to_string(v)), value_(v) {}
WriteCommandType::WriteCommandType(Handle h) noexcept: emlite::Val(h) {
    value_ = WriteCommandType::from_string(as<emlite::Uniq<char[]>>().get());
}

WriteCommandType::WriteCommandType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = WriteCommandType::from_string(as<emlite::Uniq<char[]>>().get());
}

WriteCommandType WriteCommandType::take_ownership(Handle h) noexcept { return WriteCommandType(h); }
WriteCommandType WriteCommandType::clone() const noexcept { return *this; }
const char* WriteCommandType::to_string(WriteCommandType::Value value_) noexcept {
    switch (value_) {
        case WRITE:
            return "write";
        case SEEK:
            return "seek";
        case TRUNCATE:
            return "truncate";
        default:
            return "write"; // fallback to first value
    }
}

FullscreenNavigationUI::Value FullscreenNavigationUI::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "auto", strlen("auto"))) {
        return AUTO_;
    }
    else if (__builtin_strncmp(str, "show", strlen("show"))) {
        return SHOW;
    }
    else if (__builtin_strncmp(str, "hide", strlen("hide"))) {
        return HIDE;
    }
    else {
        // Default to first value for invalid input
        return AUTO_;
    }
}

FullscreenNavigationUI::FullscreenNavigationUI(Value v) noexcept : emlite::Val(FullscreenNavigationUI::to_string(v)), value_(v) {}
FullscreenNavigationUI::FullscreenNavigationUI(Handle h) noexcept: emlite::Val(h) {
    value_ = FullscreenNavigationUI::from_string(as<emlite::Uniq<char[]>>().get());
}

FullscreenNavigationUI::FullscreenNavigationUI(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = FullscreenNavigationUI::from_string(as<emlite::Uniq<char[]>>().get());
}

FullscreenNavigationUI FullscreenNavigationUI::take_ownership(Handle h) noexcept { return FullscreenNavigationUI(h); }
FullscreenNavigationUI FullscreenNavigationUI::clone() const noexcept { return *this; }
const char* FullscreenNavigationUI::to_string(FullscreenNavigationUI::Value value_) noexcept {
    switch (value_) {
        case AUTO_:
            return "auto";
        case SHOW:
            return "show";
        case HIDE:
            return "hide";
        default:
            return "auto"; // fallback to first value
    }
}

GamepadHand::Value GamepadHand::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "", strlen(""))) {
        return NONE;
    }
    else if (__builtin_strncmp(str, "left", strlen("left"))) {
        return LEFT;
    }
    else if (__builtin_strncmp(str, "right", strlen("right"))) {
        return RIGHT;
    }
    else {
        // Default to first value for invalid input
        return NONE;
    }
}

GamepadHand::GamepadHand(Value v) noexcept : emlite::Val(GamepadHand::to_string(v)), value_(v) {}
GamepadHand::GamepadHand(Handle h) noexcept: emlite::Val(h) {
    value_ = GamepadHand::from_string(as<emlite::Uniq<char[]>>().get());
}

GamepadHand::GamepadHand(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = GamepadHand::from_string(as<emlite::Uniq<char[]>>().get());
}

GamepadHand GamepadHand::take_ownership(Handle h) noexcept { return GamepadHand(h); }
GamepadHand GamepadHand::clone() const noexcept { return *this; }
const char* GamepadHand::to_string(GamepadHand::Value value_) noexcept {
    switch (value_) {
        case NONE:
            return "";
        case LEFT:
            return "left";
        case RIGHT:
            return "right";
        default:
            return ""; // fallback to first value
    }
}

GamepadMappingType::Value GamepadMappingType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "", strlen(""))) {
        return NONE;
    }
    else if (__builtin_strncmp(str, "standard", strlen("standard"))) {
        return STANDARD;
    }
    else if (__builtin_strncmp(str, "xr-standard", strlen("xr-standard"))) {
        return XR_STANDARD;
    }
    else {
        // Default to first value for invalid input
        return NONE;
    }
}

GamepadMappingType::GamepadMappingType(Value v) noexcept : emlite::Val(GamepadMappingType::to_string(v)), value_(v) {}
GamepadMappingType::GamepadMappingType(Handle h) noexcept: emlite::Val(h) {
    value_ = GamepadMappingType::from_string(as<emlite::Uniq<char[]>>().get());
}

GamepadMappingType::GamepadMappingType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = GamepadMappingType::from_string(as<emlite::Uniq<char[]>>().get());
}

GamepadMappingType GamepadMappingType::take_ownership(Handle h) noexcept { return GamepadMappingType(h); }
GamepadMappingType GamepadMappingType::clone() const noexcept { return *this; }
const char* GamepadMappingType::to_string(GamepadMappingType::Value value_) noexcept {
    switch (value_) {
        case NONE:
            return "";
        case STANDARD:
            return "standard";
        case XR_STANDARD:
            return "xr-standard";
        default:
            return ""; // fallback to first value
    }
}

GamepadHapticsResult::Value GamepadHapticsResult::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "complete", strlen("complete"))) {
        return COMPLETE;
    }
    else if (__builtin_strncmp(str, "preempted", strlen("preempted"))) {
        return PREEMPTED;
    }
    else {
        // Default to first value for invalid input
        return COMPLETE;
    }
}

GamepadHapticsResult::GamepadHapticsResult(Value v) noexcept : emlite::Val(GamepadHapticsResult::to_string(v)), value_(v) {}
GamepadHapticsResult::GamepadHapticsResult(Handle h) noexcept: emlite::Val(h) {
    value_ = GamepadHapticsResult::from_string(as<emlite::Uniq<char[]>>().get());
}

GamepadHapticsResult::GamepadHapticsResult(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = GamepadHapticsResult::from_string(as<emlite::Uniq<char[]>>().get());
}

GamepadHapticsResult GamepadHapticsResult::take_ownership(Handle h) noexcept { return GamepadHapticsResult(h); }
GamepadHapticsResult GamepadHapticsResult::clone() const noexcept { return *this; }
const char* GamepadHapticsResult::to_string(GamepadHapticsResult::Value value_) noexcept {
    switch (value_) {
        case COMPLETE:
            return "complete";
        case PREEMPTED:
            return "preempted";
        default:
            return "complete"; // fallback to first value
    }
}

GamepadHapticEffectType::Value GamepadHapticEffectType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "dual-rumble", strlen("dual-rumble"))) {
        return DUAL_RUMBLE;
    }
    else if (__builtin_strncmp(str, "trigger-rumble", strlen("trigger-rumble"))) {
        return TRIGGER_RUMBLE;
    }
    else {
        // Default to first value for invalid input
        return DUAL_RUMBLE;
    }
}

GamepadHapticEffectType::GamepadHapticEffectType(Value v) noexcept : emlite::Val(GamepadHapticEffectType::to_string(v)), value_(v) {}
GamepadHapticEffectType::GamepadHapticEffectType(Handle h) noexcept: emlite::Val(h) {
    value_ = GamepadHapticEffectType::from_string(as<emlite::Uniq<char[]>>().get());
}

GamepadHapticEffectType::GamepadHapticEffectType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = GamepadHapticEffectType::from_string(as<emlite::Uniq<char[]>>().get());
}

GamepadHapticEffectType GamepadHapticEffectType::take_ownership(Handle h) noexcept { return GamepadHapticEffectType(h); }
GamepadHapticEffectType GamepadHapticEffectType::clone() const noexcept { return *this; }
const char* GamepadHapticEffectType::to_string(GamepadHapticEffectType::Value value_) noexcept {
    switch (value_) {
        case DUAL_RUMBLE:
            return "dual-rumble";
        case TRIGGER_RUMBLE:
            return "trigger-rumble";
        default:
            return "dual-rumble"; // fallback to first value
    }
}

GyroscopeLocalCoordinateSystem::Value GyroscopeLocalCoordinateSystem::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "device", strlen("device"))) {
        return DEVICE;
    }
    else if (__builtin_strncmp(str, "screen", strlen("screen"))) {
        return SCREEN;
    }
    else {
        // Default to first value for invalid input
        return DEVICE;
    }
}

GyroscopeLocalCoordinateSystem::GyroscopeLocalCoordinateSystem(Value v) noexcept : emlite::Val(GyroscopeLocalCoordinateSystem::to_string(v)), value_(v) {}
GyroscopeLocalCoordinateSystem::GyroscopeLocalCoordinateSystem(Handle h) noexcept: emlite::Val(h) {
    value_ = GyroscopeLocalCoordinateSystem::from_string(as<emlite::Uniq<char[]>>().get());
}

GyroscopeLocalCoordinateSystem::GyroscopeLocalCoordinateSystem(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = GyroscopeLocalCoordinateSystem::from_string(as<emlite::Uniq<char[]>>().get());
}

GyroscopeLocalCoordinateSystem GyroscopeLocalCoordinateSystem::take_ownership(Handle h) noexcept { return GyroscopeLocalCoordinateSystem(h); }
GyroscopeLocalCoordinateSystem GyroscopeLocalCoordinateSystem::clone() const noexcept { return *this; }
const char* GyroscopeLocalCoordinateSystem::to_string(GyroscopeLocalCoordinateSystem::Value value_) noexcept {
    switch (value_) {
        case DEVICE:
            return "device";
        case SCREEN:
            return "screen";
        default:
            return "device"; // fallback to first value
    }
}

HandwritingRecognitionType::Value HandwritingRecognitionType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "text", strlen("text"))) {
        return TEXT;
    }
    else if (__builtin_strncmp(str, "per-character", strlen("per-character"))) {
        return PER_CHARACTER;
    }
    else {
        // Default to first value for invalid input
        return TEXT;
    }
}

HandwritingRecognitionType::HandwritingRecognitionType(Value v) noexcept : emlite::Val(HandwritingRecognitionType::to_string(v)), value_(v) {}
HandwritingRecognitionType::HandwritingRecognitionType(Handle h) noexcept: emlite::Val(h) {
    value_ = HandwritingRecognitionType::from_string(as<emlite::Uniq<char[]>>().get());
}

HandwritingRecognitionType::HandwritingRecognitionType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = HandwritingRecognitionType::from_string(as<emlite::Uniq<char[]>>().get());
}

HandwritingRecognitionType HandwritingRecognitionType::take_ownership(Handle h) noexcept { return HandwritingRecognitionType(h); }
HandwritingRecognitionType HandwritingRecognitionType::clone() const noexcept { return *this; }
const char* HandwritingRecognitionType::to_string(HandwritingRecognitionType::Value value_) noexcept {
    switch (value_) {
        case TEXT:
            return "text";
        case PER_CHARACTER:
            return "per-character";
        default:
            return "text"; // fallback to first value
    }
}

HandwritingInputType::Value HandwritingInputType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "mouse", strlen("mouse"))) {
        return MOUSE;
    }
    else if (__builtin_strncmp(str, "stylus", strlen("stylus"))) {
        return STYLUS;
    }
    else if (__builtin_strncmp(str, "touch", strlen("touch"))) {
        return TOUCH;
    }
    else {
        // Default to first value for invalid input
        return MOUSE;
    }
}

HandwritingInputType::HandwritingInputType(Value v) noexcept : emlite::Val(HandwritingInputType::to_string(v)), value_(v) {}
HandwritingInputType::HandwritingInputType(Handle h) noexcept: emlite::Val(h) {
    value_ = HandwritingInputType::from_string(as<emlite::Uniq<char[]>>().get());
}

HandwritingInputType::HandwritingInputType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = HandwritingInputType::from_string(as<emlite::Uniq<char[]>>().get());
}

HandwritingInputType HandwritingInputType::take_ownership(Handle h) noexcept { return HandwritingInputType(h); }
HandwritingInputType HandwritingInputType::clone() const noexcept { return *this; }
const char* HandwritingInputType::to_string(HandwritingInputType::Value value_) noexcept {
    switch (value_) {
        case MOUSE:
            return "mouse";
        case STYLUS:
            return "stylus";
        case TOUCH:
            return "touch";
        default:
            return "mouse"; // fallback to first value
    }
}

DocumentReadyState::Value DocumentReadyState::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "loading", strlen("loading"))) {
        return LOADING;
    }
    else if (__builtin_strncmp(str, "interactive", strlen("interactive"))) {
        return INTERACTIVE;
    }
    else if (__builtin_strncmp(str, "complete", strlen("complete"))) {
        return COMPLETE;
    }
    else {
        // Default to first value for invalid input
        return LOADING;
    }
}

DocumentReadyState::DocumentReadyState(Value v) noexcept : emlite::Val(DocumentReadyState::to_string(v)), value_(v) {}
DocumentReadyState::DocumentReadyState(Handle h) noexcept: emlite::Val(h) {
    value_ = DocumentReadyState::from_string(as<emlite::Uniq<char[]>>().get());
}

DocumentReadyState::DocumentReadyState(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = DocumentReadyState::from_string(as<emlite::Uniq<char[]>>().get());
}

DocumentReadyState DocumentReadyState::take_ownership(Handle h) noexcept { return DocumentReadyState(h); }
DocumentReadyState DocumentReadyState::clone() const noexcept { return *this; }
const char* DocumentReadyState::to_string(DocumentReadyState::Value value_) noexcept {
    switch (value_) {
        case LOADING:
            return "loading";
        case INTERACTIVE:
            return "interactive";
        case COMPLETE:
            return "complete";
        default:
            return "loading"; // fallback to first value
    }
}

DocumentVisibilityState::Value DocumentVisibilityState::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "visible", strlen("visible"))) {
        return VISIBLE;
    }
    else if (__builtin_strncmp(str, "hidden", strlen("hidden"))) {
        return HIDDEN;
    }
    else {
        // Default to first value for invalid input
        return VISIBLE;
    }
}

DocumentVisibilityState::DocumentVisibilityState(Value v) noexcept : emlite::Val(DocumentVisibilityState::to_string(v)), value_(v) {}
DocumentVisibilityState::DocumentVisibilityState(Handle h) noexcept: emlite::Val(h) {
    value_ = DocumentVisibilityState::from_string(as<emlite::Uniq<char[]>>().get());
}

DocumentVisibilityState::DocumentVisibilityState(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = DocumentVisibilityState::from_string(as<emlite::Uniq<char[]>>().get());
}

DocumentVisibilityState DocumentVisibilityState::take_ownership(Handle h) noexcept { return DocumentVisibilityState(h); }
DocumentVisibilityState DocumentVisibilityState::clone() const noexcept { return *this; }
const char* DocumentVisibilityState::to_string(DocumentVisibilityState::Value value_) noexcept {
    switch (value_) {
        case VISIBLE:
            return "visible";
        case HIDDEN:
            return "hidden";
        default:
            return "visible"; // fallback to first value
    }
}

CanPlayTypeResult::Value CanPlayTypeResult::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "", strlen(""))) {
        return NONE;
    }
    else if (__builtin_strncmp(str, "maybe", strlen("maybe"))) {
        return MAYBE;
    }
    else if (__builtin_strncmp(str, "probably", strlen("probably"))) {
        return PROBABLY;
    }
    else {
        // Default to first value for invalid input
        return NONE;
    }
}

CanPlayTypeResult::CanPlayTypeResult(Value v) noexcept : emlite::Val(CanPlayTypeResult::to_string(v)), value_(v) {}
CanPlayTypeResult::CanPlayTypeResult(Handle h) noexcept: emlite::Val(h) {
    value_ = CanPlayTypeResult::from_string(as<emlite::Uniq<char[]>>().get());
}

CanPlayTypeResult::CanPlayTypeResult(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = CanPlayTypeResult::from_string(as<emlite::Uniq<char[]>>().get());
}

CanPlayTypeResult CanPlayTypeResult::take_ownership(Handle h) noexcept { return CanPlayTypeResult(h); }
CanPlayTypeResult CanPlayTypeResult::clone() const noexcept { return *this; }
const char* CanPlayTypeResult::to_string(CanPlayTypeResult::Value value_) noexcept {
    switch (value_) {
        case NONE:
            return "";
        case MAYBE:
            return "maybe";
        case PROBABLY:
            return "probably";
        default:
            return ""; // fallback to first value
    }
}

TextTrackMode::Value TextTrackMode::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "disabled", strlen("disabled"))) {
        return DISABLED;
    }
    else if (__builtin_strncmp(str, "hidden", strlen("hidden"))) {
        return HIDDEN;
    }
    else if (__builtin_strncmp(str, "showing", strlen("showing"))) {
        return SHOWING;
    }
    else {
        // Default to first value for invalid input
        return DISABLED;
    }
}

TextTrackMode::TextTrackMode(Value v) noexcept : emlite::Val(TextTrackMode::to_string(v)), value_(v) {}
TextTrackMode::TextTrackMode(Handle h) noexcept: emlite::Val(h) {
    value_ = TextTrackMode::from_string(as<emlite::Uniq<char[]>>().get());
}

TextTrackMode::TextTrackMode(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = TextTrackMode::from_string(as<emlite::Uniq<char[]>>().get());
}

TextTrackMode TextTrackMode::take_ownership(Handle h) noexcept { return TextTrackMode(h); }
TextTrackMode TextTrackMode::clone() const noexcept { return *this; }
const char* TextTrackMode::to_string(TextTrackMode::Value value_) noexcept {
    switch (value_) {
        case DISABLED:
            return "disabled";
        case HIDDEN:
            return "hidden";
        case SHOWING:
            return "showing";
        default:
            return "disabled"; // fallback to first value
    }
}

TextTrackKind::Value TextTrackKind::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "subtitles", strlen("subtitles"))) {
        return SUBTITLES;
    }
    else if (__builtin_strncmp(str, "captions", strlen("captions"))) {
        return CAPTIONS;
    }
    else if (__builtin_strncmp(str, "descriptions", strlen("descriptions"))) {
        return DESCRIPTIONS;
    }
    else if (__builtin_strncmp(str, "chapters", strlen("chapters"))) {
        return CHAPTERS;
    }
    else if (__builtin_strncmp(str, "metadata", strlen("metadata"))) {
        return METADATA;
    }
    else {
        // Default to first value for invalid input
        return SUBTITLES;
    }
}

TextTrackKind::TextTrackKind(Value v) noexcept : emlite::Val(TextTrackKind::to_string(v)), value_(v) {}
TextTrackKind::TextTrackKind(Handle h) noexcept: emlite::Val(h) {
    value_ = TextTrackKind::from_string(as<emlite::Uniq<char[]>>().get());
}

TextTrackKind::TextTrackKind(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = TextTrackKind::from_string(as<emlite::Uniq<char[]>>().get());
}

TextTrackKind TextTrackKind::take_ownership(Handle h) noexcept { return TextTrackKind(h); }
TextTrackKind TextTrackKind::clone() const noexcept { return *this; }
const char* TextTrackKind::to_string(TextTrackKind::Value value_) noexcept {
    switch (value_) {
        case SUBTITLES:
            return "subtitles";
        case CAPTIONS:
            return "captions";
        case DESCRIPTIONS:
            return "descriptions";
        case CHAPTERS:
            return "chapters";
        case METADATA:
            return "metadata";
        default:
            return "subtitles"; // fallback to first value
    }
}

SelectionMode::Value SelectionMode::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "select", strlen("select"))) {
        return SELECT;
    }
    else if (__builtin_strncmp(str, "start", strlen("start"))) {
        return START;
    }
    else if (__builtin_strncmp(str, "end", strlen("end"))) {
        return END;
    }
    else if (__builtin_strncmp(str, "preserve", strlen("preserve"))) {
        return PRESERVE;
    }
    else {
        // Default to first value for invalid input
        return SELECT;
    }
}

SelectionMode::SelectionMode(Value v) noexcept : emlite::Val(SelectionMode::to_string(v)), value_(v) {}
SelectionMode::SelectionMode(Handle h) noexcept: emlite::Val(h) {
    value_ = SelectionMode::from_string(as<emlite::Uniq<char[]>>().get());
}

SelectionMode::SelectionMode(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = SelectionMode::from_string(as<emlite::Uniq<char[]>>().get());
}

SelectionMode SelectionMode::take_ownership(Handle h) noexcept { return SelectionMode(h); }
SelectionMode SelectionMode::clone() const noexcept { return *this; }
const char* SelectionMode::to_string(SelectionMode::Value value_) noexcept {
    switch (value_) {
        case SELECT:
            return "select";
        case START:
            return "start";
        case END:
            return "end";
        case PRESERVE:
            return "preserve";
        default:
            return "select"; // fallback to first value
    }
}

PredefinedColorSpace::Value PredefinedColorSpace::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "srgb", strlen("srgb"))) {
        return SRGB;
    }
    else if (__builtin_strncmp(str, "display-p3", strlen("display-p3"))) {
        return DISPLAY_P3;
    }
    else {
        // Default to first value for invalid input
        return SRGB;
    }
}

PredefinedColorSpace::PredefinedColorSpace(Value v) noexcept : emlite::Val(PredefinedColorSpace::to_string(v)), value_(v) {}
PredefinedColorSpace::PredefinedColorSpace(Handle h) noexcept: emlite::Val(h) {
    value_ = PredefinedColorSpace::from_string(as<emlite::Uniq<char[]>>().get());
}

PredefinedColorSpace::PredefinedColorSpace(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = PredefinedColorSpace::from_string(as<emlite::Uniq<char[]>>().get());
}

PredefinedColorSpace PredefinedColorSpace::take_ownership(Handle h) noexcept { return PredefinedColorSpace(h); }
PredefinedColorSpace PredefinedColorSpace::clone() const noexcept { return *this; }
const char* PredefinedColorSpace::to_string(PredefinedColorSpace::Value value_) noexcept {
    switch (value_) {
        case SRGB:
            return "srgb";
        case DISPLAY_P3:
            return "display-p3";
        default:
            return "srgb"; // fallback to first value
    }
}

CanvasColorType::Value CanvasColorType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "unorm8", strlen("unorm8"))) {
        return UNORM8;
    }
    else if (__builtin_strncmp(str, "float16", strlen("float16"))) {
        return FLOAT16;
    }
    else {
        // Default to first value for invalid input
        return UNORM8;
    }
}

CanvasColorType::CanvasColorType(Value v) noexcept : emlite::Val(CanvasColorType::to_string(v)), value_(v) {}
CanvasColorType::CanvasColorType(Handle h) noexcept: emlite::Val(h) {
    value_ = CanvasColorType::from_string(as<emlite::Uniq<char[]>>().get());
}

CanvasColorType::CanvasColorType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = CanvasColorType::from_string(as<emlite::Uniq<char[]>>().get());
}

CanvasColorType CanvasColorType::take_ownership(Handle h) noexcept { return CanvasColorType(h); }
CanvasColorType CanvasColorType::clone() const noexcept { return *this; }
const char* CanvasColorType::to_string(CanvasColorType::Value value_) noexcept {
    switch (value_) {
        case UNORM8:
            return "unorm8";
        case FLOAT16:
            return "float16";
        default:
            return "unorm8"; // fallback to first value
    }
}

CanvasFillRule::Value CanvasFillRule::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "nonzero", strlen("nonzero"))) {
        return NONZERO;
    }
    else if (__builtin_strncmp(str, "evenodd", strlen("evenodd"))) {
        return EVENODD;
    }
    else {
        // Default to first value for invalid input
        return NONZERO;
    }
}

CanvasFillRule::CanvasFillRule(Value v) noexcept : emlite::Val(CanvasFillRule::to_string(v)), value_(v) {}
CanvasFillRule::CanvasFillRule(Handle h) noexcept: emlite::Val(h) {
    value_ = CanvasFillRule::from_string(as<emlite::Uniq<char[]>>().get());
}

CanvasFillRule::CanvasFillRule(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = CanvasFillRule::from_string(as<emlite::Uniq<char[]>>().get());
}

CanvasFillRule CanvasFillRule::take_ownership(Handle h) noexcept { return CanvasFillRule(h); }
CanvasFillRule CanvasFillRule::clone() const noexcept { return *this; }
const char* CanvasFillRule::to_string(CanvasFillRule::Value value_) noexcept {
    switch (value_) {
        case NONZERO:
            return "nonzero";
        case EVENODD:
            return "evenodd";
        default:
            return "nonzero"; // fallback to first value
    }
}

ImageSmoothingQuality::Value ImageSmoothingQuality::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "low", strlen("low"))) {
        return LOW;
    }
    else if (__builtin_strncmp(str, "medium", strlen("medium"))) {
        return MEDIUM;
    }
    else if (__builtin_strncmp(str, "high", strlen("high"))) {
        return HIGH;
    }
    else {
        // Default to first value for invalid input
        return LOW;
    }
}

ImageSmoothingQuality::ImageSmoothingQuality(Value v) noexcept : emlite::Val(ImageSmoothingQuality::to_string(v)), value_(v) {}
ImageSmoothingQuality::ImageSmoothingQuality(Handle h) noexcept: emlite::Val(h) {
    value_ = ImageSmoothingQuality::from_string(as<emlite::Uniq<char[]>>().get());
}

ImageSmoothingQuality::ImageSmoothingQuality(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = ImageSmoothingQuality::from_string(as<emlite::Uniq<char[]>>().get());
}

ImageSmoothingQuality ImageSmoothingQuality::take_ownership(Handle h) noexcept { return ImageSmoothingQuality(h); }
ImageSmoothingQuality ImageSmoothingQuality::clone() const noexcept { return *this; }
const char* ImageSmoothingQuality::to_string(ImageSmoothingQuality::Value value_) noexcept {
    switch (value_) {
        case LOW:
            return "low";
        case MEDIUM:
            return "medium";
        case HIGH:
            return "high";
        default:
            return "low"; // fallback to first value
    }
}

CanvasLineCap::Value CanvasLineCap::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "butt", strlen("butt"))) {
        return BUTT;
    }
    else if (__builtin_strncmp(str, "round", strlen("round"))) {
        return ROUND;
    }
    else if (__builtin_strncmp(str, "square", strlen("square"))) {
        return SQUARE;
    }
    else {
        // Default to first value for invalid input
        return BUTT;
    }
}

CanvasLineCap::CanvasLineCap(Value v) noexcept : emlite::Val(CanvasLineCap::to_string(v)), value_(v) {}
CanvasLineCap::CanvasLineCap(Handle h) noexcept: emlite::Val(h) {
    value_ = CanvasLineCap::from_string(as<emlite::Uniq<char[]>>().get());
}

CanvasLineCap::CanvasLineCap(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = CanvasLineCap::from_string(as<emlite::Uniq<char[]>>().get());
}

CanvasLineCap CanvasLineCap::take_ownership(Handle h) noexcept { return CanvasLineCap(h); }
CanvasLineCap CanvasLineCap::clone() const noexcept { return *this; }
const char* CanvasLineCap::to_string(CanvasLineCap::Value value_) noexcept {
    switch (value_) {
        case BUTT:
            return "butt";
        case ROUND:
            return "round";
        case SQUARE:
            return "square";
        default:
            return "butt"; // fallback to first value
    }
}

CanvasLineJoin::Value CanvasLineJoin::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "round", strlen("round"))) {
        return ROUND;
    }
    else if (__builtin_strncmp(str, "bevel", strlen("bevel"))) {
        return BEVEL;
    }
    else if (__builtin_strncmp(str, "miter", strlen("miter"))) {
        return MITER;
    }
    else {
        // Default to first value for invalid input
        return ROUND;
    }
}

CanvasLineJoin::CanvasLineJoin(Value v) noexcept : emlite::Val(CanvasLineJoin::to_string(v)), value_(v) {}
CanvasLineJoin::CanvasLineJoin(Handle h) noexcept: emlite::Val(h) {
    value_ = CanvasLineJoin::from_string(as<emlite::Uniq<char[]>>().get());
}

CanvasLineJoin::CanvasLineJoin(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = CanvasLineJoin::from_string(as<emlite::Uniq<char[]>>().get());
}

CanvasLineJoin CanvasLineJoin::take_ownership(Handle h) noexcept { return CanvasLineJoin(h); }
CanvasLineJoin CanvasLineJoin::clone() const noexcept { return *this; }
const char* CanvasLineJoin::to_string(CanvasLineJoin::Value value_) noexcept {
    switch (value_) {
        case ROUND:
            return "round";
        case BEVEL:
            return "bevel";
        case MITER:
            return "miter";
        default:
            return "round"; // fallback to first value
    }
}

CanvasTextAlign::Value CanvasTextAlign::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "start", strlen("start"))) {
        return START;
    }
    else if (__builtin_strncmp(str, "end", strlen("end"))) {
        return END;
    }
    else if (__builtin_strncmp(str, "left", strlen("left"))) {
        return LEFT;
    }
    else if (__builtin_strncmp(str, "right", strlen("right"))) {
        return RIGHT;
    }
    else if (__builtin_strncmp(str, "center", strlen("center"))) {
        return CENTER;
    }
    else {
        // Default to first value for invalid input
        return START;
    }
}

CanvasTextAlign::CanvasTextAlign(Value v) noexcept : emlite::Val(CanvasTextAlign::to_string(v)), value_(v) {}
CanvasTextAlign::CanvasTextAlign(Handle h) noexcept: emlite::Val(h) {
    value_ = CanvasTextAlign::from_string(as<emlite::Uniq<char[]>>().get());
}

CanvasTextAlign::CanvasTextAlign(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = CanvasTextAlign::from_string(as<emlite::Uniq<char[]>>().get());
}

CanvasTextAlign CanvasTextAlign::take_ownership(Handle h) noexcept { return CanvasTextAlign(h); }
CanvasTextAlign CanvasTextAlign::clone() const noexcept { return *this; }
const char* CanvasTextAlign::to_string(CanvasTextAlign::Value value_) noexcept {
    switch (value_) {
        case START:
            return "start";
        case END:
            return "end";
        case LEFT:
            return "left";
        case RIGHT:
            return "right";
        case CENTER:
            return "center";
        default:
            return "start"; // fallback to first value
    }
}

CanvasTextBaseline::Value CanvasTextBaseline::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "top", strlen("top"))) {
        return TOP;
    }
    else if (__builtin_strncmp(str, "hanging", strlen("hanging"))) {
        return HANGING;
    }
    else if (__builtin_strncmp(str, "middle", strlen("middle"))) {
        return MIDDLE;
    }
    else if (__builtin_strncmp(str, "alphabetic", strlen("alphabetic"))) {
        return ALPHABETIC;
    }
    else if (__builtin_strncmp(str, "ideographic", strlen("ideographic"))) {
        return IDEOGRAPHIC;
    }
    else if (__builtin_strncmp(str, "bottom", strlen("bottom"))) {
        return BOTTOM;
    }
    else {
        // Default to first value for invalid input
        return TOP;
    }
}

CanvasTextBaseline::CanvasTextBaseline(Value v) noexcept : emlite::Val(CanvasTextBaseline::to_string(v)), value_(v) {}
CanvasTextBaseline::CanvasTextBaseline(Handle h) noexcept: emlite::Val(h) {
    value_ = CanvasTextBaseline::from_string(as<emlite::Uniq<char[]>>().get());
}

CanvasTextBaseline::CanvasTextBaseline(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = CanvasTextBaseline::from_string(as<emlite::Uniq<char[]>>().get());
}

CanvasTextBaseline CanvasTextBaseline::take_ownership(Handle h) noexcept { return CanvasTextBaseline(h); }
CanvasTextBaseline CanvasTextBaseline::clone() const noexcept { return *this; }
const char* CanvasTextBaseline::to_string(CanvasTextBaseline::Value value_) noexcept {
    switch (value_) {
        case TOP:
            return "top";
        case HANGING:
            return "hanging";
        case MIDDLE:
            return "middle";
        case ALPHABETIC:
            return "alphabetic";
        case IDEOGRAPHIC:
            return "ideographic";
        case BOTTOM:
            return "bottom";
        default:
            return "top"; // fallback to first value
    }
}

CanvasDirection::Value CanvasDirection::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "ltr", strlen("ltr"))) {
        return LTR;
    }
    else if (__builtin_strncmp(str, "rtl", strlen("rtl"))) {
        return RTL;
    }
    else if (__builtin_strncmp(str, "inherit", strlen("inherit"))) {
        return INHERIT;
    }
    else {
        // Default to first value for invalid input
        return LTR;
    }
}

CanvasDirection::CanvasDirection(Value v) noexcept : emlite::Val(CanvasDirection::to_string(v)), value_(v) {}
CanvasDirection::CanvasDirection(Handle h) noexcept: emlite::Val(h) {
    value_ = CanvasDirection::from_string(as<emlite::Uniq<char[]>>().get());
}

CanvasDirection::CanvasDirection(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = CanvasDirection::from_string(as<emlite::Uniq<char[]>>().get());
}

CanvasDirection CanvasDirection::take_ownership(Handle h) noexcept { return CanvasDirection(h); }
CanvasDirection CanvasDirection::clone() const noexcept { return *this; }
const char* CanvasDirection::to_string(CanvasDirection::Value value_) noexcept {
    switch (value_) {
        case LTR:
            return "ltr";
        case RTL:
            return "rtl";
        case INHERIT:
            return "inherit";
        default:
            return "ltr"; // fallback to first value
    }
}

CanvasFontKerning::Value CanvasFontKerning::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "auto", strlen("auto"))) {
        return AUTO_;
    }
    else if (__builtin_strncmp(str, "normal", strlen("normal"))) {
        return NORMAL;
    }
    else if (__builtin_strncmp(str, "none", strlen("none"))) {
        return NONE;
    }
    else {
        // Default to first value for invalid input
        return AUTO_;
    }
}

CanvasFontKerning::CanvasFontKerning(Value v) noexcept : emlite::Val(CanvasFontKerning::to_string(v)), value_(v) {}
CanvasFontKerning::CanvasFontKerning(Handle h) noexcept: emlite::Val(h) {
    value_ = CanvasFontKerning::from_string(as<emlite::Uniq<char[]>>().get());
}

CanvasFontKerning::CanvasFontKerning(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = CanvasFontKerning::from_string(as<emlite::Uniq<char[]>>().get());
}

CanvasFontKerning CanvasFontKerning::take_ownership(Handle h) noexcept { return CanvasFontKerning(h); }
CanvasFontKerning CanvasFontKerning::clone() const noexcept { return *this; }
const char* CanvasFontKerning::to_string(CanvasFontKerning::Value value_) noexcept {
    switch (value_) {
        case AUTO_:
            return "auto";
        case NORMAL:
            return "normal";
        case NONE:
            return "none";
        default:
            return "auto"; // fallback to first value
    }
}

CanvasFontStretch::Value CanvasFontStretch::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "ultra-condensed", strlen("ultra-condensed"))) {
        return ULTRA_CONDENSED;
    }
    else if (__builtin_strncmp(str, "extra-condensed", strlen("extra-condensed"))) {
        return EXTRA_CONDENSED;
    }
    else if (__builtin_strncmp(str, "condensed", strlen("condensed"))) {
        return CONDENSED;
    }
    else if (__builtin_strncmp(str, "semi-condensed", strlen("semi-condensed"))) {
        return SEMI_CONDENSED;
    }
    else if (__builtin_strncmp(str, "normal", strlen("normal"))) {
        return NORMAL;
    }
    else if (__builtin_strncmp(str, "semi-expanded", strlen("semi-expanded"))) {
        return SEMI_EXPANDED;
    }
    else if (__builtin_strncmp(str, "expanded", strlen("expanded"))) {
        return EXPANDED;
    }
    else if (__builtin_strncmp(str, "extra-expanded", strlen("extra-expanded"))) {
        return EXTRA_EXPANDED;
    }
    else if (__builtin_strncmp(str, "ultra-expanded", strlen("ultra-expanded"))) {
        return ULTRA_EXPANDED;
    }
    else {
        // Default to first value for invalid input
        return ULTRA_CONDENSED;
    }
}

CanvasFontStretch::CanvasFontStretch(Value v) noexcept : emlite::Val(CanvasFontStretch::to_string(v)), value_(v) {}
CanvasFontStretch::CanvasFontStretch(Handle h) noexcept: emlite::Val(h) {
    value_ = CanvasFontStretch::from_string(as<emlite::Uniq<char[]>>().get());
}

CanvasFontStretch::CanvasFontStretch(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = CanvasFontStretch::from_string(as<emlite::Uniq<char[]>>().get());
}

CanvasFontStretch CanvasFontStretch::take_ownership(Handle h) noexcept { return CanvasFontStretch(h); }
CanvasFontStretch CanvasFontStretch::clone() const noexcept { return *this; }
const char* CanvasFontStretch::to_string(CanvasFontStretch::Value value_) noexcept {
    switch (value_) {
        case ULTRA_CONDENSED:
            return "ultra-condensed";
        case EXTRA_CONDENSED:
            return "extra-condensed";
        case CONDENSED:
            return "condensed";
        case SEMI_CONDENSED:
            return "semi-condensed";
        case NORMAL:
            return "normal";
        case SEMI_EXPANDED:
            return "semi-expanded";
        case EXPANDED:
            return "expanded";
        case EXTRA_EXPANDED:
            return "extra-expanded";
        case ULTRA_EXPANDED:
            return "ultra-expanded";
        default:
            return "ultra-condensed"; // fallback to first value
    }
}

CanvasFontVariantCaps::Value CanvasFontVariantCaps::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "normal", strlen("normal"))) {
        return NORMAL;
    }
    else if (__builtin_strncmp(str, "small-caps", strlen("small-caps"))) {
        return SMALL_CAPS;
    }
    else if (__builtin_strncmp(str, "all-small-caps", strlen("all-small-caps"))) {
        return ALL_SMALL_CAPS;
    }
    else if (__builtin_strncmp(str, "petite-caps", strlen("petite-caps"))) {
        return PETITE_CAPS;
    }
    else if (__builtin_strncmp(str, "all-petite-caps", strlen("all-petite-caps"))) {
        return ALL_PETITE_CAPS;
    }
    else if (__builtin_strncmp(str, "unicase", strlen("unicase"))) {
        return UNICASE;
    }
    else if (__builtin_strncmp(str, "titling-caps", strlen("titling-caps"))) {
        return TITLING_CAPS;
    }
    else {
        // Default to first value for invalid input
        return NORMAL;
    }
}

CanvasFontVariantCaps::CanvasFontVariantCaps(Value v) noexcept : emlite::Val(CanvasFontVariantCaps::to_string(v)), value_(v) {}
CanvasFontVariantCaps::CanvasFontVariantCaps(Handle h) noexcept: emlite::Val(h) {
    value_ = CanvasFontVariantCaps::from_string(as<emlite::Uniq<char[]>>().get());
}

CanvasFontVariantCaps::CanvasFontVariantCaps(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = CanvasFontVariantCaps::from_string(as<emlite::Uniq<char[]>>().get());
}

CanvasFontVariantCaps CanvasFontVariantCaps::take_ownership(Handle h) noexcept { return CanvasFontVariantCaps(h); }
CanvasFontVariantCaps CanvasFontVariantCaps::clone() const noexcept { return *this; }
const char* CanvasFontVariantCaps::to_string(CanvasFontVariantCaps::Value value_) noexcept {
    switch (value_) {
        case NORMAL:
            return "normal";
        case SMALL_CAPS:
            return "small-caps";
        case ALL_SMALL_CAPS:
            return "all-small-caps";
        case PETITE_CAPS:
            return "petite-caps";
        case ALL_PETITE_CAPS:
            return "all-petite-caps";
        case UNICASE:
            return "unicase";
        case TITLING_CAPS:
            return "titling-caps";
        default:
            return "normal"; // fallback to first value
    }
}

CanvasTextRendering::Value CanvasTextRendering::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "auto", strlen("auto"))) {
        return AUTO_;
    }
    else if (__builtin_strncmp(str, "optimizeSpeed", strlen("optimizeSpeed"))) {
        return OPTIMIZESPEED;
    }
    else if (__builtin_strncmp(str, "optimizeLegibility", strlen("optimizeLegibility"))) {
        return OPTIMIZELEGIBILITY;
    }
    else if (__builtin_strncmp(str, "geometricPrecision", strlen("geometricPrecision"))) {
        return GEOMETRICPRECISION;
    }
    else {
        // Default to first value for invalid input
        return AUTO_;
    }
}

CanvasTextRendering::CanvasTextRendering(Value v) noexcept : emlite::Val(CanvasTextRendering::to_string(v)), value_(v) {}
CanvasTextRendering::CanvasTextRendering(Handle h) noexcept: emlite::Val(h) {
    value_ = CanvasTextRendering::from_string(as<emlite::Uniq<char[]>>().get());
}

CanvasTextRendering::CanvasTextRendering(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = CanvasTextRendering::from_string(as<emlite::Uniq<char[]>>().get());
}

CanvasTextRendering CanvasTextRendering::take_ownership(Handle h) noexcept { return CanvasTextRendering(h); }
CanvasTextRendering CanvasTextRendering::clone() const noexcept { return *this; }
const char* CanvasTextRendering::to_string(CanvasTextRendering::Value value_) noexcept {
    switch (value_) {
        case AUTO_:
            return "auto";
        case OPTIMIZESPEED:
            return "optimizeSpeed";
        case OPTIMIZELEGIBILITY:
            return "optimizeLegibility";
        case GEOMETRICPRECISION:
            return "geometricPrecision";
        default:
            return "auto"; // fallback to first value
    }
}

OffscreenRenderingContextId::Value OffscreenRenderingContextId::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "2d", strlen("2d"))) {
        return _2D;
    }
    else if (__builtin_strncmp(str, "bitmaprenderer", strlen("bitmaprenderer"))) {
        return BITMAPRENDERER;
    }
    else if (__builtin_strncmp(str, "webgl", strlen("webgl"))) {
        return WEBGL;
    }
    else if (__builtin_strncmp(str, "webgl2", strlen("webgl2"))) {
        return WEBGL2;
    }
    else if (__builtin_strncmp(str, "webgpu", strlen("webgpu"))) {
        return WEBGPU;
    }
    else {
        // Default to first value for invalid input
        return _2D;
    }
}

OffscreenRenderingContextId::OffscreenRenderingContextId(Value v) noexcept : emlite::Val(OffscreenRenderingContextId::to_string(v)), value_(v) {}
OffscreenRenderingContextId::OffscreenRenderingContextId(Handle h) noexcept: emlite::Val(h) {
    value_ = OffscreenRenderingContextId::from_string(as<emlite::Uniq<char[]>>().get());
}

OffscreenRenderingContextId::OffscreenRenderingContextId(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = OffscreenRenderingContextId::from_string(as<emlite::Uniq<char[]>>().get());
}

OffscreenRenderingContextId OffscreenRenderingContextId::take_ownership(Handle h) noexcept { return OffscreenRenderingContextId(h); }
OffscreenRenderingContextId OffscreenRenderingContextId::clone() const noexcept { return *this; }
const char* OffscreenRenderingContextId::to_string(OffscreenRenderingContextId::Value value_) noexcept {
    switch (value_) {
        case _2D:
            return "2d";
        case BITMAPRENDERER:
            return "bitmaprenderer";
        case WEBGL:
            return "webgl";
        case WEBGL2:
            return "webgl2";
        case WEBGPU:
            return "webgpu";
        default:
            return "2d"; // fallback to first value
    }
}

ScrollRestoration::Value ScrollRestoration::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "auto", strlen("auto"))) {
        return AUTO_;
    }
    else if (__builtin_strncmp(str, "manual", strlen("manual"))) {
        return MANUAL;
    }
    else {
        // Default to first value for invalid input
        return AUTO_;
    }
}

ScrollRestoration::ScrollRestoration(Value v) noexcept : emlite::Val(ScrollRestoration::to_string(v)), value_(v) {}
ScrollRestoration::ScrollRestoration(Handle h) noexcept: emlite::Val(h) {
    value_ = ScrollRestoration::from_string(as<emlite::Uniq<char[]>>().get());
}

ScrollRestoration::ScrollRestoration(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = ScrollRestoration::from_string(as<emlite::Uniq<char[]>>().get());
}

ScrollRestoration ScrollRestoration::take_ownership(Handle h) noexcept { return ScrollRestoration(h); }
ScrollRestoration ScrollRestoration::clone() const noexcept { return *this; }
const char* ScrollRestoration::to_string(ScrollRestoration::Value value_) noexcept {
    switch (value_) {
        case AUTO_:
            return "auto";
        case MANUAL:
            return "manual";
        default:
            return "auto"; // fallback to first value
    }
}

NavigationHistoryBehavior::Value NavigationHistoryBehavior::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "auto", strlen("auto"))) {
        return AUTO_;
    }
    else if (__builtin_strncmp(str, "push", strlen("push"))) {
        return PUSH;
    }
    else if (__builtin_strncmp(str, "replace", strlen("replace"))) {
        return REPLACE;
    }
    else {
        // Default to first value for invalid input
        return AUTO_;
    }
}

NavigationHistoryBehavior::NavigationHistoryBehavior(Value v) noexcept : emlite::Val(NavigationHistoryBehavior::to_string(v)), value_(v) {}
NavigationHistoryBehavior::NavigationHistoryBehavior(Handle h) noexcept: emlite::Val(h) {
    value_ = NavigationHistoryBehavior::from_string(as<emlite::Uniq<char[]>>().get());
}

NavigationHistoryBehavior::NavigationHistoryBehavior(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = NavigationHistoryBehavior::from_string(as<emlite::Uniq<char[]>>().get());
}

NavigationHistoryBehavior NavigationHistoryBehavior::take_ownership(Handle h) noexcept { return NavigationHistoryBehavior(h); }
NavigationHistoryBehavior NavigationHistoryBehavior::clone() const noexcept { return *this; }
const char* NavigationHistoryBehavior::to_string(NavigationHistoryBehavior::Value value_) noexcept {
    switch (value_) {
        case AUTO_:
            return "auto";
        case PUSH:
            return "push";
        case REPLACE:
            return "replace";
        default:
            return "auto"; // fallback to first value
    }
}

NavigationType::Value NavigationType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "push", strlen("push"))) {
        return PUSH;
    }
    else if (__builtin_strncmp(str, "replace", strlen("replace"))) {
        return REPLACE;
    }
    else if (__builtin_strncmp(str, "reload", strlen("reload"))) {
        return RELOAD;
    }
    else if (__builtin_strncmp(str, "traverse", strlen("traverse"))) {
        return TRAVERSE;
    }
    else {
        // Default to first value for invalid input
        return PUSH;
    }
}

NavigationType::NavigationType(Value v) noexcept : emlite::Val(NavigationType::to_string(v)), value_(v) {}
NavigationType::NavigationType(Handle h) noexcept: emlite::Val(h) {
    value_ = NavigationType::from_string(as<emlite::Uniq<char[]>>().get());
}

NavigationType::NavigationType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = NavigationType::from_string(as<emlite::Uniq<char[]>>().get());
}

NavigationType NavigationType::take_ownership(Handle h) noexcept { return NavigationType(h); }
NavigationType NavigationType::clone() const noexcept { return *this; }
const char* NavigationType::to_string(NavigationType::Value value_) noexcept {
    switch (value_) {
        case PUSH:
            return "push";
        case REPLACE:
            return "replace";
        case RELOAD:
            return "reload";
        case TRAVERSE:
            return "traverse";
        default:
            return "push"; // fallback to first value
    }
}

NavigationFocusReset::Value NavigationFocusReset::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "after-transition", strlen("after-transition"))) {
        return AFTER_TRANSITION;
    }
    else if (__builtin_strncmp(str, "manual", strlen("manual"))) {
        return MANUAL;
    }
    else {
        // Default to first value for invalid input
        return AFTER_TRANSITION;
    }
}

NavigationFocusReset::NavigationFocusReset(Value v) noexcept : emlite::Val(NavigationFocusReset::to_string(v)), value_(v) {}
NavigationFocusReset::NavigationFocusReset(Handle h) noexcept: emlite::Val(h) {
    value_ = NavigationFocusReset::from_string(as<emlite::Uniq<char[]>>().get());
}

NavigationFocusReset::NavigationFocusReset(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = NavigationFocusReset::from_string(as<emlite::Uniq<char[]>>().get());
}

NavigationFocusReset NavigationFocusReset::take_ownership(Handle h) noexcept { return NavigationFocusReset(h); }
NavigationFocusReset NavigationFocusReset::clone() const noexcept { return *this; }
const char* NavigationFocusReset::to_string(NavigationFocusReset::Value value_) noexcept {
    switch (value_) {
        case AFTER_TRANSITION:
            return "after-transition";
        case MANUAL:
            return "manual";
        default:
            return "after-transition"; // fallback to first value
    }
}

NavigationScrollBehavior::Value NavigationScrollBehavior::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "after-transition", strlen("after-transition"))) {
        return AFTER_TRANSITION;
    }
    else if (__builtin_strncmp(str, "manual", strlen("manual"))) {
        return MANUAL;
    }
    else {
        // Default to first value for invalid input
        return AFTER_TRANSITION;
    }
}

NavigationScrollBehavior::NavigationScrollBehavior(Value v) noexcept : emlite::Val(NavigationScrollBehavior::to_string(v)), value_(v) {}
NavigationScrollBehavior::NavigationScrollBehavior(Handle h) noexcept: emlite::Val(h) {
    value_ = NavigationScrollBehavior::from_string(as<emlite::Uniq<char[]>>().get());
}

NavigationScrollBehavior::NavigationScrollBehavior(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = NavigationScrollBehavior::from_string(as<emlite::Uniq<char[]>>().get());
}

NavigationScrollBehavior NavigationScrollBehavior::take_ownership(Handle h) noexcept { return NavigationScrollBehavior(h); }
NavigationScrollBehavior NavigationScrollBehavior::clone() const noexcept { return *this; }
const char* NavigationScrollBehavior::to_string(NavigationScrollBehavior::Value value_) noexcept {
    switch (value_) {
        case AFTER_TRANSITION:
            return "after-transition";
        case MANUAL:
            return "manual";
        default:
            return "after-transition"; // fallback to first value
    }
}

DOMParserSupportedType::Value DOMParserSupportedType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "text/html", strlen("text/html"))) {
        return TEXT_HTML;
    }
    else if (__builtin_strncmp(str, "text/xml", strlen("text/xml"))) {
        return TEXT_XML;
    }
    else if (__builtin_strncmp(str, "application/xml", strlen("application/xml"))) {
        return APPLICATION_XML;
    }
    else if (__builtin_strncmp(str, "application/xhtml+xml", strlen("application/xhtml+xml"))) {
        return APPLICATION_XHTML_XML;
    }
    else if (__builtin_strncmp(str, "image/svg+xml", strlen("image/svg+xml"))) {
        return IMAGE_SVG_XML;
    }
    else {
        // Default to first value for invalid input
        return TEXT_HTML;
    }
}

DOMParserSupportedType::DOMParserSupportedType(Value v) noexcept : emlite::Val(DOMParserSupportedType::to_string(v)), value_(v) {}
DOMParserSupportedType::DOMParserSupportedType(Handle h) noexcept: emlite::Val(h) {
    value_ = DOMParserSupportedType::from_string(as<emlite::Uniq<char[]>>().get());
}

DOMParserSupportedType::DOMParserSupportedType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = DOMParserSupportedType::from_string(as<emlite::Uniq<char[]>>().get());
}

DOMParserSupportedType DOMParserSupportedType::take_ownership(Handle h) noexcept { return DOMParserSupportedType(h); }
DOMParserSupportedType DOMParserSupportedType::clone() const noexcept { return *this; }
const char* DOMParserSupportedType::to_string(DOMParserSupportedType::Value value_) noexcept {
    switch (value_) {
        case TEXT_HTML:
            return "text/html";
        case TEXT_XML:
            return "text/xml";
        case APPLICATION_XML:
            return "application/xml";
        case APPLICATION_XHTML_XML:
            return "application/xhtml+xml";
        case IMAGE_SVG_XML:
            return "image/svg+xml";
        default:
            return "text/html"; // fallback to first value
    }
}

ImageDataPixelFormat::Value ImageDataPixelFormat::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "rgba-unorm8", strlen("rgba-unorm8"))) {
        return RGBA_UNORM8;
    }
    else if (__builtin_strncmp(str, "rgba-float16", strlen("rgba-float16"))) {
        return RGBA_FLOAT16;
    }
    else {
        // Default to first value for invalid input
        return RGBA_UNORM8;
    }
}

ImageDataPixelFormat::ImageDataPixelFormat(Value v) noexcept : emlite::Val(ImageDataPixelFormat::to_string(v)), value_(v) {}
ImageDataPixelFormat::ImageDataPixelFormat(Handle h) noexcept: emlite::Val(h) {
    value_ = ImageDataPixelFormat::from_string(as<emlite::Uniq<char[]>>().get());
}

ImageDataPixelFormat::ImageDataPixelFormat(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = ImageDataPixelFormat::from_string(as<emlite::Uniq<char[]>>().get());
}

ImageDataPixelFormat ImageDataPixelFormat::take_ownership(Handle h) noexcept { return ImageDataPixelFormat(h); }
ImageDataPixelFormat ImageDataPixelFormat::clone() const noexcept { return *this; }
const char* ImageDataPixelFormat::to_string(ImageDataPixelFormat::Value value_) noexcept {
    switch (value_) {
        case RGBA_UNORM8:
            return "rgba-unorm8";
        case RGBA_FLOAT16:
            return "rgba-float16";
        default:
            return "rgba-unorm8"; // fallback to first value
    }
}

ImageOrientation::Value ImageOrientation::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "from-image", strlen("from-image"))) {
        return FROM_IMAGE;
    }
    else if (__builtin_strncmp(str, "flipY", strlen("flipY"))) {
        return FLIPY;
    }
    else {
        // Default to first value for invalid input
        return FROM_IMAGE;
    }
}

ImageOrientation::ImageOrientation(Value v) noexcept : emlite::Val(ImageOrientation::to_string(v)), value_(v) {}
ImageOrientation::ImageOrientation(Handle h) noexcept: emlite::Val(h) {
    value_ = ImageOrientation::from_string(as<emlite::Uniq<char[]>>().get());
}

ImageOrientation::ImageOrientation(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = ImageOrientation::from_string(as<emlite::Uniq<char[]>>().get());
}

ImageOrientation ImageOrientation::take_ownership(Handle h) noexcept { return ImageOrientation(h); }
ImageOrientation ImageOrientation::clone() const noexcept { return *this; }
const char* ImageOrientation::to_string(ImageOrientation::Value value_) noexcept {
    switch (value_) {
        case FROM_IMAGE:
            return "from-image";
        case FLIPY:
            return "flipY";
        default:
            return "from-image"; // fallback to first value
    }
}

PremultiplyAlpha::Value PremultiplyAlpha::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "none", strlen("none"))) {
        return NONE;
    }
    else if (__builtin_strncmp(str, "premultiply", strlen("premultiply"))) {
        return PREMULTIPLY;
    }
    else if (__builtin_strncmp(str, "default", strlen("default"))) {
        return DEFAULT_;
    }
    else {
        // Default to first value for invalid input
        return NONE;
    }
}

PremultiplyAlpha::PremultiplyAlpha(Value v) noexcept : emlite::Val(PremultiplyAlpha::to_string(v)), value_(v) {}
PremultiplyAlpha::PremultiplyAlpha(Handle h) noexcept: emlite::Val(h) {
    value_ = PremultiplyAlpha::from_string(as<emlite::Uniq<char[]>>().get());
}

PremultiplyAlpha::PremultiplyAlpha(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = PremultiplyAlpha::from_string(as<emlite::Uniq<char[]>>().get());
}

PremultiplyAlpha PremultiplyAlpha::take_ownership(Handle h) noexcept { return PremultiplyAlpha(h); }
PremultiplyAlpha PremultiplyAlpha::clone() const noexcept { return *this; }
const char* PremultiplyAlpha::to_string(PremultiplyAlpha::Value value_) noexcept {
    switch (value_) {
        case NONE:
            return "none";
        case PREMULTIPLY:
            return "premultiply";
        case DEFAULT_:
            return "default";
        default:
            return "none"; // fallback to first value
    }
}

ColorSpaceConversion::Value ColorSpaceConversion::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "none", strlen("none"))) {
        return NONE;
    }
    else if (__builtin_strncmp(str, "default", strlen("default"))) {
        return DEFAULT_;
    }
    else {
        // Default to first value for invalid input
        return NONE;
    }
}

ColorSpaceConversion::ColorSpaceConversion(Value v) noexcept : emlite::Val(ColorSpaceConversion::to_string(v)), value_(v) {}
ColorSpaceConversion::ColorSpaceConversion(Handle h) noexcept: emlite::Val(h) {
    value_ = ColorSpaceConversion::from_string(as<emlite::Uniq<char[]>>().get());
}

ColorSpaceConversion::ColorSpaceConversion(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = ColorSpaceConversion::from_string(as<emlite::Uniq<char[]>>().get());
}

ColorSpaceConversion ColorSpaceConversion::take_ownership(Handle h) noexcept { return ColorSpaceConversion(h); }
ColorSpaceConversion ColorSpaceConversion::clone() const noexcept { return *this; }
const char* ColorSpaceConversion::to_string(ColorSpaceConversion::Value value_) noexcept {
    switch (value_) {
        case NONE:
            return "none";
        case DEFAULT_:
            return "default";
        default:
            return "none"; // fallback to first value
    }
}

ResizeQuality::Value ResizeQuality::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "pixelated", strlen("pixelated"))) {
        return PIXELATED;
    }
    else if (__builtin_strncmp(str, "low", strlen("low"))) {
        return LOW;
    }
    else if (__builtin_strncmp(str, "medium", strlen("medium"))) {
        return MEDIUM;
    }
    else if (__builtin_strncmp(str, "high", strlen("high"))) {
        return HIGH;
    }
    else {
        // Default to first value for invalid input
        return PIXELATED;
    }
}

ResizeQuality::ResizeQuality(Value v) noexcept : emlite::Val(ResizeQuality::to_string(v)), value_(v) {}
ResizeQuality::ResizeQuality(Handle h) noexcept: emlite::Val(h) {
    value_ = ResizeQuality::from_string(as<emlite::Uniq<char[]>>().get());
}

ResizeQuality::ResizeQuality(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = ResizeQuality::from_string(as<emlite::Uniq<char[]>>().get());
}

ResizeQuality ResizeQuality::take_ownership(Handle h) noexcept { return ResizeQuality(h); }
ResizeQuality ResizeQuality::clone() const noexcept { return *this; }
const char* ResizeQuality::to_string(ResizeQuality::Value value_) noexcept {
    switch (value_) {
        case PIXELATED:
            return "pixelated";
        case LOW:
            return "low";
        case MEDIUM:
            return "medium";
        case HIGH:
            return "high";
        default:
            return "pixelated"; // fallback to first value
    }
}

WorkerType::Value WorkerType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "classic", strlen("classic"))) {
        return CLASSIC;
    }
    else if (__builtin_strncmp(str, "module", strlen("module"))) {
        return MODULE_;
    }
    else {
        // Default to first value for invalid input
        return CLASSIC;
    }
}

WorkerType::WorkerType(Value v) noexcept : emlite::Val(WorkerType::to_string(v)), value_(v) {}
WorkerType::WorkerType(Handle h) noexcept: emlite::Val(h) {
    value_ = WorkerType::from_string(as<emlite::Uniq<char[]>>().get());
}

WorkerType::WorkerType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = WorkerType::from_string(as<emlite::Uniq<char[]>>().get());
}

WorkerType WorkerType::take_ownership(Handle h) noexcept { return WorkerType(h); }
WorkerType WorkerType::clone() const noexcept { return *this; }
const char* WorkerType::to_string(WorkerType::Value value_) noexcept {
    switch (value_) {
        case CLASSIC:
            return "classic";
        case MODULE_:
            return "module";
        default:
            return "classic"; // fallback to first value
    }
}

UserIdleState::Value UserIdleState::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "active", strlen("active"))) {
        return ACTIVE;
    }
    else if (__builtin_strncmp(str, "idle", strlen("idle"))) {
        return IDLE;
    }
    else {
        // Default to first value for invalid input
        return ACTIVE;
    }
}

UserIdleState::UserIdleState(Value v) noexcept : emlite::Val(UserIdleState::to_string(v)), value_(v) {}
UserIdleState::UserIdleState(Handle h) noexcept: emlite::Val(h) {
    value_ = UserIdleState::from_string(as<emlite::Uniq<char[]>>().get());
}

UserIdleState::UserIdleState(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = UserIdleState::from_string(as<emlite::Uniq<char[]>>().get());
}

UserIdleState UserIdleState::take_ownership(Handle h) noexcept { return UserIdleState(h); }
UserIdleState UserIdleState::clone() const noexcept { return *this; }
const char* UserIdleState::to_string(UserIdleState::Value value_) noexcept {
    switch (value_) {
        case ACTIVE:
            return "active";
        case IDLE:
            return "idle";
        default:
            return "active"; // fallback to first value
    }
}

ScreenIdleState::Value ScreenIdleState::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "locked", strlen("locked"))) {
        return LOCKED;
    }
    else if (__builtin_strncmp(str, "unlocked", strlen("unlocked"))) {
        return UNLOCKED;
    }
    else {
        // Default to first value for invalid input
        return LOCKED;
    }
}

ScreenIdleState::ScreenIdleState(Value v) noexcept : emlite::Val(ScreenIdleState::to_string(v)), value_(v) {}
ScreenIdleState::ScreenIdleState(Handle h) noexcept: emlite::Val(h) {
    value_ = ScreenIdleState::from_string(as<emlite::Uniq<char[]>>().get());
}

ScreenIdleState::ScreenIdleState(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = ScreenIdleState::from_string(as<emlite::Uniq<char[]>>().get());
}

ScreenIdleState ScreenIdleState::take_ownership(Handle h) noexcept { return ScreenIdleState(h); }
ScreenIdleState ScreenIdleState::clone() const noexcept { return *this; }
const char* ScreenIdleState::to_string(ScreenIdleState::Value value_) noexcept {
    switch (value_) {
        case LOCKED:
            return "locked";
        case UNLOCKED:
            return "unlocked";
        default:
            return "locked"; // fallback to first value
    }
}

RedEyeReduction::Value RedEyeReduction::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "never", strlen("never"))) {
        return NEVER;
    }
    else if (__builtin_strncmp(str, "always", strlen("always"))) {
        return ALWAYS;
    }
    else if (__builtin_strncmp(str, "controllable", strlen("controllable"))) {
        return CONTROLLABLE;
    }
    else {
        // Default to first value for invalid input
        return NEVER;
    }
}

RedEyeReduction::RedEyeReduction(Value v) noexcept : emlite::Val(RedEyeReduction::to_string(v)), value_(v) {}
RedEyeReduction::RedEyeReduction(Handle h) noexcept: emlite::Val(h) {
    value_ = RedEyeReduction::from_string(as<emlite::Uniq<char[]>>().get());
}

RedEyeReduction::RedEyeReduction(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RedEyeReduction::from_string(as<emlite::Uniq<char[]>>().get());
}

RedEyeReduction RedEyeReduction::take_ownership(Handle h) noexcept { return RedEyeReduction(h); }
RedEyeReduction RedEyeReduction::clone() const noexcept { return *this; }
const char* RedEyeReduction::to_string(RedEyeReduction::Value value_) noexcept {
    switch (value_) {
        case NEVER:
            return "never";
        case ALWAYS:
            return "always";
        case CONTROLLABLE:
            return "controllable";
        default:
            return "never"; // fallback to first value
    }
}

FillLightMode::Value FillLightMode::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "auto", strlen("auto"))) {
        return AUTO_;
    }
    else if (__builtin_strncmp(str, "off", strlen("off"))) {
        return OFF;
    }
    else if (__builtin_strncmp(str, "flash", strlen("flash"))) {
        return FLASH;
    }
    else {
        // Default to first value for invalid input
        return AUTO_;
    }
}

FillLightMode::FillLightMode(Value v) noexcept : emlite::Val(FillLightMode::to_string(v)), value_(v) {}
FillLightMode::FillLightMode(Handle h) noexcept: emlite::Val(h) {
    value_ = FillLightMode::from_string(as<emlite::Uniq<char[]>>().get());
}

FillLightMode::FillLightMode(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = FillLightMode::from_string(as<emlite::Uniq<char[]>>().get());
}

FillLightMode FillLightMode::take_ownership(Handle h) noexcept { return FillLightMode(h); }
FillLightMode FillLightMode::clone() const noexcept { return *this; }
const char* FillLightMode::to_string(FillLightMode::Value value_) noexcept {
    switch (value_) {
        case AUTO_:
            return "auto";
        case OFF:
            return "off";
        case FLASH:
            return "flash";
        default:
            return "auto"; // fallback to first value
    }
}

MeteringMode::Value MeteringMode::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "none", strlen("none"))) {
        return NONE;
    }
    else if (__builtin_strncmp(str, "manual", strlen("manual"))) {
        return MANUAL;
    }
    else if (__builtin_strncmp(str, "single-shot", strlen("single-shot"))) {
        return SINGLE_SHOT;
    }
    else if (__builtin_strncmp(str, "continuous", strlen("continuous"))) {
        return CONTINUOUS;
    }
    else {
        // Default to first value for invalid input
        return NONE;
    }
}

MeteringMode::MeteringMode(Value v) noexcept : emlite::Val(MeteringMode::to_string(v)), value_(v) {}
MeteringMode::MeteringMode(Handle h) noexcept: emlite::Val(h) {
    value_ = MeteringMode::from_string(as<emlite::Uniq<char[]>>().get());
}

MeteringMode::MeteringMode(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = MeteringMode::from_string(as<emlite::Uniq<char[]>>().get());
}

MeteringMode MeteringMode::take_ownership(Handle h) noexcept { return MeteringMode(h); }
MeteringMode MeteringMode::clone() const noexcept { return *this; }
const char* MeteringMode::to_string(MeteringMode::Value value_) noexcept {
    switch (value_) {
        case NONE:
            return "none";
        case MANUAL:
            return "manual";
        case SINGLE_SHOT:
            return "single-shot";
        case CONTINUOUS:
            return "continuous";
        default:
            return "none"; // fallback to first value
    }
}

LoginStatus::Value LoginStatus::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "logged-in", strlen("logged-in"))) {
        return LOGGED_IN;
    }
    else if (__builtin_strncmp(str, "logged-out", strlen("logged-out"))) {
        return LOGGED_OUT;
    }
    else {
        // Default to first value for invalid input
        return LOGGED_IN;
    }
}

LoginStatus::LoginStatus(Value v) noexcept : emlite::Val(LoginStatus::to_string(v)), value_(v) {}
LoginStatus::LoginStatus(Handle h) noexcept: emlite::Val(h) {
    value_ = LoginStatus::from_string(as<emlite::Uniq<char[]>>().get());
}

LoginStatus::LoginStatus(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = LoginStatus::from_string(as<emlite::Uniq<char[]>>().get());
}

LoginStatus LoginStatus::take_ownership(Handle h) noexcept { return LoginStatus(h); }
LoginStatus LoginStatus::clone() const noexcept { return *this; }
const char* LoginStatus::to_string(LoginStatus::Value value_) noexcept {
    switch (value_) {
        case LOGGED_IN:
            return "logged-in";
        case LOGGED_OUT:
            return "logged-out";
        default:
            return "logged-in"; // fallback to first value
    }
}

ScriptInvokerType::Value ScriptInvokerType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "classic-script", strlen("classic-script"))) {
        return CLASSIC_SCRIPT;
    }
    else if (__builtin_strncmp(str, "module-script", strlen("module-script"))) {
        return MODULE_SCRIPT;
    }
    else if (__builtin_strncmp(str, "event-listener", strlen("event-listener"))) {
        return EVENT_LISTENER;
    }
    else if (__builtin_strncmp(str, "user-callback", strlen("user-callback"))) {
        return USER_CALLBACK;
    }
    else if (__builtin_strncmp(str, "resolve-promise", strlen("resolve-promise"))) {
        return RESOLVE_PROMISE;
    }
    else if (__builtin_strncmp(str, "reject-promise", strlen("reject-promise"))) {
        return REJECT_PROMISE;
    }
    else {
        // Default to first value for invalid input
        return CLASSIC_SCRIPT;
    }
}

ScriptInvokerType::ScriptInvokerType(Value v) noexcept : emlite::Val(ScriptInvokerType::to_string(v)), value_(v) {}
ScriptInvokerType::ScriptInvokerType(Handle h) noexcept: emlite::Val(h) {
    value_ = ScriptInvokerType::from_string(as<emlite::Uniq<char[]>>().get());
}

ScriptInvokerType::ScriptInvokerType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = ScriptInvokerType::from_string(as<emlite::Uniq<char[]>>().get());
}

ScriptInvokerType ScriptInvokerType::take_ownership(Handle h) noexcept { return ScriptInvokerType(h); }
ScriptInvokerType ScriptInvokerType::clone() const noexcept { return *this; }
const char* ScriptInvokerType::to_string(ScriptInvokerType::Value value_) noexcept {
    switch (value_) {
        case CLASSIC_SCRIPT:
            return "classic-script";
        case MODULE_SCRIPT:
            return "module-script";
        case EVENT_LISTENER:
            return "event-listener";
        case USER_CALLBACK:
            return "user-callback";
        case RESOLVE_PROMISE:
            return "resolve-promise";
        case REJECT_PROMISE:
            return "reject-promise";
        default:
            return "classic-script"; // fallback to first value
    }
}

ScriptWindowAttribution::Value ScriptWindowAttribution::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "self", strlen("self"))) {
        return SELF;
    }
    else if (__builtin_strncmp(str, "descendant", strlen("descendant"))) {
        return DESCENDANT;
    }
    else if (__builtin_strncmp(str, "ancestor", strlen("ancestor"))) {
        return ANCESTOR;
    }
    else if (__builtin_strncmp(str, "same-page", strlen("same-page"))) {
        return SAME_PAGE;
    }
    else if (__builtin_strncmp(str, "other", strlen("other"))) {
        return OTHER;
    }
    else {
        // Default to first value for invalid input
        return SELF;
    }
}

ScriptWindowAttribution::ScriptWindowAttribution(Value v) noexcept : emlite::Val(ScriptWindowAttribution::to_string(v)), value_(v) {}
ScriptWindowAttribution::ScriptWindowAttribution(Handle h) noexcept: emlite::Val(h) {
    value_ = ScriptWindowAttribution::from_string(as<emlite::Uniq<char[]>>().get());
}

ScriptWindowAttribution::ScriptWindowAttribution(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = ScriptWindowAttribution::from_string(as<emlite::Uniq<char[]>>().get());
}

ScriptWindowAttribution ScriptWindowAttribution::take_ownership(Handle h) noexcept { return ScriptWindowAttribution(h); }
ScriptWindowAttribution ScriptWindowAttribution::clone() const noexcept { return *this; }
const char* ScriptWindowAttribution::to_string(ScriptWindowAttribution::Value value_) noexcept {
    switch (value_) {
        case SELF:
            return "self";
        case DESCENDANT:
            return "descendant";
        case ANCESTOR:
            return "ancestor";
        case SAME_PAGE:
            return "same-page";
        case OTHER:
            return "other";
        default:
            return "self"; // fallback to first value
    }
}

MagnetometerLocalCoordinateSystem::Value MagnetometerLocalCoordinateSystem::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "device", strlen("device"))) {
        return DEVICE;
    }
    else if (__builtin_strncmp(str, "screen", strlen("screen"))) {
        return SCREEN;
    }
    else {
        // Default to first value for invalid input
        return DEVICE;
    }
}

MagnetometerLocalCoordinateSystem::MagnetometerLocalCoordinateSystem(Value v) noexcept : emlite::Val(MagnetometerLocalCoordinateSystem::to_string(v)), value_(v) {}
MagnetometerLocalCoordinateSystem::MagnetometerLocalCoordinateSystem(Handle h) noexcept: emlite::Val(h) {
    value_ = MagnetometerLocalCoordinateSystem::from_string(as<emlite::Uniq<char[]>>().get());
}

MagnetometerLocalCoordinateSystem::MagnetometerLocalCoordinateSystem(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = MagnetometerLocalCoordinateSystem::from_string(as<emlite::Uniq<char[]>>().get());
}

MagnetometerLocalCoordinateSystem MagnetometerLocalCoordinateSystem::take_ownership(Handle h) noexcept { return MagnetometerLocalCoordinateSystem(h); }
MagnetometerLocalCoordinateSystem MagnetometerLocalCoordinateSystem::clone() const noexcept { return *this; }
const char* MagnetometerLocalCoordinateSystem::to_string(MagnetometerLocalCoordinateSystem::Value value_) noexcept {
    switch (value_) {
        case DEVICE:
            return "device";
        case SCREEN:
            return "screen";
        default:
            return "device"; // fallback to first value
    }
}

AppBannerPromptOutcome::Value AppBannerPromptOutcome::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "accepted", strlen("accepted"))) {
        return ACCEPTED;
    }
    else if (__builtin_strncmp(str, "dismissed", strlen("dismissed"))) {
        return DISMISSED;
    }
    else {
        // Default to first value for invalid input
        return ACCEPTED;
    }
}

AppBannerPromptOutcome::AppBannerPromptOutcome(Value v) noexcept : emlite::Val(AppBannerPromptOutcome::to_string(v)), value_(v) {}
AppBannerPromptOutcome::AppBannerPromptOutcome(Handle h) noexcept: emlite::Val(h) {
    value_ = AppBannerPromptOutcome::from_string(as<emlite::Uniq<char[]>>().get());
}

AppBannerPromptOutcome::AppBannerPromptOutcome(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = AppBannerPromptOutcome::from_string(as<emlite::Uniq<char[]>>().get());
}

AppBannerPromptOutcome AppBannerPromptOutcome::take_ownership(Handle h) noexcept { return AppBannerPromptOutcome(h); }
AppBannerPromptOutcome AppBannerPromptOutcome::clone() const noexcept { return *this; }
const char* AppBannerPromptOutcome::to_string(AppBannerPromptOutcome::Value value_) noexcept {
    switch (value_) {
        case ACCEPTED:
            return "accepted";
        case DISMISSED:
            return "dismissed";
        default:
            return "accepted"; // fallback to first value
    }
}

MediaDecodingType::Value MediaDecodingType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "file", strlen("file"))) {
        return FILE;
    }
    else if (__builtin_strncmp(str, "media-source", strlen("media-source"))) {
        return MEDIA_SOURCE;
    }
    else if (__builtin_strncmp(str, "webrtc", strlen("webrtc"))) {
        return WEBRTC;
    }
    else {
        // Default to first value for invalid input
        return FILE;
    }
}

MediaDecodingType::MediaDecodingType(Value v) noexcept : emlite::Val(MediaDecodingType::to_string(v)), value_(v) {}
MediaDecodingType::MediaDecodingType(Handle h) noexcept: emlite::Val(h) {
    value_ = MediaDecodingType::from_string(as<emlite::Uniq<char[]>>().get());
}

MediaDecodingType::MediaDecodingType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = MediaDecodingType::from_string(as<emlite::Uniq<char[]>>().get());
}

MediaDecodingType MediaDecodingType::take_ownership(Handle h) noexcept { return MediaDecodingType(h); }
MediaDecodingType MediaDecodingType::clone() const noexcept { return *this; }
const char* MediaDecodingType::to_string(MediaDecodingType::Value value_) noexcept {
    switch (value_) {
        case FILE:
            return "file";
        case MEDIA_SOURCE:
            return "media-source";
        case WEBRTC:
            return "webrtc";
        default:
            return "file"; // fallback to first value
    }
}

MediaEncodingType::Value MediaEncodingType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "record", strlen("record"))) {
        return RECORD;
    }
    else if (__builtin_strncmp(str, "webrtc", strlen("webrtc"))) {
        return WEBRTC;
    }
    else {
        // Default to first value for invalid input
        return RECORD;
    }
}

MediaEncodingType::MediaEncodingType(Value v) noexcept : emlite::Val(MediaEncodingType::to_string(v)), value_(v) {}
MediaEncodingType::MediaEncodingType(Handle h) noexcept: emlite::Val(h) {
    value_ = MediaEncodingType::from_string(as<emlite::Uniq<char[]>>().get());
}

MediaEncodingType::MediaEncodingType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = MediaEncodingType::from_string(as<emlite::Uniq<char[]>>().get());
}

MediaEncodingType MediaEncodingType::take_ownership(Handle h) noexcept { return MediaEncodingType(h); }
MediaEncodingType MediaEncodingType::clone() const noexcept { return *this; }
const char* MediaEncodingType::to_string(MediaEncodingType::Value value_) noexcept {
    switch (value_) {
        case RECORD:
            return "record";
        case WEBRTC:
            return "webrtc";
        default:
            return "record"; // fallback to first value
    }
}

HdrMetadataType::Value HdrMetadataType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "smpteSt2086", strlen("smpteSt2086"))) {
        return SMPTEST2086;
    }
    else if (__builtin_strncmp(str, "smpteSt2094-10", strlen("smpteSt2094-10"))) {
        return SMPTEST2094_10;
    }
    else if (__builtin_strncmp(str, "smpteSt2094-40", strlen("smpteSt2094-40"))) {
        return SMPTEST2094_40;
    }
    else {
        // Default to first value for invalid input
        return SMPTEST2086;
    }
}

HdrMetadataType::HdrMetadataType(Value v) noexcept : emlite::Val(HdrMetadataType::to_string(v)), value_(v) {}
HdrMetadataType::HdrMetadataType(Handle h) noexcept: emlite::Val(h) {
    value_ = HdrMetadataType::from_string(as<emlite::Uniq<char[]>>().get());
}

HdrMetadataType::HdrMetadataType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = HdrMetadataType::from_string(as<emlite::Uniq<char[]>>().get());
}

HdrMetadataType HdrMetadataType::take_ownership(Handle h) noexcept { return HdrMetadataType(h); }
HdrMetadataType HdrMetadataType::clone() const noexcept { return *this; }
const char* HdrMetadataType::to_string(HdrMetadataType::Value value_) noexcept {
    switch (value_) {
        case SMPTEST2086:
            return "smpteSt2086";
        case SMPTEST2094_10:
            return "smpteSt2094-10";
        case SMPTEST2094_40:
            return "smpteSt2094-40";
        default:
            return "smpteSt2086"; // fallback to first value
    }
}

ColorGamut::Value ColorGamut::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "srgb", strlen("srgb"))) {
        return SRGB;
    }
    else if (__builtin_strncmp(str, "p3", strlen("p3"))) {
        return P3;
    }
    else if (__builtin_strncmp(str, "rec2020", strlen("rec2020"))) {
        return REC2020;
    }
    else {
        // Default to first value for invalid input
        return SRGB;
    }
}

ColorGamut::ColorGamut(Value v) noexcept : emlite::Val(ColorGamut::to_string(v)), value_(v) {}
ColorGamut::ColorGamut(Handle h) noexcept: emlite::Val(h) {
    value_ = ColorGamut::from_string(as<emlite::Uniq<char[]>>().get());
}

ColorGamut::ColorGamut(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = ColorGamut::from_string(as<emlite::Uniq<char[]>>().get());
}

ColorGamut ColorGamut::take_ownership(Handle h) noexcept { return ColorGamut(h); }
ColorGamut ColorGamut::clone() const noexcept { return *this; }
const char* ColorGamut::to_string(ColorGamut::Value value_) noexcept {
    switch (value_) {
        case SRGB:
            return "srgb";
        case P3:
            return "p3";
        case REC2020:
            return "rec2020";
        default:
            return "srgb"; // fallback to first value
    }
}

TransferFunction::Value TransferFunction::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "srgb", strlen("srgb"))) {
        return SRGB;
    }
    else if (__builtin_strncmp(str, "pq", strlen("pq"))) {
        return PQ;
    }
    else if (__builtin_strncmp(str, "hlg", strlen("hlg"))) {
        return HLG;
    }
    else {
        // Default to first value for invalid input
        return SRGB;
    }
}

TransferFunction::TransferFunction(Value v) noexcept : emlite::Val(TransferFunction::to_string(v)), value_(v) {}
TransferFunction::TransferFunction(Handle h) noexcept: emlite::Val(h) {
    value_ = TransferFunction::from_string(as<emlite::Uniq<char[]>>().get());
}

TransferFunction::TransferFunction(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = TransferFunction::from_string(as<emlite::Uniq<char[]>>().get());
}

TransferFunction TransferFunction::take_ownership(Handle h) noexcept { return TransferFunction(h); }
TransferFunction TransferFunction::clone() const noexcept { return *this; }
const char* TransferFunction::to_string(TransferFunction::Value value_) noexcept {
    switch (value_) {
        case SRGB:
            return "srgb";
        case PQ:
            return "pq";
        case HLG:
            return "hlg";
        default:
            return "srgb"; // fallback to first value
    }
}

ReadyState::Value ReadyState::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "closed", strlen("closed"))) {
        return CLOSED;
    }
    else if (__builtin_strncmp(str, "open", strlen("open"))) {
        return OPEN;
    }
    else if (__builtin_strncmp(str, "ended", strlen("ended"))) {
        return ENDED;
    }
    else {
        // Default to first value for invalid input
        return CLOSED;
    }
}

ReadyState::ReadyState(Value v) noexcept : emlite::Val(ReadyState::to_string(v)), value_(v) {}
ReadyState::ReadyState(Handle h) noexcept: emlite::Val(h) {
    value_ = ReadyState::from_string(as<emlite::Uniq<char[]>>().get());
}

ReadyState::ReadyState(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = ReadyState::from_string(as<emlite::Uniq<char[]>>().get());
}

ReadyState ReadyState::take_ownership(Handle h) noexcept { return ReadyState(h); }
ReadyState ReadyState::clone() const noexcept { return *this; }
const char* ReadyState::to_string(ReadyState::Value value_) noexcept {
    switch (value_) {
        case CLOSED:
            return "closed";
        case OPEN:
            return "open";
        case ENDED:
            return "ended";
        default:
            return "closed"; // fallback to first value
    }
}

EndOfStreamError::Value EndOfStreamError::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "network", strlen("network"))) {
        return NETWORK;
    }
    else if (__builtin_strncmp(str, "decode", strlen("decode"))) {
        return DECODE;
    }
    else {
        // Default to first value for invalid input
        return NETWORK;
    }
}

EndOfStreamError::EndOfStreamError(Value v) noexcept : emlite::Val(EndOfStreamError::to_string(v)), value_(v) {}
EndOfStreamError::EndOfStreamError(Handle h) noexcept: emlite::Val(h) {
    value_ = EndOfStreamError::from_string(as<emlite::Uniq<char[]>>().get());
}

EndOfStreamError::EndOfStreamError(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = EndOfStreamError::from_string(as<emlite::Uniq<char[]>>().get());
}

EndOfStreamError EndOfStreamError::take_ownership(Handle h) noexcept { return EndOfStreamError(h); }
EndOfStreamError EndOfStreamError::clone() const noexcept { return *this; }
const char* EndOfStreamError::to_string(EndOfStreamError::Value value_) noexcept {
    switch (value_) {
        case NETWORK:
            return "network";
        case DECODE:
            return "decode";
        default:
            return "network"; // fallback to first value
    }
}

AppendMode::Value AppendMode::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "segments", strlen("segments"))) {
        return SEGMENTS;
    }
    else if (__builtin_strncmp(str, "sequence", strlen("sequence"))) {
        return SEQUENCE;
    }
    else {
        // Default to first value for invalid input
        return SEGMENTS;
    }
}

AppendMode::AppendMode(Value v) noexcept : emlite::Val(AppendMode::to_string(v)), value_(v) {}
AppendMode::AppendMode(Handle h) noexcept: emlite::Val(h) {
    value_ = AppendMode::from_string(as<emlite::Uniq<char[]>>().get());
}

AppendMode::AppendMode(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = AppendMode::from_string(as<emlite::Uniq<char[]>>().get());
}

AppendMode AppendMode::take_ownership(Handle h) noexcept { return AppendMode(h); }
AppendMode AppendMode::clone() const noexcept { return *this; }
const char* AppendMode::to_string(AppendMode::Value value_) noexcept {
    switch (value_) {
        case SEGMENTS:
            return "segments";
        case SEQUENCE:
            return "sequence";
        default:
            return "segments"; // fallback to first value
    }
}

MockCapturePromptResult::Value MockCapturePromptResult::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "granted", strlen("granted"))) {
        return GRANTED;
    }
    else if (__builtin_strncmp(str, "denied", strlen("denied"))) {
        return DENIED;
    }
    else {
        // Default to first value for invalid input
        return GRANTED;
    }
}

MockCapturePromptResult::MockCapturePromptResult(Value v) noexcept : emlite::Val(MockCapturePromptResult::to_string(v)), value_(v) {}
MockCapturePromptResult::MockCapturePromptResult(Handle h) noexcept: emlite::Val(h) {
    value_ = MockCapturePromptResult::from_string(as<emlite::Uniq<char[]>>().get());
}

MockCapturePromptResult::MockCapturePromptResult(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = MockCapturePromptResult::from_string(as<emlite::Uniq<char[]>>().get());
}

MockCapturePromptResult MockCapturePromptResult::take_ownership(Handle h) noexcept { return MockCapturePromptResult(h); }
MockCapturePromptResult MockCapturePromptResult::clone() const noexcept { return *this; }
const char* MockCapturePromptResult::to_string(MockCapturePromptResult::Value value_) noexcept {
    switch (value_) {
        case GRANTED:
            return "granted";
        case DENIED:
            return "denied";
        default:
            return "granted"; // fallback to first value
    }
}

CaptureAction::Value CaptureAction::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "next", strlen("next"))) {
        return NEXT;
    }
    else if (__builtin_strncmp(str, "previous", strlen("previous"))) {
        return PREVIOUS;
    }
    else if (__builtin_strncmp(str, "first", strlen("first"))) {
        return FIRST;
    }
    else if (__builtin_strncmp(str, "last", strlen("last"))) {
        return LAST;
    }
    else {
        // Default to first value for invalid input
        return NEXT;
    }
}

CaptureAction::CaptureAction(Value v) noexcept : emlite::Val(CaptureAction::to_string(v)), value_(v) {}
CaptureAction::CaptureAction(Handle h) noexcept: emlite::Val(h) {
    value_ = CaptureAction::from_string(as<emlite::Uniq<char[]>>().get());
}

CaptureAction::CaptureAction(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = CaptureAction::from_string(as<emlite::Uniq<char[]>>().get());
}

CaptureAction CaptureAction::take_ownership(Handle h) noexcept { return CaptureAction(h); }
CaptureAction CaptureAction::clone() const noexcept { return *this; }
const char* CaptureAction::to_string(CaptureAction::Value value_) noexcept {
    switch (value_) {
        case NEXT:
            return "next";
        case PREVIOUS:
            return "previous";
        case FIRST:
            return "first";
        case LAST:
            return "last";
        default:
            return "next"; // fallback to first value
    }
}

MediaStreamTrackState::Value MediaStreamTrackState::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "live", strlen("live"))) {
        return LIVE;
    }
    else if (__builtin_strncmp(str, "ended", strlen("ended"))) {
        return ENDED;
    }
    else {
        // Default to first value for invalid input
        return LIVE;
    }
}

MediaStreamTrackState::MediaStreamTrackState(Value v) noexcept : emlite::Val(MediaStreamTrackState::to_string(v)), value_(v) {}
MediaStreamTrackState::MediaStreamTrackState(Handle h) noexcept: emlite::Val(h) {
    value_ = MediaStreamTrackState::from_string(as<emlite::Uniq<char[]>>().get());
}

MediaStreamTrackState::MediaStreamTrackState(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = MediaStreamTrackState::from_string(as<emlite::Uniq<char[]>>().get());
}

MediaStreamTrackState MediaStreamTrackState::take_ownership(Handle h) noexcept { return MediaStreamTrackState(h); }
MediaStreamTrackState MediaStreamTrackState::clone() const noexcept { return *this; }
const char* MediaStreamTrackState::to_string(MediaStreamTrackState::Value value_) noexcept {
    switch (value_) {
        case LIVE:
            return "live";
        case ENDED:
            return "ended";
        default:
            return "live"; // fallback to first value
    }
}

VideoFacingModeEnum::Value VideoFacingModeEnum::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "user", strlen("user"))) {
        return USER;
    }
    else if (__builtin_strncmp(str, "environment", strlen("environment"))) {
        return ENVIRONMENT;
    }
    else if (__builtin_strncmp(str, "left", strlen("left"))) {
        return LEFT;
    }
    else if (__builtin_strncmp(str, "right", strlen("right"))) {
        return RIGHT;
    }
    else {
        // Default to first value for invalid input
        return USER;
    }
}

VideoFacingModeEnum::VideoFacingModeEnum(Value v) noexcept : emlite::Val(VideoFacingModeEnum::to_string(v)), value_(v) {}
VideoFacingModeEnum::VideoFacingModeEnum(Handle h) noexcept: emlite::Val(h) {
    value_ = VideoFacingModeEnum::from_string(as<emlite::Uniq<char[]>>().get());
}

VideoFacingModeEnum::VideoFacingModeEnum(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = VideoFacingModeEnum::from_string(as<emlite::Uniq<char[]>>().get());
}

VideoFacingModeEnum VideoFacingModeEnum::take_ownership(Handle h) noexcept { return VideoFacingModeEnum(h); }
VideoFacingModeEnum VideoFacingModeEnum::clone() const noexcept { return *this; }
const char* VideoFacingModeEnum::to_string(VideoFacingModeEnum::Value value_) noexcept {
    switch (value_) {
        case USER:
            return "user";
        case ENVIRONMENT:
            return "environment";
        case LEFT:
            return "left";
        case RIGHT:
            return "right";
        default:
            return "user"; // fallback to first value
    }
}

VideoResizeModeEnum::Value VideoResizeModeEnum::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "none", strlen("none"))) {
        return NONE;
    }
    else if (__builtin_strncmp(str, "crop-and-scale", strlen("crop-and-scale"))) {
        return CROP_AND_SCALE;
    }
    else {
        // Default to first value for invalid input
        return NONE;
    }
}

VideoResizeModeEnum::VideoResizeModeEnum(Value v) noexcept : emlite::Val(VideoResizeModeEnum::to_string(v)), value_(v) {}
VideoResizeModeEnum::VideoResizeModeEnum(Handle h) noexcept: emlite::Val(h) {
    value_ = VideoResizeModeEnum::from_string(as<emlite::Uniq<char[]>>().get());
}

VideoResizeModeEnum::VideoResizeModeEnum(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = VideoResizeModeEnum::from_string(as<emlite::Uniq<char[]>>().get());
}

VideoResizeModeEnum VideoResizeModeEnum::take_ownership(Handle h) noexcept { return VideoResizeModeEnum(h); }
VideoResizeModeEnum VideoResizeModeEnum::clone() const noexcept { return *this; }
const char* VideoResizeModeEnum::to_string(VideoResizeModeEnum::Value value_) noexcept {
    switch (value_) {
        case NONE:
            return "none";
        case CROP_AND_SCALE:
            return "crop-and-scale";
        default:
            return "none"; // fallback to first value
    }
}

EchoCancellationModeEnum::Value EchoCancellationModeEnum::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "all", strlen("all"))) {
        return ALL;
    }
    else if (__builtin_strncmp(str, "remote-only", strlen("remote-only"))) {
        return REMOTE_ONLY;
    }
    else {
        // Default to first value for invalid input
        return ALL;
    }
}

EchoCancellationModeEnum::EchoCancellationModeEnum(Value v) noexcept : emlite::Val(EchoCancellationModeEnum::to_string(v)), value_(v) {}
EchoCancellationModeEnum::EchoCancellationModeEnum(Handle h) noexcept: emlite::Val(h) {
    value_ = EchoCancellationModeEnum::from_string(as<emlite::Uniq<char[]>>().get());
}

EchoCancellationModeEnum::EchoCancellationModeEnum(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = EchoCancellationModeEnum::from_string(as<emlite::Uniq<char[]>>().get());
}

EchoCancellationModeEnum EchoCancellationModeEnum::take_ownership(Handle h) noexcept { return EchoCancellationModeEnum(h); }
EchoCancellationModeEnum EchoCancellationModeEnum::clone() const noexcept { return *this; }
const char* EchoCancellationModeEnum::to_string(EchoCancellationModeEnum::Value value_) noexcept {
    switch (value_) {
        case ALL:
            return "all";
        case REMOTE_ONLY:
            return "remote-only";
        default:
            return "all"; // fallback to first value
    }
}

MediaDeviceKind::Value MediaDeviceKind::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "audioinput", strlen("audioinput"))) {
        return AUDIOINPUT;
    }
    else if (__builtin_strncmp(str, "audiooutput", strlen("audiooutput"))) {
        return AUDIOOUTPUT;
    }
    else if (__builtin_strncmp(str, "videoinput", strlen("videoinput"))) {
        return VIDEOINPUT;
    }
    else {
        // Default to first value for invalid input
        return AUDIOINPUT;
    }
}

MediaDeviceKind::MediaDeviceKind(Value v) noexcept : emlite::Val(MediaDeviceKind::to_string(v)), value_(v) {}
MediaDeviceKind::MediaDeviceKind(Handle h) noexcept: emlite::Val(h) {
    value_ = MediaDeviceKind::from_string(as<emlite::Uniq<char[]>>().get());
}

MediaDeviceKind::MediaDeviceKind(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = MediaDeviceKind::from_string(as<emlite::Uniq<char[]>>().get());
}

MediaDeviceKind MediaDeviceKind::take_ownership(Handle h) noexcept { return MediaDeviceKind(h); }
MediaDeviceKind MediaDeviceKind::clone() const noexcept { return *this; }
const char* MediaDeviceKind::to_string(MediaDeviceKind::Value value_) noexcept {
    switch (value_) {
        case AUDIOINPUT:
            return "audioinput";
        case AUDIOOUTPUT:
            return "audiooutput";
        case VIDEOINPUT:
            return "videoinput";
        default:
            return "audioinput"; // fallback to first value
    }
}

MediaSessionPlaybackState::Value MediaSessionPlaybackState::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "none", strlen("none"))) {
        return NONE;
    }
    else if (__builtin_strncmp(str, "paused", strlen("paused"))) {
        return PAUSED;
    }
    else if (__builtin_strncmp(str, "playing", strlen("playing"))) {
        return PLAYING;
    }
    else {
        // Default to first value for invalid input
        return NONE;
    }
}

MediaSessionPlaybackState::MediaSessionPlaybackState(Value v) noexcept : emlite::Val(MediaSessionPlaybackState::to_string(v)), value_(v) {}
MediaSessionPlaybackState::MediaSessionPlaybackState(Handle h) noexcept: emlite::Val(h) {
    value_ = MediaSessionPlaybackState::from_string(as<emlite::Uniq<char[]>>().get());
}

MediaSessionPlaybackState::MediaSessionPlaybackState(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = MediaSessionPlaybackState::from_string(as<emlite::Uniq<char[]>>().get());
}

MediaSessionPlaybackState MediaSessionPlaybackState::take_ownership(Handle h) noexcept { return MediaSessionPlaybackState(h); }
MediaSessionPlaybackState MediaSessionPlaybackState::clone() const noexcept { return *this; }
const char* MediaSessionPlaybackState::to_string(MediaSessionPlaybackState::Value value_) noexcept {
    switch (value_) {
        case NONE:
            return "none";
        case PAUSED:
            return "paused";
        case PLAYING:
            return "playing";
        default:
            return "none"; // fallback to first value
    }
}

MediaSessionAction::Value MediaSessionAction::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "play", strlen("play"))) {
        return PLAY;
    }
    else if (__builtin_strncmp(str, "pause", strlen("pause"))) {
        return PAUSE;
    }
    else if (__builtin_strncmp(str, "seekbackward", strlen("seekbackward"))) {
        return SEEKBACKWARD;
    }
    else if (__builtin_strncmp(str, "seekforward", strlen("seekforward"))) {
        return SEEKFORWARD;
    }
    else if (__builtin_strncmp(str, "previoustrack", strlen("previoustrack"))) {
        return PREVIOUSTRACK;
    }
    else if (__builtin_strncmp(str, "nexttrack", strlen("nexttrack"))) {
        return NEXTTRACK;
    }
    else if (__builtin_strncmp(str, "skipad", strlen("skipad"))) {
        return SKIPAD;
    }
    else if (__builtin_strncmp(str, "stop", strlen("stop"))) {
        return STOP;
    }
    else if (__builtin_strncmp(str, "seekto", strlen("seekto"))) {
        return SEEKTO;
    }
    else if (__builtin_strncmp(str, "togglemicrophone", strlen("togglemicrophone"))) {
        return TOGGLEMICROPHONE;
    }
    else if (__builtin_strncmp(str, "togglecamera", strlen("togglecamera"))) {
        return TOGGLECAMERA;
    }
    else if (__builtin_strncmp(str, "togglescreenshare", strlen("togglescreenshare"))) {
        return TOGGLESCREENSHARE;
    }
    else if (__builtin_strncmp(str, "hangup", strlen("hangup"))) {
        return HANGUP;
    }
    else if (__builtin_strncmp(str, "previousslide", strlen("previousslide"))) {
        return PREVIOUSSLIDE;
    }
    else if (__builtin_strncmp(str, "nextslide", strlen("nextslide"))) {
        return NEXTSLIDE;
    }
    else if (__builtin_strncmp(str, "enterpictureinpicture", strlen("enterpictureinpicture"))) {
        return ENTERPICTUREINPICTURE;
    }
    else if (__builtin_strncmp(str, "voiceactivity", strlen("voiceactivity"))) {
        return VOICEACTIVITY;
    }
    else {
        // Default to first value for invalid input
        return PLAY;
    }
}

MediaSessionAction::MediaSessionAction(Value v) noexcept : emlite::Val(MediaSessionAction::to_string(v)), value_(v) {}
MediaSessionAction::MediaSessionAction(Handle h) noexcept: emlite::Val(h) {
    value_ = MediaSessionAction::from_string(as<emlite::Uniq<char[]>>().get());
}

MediaSessionAction::MediaSessionAction(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = MediaSessionAction::from_string(as<emlite::Uniq<char[]>>().get());
}

MediaSessionAction MediaSessionAction::take_ownership(Handle h) noexcept { return MediaSessionAction(h); }
MediaSessionAction MediaSessionAction::clone() const noexcept { return *this; }
const char* MediaSessionAction::to_string(MediaSessionAction::Value value_) noexcept {
    switch (value_) {
        case PLAY:
            return "play";
        case PAUSE:
            return "pause";
        case SEEKBACKWARD:
            return "seekbackward";
        case SEEKFORWARD:
            return "seekforward";
        case PREVIOUSTRACK:
            return "previoustrack";
        case NEXTTRACK:
            return "nexttrack";
        case SKIPAD:
            return "skipad";
        case STOP:
            return "stop";
        case SEEKTO:
            return "seekto";
        case TOGGLEMICROPHONE:
            return "togglemicrophone";
        case TOGGLECAMERA:
            return "togglecamera";
        case TOGGLESCREENSHARE:
            return "togglescreenshare";
        case HANGUP:
            return "hangup";
        case PREVIOUSSLIDE:
            return "previousslide";
        case NEXTSLIDE:
            return "nextslide";
        case ENTERPICTUREINPICTURE:
            return "enterpictureinpicture";
        case VOICEACTIVITY:
            return "voiceactivity";
        default:
            return "play"; // fallback to first value
    }
}

BitrateMode::Value BitrateMode::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "constant", strlen("constant"))) {
        return CONSTANT;
    }
    else if (__builtin_strncmp(str, "variable", strlen("variable"))) {
        return VARIABLE;
    }
    else {
        // Default to first value for invalid input
        return CONSTANT;
    }
}

BitrateMode::BitrateMode(Value v) noexcept : emlite::Val(BitrateMode::to_string(v)), value_(v) {}
BitrateMode::BitrateMode(Handle h) noexcept: emlite::Val(h) {
    value_ = BitrateMode::from_string(as<emlite::Uniq<char[]>>().get());
}

BitrateMode::BitrateMode(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = BitrateMode::from_string(as<emlite::Uniq<char[]>>().get());
}

BitrateMode BitrateMode::take_ownership(Handle h) noexcept { return BitrateMode(h); }
BitrateMode BitrateMode::clone() const noexcept { return *this; }
const char* BitrateMode::to_string(BitrateMode::Value value_) noexcept {
    switch (value_) {
        case CONSTANT:
            return "constant";
        case VARIABLE:
            return "variable";
        default:
            return "constant"; // fallback to first value
    }
}

RecordingState::Value RecordingState::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "inactive", strlen("inactive"))) {
        return INACTIVE;
    }
    else if (__builtin_strncmp(str, "recording", strlen("recording"))) {
        return RECORDING;
    }
    else if (__builtin_strncmp(str, "paused", strlen("paused"))) {
        return PAUSED;
    }
    else {
        // Default to first value for invalid input
        return INACTIVE;
    }
}

RecordingState::RecordingState(Value v) noexcept : emlite::Val(RecordingState::to_string(v)), value_(v) {}
RecordingState::RecordingState(Handle h) noexcept: emlite::Val(h) {
    value_ = RecordingState::from_string(as<emlite::Uniq<char[]>>().get());
}

RecordingState::RecordingState(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RecordingState::from_string(as<emlite::Uniq<char[]>>().get());
}

RecordingState RecordingState::take_ownership(Handle h) noexcept { return RecordingState(h); }
RecordingState RecordingState::clone() const noexcept { return *this; }
const char* RecordingState::to_string(RecordingState::Value value_) noexcept {
    switch (value_) {
        case INACTIVE:
            return "inactive";
        case RECORDING:
            return "recording";
        case PAUSED:
            return "paused";
        default:
            return "inactive"; // fallback to first value
    }
}

RTCDegradationPreference::Value RTCDegradationPreference::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "maintain-framerate", strlen("maintain-framerate"))) {
        return MAINTAIN_FRAMERATE;
    }
    else if (__builtin_strncmp(str, "maintain-resolution", strlen("maintain-resolution"))) {
        return MAINTAIN_RESOLUTION;
    }
    else if (__builtin_strncmp(str, "balanced", strlen("balanced"))) {
        return BALANCED;
    }
    else {
        // Default to first value for invalid input
        return MAINTAIN_FRAMERATE;
    }
}

RTCDegradationPreference::RTCDegradationPreference(Value v) noexcept : emlite::Val(RTCDegradationPreference::to_string(v)), value_(v) {}
RTCDegradationPreference::RTCDegradationPreference(Handle h) noexcept: emlite::Val(h) {
    value_ = RTCDegradationPreference::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCDegradationPreference::RTCDegradationPreference(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RTCDegradationPreference::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCDegradationPreference RTCDegradationPreference::take_ownership(Handle h) noexcept { return RTCDegradationPreference(h); }
RTCDegradationPreference RTCDegradationPreference::clone() const noexcept { return *this; }
const char* RTCDegradationPreference::to_string(RTCDegradationPreference::Value value_) noexcept {
    switch (value_) {
        case MAINTAIN_FRAMERATE:
            return "maintain-framerate";
        case MAINTAIN_RESOLUTION:
            return "maintain-resolution";
        case BALANCED:
            return "balanced";
        default:
            return "maintain-framerate"; // fallback to first value
    }
}

NavigationTimingType::Value NavigationTimingType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "navigate", strlen("navigate"))) {
        return NAVIGATE;
    }
    else if (__builtin_strncmp(str, "reload", strlen("reload"))) {
        return RELOAD;
    }
    else if (__builtin_strncmp(str, "back_forward", strlen("back_forward"))) {
        return BACK_FORWARD;
    }
    else if (__builtin_strncmp(str, "prerender", strlen("prerender"))) {
        return PRERENDER;
    }
    else {
        // Default to first value for invalid input
        return NAVIGATE;
    }
}

NavigationTimingType::NavigationTimingType(Value v) noexcept : emlite::Val(NavigationTimingType::to_string(v)), value_(v) {}
NavigationTimingType::NavigationTimingType(Handle h) noexcept: emlite::Val(h) {
    value_ = NavigationTimingType::from_string(as<emlite::Uniq<char[]>>().get());
}

NavigationTimingType::NavigationTimingType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = NavigationTimingType::from_string(as<emlite::Uniq<char[]>>().get());
}

NavigationTimingType NavigationTimingType::take_ownership(Handle h) noexcept { return NavigationTimingType(h); }
NavigationTimingType NavigationTimingType::clone() const noexcept { return *this; }
const char* NavigationTimingType::to_string(NavigationTimingType::Value value_) noexcept {
    switch (value_) {
        case NAVIGATE:
            return "navigate";
        case RELOAD:
            return "reload";
        case BACK_FORWARD:
            return "back_forward";
        case PRERENDER:
            return "prerender";
        default:
            return "navigate"; // fallback to first value
    }
}

ConnectionType::Value ConnectionType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "bluetooth", strlen("bluetooth"))) {
        return BLUETOOTH;
    }
    else if (__builtin_strncmp(str, "cellular", strlen("cellular"))) {
        return CELLULAR;
    }
    else if (__builtin_strncmp(str, "ethernet", strlen("ethernet"))) {
        return ETHERNET;
    }
    else if (__builtin_strncmp(str, "mixed", strlen("mixed"))) {
        return MIXED;
    }
    else if (__builtin_strncmp(str, "none", strlen("none"))) {
        return NONE;
    }
    else if (__builtin_strncmp(str, "other", strlen("other"))) {
        return OTHER;
    }
    else if (__builtin_strncmp(str, "unknown", strlen("unknown"))) {
        return UNKNOWN;
    }
    else if (__builtin_strncmp(str, "wifi", strlen("wifi"))) {
        return WIFI;
    }
    else if (__builtin_strncmp(str, "wimax", strlen("wimax"))) {
        return WIMAX;
    }
    else {
        // Default to first value for invalid input
        return BLUETOOTH;
    }
}

ConnectionType::ConnectionType(Value v) noexcept : emlite::Val(ConnectionType::to_string(v)), value_(v) {}
ConnectionType::ConnectionType(Handle h) noexcept: emlite::Val(h) {
    value_ = ConnectionType::from_string(as<emlite::Uniq<char[]>>().get());
}

ConnectionType::ConnectionType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = ConnectionType::from_string(as<emlite::Uniq<char[]>>().get());
}

ConnectionType ConnectionType::take_ownership(Handle h) noexcept { return ConnectionType(h); }
ConnectionType ConnectionType::clone() const noexcept { return *this; }
const char* ConnectionType::to_string(ConnectionType::Value value_) noexcept {
    switch (value_) {
        case BLUETOOTH:
            return "bluetooth";
        case CELLULAR:
            return "cellular";
        case ETHERNET:
            return "ethernet";
        case MIXED:
            return "mixed";
        case NONE:
            return "none";
        case OTHER:
            return "other";
        case UNKNOWN:
            return "unknown";
        case WIFI:
            return "wifi";
        case WIMAX:
            return "wimax";
        default:
            return "bluetooth"; // fallback to first value
    }
}

EffectiveConnectionType::Value EffectiveConnectionType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "2g", strlen("2g"))) {
        return _2G;
    }
    else if (__builtin_strncmp(str, "3g", strlen("3g"))) {
        return _3G;
    }
    else if (__builtin_strncmp(str, "4g", strlen("4g"))) {
        return _4G;
    }
    else if (__builtin_strncmp(str, "slow-2g", strlen("slow-2g"))) {
        return SLOW_2G;
    }
    else {
        // Default to first value for invalid input
        return _2G;
    }
}

EffectiveConnectionType::EffectiveConnectionType(Value v) noexcept : emlite::Val(EffectiveConnectionType::to_string(v)), value_(v) {}
EffectiveConnectionType::EffectiveConnectionType(Handle h) noexcept: emlite::Val(h) {
    value_ = EffectiveConnectionType::from_string(as<emlite::Uniq<char[]>>().get());
}

EffectiveConnectionType::EffectiveConnectionType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = EffectiveConnectionType::from_string(as<emlite::Uniq<char[]>>().get());
}

EffectiveConnectionType EffectiveConnectionType::take_ownership(Handle h) noexcept { return EffectiveConnectionType(h); }
EffectiveConnectionType EffectiveConnectionType::clone() const noexcept { return *this; }
const char* EffectiveConnectionType::to_string(EffectiveConnectionType::Value value_) noexcept {
    switch (value_) {
        case _2G:
            return "2g";
        case _3G:
            return "3g";
        case _4G:
            return "4g";
        case SLOW_2G:
            return "slow-2g";
        default:
            return "2g"; // fallback to first value
    }
}

NotificationPermission::Value NotificationPermission::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "default", strlen("default"))) {
        return DEFAULT_;
    }
    else if (__builtin_strncmp(str, "denied", strlen("denied"))) {
        return DENIED;
    }
    else if (__builtin_strncmp(str, "granted", strlen("granted"))) {
        return GRANTED;
    }
    else {
        // Default to first value for invalid input
        return DEFAULT_;
    }
}

NotificationPermission::NotificationPermission(Value v) noexcept : emlite::Val(NotificationPermission::to_string(v)), value_(v) {}
NotificationPermission::NotificationPermission(Handle h) noexcept: emlite::Val(h) {
    value_ = NotificationPermission::from_string(as<emlite::Uniq<char[]>>().get());
}

NotificationPermission::NotificationPermission(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = NotificationPermission::from_string(as<emlite::Uniq<char[]>>().get());
}

NotificationPermission NotificationPermission::take_ownership(Handle h) noexcept { return NotificationPermission(h); }
NotificationPermission NotificationPermission::clone() const noexcept { return *this; }
const char* NotificationPermission::to_string(NotificationPermission::Value value_) noexcept {
    switch (value_) {
        case DEFAULT_:
            return "default";
        case DENIED:
            return "denied";
        case GRANTED:
            return "granted";
        default:
            return "default"; // fallback to first value
    }
}

NotificationDirection::Value NotificationDirection::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "auto", strlen("auto"))) {
        return AUTO_;
    }
    else if (__builtin_strncmp(str, "ltr", strlen("ltr"))) {
        return LTR;
    }
    else if (__builtin_strncmp(str, "rtl", strlen("rtl"))) {
        return RTL;
    }
    else {
        // Default to first value for invalid input
        return AUTO_;
    }
}

NotificationDirection::NotificationDirection(Value v) noexcept : emlite::Val(NotificationDirection::to_string(v)), value_(v) {}
NotificationDirection::NotificationDirection(Handle h) noexcept: emlite::Val(h) {
    value_ = NotificationDirection::from_string(as<emlite::Uniq<char[]>>().get());
}

NotificationDirection::NotificationDirection(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = NotificationDirection::from_string(as<emlite::Uniq<char[]>>().get());
}

NotificationDirection NotificationDirection::take_ownership(Handle h) noexcept { return NotificationDirection(h); }
NotificationDirection NotificationDirection::clone() const noexcept { return *this; }
const char* NotificationDirection::to_string(NotificationDirection::Value value_) noexcept {
    switch (value_) {
        case AUTO_:
            return "auto";
        case LTR:
            return "ltr";
        case RTL:
            return "rtl";
        default:
            return "auto"; // fallback to first value
    }
}

OrientationSensorLocalCoordinateSystem::Value OrientationSensorLocalCoordinateSystem::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "device", strlen("device"))) {
        return DEVICE;
    }
    else if (__builtin_strncmp(str, "screen", strlen("screen"))) {
        return SCREEN;
    }
    else {
        // Default to first value for invalid input
        return DEVICE;
    }
}

OrientationSensorLocalCoordinateSystem::OrientationSensorLocalCoordinateSystem(Value v) noexcept : emlite::Val(OrientationSensorLocalCoordinateSystem::to_string(v)), value_(v) {}
OrientationSensorLocalCoordinateSystem::OrientationSensorLocalCoordinateSystem(Handle h) noexcept: emlite::Val(h) {
    value_ = OrientationSensorLocalCoordinateSystem::from_string(as<emlite::Uniq<char[]>>().get());
}

OrientationSensorLocalCoordinateSystem::OrientationSensorLocalCoordinateSystem(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = OrientationSensorLocalCoordinateSystem::from_string(as<emlite::Uniq<char[]>>().get());
}

OrientationSensorLocalCoordinateSystem OrientationSensorLocalCoordinateSystem::take_ownership(Handle h) noexcept { return OrientationSensorLocalCoordinateSystem(h); }
OrientationSensorLocalCoordinateSystem OrientationSensorLocalCoordinateSystem::clone() const noexcept { return *this; }
const char* OrientationSensorLocalCoordinateSystem::to_string(OrientationSensorLocalCoordinateSystem::Value value_) noexcept {
    switch (value_) {
        case DEVICE:
            return "device";
        case SCREEN:
            return "screen";
        default:
            return "device"; // fallback to first value
    }
}

ClientLifecycleState::Value ClientLifecycleState::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "active", strlen("active"))) {
        return ACTIVE;
    }
    else if (__builtin_strncmp(str, "frozen", strlen("frozen"))) {
        return FROZEN;
    }
    else {
        // Default to first value for invalid input
        return ACTIVE;
    }
}

ClientLifecycleState::ClientLifecycleState(Value v) noexcept : emlite::Val(ClientLifecycleState::to_string(v)), value_(v) {}
ClientLifecycleState::ClientLifecycleState(Handle h) noexcept: emlite::Val(h) {
    value_ = ClientLifecycleState::from_string(as<emlite::Uniq<char[]>>().get());
}

ClientLifecycleState::ClientLifecycleState(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = ClientLifecycleState::from_string(as<emlite::Uniq<char[]>>().get());
}

ClientLifecycleState ClientLifecycleState::take_ownership(Handle h) noexcept { return ClientLifecycleState(h); }
ClientLifecycleState ClientLifecycleState::clone() const noexcept { return *this; }
const char* ClientLifecycleState::to_string(ClientLifecycleState::Value value_) noexcept {
    switch (value_) {
        case ACTIVE:
            return "active";
        case FROZEN:
            return "frozen";
        default:
            return "active"; // fallback to first value
    }
}

PaymentDelegation::Value PaymentDelegation::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "shippingAddress", strlen("shippingAddress"))) {
        return SHIPPINGADDRESS;
    }
    else if (__builtin_strncmp(str, "payerName", strlen("payerName"))) {
        return PAYERNAME;
    }
    else if (__builtin_strncmp(str, "payerPhone", strlen("payerPhone"))) {
        return PAYERPHONE;
    }
    else if (__builtin_strncmp(str, "payerEmail", strlen("payerEmail"))) {
        return PAYEREMAIL;
    }
    else {
        // Default to first value for invalid input
        return SHIPPINGADDRESS;
    }
}

PaymentDelegation::PaymentDelegation(Value v) noexcept : emlite::Val(PaymentDelegation::to_string(v)), value_(v) {}
PaymentDelegation::PaymentDelegation(Handle h) noexcept: emlite::Val(h) {
    value_ = PaymentDelegation::from_string(as<emlite::Uniq<char[]>>().get());
}

PaymentDelegation::PaymentDelegation(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = PaymentDelegation::from_string(as<emlite::Uniq<char[]>>().get());
}

PaymentDelegation PaymentDelegation::take_ownership(Handle h) noexcept { return PaymentDelegation(h); }
PaymentDelegation PaymentDelegation::clone() const noexcept { return *this; }
const char* PaymentDelegation::to_string(PaymentDelegation::Value value_) noexcept {
    switch (value_) {
        case SHIPPINGADDRESS:
            return "shippingAddress";
        case PAYERNAME:
            return "payerName";
        case PAYERPHONE:
            return "payerPhone";
        case PAYEREMAIL:
            return "payerEmail";
        default:
            return "shippingAddress"; // fallback to first value
    }
}

PaymentShippingType::Value PaymentShippingType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "shipping", strlen("shipping"))) {
        return SHIPPING;
    }
    else if (__builtin_strncmp(str, "delivery", strlen("delivery"))) {
        return DELIVERY;
    }
    else if (__builtin_strncmp(str, "pickup", strlen("pickup"))) {
        return PICKUP;
    }
    else {
        // Default to first value for invalid input
        return SHIPPING;
    }
}

PaymentShippingType::PaymentShippingType(Value v) noexcept : emlite::Val(PaymentShippingType::to_string(v)), value_(v) {}
PaymentShippingType::PaymentShippingType(Handle h) noexcept: emlite::Val(h) {
    value_ = PaymentShippingType::from_string(as<emlite::Uniq<char[]>>().get());
}

PaymentShippingType::PaymentShippingType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = PaymentShippingType::from_string(as<emlite::Uniq<char[]>>().get());
}

PaymentShippingType PaymentShippingType::take_ownership(Handle h) noexcept { return PaymentShippingType(h); }
PaymentShippingType PaymentShippingType::clone() const noexcept { return *this; }
const char* PaymentShippingType::to_string(PaymentShippingType::Value value_) noexcept {
    switch (value_) {
        case SHIPPING:
            return "shipping";
        case DELIVERY:
            return "delivery";
        case PICKUP:
            return "pickup";
        default:
            return "shipping"; // fallback to first value
    }
}

PaymentComplete::Value PaymentComplete::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "fail", strlen("fail"))) {
        return FAIL;
    }
    else if (__builtin_strncmp(str, "success", strlen("success"))) {
        return SUCCESS;
    }
    else if (__builtin_strncmp(str, "unknown", strlen("unknown"))) {
        return UNKNOWN;
    }
    else {
        // Default to first value for invalid input
        return FAIL;
    }
}

PaymentComplete::PaymentComplete(Value v) noexcept : emlite::Val(PaymentComplete::to_string(v)), value_(v) {}
PaymentComplete::PaymentComplete(Handle h) noexcept: emlite::Val(h) {
    value_ = PaymentComplete::from_string(as<emlite::Uniq<char[]>>().get());
}

PaymentComplete::PaymentComplete(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = PaymentComplete::from_string(as<emlite::Uniq<char[]>>().get());
}

PaymentComplete PaymentComplete::take_ownership(Handle h) noexcept { return PaymentComplete(h); }
PaymentComplete PaymentComplete::clone() const noexcept { return *this; }
const char* PaymentComplete::to_string(PaymentComplete::Value value_) noexcept {
    switch (value_) {
        case FAIL:
            return "fail";
        case SUCCESS:
            return "success";
        case UNKNOWN:
            return "unknown";
        default:
            return "fail"; // fallback to first value
    }
}

PermissionState::Value PermissionState::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "granted", strlen("granted"))) {
        return GRANTED;
    }
    else if (__builtin_strncmp(str, "denied", strlen("denied"))) {
        return DENIED;
    }
    else if (__builtin_strncmp(str, "prompt", strlen("prompt"))) {
        return PROMPT;
    }
    else {
        // Default to first value for invalid input
        return GRANTED;
    }
}

PermissionState::PermissionState(Value v) noexcept : emlite::Val(PermissionState::to_string(v)), value_(v) {}
PermissionState::PermissionState(Handle h) noexcept: emlite::Val(h) {
    value_ = PermissionState::from_string(as<emlite::Uniq<char[]>>().get());
}

PermissionState::PermissionState(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = PermissionState::from_string(as<emlite::Uniq<char[]>>().get());
}

PermissionState PermissionState::take_ownership(Handle h) noexcept { return PermissionState(h); }
PermissionState PermissionState::clone() const noexcept { return *this; }
const char* PermissionState::to_string(PermissionState::Value value_) noexcept {
    switch (value_) {
        case GRANTED:
            return "granted";
        case DENIED:
            return "denied";
        case PROMPT:
            return "prompt";
        default:
            return "granted"; // fallback to first value
    }
}

PointerAxis::Value PointerAxis::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "block", strlen("block"))) {
        return BLOCK;
    }
    else if (__builtin_strncmp(str, "inline", strlen("inline"))) {
        return INLINE_;
    }
    else if (__builtin_strncmp(str, "x", strlen("x"))) {
        return X;
    }
    else if (__builtin_strncmp(str, "y", strlen("y"))) {
        return Y;
    }
    else {
        // Default to first value for invalid input
        return BLOCK;
    }
}

PointerAxis::PointerAxis(Value v) noexcept : emlite::Val(PointerAxis::to_string(v)), value_(v) {}
PointerAxis::PointerAxis(Handle h) noexcept: emlite::Val(h) {
    value_ = PointerAxis::from_string(as<emlite::Uniq<char[]>>().get());
}

PointerAxis::PointerAxis(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = PointerAxis::from_string(as<emlite::Uniq<char[]>>().get());
}

PointerAxis PointerAxis::take_ownership(Handle h) noexcept { return PointerAxis(h); }
PointerAxis PointerAxis::clone() const noexcept { return *this; }
const char* PointerAxis::to_string(PointerAxis::Value value_) noexcept {
    switch (value_) {
        case BLOCK:
            return "block";
        case INLINE_:
            return "inline";
        case X:
            return "x";
        case Y:
            return "y";
        default:
            return "block"; // fallback to first value
    }
}

PresentationConnectionState::Value PresentationConnectionState::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "connecting", strlen("connecting"))) {
        return CONNECTING;
    }
    else if (__builtin_strncmp(str, "connected", strlen("connected"))) {
        return CONNECTED;
    }
    else if (__builtin_strncmp(str, "closed", strlen("closed"))) {
        return CLOSED;
    }
    else if (__builtin_strncmp(str, "terminated", strlen("terminated"))) {
        return TERMINATED;
    }
    else {
        // Default to first value for invalid input
        return CONNECTING;
    }
}

PresentationConnectionState::PresentationConnectionState(Value v) noexcept : emlite::Val(PresentationConnectionState::to_string(v)), value_(v) {}
PresentationConnectionState::PresentationConnectionState(Handle h) noexcept: emlite::Val(h) {
    value_ = PresentationConnectionState::from_string(as<emlite::Uniq<char[]>>().get());
}

PresentationConnectionState::PresentationConnectionState(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = PresentationConnectionState::from_string(as<emlite::Uniq<char[]>>().get());
}

PresentationConnectionState PresentationConnectionState::take_ownership(Handle h) noexcept { return PresentationConnectionState(h); }
PresentationConnectionState PresentationConnectionState::clone() const noexcept { return *this; }
const char* PresentationConnectionState::to_string(PresentationConnectionState::Value value_) noexcept {
    switch (value_) {
        case CONNECTING:
            return "connecting";
        case CONNECTED:
            return "connected";
        case CLOSED:
            return "closed";
        case TERMINATED:
            return "terminated";
        default:
            return "connecting"; // fallback to first value
    }
}

PresentationConnectionCloseReason::Value PresentationConnectionCloseReason::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "error", strlen("error"))) {
        return ERROR;
    }
    else if (__builtin_strncmp(str, "closed", strlen("closed"))) {
        return CLOSED;
    }
    else if (__builtin_strncmp(str, "wentaway", strlen("wentaway"))) {
        return WENTAWAY;
    }
    else {
        // Default to first value for invalid input
        return ERROR;
    }
}

PresentationConnectionCloseReason::PresentationConnectionCloseReason(Value v) noexcept : emlite::Val(PresentationConnectionCloseReason::to_string(v)), value_(v) {}
PresentationConnectionCloseReason::PresentationConnectionCloseReason(Handle h) noexcept: emlite::Val(h) {
    value_ = PresentationConnectionCloseReason::from_string(as<emlite::Uniq<char[]>>().get());
}

PresentationConnectionCloseReason::PresentationConnectionCloseReason(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = PresentationConnectionCloseReason::from_string(as<emlite::Uniq<char[]>>().get());
}

PresentationConnectionCloseReason PresentationConnectionCloseReason::take_ownership(Handle h) noexcept { return PresentationConnectionCloseReason(h); }
PresentationConnectionCloseReason PresentationConnectionCloseReason::clone() const noexcept { return *this; }
const char* PresentationConnectionCloseReason::to_string(PresentationConnectionCloseReason::Value value_) noexcept {
    switch (value_) {
        case ERROR:
            return "error";
        case CLOSED:
            return "closed";
        case WENTAWAY:
            return "wentaway";
        default:
            return "error"; // fallback to first value
    }
}

PrivateAttributionAggregationProtocol::Value PrivateAttributionAggregationProtocol::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "dap-12-histogram", strlen("dap-12-histogram"))) {
        return DAP_12_HISTOGRAM;
    }
    else if (__builtin_strncmp(str, "tee-00", strlen("tee-00"))) {
        return TEE_00;
    }
    else {
        // Default to first value for invalid input
        return DAP_12_HISTOGRAM;
    }
}

PrivateAttributionAggregationProtocol::PrivateAttributionAggregationProtocol(Value v) noexcept : emlite::Val(PrivateAttributionAggregationProtocol::to_string(v)), value_(v) {}
PrivateAttributionAggregationProtocol::PrivateAttributionAggregationProtocol(Handle h) noexcept: emlite::Val(h) {
    value_ = PrivateAttributionAggregationProtocol::from_string(as<emlite::Uniq<char[]>>().get());
}

PrivateAttributionAggregationProtocol::PrivateAttributionAggregationProtocol(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = PrivateAttributionAggregationProtocol::from_string(as<emlite::Uniq<char[]>>().get());
}

PrivateAttributionAggregationProtocol PrivateAttributionAggregationProtocol::take_ownership(Handle h) noexcept { return PrivateAttributionAggregationProtocol(h); }
PrivateAttributionAggregationProtocol PrivateAttributionAggregationProtocol::clone() const noexcept { return *this; }
const char* PrivateAttributionAggregationProtocol::to_string(PrivateAttributionAggregationProtocol::Value value_) noexcept {
    switch (value_) {
        case DAP_12_HISTOGRAM:
            return "dap-12-histogram";
        case TEE_00:
            return "tee-00";
        default:
            return "dap-12-histogram"; // fallback to first value
    }
}

AttributionLogic::Value AttributionLogic::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "last-touch", strlen("last-touch"))) {
        return LAST_TOUCH;
    }
    else {
        // Default to first value for invalid input
        return LAST_TOUCH;
    }
}

AttributionLogic::AttributionLogic(Value v) noexcept : emlite::Val(AttributionLogic::to_string(v)), value_(v) {}
AttributionLogic::AttributionLogic(Handle h) noexcept: emlite::Val(h) {
    value_ = AttributionLogic::from_string(as<emlite::Uniq<char[]>>().get());
}

AttributionLogic::AttributionLogic(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = AttributionLogic::from_string(as<emlite::Uniq<char[]>>().get());
}

AttributionLogic AttributionLogic::take_ownership(Handle h) noexcept { return AttributionLogic(h); }
AttributionLogic AttributionLogic::clone() const noexcept { return *this; }
const char* AttributionLogic::to_string(AttributionLogic::Value value_) noexcept {
    switch (value_) {
        case LAST_TOUCH:
            return "last-touch";
        default:
            return "last-touch"; // fallback to first value
    }
}

IPAddressSpace::Value IPAddressSpace::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "public", strlen("public"))) {
        return PUBLIC_;
    }
    else if (__builtin_strncmp(str, "private", strlen("private"))) {
        return PRIVATE_;
    }
    else if (__builtin_strncmp(str, "local", strlen("local"))) {
        return LOCAL;
    }
    else {
        // Default to first value for invalid input
        return PUBLIC_;
    }
}

IPAddressSpace::IPAddressSpace(Value v) noexcept : emlite::Val(IPAddressSpace::to_string(v)), value_(v) {}
IPAddressSpace::IPAddressSpace(Handle h) noexcept: emlite::Val(h) {
    value_ = IPAddressSpace::from_string(as<emlite::Uniq<char[]>>().get());
}

IPAddressSpace::IPAddressSpace(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = IPAddressSpace::from_string(as<emlite::Uniq<char[]>>().get());
}

IPAddressSpace IPAddressSpace::take_ownership(Handle h) noexcept { return IPAddressSpace(h); }
IPAddressSpace IPAddressSpace::clone() const noexcept { return *this; }
const char* IPAddressSpace::to_string(IPAddressSpace::Value value_) noexcept {
    switch (value_) {
        case PUBLIC_:
            return "public";
        case PRIVATE_:
            return "private";
        case LOCAL:
            return "local";
        default:
            return "public"; // fallback to first value
    }
}

PushEncryptionKeyName::Value PushEncryptionKeyName::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "p256dh", strlen("p256dh"))) {
        return P256DH;
    }
    else if (__builtin_strncmp(str, "auth", strlen("auth"))) {
        return AUTH;
    }
    else {
        // Default to first value for invalid input
        return P256DH;
    }
}

PushEncryptionKeyName::PushEncryptionKeyName(Value v) noexcept : emlite::Val(PushEncryptionKeyName::to_string(v)), value_(v) {}
PushEncryptionKeyName::PushEncryptionKeyName(Handle h) noexcept: emlite::Val(h) {
    value_ = PushEncryptionKeyName::from_string(as<emlite::Uniq<char[]>>().get());
}

PushEncryptionKeyName::PushEncryptionKeyName(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = PushEncryptionKeyName::from_string(as<emlite::Uniq<char[]>>().get());
}

PushEncryptionKeyName PushEncryptionKeyName::take_ownership(Handle h) noexcept { return PushEncryptionKeyName(h); }
PushEncryptionKeyName PushEncryptionKeyName::clone() const noexcept { return *this; }
const char* PushEncryptionKeyName::to_string(PushEncryptionKeyName::Value value_) noexcept {
    switch (value_) {
        case P256DH:
            return "p256dh";
        case AUTH:
            return "auth";
        default:
            return "p256dh"; // fallback to first value
    }
}

ReferrerPolicy::Value ReferrerPolicy::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "", strlen(""))) {
        return NONE;
    }
    else if (__builtin_strncmp(str, "no-referrer", strlen("no-referrer"))) {
        return NO_REFERRER;
    }
    else if (__builtin_strncmp(str, "no-referrer-when-downgrade", strlen("no-referrer-when-downgrade"))) {
        return NO_REFERRER_WHEN_DOWNGRADE;
    }
    else if (__builtin_strncmp(str, "same-origin", strlen("same-origin"))) {
        return SAME_ORIGIN;
    }
    else if (__builtin_strncmp(str, "origin", strlen("origin"))) {
        return ORIGIN;
    }
    else if (__builtin_strncmp(str, "strict-origin", strlen("strict-origin"))) {
        return STRICT_ORIGIN;
    }
    else if (__builtin_strncmp(str, "origin-when-cross-origin", strlen("origin-when-cross-origin"))) {
        return ORIGIN_WHEN_CROSS_ORIGIN;
    }
    else if (__builtin_strncmp(str, "strict-origin-when-cross-origin", strlen("strict-origin-when-cross-origin"))) {
        return STRICT_ORIGIN_WHEN_CROSS_ORIGIN;
    }
    else if (__builtin_strncmp(str, "unsafe-url", strlen("unsafe-url"))) {
        return UNSAFE_URL;
    }
    else {
        // Default to first value for invalid input
        return NONE;
    }
}

ReferrerPolicy::ReferrerPolicy(Value v) noexcept : emlite::Val(ReferrerPolicy::to_string(v)), value_(v) {}
ReferrerPolicy::ReferrerPolicy(Handle h) noexcept: emlite::Val(h) {
    value_ = ReferrerPolicy::from_string(as<emlite::Uniq<char[]>>().get());
}

ReferrerPolicy::ReferrerPolicy(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = ReferrerPolicy::from_string(as<emlite::Uniq<char[]>>().get());
}

ReferrerPolicy ReferrerPolicy::take_ownership(Handle h) noexcept { return ReferrerPolicy(h); }
ReferrerPolicy ReferrerPolicy::clone() const noexcept { return *this; }
const char* ReferrerPolicy::to_string(ReferrerPolicy::Value value_) noexcept {
    switch (value_) {
        case NONE:
            return "";
        case NO_REFERRER:
            return "no-referrer";
        case NO_REFERRER_WHEN_DOWNGRADE:
            return "no-referrer-when-downgrade";
        case SAME_ORIGIN:
            return "same-origin";
        case ORIGIN:
            return "origin";
        case STRICT_ORIGIN:
            return "strict-origin";
        case ORIGIN_WHEN_CROSS_ORIGIN:
            return "origin-when-cross-origin";
        case STRICT_ORIGIN_WHEN_CROSS_ORIGIN:
            return "strict-origin-when-cross-origin";
        case UNSAFE_URL:
            return "unsafe-url";
        default:
            return ""; // fallback to first value
    }
}

RemotePlaybackState::Value RemotePlaybackState::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "connecting", strlen("connecting"))) {
        return CONNECTING;
    }
    else if (__builtin_strncmp(str, "connected", strlen("connected"))) {
        return CONNECTED;
    }
    else if (__builtin_strncmp(str, "disconnected", strlen("disconnected"))) {
        return DISCONNECTED;
    }
    else {
        // Default to first value for invalid input
        return CONNECTING;
    }
}

RemotePlaybackState::RemotePlaybackState(Value v) noexcept : emlite::Val(RemotePlaybackState::to_string(v)), value_(v) {}
RemotePlaybackState::RemotePlaybackState(Handle h) noexcept: emlite::Val(h) {
    value_ = RemotePlaybackState::from_string(as<emlite::Uniq<char[]>>().get());
}

RemotePlaybackState::RemotePlaybackState(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RemotePlaybackState::from_string(as<emlite::Uniq<char[]>>().get());
}

RemotePlaybackState RemotePlaybackState::take_ownership(Handle h) noexcept { return RemotePlaybackState(h); }
RemotePlaybackState RemotePlaybackState::clone() const noexcept { return *this; }
const char* RemotePlaybackState::to_string(RemotePlaybackState::Value value_) noexcept {
    switch (value_) {
        case CONNECTING:
            return "connecting";
        case CONNECTED:
            return "connected";
        case DISCONNECTED:
            return "disconnected";
        default:
            return "connecting"; // fallback to first value
    }
}

ResizeObserverBoxOptions::Value ResizeObserverBoxOptions::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "border-box", strlen("border-box"))) {
        return BORDER_BOX;
    }
    else if (__builtin_strncmp(str, "content-box", strlen("content-box"))) {
        return CONTENT_BOX;
    }
    else if (__builtin_strncmp(str, "device-pixel-content-box", strlen("device-pixel-content-box"))) {
        return DEVICE_PIXEL_CONTENT_BOX;
    }
    else {
        // Default to first value for invalid input
        return BORDER_BOX;
    }
}

ResizeObserverBoxOptions::ResizeObserverBoxOptions(Value v) noexcept : emlite::Val(ResizeObserverBoxOptions::to_string(v)), value_(v) {}
ResizeObserverBoxOptions::ResizeObserverBoxOptions(Handle h) noexcept: emlite::Val(h) {
    value_ = ResizeObserverBoxOptions::from_string(as<emlite::Uniq<char[]>>().get());
}

ResizeObserverBoxOptions::ResizeObserverBoxOptions(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = ResizeObserverBoxOptions::from_string(as<emlite::Uniq<char[]>>().get());
}

ResizeObserverBoxOptions ResizeObserverBoxOptions::take_ownership(Handle h) noexcept { return ResizeObserverBoxOptions(h); }
ResizeObserverBoxOptions ResizeObserverBoxOptions::clone() const noexcept { return *this; }
const char* ResizeObserverBoxOptions::to_string(ResizeObserverBoxOptions::Value value_) noexcept {
    switch (value_) {
        case BORDER_BOX:
            return "border-box";
        case CONTENT_BOX:
            return "content-box";
        case DEVICE_PIXEL_CONTENT_BOX:
            return "device-pixel-content-box";
        default:
            return "border-box"; // fallback to first value
    }
}

RenderBlockingStatusType::Value RenderBlockingStatusType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "blocking", strlen("blocking"))) {
        return BLOCKING;
    }
    else if (__builtin_strncmp(str, "non-blocking", strlen("non-blocking"))) {
        return NON_BLOCKING;
    }
    else {
        // Default to first value for invalid input
        return BLOCKING;
    }
}

RenderBlockingStatusType::RenderBlockingStatusType(Value v) noexcept : emlite::Val(RenderBlockingStatusType::to_string(v)), value_(v) {}
RenderBlockingStatusType::RenderBlockingStatusType(Handle h) noexcept: emlite::Val(h) {
    value_ = RenderBlockingStatusType::from_string(as<emlite::Uniq<char[]>>().get());
}

RenderBlockingStatusType::RenderBlockingStatusType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RenderBlockingStatusType::from_string(as<emlite::Uniq<char[]>>().get());
}

RenderBlockingStatusType RenderBlockingStatusType::take_ownership(Handle h) noexcept { return RenderBlockingStatusType(h); }
RenderBlockingStatusType RenderBlockingStatusType::clone() const noexcept { return *this; }
const char* RenderBlockingStatusType::to_string(RenderBlockingStatusType::Value value_) noexcept {
    switch (value_) {
        case BLOCKING:
            return "blocking";
        case NON_BLOCKING:
            return "non-blocking";
        default:
            return "blocking"; // fallback to first value
    }
}

SameSiteCookiesType::Value SameSiteCookiesType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "all", strlen("all"))) {
        return ALL;
    }
    else if (__builtin_strncmp(str, "none", strlen("none"))) {
        return NONE;
    }
    else {
        // Default to first value for invalid input
        return ALL;
    }
}

SameSiteCookiesType::SameSiteCookiesType(Value v) noexcept : emlite::Val(SameSiteCookiesType::to_string(v)), value_(v) {}
SameSiteCookiesType::SameSiteCookiesType(Handle h) noexcept: emlite::Val(h) {
    value_ = SameSiteCookiesType::from_string(as<emlite::Uniq<char[]>>().get());
}

SameSiteCookiesType::SameSiteCookiesType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = SameSiteCookiesType::from_string(as<emlite::Uniq<char[]>>().get());
}

SameSiteCookiesType SameSiteCookiesType::take_ownership(Handle h) noexcept { return SameSiteCookiesType(h); }
SameSiteCookiesType SameSiteCookiesType::clone() const noexcept { return *this; }
const char* SameSiteCookiesType::to_string(SameSiteCookiesType::Value value_) noexcept {
    switch (value_) {
        case ALL:
            return "all";
        case NONE:
            return "none";
        default:
            return "all"; // fallback to first value
    }
}

SanitizerPresets::Value SanitizerPresets::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "default", strlen("default"))) {
        return DEFAULT_;
    }
    else {
        // Default to first value for invalid input
        return DEFAULT_;
    }
}

SanitizerPresets::SanitizerPresets(Value v) noexcept : emlite::Val(SanitizerPresets::to_string(v)), value_(v) {}
SanitizerPresets::SanitizerPresets(Handle h) noexcept: emlite::Val(h) {
    value_ = SanitizerPresets::from_string(as<emlite::Uniq<char[]>>().get());
}

SanitizerPresets::SanitizerPresets(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = SanitizerPresets::from_string(as<emlite::Uniq<char[]>>().get());
}

SanitizerPresets SanitizerPresets::take_ownership(Handle h) noexcept { return SanitizerPresets(h); }
SanitizerPresets SanitizerPresets::clone() const noexcept { return *this; }
const char* SanitizerPresets::to_string(SanitizerPresets::Value value_) noexcept {
    switch (value_) {
        case DEFAULT_:
            return "default";
        default:
            return "default"; // fallback to first value
    }
}

TaskPriority::Value TaskPriority::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "user-blocking", strlen("user-blocking"))) {
        return USER_BLOCKING;
    }
    else if (__builtin_strncmp(str, "user-visible", strlen("user-visible"))) {
        return USER_VISIBLE;
    }
    else if (__builtin_strncmp(str, "background", strlen("background"))) {
        return BACKGROUND;
    }
    else {
        // Default to first value for invalid input
        return USER_BLOCKING;
    }
}

TaskPriority::TaskPriority(Value v) noexcept : emlite::Val(TaskPriority::to_string(v)), value_(v) {}
TaskPriority::TaskPriority(Handle h) noexcept: emlite::Val(h) {
    value_ = TaskPriority::from_string(as<emlite::Uniq<char[]>>().get());
}

TaskPriority::TaskPriority(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = TaskPriority::from_string(as<emlite::Uniq<char[]>>().get());
}

TaskPriority TaskPriority::take_ownership(Handle h) noexcept { return TaskPriority(h); }
TaskPriority TaskPriority::clone() const noexcept { return *this; }
const char* TaskPriority::to_string(TaskPriority::Value value_) noexcept {
    switch (value_) {
        case USER_BLOCKING:
            return "user-blocking";
        case USER_VISIBLE:
            return "user-visible";
        case BACKGROUND:
            return "background";
        default:
            return "user-blocking"; // fallback to first value
    }
}

CaptureStartFocusBehavior::Value CaptureStartFocusBehavior::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "focus-capturing-application", strlen("focus-capturing-application"))) {
        return FOCUS_CAPTURING_APPLICATION;
    }
    else if (__builtin_strncmp(str, "focus-captured-surface", strlen("focus-captured-surface"))) {
        return FOCUS_CAPTURED_SURFACE;
    }
    else if (__builtin_strncmp(str, "no-focus-change", strlen("no-focus-change"))) {
        return NO_FOCUS_CHANGE;
    }
    else {
        // Default to first value for invalid input
        return FOCUS_CAPTURING_APPLICATION;
    }
}

CaptureStartFocusBehavior::CaptureStartFocusBehavior(Value v) noexcept : emlite::Val(CaptureStartFocusBehavior::to_string(v)), value_(v) {}
CaptureStartFocusBehavior::CaptureStartFocusBehavior(Handle h) noexcept: emlite::Val(h) {
    value_ = CaptureStartFocusBehavior::from_string(as<emlite::Uniq<char[]>>().get());
}

CaptureStartFocusBehavior::CaptureStartFocusBehavior(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = CaptureStartFocusBehavior::from_string(as<emlite::Uniq<char[]>>().get());
}

CaptureStartFocusBehavior CaptureStartFocusBehavior::take_ownership(Handle h) noexcept { return CaptureStartFocusBehavior(h); }
CaptureStartFocusBehavior CaptureStartFocusBehavior::clone() const noexcept { return *this; }
const char* CaptureStartFocusBehavior::to_string(CaptureStartFocusBehavior::Value value_) noexcept {
    switch (value_) {
        case FOCUS_CAPTURING_APPLICATION:
            return "focus-capturing-application";
        case FOCUS_CAPTURED_SURFACE:
            return "focus-captured-surface";
        case NO_FOCUS_CHANGE:
            return "no-focus-change";
        default:
            return "focus-capturing-application"; // fallback to first value
    }
}

SelfCapturePreferenceEnum::Value SelfCapturePreferenceEnum::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "include", strlen("include"))) {
        return INCLUDE;
    }
    else if (__builtin_strncmp(str, "exclude", strlen("exclude"))) {
        return EXCLUDE;
    }
    else {
        // Default to first value for invalid input
        return INCLUDE;
    }
}

SelfCapturePreferenceEnum::SelfCapturePreferenceEnum(Value v) noexcept : emlite::Val(SelfCapturePreferenceEnum::to_string(v)), value_(v) {}
SelfCapturePreferenceEnum::SelfCapturePreferenceEnum(Handle h) noexcept: emlite::Val(h) {
    value_ = SelfCapturePreferenceEnum::from_string(as<emlite::Uniq<char[]>>().get());
}

SelfCapturePreferenceEnum::SelfCapturePreferenceEnum(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = SelfCapturePreferenceEnum::from_string(as<emlite::Uniq<char[]>>().get());
}

SelfCapturePreferenceEnum SelfCapturePreferenceEnum::take_ownership(Handle h) noexcept { return SelfCapturePreferenceEnum(h); }
SelfCapturePreferenceEnum SelfCapturePreferenceEnum::clone() const noexcept { return *this; }
const char* SelfCapturePreferenceEnum::to_string(SelfCapturePreferenceEnum::Value value_) noexcept {
    switch (value_) {
        case INCLUDE:
            return "include";
        case EXCLUDE:
            return "exclude";
        default:
            return "include"; // fallback to first value
    }
}

SystemAudioPreferenceEnum::Value SystemAudioPreferenceEnum::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "include", strlen("include"))) {
        return INCLUDE;
    }
    else if (__builtin_strncmp(str, "exclude", strlen("exclude"))) {
        return EXCLUDE;
    }
    else {
        // Default to first value for invalid input
        return INCLUDE;
    }
}

SystemAudioPreferenceEnum::SystemAudioPreferenceEnum(Value v) noexcept : emlite::Val(SystemAudioPreferenceEnum::to_string(v)), value_(v) {}
SystemAudioPreferenceEnum::SystemAudioPreferenceEnum(Handle h) noexcept: emlite::Val(h) {
    value_ = SystemAudioPreferenceEnum::from_string(as<emlite::Uniq<char[]>>().get());
}

SystemAudioPreferenceEnum::SystemAudioPreferenceEnum(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = SystemAudioPreferenceEnum::from_string(as<emlite::Uniq<char[]>>().get());
}

SystemAudioPreferenceEnum SystemAudioPreferenceEnum::take_ownership(Handle h) noexcept { return SystemAudioPreferenceEnum(h); }
SystemAudioPreferenceEnum SystemAudioPreferenceEnum::clone() const noexcept { return *this; }
const char* SystemAudioPreferenceEnum::to_string(SystemAudioPreferenceEnum::Value value_) noexcept {
    switch (value_) {
        case INCLUDE:
            return "include";
        case EXCLUDE:
            return "exclude";
        default:
            return "include"; // fallback to first value
    }
}

WindowAudioPreferenceEnum::Value WindowAudioPreferenceEnum::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "system", strlen("system"))) {
        return SYSTEM;
    }
    else if (__builtin_strncmp(str, "window", strlen("window"))) {
        return WINDOW;
    }
    else if (__builtin_strncmp(str, "exclude", strlen("exclude"))) {
        return EXCLUDE;
    }
    else {
        // Default to first value for invalid input
        return SYSTEM;
    }
}

WindowAudioPreferenceEnum::WindowAudioPreferenceEnum(Value v) noexcept : emlite::Val(WindowAudioPreferenceEnum::to_string(v)), value_(v) {}
WindowAudioPreferenceEnum::WindowAudioPreferenceEnum(Handle h) noexcept: emlite::Val(h) {
    value_ = WindowAudioPreferenceEnum::from_string(as<emlite::Uniq<char[]>>().get());
}

WindowAudioPreferenceEnum::WindowAudioPreferenceEnum(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = WindowAudioPreferenceEnum::from_string(as<emlite::Uniq<char[]>>().get());
}

WindowAudioPreferenceEnum WindowAudioPreferenceEnum::take_ownership(Handle h) noexcept { return WindowAudioPreferenceEnum(h); }
WindowAudioPreferenceEnum WindowAudioPreferenceEnum::clone() const noexcept { return *this; }
const char* WindowAudioPreferenceEnum::to_string(WindowAudioPreferenceEnum::Value value_) noexcept {
    switch (value_) {
        case SYSTEM:
            return "system";
        case WINDOW:
            return "window";
        case EXCLUDE:
            return "exclude";
        default:
            return "system"; // fallback to first value
    }
}

SurfaceSwitchingPreferenceEnum::Value SurfaceSwitchingPreferenceEnum::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "include", strlen("include"))) {
        return INCLUDE;
    }
    else if (__builtin_strncmp(str, "exclude", strlen("exclude"))) {
        return EXCLUDE;
    }
    else {
        // Default to first value for invalid input
        return INCLUDE;
    }
}

SurfaceSwitchingPreferenceEnum::SurfaceSwitchingPreferenceEnum(Value v) noexcept : emlite::Val(SurfaceSwitchingPreferenceEnum::to_string(v)), value_(v) {}
SurfaceSwitchingPreferenceEnum::SurfaceSwitchingPreferenceEnum(Handle h) noexcept: emlite::Val(h) {
    value_ = SurfaceSwitchingPreferenceEnum::from_string(as<emlite::Uniq<char[]>>().get());
}

SurfaceSwitchingPreferenceEnum::SurfaceSwitchingPreferenceEnum(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = SurfaceSwitchingPreferenceEnum::from_string(as<emlite::Uniq<char[]>>().get());
}

SurfaceSwitchingPreferenceEnum SurfaceSwitchingPreferenceEnum::take_ownership(Handle h) noexcept { return SurfaceSwitchingPreferenceEnum(h); }
SurfaceSwitchingPreferenceEnum SurfaceSwitchingPreferenceEnum::clone() const noexcept { return *this; }
const char* SurfaceSwitchingPreferenceEnum::to_string(SurfaceSwitchingPreferenceEnum::Value value_) noexcept {
    switch (value_) {
        case INCLUDE:
            return "include";
        case EXCLUDE:
            return "exclude";
        default:
            return "include"; // fallback to first value
    }
}

MonitorTypeSurfacesEnum::Value MonitorTypeSurfacesEnum::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "include", strlen("include"))) {
        return INCLUDE;
    }
    else if (__builtin_strncmp(str, "exclude", strlen("exclude"))) {
        return EXCLUDE;
    }
    else {
        // Default to first value for invalid input
        return INCLUDE;
    }
}

MonitorTypeSurfacesEnum::MonitorTypeSurfacesEnum(Value v) noexcept : emlite::Val(MonitorTypeSurfacesEnum::to_string(v)), value_(v) {}
MonitorTypeSurfacesEnum::MonitorTypeSurfacesEnum(Handle h) noexcept: emlite::Val(h) {
    value_ = MonitorTypeSurfacesEnum::from_string(as<emlite::Uniq<char[]>>().get());
}

MonitorTypeSurfacesEnum::MonitorTypeSurfacesEnum(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = MonitorTypeSurfacesEnum::from_string(as<emlite::Uniq<char[]>>().get());
}

MonitorTypeSurfacesEnum MonitorTypeSurfacesEnum::take_ownership(Handle h) noexcept { return MonitorTypeSurfacesEnum(h); }
MonitorTypeSurfacesEnum MonitorTypeSurfacesEnum::clone() const noexcept { return *this; }
const char* MonitorTypeSurfacesEnum::to_string(MonitorTypeSurfacesEnum::Value value_) noexcept {
    switch (value_) {
        case INCLUDE:
            return "include";
        case EXCLUDE:
            return "exclude";
        default:
            return "include"; // fallback to first value
    }
}

DisplayCaptureSurfaceType::Value DisplayCaptureSurfaceType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "monitor", strlen("monitor"))) {
        return MONITOR;
    }
    else if (__builtin_strncmp(str, "window", strlen("window"))) {
        return WINDOW;
    }
    else if (__builtin_strncmp(str, "browser", strlen("browser"))) {
        return BROWSER;
    }
    else {
        // Default to first value for invalid input
        return MONITOR;
    }
}

DisplayCaptureSurfaceType::DisplayCaptureSurfaceType(Value v) noexcept : emlite::Val(DisplayCaptureSurfaceType::to_string(v)), value_(v) {}
DisplayCaptureSurfaceType::DisplayCaptureSurfaceType(Handle h) noexcept: emlite::Val(h) {
    value_ = DisplayCaptureSurfaceType::from_string(as<emlite::Uniq<char[]>>().get());
}

DisplayCaptureSurfaceType::DisplayCaptureSurfaceType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = DisplayCaptureSurfaceType::from_string(as<emlite::Uniq<char[]>>().get());
}

DisplayCaptureSurfaceType DisplayCaptureSurfaceType::take_ownership(Handle h) noexcept { return DisplayCaptureSurfaceType(h); }
DisplayCaptureSurfaceType DisplayCaptureSurfaceType::clone() const noexcept { return *this; }
const char* DisplayCaptureSurfaceType::to_string(DisplayCaptureSurfaceType::Value value_) noexcept {
    switch (value_) {
        case MONITOR:
            return "monitor";
        case WINDOW:
            return "window";
        case BROWSER:
            return "browser";
        default:
            return "monitor"; // fallback to first value
    }
}

CursorCaptureConstraint::Value CursorCaptureConstraint::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "never", strlen("never"))) {
        return NEVER;
    }
    else if (__builtin_strncmp(str, "always", strlen("always"))) {
        return ALWAYS;
    }
    else if (__builtin_strncmp(str, "motion", strlen("motion"))) {
        return MOTION;
    }
    else {
        // Default to first value for invalid input
        return NEVER;
    }
}

CursorCaptureConstraint::CursorCaptureConstraint(Value v) noexcept : emlite::Val(CursorCaptureConstraint::to_string(v)), value_(v) {}
CursorCaptureConstraint::CursorCaptureConstraint(Handle h) noexcept: emlite::Val(h) {
    value_ = CursorCaptureConstraint::from_string(as<emlite::Uniq<char[]>>().get());
}

CursorCaptureConstraint::CursorCaptureConstraint(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = CursorCaptureConstraint::from_string(as<emlite::Uniq<char[]>>().get());
}

CursorCaptureConstraint CursorCaptureConstraint::take_ownership(Handle h) noexcept { return CursorCaptureConstraint(h); }
CursorCaptureConstraint CursorCaptureConstraint::clone() const noexcept { return *this; }
const char* CursorCaptureConstraint::to_string(CursorCaptureConstraint::Value value_) noexcept {
    switch (value_) {
        case NEVER:
            return "never";
        case ALWAYS:
            return "always";
        case MOTION:
            return "motion";
        default:
            return "never"; // fallback to first value
    }
}

OrientationLockType::Value OrientationLockType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "any", strlen("any"))) {
        return ANY;
    }
    else if (__builtin_strncmp(str, "natural", strlen("natural"))) {
        return NATURAL;
    }
    else if (__builtin_strncmp(str, "landscape", strlen("landscape"))) {
        return LANDSCAPE;
    }
    else if (__builtin_strncmp(str, "portrait", strlen("portrait"))) {
        return PORTRAIT;
    }
    else if (__builtin_strncmp(str, "portrait-primary", strlen("portrait-primary"))) {
        return PORTRAIT_PRIMARY;
    }
    else if (__builtin_strncmp(str, "portrait-secondary", strlen("portrait-secondary"))) {
        return PORTRAIT_SECONDARY;
    }
    else if (__builtin_strncmp(str, "landscape-primary", strlen("landscape-primary"))) {
        return LANDSCAPE_PRIMARY;
    }
    else if (__builtin_strncmp(str, "landscape-secondary", strlen("landscape-secondary"))) {
        return LANDSCAPE_SECONDARY;
    }
    else {
        // Default to first value for invalid input
        return ANY;
    }
}

OrientationLockType::OrientationLockType(Value v) noexcept : emlite::Val(OrientationLockType::to_string(v)), value_(v) {}
OrientationLockType::OrientationLockType(Handle h) noexcept: emlite::Val(h) {
    value_ = OrientationLockType::from_string(as<emlite::Uniq<char[]>>().get());
}

OrientationLockType::OrientationLockType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = OrientationLockType::from_string(as<emlite::Uniq<char[]>>().get());
}

OrientationLockType OrientationLockType::take_ownership(Handle h) noexcept { return OrientationLockType(h); }
OrientationLockType OrientationLockType::clone() const noexcept { return *this; }
const char* OrientationLockType::to_string(OrientationLockType::Value value_) noexcept {
    switch (value_) {
        case ANY:
            return "any";
        case NATURAL:
            return "natural";
        case LANDSCAPE:
            return "landscape";
        case PORTRAIT:
            return "portrait";
        case PORTRAIT_PRIMARY:
            return "portrait-primary";
        case PORTRAIT_SECONDARY:
            return "portrait-secondary";
        case LANDSCAPE_PRIMARY:
            return "landscape-primary";
        case LANDSCAPE_SECONDARY:
            return "landscape-secondary";
        default:
            return "any"; // fallback to first value
    }
}

OrientationType::Value OrientationType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "portrait-primary", strlen("portrait-primary"))) {
        return PORTRAIT_PRIMARY;
    }
    else if (__builtin_strncmp(str, "portrait-secondary", strlen("portrait-secondary"))) {
        return PORTRAIT_SECONDARY;
    }
    else if (__builtin_strncmp(str, "landscape-primary", strlen("landscape-primary"))) {
        return LANDSCAPE_PRIMARY;
    }
    else if (__builtin_strncmp(str, "landscape-secondary", strlen("landscape-secondary"))) {
        return LANDSCAPE_SECONDARY;
    }
    else {
        // Default to first value for invalid input
        return PORTRAIT_PRIMARY;
    }
}

OrientationType::OrientationType(Value v) noexcept : emlite::Val(OrientationType::to_string(v)), value_(v) {}
OrientationType::OrientationType(Handle h) noexcept: emlite::Val(h) {
    value_ = OrientationType::from_string(as<emlite::Uniq<char[]>>().get());
}

OrientationType::OrientationType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = OrientationType::from_string(as<emlite::Uniq<char[]>>().get());
}

OrientationType OrientationType::take_ownership(Handle h) noexcept { return OrientationType(h); }
OrientationType OrientationType::clone() const noexcept { return *this; }
const char* OrientationType::to_string(OrientationType::Value value_) noexcept {
    switch (value_) {
        case PORTRAIT_PRIMARY:
            return "portrait-primary";
        case PORTRAIT_SECONDARY:
            return "portrait-secondary";
        case LANDSCAPE_PRIMARY:
            return "landscape-primary";
        case LANDSCAPE_SECONDARY:
            return "landscape-secondary";
        default:
            return "portrait-primary"; // fallback to first value
    }
}

WakeLockType::Value WakeLockType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "screen", strlen("screen"))) {
        return SCREEN;
    }
    else {
        // Default to first value for invalid input
        return SCREEN;
    }
}

WakeLockType::WakeLockType(Value v) noexcept : emlite::Val(WakeLockType::to_string(v)), value_(v) {}
WakeLockType::WakeLockType(Handle h) noexcept: emlite::Val(h) {
    value_ = WakeLockType::from_string(as<emlite::Uniq<char[]>>().get());
}

WakeLockType::WakeLockType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = WakeLockType::from_string(as<emlite::Uniq<char[]>>().get());
}

WakeLockType WakeLockType::take_ownership(Handle h) noexcept { return WakeLockType(h); }
WakeLockType WakeLockType::clone() const noexcept { return *this; }
const char* WakeLockType::to_string(WakeLockType::Value value_) noexcept {
    switch (value_) {
        case SCREEN:
            return "screen";
        default:
            return "screen"; // fallback to first value
    }
}

ScrollAxis::Value ScrollAxis::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "block", strlen("block"))) {
        return BLOCK;
    }
    else if (__builtin_strncmp(str, "inline", strlen("inline"))) {
        return INLINE_;
    }
    else if (__builtin_strncmp(str, "x", strlen("x"))) {
        return X;
    }
    else if (__builtin_strncmp(str, "y", strlen("y"))) {
        return Y;
    }
    else {
        // Default to first value for invalid input
        return BLOCK;
    }
}

ScrollAxis::ScrollAxis(Value v) noexcept : emlite::Val(ScrollAxis::to_string(v)), value_(v) {}
ScrollAxis::ScrollAxis(Handle h) noexcept: emlite::Val(h) {
    value_ = ScrollAxis::from_string(as<emlite::Uniq<char[]>>().get());
}

ScrollAxis::ScrollAxis(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = ScrollAxis::from_string(as<emlite::Uniq<char[]>>().get());
}

ScrollAxis ScrollAxis::take_ownership(Handle h) noexcept { return ScrollAxis(h); }
ScrollAxis ScrollAxis::clone() const noexcept { return *this; }
const char* ScrollAxis::to_string(ScrollAxis::Value value_) noexcept {
    switch (value_) {
        case BLOCK:
            return "block";
        case INLINE_:
            return "inline";
        case X:
            return "x";
        case Y:
            return "y";
        default:
            return "block"; // fallback to first value
    }
}

SecurePaymentConfirmationAvailability::Value SecurePaymentConfirmationAvailability::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "available", strlen("available"))) {
        return AVAILABLE;
    }
    else if (__builtin_strncmp(str, "unavailable-unknown-reason", strlen("unavailable-unknown-reason"))) {
        return UNAVAILABLE_UNKNOWN_REASON;
    }
    else if (__builtin_strncmp(str, "unavailable-feature-not-enabled", strlen("unavailable-feature-not-enabled"))) {
        return UNAVAILABLE_FEATURE_NOT_ENABLED;
    }
    else if (__builtin_strncmp(str, "unavailable-no-permission-policy", strlen("unavailable-no-permission-policy"))) {
        return UNAVAILABLE_NO_PERMISSION_POLICY;
    }
    else if (__builtin_strncmp(str, "unavailable-no-user-verifying-platform-authenticator", strlen("unavailable-no-user-verifying-platform-authenticator"))) {
        return UNAVAILABLE_NO_USER_VERIFYING_PLATFORM_AUTHENTICATOR;
    }
    else {
        // Default to first value for invalid input
        return AVAILABLE;
    }
}

SecurePaymentConfirmationAvailability::SecurePaymentConfirmationAvailability(Value v) noexcept : emlite::Val(SecurePaymentConfirmationAvailability::to_string(v)), value_(v) {}
SecurePaymentConfirmationAvailability::SecurePaymentConfirmationAvailability(Handle h) noexcept: emlite::Val(h) {
    value_ = SecurePaymentConfirmationAvailability::from_string(as<emlite::Uniq<char[]>>().get());
}

SecurePaymentConfirmationAvailability::SecurePaymentConfirmationAvailability(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = SecurePaymentConfirmationAvailability::from_string(as<emlite::Uniq<char[]>>().get());
}

SecurePaymentConfirmationAvailability SecurePaymentConfirmationAvailability::take_ownership(Handle h) noexcept { return SecurePaymentConfirmationAvailability(h); }
SecurePaymentConfirmationAvailability SecurePaymentConfirmationAvailability::clone() const noexcept { return *this; }
const char* SecurePaymentConfirmationAvailability::to_string(SecurePaymentConfirmationAvailability::Value value_) noexcept {
    switch (value_) {
        case AVAILABLE:
            return "available";
        case UNAVAILABLE_UNKNOWN_REASON:
            return "unavailable-unknown-reason";
        case UNAVAILABLE_FEATURE_NOT_ENABLED:
            return "unavailable-feature-not-enabled";
        case UNAVAILABLE_NO_PERMISSION_POLICY:
            return "unavailable-no-permission-policy";
        case UNAVAILABLE_NO_USER_VERIFYING_PLATFORM_AUTHENTICATOR:
            return "unavailable-no-user-verifying-platform-authenticator";
        default:
            return "available"; // fallback to first value
    }
}

ParityType::Value ParityType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "none", strlen("none"))) {
        return NONE;
    }
    else if (__builtin_strncmp(str, "even", strlen("even"))) {
        return EVEN;
    }
    else if (__builtin_strncmp(str, "odd", strlen("odd"))) {
        return ODD;
    }
    else {
        // Default to first value for invalid input
        return NONE;
    }
}

ParityType::ParityType(Value v) noexcept : emlite::Val(ParityType::to_string(v)), value_(v) {}
ParityType::ParityType(Handle h) noexcept: emlite::Val(h) {
    value_ = ParityType::from_string(as<emlite::Uniq<char[]>>().get());
}

ParityType::ParityType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = ParityType::from_string(as<emlite::Uniq<char[]>>().get());
}

ParityType ParityType::take_ownership(Handle h) noexcept { return ParityType(h); }
ParityType ParityType::clone() const noexcept { return *this; }
const char* ParityType::to_string(ParityType::Value value_) noexcept {
    switch (value_) {
        case NONE:
            return "none";
        case EVEN:
            return "even";
        case ODD:
            return "odd";
        default:
            return "none"; // fallback to first value
    }
}

FlowControlType::Value FlowControlType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "none", strlen("none"))) {
        return NONE;
    }
    else if (__builtin_strncmp(str, "hardware", strlen("hardware"))) {
        return HARDWARE;
    }
    else {
        // Default to first value for invalid input
        return NONE;
    }
}

FlowControlType::FlowControlType(Value v) noexcept : emlite::Val(FlowControlType::to_string(v)), value_(v) {}
FlowControlType::FlowControlType(Handle h) noexcept: emlite::Val(h) {
    value_ = FlowControlType::from_string(as<emlite::Uniq<char[]>>().get());
}

FlowControlType::FlowControlType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = FlowControlType::from_string(as<emlite::Uniq<char[]>>().get());
}

FlowControlType FlowControlType::take_ownership(Handle h) noexcept { return FlowControlType(h); }
FlowControlType FlowControlType::clone() const noexcept { return *this; }
const char* FlowControlType::to_string(FlowControlType::Value value_) noexcept {
    switch (value_) {
        case NONE:
            return "none";
        case HARDWARE:
            return "hardware";
        default:
            return "none"; // fallback to first value
    }
}

ServiceWorkerState::Value ServiceWorkerState::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "parsed", strlen("parsed"))) {
        return PARSED;
    }
    else if (__builtin_strncmp(str, "installing", strlen("installing"))) {
        return INSTALLING;
    }
    else if (__builtin_strncmp(str, "installed", strlen("installed"))) {
        return INSTALLED;
    }
    else if (__builtin_strncmp(str, "activating", strlen("activating"))) {
        return ACTIVATING;
    }
    else if (__builtin_strncmp(str, "activated", strlen("activated"))) {
        return ACTIVATED;
    }
    else if (__builtin_strncmp(str, "redundant", strlen("redundant"))) {
        return REDUNDANT;
    }
    else {
        // Default to first value for invalid input
        return PARSED;
    }
}

ServiceWorkerState::ServiceWorkerState(Value v) noexcept : emlite::Val(ServiceWorkerState::to_string(v)), value_(v) {}
ServiceWorkerState::ServiceWorkerState(Handle h) noexcept: emlite::Val(h) {
    value_ = ServiceWorkerState::from_string(as<emlite::Uniq<char[]>>().get());
}

ServiceWorkerState::ServiceWorkerState(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = ServiceWorkerState::from_string(as<emlite::Uniq<char[]>>().get());
}

ServiceWorkerState ServiceWorkerState::take_ownership(Handle h) noexcept { return ServiceWorkerState(h); }
ServiceWorkerState ServiceWorkerState::clone() const noexcept { return *this; }
const char* ServiceWorkerState::to_string(ServiceWorkerState::Value value_) noexcept {
    switch (value_) {
        case PARSED:
            return "parsed";
        case INSTALLING:
            return "installing";
        case INSTALLED:
            return "installed";
        case ACTIVATING:
            return "activating";
        case ACTIVATED:
            return "activated";
        case REDUNDANT:
            return "redundant";
        default:
            return "parsed"; // fallback to first value
    }
}

ServiceWorkerUpdateViaCache::Value ServiceWorkerUpdateViaCache::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "imports", strlen("imports"))) {
        return IMPORTS;
    }
    else if (__builtin_strncmp(str, "all", strlen("all"))) {
        return ALL;
    }
    else if (__builtin_strncmp(str, "none", strlen("none"))) {
        return NONE;
    }
    else {
        // Default to first value for invalid input
        return IMPORTS;
    }
}

ServiceWorkerUpdateViaCache::ServiceWorkerUpdateViaCache(Value v) noexcept : emlite::Val(ServiceWorkerUpdateViaCache::to_string(v)), value_(v) {}
ServiceWorkerUpdateViaCache::ServiceWorkerUpdateViaCache(Handle h) noexcept: emlite::Val(h) {
    value_ = ServiceWorkerUpdateViaCache::from_string(as<emlite::Uniq<char[]>>().get());
}

ServiceWorkerUpdateViaCache::ServiceWorkerUpdateViaCache(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = ServiceWorkerUpdateViaCache::from_string(as<emlite::Uniq<char[]>>().get());
}

ServiceWorkerUpdateViaCache ServiceWorkerUpdateViaCache::take_ownership(Handle h) noexcept { return ServiceWorkerUpdateViaCache(h); }
ServiceWorkerUpdateViaCache ServiceWorkerUpdateViaCache::clone() const noexcept { return *this; }
const char* ServiceWorkerUpdateViaCache::to_string(ServiceWorkerUpdateViaCache::Value value_) noexcept {
    switch (value_) {
        case IMPORTS:
            return "imports";
        case ALL:
            return "all";
        case NONE:
            return "none";
        default:
            return "imports"; // fallback to first value
    }
}

FrameType::Value FrameType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "auxiliary", strlen("auxiliary"))) {
        return AUXILIARY;
    }
    else if (__builtin_strncmp(str, "top-level", strlen("top-level"))) {
        return TOP_LEVEL;
    }
    else if (__builtin_strncmp(str, "nested", strlen("nested"))) {
        return NESTED;
    }
    else if (__builtin_strncmp(str, "none", strlen("none"))) {
        return NONE;
    }
    else {
        // Default to first value for invalid input
        return AUXILIARY;
    }
}

FrameType::FrameType(Value v) noexcept : emlite::Val(FrameType::to_string(v)), value_(v) {}
FrameType::FrameType(Handle h) noexcept: emlite::Val(h) {
    value_ = FrameType::from_string(as<emlite::Uniq<char[]>>().get());
}

FrameType::FrameType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = FrameType::from_string(as<emlite::Uniq<char[]>>().get());
}

FrameType FrameType::take_ownership(Handle h) noexcept { return FrameType(h); }
FrameType FrameType::clone() const noexcept { return *this; }
const char* FrameType::to_string(FrameType::Value value_) noexcept {
    switch (value_) {
        case AUXILIARY:
            return "auxiliary";
        case TOP_LEVEL:
            return "top-level";
        case NESTED:
            return "nested";
        case NONE:
            return "none";
        default:
            return "auxiliary"; // fallback to first value
    }
}

ClientType::Value ClientType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "window", strlen("window"))) {
        return WINDOW;
    }
    else if (__builtin_strncmp(str, "worker", strlen("worker"))) {
        return WORKER;
    }
    else if (__builtin_strncmp(str, "sharedworker", strlen("sharedworker"))) {
        return SHAREDWORKER;
    }
    else if (__builtin_strncmp(str, "all", strlen("all"))) {
        return ALL;
    }
    else {
        // Default to first value for invalid input
        return WINDOW;
    }
}

ClientType::ClientType(Value v) noexcept : emlite::Val(ClientType::to_string(v)), value_(v) {}
ClientType::ClientType(Handle h) noexcept: emlite::Val(h) {
    value_ = ClientType::from_string(as<emlite::Uniq<char[]>>().get());
}

ClientType::ClientType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = ClientType::from_string(as<emlite::Uniq<char[]>>().get());
}

ClientType ClientType::take_ownership(Handle h) noexcept { return ClientType(h); }
ClientType ClientType::clone() const noexcept { return *this; }
const char* ClientType::to_string(ClientType::Value value_) noexcept {
    switch (value_) {
        case WINDOW:
            return "window";
        case WORKER:
            return "worker";
        case SHAREDWORKER:
            return "sharedworker";
        case ALL:
            return "all";
        default:
            return "window"; // fallback to first value
    }
}

RunningStatus::Value RunningStatus::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "running", strlen("running"))) {
        return RUNNING;
    }
    else if (__builtin_strncmp(str, "not-running", strlen("not-running"))) {
        return NOT_RUNNING;
    }
    else {
        // Default to first value for invalid input
        return RUNNING;
    }
}

RunningStatus::RunningStatus(Value v) noexcept : emlite::Val(RunningStatus::to_string(v)), value_(v) {}
RunningStatus::RunningStatus(Handle h) noexcept: emlite::Val(h) {
    value_ = RunningStatus::from_string(as<emlite::Uniq<char[]>>().get());
}

RunningStatus::RunningStatus(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RunningStatus::from_string(as<emlite::Uniq<char[]>>().get());
}

RunningStatus RunningStatus::take_ownership(Handle h) noexcept { return RunningStatus(h); }
RunningStatus RunningStatus::clone() const noexcept { return *this; }
const char* RunningStatus::to_string(RunningStatus::Value value_) noexcept {
    switch (value_) {
        case RUNNING:
            return "running";
        case NOT_RUNNING:
            return "not-running";
        default:
            return "running"; // fallback to first value
    }
}

RouterSourceEnum::Value RouterSourceEnum::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "cache", strlen("cache"))) {
        return CACHE;
    }
    else if (__builtin_strncmp(str, "fetch-event", strlen("fetch-event"))) {
        return FETCH_EVENT;
    }
    else if (__builtin_strncmp(str, "network", strlen("network"))) {
        return NETWORK;
    }
    else if (__builtin_strncmp(str, "race-network-and-fetch-handler", strlen("race-network-and-fetch-handler"))) {
        return RACE_NETWORK_AND_FETCH_HANDLER;
    }
    else {
        // Default to first value for invalid input
        return CACHE;
    }
}

RouterSourceEnum::RouterSourceEnum(Value v) noexcept : emlite::Val(RouterSourceEnum::to_string(v)), value_(v) {}
RouterSourceEnum::RouterSourceEnum(Handle h) noexcept: emlite::Val(h) {
    value_ = RouterSourceEnum::from_string(as<emlite::Uniq<char[]>>().get());
}

RouterSourceEnum::RouterSourceEnum(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RouterSourceEnum::from_string(as<emlite::Uniq<char[]>>().get());
}

RouterSourceEnum RouterSourceEnum::take_ownership(Handle h) noexcept { return RouterSourceEnum(h); }
RouterSourceEnum RouterSourceEnum::clone() const noexcept { return *this; }
const char* RouterSourceEnum::to_string(RouterSourceEnum::Value value_) noexcept {
    switch (value_) {
        case CACHE:
            return "cache";
        case FETCH_EVENT:
            return "fetch-event";
        case NETWORK:
            return "network";
        case RACE_NETWORK_AND_FETCH_HANDLER:
            return "race-network-and-fetch-handler";
        default:
            return "cache"; // fallback to first value
    }
}

LandmarkType::Value LandmarkType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "mouth", strlen("mouth"))) {
        return MOUTH;
    }
    else if (__builtin_strncmp(str, "eye", strlen("eye"))) {
        return EYE;
    }
    else if (__builtin_strncmp(str, "nose", strlen("nose"))) {
        return NOSE;
    }
    else {
        // Default to first value for invalid input
        return MOUTH;
    }
}

LandmarkType::LandmarkType(Value v) noexcept : emlite::Val(LandmarkType::to_string(v)), value_(v) {}
LandmarkType::LandmarkType(Handle h) noexcept: emlite::Val(h) {
    value_ = LandmarkType::from_string(as<emlite::Uniq<char[]>>().get());
}

LandmarkType::LandmarkType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = LandmarkType::from_string(as<emlite::Uniq<char[]>>().get());
}

LandmarkType LandmarkType::take_ownership(Handle h) noexcept { return LandmarkType(h); }
LandmarkType LandmarkType::clone() const noexcept { return *this; }
const char* LandmarkType::to_string(LandmarkType::Value value_) noexcept {
    switch (value_) {
        case MOUTH:
            return "mouth";
        case EYE:
            return "eye";
        case NOSE:
            return "nose";
        default:
            return "mouth"; // fallback to first value
    }
}

BarcodeFormat::Value BarcodeFormat::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "aztec", strlen("aztec"))) {
        return AZTEC;
    }
    else if (__builtin_strncmp(str, "code_128", strlen("code_128"))) {
        return CODE_128;
    }
    else if (__builtin_strncmp(str, "code_39", strlen("code_39"))) {
        return CODE_39;
    }
    else if (__builtin_strncmp(str, "code_93", strlen("code_93"))) {
        return CODE_93;
    }
    else if (__builtin_strncmp(str, "codabar", strlen("codabar"))) {
        return CODABAR;
    }
    else if (__builtin_strncmp(str, "data_matrix", strlen("data_matrix"))) {
        return DATA_MATRIX;
    }
    else if (__builtin_strncmp(str, "ean_13", strlen("ean_13"))) {
        return EAN_13;
    }
    else if (__builtin_strncmp(str, "ean_8", strlen("ean_8"))) {
        return EAN_8;
    }
    else if (__builtin_strncmp(str, "itf", strlen("itf"))) {
        return ITF;
    }
    else if (__builtin_strncmp(str, "pdf417", strlen("pdf417"))) {
        return PDF417;
    }
    else if (__builtin_strncmp(str, "qr_code", strlen("qr_code"))) {
        return QR_CODE;
    }
    else if (__builtin_strncmp(str, "unknown", strlen("unknown"))) {
        return UNKNOWN;
    }
    else if (__builtin_strncmp(str, "upc_a", strlen("upc_a"))) {
        return UPC_A;
    }
    else if (__builtin_strncmp(str, "upc_e", strlen("upc_e"))) {
        return UPC_E;
    }
    else {
        // Default to first value for invalid input
        return AZTEC;
    }
}

BarcodeFormat::BarcodeFormat(Value v) noexcept : emlite::Val(BarcodeFormat::to_string(v)), value_(v) {}
BarcodeFormat::BarcodeFormat(Handle h) noexcept: emlite::Val(h) {
    value_ = BarcodeFormat::from_string(as<emlite::Uniq<char[]>>().get());
}

BarcodeFormat::BarcodeFormat(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = BarcodeFormat::from_string(as<emlite::Uniq<char[]>>().get());
}

BarcodeFormat BarcodeFormat::take_ownership(Handle h) noexcept { return BarcodeFormat(h); }
BarcodeFormat BarcodeFormat::clone() const noexcept { return *this; }
const char* BarcodeFormat::to_string(BarcodeFormat::Value value_) noexcept {
    switch (value_) {
        case AZTEC:
            return "aztec";
        case CODE_128:
            return "code_128";
        case CODE_39:
            return "code_39";
        case CODE_93:
            return "code_93";
        case CODABAR:
            return "codabar";
        case DATA_MATRIX:
            return "data_matrix";
        case EAN_13:
            return "ean_13";
        case EAN_8:
            return "ean_8";
        case ITF:
            return "itf";
        case PDF417:
            return "pdf417";
        case QR_CODE:
            return "qr_code";
        case UNKNOWN:
            return "unknown";
        case UPC_A:
            return "upc_a";
        case UPC_E:
            return "upc_e";
        default:
            return "aztec"; // fallback to first value
    }
}

SpeechRecognitionErrorCode::Value SpeechRecognitionErrorCode::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "no-speech", strlen("no-speech"))) {
        return NO_SPEECH;
    }
    else if (__builtin_strncmp(str, "aborted", strlen("aborted"))) {
        return ABORTED;
    }
    else if (__builtin_strncmp(str, "audio-capture", strlen("audio-capture"))) {
        return AUDIO_CAPTURE;
    }
    else if (__builtin_strncmp(str, "network", strlen("network"))) {
        return NETWORK;
    }
    else if (__builtin_strncmp(str, "not-allowed", strlen("not-allowed"))) {
        return NOT_ALLOWED;
    }
    else if (__builtin_strncmp(str, "service-not-allowed", strlen("service-not-allowed"))) {
        return SERVICE_NOT_ALLOWED;
    }
    else if (__builtin_strncmp(str, "language-not-supported", strlen("language-not-supported"))) {
        return LANGUAGE_NOT_SUPPORTED;
    }
    else if (__builtin_strncmp(str, "phrases-not-supported", strlen("phrases-not-supported"))) {
        return PHRASES_NOT_SUPPORTED;
    }
    else {
        // Default to first value for invalid input
        return NO_SPEECH;
    }
}

SpeechRecognitionErrorCode::SpeechRecognitionErrorCode(Value v) noexcept : emlite::Val(SpeechRecognitionErrorCode::to_string(v)), value_(v) {}
SpeechRecognitionErrorCode::SpeechRecognitionErrorCode(Handle h) noexcept: emlite::Val(h) {
    value_ = SpeechRecognitionErrorCode::from_string(as<emlite::Uniq<char[]>>().get());
}

SpeechRecognitionErrorCode::SpeechRecognitionErrorCode(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = SpeechRecognitionErrorCode::from_string(as<emlite::Uniq<char[]>>().get());
}

SpeechRecognitionErrorCode SpeechRecognitionErrorCode::take_ownership(Handle h) noexcept { return SpeechRecognitionErrorCode(h); }
SpeechRecognitionErrorCode SpeechRecognitionErrorCode::clone() const noexcept { return *this; }
const char* SpeechRecognitionErrorCode::to_string(SpeechRecognitionErrorCode::Value value_) noexcept {
    switch (value_) {
        case NO_SPEECH:
            return "no-speech";
        case ABORTED:
            return "aborted";
        case AUDIO_CAPTURE:
            return "audio-capture";
        case NETWORK:
            return "network";
        case NOT_ALLOWED:
            return "not-allowed";
        case SERVICE_NOT_ALLOWED:
            return "service-not-allowed";
        case LANGUAGE_NOT_SUPPORTED:
            return "language-not-supported";
        case PHRASES_NOT_SUPPORTED:
            return "phrases-not-supported";
        default:
            return "no-speech"; // fallback to first value
    }
}

AvailabilityStatus::Value AvailabilityStatus::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "unavailable", strlen("unavailable"))) {
        return UNAVAILABLE;
    }
    else if (__builtin_strncmp(str, "downloadable", strlen("downloadable"))) {
        return DOWNLOADABLE;
    }
    else if (__builtin_strncmp(str, "downloading", strlen("downloading"))) {
        return DOWNLOADING;
    }
    else if (__builtin_strncmp(str, "available", strlen("available"))) {
        return AVAILABLE;
    }
    else {
        // Default to first value for invalid input
        return UNAVAILABLE;
    }
}

AvailabilityStatus::AvailabilityStatus(Value v) noexcept : emlite::Val(AvailabilityStatus::to_string(v)), value_(v) {}
AvailabilityStatus::AvailabilityStatus(Handle h) noexcept: emlite::Val(h) {
    value_ = AvailabilityStatus::from_string(as<emlite::Uniq<char[]>>().get());
}

AvailabilityStatus::AvailabilityStatus(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = AvailabilityStatus::from_string(as<emlite::Uniq<char[]>>().get());
}

AvailabilityStatus AvailabilityStatus::take_ownership(Handle h) noexcept { return AvailabilityStatus(h); }
AvailabilityStatus AvailabilityStatus::clone() const noexcept { return *this; }
const char* AvailabilityStatus::to_string(AvailabilityStatus::Value value_) noexcept {
    switch (value_) {
        case UNAVAILABLE:
            return "unavailable";
        case DOWNLOADABLE:
            return "downloadable";
        case DOWNLOADING:
            return "downloading";
        case AVAILABLE:
            return "available";
        default:
            return "unavailable"; // fallback to first value
    }
}

SpeechSynthesisErrorCode::Value SpeechSynthesisErrorCode::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "canceled", strlen("canceled"))) {
        return CANCELED;
    }
    else if (__builtin_strncmp(str, "interrupted", strlen("interrupted"))) {
        return INTERRUPTED;
    }
    else if (__builtin_strncmp(str, "audio-busy", strlen("audio-busy"))) {
        return AUDIO_BUSY;
    }
    else if (__builtin_strncmp(str, "audio-hardware", strlen("audio-hardware"))) {
        return AUDIO_HARDWARE;
    }
    else if (__builtin_strncmp(str, "network", strlen("network"))) {
        return NETWORK;
    }
    else if (__builtin_strncmp(str, "synthesis-unavailable", strlen("synthesis-unavailable"))) {
        return SYNTHESIS_UNAVAILABLE;
    }
    else if (__builtin_strncmp(str, "synthesis-failed", strlen("synthesis-failed"))) {
        return SYNTHESIS_FAILED;
    }
    else if (__builtin_strncmp(str, "language-unavailable", strlen("language-unavailable"))) {
        return LANGUAGE_UNAVAILABLE;
    }
    else if (__builtin_strncmp(str, "voice-unavailable", strlen("voice-unavailable"))) {
        return VOICE_UNAVAILABLE;
    }
    else if (__builtin_strncmp(str, "text-too-long", strlen("text-too-long"))) {
        return TEXT_TOO_LONG;
    }
    else if (__builtin_strncmp(str, "invalid-argument", strlen("invalid-argument"))) {
        return INVALID_ARGUMENT;
    }
    else if (__builtin_strncmp(str, "not-allowed", strlen("not-allowed"))) {
        return NOT_ALLOWED;
    }
    else {
        // Default to first value for invalid input
        return CANCELED;
    }
}

SpeechSynthesisErrorCode::SpeechSynthesisErrorCode(Value v) noexcept : emlite::Val(SpeechSynthesisErrorCode::to_string(v)), value_(v) {}
SpeechSynthesisErrorCode::SpeechSynthesisErrorCode(Handle h) noexcept: emlite::Val(h) {
    value_ = SpeechSynthesisErrorCode::from_string(as<emlite::Uniq<char[]>>().get());
}

SpeechSynthesisErrorCode::SpeechSynthesisErrorCode(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = SpeechSynthesisErrorCode::from_string(as<emlite::Uniq<char[]>>().get());
}

SpeechSynthesisErrorCode SpeechSynthesisErrorCode::take_ownership(Handle h) noexcept { return SpeechSynthesisErrorCode(h); }
SpeechSynthesisErrorCode SpeechSynthesisErrorCode::clone() const noexcept { return *this; }
const char* SpeechSynthesisErrorCode::to_string(SpeechSynthesisErrorCode::Value value_) noexcept {
    switch (value_) {
        case CANCELED:
            return "canceled";
        case INTERRUPTED:
            return "interrupted";
        case AUDIO_BUSY:
            return "audio-busy";
        case AUDIO_HARDWARE:
            return "audio-hardware";
        case NETWORK:
            return "network";
        case SYNTHESIS_UNAVAILABLE:
            return "synthesis-unavailable";
        case SYNTHESIS_FAILED:
            return "synthesis-failed";
        case LANGUAGE_UNAVAILABLE:
            return "language-unavailable";
        case VOICE_UNAVAILABLE:
            return "voice-unavailable";
        case TEXT_TOO_LONG:
            return "text-too-long";
        case INVALID_ARGUMENT:
            return "invalid-argument";
        case NOT_ALLOWED:
            return "not-allowed";
        default:
            return "canceled"; // fallback to first value
    }
}

ReadableStreamReaderMode::Value ReadableStreamReaderMode::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "byob", strlen("byob"))) {
        return BYOB;
    }
    else {
        // Default to first value for invalid input
        return BYOB;
    }
}

ReadableStreamReaderMode::ReadableStreamReaderMode(Value v) noexcept : emlite::Val(ReadableStreamReaderMode::to_string(v)), value_(v) {}
ReadableStreamReaderMode::ReadableStreamReaderMode(Handle h) noexcept: emlite::Val(h) {
    value_ = ReadableStreamReaderMode::from_string(as<emlite::Uniq<char[]>>().get());
}

ReadableStreamReaderMode::ReadableStreamReaderMode(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = ReadableStreamReaderMode::from_string(as<emlite::Uniq<char[]>>().get());
}

ReadableStreamReaderMode ReadableStreamReaderMode::take_ownership(Handle h) noexcept { return ReadableStreamReaderMode(h); }
ReadableStreamReaderMode ReadableStreamReaderMode::clone() const noexcept { return *this; }
const char* ReadableStreamReaderMode::to_string(ReadableStreamReaderMode::Value value_) noexcept {
    switch (value_) {
        case BYOB:
            return "byob";
        default:
            return "byob"; // fallback to first value
    }
}

ReadableStreamType::Value ReadableStreamType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "bytes", strlen("bytes"))) {
        return BYTES;
    }
    else {
        // Default to first value for invalid input
        return BYTES;
    }
}

ReadableStreamType::ReadableStreamType(Value v) noexcept : emlite::Val(ReadableStreamType::to_string(v)), value_(v) {}
ReadableStreamType::ReadableStreamType(Handle h) noexcept: emlite::Val(h) {
    value_ = ReadableStreamType::from_string(as<emlite::Uniq<char[]>>().get());
}

ReadableStreamType::ReadableStreamType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = ReadableStreamType::from_string(as<emlite::Uniq<char[]>>().get());
}

ReadableStreamType ReadableStreamType::take_ownership(Handle h) noexcept { return ReadableStreamType(h); }
ReadableStreamType ReadableStreamType::clone() const noexcept { return *this; }
const char* ReadableStreamType::to_string(ReadableStreamType::Value value_) noexcept {
    switch (value_) {
        case BYTES:
            return "bytes";
        default:
            return "bytes"; // fallback to first value
    }
}

TouchType::Value TouchType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "direct", strlen("direct"))) {
        return DIRECT;
    }
    else if (__builtin_strncmp(str, "stylus", strlen("stylus"))) {
        return STYLUS;
    }
    else {
        // Default to first value for invalid input
        return DIRECT;
    }
}

TouchType::TouchType(Value v) noexcept : emlite::Val(TouchType::to_string(v)), value_(v) {}
TouchType::TouchType(Handle h) noexcept: emlite::Val(h) {
    value_ = TouchType::from_string(as<emlite::Uniq<char[]>>().get());
}

TouchType::TouchType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = TouchType::from_string(as<emlite::Uniq<char[]>>().get());
}

TouchType TouchType::take_ownership(Handle h) noexcept { return TouchType(h); }
TouchType TouchType::clone() const noexcept { return *this; }
const char* TouchType::to_string(TouchType::Value value_) noexcept {
    switch (value_) {
        case DIRECT:
            return "direct";
        case STYLUS:
            return "stylus";
        default:
            return "direct"; // fallback to first value
    }
}

RefreshPolicy::Value RefreshPolicy::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "none", strlen("none"))) {
        return NONE;
    }
    else if (__builtin_strncmp(str, "refresh", strlen("refresh"))) {
        return REFRESH;
    }
    else {
        // Default to first value for invalid input
        return NONE;
    }
}

RefreshPolicy::RefreshPolicy(Value v) noexcept : emlite::Val(RefreshPolicy::to_string(v)), value_(v) {}
RefreshPolicy::RefreshPolicy(Handle h) noexcept: emlite::Val(h) {
    value_ = RefreshPolicy::from_string(as<emlite::Uniq<char[]>>().get());
}

RefreshPolicy::RefreshPolicy(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RefreshPolicy::from_string(as<emlite::Uniq<char[]>>().get());
}

RefreshPolicy RefreshPolicy::take_ownership(Handle h) noexcept { return RefreshPolicy(h); }
RefreshPolicy RefreshPolicy::clone() const noexcept { return *this; }
const char* RefreshPolicy::to_string(RefreshPolicy::Value value_) noexcept {
    switch (value_) {
        case NONE:
            return "none";
        case REFRESH:
            return "refresh";
        default:
            return "none"; // fallback to first value
    }
}

TokenVersion::Value TokenVersion::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "1", strlen("1"))) {
        return _1;
    }
    else {
        // Default to first value for invalid input
        return _1;
    }
}

TokenVersion::TokenVersion(Value v) noexcept : emlite::Val(TokenVersion::to_string(v)), value_(v) {}
TokenVersion::TokenVersion(Handle h) noexcept: emlite::Val(h) {
    value_ = TokenVersion::from_string(as<emlite::Uniq<char[]>>().get());
}

TokenVersion::TokenVersion(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = TokenVersion::from_string(as<emlite::Uniq<char[]>>().get());
}

TokenVersion TokenVersion::take_ownership(Handle h) noexcept { return TokenVersion(h); }
TokenVersion TokenVersion::clone() const noexcept { return *this; }
const char* TokenVersion::to_string(TokenVersion::Value value_) noexcept {
    switch (value_) {
        case _1:
            return "1";
        default:
            return "1"; // fallback to first value
    }
}

OperationType::Value OperationType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "token-request", strlen("token-request"))) {
        return TOKEN_REQUEST;
    }
    else if (__builtin_strncmp(str, "send-redemption-record", strlen("send-redemption-record"))) {
        return SEND_REDEMPTION_RECORD;
    }
    else if (__builtin_strncmp(str, "token-redemption", strlen("token-redemption"))) {
        return TOKEN_REDEMPTION;
    }
    else {
        // Default to first value for invalid input
        return TOKEN_REQUEST;
    }
}

OperationType::OperationType(Value v) noexcept : emlite::Val(OperationType::to_string(v)), value_(v) {}
OperationType::OperationType(Handle h) noexcept: emlite::Val(h) {
    value_ = OperationType::from_string(as<emlite::Uniq<char[]>>().get());
}

OperationType::OperationType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = OperationType::from_string(as<emlite::Uniq<char[]>>().get());
}

OperationType OperationType::take_ownership(Handle h) noexcept { return OperationType(h); }
OperationType OperationType::clone() const noexcept { return *this; }
const char* OperationType::to_string(OperationType::Value value_) noexcept {
    switch (value_) {
        case TOKEN_REQUEST:
            return "token-request";
        case SEND_REDEMPTION_RECORD:
            return "send-redemption-record";
        case TOKEN_REDEMPTION:
            return "token-redemption";
        default:
            return "token-request"; // fallback to first value
    }
}

KAnonStatus::Value KAnonStatus::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "passedAndEnforced", strlen("passedAndEnforced"))) {
        return PASSEDANDENFORCED;
    }
    else if (__builtin_strncmp(str, "passedNotEnforced", strlen("passedNotEnforced"))) {
        return PASSEDNOTENFORCED;
    }
    else if (__builtin_strncmp(str, "belowThreshold", strlen("belowThreshold"))) {
        return BELOWTHRESHOLD;
    }
    else if (__builtin_strncmp(str, "notCalculated", strlen("notCalculated"))) {
        return NOTCALCULATED;
    }
    else {
        // Default to first value for invalid input
        return PASSEDANDENFORCED;
    }
}

KAnonStatus::KAnonStatus(Value v) noexcept : emlite::Val(KAnonStatus::to_string(v)), value_(v) {}
KAnonStatus::KAnonStatus(Handle h) noexcept: emlite::Val(h) {
    value_ = KAnonStatus::from_string(as<emlite::Uniq<char[]>>().get());
}

KAnonStatus::KAnonStatus(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = KAnonStatus::from_string(as<emlite::Uniq<char[]>>().get());
}

KAnonStatus KAnonStatus::take_ownership(Handle h) noexcept { return KAnonStatus(h); }
KAnonStatus KAnonStatus::clone() const noexcept { return *this; }
const char* KAnonStatus::to_string(KAnonStatus::Value value_) noexcept {
    switch (value_) {
        case PASSEDANDENFORCED:
            return "passedAndEnforced";
        case PASSEDNOTENFORCED:
            return "passedNotEnforced";
        case BELOWTHRESHOLD:
            return "belowThreshold";
        case NOTCALCULATED:
            return "notCalculated";
        default:
            return "passedAndEnforced"; // fallback to first value
    }
}

ImportExportKind::Value ImportExportKind::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "function", strlen("function"))) {
        return FUNCTION;
    }
    else if (__builtin_strncmp(str, "table", strlen("table"))) {
        return TABLE;
    }
    else if (__builtin_strncmp(str, "memory", strlen("memory"))) {
        return MEMORY;
    }
    else if (__builtin_strncmp(str, "global", strlen("global"))) {
        return GLOBAL;
    }
    else {
        // Default to first value for invalid input
        return FUNCTION;
    }
}

ImportExportKind::ImportExportKind(Value v) noexcept : emlite::Val(ImportExportKind::to_string(v)), value_(v) {}
ImportExportKind::ImportExportKind(Handle h) noexcept: emlite::Val(h) {
    value_ = ImportExportKind::from_string(as<emlite::Uniq<char[]>>().get());
}

ImportExportKind::ImportExportKind(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = ImportExportKind::from_string(as<emlite::Uniq<char[]>>().get());
}

ImportExportKind ImportExportKind::take_ownership(Handle h) noexcept { return ImportExportKind(h); }
ImportExportKind ImportExportKind::clone() const noexcept { return *this; }
const char* ImportExportKind::to_string(ImportExportKind::Value value_) noexcept {
    switch (value_) {
        case FUNCTION:
            return "function";
        case TABLE:
            return "table";
        case MEMORY:
            return "memory";
        case GLOBAL:
            return "global";
        default:
            return "function"; // fallback to first value
    }
}

TableKind::Value TableKind::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "externref", strlen("externref"))) {
        return EXTERNREF;
    }
    else if (__builtin_strncmp(str, "anyfunc", strlen("anyfunc"))) {
        return ANYFUNC;
    }
    else {
        // Default to first value for invalid input
        return EXTERNREF;
    }
}

TableKind::TableKind(Value v) noexcept : emlite::Val(TableKind::to_string(v)), value_(v) {}
TableKind::TableKind(Handle h) noexcept: emlite::Val(h) {
    value_ = TableKind::from_string(as<emlite::Uniq<char[]>>().get());
}

TableKind::TableKind(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = TableKind::from_string(as<emlite::Uniq<char[]>>().get());
}

TableKind TableKind::take_ownership(Handle h) noexcept { return TableKind(h); }
TableKind TableKind::clone() const noexcept { return *this; }
const char* TableKind::to_string(TableKind::Value value_) noexcept {
    switch (value_) {
        case EXTERNREF:
            return "externref";
        case ANYFUNC:
            return "anyfunc";
        default:
            return "externref"; // fallback to first value
    }
}

ValueType::Value ValueType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "i32", strlen("i32"))) {
        return I32;
    }
    else if (__builtin_strncmp(str, "i64", strlen("i64"))) {
        return I64;
    }
    else if (__builtin_strncmp(str, "f32", strlen("f32"))) {
        return F32;
    }
    else if (__builtin_strncmp(str, "f64", strlen("f64"))) {
        return F64;
    }
    else if (__builtin_strncmp(str, "v128", strlen("v128"))) {
        return V128;
    }
    else if (__builtin_strncmp(str, "externref", strlen("externref"))) {
        return EXTERNREF;
    }
    else if (__builtin_strncmp(str, "anyfunc", strlen("anyfunc"))) {
        return ANYFUNC;
    }
    else {
        // Default to first value for invalid input
        return I32;
    }
}

ValueType::ValueType(Value v) noexcept : emlite::Val(ValueType::to_string(v)), value_(v) {}
ValueType::ValueType(Handle h) noexcept: emlite::Val(h) {
    value_ = ValueType::from_string(as<emlite::Uniq<char[]>>().get());
}

ValueType::ValueType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = ValueType::from_string(as<emlite::Uniq<char[]>>().get());
}

ValueType ValueType::take_ownership(Handle h) noexcept { return ValueType(h); }
ValueType ValueType::clone() const noexcept { return *this; }
const char* ValueType::to_string(ValueType::Value value_) noexcept {
    switch (value_) {
        case I32:
            return "i32";
        case I64:
            return "i64";
        case F32:
            return "f32";
        case F64:
            return "f64";
        case V128:
            return "v128";
        case EXTERNREF:
            return "externref";
        case ANYFUNC:
            return "anyfunc";
        default:
            return "i32"; // fallback to first value
    }
}

IterationCompositeOperation::Value IterationCompositeOperation::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "replace", strlen("replace"))) {
        return REPLACE;
    }
    else if (__builtin_strncmp(str, "accumulate", strlen("accumulate"))) {
        return ACCUMULATE;
    }
    else {
        // Default to first value for invalid input
        return REPLACE;
    }
}

IterationCompositeOperation::IterationCompositeOperation(Value v) noexcept : emlite::Val(IterationCompositeOperation::to_string(v)), value_(v) {}
IterationCompositeOperation::IterationCompositeOperation(Handle h) noexcept: emlite::Val(h) {
    value_ = IterationCompositeOperation::from_string(as<emlite::Uniq<char[]>>().get());
}

IterationCompositeOperation::IterationCompositeOperation(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = IterationCompositeOperation::from_string(as<emlite::Uniq<char[]>>().get());
}

IterationCompositeOperation IterationCompositeOperation::take_ownership(Handle h) noexcept { return IterationCompositeOperation(h); }
IterationCompositeOperation IterationCompositeOperation::clone() const noexcept { return *this; }
const char* IterationCompositeOperation::to_string(IterationCompositeOperation::Value value_) noexcept {
    switch (value_) {
        case REPLACE:
            return "replace";
        case ACCUMULATE:
            return "accumulate";
        default:
            return "replace"; // fallback to first value
    }
}

AnimationTriggerBehavior::Value AnimationTriggerBehavior::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "once", strlen("once"))) {
        return ONCE;
    }
    else if (__builtin_strncmp(str, "repeat", strlen("repeat"))) {
        return REPEAT;
    }
    else if (__builtin_strncmp(str, "alternate", strlen("alternate"))) {
        return ALTERNATE;
    }
    else if (__builtin_strncmp(str, "state", strlen("state"))) {
        return STATE;
    }
    else {
        // Default to first value for invalid input
        return ONCE;
    }
}

AnimationTriggerBehavior::AnimationTriggerBehavior(Value v) noexcept : emlite::Val(AnimationTriggerBehavior::to_string(v)), value_(v) {}
AnimationTriggerBehavior::AnimationTriggerBehavior(Handle h) noexcept: emlite::Val(h) {
    value_ = AnimationTriggerBehavior::from_string(as<emlite::Uniq<char[]>>().get());
}

AnimationTriggerBehavior::AnimationTriggerBehavior(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = AnimationTriggerBehavior::from_string(as<emlite::Uniq<char[]>>().get());
}

AnimationTriggerBehavior AnimationTriggerBehavior::take_ownership(Handle h) noexcept { return AnimationTriggerBehavior(h); }
AnimationTriggerBehavior AnimationTriggerBehavior::clone() const noexcept { return *this; }
const char* AnimationTriggerBehavior::to_string(AnimationTriggerBehavior::Value value_) noexcept {
    switch (value_) {
        case ONCE:
            return "once";
        case REPEAT:
            return "repeat";
        case ALTERNATE:
            return "alternate";
        case STATE:
            return "state";
        default:
            return "once"; // fallback to first value
    }
}

AnimationPlayState::Value AnimationPlayState::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "idle", strlen("idle"))) {
        return IDLE;
    }
    else if (__builtin_strncmp(str, "running", strlen("running"))) {
        return RUNNING;
    }
    else if (__builtin_strncmp(str, "paused", strlen("paused"))) {
        return PAUSED;
    }
    else if (__builtin_strncmp(str, "finished", strlen("finished"))) {
        return FINISHED;
    }
    else {
        // Default to first value for invalid input
        return IDLE;
    }
}

AnimationPlayState::AnimationPlayState(Value v) noexcept : emlite::Val(AnimationPlayState::to_string(v)), value_(v) {}
AnimationPlayState::AnimationPlayState(Handle h) noexcept: emlite::Val(h) {
    value_ = AnimationPlayState::from_string(as<emlite::Uniq<char[]>>().get());
}

AnimationPlayState::AnimationPlayState(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = AnimationPlayState::from_string(as<emlite::Uniq<char[]>>().get());
}

AnimationPlayState AnimationPlayState::take_ownership(Handle h) noexcept { return AnimationPlayState(h); }
AnimationPlayState AnimationPlayState::clone() const noexcept { return *this; }
const char* AnimationPlayState::to_string(AnimationPlayState::Value value_) noexcept {
    switch (value_) {
        case IDLE:
            return "idle";
        case RUNNING:
            return "running";
        case PAUSED:
            return "paused";
        case FINISHED:
            return "finished";
        default:
            return "idle"; // fallback to first value
    }
}

AnimationReplaceState::Value AnimationReplaceState::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "active", strlen("active"))) {
        return ACTIVE;
    }
    else if (__builtin_strncmp(str, "removed", strlen("removed"))) {
        return REMOVED;
    }
    else if (__builtin_strncmp(str, "persisted", strlen("persisted"))) {
        return PERSISTED;
    }
    else {
        // Default to first value for invalid input
        return ACTIVE;
    }
}

AnimationReplaceState::AnimationReplaceState(Value v) noexcept : emlite::Val(AnimationReplaceState::to_string(v)), value_(v) {}
AnimationReplaceState::AnimationReplaceState(Handle h) noexcept: emlite::Val(h) {
    value_ = AnimationReplaceState::from_string(as<emlite::Uniq<char[]>>().get());
}

AnimationReplaceState::AnimationReplaceState(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = AnimationReplaceState::from_string(as<emlite::Uniq<char[]>>().get());
}

AnimationReplaceState AnimationReplaceState::take_ownership(Handle h) noexcept { return AnimationReplaceState(h); }
AnimationReplaceState AnimationReplaceState::clone() const noexcept { return *this; }
const char* AnimationReplaceState::to_string(AnimationReplaceState::Value value_) noexcept {
    switch (value_) {
        case ACTIVE:
            return "active";
        case REMOVED:
            return "removed";
        case PERSISTED:
            return "persisted";
        default:
            return "active"; // fallback to first value
    }
}

FillMode::Value FillMode::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "none", strlen("none"))) {
        return NONE;
    }
    else if (__builtin_strncmp(str, "forwards", strlen("forwards"))) {
        return FORWARDS;
    }
    else if (__builtin_strncmp(str, "backwards", strlen("backwards"))) {
        return BACKWARDS;
    }
    else if (__builtin_strncmp(str, "both", strlen("both"))) {
        return BOTH;
    }
    else if (__builtin_strncmp(str, "auto", strlen("auto"))) {
        return AUTO_;
    }
    else {
        // Default to first value for invalid input
        return NONE;
    }
}

FillMode::FillMode(Value v) noexcept : emlite::Val(FillMode::to_string(v)), value_(v) {}
FillMode::FillMode(Handle h) noexcept: emlite::Val(h) {
    value_ = FillMode::from_string(as<emlite::Uniq<char[]>>().get());
}

FillMode::FillMode(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = FillMode::from_string(as<emlite::Uniq<char[]>>().get());
}

FillMode FillMode::take_ownership(Handle h) noexcept { return FillMode(h); }
FillMode FillMode::clone() const noexcept { return *this; }
const char* FillMode::to_string(FillMode::Value value_) noexcept {
    switch (value_) {
        case NONE:
            return "none";
        case FORWARDS:
            return "forwards";
        case BACKWARDS:
            return "backwards";
        case BOTH:
            return "both";
        case AUTO_:
            return "auto";
        default:
            return "none"; // fallback to first value
    }
}

PlaybackDirection::Value PlaybackDirection::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "normal", strlen("normal"))) {
        return NORMAL;
    }
    else if (__builtin_strncmp(str, "reverse", strlen("reverse"))) {
        return REVERSE;
    }
    else if (__builtin_strncmp(str, "alternate", strlen("alternate"))) {
        return ALTERNATE;
    }
    else if (__builtin_strncmp(str, "alternate-reverse", strlen("alternate-reverse"))) {
        return ALTERNATE_REVERSE;
    }
    else {
        // Default to first value for invalid input
        return NORMAL;
    }
}

PlaybackDirection::PlaybackDirection(Value v) noexcept : emlite::Val(PlaybackDirection::to_string(v)), value_(v) {}
PlaybackDirection::PlaybackDirection(Handle h) noexcept: emlite::Val(h) {
    value_ = PlaybackDirection::from_string(as<emlite::Uniq<char[]>>().get());
}

PlaybackDirection::PlaybackDirection(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = PlaybackDirection::from_string(as<emlite::Uniq<char[]>>().get());
}

PlaybackDirection PlaybackDirection::take_ownership(Handle h) noexcept { return PlaybackDirection(h); }
PlaybackDirection PlaybackDirection::clone() const noexcept { return *this; }
const char* PlaybackDirection::to_string(PlaybackDirection::Value value_) noexcept {
    switch (value_) {
        case NORMAL:
            return "normal";
        case REVERSE:
            return "reverse";
        case ALTERNATE:
            return "alternate";
        case ALTERNATE_REVERSE:
            return "alternate-reverse";
        default:
            return "normal"; // fallback to first value
    }
}

CompositeOperation::Value CompositeOperation::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "replace", strlen("replace"))) {
        return REPLACE;
    }
    else if (__builtin_strncmp(str, "add", strlen("add"))) {
        return ADD;
    }
    else if (__builtin_strncmp(str, "accumulate", strlen("accumulate"))) {
        return ACCUMULATE;
    }
    else {
        // Default to first value for invalid input
        return REPLACE;
    }
}

CompositeOperation::CompositeOperation(Value v) noexcept : emlite::Val(CompositeOperation::to_string(v)), value_(v) {}
CompositeOperation::CompositeOperation(Handle h) noexcept: emlite::Val(h) {
    value_ = CompositeOperation::from_string(as<emlite::Uniq<char[]>>().get());
}

CompositeOperation::CompositeOperation(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = CompositeOperation::from_string(as<emlite::Uniq<char[]>>().get());
}

CompositeOperation CompositeOperation::take_ownership(Handle h) noexcept { return CompositeOperation(h); }
CompositeOperation CompositeOperation::clone() const noexcept { return *this; }
const char* CompositeOperation::to_string(CompositeOperation::Value value_) noexcept {
    switch (value_) {
        case REPLACE:
            return "replace";
        case ADD:
            return "add";
        case ACCUMULATE:
            return "accumulate";
        default:
            return "replace"; // fallback to first value
    }
}

CompositeOperationOrAuto::Value CompositeOperationOrAuto::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "replace", strlen("replace"))) {
        return REPLACE;
    }
    else if (__builtin_strncmp(str, "add", strlen("add"))) {
        return ADD;
    }
    else if (__builtin_strncmp(str, "accumulate", strlen("accumulate"))) {
        return ACCUMULATE;
    }
    else if (__builtin_strncmp(str, "auto", strlen("auto"))) {
        return AUTO_;
    }
    else {
        // Default to first value for invalid input
        return REPLACE;
    }
}

CompositeOperationOrAuto::CompositeOperationOrAuto(Value v) noexcept : emlite::Val(CompositeOperationOrAuto::to_string(v)), value_(v) {}
CompositeOperationOrAuto::CompositeOperationOrAuto(Handle h) noexcept: emlite::Val(h) {
    value_ = CompositeOperationOrAuto::from_string(as<emlite::Uniq<char[]>>().get());
}

CompositeOperationOrAuto::CompositeOperationOrAuto(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = CompositeOperationOrAuto::from_string(as<emlite::Uniq<char[]>>().get());
}

CompositeOperationOrAuto CompositeOperationOrAuto::take_ownership(Handle h) noexcept { return CompositeOperationOrAuto(h); }
CompositeOperationOrAuto CompositeOperationOrAuto::clone() const noexcept { return *this; }
const char* CompositeOperationOrAuto::to_string(CompositeOperationOrAuto::Value value_) noexcept {
    switch (value_) {
        case REPLACE:
            return "replace";
        case ADD:
            return "add";
        case ACCUMULATE:
            return "accumulate";
        case AUTO_:
            return "auto";
        default:
            return "replace"; // fallback to first value
    }
}

LockMode::Value LockMode::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "shared", strlen("shared"))) {
        return SHARED;
    }
    else if (__builtin_strncmp(str, "exclusive", strlen("exclusive"))) {
        return EXCLUSIVE;
    }
    else {
        // Default to first value for invalid input
        return SHARED;
    }
}

LockMode::LockMode(Value v) noexcept : emlite::Val(LockMode::to_string(v)), value_(v) {}
LockMode::LockMode(Handle h) noexcept: emlite::Val(h) {
    value_ = LockMode::from_string(as<emlite::Uniq<char[]>>().get());
}

LockMode::LockMode(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = LockMode::from_string(as<emlite::Uniq<char[]>>().get());
}

LockMode LockMode::take_ownership(Handle h) noexcept { return LockMode(h); }
LockMode LockMode::clone() const noexcept { return *this; }
const char* LockMode::to_string(LockMode::Value value_) noexcept {
    switch (value_) {
        case SHARED:
            return "shared";
        case EXCLUSIVE:
            return "exclusive";
        default:
            return "shared"; // fallback to first value
    }
}

OTPCredentialTransportType::Value OTPCredentialTransportType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "sms", strlen("sms"))) {
        return SMS;
    }
    else {
        // Default to first value for invalid input
        return SMS;
    }
}

OTPCredentialTransportType::OTPCredentialTransportType(Value v) noexcept : emlite::Val(OTPCredentialTransportType::to_string(v)), value_(v) {}
OTPCredentialTransportType::OTPCredentialTransportType(Handle h) noexcept: emlite::Val(h) {
    value_ = OTPCredentialTransportType::from_string(as<emlite::Uniq<char[]>>().get());
}

OTPCredentialTransportType::OTPCredentialTransportType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = OTPCredentialTransportType::from_string(as<emlite::Uniq<char[]>>().get());
}

OTPCredentialTransportType OTPCredentialTransportType::take_ownership(Handle h) noexcept { return OTPCredentialTransportType(h); }
OTPCredentialTransportType OTPCredentialTransportType::clone() const noexcept { return *this; }
const char* OTPCredentialTransportType::to_string(OTPCredentialTransportType::Value value_) noexcept {
    switch (value_) {
        case SMS:
            return "sms";
        default:
            return "sms"; // fallback to first value
    }
}

AudioContextState::Value AudioContextState::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "suspended", strlen("suspended"))) {
        return SUSPENDED;
    }
    else if (__builtin_strncmp(str, "running", strlen("running"))) {
        return RUNNING;
    }
    else if (__builtin_strncmp(str, "closed", strlen("closed"))) {
        return CLOSED;
    }
    else if (__builtin_strncmp(str, "interrupted", strlen("interrupted"))) {
        return INTERRUPTED;
    }
    else {
        // Default to first value for invalid input
        return SUSPENDED;
    }
}

AudioContextState::AudioContextState(Value v) noexcept : emlite::Val(AudioContextState::to_string(v)), value_(v) {}
AudioContextState::AudioContextState(Handle h) noexcept: emlite::Val(h) {
    value_ = AudioContextState::from_string(as<emlite::Uniq<char[]>>().get());
}

AudioContextState::AudioContextState(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = AudioContextState::from_string(as<emlite::Uniq<char[]>>().get());
}

AudioContextState AudioContextState::take_ownership(Handle h) noexcept { return AudioContextState(h); }
AudioContextState AudioContextState::clone() const noexcept { return *this; }
const char* AudioContextState::to_string(AudioContextState::Value value_) noexcept {
    switch (value_) {
        case SUSPENDED:
            return "suspended";
        case RUNNING:
            return "running";
        case CLOSED:
            return "closed";
        case INTERRUPTED:
            return "interrupted";
        default:
            return "suspended"; // fallback to first value
    }
}

AudioContextRenderSizeCategory::Value AudioContextRenderSizeCategory::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "default", strlen("default"))) {
        return DEFAULT_;
    }
    else if (__builtin_strncmp(str, "hardware", strlen("hardware"))) {
        return HARDWARE;
    }
    else {
        // Default to first value for invalid input
        return DEFAULT_;
    }
}

AudioContextRenderSizeCategory::AudioContextRenderSizeCategory(Value v) noexcept : emlite::Val(AudioContextRenderSizeCategory::to_string(v)), value_(v) {}
AudioContextRenderSizeCategory::AudioContextRenderSizeCategory(Handle h) noexcept: emlite::Val(h) {
    value_ = AudioContextRenderSizeCategory::from_string(as<emlite::Uniq<char[]>>().get());
}

AudioContextRenderSizeCategory::AudioContextRenderSizeCategory(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = AudioContextRenderSizeCategory::from_string(as<emlite::Uniq<char[]>>().get());
}

AudioContextRenderSizeCategory AudioContextRenderSizeCategory::take_ownership(Handle h) noexcept { return AudioContextRenderSizeCategory(h); }
AudioContextRenderSizeCategory AudioContextRenderSizeCategory::clone() const noexcept { return *this; }
const char* AudioContextRenderSizeCategory::to_string(AudioContextRenderSizeCategory::Value value_) noexcept {
    switch (value_) {
        case DEFAULT_:
            return "default";
        case HARDWARE:
            return "hardware";
        default:
            return "default"; // fallback to first value
    }
}

AudioContextLatencyCategory::Value AudioContextLatencyCategory::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "balanced", strlen("balanced"))) {
        return BALANCED;
    }
    else if (__builtin_strncmp(str, "interactive", strlen("interactive"))) {
        return INTERACTIVE;
    }
    else if (__builtin_strncmp(str, "playback", strlen("playback"))) {
        return PLAYBACK;
    }
    else {
        // Default to first value for invalid input
        return BALANCED;
    }
}

AudioContextLatencyCategory::AudioContextLatencyCategory(Value v) noexcept : emlite::Val(AudioContextLatencyCategory::to_string(v)), value_(v) {}
AudioContextLatencyCategory::AudioContextLatencyCategory(Handle h) noexcept: emlite::Val(h) {
    value_ = AudioContextLatencyCategory::from_string(as<emlite::Uniq<char[]>>().get());
}

AudioContextLatencyCategory::AudioContextLatencyCategory(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = AudioContextLatencyCategory::from_string(as<emlite::Uniq<char[]>>().get());
}

AudioContextLatencyCategory AudioContextLatencyCategory::take_ownership(Handle h) noexcept { return AudioContextLatencyCategory(h); }
AudioContextLatencyCategory AudioContextLatencyCategory::clone() const noexcept { return *this; }
const char* AudioContextLatencyCategory::to_string(AudioContextLatencyCategory::Value value_) noexcept {
    switch (value_) {
        case BALANCED:
            return "balanced";
        case INTERACTIVE:
            return "interactive";
        case PLAYBACK:
            return "playback";
        default:
            return "balanced"; // fallback to first value
    }
}

AudioSinkType::Value AudioSinkType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "none", strlen("none"))) {
        return NONE;
    }
    else {
        // Default to first value for invalid input
        return NONE;
    }
}

AudioSinkType::AudioSinkType(Value v) noexcept : emlite::Val(AudioSinkType::to_string(v)), value_(v) {}
AudioSinkType::AudioSinkType(Handle h) noexcept: emlite::Val(h) {
    value_ = AudioSinkType::from_string(as<emlite::Uniq<char[]>>().get());
}

AudioSinkType::AudioSinkType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = AudioSinkType::from_string(as<emlite::Uniq<char[]>>().get());
}

AudioSinkType AudioSinkType::take_ownership(Handle h) noexcept { return AudioSinkType(h); }
AudioSinkType AudioSinkType::clone() const noexcept { return *this; }
const char* AudioSinkType::to_string(AudioSinkType::Value value_) noexcept {
    switch (value_) {
        case NONE:
            return "none";
        default:
            return "none"; // fallback to first value
    }
}

ChannelCountMode::Value ChannelCountMode::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "max", strlen("max"))) {
        return MAX;
    }
    else if (__builtin_strncmp(str, "clamped-max", strlen("clamped-max"))) {
        return CLAMPED_MAX;
    }
    else if (__builtin_strncmp(str, "explicit", strlen("explicit"))) {
        return EXPLICIT_;
    }
    else {
        // Default to first value for invalid input
        return MAX;
    }
}

ChannelCountMode::ChannelCountMode(Value v) noexcept : emlite::Val(ChannelCountMode::to_string(v)), value_(v) {}
ChannelCountMode::ChannelCountMode(Handle h) noexcept: emlite::Val(h) {
    value_ = ChannelCountMode::from_string(as<emlite::Uniq<char[]>>().get());
}

ChannelCountMode::ChannelCountMode(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = ChannelCountMode::from_string(as<emlite::Uniq<char[]>>().get());
}

ChannelCountMode ChannelCountMode::take_ownership(Handle h) noexcept { return ChannelCountMode(h); }
ChannelCountMode ChannelCountMode::clone() const noexcept { return *this; }
const char* ChannelCountMode::to_string(ChannelCountMode::Value value_) noexcept {
    switch (value_) {
        case MAX:
            return "max";
        case CLAMPED_MAX:
            return "clamped-max";
        case EXPLICIT_:
            return "explicit";
        default:
            return "max"; // fallback to first value
    }
}

ChannelInterpretation::Value ChannelInterpretation::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "speakers", strlen("speakers"))) {
        return SPEAKERS;
    }
    else if (__builtin_strncmp(str, "discrete", strlen("discrete"))) {
        return DISCRETE;
    }
    else {
        // Default to first value for invalid input
        return SPEAKERS;
    }
}

ChannelInterpretation::ChannelInterpretation(Value v) noexcept : emlite::Val(ChannelInterpretation::to_string(v)), value_(v) {}
ChannelInterpretation::ChannelInterpretation(Handle h) noexcept: emlite::Val(h) {
    value_ = ChannelInterpretation::from_string(as<emlite::Uniq<char[]>>().get());
}

ChannelInterpretation::ChannelInterpretation(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = ChannelInterpretation::from_string(as<emlite::Uniq<char[]>>().get());
}

ChannelInterpretation ChannelInterpretation::take_ownership(Handle h) noexcept { return ChannelInterpretation(h); }
ChannelInterpretation ChannelInterpretation::clone() const noexcept { return *this; }
const char* ChannelInterpretation::to_string(ChannelInterpretation::Value value_) noexcept {
    switch (value_) {
        case SPEAKERS:
            return "speakers";
        case DISCRETE:
            return "discrete";
        default:
            return "speakers"; // fallback to first value
    }
}

AutomationRate::Value AutomationRate::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "a-rate", strlen("a-rate"))) {
        return A_RATE;
    }
    else if (__builtin_strncmp(str, "k-rate", strlen("k-rate"))) {
        return K_RATE;
    }
    else {
        // Default to first value for invalid input
        return A_RATE;
    }
}

AutomationRate::AutomationRate(Value v) noexcept : emlite::Val(AutomationRate::to_string(v)), value_(v) {}
AutomationRate::AutomationRate(Handle h) noexcept: emlite::Val(h) {
    value_ = AutomationRate::from_string(as<emlite::Uniq<char[]>>().get());
}

AutomationRate::AutomationRate(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = AutomationRate::from_string(as<emlite::Uniq<char[]>>().get());
}

AutomationRate AutomationRate::take_ownership(Handle h) noexcept { return AutomationRate(h); }
AutomationRate AutomationRate::clone() const noexcept { return *this; }
const char* AutomationRate::to_string(AutomationRate::Value value_) noexcept {
    switch (value_) {
        case A_RATE:
            return "a-rate";
        case K_RATE:
            return "k-rate";
        default:
            return "a-rate"; // fallback to first value
    }
}

BiquadFilterType::Value BiquadFilterType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "lowpass", strlen("lowpass"))) {
        return LOWPASS;
    }
    else if (__builtin_strncmp(str, "highpass", strlen("highpass"))) {
        return HIGHPASS;
    }
    else if (__builtin_strncmp(str, "bandpass", strlen("bandpass"))) {
        return BANDPASS;
    }
    else if (__builtin_strncmp(str, "lowshelf", strlen("lowshelf"))) {
        return LOWSHELF;
    }
    else if (__builtin_strncmp(str, "highshelf", strlen("highshelf"))) {
        return HIGHSHELF;
    }
    else if (__builtin_strncmp(str, "peaking", strlen("peaking"))) {
        return PEAKING;
    }
    else if (__builtin_strncmp(str, "notch", strlen("notch"))) {
        return NOTCH;
    }
    else if (__builtin_strncmp(str, "allpass", strlen("allpass"))) {
        return ALLPASS;
    }
    else {
        // Default to first value for invalid input
        return LOWPASS;
    }
}

BiquadFilterType::BiquadFilterType(Value v) noexcept : emlite::Val(BiquadFilterType::to_string(v)), value_(v) {}
BiquadFilterType::BiquadFilterType(Handle h) noexcept: emlite::Val(h) {
    value_ = BiquadFilterType::from_string(as<emlite::Uniq<char[]>>().get());
}

BiquadFilterType::BiquadFilterType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = BiquadFilterType::from_string(as<emlite::Uniq<char[]>>().get());
}

BiquadFilterType BiquadFilterType::take_ownership(Handle h) noexcept { return BiquadFilterType(h); }
BiquadFilterType BiquadFilterType::clone() const noexcept { return *this; }
const char* BiquadFilterType::to_string(BiquadFilterType::Value value_) noexcept {
    switch (value_) {
        case LOWPASS:
            return "lowpass";
        case HIGHPASS:
            return "highpass";
        case BANDPASS:
            return "bandpass";
        case LOWSHELF:
            return "lowshelf";
        case HIGHSHELF:
            return "highshelf";
        case PEAKING:
            return "peaking";
        case NOTCH:
            return "notch";
        case ALLPASS:
            return "allpass";
        default:
            return "lowpass"; // fallback to first value
    }
}

OscillatorType::Value OscillatorType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "sine", strlen("sine"))) {
        return SINE;
    }
    else if (__builtin_strncmp(str, "square", strlen("square"))) {
        return SQUARE;
    }
    else if (__builtin_strncmp(str, "sawtooth", strlen("sawtooth"))) {
        return SAWTOOTH;
    }
    else if (__builtin_strncmp(str, "triangle", strlen("triangle"))) {
        return TRIANGLE;
    }
    else if (__builtin_strncmp(str, "custom", strlen("custom"))) {
        return CUSTOM;
    }
    else {
        // Default to first value for invalid input
        return SINE;
    }
}

OscillatorType::OscillatorType(Value v) noexcept : emlite::Val(OscillatorType::to_string(v)), value_(v) {}
OscillatorType::OscillatorType(Handle h) noexcept: emlite::Val(h) {
    value_ = OscillatorType::from_string(as<emlite::Uniq<char[]>>().get());
}

OscillatorType::OscillatorType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = OscillatorType::from_string(as<emlite::Uniq<char[]>>().get());
}

OscillatorType OscillatorType::take_ownership(Handle h) noexcept { return OscillatorType(h); }
OscillatorType OscillatorType::clone() const noexcept { return *this; }
const char* OscillatorType::to_string(OscillatorType::Value value_) noexcept {
    switch (value_) {
        case SINE:
            return "sine";
        case SQUARE:
            return "square";
        case SAWTOOTH:
            return "sawtooth";
        case TRIANGLE:
            return "triangle";
        case CUSTOM:
            return "custom";
        default:
            return "sine"; // fallback to first value
    }
}

PanningModelType::Value PanningModelType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "equalpower", strlen("equalpower"))) {
        return EQUALPOWER;
    }
    else if (__builtin_strncmp(str, "HRTF", strlen("HRTF"))) {
        return HRTF;
    }
    else {
        // Default to first value for invalid input
        return EQUALPOWER;
    }
}

PanningModelType::PanningModelType(Value v) noexcept : emlite::Val(PanningModelType::to_string(v)), value_(v) {}
PanningModelType::PanningModelType(Handle h) noexcept: emlite::Val(h) {
    value_ = PanningModelType::from_string(as<emlite::Uniq<char[]>>().get());
}

PanningModelType::PanningModelType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = PanningModelType::from_string(as<emlite::Uniq<char[]>>().get());
}

PanningModelType PanningModelType::take_ownership(Handle h) noexcept { return PanningModelType(h); }
PanningModelType PanningModelType::clone() const noexcept { return *this; }
const char* PanningModelType::to_string(PanningModelType::Value value_) noexcept {
    switch (value_) {
        case EQUALPOWER:
            return "equalpower";
        case HRTF:
            return "HRTF";
        default:
            return "equalpower"; // fallback to first value
    }
}

DistanceModelType::Value DistanceModelType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "linear", strlen("linear"))) {
        return LINEAR;
    }
    else if (__builtin_strncmp(str, "inverse", strlen("inverse"))) {
        return INVERSE;
    }
    else if (__builtin_strncmp(str, "exponential", strlen("exponential"))) {
        return EXPONENTIAL;
    }
    else {
        // Default to first value for invalid input
        return LINEAR;
    }
}

DistanceModelType::DistanceModelType(Value v) noexcept : emlite::Val(DistanceModelType::to_string(v)), value_(v) {}
DistanceModelType::DistanceModelType(Handle h) noexcept: emlite::Val(h) {
    value_ = DistanceModelType::from_string(as<emlite::Uniq<char[]>>().get());
}

DistanceModelType::DistanceModelType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = DistanceModelType::from_string(as<emlite::Uniq<char[]>>().get());
}

DistanceModelType DistanceModelType::take_ownership(Handle h) noexcept { return DistanceModelType(h); }
DistanceModelType DistanceModelType::clone() const noexcept { return *this; }
const char* DistanceModelType::to_string(DistanceModelType::Value value_) noexcept {
    switch (value_) {
        case LINEAR:
            return "linear";
        case INVERSE:
            return "inverse";
        case EXPONENTIAL:
            return "exponential";
        default:
            return "linear"; // fallback to first value
    }
}

OverSampleType::Value OverSampleType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "none", strlen("none"))) {
        return NONE;
    }
    else if (__builtin_strncmp(str, "2x", strlen("2x"))) {
        return _2X;
    }
    else if (__builtin_strncmp(str, "4x", strlen("4x"))) {
        return _4X;
    }
    else {
        // Default to first value for invalid input
        return NONE;
    }
}

OverSampleType::OverSampleType(Value v) noexcept : emlite::Val(OverSampleType::to_string(v)), value_(v) {}
OverSampleType::OverSampleType(Handle h) noexcept: emlite::Val(h) {
    value_ = OverSampleType::from_string(as<emlite::Uniq<char[]>>().get());
}

OverSampleType::OverSampleType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = OverSampleType::from_string(as<emlite::Uniq<char[]>>().get());
}

OverSampleType OverSampleType::take_ownership(Handle h) noexcept { return OverSampleType(h); }
OverSampleType OverSampleType::clone() const noexcept { return *this; }
const char* OverSampleType::to_string(OverSampleType::Value value_) noexcept {
    switch (value_) {
        case NONE:
            return "none";
        case _2X:
            return "2x";
        case _4X:
            return "4x";
        default:
            return "none"; // fallback to first value
    }
}

AuthenticatorAttachment::Value AuthenticatorAttachment::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "platform", strlen("platform"))) {
        return PLATFORM;
    }
    else if (__builtin_strncmp(str, "cross-platform", strlen("cross-platform"))) {
        return CROSS_PLATFORM;
    }
    else {
        // Default to first value for invalid input
        return PLATFORM;
    }
}

AuthenticatorAttachment::AuthenticatorAttachment(Value v) noexcept : emlite::Val(AuthenticatorAttachment::to_string(v)), value_(v) {}
AuthenticatorAttachment::AuthenticatorAttachment(Handle h) noexcept: emlite::Val(h) {
    value_ = AuthenticatorAttachment::from_string(as<emlite::Uniq<char[]>>().get());
}

AuthenticatorAttachment::AuthenticatorAttachment(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = AuthenticatorAttachment::from_string(as<emlite::Uniq<char[]>>().get());
}

AuthenticatorAttachment AuthenticatorAttachment::take_ownership(Handle h) noexcept { return AuthenticatorAttachment(h); }
AuthenticatorAttachment AuthenticatorAttachment::clone() const noexcept { return *this; }
const char* AuthenticatorAttachment::to_string(AuthenticatorAttachment::Value value_) noexcept {
    switch (value_) {
        case PLATFORM:
            return "platform";
        case CROSS_PLATFORM:
            return "cross-platform";
        default:
            return "platform"; // fallback to first value
    }
}

ResidentKeyRequirement::Value ResidentKeyRequirement::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "discouraged", strlen("discouraged"))) {
        return DISCOURAGED;
    }
    else if (__builtin_strncmp(str, "preferred", strlen("preferred"))) {
        return PREFERRED;
    }
    else if (__builtin_strncmp(str, "required", strlen("required"))) {
        return REQUIRED;
    }
    else {
        // Default to first value for invalid input
        return DISCOURAGED;
    }
}

ResidentKeyRequirement::ResidentKeyRequirement(Value v) noexcept : emlite::Val(ResidentKeyRequirement::to_string(v)), value_(v) {}
ResidentKeyRequirement::ResidentKeyRequirement(Handle h) noexcept: emlite::Val(h) {
    value_ = ResidentKeyRequirement::from_string(as<emlite::Uniq<char[]>>().get());
}

ResidentKeyRequirement::ResidentKeyRequirement(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = ResidentKeyRequirement::from_string(as<emlite::Uniq<char[]>>().get());
}

ResidentKeyRequirement ResidentKeyRequirement::take_ownership(Handle h) noexcept { return ResidentKeyRequirement(h); }
ResidentKeyRequirement ResidentKeyRequirement::clone() const noexcept { return *this; }
const char* ResidentKeyRequirement::to_string(ResidentKeyRequirement::Value value_) noexcept {
    switch (value_) {
        case DISCOURAGED:
            return "discouraged";
        case PREFERRED:
            return "preferred";
        case REQUIRED:
            return "required";
        default:
            return "discouraged"; // fallback to first value
    }
}

AttestationConveyancePreference::Value AttestationConveyancePreference::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "none", strlen("none"))) {
        return NONE;
    }
    else if (__builtin_strncmp(str, "indirect", strlen("indirect"))) {
        return INDIRECT;
    }
    else if (__builtin_strncmp(str, "direct", strlen("direct"))) {
        return DIRECT;
    }
    else if (__builtin_strncmp(str, "enterprise", strlen("enterprise"))) {
        return ENTERPRISE;
    }
    else {
        // Default to first value for invalid input
        return NONE;
    }
}

AttestationConveyancePreference::AttestationConveyancePreference(Value v) noexcept : emlite::Val(AttestationConveyancePreference::to_string(v)), value_(v) {}
AttestationConveyancePreference::AttestationConveyancePreference(Handle h) noexcept: emlite::Val(h) {
    value_ = AttestationConveyancePreference::from_string(as<emlite::Uniq<char[]>>().get());
}

AttestationConveyancePreference::AttestationConveyancePreference(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = AttestationConveyancePreference::from_string(as<emlite::Uniq<char[]>>().get());
}

AttestationConveyancePreference AttestationConveyancePreference::take_ownership(Handle h) noexcept { return AttestationConveyancePreference(h); }
AttestationConveyancePreference AttestationConveyancePreference::clone() const noexcept { return *this; }
const char* AttestationConveyancePreference::to_string(AttestationConveyancePreference::Value value_) noexcept {
    switch (value_) {
        case NONE:
            return "none";
        case INDIRECT:
            return "indirect";
        case DIRECT:
            return "direct";
        case ENTERPRISE:
            return "enterprise";
        default:
            return "none"; // fallback to first value
    }
}

TokenBindingStatus::Value TokenBindingStatus::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "present", strlen("present"))) {
        return PRESENT;
    }
    else if (__builtin_strncmp(str, "supported", strlen("supported"))) {
        return SUPPORTED;
    }
    else {
        // Default to first value for invalid input
        return PRESENT;
    }
}

TokenBindingStatus::TokenBindingStatus(Value v) noexcept : emlite::Val(TokenBindingStatus::to_string(v)), value_(v) {}
TokenBindingStatus::TokenBindingStatus(Handle h) noexcept: emlite::Val(h) {
    value_ = TokenBindingStatus::from_string(as<emlite::Uniq<char[]>>().get());
}

TokenBindingStatus::TokenBindingStatus(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = TokenBindingStatus::from_string(as<emlite::Uniq<char[]>>().get());
}

TokenBindingStatus TokenBindingStatus::take_ownership(Handle h) noexcept { return TokenBindingStatus(h); }
TokenBindingStatus TokenBindingStatus::clone() const noexcept { return *this; }
const char* TokenBindingStatus::to_string(TokenBindingStatus::Value value_) noexcept {
    switch (value_) {
        case PRESENT:
            return "present";
        case SUPPORTED:
            return "supported";
        default:
            return "present"; // fallback to first value
    }
}

PublicKeyCredentialType::Value PublicKeyCredentialType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "public-key", strlen("public-key"))) {
        return PUBLIC_KEY;
    }
    else {
        // Default to first value for invalid input
        return PUBLIC_KEY;
    }
}

PublicKeyCredentialType::PublicKeyCredentialType(Value v) noexcept : emlite::Val(PublicKeyCredentialType::to_string(v)), value_(v) {}
PublicKeyCredentialType::PublicKeyCredentialType(Handle h) noexcept: emlite::Val(h) {
    value_ = PublicKeyCredentialType::from_string(as<emlite::Uniq<char[]>>().get());
}

PublicKeyCredentialType::PublicKeyCredentialType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = PublicKeyCredentialType::from_string(as<emlite::Uniq<char[]>>().get());
}

PublicKeyCredentialType PublicKeyCredentialType::take_ownership(Handle h) noexcept { return PublicKeyCredentialType(h); }
PublicKeyCredentialType PublicKeyCredentialType::clone() const noexcept { return *this; }
const char* PublicKeyCredentialType::to_string(PublicKeyCredentialType::Value value_) noexcept {
    switch (value_) {
        case PUBLIC_KEY:
            return "public-key";
        default:
            return "public-key"; // fallback to first value
    }
}

AuthenticatorTransport::Value AuthenticatorTransport::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "usb", strlen("usb"))) {
        return USB;
    }
    else if (__builtin_strncmp(str, "nfc", strlen("nfc"))) {
        return NFC;
    }
    else if (__builtin_strncmp(str, "ble", strlen("ble"))) {
        return BLE;
    }
    else if (__builtin_strncmp(str, "smart-card", strlen("smart-card"))) {
        return SMART_CARD;
    }
    else if (__builtin_strncmp(str, "hybrid", strlen("hybrid"))) {
        return HYBRID;
    }
    else if (__builtin_strncmp(str, "internal", strlen("internal"))) {
        return INTERNAL;
    }
    else {
        // Default to first value for invalid input
        return USB;
    }
}

AuthenticatorTransport::AuthenticatorTransport(Value v) noexcept : emlite::Val(AuthenticatorTransport::to_string(v)), value_(v) {}
AuthenticatorTransport::AuthenticatorTransport(Handle h) noexcept: emlite::Val(h) {
    value_ = AuthenticatorTransport::from_string(as<emlite::Uniq<char[]>>().get());
}

AuthenticatorTransport::AuthenticatorTransport(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = AuthenticatorTransport::from_string(as<emlite::Uniq<char[]>>().get());
}

AuthenticatorTransport AuthenticatorTransport::take_ownership(Handle h) noexcept { return AuthenticatorTransport(h); }
AuthenticatorTransport AuthenticatorTransport::clone() const noexcept { return *this; }
const char* AuthenticatorTransport::to_string(AuthenticatorTransport::Value value_) noexcept {
    switch (value_) {
        case USB:
            return "usb";
        case NFC:
            return "nfc";
        case BLE:
            return "ble";
        case SMART_CARD:
            return "smart-card";
        case HYBRID:
            return "hybrid";
        case INTERNAL:
            return "internal";
        default:
            return "usb"; // fallback to first value
    }
}

UserVerificationRequirement::Value UserVerificationRequirement::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "required", strlen("required"))) {
        return REQUIRED;
    }
    else if (__builtin_strncmp(str, "preferred", strlen("preferred"))) {
        return PREFERRED;
    }
    else if (__builtin_strncmp(str, "discouraged", strlen("discouraged"))) {
        return DISCOURAGED;
    }
    else {
        // Default to first value for invalid input
        return REQUIRED;
    }
}

UserVerificationRequirement::UserVerificationRequirement(Value v) noexcept : emlite::Val(UserVerificationRequirement::to_string(v)), value_(v) {}
UserVerificationRequirement::UserVerificationRequirement(Handle h) noexcept: emlite::Val(h) {
    value_ = UserVerificationRequirement::from_string(as<emlite::Uniq<char[]>>().get());
}

UserVerificationRequirement::UserVerificationRequirement(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = UserVerificationRequirement::from_string(as<emlite::Uniq<char[]>>().get());
}

UserVerificationRequirement UserVerificationRequirement::take_ownership(Handle h) noexcept { return UserVerificationRequirement(h); }
UserVerificationRequirement UserVerificationRequirement::clone() const noexcept { return *this; }
const char* UserVerificationRequirement::to_string(UserVerificationRequirement::Value value_) noexcept {
    switch (value_) {
        case REQUIRED:
            return "required";
        case PREFERRED:
            return "preferred";
        case DISCOURAGED:
            return "discouraged";
        default:
            return "required"; // fallback to first value
    }
}

ClientCapability::Value ClientCapability::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "conditionalCreate", strlen("conditionalCreate"))) {
        return CONDITIONALCREATE;
    }
    else if (__builtin_strncmp(str, "conditionalGet", strlen("conditionalGet"))) {
        return CONDITIONALGET;
    }
    else if (__builtin_strncmp(str, "hybridTransport", strlen("hybridTransport"))) {
        return HYBRIDTRANSPORT;
    }
    else if (__builtin_strncmp(str, "passkeyPlatformAuthenticator", strlen("passkeyPlatformAuthenticator"))) {
        return PASSKEYPLATFORMAUTHENTICATOR;
    }
    else if (__builtin_strncmp(str, "userVerifyingPlatformAuthenticator", strlen("userVerifyingPlatformAuthenticator"))) {
        return USERVERIFYINGPLATFORMAUTHENTICATOR;
    }
    else if (__builtin_strncmp(str, "relatedOrigins", strlen("relatedOrigins"))) {
        return RELATEDORIGINS;
    }
    else if (__builtin_strncmp(str, "signalAllAcceptedCredentials", strlen("signalAllAcceptedCredentials"))) {
        return SIGNALALLACCEPTEDCREDENTIALS;
    }
    else if (__builtin_strncmp(str, "signalCurrentUserDetails", strlen("signalCurrentUserDetails"))) {
        return SIGNALCURRENTUSERDETAILS;
    }
    else if (__builtin_strncmp(str, "signalUnknownCredential", strlen("signalUnknownCredential"))) {
        return SIGNALUNKNOWNCREDENTIAL;
    }
    else {
        // Default to first value for invalid input
        return CONDITIONALCREATE;
    }
}

ClientCapability::ClientCapability(Value v) noexcept : emlite::Val(ClientCapability::to_string(v)), value_(v) {}
ClientCapability::ClientCapability(Handle h) noexcept: emlite::Val(h) {
    value_ = ClientCapability::from_string(as<emlite::Uniq<char[]>>().get());
}

ClientCapability::ClientCapability(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = ClientCapability::from_string(as<emlite::Uniq<char[]>>().get());
}

ClientCapability ClientCapability::take_ownership(Handle h) noexcept { return ClientCapability(h); }
ClientCapability ClientCapability::clone() const noexcept { return *this; }
const char* ClientCapability::to_string(ClientCapability::Value value_) noexcept {
    switch (value_) {
        case CONDITIONALCREATE:
            return "conditionalCreate";
        case CONDITIONALGET:
            return "conditionalGet";
        case HYBRIDTRANSPORT:
            return "hybridTransport";
        case PASSKEYPLATFORMAUTHENTICATOR:
            return "passkeyPlatformAuthenticator";
        case USERVERIFYINGPLATFORMAUTHENTICATOR:
            return "userVerifyingPlatformAuthenticator";
        case RELATEDORIGINS:
            return "relatedOrigins";
        case SIGNALALLACCEPTEDCREDENTIALS:
            return "signalAllAcceptedCredentials";
        case SIGNALCURRENTUSERDETAILS:
            return "signalCurrentUserDetails";
        case SIGNALUNKNOWNCREDENTIAL:
            return "signalUnknownCredential";
        default:
            return "conditionalCreate"; // fallback to first value
    }
}

PublicKeyCredentialHint::Value PublicKeyCredentialHint::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "security-key", strlen("security-key"))) {
        return SECURITY_KEY;
    }
    else if (__builtin_strncmp(str, "client-device", strlen("client-device"))) {
        return CLIENT_DEVICE;
    }
    else if (__builtin_strncmp(str, "hybrid", strlen("hybrid"))) {
        return HYBRID;
    }
    else {
        // Default to first value for invalid input
        return SECURITY_KEY;
    }
}

PublicKeyCredentialHint::PublicKeyCredentialHint(Value v) noexcept : emlite::Val(PublicKeyCredentialHint::to_string(v)), value_(v) {}
PublicKeyCredentialHint::PublicKeyCredentialHint(Handle h) noexcept: emlite::Val(h) {
    value_ = PublicKeyCredentialHint::from_string(as<emlite::Uniq<char[]>>().get());
}

PublicKeyCredentialHint::PublicKeyCredentialHint(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = PublicKeyCredentialHint::from_string(as<emlite::Uniq<char[]>>().get());
}

PublicKeyCredentialHint PublicKeyCredentialHint::take_ownership(Handle h) noexcept { return PublicKeyCredentialHint(h); }
PublicKeyCredentialHint PublicKeyCredentialHint::clone() const noexcept { return *this; }
const char* PublicKeyCredentialHint::to_string(PublicKeyCredentialHint::Value value_) noexcept {
    switch (value_) {
        case SECURITY_KEY:
            return "security-key";
        case CLIENT_DEVICE:
            return "client-device";
        case HYBRID:
            return "hybrid";
        default:
            return "security-key"; // fallback to first value
    }
}

LargeBlobSupport::Value LargeBlobSupport::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "required", strlen("required"))) {
        return REQUIRED;
    }
    else if (__builtin_strncmp(str, "preferred", strlen("preferred"))) {
        return PREFERRED;
    }
    else {
        // Default to first value for invalid input
        return REQUIRED;
    }
}

LargeBlobSupport::LargeBlobSupport(Value v) noexcept : emlite::Val(LargeBlobSupport::to_string(v)), value_(v) {}
LargeBlobSupport::LargeBlobSupport(Handle h) noexcept: emlite::Val(h) {
    value_ = LargeBlobSupport::from_string(as<emlite::Uniq<char[]>>().get());
}

LargeBlobSupport::LargeBlobSupport(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = LargeBlobSupport::from_string(as<emlite::Uniq<char[]>>().get());
}

LargeBlobSupport LargeBlobSupport::take_ownership(Handle h) noexcept { return LargeBlobSupport(h); }
LargeBlobSupport LargeBlobSupport::clone() const noexcept { return *this; }
const char* LargeBlobSupport::to_string(LargeBlobSupport::Value value_) noexcept {
    switch (value_) {
        case REQUIRED:
            return "required";
        case PREFERRED:
            return "preferred";
        default:
            return "required"; // fallback to first value
    }
}

AacBitstreamFormat::Value AacBitstreamFormat::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "aac", strlen("aac"))) {
        return AAC;
    }
    else if (__builtin_strncmp(str, "adts", strlen("adts"))) {
        return ADTS;
    }
    else {
        // Default to first value for invalid input
        return AAC;
    }
}

AacBitstreamFormat::AacBitstreamFormat(Value v) noexcept : emlite::Val(AacBitstreamFormat::to_string(v)), value_(v) {}
AacBitstreamFormat::AacBitstreamFormat(Handle h) noexcept: emlite::Val(h) {
    value_ = AacBitstreamFormat::from_string(as<emlite::Uniq<char[]>>().get());
}

AacBitstreamFormat::AacBitstreamFormat(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = AacBitstreamFormat::from_string(as<emlite::Uniq<char[]>>().get());
}

AacBitstreamFormat AacBitstreamFormat::take_ownership(Handle h) noexcept { return AacBitstreamFormat(h); }
AacBitstreamFormat AacBitstreamFormat::clone() const noexcept { return *this; }
const char* AacBitstreamFormat::to_string(AacBitstreamFormat::Value value_) noexcept {
    switch (value_) {
        case AAC:
            return "aac";
        case ADTS:
            return "adts";
        default:
            return "aac"; // fallback to first value
    }
}

AvcBitstreamFormat::Value AvcBitstreamFormat::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "annexb", strlen("annexb"))) {
        return ANNEXB;
    }
    else if (__builtin_strncmp(str, "avc", strlen("avc"))) {
        return AVC;
    }
    else {
        // Default to first value for invalid input
        return ANNEXB;
    }
}

AvcBitstreamFormat::AvcBitstreamFormat(Value v) noexcept : emlite::Val(AvcBitstreamFormat::to_string(v)), value_(v) {}
AvcBitstreamFormat::AvcBitstreamFormat(Handle h) noexcept: emlite::Val(h) {
    value_ = AvcBitstreamFormat::from_string(as<emlite::Uniq<char[]>>().get());
}

AvcBitstreamFormat::AvcBitstreamFormat(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = AvcBitstreamFormat::from_string(as<emlite::Uniq<char[]>>().get());
}

AvcBitstreamFormat AvcBitstreamFormat::take_ownership(Handle h) noexcept { return AvcBitstreamFormat(h); }
AvcBitstreamFormat AvcBitstreamFormat::clone() const noexcept { return *this; }
const char* AvcBitstreamFormat::to_string(AvcBitstreamFormat::Value value_) noexcept {
    switch (value_) {
        case ANNEXB:
            return "annexb";
        case AVC:
            return "avc";
        default:
            return "annexb"; // fallback to first value
    }
}

HevcBitstreamFormat::Value HevcBitstreamFormat::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "annexb", strlen("annexb"))) {
        return ANNEXB;
    }
    else if (__builtin_strncmp(str, "hevc", strlen("hevc"))) {
        return HEVC;
    }
    else {
        // Default to first value for invalid input
        return ANNEXB;
    }
}

HevcBitstreamFormat::HevcBitstreamFormat(Value v) noexcept : emlite::Val(HevcBitstreamFormat::to_string(v)), value_(v) {}
HevcBitstreamFormat::HevcBitstreamFormat(Handle h) noexcept: emlite::Val(h) {
    value_ = HevcBitstreamFormat::from_string(as<emlite::Uniq<char[]>>().get());
}

HevcBitstreamFormat::HevcBitstreamFormat(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = HevcBitstreamFormat::from_string(as<emlite::Uniq<char[]>>().get());
}

HevcBitstreamFormat HevcBitstreamFormat::take_ownership(Handle h) noexcept { return HevcBitstreamFormat(h); }
HevcBitstreamFormat HevcBitstreamFormat::clone() const noexcept { return *this; }
const char* HevcBitstreamFormat::to_string(HevcBitstreamFormat::Value value_) noexcept {
    switch (value_) {
        case ANNEXB:
            return "annexb";
        case HEVC:
            return "hevc";
        default:
            return "annexb"; // fallback to first value
    }
}

OpusBitstreamFormat::Value OpusBitstreamFormat::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "opus", strlen("opus"))) {
        return OPUS;
    }
    else if (__builtin_strncmp(str, "ogg", strlen("ogg"))) {
        return OGG;
    }
    else {
        // Default to first value for invalid input
        return OPUS;
    }
}

OpusBitstreamFormat::OpusBitstreamFormat(Value v) noexcept : emlite::Val(OpusBitstreamFormat::to_string(v)), value_(v) {}
OpusBitstreamFormat::OpusBitstreamFormat(Handle h) noexcept: emlite::Val(h) {
    value_ = OpusBitstreamFormat::from_string(as<emlite::Uniq<char[]>>().get());
}

OpusBitstreamFormat::OpusBitstreamFormat(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = OpusBitstreamFormat::from_string(as<emlite::Uniq<char[]>>().get());
}

OpusBitstreamFormat OpusBitstreamFormat::take_ownership(Handle h) noexcept { return OpusBitstreamFormat(h); }
OpusBitstreamFormat OpusBitstreamFormat::clone() const noexcept { return *this; }
const char* OpusBitstreamFormat::to_string(OpusBitstreamFormat::Value value_) noexcept {
    switch (value_) {
        case OPUS:
            return "opus";
        case OGG:
            return "ogg";
        default:
            return "opus"; // fallback to first value
    }
}

OpusSignal::Value OpusSignal::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "auto", strlen("auto"))) {
        return AUTO_;
    }
    else if (__builtin_strncmp(str, "music", strlen("music"))) {
        return MUSIC;
    }
    else if (__builtin_strncmp(str, "voice", strlen("voice"))) {
        return VOICE;
    }
    else {
        // Default to first value for invalid input
        return AUTO_;
    }
}

OpusSignal::OpusSignal(Value v) noexcept : emlite::Val(OpusSignal::to_string(v)), value_(v) {}
OpusSignal::OpusSignal(Handle h) noexcept: emlite::Val(h) {
    value_ = OpusSignal::from_string(as<emlite::Uniq<char[]>>().get());
}

OpusSignal::OpusSignal(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = OpusSignal::from_string(as<emlite::Uniq<char[]>>().get());
}

OpusSignal OpusSignal::take_ownership(Handle h) noexcept { return OpusSignal(h); }
OpusSignal OpusSignal::clone() const noexcept { return *this; }
const char* OpusSignal::to_string(OpusSignal::Value value_) noexcept {
    switch (value_) {
        case AUTO_:
            return "auto";
        case MUSIC:
            return "music";
        case VOICE:
            return "voice";
        default:
            return "auto"; // fallback to first value
    }
}

OpusApplication::Value OpusApplication::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "voip", strlen("voip"))) {
        return VOIP;
    }
    else if (__builtin_strncmp(str, "audio", strlen("audio"))) {
        return AUDIO;
    }
    else if (__builtin_strncmp(str, "lowdelay", strlen("lowdelay"))) {
        return LOWDELAY;
    }
    else {
        // Default to first value for invalid input
        return VOIP;
    }
}

OpusApplication::OpusApplication(Value v) noexcept : emlite::Val(OpusApplication::to_string(v)), value_(v) {}
OpusApplication::OpusApplication(Handle h) noexcept: emlite::Val(h) {
    value_ = OpusApplication::from_string(as<emlite::Uniq<char[]>>().get());
}

OpusApplication::OpusApplication(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = OpusApplication::from_string(as<emlite::Uniq<char[]>>().get());
}

OpusApplication OpusApplication::take_ownership(Handle h) noexcept { return OpusApplication(h); }
OpusApplication OpusApplication::clone() const noexcept { return *this; }
const char* OpusApplication::to_string(OpusApplication::Value value_) noexcept {
    switch (value_) {
        case VOIP:
            return "voip";
        case AUDIO:
            return "audio";
        case LOWDELAY:
            return "lowdelay";
        default:
            return "voip"; // fallback to first value
    }
}

HardwareAcceleration::Value HardwareAcceleration::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "no-preference", strlen("no-preference"))) {
        return NO_PREFERENCE;
    }
    else if (__builtin_strncmp(str, "prefer-hardware", strlen("prefer-hardware"))) {
        return PREFER_HARDWARE;
    }
    else if (__builtin_strncmp(str, "prefer-software", strlen("prefer-software"))) {
        return PREFER_SOFTWARE;
    }
    else {
        // Default to first value for invalid input
        return NO_PREFERENCE;
    }
}

HardwareAcceleration::HardwareAcceleration(Value v) noexcept : emlite::Val(HardwareAcceleration::to_string(v)), value_(v) {}
HardwareAcceleration::HardwareAcceleration(Handle h) noexcept: emlite::Val(h) {
    value_ = HardwareAcceleration::from_string(as<emlite::Uniq<char[]>>().get());
}

HardwareAcceleration::HardwareAcceleration(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = HardwareAcceleration::from_string(as<emlite::Uniq<char[]>>().get());
}

HardwareAcceleration HardwareAcceleration::take_ownership(Handle h) noexcept { return HardwareAcceleration(h); }
HardwareAcceleration HardwareAcceleration::clone() const noexcept { return *this; }
const char* HardwareAcceleration::to_string(HardwareAcceleration::Value value_) noexcept {
    switch (value_) {
        case NO_PREFERENCE:
            return "no-preference";
        case PREFER_HARDWARE:
            return "prefer-hardware";
        case PREFER_SOFTWARE:
            return "prefer-software";
        default:
            return "no-preference"; // fallback to first value
    }
}

AlphaOption::Value AlphaOption::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "keep", strlen("keep"))) {
        return KEEP;
    }
    else if (__builtin_strncmp(str, "discard", strlen("discard"))) {
        return DISCARD;
    }
    else {
        // Default to first value for invalid input
        return KEEP;
    }
}

AlphaOption::AlphaOption(Value v) noexcept : emlite::Val(AlphaOption::to_string(v)), value_(v) {}
AlphaOption::AlphaOption(Handle h) noexcept: emlite::Val(h) {
    value_ = AlphaOption::from_string(as<emlite::Uniq<char[]>>().get());
}

AlphaOption::AlphaOption(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = AlphaOption::from_string(as<emlite::Uniq<char[]>>().get());
}

AlphaOption AlphaOption::take_ownership(Handle h) noexcept { return AlphaOption(h); }
AlphaOption AlphaOption::clone() const noexcept { return *this; }
const char* AlphaOption::to_string(AlphaOption::Value value_) noexcept {
    switch (value_) {
        case KEEP:
            return "keep";
        case DISCARD:
            return "discard";
        default:
            return "keep"; // fallback to first value
    }
}

LatencyMode::Value LatencyMode::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "quality", strlen("quality"))) {
        return QUALITY;
    }
    else if (__builtin_strncmp(str, "realtime", strlen("realtime"))) {
        return REALTIME;
    }
    else {
        // Default to first value for invalid input
        return QUALITY;
    }
}

LatencyMode::LatencyMode(Value v) noexcept : emlite::Val(LatencyMode::to_string(v)), value_(v) {}
LatencyMode::LatencyMode(Handle h) noexcept: emlite::Val(h) {
    value_ = LatencyMode::from_string(as<emlite::Uniq<char[]>>().get());
}

LatencyMode::LatencyMode(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = LatencyMode::from_string(as<emlite::Uniq<char[]>>().get());
}

LatencyMode LatencyMode::take_ownership(Handle h) noexcept { return LatencyMode(h); }
LatencyMode LatencyMode::clone() const noexcept { return *this; }
const char* LatencyMode::to_string(LatencyMode::Value value_) noexcept {
    switch (value_) {
        case QUALITY:
            return "quality";
        case REALTIME:
            return "realtime";
        default:
            return "quality"; // fallback to first value
    }
}

VideoEncoderBitrateMode::Value VideoEncoderBitrateMode::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "constant", strlen("constant"))) {
        return CONSTANT;
    }
    else if (__builtin_strncmp(str, "variable", strlen("variable"))) {
        return VARIABLE;
    }
    else if (__builtin_strncmp(str, "quantizer", strlen("quantizer"))) {
        return QUANTIZER;
    }
    else {
        // Default to first value for invalid input
        return CONSTANT;
    }
}

VideoEncoderBitrateMode::VideoEncoderBitrateMode(Value v) noexcept : emlite::Val(VideoEncoderBitrateMode::to_string(v)), value_(v) {}
VideoEncoderBitrateMode::VideoEncoderBitrateMode(Handle h) noexcept: emlite::Val(h) {
    value_ = VideoEncoderBitrateMode::from_string(as<emlite::Uniq<char[]>>().get());
}

VideoEncoderBitrateMode::VideoEncoderBitrateMode(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = VideoEncoderBitrateMode::from_string(as<emlite::Uniq<char[]>>().get());
}

VideoEncoderBitrateMode VideoEncoderBitrateMode::take_ownership(Handle h) noexcept { return VideoEncoderBitrateMode(h); }
VideoEncoderBitrateMode VideoEncoderBitrateMode::clone() const noexcept { return *this; }
const char* VideoEncoderBitrateMode::to_string(VideoEncoderBitrateMode::Value value_) noexcept {
    switch (value_) {
        case CONSTANT:
            return "constant";
        case VARIABLE:
            return "variable";
        case QUANTIZER:
            return "quantizer";
        default:
            return "constant"; // fallback to first value
    }
}

CodecState::Value CodecState::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "unconfigured", strlen("unconfigured"))) {
        return UNCONFIGURED;
    }
    else if (__builtin_strncmp(str, "configured", strlen("configured"))) {
        return CONFIGURED;
    }
    else if (__builtin_strncmp(str, "closed", strlen("closed"))) {
        return CLOSED;
    }
    else {
        // Default to first value for invalid input
        return UNCONFIGURED;
    }
}

CodecState::CodecState(Value v) noexcept : emlite::Val(CodecState::to_string(v)), value_(v) {}
CodecState::CodecState(Handle h) noexcept: emlite::Val(h) {
    value_ = CodecState::from_string(as<emlite::Uniq<char[]>>().get());
}

CodecState::CodecState(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = CodecState::from_string(as<emlite::Uniq<char[]>>().get());
}

CodecState CodecState::take_ownership(Handle h) noexcept { return CodecState(h); }
CodecState CodecState::clone() const noexcept { return *this; }
const char* CodecState::to_string(CodecState::Value value_) noexcept {
    switch (value_) {
        case UNCONFIGURED:
            return "unconfigured";
        case CONFIGURED:
            return "configured";
        case CLOSED:
            return "closed";
        default:
            return "unconfigured"; // fallback to first value
    }
}

EncodedAudioChunkType::Value EncodedAudioChunkType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "key", strlen("key"))) {
        return KEY;
    }
    else if (__builtin_strncmp(str, "delta", strlen("delta"))) {
        return DELTA;
    }
    else {
        // Default to first value for invalid input
        return KEY;
    }
}

EncodedAudioChunkType::EncodedAudioChunkType(Value v) noexcept : emlite::Val(EncodedAudioChunkType::to_string(v)), value_(v) {}
EncodedAudioChunkType::EncodedAudioChunkType(Handle h) noexcept: emlite::Val(h) {
    value_ = EncodedAudioChunkType::from_string(as<emlite::Uniq<char[]>>().get());
}

EncodedAudioChunkType::EncodedAudioChunkType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = EncodedAudioChunkType::from_string(as<emlite::Uniq<char[]>>().get());
}

EncodedAudioChunkType EncodedAudioChunkType::take_ownership(Handle h) noexcept { return EncodedAudioChunkType(h); }
EncodedAudioChunkType EncodedAudioChunkType::clone() const noexcept { return *this; }
const char* EncodedAudioChunkType::to_string(EncodedAudioChunkType::Value value_) noexcept {
    switch (value_) {
        case KEY:
            return "key";
        case DELTA:
            return "delta";
        default:
            return "key"; // fallback to first value
    }
}

EncodedVideoChunkType::Value EncodedVideoChunkType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "key", strlen("key"))) {
        return KEY;
    }
    else if (__builtin_strncmp(str, "delta", strlen("delta"))) {
        return DELTA;
    }
    else {
        // Default to first value for invalid input
        return KEY;
    }
}

EncodedVideoChunkType::EncodedVideoChunkType(Value v) noexcept : emlite::Val(EncodedVideoChunkType::to_string(v)), value_(v) {}
EncodedVideoChunkType::EncodedVideoChunkType(Handle h) noexcept: emlite::Val(h) {
    value_ = EncodedVideoChunkType::from_string(as<emlite::Uniq<char[]>>().get());
}

EncodedVideoChunkType::EncodedVideoChunkType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = EncodedVideoChunkType::from_string(as<emlite::Uniq<char[]>>().get());
}

EncodedVideoChunkType EncodedVideoChunkType::take_ownership(Handle h) noexcept { return EncodedVideoChunkType(h); }
EncodedVideoChunkType EncodedVideoChunkType::clone() const noexcept { return *this; }
const char* EncodedVideoChunkType::to_string(EncodedVideoChunkType::Value value_) noexcept {
    switch (value_) {
        case KEY:
            return "key";
        case DELTA:
            return "delta";
        default:
            return "key"; // fallback to first value
    }
}

AudioSampleFormat::Value AudioSampleFormat::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "u8", strlen("u8"))) {
        return U8;
    }
    else if (__builtin_strncmp(str, "s16", strlen("s16"))) {
        return S16;
    }
    else if (__builtin_strncmp(str, "s32", strlen("s32"))) {
        return S32;
    }
    else if (__builtin_strncmp(str, "f32", strlen("f32"))) {
        return F32;
    }
    else if (__builtin_strncmp(str, "u8-planar", strlen("u8-planar"))) {
        return U8_PLANAR;
    }
    else if (__builtin_strncmp(str, "s16-planar", strlen("s16-planar"))) {
        return S16_PLANAR;
    }
    else if (__builtin_strncmp(str, "s32-planar", strlen("s32-planar"))) {
        return S32_PLANAR;
    }
    else if (__builtin_strncmp(str, "f32-planar", strlen("f32-planar"))) {
        return F32_PLANAR;
    }
    else {
        // Default to first value for invalid input
        return U8;
    }
}

AudioSampleFormat::AudioSampleFormat(Value v) noexcept : emlite::Val(AudioSampleFormat::to_string(v)), value_(v) {}
AudioSampleFormat::AudioSampleFormat(Handle h) noexcept: emlite::Val(h) {
    value_ = AudioSampleFormat::from_string(as<emlite::Uniq<char[]>>().get());
}

AudioSampleFormat::AudioSampleFormat(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = AudioSampleFormat::from_string(as<emlite::Uniq<char[]>>().get());
}

AudioSampleFormat AudioSampleFormat::take_ownership(Handle h) noexcept { return AudioSampleFormat(h); }
AudioSampleFormat AudioSampleFormat::clone() const noexcept { return *this; }
const char* AudioSampleFormat::to_string(AudioSampleFormat::Value value_) noexcept {
    switch (value_) {
        case U8:
            return "u8";
        case S16:
            return "s16";
        case S32:
            return "s32";
        case F32:
            return "f32";
        case U8_PLANAR:
            return "u8-planar";
        case S16_PLANAR:
            return "s16-planar";
        case S32_PLANAR:
            return "s32-planar";
        case F32_PLANAR:
            return "f32-planar";
        default:
            return "u8"; // fallback to first value
    }
}

VideoPixelFormat::Value VideoPixelFormat::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "I420", strlen("I420"))) {
        return I420;
    }
    else if (__builtin_strncmp(str, "I420P10", strlen("I420P10"))) {
        return I420P10;
    }
    else if (__builtin_strncmp(str, "I420P12", strlen("I420P12"))) {
        return I420P12;
    }
    else if (__builtin_strncmp(str, "I420A", strlen("I420A"))) {
        return I420A;
    }
    else if (__builtin_strncmp(str, "I420AP10", strlen("I420AP10"))) {
        return I420AP10;
    }
    else if (__builtin_strncmp(str, "I420AP12", strlen("I420AP12"))) {
        return I420AP12;
    }
    else if (__builtin_strncmp(str, "I422", strlen("I422"))) {
        return I422;
    }
    else if (__builtin_strncmp(str, "I422P10", strlen("I422P10"))) {
        return I422P10;
    }
    else if (__builtin_strncmp(str, "I422P12", strlen("I422P12"))) {
        return I422P12;
    }
    else if (__builtin_strncmp(str, "I422A", strlen("I422A"))) {
        return I422A;
    }
    else if (__builtin_strncmp(str, "I422AP10", strlen("I422AP10"))) {
        return I422AP10;
    }
    else if (__builtin_strncmp(str, "I422AP12", strlen("I422AP12"))) {
        return I422AP12;
    }
    else if (__builtin_strncmp(str, "I444", strlen("I444"))) {
        return I444;
    }
    else if (__builtin_strncmp(str, "I444P10", strlen("I444P10"))) {
        return I444P10;
    }
    else if (__builtin_strncmp(str, "I444P12", strlen("I444P12"))) {
        return I444P12;
    }
    else if (__builtin_strncmp(str, "I444A", strlen("I444A"))) {
        return I444A;
    }
    else if (__builtin_strncmp(str, "I444AP10", strlen("I444AP10"))) {
        return I444AP10;
    }
    else if (__builtin_strncmp(str, "I444AP12", strlen("I444AP12"))) {
        return I444AP12;
    }
    else if (__builtin_strncmp(str, "NV12", strlen("NV12"))) {
        return NV12;
    }
    else if (__builtin_strncmp(str, "RGBA", strlen("RGBA"))) {
        return RGBA;
    }
    else if (__builtin_strncmp(str, "RGBX", strlen("RGBX"))) {
        return RGBX;
    }
    else if (__builtin_strncmp(str, "BGRA", strlen("BGRA"))) {
        return BGRA;
    }
    else if (__builtin_strncmp(str, "BGRX", strlen("BGRX"))) {
        return BGRX;
    }
    else {
        // Default to first value for invalid input
        return I420;
    }
}

VideoPixelFormat::VideoPixelFormat(Value v) noexcept : emlite::Val(VideoPixelFormat::to_string(v)), value_(v) {}
VideoPixelFormat::VideoPixelFormat(Handle h) noexcept: emlite::Val(h) {
    value_ = VideoPixelFormat::from_string(as<emlite::Uniq<char[]>>().get());
}

VideoPixelFormat::VideoPixelFormat(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = VideoPixelFormat::from_string(as<emlite::Uniq<char[]>>().get());
}

VideoPixelFormat VideoPixelFormat::take_ownership(Handle h) noexcept { return VideoPixelFormat(h); }
VideoPixelFormat VideoPixelFormat::clone() const noexcept { return *this; }
const char* VideoPixelFormat::to_string(VideoPixelFormat::Value value_) noexcept {
    switch (value_) {
        case I420:
            return "I420";
        case I420P10:
            return "I420P10";
        case I420P12:
            return "I420P12";
        case I420A:
            return "I420A";
        case I420AP10:
            return "I420AP10";
        case I420AP12:
            return "I420AP12";
        case I422:
            return "I422";
        case I422P10:
            return "I422P10";
        case I422P12:
            return "I422P12";
        case I422A:
            return "I422A";
        case I422AP10:
            return "I422AP10";
        case I422AP12:
            return "I422AP12";
        case I444:
            return "I444";
        case I444P10:
            return "I444P10";
        case I444P12:
            return "I444P12";
        case I444A:
            return "I444A";
        case I444AP10:
            return "I444AP10";
        case I444AP12:
            return "I444AP12";
        case NV12:
            return "NV12";
        case RGBA:
            return "RGBA";
        case RGBX:
            return "RGBX";
        case BGRA:
            return "BGRA";
        case BGRX:
            return "BGRX";
        default:
            return "I420"; // fallback to first value
    }
}

VideoColorPrimaries::Value VideoColorPrimaries::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "bt709", strlen("bt709"))) {
        return BT709;
    }
    else if (__builtin_strncmp(str, "bt470bg", strlen("bt470bg"))) {
        return BT470BG;
    }
    else if (__builtin_strncmp(str, "smpte170m", strlen("smpte170m"))) {
        return SMPTE170M;
    }
    else if (__builtin_strncmp(str, "bt2020", strlen("bt2020"))) {
        return BT2020;
    }
    else if (__builtin_strncmp(str, "smpte432", strlen("smpte432"))) {
        return SMPTE432;
    }
    else {
        // Default to first value for invalid input
        return BT709;
    }
}

VideoColorPrimaries::VideoColorPrimaries(Value v) noexcept : emlite::Val(VideoColorPrimaries::to_string(v)), value_(v) {}
VideoColorPrimaries::VideoColorPrimaries(Handle h) noexcept: emlite::Val(h) {
    value_ = VideoColorPrimaries::from_string(as<emlite::Uniq<char[]>>().get());
}

VideoColorPrimaries::VideoColorPrimaries(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = VideoColorPrimaries::from_string(as<emlite::Uniq<char[]>>().get());
}

VideoColorPrimaries VideoColorPrimaries::take_ownership(Handle h) noexcept { return VideoColorPrimaries(h); }
VideoColorPrimaries VideoColorPrimaries::clone() const noexcept { return *this; }
const char* VideoColorPrimaries::to_string(VideoColorPrimaries::Value value_) noexcept {
    switch (value_) {
        case BT709:
            return "bt709";
        case BT470BG:
            return "bt470bg";
        case SMPTE170M:
            return "smpte170m";
        case BT2020:
            return "bt2020";
        case SMPTE432:
            return "smpte432";
        default:
            return "bt709"; // fallback to first value
    }
}

VideoTransferCharacteristics::Value VideoTransferCharacteristics::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "bt709", strlen("bt709"))) {
        return BT709;
    }
    else if (__builtin_strncmp(str, "smpte170m", strlen("smpte170m"))) {
        return SMPTE170M;
    }
    else if (__builtin_strncmp(str, "iec61966-2-1", strlen("iec61966-2-1"))) {
        return IEC61966_2_1;
    }
    else if (__builtin_strncmp(str, "linear", strlen("linear"))) {
        return LINEAR;
    }
    else if (__builtin_strncmp(str, "pq", strlen("pq"))) {
        return PQ;
    }
    else if (__builtin_strncmp(str, "hlg", strlen("hlg"))) {
        return HLG;
    }
    else {
        // Default to first value for invalid input
        return BT709;
    }
}

VideoTransferCharacteristics::VideoTransferCharacteristics(Value v) noexcept : emlite::Val(VideoTransferCharacteristics::to_string(v)), value_(v) {}
VideoTransferCharacteristics::VideoTransferCharacteristics(Handle h) noexcept: emlite::Val(h) {
    value_ = VideoTransferCharacteristics::from_string(as<emlite::Uniq<char[]>>().get());
}

VideoTransferCharacteristics::VideoTransferCharacteristics(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = VideoTransferCharacteristics::from_string(as<emlite::Uniq<char[]>>().get());
}

VideoTransferCharacteristics VideoTransferCharacteristics::take_ownership(Handle h) noexcept { return VideoTransferCharacteristics(h); }
VideoTransferCharacteristics VideoTransferCharacteristics::clone() const noexcept { return *this; }
const char* VideoTransferCharacteristics::to_string(VideoTransferCharacteristics::Value value_) noexcept {
    switch (value_) {
        case BT709:
            return "bt709";
        case SMPTE170M:
            return "smpte170m";
        case IEC61966_2_1:
            return "iec61966-2-1";
        case LINEAR:
            return "linear";
        case PQ:
            return "pq";
        case HLG:
            return "hlg";
        default:
            return "bt709"; // fallback to first value
    }
}

VideoMatrixCoefficients::Value VideoMatrixCoefficients::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "rgb", strlen("rgb"))) {
        return RGB;
    }
    else if (__builtin_strncmp(str, "bt709", strlen("bt709"))) {
        return BT709;
    }
    else if (__builtin_strncmp(str, "bt470bg", strlen("bt470bg"))) {
        return BT470BG;
    }
    else if (__builtin_strncmp(str, "smpte170m", strlen("smpte170m"))) {
        return SMPTE170M;
    }
    else if (__builtin_strncmp(str, "bt2020-ncl", strlen("bt2020-ncl"))) {
        return BT2020_NCL;
    }
    else {
        // Default to first value for invalid input
        return RGB;
    }
}

VideoMatrixCoefficients::VideoMatrixCoefficients(Value v) noexcept : emlite::Val(VideoMatrixCoefficients::to_string(v)), value_(v) {}
VideoMatrixCoefficients::VideoMatrixCoefficients(Handle h) noexcept: emlite::Val(h) {
    value_ = VideoMatrixCoefficients::from_string(as<emlite::Uniq<char[]>>().get());
}

VideoMatrixCoefficients::VideoMatrixCoefficients(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = VideoMatrixCoefficients::from_string(as<emlite::Uniq<char[]>>().get());
}

VideoMatrixCoefficients VideoMatrixCoefficients::take_ownership(Handle h) noexcept { return VideoMatrixCoefficients(h); }
VideoMatrixCoefficients VideoMatrixCoefficients::clone() const noexcept { return *this; }
const char* VideoMatrixCoefficients::to_string(VideoMatrixCoefficients::Value value_) noexcept {
    switch (value_) {
        case RGB:
            return "rgb";
        case BT709:
            return "bt709";
        case BT470BG:
            return "bt470bg";
        case SMPTE170M:
            return "smpte170m";
        case BT2020_NCL:
            return "bt2020-ncl";
        default:
            return "rgb"; // fallback to first value
    }
}

KeyType::Value KeyType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "public", strlen("public"))) {
        return PUBLIC_;
    }
    else if (__builtin_strncmp(str, "private", strlen("private"))) {
        return PRIVATE_;
    }
    else if (__builtin_strncmp(str, "secret", strlen("secret"))) {
        return SECRET;
    }
    else {
        // Default to first value for invalid input
        return PUBLIC_;
    }
}

KeyType::KeyType(Value v) noexcept : emlite::Val(KeyType::to_string(v)), value_(v) {}
KeyType::KeyType(Handle h) noexcept: emlite::Val(h) {
    value_ = KeyType::from_string(as<emlite::Uniq<char[]>>().get());
}

KeyType::KeyType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = KeyType::from_string(as<emlite::Uniq<char[]>>().get());
}

KeyType KeyType::take_ownership(Handle h) noexcept { return KeyType(h); }
KeyType KeyType::clone() const noexcept { return *this; }
const char* KeyType::to_string(KeyType::Value value_) noexcept {
    switch (value_) {
        case PUBLIC_:
            return "public";
        case PRIVATE_:
            return "private";
        case SECRET:
            return "secret";
        default:
            return "public"; // fallback to first value
    }
}

KeyUsage::Value KeyUsage::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "encrypt", strlen("encrypt"))) {
        return ENCRYPT;
    }
    else if (__builtin_strncmp(str, "decrypt", strlen("decrypt"))) {
        return DECRYPT;
    }
    else if (__builtin_strncmp(str, "sign", strlen("sign"))) {
        return SIGN;
    }
    else if (__builtin_strncmp(str, "verify", strlen("verify"))) {
        return VERIFY;
    }
    else if (__builtin_strncmp(str, "deriveKey", strlen("deriveKey"))) {
        return DERIVEKEY;
    }
    else if (__builtin_strncmp(str, "deriveBits", strlen("deriveBits"))) {
        return DERIVEBITS;
    }
    else if (__builtin_strncmp(str, "wrapKey", strlen("wrapKey"))) {
        return WRAPKEY;
    }
    else if (__builtin_strncmp(str, "unwrapKey", strlen("unwrapKey"))) {
        return UNWRAPKEY;
    }
    else {
        // Default to first value for invalid input
        return ENCRYPT;
    }
}

KeyUsage::KeyUsage(Value v) noexcept : emlite::Val(KeyUsage::to_string(v)), value_(v) {}
KeyUsage::KeyUsage(Handle h) noexcept: emlite::Val(h) {
    value_ = KeyUsage::from_string(as<emlite::Uniq<char[]>>().get());
}

KeyUsage::KeyUsage(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = KeyUsage::from_string(as<emlite::Uniq<char[]>>().get());
}

KeyUsage KeyUsage::take_ownership(Handle h) noexcept { return KeyUsage(h); }
KeyUsage KeyUsage::clone() const noexcept { return *this; }
const char* KeyUsage::to_string(KeyUsage::Value value_) noexcept {
    switch (value_) {
        case ENCRYPT:
            return "encrypt";
        case DECRYPT:
            return "decrypt";
        case SIGN:
            return "sign";
        case VERIFY:
            return "verify";
        case DERIVEKEY:
            return "deriveKey";
        case DERIVEBITS:
            return "deriveBits";
        case WRAPKEY:
            return "wrapKey";
        case UNWRAPKEY:
            return "unwrapKey";
        default:
            return "encrypt"; // fallback to first value
    }
}

KeyFormat::Value KeyFormat::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "raw", strlen("raw"))) {
        return RAW;
    }
    else if (__builtin_strncmp(str, "spki", strlen("spki"))) {
        return SPKI;
    }
    else if (__builtin_strncmp(str, "pkcs8", strlen("pkcs8"))) {
        return PKCS8;
    }
    else if (__builtin_strncmp(str, "jwk", strlen("jwk"))) {
        return JWK;
    }
    else {
        // Default to first value for invalid input
        return RAW;
    }
}

KeyFormat::KeyFormat(Value v) noexcept : emlite::Val(KeyFormat::to_string(v)), value_(v) {}
KeyFormat::KeyFormat(Handle h) noexcept: emlite::Val(h) {
    value_ = KeyFormat::from_string(as<emlite::Uniq<char[]>>().get());
}

KeyFormat::KeyFormat(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = KeyFormat::from_string(as<emlite::Uniq<char[]>>().get());
}

KeyFormat KeyFormat::take_ownership(Handle h) noexcept { return KeyFormat(h); }
KeyFormat KeyFormat::clone() const noexcept { return *this; }
const char* KeyFormat::to_string(KeyFormat::Value value_) noexcept {
    switch (value_) {
        case RAW:
            return "raw";
        case SPKI:
            return "spki";
        case PKCS8:
            return "pkcs8";
        case JWK:
            return "jwk";
        default:
            return "raw"; // fallback to first value
    }
}

WebGLPowerPreference::Value WebGLPowerPreference::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "default", strlen("default"))) {
        return DEFAULT_;
    }
    else if (__builtin_strncmp(str, "low-power", strlen("low-power"))) {
        return LOW_POWER;
    }
    else if (__builtin_strncmp(str, "high-performance", strlen("high-performance"))) {
        return HIGH_PERFORMANCE;
    }
    else {
        // Default to first value for invalid input
        return DEFAULT_;
    }
}

WebGLPowerPreference::WebGLPowerPreference(Value v) noexcept : emlite::Val(WebGLPowerPreference::to_string(v)), value_(v) {}
WebGLPowerPreference::WebGLPowerPreference(Handle h) noexcept: emlite::Val(h) {
    value_ = WebGLPowerPreference::from_string(as<emlite::Uniq<char[]>>().get());
}

WebGLPowerPreference::WebGLPowerPreference(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = WebGLPowerPreference::from_string(as<emlite::Uniq<char[]>>().get());
}

WebGLPowerPreference WebGLPowerPreference::take_ownership(Handle h) noexcept { return WebGLPowerPreference(h); }
WebGLPowerPreference WebGLPowerPreference::clone() const noexcept { return *this; }
const char* WebGLPowerPreference::to_string(WebGLPowerPreference::Value value_) noexcept {
    switch (value_) {
        case DEFAULT_:
            return "default";
        case LOW_POWER:
            return "low-power";
        case HIGH_PERFORMANCE:
            return "high-performance";
        default:
            return "default"; // fallback to first value
    }
}

GPUPowerPreference::Value GPUPowerPreference::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "low-power", strlen("low-power"))) {
        return LOW_POWER;
    }
    else if (__builtin_strncmp(str, "high-performance", strlen("high-performance"))) {
        return HIGH_PERFORMANCE;
    }
    else {
        // Default to first value for invalid input
        return LOW_POWER;
    }
}

GPUPowerPreference::GPUPowerPreference(Value v) noexcept : emlite::Val(GPUPowerPreference::to_string(v)), value_(v) {}
GPUPowerPreference::GPUPowerPreference(Handle h) noexcept: emlite::Val(h) {
    value_ = GPUPowerPreference::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUPowerPreference::GPUPowerPreference(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = GPUPowerPreference::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUPowerPreference GPUPowerPreference::take_ownership(Handle h) noexcept { return GPUPowerPreference(h); }
GPUPowerPreference GPUPowerPreference::clone() const noexcept { return *this; }
const char* GPUPowerPreference::to_string(GPUPowerPreference::Value value_) noexcept {
    switch (value_) {
        case LOW_POWER:
            return "low-power";
        case HIGH_PERFORMANCE:
            return "high-performance";
        default:
            return "low-power"; // fallback to first value
    }
}

GPUFeatureName::Value GPUFeatureName::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "core-features-and-limits", strlen("core-features-and-limits"))) {
        return CORE_FEATURES_AND_LIMITS;
    }
    else if (__builtin_strncmp(str, "depth-clip-control", strlen("depth-clip-control"))) {
        return DEPTH_CLIP_CONTROL;
    }
    else if (__builtin_strncmp(str, "depth32float-stencil8", strlen("depth32float-stencil8"))) {
        return DEPTH32FLOAT_STENCIL8;
    }
    else if (__builtin_strncmp(str, "texture-compression-bc", strlen("texture-compression-bc"))) {
        return TEXTURE_COMPRESSION_BC;
    }
    else if (__builtin_strncmp(str, "texture-compression-bc-sliced-3d", strlen("texture-compression-bc-sliced-3d"))) {
        return TEXTURE_COMPRESSION_BC_SLICED_3D;
    }
    else if (__builtin_strncmp(str, "texture-compression-etc2", strlen("texture-compression-etc2"))) {
        return TEXTURE_COMPRESSION_ETC2;
    }
    else if (__builtin_strncmp(str, "texture-compression-astc", strlen("texture-compression-astc"))) {
        return TEXTURE_COMPRESSION_ASTC;
    }
    else if (__builtin_strncmp(str, "texture-compression-astc-sliced-3d", strlen("texture-compression-astc-sliced-3d"))) {
        return TEXTURE_COMPRESSION_ASTC_SLICED_3D;
    }
    else if (__builtin_strncmp(str, "timestamp-query", strlen("timestamp-query"))) {
        return TIMESTAMP_QUERY;
    }
    else if (__builtin_strncmp(str, "indirect-first-instance", strlen("indirect-first-instance"))) {
        return INDIRECT_FIRST_INSTANCE;
    }
    else if (__builtin_strncmp(str, "shader-f16", strlen("shader-f16"))) {
        return SHADER_F16;
    }
    else if (__builtin_strncmp(str, "rg11b10ufloat-renderable", strlen("rg11b10ufloat-renderable"))) {
        return RG11B10UFLOAT_RENDERABLE;
    }
    else if (__builtin_strncmp(str, "bgra8unorm-storage", strlen("bgra8unorm-storage"))) {
        return BGRA8UNORM_STORAGE;
    }
    else if (__builtin_strncmp(str, "float32-filterable", strlen("float32-filterable"))) {
        return FLOAT32_FILTERABLE;
    }
    else if (__builtin_strncmp(str, "float32-blendable", strlen("float32-blendable"))) {
        return FLOAT32_BLENDABLE;
    }
    else if (__builtin_strncmp(str, "clip-distances", strlen("clip-distances"))) {
        return CLIP_DISTANCES;
    }
    else if (__builtin_strncmp(str, "dual-source-blending", strlen("dual-source-blending"))) {
        return DUAL_SOURCE_BLENDING;
    }
    else if (__builtin_strncmp(str, "subgroups", strlen("subgroups"))) {
        return SUBGROUPS;
    }
    else if (__builtin_strncmp(str, "texture-formats-tier1", strlen("texture-formats-tier1"))) {
        return TEXTURE_FORMATS_TIER1;
    }
    else if (__builtin_strncmp(str, "texture-formats-tier2", strlen("texture-formats-tier2"))) {
        return TEXTURE_FORMATS_TIER2;
    }
    else {
        // Default to first value for invalid input
        return CORE_FEATURES_AND_LIMITS;
    }
}

GPUFeatureName::GPUFeatureName(Value v) noexcept : emlite::Val(GPUFeatureName::to_string(v)), value_(v) {}
GPUFeatureName::GPUFeatureName(Handle h) noexcept: emlite::Val(h) {
    value_ = GPUFeatureName::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUFeatureName::GPUFeatureName(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = GPUFeatureName::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUFeatureName GPUFeatureName::take_ownership(Handle h) noexcept { return GPUFeatureName(h); }
GPUFeatureName GPUFeatureName::clone() const noexcept { return *this; }
const char* GPUFeatureName::to_string(GPUFeatureName::Value value_) noexcept {
    switch (value_) {
        case CORE_FEATURES_AND_LIMITS:
            return "core-features-and-limits";
        case DEPTH_CLIP_CONTROL:
            return "depth-clip-control";
        case DEPTH32FLOAT_STENCIL8:
            return "depth32float-stencil8";
        case TEXTURE_COMPRESSION_BC:
            return "texture-compression-bc";
        case TEXTURE_COMPRESSION_BC_SLICED_3D:
            return "texture-compression-bc-sliced-3d";
        case TEXTURE_COMPRESSION_ETC2:
            return "texture-compression-etc2";
        case TEXTURE_COMPRESSION_ASTC:
            return "texture-compression-astc";
        case TEXTURE_COMPRESSION_ASTC_SLICED_3D:
            return "texture-compression-astc-sliced-3d";
        case TIMESTAMP_QUERY:
            return "timestamp-query";
        case INDIRECT_FIRST_INSTANCE:
            return "indirect-first-instance";
        case SHADER_F16:
            return "shader-f16";
        case RG11B10UFLOAT_RENDERABLE:
            return "rg11b10ufloat-renderable";
        case BGRA8UNORM_STORAGE:
            return "bgra8unorm-storage";
        case FLOAT32_FILTERABLE:
            return "float32-filterable";
        case FLOAT32_BLENDABLE:
            return "float32-blendable";
        case CLIP_DISTANCES:
            return "clip-distances";
        case DUAL_SOURCE_BLENDING:
            return "dual-source-blending";
        case SUBGROUPS:
            return "subgroups";
        case TEXTURE_FORMATS_TIER1:
            return "texture-formats-tier1";
        case TEXTURE_FORMATS_TIER2:
            return "texture-formats-tier2";
        default:
            return "core-features-and-limits"; // fallback to first value
    }
}

GPUBufferMapState::Value GPUBufferMapState::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "unmapped", strlen("unmapped"))) {
        return UNMAPPED;
    }
    else if (__builtin_strncmp(str, "pending", strlen("pending"))) {
        return PENDING;
    }
    else if (__builtin_strncmp(str, "mapped", strlen("mapped"))) {
        return MAPPED;
    }
    else {
        // Default to first value for invalid input
        return UNMAPPED;
    }
}

GPUBufferMapState::GPUBufferMapState(Value v) noexcept : emlite::Val(GPUBufferMapState::to_string(v)), value_(v) {}
GPUBufferMapState::GPUBufferMapState(Handle h) noexcept: emlite::Val(h) {
    value_ = GPUBufferMapState::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUBufferMapState::GPUBufferMapState(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = GPUBufferMapState::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUBufferMapState GPUBufferMapState::take_ownership(Handle h) noexcept { return GPUBufferMapState(h); }
GPUBufferMapState GPUBufferMapState::clone() const noexcept { return *this; }
const char* GPUBufferMapState::to_string(GPUBufferMapState::Value value_) noexcept {
    switch (value_) {
        case UNMAPPED:
            return "unmapped";
        case PENDING:
            return "pending";
        case MAPPED:
            return "mapped";
        default:
            return "unmapped"; // fallback to first value
    }
}

GPUTextureDimension::Value GPUTextureDimension::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "1d", strlen("1d"))) {
        return _1D;
    }
    else if (__builtin_strncmp(str, "2d", strlen("2d"))) {
        return _2D;
    }
    else if (__builtin_strncmp(str, "3d", strlen("3d"))) {
        return _3D;
    }
    else {
        // Default to first value for invalid input
        return _1D;
    }
}

GPUTextureDimension::GPUTextureDimension(Value v) noexcept : emlite::Val(GPUTextureDimension::to_string(v)), value_(v) {}
GPUTextureDimension::GPUTextureDimension(Handle h) noexcept: emlite::Val(h) {
    value_ = GPUTextureDimension::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUTextureDimension::GPUTextureDimension(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = GPUTextureDimension::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUTextureDimension GPUTextureDimension::take_ownership(Handle h) noexcept { return GPUTextureDimension(h); }
GPUTextureDimension GPUTextureDimension::clone() const noexcept { return *this; }
const char* GPUTextureDimension::to_string(GPUTextureDimension::Value value_) noexcept {
    switch (value_) {
        case _1D:
            return "1d";
        case _2D:
            return "2d";
        case _3D:
            return "3d";
        default:
            return "1d"; // fallback to first value
    }
}

GPUTextureViewDimension::Value GPUTextureViewDimension::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "1d", strlen("1d"))) {
        return _1D;
    }
    else if (__builtin_strncmp(str, "2d", strlen("2d"))) {
        return _2D;
    }
    else if (__builtin_strncmp(str, "2d-array", strlen("2d-array"))) {
        return _2D_ARRAY;
    }
    else if (__builtin_strncmp(str, "cube", strlen("cube"))) {
        return CUBE;
    }
    else if (__builtin_strncmp(str, "cube-array", strlen("cube-array"))) {
        return CUBE_ARRAY;
    }
    else if (__builtin_strncmp(str, "3d", strlen("3d"))) {
        return _3D;
    }
    else {
        // Default to first value for invalid input
        return _1D;
    }
}

GPUTextureViewDimension::GPUTextureViewDimension(Value v) noexcept : emlite::Val(GPUTextureViewDimension::to_string(v)), value_(v) {}
GPUTextureViewDimension::GPUTextureViewDimension(Handle h) noexcept: emlite::Val(h) {
    value_ = GPUTextureViewDimension::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUTextureViewDimension::GPUTextureViewDimension(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = GPUTextureViewDimension::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUTextureViewDimension GPUTextureViewDimension::take_ownership(Handle h) noexcept { return GPUTextureViewDimension(h); }
GPUTextureViewDimension GPUTextureViewDimension::clone() const noexcept { return *this; }
const char* GPUTextureViewDimension::to_string(GPUTextureViewDimension::Value value_) noexcept {
    switch (value_) {
        case _1D:
            return "1d";
        case _2D:
            return "2d";
        case _2D_ARRAY:
            return "2d-array";
        case CUBE:
            return "cube";
        case CUBE_ARRAY:
            return "cube-array";
        case _3D:
            return "3d";
        default:
            return "1d"; // fallback to first value
    }
}

GPUTextureAspect::Value GPUTextureAspect::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "all", strlen("all"))) {
        return ALL;
    }
    else if (__builtin_strncmp(str, "stencil-only", strlen("stencil-only"))) {
        return STENCIL_ONLY;
    }
    else if (__builtin_strncmp(str, "depth-only", strlen("depth-only"))) {
        return DEPTH_ONLY;
    }
    else {
        // Default to first value for invalid input
        return ALL;
    }
}

GPUTextureAspect::GPUTextureAspect(Value v) noexcept : emlite::Val(GPUTextureAspect::to_string(v)), value_(v) {}
GPUTextureAspect::GPUTextureAspect(Handle h) noexcept: emlite::Val(h) {
    value_ = GPUTextureAspect::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUTextureAspect::GPUTextureAspect(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = GPUTextureAspect::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUTextureAspect GPUTextureAspect::take_ownership(Handle h) noexcept { return GPUTextureAspect(h); }
GPUTextureAspect GPUTextureAspect::clone() const noexcept { return *this; }
const char* GPUTextureAspect::to_string(GPUTextureAspect::Value value_) noexcept {
    switch (value_) {
        case ALL:
            return "all";
        case STENCIL_ONLY:
            return "stencil-only";
        case DEPTH_ONLY:
            return "depth-only";
        default:
            return "all"; // fallback to first value
    }
}

GPUTextureFormat::Value GPUTextureFormat::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "r8unorm", strlen("r8unorm"))) {
        return R8UNORM;
    }
    else if (__builtin_strncmp(str, "r8snorm", strlen("r8snorm"))) {
        return R8SNORM;
    }
    else if (__builtin_strncmp(str, "r8uint", strlen("r8uint"))) {
        return R8UINT;
    }
    else if (__builtin_strncmp(str, "r8sint", strlen("r8sint"))) {
        return R8SINT;
    }
    else if (__builtin_strncmp(str, "r16unorm", strlen("r16unorm"))) {
        return R16UNORM;
    }
    else if (__builtin_strncmp(str, "r16snorm", strlen("r16snorm"))) {
        return R16SNORM;
    }
    else if (__builtin_strncmp(str, "r16uint", strlen("r16uint"))) {
        return R16UINT;
    }
    else if (__builtin_strncmp(str, "r16sint", strlen("r16sint"))) {
        return R16SINT;
    }
    else if (__builtin_strncmp(str, "r16float", strlen("r16float"))) {
        return R16FLOAT;
    }
    else if (__builtin_strncmp(str, "rg8unorm", strlen("rg8unorm"))) {
        return RG8UNORM;
    }
    else if (__builtin_strncmp(str, "rg8snorm", strlen("rg8snorm"))) {
        return RG8SNORM;
    }
    else if (__builtin_strncmp(str, "rg8uint", strlen("rg8uint"))) {
        return RG8UINT;
    }
    else if (__builtin_strncmp(str, "rg8sint", strlen("rg8sint"))) {
        return RG8SINT;
    }
    else if (__builtin_strncmp(str, "r32uint", strlen("r32uint"))) {
        return R32UINT;
    }
    else if (__builtin_strncmp(str, "r32sint", strlen("r32sint"))) {
        return R32SINT;
    }
    else if (__builtin_strncmp(str, "r32float", strlen("r32float"))) {
        return R32FLOAT;
    }
    else if (__builtin_strncmp(str, "rg16unorm", strlen("rg16unorm"))) {
        return RG16UNORM;
    }
    else if (__builtin_strncmp(str, "rg16snorm", strlen("rg16snorm"))) {
        return RG16SNORM;
    }
    else if (__builtin_strncmp(str, "rg16uint", strlen("rg16uint"))) {
        return RG16UINT;
    }
    else if (__builtin_strncmp(str, "rg16sint", strlen("rg16sint"))) {
        return RG16SINT;
    }
    else if (__builtin_strncmp(str, "rg16float", strlen("rg16float"))) {
        return RG16FLOAT;
    }
    else if (__builtin_strncmp(str, "rgba8unorm", strlen("rgba8unorm"))) {
        return RGBA8UNORM;
    }
    else if (__builtin_strncmp(str, "rgba8unorm-srgb", strlen("rgba8unorm-srgb"))) {
        return RGBA8UNORM_SRGB;
    }
    else if (__builtin_strncmp(str, "rgba8snorm", strlen("rgba8snorm"))) {
        return RGBA8SNORM;
    }
    else if (__builtin_strncmp(str, "rgba8uint", strlen("rgba8uint"))) {
        return RGBA8UINT;
    }
    else if (__builtin_strncmp(str, "rgba8sint", strlen("rgba8sint"))) {
        return RGBA8SINT;
    }
    else if (__builtin_strncmp(str, "bgra8unorm", strlen("bgra8unorm"))) {
        return BGRA8UNORM;
    }
    else if (__builtin_strncmp(str, "bgra8unorm-srgb", strlen("bgra8unorm-srgb"))) {
        return BGRA8UNORM_SRGB;
    }
    else if (__builtin_strncmp(str, "rgb9e5ufloat", strlen("rgb9e5ufloat"))) {
        return RGB9E5UFLOAT;
    }
    else if (__builtin_strncmp(str, "rgb10a2uint", strlen("rgb10a2uint"))) {
        return RGB10A2UINT;
    }
    else if (__builtin_strncmp(str, "rgb10a2unorm", strlen("rgb10a2unorm"))) {
        return RGB10A2UNORM;
    }
    else if (__builtin_strncmp(str, "rg11b10ufloat", strlen("rg11b10ufloat"))) {
        return RG11B10UFLOAT;
    }
    else if (__builtin_strncmp(str, "rg32uint", strlen("rg32uint"))) {
        return RG32UINT;
    }
    else if (__builtin_strncmp(str, "rg32sint", strlen("rg32sint"))) {
        return RG32SINT;
    }
    else if (__builtin_strncmp(str, "rg32float", strlen("rg32float"))) {
        return RG32FLOAT;
    }
    else if (__builtin_strncmp(str, "rgba16unorm", strlen("rgba16unorm"))) {
        return RGBA16UNORM;
    }
    else if (__builtin_strncmp(str, "rgba16snorm", strlen("rgba16snorm"))) {
        return RGBA16SNORM;
    }
    else if (__builtin_strncmp(str, "rgba16uint", strlen("rgba16uint"))) {
        return RGBA16UINT;
    }
    else if (__builtin_strncmp(str, "rgba16sint", strlen("rgba16sint"))) {
        return RGBA16SINT;
    }
    else if (__builtin_strncmp(str, "rgba16float", strlen("rgba16float"))) {
        return RGBA16FLOAT;
    }
    else if (__builtin_strncmp(str, "rgba32uint", strlen("rgba32uint"))) {
        return RGBA32UINT;
    }
    else if (__builtin_strncmp(str, "rgba32sint", strlen("rgba32sint"))) {
        return RGBA32SINT;
    }
    else if (__builtin_strncmp(str, "rgba32float", strlen("rgba32float"))) {
        return RGBA32FLOAT;
    }
    else if (__builtin_strncmp(str, "stencil8", strlen("stencil8"))) {
        return STENCIL8;
    }
    else if (__builtin_strncmp(str, "depth16unorm", strlen("depth16unorm"))) {
        return DEPTH16UNORM;
    }
    else if (__builtin_strncmp(str, "depth24plus", strlen("depth24plus"))) {
        return DEPTH24PLUS;
    }
    else if (__builtin_strncmp(str, "depth24plus-stencil8", strlen("depth24plus-stencil8"))) {
        return DEPTH24PLUS_STENCIL8;
    }
    else if (__builtin_strncmp(str, "depth32float", strlen("depth32float"))) {
        return DEPTH32FLOAT;
    }
    else if (__builtin_strncmp(str, "depth32float-stencil8", strlen("depth32float-stencil8"))) {
        return DEPTH32FLOAT_STENCIL8;
    }
    else if (__builtin_strncmp(str, "bc1-rgba-unorm", strlen("bc1-rgba-unorm"))) {
        return BC1_RGBA_UNORM;
    }
    else if (__builtin_strncmp(str, "bc1-rgba-unorm-srgb", strlen("bc1-rgba-unorm-srgb"))) {
        return BC1_RGBA_UNORM_SRGB;
    }
    else if (__builtin_strncmp(str, "bc2-rgba-unorm", strlen("bc2-rgba-unorm"))) {
        return BC2_RGBA_UNORM;
    }
    else if (__builtin_strncmp(str, "bc2-rgba-unorm-srgb", strlen("bc2-rgba-unorm-srgb"))) {
        return BC2_RGBA_UNORM_SRGB;
    }
    else if (__builtin_strncmp(str, "bc3-rgba-unorm", strlen("bc3-rgba-unorm"))) {
        return BC3_RGBA_UNORM;
    }
    else if (__builtin_strncmp(str, "bc3-rgba-unorm-srgb", strlen("bc3-rgba-unorm-srgb"))) {
        return BC3_RGBA_UNORM_SRGB;
    }
    else if (__builtin_strncmp(str, "bc4-r-unorm", strlen("bc4-r-unorm"))) {
        return BC4_R_UNORM;
    }
    else if (__builtin_strncmp(str, "bc4-r-snorm", strlen("bc4-r-snorm"))) {
        return BC4_R_SNORM;
    }
    else if (__builtin_strncmp(str, "bc5-rg-unorm", strlen("bc5-rg-unorm"))) {
        return BC5_RG_UNORM;
    }
    else if (__builtin_strncmp(str, "bc5-rg-snorm", strlen("bc5-rg-snorm"))) {
        return BC5_RG_SNORM;
    }
    else if (__builtin_strncmp(str, "bc6h-rgb-ufloat", strlen("bc6h-rgb-ufloat"))) {
        return BC6H_RGB_UFLOAT;
    }
    else if (__builtin_strncmp(str, "bc6h-rgb-float", strlen("bc6h-rgb-float"))) {
        return BC6H_RGB_FLOAT;
    }
    else if (__builtin_strncmp(str, "bc7-rgba-unorm", strlen("bc7-rgba-unorm"))) {
        return BC7_RGBA_UNORM;
    }
    else if (__builtin_strncmp(str, "bc7-rgba-unorm-srgb", strlen("bc7-rgba-unorm-srgb"))) {
        return BC7_RGBA_UNORM_SRGB;
    }
    else if (__builtin_strncmp(str, "etc2-rgb8unorm", strlen("etc2-rgb8unorm"))) {
        return ETC2_RGB8UNORM;
    }
    else if (__builtin_strncmp(str, "etc2-rgb8unorm-srgb", strlen("etc2-rgb8unorm-srgb"))) {
        return ETC2_RGB8UNORM_SRGB;
    }
    else if (__builtin_strncmp(str, "etc2-rgb8a1unorm", strlen("etc2-rgb8a1unorm"))) {
        return ETC2_RGB8A1UNORM;
    }
    else if (__builtin_strncmp(str, "etc2-rgb8a1unorm-srgb", strlen("etc2-rgb8a1unorm-srgb"))) {
        return ETC2_RGB8A1UNORM_SRGB;
    }
    else if (__builtin_strncmp(str, "etc2-rgba8unorm", strlen("etc2-rgba8unorm"))) {
        return ETC2_RGBA8UNORM;
    }
    else if (__builtin_strncmp(str, "etc2-rgba8unorm-srgb", strlen("etc2-rgba8unorm-srgb"))) {
        return ETC2_RGBA8UNORM_SRGB;
    }
    else if (__builtin_strncmp(str, "eac-r11unorm", strlen("eac-r11unorm"))) {
        return EAC_R11UNORM;
    }
    else if (__builtin_strncmp(str, "eac-r11snorm", strlen("eac-r11snorm"))) {
        return EAC_R11SNORM;
    }
    else if (__builtin_strncmp(str, "eac-rg11unorm", strlen("eac-rg11unorm"))) {
        return EAC_RG11UNORM;
    }
    else if (__builtin_strncmp(str, "eac-rg11snorm", strlen("eac-rg11snorm"))) {
        return EAC_RG11SNORM;
    }
    else if (__builtin_strncmp(str, "astc-4x4-unorm", strlen("astc-4x4-unorm"))) {
        return ASTC_4X4_UNORM;
    }
    else if (__builtin_strncmp(str, "astc-4x4-unorm-srgb", strlen("astc-4x4-unorm-srgb"))) {
        return ASTC_4X4_UNORM_SRGB;
    }
    else if (__builtin_strncmp(str, "astc-5x4-unorm", strlen("astc-5x4-unorm"))) {
        return ASTC_5X4_UNORM;
    }
    else if (__builtin_strncmp(str, "astc-5x4-unorm-srgb", strlen("astc-5x4-unorm-srgb"))) {
        return ASTC_5X4_UNORM_SRGB;
    }
    else if (__builtin_strncmp(str, "astc-5x5-unorm", strlen("astc-5x5-unorm"))) {
        return ASTC_5X5_UNORM;
    }
    else if (__builtin_strncmp(str, "astc-5x5-unorm-srgb", strlen("astc-5x5-unorm-srgb"))) {
        return ASTC_5X5_UNORM_SRGB;
    }
    else if (__builtin_strncmp(str, "astc-6x5-unorm", strlen("astc-6x5-unorm"))) {
        return ASTC_6X5_UNORM;
    }
    else if (__builtin_strncmp(str, "astc-6x5-unorm-srgb", strlen("astc-6x5-unorm-srgb"))) {
        return ASTC_6X5_UNORM_SRGB;
    }
    else if (__builtin_strncmp(str, "astc-6x6-unorm", strlen("astc-6x6-unorm"))) {
        return ASTC_6X6_UNORM;
    }
    else if (__builtin_strncmp(str, "astc-6x6-unorm-srgb", strlen("astc-6x6-unorm-srgb"))) {
        return ASTC_6X6_UNORM_SRGB;
    }
    else if (__builtin_strncmp(str, "astc-8x5-unorm", strlen("astc-8x5-unorm"))) {
        return ASTC_8X5_UNORM;
    }
    else if (__builtin_strncmp(str, "astc-8x5-unorm-srgb", strlen("astc-8x5-unorm-srgb"))) {
        return ASTC_8X5_UNORM_SRGB;
    }
    else if (__builtin_strncmp(str, "astc-8x6-unorm", strlen("astc-8x6-unorm"))) {
        return ASTC_8X6_UNORM;
    }
    else if (__builtin_strncmp(str, "astc-8x6-unorm-srgb", strlen("astc-8x6-unorm-srgb"))) {
        return ASTC_8X6_UNORM_SRGB;
    }
    else if (__builtin_strncmp(str, "astc-8x8-unorm", strlen("astc-8x8-unorm"))) {
        return ASTC_8X8_UNORM;
    }
    else if (__builtin_strncmp(str, "astc-8x8-unorm-srgb", strlen("astc-8x8-unorm-srgb"))) {
        return ASTC_8X8_UNORM_SRGB;
    }
    else if (__builtin_strncmp(str, "astc-10x5-unorm", strlen("astc-10x5-unorm"))) {
        return ASTC_10X5_UNORM;
    }
    else if (__builtin_strncmp(str, "astc-10x5-unorm-srgb", strlen("astc-10x5-unorm-srgb"))) {
        return ASTC_10X5_UNORM_SRGB;
    }
    else if (__builtin_strncmp(str, "astc-10x6-unorm", strlen("astc-10x6-unorm"))) {
        return ASTC_10X6_UNORM;
    }
    else if (__builtin_strncmp(str, "astc-10x6-unorm-srgb", strlen("astc-10x6-unorm-srgb"))) {
        return ASTC_10X6_UNORM_SRGB;
    }
    else if (__builtin_strncmp(str, "astc-10x8-unorm", strlen("astc-10x8-unorm"))) {
        return ASTC_10X8_UNORM;
    }
    else if (__builtin_strncmp(str, "astc-10x8-unorm-srgb", strlen("astc-10x8-unorm-srgb"))) {
        return ASTC_10X8_UNORM_SRGB;
    }
    else if (__builtin_strncmp(str, "astc-10x10-unorm", strlen("astc-10x10-unorm"))) {
        return ASTC_10X10_UNORM;
    }
    else if (__builtin_strncmp(str, "astc-10x10-unorm-srgb", strlen("astc-10x10-unorm-srgb"))) {
        return ASTC_10X10_UNORM_SRGB;
    }
    else if (__builtin_strncmp(str, "astc-12x10-unorm", strlen("astc-12x10-unorm"))) {
        return ASTC_12X10_UNORM;
    }
    else if (__builtin_strncmp(str, "astc-12x10-unorm-srgb", strlen("astc-12x10-unorm-srgb"))) {
        return ASTC_12X10_UNORM_SRGB;
    }
    else if (__builtin_strncmp(str, "astc-12x12-unorm", strlen("astc-12x12-unorm"))) {
        return ASTC_12X12_UNORM;
    }
    else if (__builtin_strncmp(str, "astc-12x12-unorm-srgb", strlen("astc-12x12-unorm-srgb"))) {
        return ASTC_12X12_UNORM_SRGB;
    }
    else {
        // Default to first value for invalid input
        return R8UNORM;
    }
}

GPUTextureFormat::GPUTextureFormat(Value v) noexcept : emlite::Val(GPUTextureFormat::to_string(v)), value_(v) {}
GPUTextureFormat::GPUTextureFormat(Handle h) noexcept: emlite::Val(h) {
    value_ = GPUTextureFormat::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUTextureFormat::GPUTextureFormat(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = GPUTextureFormat::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUTextureFormat GPUTextureFormat::take_ownership(Handle h) noexcept { return GPUTextureFormat(h); }
GPUTextureFormat GPUTextureFormat::clone() const noexcept { return *this; }
const char* GPUTextureFormat::to_string(GPUTextureFormat::Value value_) noexcept {
    switch (value_) {
        case R8UNORM:
            return "r8unorm";
        case R8SNORM:
            return "r8snorm";
        case R8UINT:
            return "r8uint";
        case R8SINT:
            return "r8sint";
        case R16UNORM:
            return "r16unorm";
        case R16SNORM:
            return "r16snorm";
        case R16UINT:
            return "r16uint";
        case R16SINT:
            return "r16sint";
        case R16FLOAT:
            return "r16float";
        case RG8UNORM:
            return "rg8unorm";
        case RG8SNORM:
            return "rg8snorm";
        case RG8UINT:
            return "rg8uint";
        case RG8SINT:
            return "rg8sint";
        case R32UINT:
            return "r32uint";
        case R32SINT:
            return "r32sint";
        case R32FLOAT:
            return "r32float";
        case RG16UNORM:
            return "rg16unorm";
        case RG16SNORM:
            return "rg16snorm";
        case RG16UINT:
            return "rg16uint";
        case RG16SINT:
            return "rg16sint";
        case RG16FLOAT:
            return "rg16float";
        case RGBA8UNORM:
            return "rgba8unorm";
        case RGBA8UNORM_SRGB:
            return "rgba8unorm-srgb";
        case RGBA8SNORM:
            return "rgba8snorm";
        case RGBA8UINT:
            return "rgba8uint";
        case RGBA8SINT:
            return "rgba8sint";
        case BGRA8UNORM:
            return "bgra8unorm";
        case BGRA8UNORM_SRGB:
            return "bgra8unorm-srgb";
        case RGB9E5UFLOAT:
            return "rgb9e5ufloat";
        case RGB10A2UINT:
            return "rgb10a2uint";
        case RGB10A2UNORM:
            return "rgb10a2unorm";
        case RG11B10UFLOAT:
            return "rg11b10ufloat";
        case RG32UINT:
            return "rg32uint";
        case RG32SINT:
            return "rg32sint";
        case RG32FLOAT:
            return "rg32float";
        case RGBA16UNORM:
            return "rgba16unorm";
        case RGBA16SNORM:
            return "rgba16snorm";
        case RGBA16UINT:
            return "rgba16uint";
        case RGBA16SINT:
            return "rgba16sint";
        case RGBA16FLOAT:
            return "rgba16float";
        case RGBA32UINT:
            return "rgba32uint";
        case RGBA32SINT:
            return "rgba32sint";
        case RGBA32FLOAT:
            return "rgba32float";
        case STENCIL8:
            return "stencil8";
        case DEPTH16UNORM:
            return "depth16unorm";
        case DEPTH24PLUS:
            return "depth24plus";
        case DEPTH24PLUS_STENCIL8:
            return "depth24plus-stencil8";
        case DEPTH32FLOAT:
            return "depth32float";
        case DEPTH32FLOAT_STENCIL8:
            return "depth32float-stencil8";
        case BC1_RGBA_UNORM:
            return "bc1-rgba-unorm";
        case BC1_RGBA_UNORM_SRGB:
            return "bc1-rgba-unorm-srgb";
        case BC2_RGBA_UNORM:
            return "bc2-rgba-unorm";
        case BC2_RGBA_UNORM_SRGB:
            return "bc2-rgba-unorm-srgb";
        case BC3_RGBA_UNORM:
            return "bc3-rgba-unorm";
        case BC3_RGBA_UNORM_SRGB:
            return "bc3-rgba-unorm-srgb";
        case BC4_R_UNORM:
            return "bc4-r-unorm";
        case BC4_R_SNORM:
            return "bc4-r-snorm";
        case BC5_RG_UNORM:
            return "bc5-rg-unorm";
        case BC5_RG_SNORM:
            return "bc5-rg-snorm";
        case BC6H_RGB_UFLOAT:
            return "bc6h-rgb-ufloat";
        case BC6H_RGB_FLOAT:
            return "bc6h-rgb-float";
        case BC7_RGBA_UNORM:
            return "bc7-rgba-unorm";
        case BC7_RGBA_UNORM_SRGB:
            return "bc7-rgba-unorm-srgb";
        case ETC2_RGB8UNORM:
            return "etc2-rgb8unorm";
        case ETC2_RGB8UNORM_SRGB:
            return "etc2-rgb8unorm-srgb";
        case ETC2_RGB8A1UNORM:
            return "etc2-rgb8a1unorm";
        case ETC2_RGB8A1UNORM_SRGB:
            return "etc2-rgb8a1unorm-srgb";
        case ETC2_RGBA8UNORM:
            return "etc2-rgba8unorm";
        case ETC2_RGBA8UNORM_SRGB:
            return "etc2-rgba8unorm-srgb";
        case EAC_R11UNORM:
            return "eac-r11unorm";
        case EAC_R11SNORM:
            return "eac-r11snorm";
        case EAC_RG11UNORM:
            return "eac-rg11unorm";
        case EAC_RG11SNORM:
            return "eac-rg11snorm";
        case ASTC_4X4_UNORM:
            return "astc-4x4-unorm";
        case ASTC_4X4_UNORM_SRGB:
            return "astc-4x4-unorm-srgb";
        case ASTC_5X4_UNORM:
            return "astc-5x4-unorm";
        case ASTC_5X4_UNORM_SRGB:
            return "astc-5x4-unorm-srgb";
        case ASTC_5X5_UNORM:
            return "astc-5x5-unorm";
        case ASTC_5X5_UNORM_SRGB:
            return "astc-5x5-unorm-srgb";
        case ASTC_6X5_UNORM:
            return "astc-6x5-unorm";
        case ASTC_6X5_UNORM_SRGB:
            return "astc-6x5-unorm-srgb";
        case ASTC_6X6_UNORM:
            return "astc-6x6-unorm";
        case ASTC_6X6_UNORM_SRGB:
            return "astc-6x6-unorm-srgb";
        case ASTC_8X5_UNORM:
            return "astc-8x5-unorm";
        case ASTC_8X5_UNORM_SRGB:
            return "astc-8x5-unorm-srgb";
        case ASTC_8X6_UNORM:
            return "astc-8x6-unorm";
        case ASTC_8X6_UNORM_SRGB:
            return "astc-8x6-unorm-srgb";
        case ASTC_8X8_UNORM:
            return "astc-8x8-unorm";
        case ASTC_8X8_UNORM_SRGB:
            return "astc-8x8-unorm-srgb";
        case ASTC_10X5_UNORM:
            return "astc-10x5-unorm";
        case ASTC_10X5_UNORM_SRGB:
            return "astc-10x5-unorm-srgb";
        case ASTC_10X6_UNORM:
            return "astc-10x6-unorm";
        case ASTC_10X6_UNORM_SRGB:
            return "astc-10x6-unorm-srgb";
        case ASTC_10X8_UNORM:
            return "astc-10x8-unorm";
        case ASTC_10X8_UNORM_SRGB:
            return "astc-10x8-unorm-srgb";
        case ASTC_10X10_UNORM:
            return "astc-10x10-unorm";
        case ASTC_10X10_UNORM_SRGB:
            return "astc-10x10-unorm-srgb";
        case ASTC_12X10_UNORM:
            return "astc-12x10-unorm";
        case ASTC_12X10_UNORM_SRGB:
            return "astc-12x10-unorm-srgb";
        case ASTC_12X12_UNORM:
            return "astc-12x12-unorm";
        case ASTC_12X12_UNORM_SRGB:
            return "astc-12x12-unorm-srgb";
        default:
            return "r8unorm"; // fallback to first value
    }
}

GPUAddressMode::Value GPUAddressMode::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "clamp-to-edge", strlen("clamp-to-edge"))) {
        return CLAMP_TO_EDGE;
    }
    else if (__builtin_strncmp(str, "repeat", strlen("repeat"))) {
        return REPEAT;
    }
    else if (__builtin_strncmp(str, "mirror-repeat", strlen("mirror-repeat"))) {
        return MIRROR_REPEAT;
    }
    else {
        // Default to first value for invalid input
        return CLAMP_TO_EDGE;
    }
}

GPUAddressMode::GPUAddressMode(Value v) noexcept : emlite::Val(GPUAddressMode::to_string(v)), value_(v) {}
GPUAddressMode::GPUAddressMode(Handle h) noexcept: emlite::Val(h) {
    value_ = GPUAddressMode::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUAddressMode::GPUAddressMode(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = GPUAddressMode::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUAddressMode GPUAddressMode::take_ownership(Handle h) noexcept { return GPUAddressMode(h); }
GPUAddressMode GPUAddressMode::clone() const noexcept { return *this; }
const char* GPUAddressMode::to_string(GPUAddressMode::Value value_) noexcept {
    switch (value_) {
        case CLAMP_TO_EDGE:
            return "clamp-to-edge";
        case REPEAT:
            return "repeat";
        case MIRROR_REPEAT:
            return "mirror-repeat";
        default:
            return "clamp-to-edge"; // fallback to first value
    }
}

GPUFilterMode::Value GPUFilterMode::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "nearest", strlen("nearest"))) {
        return NEAREST;
    }
    else if (__builtin_strncmp(str, "linear", strlen("linear"))) {
        return LINEAR;
    }
    else {
        // Default to first value for invalid input
        return NEAREST;
    }
}

GPUFilterMode::GPUFilterMode(Value v) noexcept : emlite::Val(GPUFilterMode::to_string(v)), value_(v) {}
GPUFilterMode::GPUFilterMode(Handle h) noexcept: emlite::Val(h) {
    value_ = GPUFilterMode::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUFilterMode::GPUFilterMode(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = GPUFilterMode::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUFilterMode GPUFilterMode::take_ownership(Handle h) noexcept { return GPUFilterMode(h); }
GPUFilterMode GPUFilterMode::clone() const noexcept { return *this; }
const char* GPUFilterMode::to_string(GPUFilterMode::Value value_) noexcept {
    switch (value_) {
        case NEAREST:
            return "nearest";
        case LINEAR:
            return "linear";
        default:
            return "nearest"; // fallback to first value
    }
}

GPUMipmapFilterMode::Value GPUMipmapFilterMode::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "nearest", strlen("nearest"))) {
        return NEAREST;
    }
    else if (__builtin_strncmp(str, "linear", strlen("linear"))) {
        return LINEAR;
    }
    else {
        // Default to first value for invalid input
        return NEAREST;
    }
}

GPUMipmapFilterMode::GPUMipmapFilterMode(Value v) noexcept : emlite::Val(GPUMipmapFilterMode::to_string(v)), value_(v) {}
GPUMipmapFilterMode::GPUMipmapFilterMode(Handle h) noexcept: emlite::Val(h) {
    value_ = GPUMipmapFilterMode::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUMipmapFilterMode::GPUMipmapFilterMode(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = GPUMipmapFilterMode::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUMipmapFilterMode GPUMipmapFilterMode::take_ownership(Handle h) noexcept { return GPUMipmapFilterMode(h); }
GPUMipmapFilterMode GPUMipmapFilterMode::clone() const noexcept { return *this; }
const char* GPUMipmapFilterMode::to_string(GPUMipmapFilterMode::Value value_) noexcept {
    switch (value_) {
        case NEAREST:
            return "nearest";
        case LINEAR:
            return "linear";
        default:
            return "nearest"; // fallback to first value
    }
}

GPUCompareFunction::Value GPUCompareFunction::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "never", strlen("never"))) {
        return NEVER;
    }
    else if (__builtin_strncmp(str, "less", strlen("less"))) {
        return LESS;
    }
    else if (__builtin_strncmp(str, "equal", strlen("equal"))) {
        return EQUAL;
    }
    else if (__builtin_strncmp(str, "less-equal", strlen("less-equal"))) {
        return LESS_EQUAL;
    }
    else if (__builtin_strncmp(str, "greater", strlen("greater"))) {
        return GREATER;
    }
    else if (__builtin_strncmp(str, "not-equal", strlen("not-equal"))) {
        return NOT_EQUAL;
    }
    else if (__builtin_strncmp(str, "greater-equal", strlen("greater-equal"))) {
        return GREATER_EQUAL;
    }
    else if (__builtin_strncmp(str, "always", strlen("always"))) {
        return ALWAYS;
    }
    else {
        // Default to first value for invalid input
        return NEVER;
    }
}

GPUCompareFunction::GPUCompareFunction(Value v) noexcept : emlite::Val(GPUCompareFunction::to_string(v)), value_(v) {}
GPUCompareFunction::GPUCompareFunction(Handle h) noexcept: emlite::Val(h) {
    value_ = GPUCompareFunction::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUCompareFunction::GPUCompareFunction(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = GPUCompareFunction::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUCompareFunction GPUCompareFunction::take_ownership(Handle h) noexcept { return GPUCompareFunction(h); }
GPUCompareFunction GPUCompareFunction::clone() const noexcept { return *this; }
const char* GPUCompareFunction::to_string(GPUCompareFunction::Value value_) noexcept {
    switch (value_) {
        case NEVER:
            return "never";
        case LESS:
            return "less";
        case EQUAL:
            return "equal";
        case LESS_EQUAL:
            return "less-equal";
        case GREATER:
            return "greater";
        case NOT_EQUAL:
            return "not-equal";
        case GREATER_EQUAL:
            return "greater-equal";
        case ALWAYS:
            return "always";
        default:
            return "never"; // fallback to first value
    }
}

GPUBufferBindingType::Value GPUBufferBindingType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "uniform", strlen("uniform"))) {
        return UNIFORM;
    }
    else if (__builtin_strncmp(str, "storage", strlen("storage"))) {
        return STORAGE;
    }
    else if (__builtin_strncmp(str, "read-only-storage", strlen("read-only-storage"))) {
        return READ_ONLY_STORAGE;
    }
    else {
        // Default to first value for invalid input
        return UNIFORM;
    }
}

GPUBufferBindingType::GPUBufferBindingType(Value v) noexcept : emlite::Val(GPUBufferBindingType::to_string(v)), value_(v) {}
GPUBufferBindingType::GPUBufferBindingType(Handle h) noexcept: emlite::Val(h) {
    value_ = GPUBufferBindingType::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUBufferBindingType::GPUBufferBindingType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = GPUBufferBindingType::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUBufferBindingType GPUBufferBindingType::take_ownership(Handle h) noexcept { return GPUBufferBindingType(h); }
GPUBufferBindingType GPUBufferBindingType::clone() const noexcept { return *this; }
const char* GPUBufferBindingType::to_string(GPUBufferBindingType::Value value_) noexcept {
    switch (value_) {
        case UNIFORM:
            return "uniform";
        case STORAGE:
            return "storage";
        case READ_ONLY_STORAGE:
            return "read-only-storage";
        default:
            return "uniform"; // fallback to first value
    }
}

GPUSamplerBindingType::Value GPUSamplerBindingType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "filtering", strlen("filtering"))) {
        return FILTERING;
    }
    else if (__builtin_strncmp(str, "non-filtering", strlen("non-filtering"))) {
        return NON_FILTERING;
    }
    else if (__builtin_strncmp(str, "comparison", strlen("comparison"))) {
        return COMPARISON;
    }
    else {
        // Default to first value for invalid input
        return FILTERING;
    }
}

GPUSamplerBindingType::GPUSamplerBindingType(Value v) noexcept : emlite::Val(GPUSamplerBindingType::to_string(v)), value_(v) {}
GPUSamplerBindingType::GPUSamplerBindingType(Handle h) noexcept: emlite::Val(h) {
    value_ = GPUSamplerBindingType::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUSamplerBindingType::GPUSamplerBindingType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = GPUSamplerBindingType::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUSamplerBindingType GPUSamplerBindingType::take_ownership(Handle h) noexcept { return GPUSamplerBindingType(h); }
GPUSamplerBindingType GPUSamplerBindingType::clone() const noexcept { return *this; }
const char* GPUSamplerBindingType::to_string(GPUSamplerBindingType::Value value_) noexcept {
    switch (value_) {
        case FILTERING:
            return "filtering";
        case NON_FILTERING:
            return "non-filtering";
        case COMPARISON:
            return "comparison";
        default:
            return "filtering"; // fallback to first value
    }
}

GPUTextureSampleType::Value GPUTextureSampleType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "float", strlen("float"))) {
        return FLOAT_;
    }
    else if (__builtin_strncmp(str, "unfilterable-float", strlen("unfilterable-float"))) {
        return UNFILTERABLE_FLOAT;
    }
    else if (__builtin_strncmp(str, "depth", strlen("depth"))) {
        return DEPTH;
    }
    else if (__builtin_strncmp(str, "sint", strlen("sint"))) {
        return SINT;
    }
    else if (__builtin_strncmp(str, "uint", strlen("uint"))) {
        return UINT;
    }
    else {
        // Default to first value for invalid input
        return FLOAT_;
    }
}

GPUTextureSampleType::GPUTextureSampleType(Value v) noexcept : emlite::Val(GPUTextureSampleType::to_string(v)), value_(v) {}
GPUTextureSampleType::GPUTextureSampleType(Handle h) noexcept: emlite::Val(h) {
    value_ = GPUTextureSampleType::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUTextureSampleType::GPUTextureSampleType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = GPUTextureSampleType::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUTextureSampleType GPUTextureSampleType::take_ownership(Handle h) noexcept { return GPUTextureSampleType(h); }
GPUTextureSampleType GPUTextureSampleType::clone() const noexcept { return *this; }
const char* GPUTextureSampleType::to_string(GPUTextureSampleType::Value value_) noexcept {
    switch (value_) {
        case FLOAT_:
            return "float";
        case UNFILTERABLE_FLOAT:
            return "unfilterable-float";
        case DEPTH:
            return "depth";
        case SINT:
            return "sint";
        case UINT:
            return "uint";
        default:
            return "float"; // fallback to first value
    }
}

GPUStorageTextureAccess::Value GPUStorageTextureAccess::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "write-only", strlen("write-only"))) {
        return WRITE_ONLY;
    }
    else if (__builtin_strncmp(str, "read-only", strlen("read-only"))) {
        return READ_ONLY;
    }
    else if (__builtin_strncmp(str, "read-write", strlen("read-write"))) {
        return READ_WRITE;
    }
    else {
        // Default to first value for invalid input
        return WRITE_ONLY;
    }
}

GPUStorageTextureAccess::GPUStorageTextureAccess(Value v) noexcept : emlite::Val(GPUStorageTextureAccess::to_string(v)), value_(v) {}
GPUStorageTextureAccess::GPUStorageTextureAccess(Handle h) noexcept: emlite::Val(h) {
    value_ = GPUStorageTextureAccess::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUStorageTextureAccess::GPUStorageTextureAccess(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = GPUStorageTextureAccess::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUStorageTextureAccess GPUStorageTextureAccess::take_ownership(Handle h) noexcept { return GPUStorageTextureAccess(h); }
GPUStorageTextureAccess GPUStorageTextureAccess::clone() const noexcept { return *this; }
const char* GPUStorageTextureAccess::to_string(GPUStorageTextureAccess::Value value_) noexcept {
    switch (value_) {
        case WRITE_ONLY:
            return "write-only";
        case READ_ONLY:
            return "read-only";
        case READ_WRITE:
            return "read-write";
        default:
            return "write-only"; // fallback to first value
    }
}

GPUCompilationMessageType::Value GPUCompilationMessageType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "error", strlen("error"))) {
        return ERROR;
    }
    else if (__builtin_strncmp(str, "warning", strlen("warning"))) {
        return WARNING;
    }
    else if (__builtin_strncmp(str, "info", strlen("info"))) {
        return INFO;
    }
    else {
        // Default to first value for invalid input
        return ERROR;
    }
}

GPUCompilationMessageType::GPUCompilationMessageType(Value v) noexcept : emlite::Val(GPUCompilationMessageType::to_string(v)), value_(v) {}
GPUCompilationMessageType::GPUCompilationMessageType(Handle h) noexcept: emlite::Val(h) {
    value_ = GPUCompilationMessageType::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUCompilationMessageType::GPUCompilationMessageType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = GPUCompilationMessageType::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUCompilationMessageType GPUCompilationMessageType::take_ownership(Handle h) noexcept { return GPUCompilationMessageType(h); }
GPUCompilationMessageType GPUCompilationMessageType::clone() const noexcept { return *this; }
const char* GPUCompilationMessageType::to_string(GPUCompilationMessageType::Value value_) noexcept {
    switch (value_) {
        case ERROR:
            return "error";
        case WARNING:
            return "warning";
        case INFO:
            return "info";
        default:
            return "error"; // fallback to first value
    }
}

GPUPipelineErrorReason::Value GPUPipelineErrorReason::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "validation", strlen("validation"))) {
        return VALIDATION;
    }
    else if (__builtin_strncmp(str, "internal", strlen("internal"))) {
        return INTERNAL;
    }
    else {
        // Default to first value for invalid input
        return VALIDATION;
    }
}

GPUPipelineErrorReason::GPUPipelineErrorReason(Value v) noexcept : emlite::Val(GPUPipelineErrorReason::to_string(v)), value_(v) {}
GPUPipelineErrorReason::GPUPipelineErrorReason(Handle h) noexcept: emlite::Val(h) {
    value_ = GPUPipelineErrorReason::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUPipelineErrorReason::GPUPipelineErrorReason(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = GPUPipelineErrorReason::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUPipelineErrorReason GPUPipelineErrorReason::take_ownership(Handle h) noexcept { return GPUPipelineErrorReason(h); }
GPUPipelineErrorReason GPUPipelineErrorReason::clone() const noexcept { return *this; }
const char* GPUPipelineErrorReason::to_string(GPUPipelineErrorReason::Value value_) noexcept {
    switch (value_) {
        case VALIDATION:
            return "validation";
        case INTERNAL:
            return "internal";
        default:
            return "validation"; // fallback to first value
    }
}

GPUAutoLayoutMode::Value GPUAutoLayoutMode::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "auto", strlen("auto"))) {
        return AUTO_;
    }
    else {
        // Default to first value for invalid input
        return AUTO_;
    }
}

GPUAutoLayoutMode::GPUAutoLayoutMode(Value v) noexcept : emlite::Val(GPUAutoLayoutMode::to_string(v)), value_(v) {}
GPUAutoLayoutMode::GPUAutoLayoutMode(Handle h) noexcept: emlite::Val(h) {
    value_ = GPUAutoLayoutMode::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUAutoLayoutMode::GPUAutoLayoutMode(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = GPUAutoLayoutMode::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUAutoLayoutMode GPUAutoLayoutMode::take_ownership(Handle h) noexcept { return GPUAutoLayoutMode(h); }
GPUAutoLayoutMode GPUAutoLayoutMode::clone() const noexcept { return *this; }
const char* GPUAutoLayoutMode::to_string(GPUAutoLayoutMode::Value value_) noexcept {
    switch (value_) {
        case AUTO_:
            return "auto";
        default:
            return "auto"; // fallback to first value
    }
}

GPUPrimitiveTopology::Value GPUPrimitiveTopology::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "point-list", strlen("point-list"))) {
        return POINT_LIST;
    }
    else if (__builtin_strncmp(str, "line-list", strlen("line-list"))) {
        return LINE_LIST;
    }
    else if (__builtin_strncmp(str, "line-strip", strlen("line-strip"))) {
        return LINE_STRIP;
    }
    else if (__builtin_strncmp(str, "triangle-list", strlen("triangle-list"))) {
        return TRIANGLE_LIST;
    }
    else if (__builtin_strncmp(str, "triangle-strip", strlen("triangle-strip"))) {
        return TRIANGLE_STRIP;
    }
    else {
        // Default to first value for invalid input
        return POINT_LIST;
    }
}

GPUPrimitiveTopology::GPUPrimitiveTopology(Value v) noexcept : emlite::Val(GPUPrimitiveTopology::to_string(v)), value_(v) {}
GPUPrimitiveTopology::GPUPrimitiveTopology(Handle h) noexcept: emlite::Val(h) {
    value_ = GPUPrimitiveTopology::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUPrimitiveTopology::GPUPrimitiveTopology(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = GPUPrimitiveTopology::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUPrimitiveTopology GPUPrimitiveTopology::take_ownership(Handle h) noexcept { return GPUPrimitiveTopology(h); }
GPUPrimitiveTopology GPUPrimitiveTopology::clone() const noexcept { return *this; }
const char* GPUPrimitiveTopology::to_string(GPUPrimitiveTopology::Value value_) noexcept {
    switch (value_) {
        case POINT_LIST:
            return "point-list";
        case LINE_LIST:
            return "line-list";
        case LINE_STRIP:
            return "line-strip";
        case TRIANGLE_LIST:
            return "triangle-list";
        case TRIANGLE_STRIP:
            return "triangle-strip";
        default:
            return "point-list"; // fallback to first value
    }
}

GPUFrontFace::Value GPUFrontFace::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "ccw", strlen("ccw"))) {
        return CCW;
    }
    else if (__builtin_strncmp(str, "cw", strlen("cw"))) {
        return CW;
    }
    else {
        // Default to first value for invalid input
        return CCW;
    }
}

GPUFrontFace::GPUFrontFace(Value v) noexcept : emlite::Val(GPUFrontFace::to_string(v)), value_(v) {}
GPUFrontFace::GPUFrontFace(Handle h) noexcept: emlite::Val(h) {
    value_ = GPUFrontFace::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUFrontFace::GPUFrontFace(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = GPUFrontFace::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUFrontFace GPUFrontFace::take_ownership(Handle h) noexcept { return GPUFrontFace(h); }
GPUFrontFace GPUFrontFace::clone() const noexcept { return *this; }
const char* GPUFrontFace::to_string(GPUFrontFace::Value value_) noexcept {
    switch (value_) {
        case CCW:
            return "ccw";
        case CW:
            return "cw";
        default:
            return "ccw"; // fallback to first value
    }
}

GPUCullMode::Value GPUCullMode::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "none", strlen("none"))) {
        return NONE;
    }
    else if (__builtin_strncmp(str, "front", strlen("front"))) {
        return FRONT;
    }
    else if (__builtin_strncmp(str, "back", strlen("back"))) {
        return BACK;
    }
    else {
        // Default to first value for invalid input
        return NONE;
    }
}

GPUCullMode::GPUCullMode(Value v) noexcept : emlite::Val(GPUCullMode::to_string(v)), value_(v) {}
GPUCullMode::GPUCullMode(Handle h) noexcept: emlite::Val(h) {
    value_ = GPUCullMode::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUCullMode::GPUCullMode(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = GPUCullMode::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUCullMode GPUCullMode::take_ownership(Handle h) noexcept { return GPUCullMode(h); }
GPUCullMode GPUCullMode::clone() const noexcept { return *this; }
const char* GPUCullMode::to_string(GPUCullMode::Value value_) noexcept {
    switch (value_) {
        case NONE:
            return "none";
        case FRONT:
            return "front";
        case BACK:
            return "back";
        default:
            return "none"; // fallback to first value
    }
}

GPUBlendFactor::Value GPUBlendFactor::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "zero", strlen("zero"))) {
        return ZERO;
    }
    else if (__builtin_strncmp(str, "one", strlen("one"))) {
        return ONE;
    }
    else if (__builtin_strncmp(str, "src", strlen("src"))) {
        return SRC;
    }
    else if (__builtin_strncmp(str, "one-minus-src", strlen("one-minus-src"))) {
        return ONE_MINUS_SRC;
    }
    else if (__builtin_strncmp(str, "src-alpha", strlen("src-alpha"))) {
        return SRC_ALPHA;
    }
    else if (__builtin_strncmp(str, "one-minus-src-alpha", strlen("one-minus-src-alpha"))) {
        return ONE_MINUS_SRC_ALPHA;
    }
    else if (__builtin_strncmp(str, "dst", strlen("dst"))) {
        return DST;
    }
    else if (__builtin_strncmp(str, "one-minus-dst", strlen("one-minus-dst"))) {
        return ONE_MINUS_DST;
    }
    else if (__builtin_strncmp(str, "dst-alpha", strlen("dst-alpha"))) {
        return DST_ALPHA;
    }
    else if (__builtin_strncmp(str, "one-minus-dst-alpha", strlen("one-minus-dst-alpha"))) {
        return ONE_MINUS_DST_ALPHA;
    }
    else if (__builtin_strncmp(str, "src-alpha-saturated", strlen("src-alpha-saturated"))) {
        return SRC_ALPHA_SATURATED;
    }
    else if (__builtin_strncmp(str, "constant", strlen("constant"))) {
        return CONSTANT;
    }
    else if (__builtin_strncmp(str, "one-minus-constant", strlen("one-minus-constant"))) {
        return ONE_MINUS_CONSTANT;
    }
    else if (__builtin_strncmp(str, "src1", strlen("src1"))) {
        return SRC1;
    }
    else if (__builtin_strncmp(str, "one-minus-src1", strlen("one-minus-src1"))) {
        return ONE_MINUS_SRC1;
    }
    else if (__builtin_strncmp(str, "src1-alpha", strlen("src1-alpha"))) {
        return SRC1_ALPHA;
    }
    else if (__builtin_strncmp(str, "one-minus-src1-alpha", strlen("one-minus-src1-alpha"))) {
        return ONE_MINUS_SRC1_ALPHA;
    }
    else {
        // Default to first value for invalid input
        return ZERO;
    }
}

GPUBlendFactor::GPUBlendFactor(Value v) noexcept : emlite::Val(GPUBlendFactor::to_string(v)), value_(v) {}
GPUBlendFactor::GPUBlendFactor(Handle h) noexcept: emlite::Val(h) {
    value_ = GPUBlendFactor::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUBlendFactor::GPUBlendFactor(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = GPUBlendFactor::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUBlendFactor GPUBlendFactor::take_ownership(Handle h) noexcept { return GPUBlendFactor(h); }
GPUBlendFactor GPUBlendFactor::clone() const noexcept { return *this; }
const char* GPUBlendFactor::to_string(GPUBlendFactor::Value value_) noexcept {
    switch (value_) {
        case ZERO:
            return "zero";
        case ONE:
            return "one";
        case SRC:
            return "src";
        case ONE_MINUS_SRC:
            return "one-minus-src";
        case SRC_ALPHA:
            return "src-alpha";
        case ONE_MINUS_SRC_ALPHA:
            return "one-minus-src-alpha";
        case DST:
            return "dst";
        case ONE_MINUS_DST:
            return "one-minus-dst";
        case DST_ALPHA:
            return "dst-alpha";
        case ONE_MINUS_DST_ALPHA:
            return "one-minus-dst-alpha";
        case SRC_ALPHA_SATURATED:
            return "src-alpha-saturated";
        case CONSTANT:
            return "constant";
        case ONE_MINUS_CONSTANT:
            return "one-minus-constant";
        case SRC1:
            return "src1";
        case ONE_MINUS_SRC1:
            return "one-minus-src1";
        case SRC1_ALPHA:
            return "src1-alpha";
        case ONE_MINUS_SRC1_ALPHA:
            return "one-minus-src1-alpha";
        default:
            return "zero"; // fallback to first value
    }
}

GPUBlendOperation::Value GPUBlendOperation::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "add", strlen("add"))) {
        return ADD;
    }
    else if (__builtin_strncmp(str, "subtract", strlen("subtract"))) {
        return SUBTRACT;
    }
    else if (__builtin_strncmp(str, "reverse-subtract", strlen("reverse-subtract"))) {
        return REVERSE_SUBTRACT;
    }
    else if (__builtin_strncmp(str, "min", strlen("min"))) {
        return MIN;
    }
    else if (__builtin_strncmp(str, "max", strlen("max"))) {
        return MAX;
    }
    else {
        // Default to first value for invalid input
        return ADD;
    }
}

GPUBlendOperation::GPUBlendOperation(Value v) noexcept : emlite::Val(GPUBlendOperation::to_string(v)), value_(v) {}
GPUBlendOperation::GPUBlendOperation(Handle h) noexcept: emlite::Val(h) {
    value_ = GPUBlendOperation::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUBlendOperation::GPUBlendOperation(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = GPUBlendOperation::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUBlendOperation GPUBlendOperation::take_ownership(Handle h) noexcept { return GPUBlendOperation(h); }
GPUBlendOperation GPUBlendOperation::clone() const noexcept { return *this; }
const char* GPUBlendOperation::to_string(GPUBlendOperation::Value value_) noexcept {
    switch (value_) {
        case ADD:
            return "add";
        case SUBTRACT:
            return "subtract";
        case REVERSE_SUBTRACT:
            return "reverse-subtract";
        case MIN:
            return "min";
        case MAX:
            return "max";
        default:
            return "add"; // fallback to first value
    }
}

GPUStencilOperation::Value GPUStencilOperation::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "keep", strlen("keep"))) {
        return KEEP;
    }
    else if (__builtin_strncmp(str, "zero", strlen("zero"))) {
        return ZERO;
    }
    else if (__builtin_strncmp(str, "replace", strlen("replace"))) {
        return REPLACE;
    }
    else if (__builtin_strncmp(str, "invert", strlen("invert"))) {
        return INVERT;
    }
    else if (__builtin_strncmp(str, "increment-clamp", strlen("increment-clamp"))) {
        return INCREMENT_CLAMP;
    }
    else if (__builtin_strncmp(str, "decrement-clamp", strlen("decrement-clamp"))) {
        return DECREMENT_CLAMP;
    }
    else if (__builtin_strncmp(str, "increment-wrap", strlen("increment-wrap"))) {
        return INCREMENT_WRAP;
    }
    else if (__builtin_strncmp(str, "decrement-wrap", strlen("decrement-wrap"))) {
        return DECREMENT_WRAP;
    }
    else {
        // Default to first value for invalid input
        return KEEP;
    }
}

GPUStencilOperation::GPUStencilOperation(Value v) noexcept : emlite::Val(GPUStencilOperation::to_string(v)), value_(v) {}
GPUStencilOperation::GPUStencilOperation(Handle h) noexcept: emlite::Val(h) {
    value_ = GPUStencilOperation::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUStencilOperation::GPUStencilOperation(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = GPUStencilOperation::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUStencilOperation GPUStencilOperation::take_ownership(Handle h) noexcept { return GPUStencilOperation(h); }
GPUStencilOperation GPUStencilOperation::clone() const noexcept { return *this; }
const char* GPUStencilOperation::to_string(GPUStencilOperation::Value value_) noexcept {
    switch (value_) {
        case KEEP:
            return "keep";
        case ZERO:
            return "zero";
        case REPLACE:
            return "replace";
        case INVERT:
            return "invert";
        case INCREMENT_CLAMP:
            return "increment-clamp";
        case DECREMENT_CLAMP:
            return "decrement-clamp";
        case INCREMENT_WRAP:
            return "increment-wrap";
        case DECREMENT_WRAP:
            return "decrement-wrap";
        default:
            return "keep"; // fallback to first value
    }
}

GPUIndexFormat::Value GPUIndexFormat::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "uint16", strlen("uint16"))) {
        return UINT16;
    }
    else if (__builtin_strncmp(str, "uint32", strlen("uint32"))) {
        return UINT32;
    }
    else {
        // Default to first value for invalid input
        return UINT16;
    }
}

GPUIndexFormat::GPUIndexFormat(Value v) noexcept : emlite::Val(GPUIndexFormat::to_string(v)), value_(v) {}
GPUIndexFormat::GPUIndexFormat(Handle h) noexcept: emlite::Val(h) {
    value_ = GPUIndexFormat::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUIndexFormat::GPUIndexFormat(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = GPUIndexFormat::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUIndexFormat GPUIndexFormat::take_ownership(Handle h) noexcept { return GPUIndexFormat(h); }
GPUIndexFormat GPUIndexFormat::clone() const noexcept { return *this; }
const char* GPUIndexFormat::to_string(GPUIndexFormat::Value value_) noexcept {
    switch (value_) {
        case UINT16:
            return "uint16";
        case UINT32:
            return "uint32";
        default:
            return "uint16"; // fallback to first value
    }
}

GPUVertexFormat::Value GPUVertexFormat::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "uint8", strlen("uint8"))) {
        return UINT8;
    }
    else if (__builtin_strncmp(str, "uint8x2", strlen("uint8x2"))) {
        return UINT8X2;
    }
    else if (__builtin_strncmp(str, "uint8x4", strlen("uint8x4"))) {
        return UINT8X4;
    }
    else if (__builtin_strncmp(str, "sint8", strlen("sint8"))) {
        return SINT8;
    }
    else if (__builtin_strncmp(str, "sint8x2", strlen("sint8x2"))) {
        return SINT8X2;
    }
    else if (__builtin_strncmp(str, "sint8x4", strlen("sint8x4"))) {
        return SINT8X4;
    }
    else if (__builtin_strncmp(str, "unorm8", strlen("unorm8"))) {
        return UNORM8;
    }
    else if (__builtin_strncmp(str, "unorm8x2", strlen("unorm8x2"))) {
        return UNORM8X2;
    }
    else if (__builtin_strncmp(str, "unorm8x4", strlen("unorm8x4"))) {
        return UNORM8X4;
    }
    else if (__builtin_strncmp(str, "snorm8", strlen("snorm8"))) {
        return SNORM8;
    }
    else if (__builtin_strncmp(str, "snorm8x2", strlen("snorm8x2"))) {
        return SNORM8X2;
    }
    else if (__builtin_strncmp(str, "snorm8x4", strlen("snorm8x4"))) {
        return SNORM8X4;
    }
    else if (__builtin_strncmp(str, "uint16", strlen("uint16"))) {
        return UINT16;
    }
    else if (__builtin_strncmp(str, "uint16x2", strlen("uint16x2"))) {
        return UINT16X2;
    }
    else if (__builtin_strncmp(str, "uint16x4", strlen("uint16x4"))) {
        return UINT16X4;
    }
    else if (__builtin_strncmp(str, "sint16", strlen("sint16"))) {
        return SINT16;
    }
    else if (__builtin_strncmp(str, "sint16x2", strlen("sint16x2"))) {
        return SINT16X2;
    }
    else if (__builtin_strncmp(str, "sint16x4", strlen("sint16x4"))) {
        return SINT16X4;
    }
    else if (__builtin_strncmp(str, "unorm16", strlen("unorm16"))) {
        return UNORM16;
    }
    else if (__builtin_strncmp(str, "unorm16x2", strlen("unorm16x2"))) {
        return UNORM16X2;
    }
    else if (__builtin_strncmp(str, "unorm16x4", strlen("unorm16x4"))) {
        return UNORM16X4;
    }
    else if (__builtin_strncmp(str, "snorm16", strlen("snorm16"))) {
        return SNORM16;
    }
    else if (__builtin_strncmp(str, "snorm16x2", strlen("snorm16x2"))) {
        return SNORM16X2;
    }
    else if (__builtin_strncmp(str, "snorm16x4", strlen("snorm16x4"))) {
        return SNORM16X4;
    }
    else if (__builtin_strncmp(str, "float16", strlen("float16"))) {
        return FLOAT16;
    }
    else if (__builtin_strncmp(str, "float16x2", strlen("float16x2"))) {
        return FLOAT16X2;
    }
    else if (__builtin_strncmp(str, "float16x4", strlen("float16x4"))) {
        return FLOAT16X4;
    }
    else if (__builtin_strncmp(str, "float32", strlen("float32"))) {
        return FLOAT32;
    }
    else if (__builtin_strncmp(str, "float32x2", strlen("float32x2"))) {
        return FLOAT32X2;
    }
    else if (__builtin_strncmp(str, "float32x3", strlen("float32x3"))) {
        return FLOAT32X3;
    }
    else if (__builtin_strncmp(str, "float32x4", strlen("float32x4"))) {
        return FLOAT32X4;
    }
    else if (__builtin_strncmp(str, "uint32", strlen("uint32"))) {
        return UINT32;
    }
    else if (__builtin_strncmp(str, "uint32x2", strlen("uint32x2"))) {
        return UINT32X2;
    }
    else if (__builtin_strncmp(str, "uint32x3", strlen("uint32x3"))) {
        return UINT32X3;
    }
    else if (__builtin_strncmp(str, "uint32x4", strlen("uint32x4"))) {
        return UINT32X4;
    }
    else if (__builtin_strncmp(str, "sint32", strlen("sint32"))) {
        return SINT32;
    }
    else if (__builtin_strncmp(str, "sint32x2", strlen("sint32x2"))) {
        return SINT32X2;
    }
    else if (__builtin_strncmp(str, "sint32x3", strlen("sint32x3"))) {
        return SINT32X3;
    }
    else if (__builtin_strncmp(str, "sint32x4", strlen("sint32x4"))) {
        return SINT32X4;
    }
    else if (__builtin_strncmp(str, "unorm10-10-10-2", strlen("unorm10-10-10-2"))) {
        return UNORM10_10_10_2;
    }
    else if (__builtin_strncmp(str, "unorm8x4-bgra", strlen("unorm8x4-bgra"))) {
        return UNORM8X4_BGRA;
    }
    else {
        // Default to first value for invalid input
        return UINT8;
    }
}

GPUVertexFormat::GPUVertexFormat(Value v) noexcept : emlite::Val(GPUVertexFormat::to_string(v)), value_(v) {}
GPUVertexFormat::GPUVertexFormat(Handle h) noexcept: emlite::Val(h) {
    value_ = GPUVertexFormat::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUVertexFormat::GPUVertexFormat(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = GPUVertexFormat::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUVertexFormat GPUVertexFormat::take_ownership(Handle h) noexcept { return GPUVertexFormat(h); }
GPUVertexFormat GPUVertexFormat::clone() const noexcept { return *this; }
const char* GPUVertexFormat::to_string(GPUVertexFormat::Value value_) noexcept {
    switch (value_) {
        case UINT8:
            return "uint8";
        case UINT8X2:
            return "uint8x2";
        case UINT8X4:
            return "uint8x4";
        case SINT8:
            return "sint8";
        case SINT8X2:
            return "sint8x2";
        case SINT8X4:
            return "sint8x4";
        case UNORM8:
            return "unorm8";
        case UNORM8X2:
            return "unorm8x2";
        case UNORM8X4:
            return "unorm8x4";
        case SNORM8:
            return "snorm8";
        case SNORM8X2:
            return "snorm8x2";
        case SNORM8X4:
            return "snorm8x4";
        case UINT16:
            return "uint16";
        case UINT16X2:
            return "uint16x2";
        case UINT16X4:
            return "uint16x4";
        case SINT16:
            return "sint16";
        case SINT16X2:
            return "sint16x2";
        case SINT16X4:
            return "sint16x4";
        case UNORM16:
            return "unorm16";
        case UNORM16X2:
            return "unorm16x2";
        case UNORM16X4:
            return "unorm16x4";
        case SNORM16:
            return "snorm16";
        case SNORM16X2:
            return "snorm16x2";
        case SNORM16X4:
            return "snorm16x4";
        case FLOAT16:
            return "float16";
        case FLOAT16X2:
            return "float16x2";
        case FLOAT16X4:
            return "float16x4";
        case FLOAT32:
            return "float32";
        case FLOAT32X2:
            return "float32x2";
        case FLOAT32X3:
            return "float32x3";
        case FLOAT32X4:
            return "float32x4";
        case UINT32:
            return "uint32";
        case UINT32X2:
            return "uint32x2";
        case UINT32X3:
            return "uint32x3";
        case UINT32X4:
            return "uint32x4";
        case SINT32:
            return "sint32";
        case SINT32X2:
            return "sint32x2";
        case SINT32X3:
            return "sint32x3";
        case SINT32X4:
            return "sint32x4";
        case UNORM10_10_10_2:
            return "unorm10-10-10-2";
        case UNORM8X4_BGRA:
            return "unorm8x4-bgra";
        default:
            return "uint8"; // fallback to first value
    }
}

GPUVertexStepMode::Value GPUVertexStepMode::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "vertex", strlen("vertex"))) {
        return VERTEX;
    }
    else if (__builtin_strncmp(str, "instance", strlen("instance"))) {
        return INSTANCE;
    }
    else {
        // Default to first value for invalid input
        return VERTEX;
    }
}

GPUVertexStepMode::GPUVertexStepMode(Value v) noexcept : emlite::Val(GPUVertexStepMode::to_string(v)), value_(v) {}
GPUVertexStepMode::GPUVertexStepMode(Handle h) noexcept: emlite::Val(h) {
    value_ = GPUVertexStepMode::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUVertexStepMode::GPUVertexStepMode(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = GPUVertexStepMode::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUVertexStepMode GPUVertexStepMode::take_ownership(Handle h) noexcept { return GPUVertexStepMode(h); }
GPUVertexStepMode GPUVertexStepMode::clone() const noexcept { return *this; }
const char* GPUVertexStepMode::to_string(GPUVertexStepMode::Value value_) noexcept {
    switch (value_) {
        case VERTEX:
            return "vertex";
        case INSTANCE:
            return "instance";
        default:
            return "vertex"; // fallback to first value
    }
}

GPULoadOp::Value GPULoadOp::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "load", strlen("load"))) {
        return LOAD;
    }
    else if (__builtin_strncmp(str, "clear", strlen("clear"))) {
        return CLEAR;
    }
    else {
        // Default to first value for invalid input
        return LOAD;
    }
}

GPULoadOp::GPULoadOp(Value v) noexcept : emlite::Val(GPULoadOp::to_string(v)), value_(v) {}
GPULoadOp::GPULoadOp(Handle h) noexcept: emlite::Val(h) {
    value_ = GPULoadOp::from_string(as<emlite::Uniq<char[]>>().get());
}

GPULoadOp::GPULoadOp(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = GPULoadOp::from_string(as<emlite::Uniq<char[]>>().get());
}

GPULoadOp GPULoadOp::take_ownership(Handle h) noexcept { return GPULoadOp(h); }
GPULoadOp GPULoadOp::clone() const noexcept { return *this; }
const char* GPULoadOp::to_string(GPULoadOp::Value value_) noexcept {
    switch (value_) {
        case LOAD:
            return "load";
        case CLEAR:
            return "clear";
        default:
            return "load"; // fallback to first value
    }
}

GPUStoreOp::Value GPUStoreOp::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "store", strlen("store"))) {
        return STORE;
    }
    else if (__builtin_strncmp(str, "discard", strlen("discard"))) {
        return DISCARD;
    }
    else {
        // Default to first value for invalid input
        return STORE;
    }
}

GPUStoreOp::GPUStoreOp(Value v) noexcept : emlite::Val(GPUStoreOp::to_string(v)), value_(v) {}
GPUStoreOp::GPUStoreOp(Handle h) noexcept: emlite::Val(h) {
    value_ = GPUStoreOp::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUStoreOp::GPUStoreOp(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = GPUStoreOp::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUStoreOp GPUStoreOp::take_ownership(Handle h) noexcept { return GPUStoreOp(h); }
GPUStoreOp GPUStoreOp::clone() const noexcept { return *this; }
const char* GPUStoreOp::to_string(GPUStoreOp::Value value_) noexcept {
    switch (value_) {
        case STORE:
            return "store";
        case DISCARD:
            return "discard";
        default:
            return "store"; // fallback to first value
    }
}

GPUQueryType::Value GPUQueryType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "occlusion", strlen("occlusion"))) {
        return OCCLUSION;
    }
    else if (__builtin_strncmp(str, "timestamp", strlen("timestamp"))) {
        return TIMESTAMP;
    }
    else {
        // Default to first value for invalid input
        return OCCLUSION;
    }
}

GPUQueryType::GPUQueryType(Value v) noexcept : emlite::Val(GPUQueryType::to_string(v)), value_(v) {}
GPUQueryType::GPUQueryType(Handle h) noexcept: emlite::Val(h) {
    value_ = GPUQueryType::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUQueryType::GPUQueryType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = GPUQueryType::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUQueryType GPUQueryType::take_ownership(Handle h) noexcept { return GPUQueryType(h); }
GPUQueryType GPUQueryType::clone() const noexcept { return *this; }
const char* GPUQueryType::to_string(GPUQueryType::Value value_) noexcept {
    switch (value_) {
        case OCCLUSION:
            return "occlusion";
        case TIMESTAMP:
            return "timestamp";
        default:
            return "occlusion"; // fallback to first value
    }
}

GPUCanvasAlphaMode::Value GPUCanvasAlphaMode::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "opaque", strlen("opaque"))) {
        return OPAQUE;
    }
    else if (__builtin_strncmp(str, "premultiplied", strlen("premultiplied"))) {
        return PREMULTIPLIED;
    }
    else {
        // Default to first value for invalid input
        return OPAQUE;
    }
}

GPUCanvasAlphaMode::GPUCanvasAlphaMode(Value v) noexcept : emlite::Val(GPUCanvasAlphaMode::to_string(v)), value_(v) {}
GPUCanvasAlphaMode::GPUCanvasAlphaMode(Handle h) noexcept: emlite::Val(h) {
    value_ = GPUCanvasAlphaMode::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUCanvasAlphaMode::GPUCanvasAlphaMode(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = GPUCanvasAlphaMode::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUCanvasAlphaMode GPUCanvasAlphaMode::take_ownership(Handle h) noexcept { return GPUCanvasAlphaMode(h); }
GPUCanvasAlphaMode GPUCanvasAlphaMode::clone() const noexcept { return *this; }
const char* GPUCanvasAlphaMode::to_string(GPUCanvasAlphaMode::Value value_) noexcept {
    switch (value_) {
        case OPAQUE:
            return "opaque";
        case PREMULTIPLIED:
            return "premultiplied";
        default:
            return "opaque"; // fallback to first value
    }
}

GPUCanvasToneMappingMode::Value GPUCanvasToneMappingMode::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "standard", strlen("standard"))) {
        return STANDARD;
    }
    else if (__builtin_strncmp(str, "extended", strlen("extended"))) {
        return EXTENDED;
    }
    else {
        // Default to first value for invalid input
        return STANDARD;
    }
}

GPUCanvasToneMappingMode::GPUCanvasToneMappingMode(Value v) noexcept : emlite::Val(GPUCanvasToneMappingMode::to_string(v)), value_(v) {}
GPUCanvasToneMappingMode::GPUCanvasToneMappingMode(Handle h) noexcept: emlite::Val(h) {
    value_ = GPUCanvasToneMappingMode::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUCanvasToneMappingMode::GPUCanvasToneMappingMode(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = GPUCanvasToneMappingMode::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUCanvasToneMappingMode GPUCanvasToneMappingMode::take_ownership(Handle h) noexcept { return GPUCanvasToneMappingMode(h); }
GPUCanvasToneMappingMode GPUCanvasToneMappingMode::clone() const noexcept { return *this; }
const char* GPUCanvasToneMappingMode::to_string(GPUCanvasToneMappingMode::Value value_) noexcept {
    switch (value_) {
        case STANDARD:
            return "standard";
        case EXTENDED:
            return "extended";
        default:
            return "standard"; // fallback to first value
    }
}

GPUDeviceLostReason::Value GPUDeviceLostReason::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "unknown", strlen("unknown"))) {
        return UNKNOWN;
    }
    else if (__builtin_strncmp(str, "destroyed", strlen("destroyed"))) {
        return DESTROYED;
    }
    else {
        // Default to first value for invalid input
        return UNKNOWN;
    }
}

GPUDeviceLostReason::GPUDeviceLostReason(Value v) noexcept : emlite::Val(GPUDeviceLostReason::to_string(v)), value_(v) {}
GPUDeviceLostReason::GPUDeviceLostReason(Handle h) noexcept: emlite::Val(h) {
    value_ = GPUDeviceLostReason::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUDeviceLostReason::GPUDeviceLostReason(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = GPUDeviceLostReason::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUDeviceLostReason GPUDeviceLostReason::take_ownership(Handle h) noexcept { return GPUDeviceLostReason(h); }
GPUDeviceLostReason GPUDeviceLostReason::clone() const noexcept { return *this; }
const char* GPUDeviceLostReason::to_string(GPUDeviceLostReason::Value value_) noexcept {
    switch (value_) {
        case UNKNOWN:
            return "unknown";
        case DESTROYED:
            return "destroyed";
        default:
            return "unknown"; // fallback to first value
    }
}

GPUErrorFilter::Value GPUErrorFilter::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "validation", strlen("validation"))) {
        return VALIDATION;
    }
    else if (__builtin_strncmp(str, "out-of-memory", strlen("out-of-memory"))) {
        return OUT_OF_MEMORY;
    }
    else if (__builtin_strncmp(str, "internal", strlen("internal"))) {
        return INTERNAL;
    }
    else {
        // Default to first value for invalid input
        return VALIDATION;
    }
}

GPUErrorFilter::GPUErrorFilter(Value v) noexcept : emlite::Val(GPUErrorFilter::to_string(v)), value_(v) {}
GPUErrorFilter::GPUErrorFilter(Handle h) noexcept: emlite::Val(h) {
    value_ = GPUErrorFilter::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUErrorFilter::GPUErrorFilter(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = GPUErrorFilter::from_string(as<emlite::Uniq<char[]>>().get());
}

GPUErrorFilter GPUErrorFilter::take_ownership(Handle h) noexcept { return GPUErrorFilter(h); }
GPUErrorFilter GPUErrorFilter::clone() const noexcept { return *this; }
const char* GPUErrorFilter::to_string(GPUErrorFilter::Value value_) noexcept {
    switch (value_) {
        case VALIDATION:
            return "validation";
        case OUT_OF_MEMORY:
            return "out-of-memory";
        case INTERNAL:
            return "internal";
        default:
            return "validation"; // fallback to first value
    }
}

HIDUnitSystem::Value HIDUnitSystem::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "none", strlen("none"))) {
        return NONE;
    }
    else if (__builtin_strncmp(str, "si-linear", strlen("si-linear"))) {
        return SI_LINEAR;
    }
    else if (__builtin_strncmp(str, "si-rotation", strlen("si-rotation"))) {
        return SI_ROTATION;
    }
    else if (__builtin_strncmp(str, "english-linear", strlen("english-linear"))) {
        return ENGLISH_LINEAR;
    }
    else if (__builtin_strncmp(str, "english-rotation", strlen("english-rotation"))) {
        return ENGLISH_ROTATION;
    }
    else if (__builtin_strncmp(str, "vendor-defined", strlen("vendor-defined"))) {
        return VENDOR_DEFINED;
    }
    else if (__builtin_strncmp(str, "reserved", strlen("reserved"))) {
        return RESERVED;
    }
    else {
        // Default to first value for invalid input
        return NONE;
    }
}

HIDUnitSystem::HIDUnitSystem(Value v) noexcept : emlite::Val(HIDUnitSystem::to_string(v)), value_(v) {}
HIDUnitSystem::HIDUnitSystem(Handle h) noexcept: emlite::Val(h) {
    value_ = HIDUnitSystem::from_string(as<emlite::Uniq<char[]>>().get());
}

HIDUnitSystem::HIDUnitSystem(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = HIDUnitSystem::from_string(as<emlite::Uniq<char[]>>().get());
}

HIDUnitSystem HIDUnitSystem::take_ownership(Handle h) noexcept { return HIDUnitSystem(h); }
HIDUnitSystem HIDUnitSystem::clone() const noexcept { return *this; }
const char* HIDUnitSystem::to_string(HIDUnitSystem::Value value_) noexcept {
    switch (value_) {
        case NONE:
            return "none";
        case SI_LINEAR:
            return "si-linear";
        case SI_ROTATION:
            return "si-rotation";
        case ENGLISH_LINEAR:
            return "english-linear";
        case ENGLISH_ROTATION:
            return "english-rotation";
        case VENDOR_DEFINED:
            return "vendor-defined";
        case RESERVED:
            return "reserved";
        default:
            return "none"; // fallback to first value
    }
}

MIDIPortType::Value MIDIPortType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "input", strlen("input"))) {
        return INPUT;
    }
    else if (__builtin_strncmp(str, "output", strlen("output"))) {
        return OUTPUT;
    }
    else {
        // Default to first value for invalid input
        return INPUT;
    }
}

MIDIPortType::MIDIPortType(Value v) noexcept : emlite::Val(MIDIPortType::to_string(v)), value_(v) {}
MIDIPortType::MIDIPortType(Handle h) noexcept: emlite::Val(h) {
    value_ = MIDIPortType::from_string(as<emlite::Uniq<char[]>>().get());
}

MIDIPortType::MIDIPortType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = MIDIPortType::from_string(as<emlite::Uniq<char[]>>().get());
}

MIDIPortType MIDIPortType::take_ownership(Handle h) noexcept { return MIDIPortType(h); }
MIDIPortType MIDIPortType::clone() const noexcept { return *this; }
const char* MIDIPortType::to_string(MIDIPortType::Value value_) noexcept {
    switch (value_) {
        case INPUT:
            return "input";
        case OUTPUT:
            return "output";
        default:
            return "input"; // fallback to first value
    }
}

MIDIPortDeviceState::Value MIDIPortDeviceState::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "disconnected", strlen("disconnected"))) {
        return DISCONNECTED;
    }
    else if (__builtin_strncmp(str, "connected", strlen("connected"))) {
        return CONNECTED;
    }
    else {
        // Default to first value for invalid input
        return DISCONNECTED;
    }
}

MIDIPortDeviceState::MIDIPortDeviceState(Value v) noexcept : emlite::Val(MIDIPortDeviceState::to_string(v)), value_(v) {}
MIDIPortDeviceState::MIDIPortDeviceState(Handle h) noexcept: emlite::Val(h) {
    value_ = MIDIPortDeviceState::from_string(as<emlite::Uniq<char[]>>().get());
}

MIDIPortDeviceState::MIDIPortDeviceState(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = MIDIPortDeviceState::from_string(as<emlite::Uniq<char[]>>().get());
}

MIDIPortDeviceState MIDIPortDeviceState::take_ownership(Handle h) noexcept { return MIDIPortDeviceState(h); }
MIDIPortDeviceState MIDIPortDeviceState::clone() const noexcept { return *this; }
const char* MIDIPortDeviceState::to_string(MIDIPortDeviceState::Value value_) noexcept {
    switch (value_) {
        case DISCONNECTED:
            return "disconnected";
        case CONNECTED:
            return "connected";
        default:
            return "disconnected"; // fallback to first value
    }
}

MIDIPortConnectionState::Value MIDIPortConnectionState::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "open", strlen("open"))) {
        return OPEN;
    }
    else if (__builtin_strncmp(str, "closed", strlen("closed"))) {
        return CLOSED;
    }
    else if (__builtin_strncmp(str, "pending", strlen("pending"))) {
        return PENDING;
    }
    else {
        // Default to first value for invalid input
        return OPEN;
    }
}

MIDIPortConnectionState::MIDIPortConnectionState(Value v) noexcept : emlite::Val(MIDIPortConnectionState::to_string(v)), value_(v) {}
MIDIPortConnectionState::MIDIPortConnectionState(Handle h) noexcept: emlite::Val(h) {
    value_ = MIDIPortConnectionState::from_string(as<emlite::Uniq<char[]>>().get());
}

MIDIPortConnectionState::MIDIPortConnectionState(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = MIDIPortConnectionState::from_string(as<emlite::Uniq<char[]>>().get());
}

MIDIPortConnectionState MIDIPortConnectionState::take_ownership(Handle h) noexcept { return MIDIPortConnectionState(h); }
MIDIPortConnectionState MIDIPortConnectionState::clone() const noexcept { return *this; }
const char* MIDIPortConnectionState::to_string(MIDIPortConnectionState::Value value_) noexcept {
    switch (value_) {
        case OPEN:
            return "open";
        case CLOSED:
            return "closed";
        case PENDING:
            return "pending";
        default:
            return "open"; // fallback to first value
    }
}

MLPowerPreference::Value MLPowerPreference::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "default", strlen("default"))) {
        return DEFAULT_;
    }
    else if (__builtin_strncmp(str, "high-performance", strlen("high-performance"))) {
        return HIGH_PERFORMANCE;
    }
    else if (__builtin_strncmp(str, "low-power", strlen("low-power"))) {
        return LOW_POWER;
    }
    else {
        // Default to first value for invalid input
        return DEFAULT_;
    }
}

MLPowerPreference::MLPowerPreference(Value v) noexcept : emlite::Val(MLPowerPreference::to_string(v)), value_(v) {}
MLPowerPreference::MLPowerPreference(Handle h) noexcept: emlite::Val(h) {
    value_ = MLPowerPreference::from_string(as<emlite::Uniq<char[]>>().get());
}

MLPowerPreference::MLPowerPreference(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = MLPowerPreference::from_string(as<emlite::Uniq<char[]>>().get());
}

MLPowerPreference MLPowerPreference::take_ownership(Handle h) noexcept { return MLPowerPreference(h); }
MLPowerPreference MLPowerPreference::clone() const noexcept { return *this; }
const char* MLPowerPreference::to_string(MLPowerPreference::Value value_) noexcept {
    switch (value_) {
        case DEFAULT_:
            return "default";
        case HIGH_PERFORMANCE:
            return "high-performance";
        case LOW_POWER:
            return "low-power";
        default:
            return "default"; // fallback to first value
    }
}

MLInputOperandLayout::Value MLInputOperandLayout::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "nchw", strlen("nchw"))) {
        return NCHW;
    }
    else if (__builtin_strncmp(str, "nhwc", strlen("nhwc"))) {
        return NHWC;
    }
    else {
        // Default to first value for invalid input
        return NCHW;
    }
}

MLInputOperandLayout::MLInputOperandLayout(Value v) noexcept : emlite::Val(MLInputOperandLayout::to_string(v)), value_(v) {}
MLInputOperandLayout::MLInputOperandLayout(Handle h) noexcept: emlite::Val(h) {
    value_ = MLInputOperandLayout::from_string(as<emlite::Uniq<char[]>>().get());
}

MLInputOperandLayout::MLInputOperandLayout(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = MLInputOperandLayout::from_string(as<emlite::Uniq<char[]>>().get());
}

MLInputOperandLayout MLInputOperandLayout::take_ownership(Handle h) noexcept { return MLInputOperandLayout(h); }
MLInputOperandLayout MLInputOperandLayout::clone() const noexcept { return *this; }
const char* MLInputOperandLayout::to_string(MLInputOperandLayout::Value value_) noexcept {
    switch (value_) {
        case NCHW:
            return "nchw";
        case NHWC:
            return "nhwc";
        default:
            return "nchw"; // fallback to first value
    }
}

MLOperandDataType::Value MLOperandDataType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "float32", strlen("float32"))) {
        return FLOAT32;
    }
    else if (__builtin_strncmp(str, "float16", strlen("float16"))) {
        return FLOAT16;
    }
    else if (__builtin_strncmp(str, "int32", strlen("int32"))) {
        return INT32;
    }
    else if (__builtin_strncmp(str, "uint32", strlen("uint32"))) {
        return UINT32;
    }
    else if (__builtin_strncmp(str, "int64", strlen("int64"))) {
        return INT64;
    }
    else if (__builtin_strncmp(str, "uint64", strlen("uint64"))) {
        return UINT64;
    }
    else if (__builtin_strncmp(str, "int8", strlen("int8"))) {
        return INT8;
    }
    else if (__builtin_strncmp(str, "uint8", strlen("uint8"))) {
        return UINT8;
    }
    else {
        // Default to first value for invalid input
        return FLOAT32;
    }
}

MLOperandDataType::MLOperandDataType(Value v) noexcept : emlite::Val(MLOperandDataType::to_string(v)), value_(v) {}
MLOperandDataType::MLOperandDataType(Handle h) noexcept: emlite::Val(h) {
    value_ = MLOperandDataType::from_string(as<emlite::Uniq<char[]>>().get());
}

MLOperandDataType::MLOperandDataType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = MLOperandDataType::from_string(as<emlite::Uniq<char[]>>().get());
}

MLOperandDataType MLOperandDataType::take_ownership(Handle h) noexcept { return MLOperandDataType(h); }
MLOperandDataType MLOperandDataType::clone() const noexcept { return *this; }
const char* MLOperandDataType::to_string(MLOperandDataType::Value value_) noexcept {
    switch (value_) {
        case FLOAT32:
            return "float32";
        case FLOAT16:
            return "float16";
        case INT32:
            return "int32";
        case UINT32:
            return "uint32";
        case INT64:
            return "int64";
        case UINT64:
            return "uint64";
        case INT8:
            return "int8";
        case UINT8:
            return "uint8";
        default:
            return "float32"; // fallback to first value
    }
}

MLConv2dFilterOperandLayout::Value MLConv2dFilterOperandLayout::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "oihw", strlen("oihw"))) {
        return OIHW;
    }
    else if (__builtin_strncmp(str, "hwio", strlen("hwio"))) {
        return HWIO;
    }
    else if (__builtin_strncmp(str, "ohwi", strlen("ohwi"))) {
        return OHWI;
    }
    else if (__builtin_strncmp(str, "ihwo", strlen("ihwo"))) {
        return IHWO;
    }
    else {
        // Default to first value for invalid input
        return OIHW;
    }
}

MLConv2dFilterOperandLayout::MLConv2dFilterOperandLayout(Value v) noexcept : emlite::Val(MLConv2dFilterOperandLayout::to_string(v)), value_(v) {}
MLConv2dFilterOperandLayout::MLConv2dFilterOperandLayout(Handle h) noexcept: emlite::Val(h) {
    value_ = MLConv2dFilterOperandLayout::from_string(as<emlite::Uniq<char[]>>().get());
}

MLConv2dFilterOperandLayout::MLConv2dFilterOperandLayout(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = MLConv2dFilterOperandLayout::from_string(as<emlite::Uniq<char[]>>().get());
}

MLConv2dFilterOperandLayout MLConv2dFilterOperandLayout::take_ownership(Handle h) noexcept { return MLConv2dFilterOperandLayout(h); }
MLConv2dFilterOperandLayout MLConv2dFilterOperandLayout::clone() const noexcept { return *this; }
const char* MLConv2dFilterOperandLayout::to_string(MLConv2dFilterOperandLayout::Value value_) noexcept {
    switch (value_) {
        case OIHW:
            return "oihw";
        case HWIO:
            return "hwio";
        case OHWI:
            return "ohwi";
        case IHWO:
            return "ihwo";
        default:
            return "oihw"; // fallback to first value
    }
}

MLConvTranspose2dFilterOperandLayout::Value MLConvTranspose2dFilterOperandLayout::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "iohw", strlen("iohw"))) {
        return IOHW;
    }
    else if (__builtin_strncmp(str, "hwoi", strlen("hwoi"))) {
        return HWOI;
    }
    else if (__builtin_strncmp(str, "ohwi", strlen("ohwi"))) {
        return OHWI;
    }
    else {
        // Default to first value for invalid input
        return IOHW;
    }
}

MLConvTranspose2dFilterOperandLayout::MLConvTranspose2dFilterOperandLayout(Value v) noexcept : emlite::Val(MLConvTranspose2dFilterOperandLayout::to_string(v)), value_(v) {}
MLConvTranspose2dFilterOperandLayout::MLConvTranspose2dFilterOperandLayout(Handle h) noexcept: emlite::Val(h) {
    value_ = MLConvTranspose2dFilterOperandLayout::from_string(as<emlite::Uniq<char[]>>().get());
}

MLConvTranspose2dFilterOperandLayout::MLConvTranspose2dFilterOperandLayout(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = MLConvTranspose2dFilterOperandLayout::from_string(as<emlite::Uniq<char[]>>().get());
}

MLConvTranspose2dFilterOperandLayout MLConvTranspose2dFilterOperandLayout::take_ownership(Handle h) noexcept { return MLConvTranspose2dFilterOperandLayout(h); }
MLConvTranspose2dFilterOperandLayout MLConvTranspose2dFilterOperandLayout::clone() const noexcept { return *this; }
const char* MLConvTranspose2dFilterOperandLayout::to_string(MLConvTranspose2dFilterOperandLayout::Value value_) noexcept {
    switch (value_) {
        case IOHW:
            return "iohw";
        case HWOI:
            return "hwoi";
        case OHWI:
            return "ohwi";
        default:
            return "iohw"; // fallback to first value
    }
}

MLGruWeightLayout::Value MLGruWeightLayout::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "zrn", strlen("zrn"))) {
        return ZRN;
    }
    else if (__builtin_strncmp(str, "rzn", strlen("rzn"))) {
        return RZN;
    }
    else {
        // Default to first value for invalid input
        return ZRN;
    }
}

MLGruWeightLayout::MLGruWeightLayout(Value v) noexcept : emlite::Val(MLGruWeightLayout::to_string(v)), value_(v) {}
MLGruWeightLayout::MLGruWeightLayout(Handle h) noexcept: emlite::Val(h) {
    value_ = MLGruWeightLayout::from_string(as<emlite::Uniq<char[]>>().get());
}

MLGruWeightLayout::MLGruWeightLayout(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = MLGruWeightLayout::from_string(as<emlite::Uniq<char[]>>().get());
}

MLGruWeightLayout MLGruWeightLayout::take_ownership(Handle h) noexcept { return MLGruWeightLayout(h); }
MLGruWeightLayout MLGruWeightLayout::clone() const noexcept { return *this; }
const char* MLGruWeightLayout::to_string(MLGruWeightLayout::Value value_) noexcept {
    switch (value_) {
        case ZRN:
            return "zrn";
        case RZN:
            return "rzn";
        default:
            return "zrn"; // fallback to first value
    }
}

MLRecurrentNetworkActivation::Value MLRecurrentNetworkActivation::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "relu", strlen("relu"))) {
        return RELU;
    }
    else if (__builtin_strncmp(str, "sigmoid", strlen("sigmoid"))) {
        return SIGMOID;
    }
    else if (__builtin_strncmp(str, "tanh", strlen("tanh"))) {
        return TANH;
    }
    else {
        // Default to first value for invalid input
        return RELU;
    }
}

MLRecurrentNetworkActivation::MLRecurrentNetworkActivation(Value v) noexcept : emlite::Val(MLRecurrentNetworkActivation::to_string(v)), value_(v) {}
MLRecurrentNetworkActivation::MLRecurrentNetworkActivation(Handle h) noexcept: emlite::Val(h) {
    value_ = MLRecurrentNetworkActivation::from_string(as<emlite::Uniq<char[]>>().get());
}

MLRecurrentNetworkActivation::MLRecurrentNetworkActivation(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = MLRecurrentNetworkActivation::from_string(as<emlite::Uniq<char[]>>().get());
}

MLRecurrentNetworkActivation MLRecurrentNetworkActivation::take_ownership(Handle h) noexcept { return MLRecurrentNetworkActivation(h); }
MLRecurrentNetworkActivation MLRecurrentNetworkActivation::clone() const noexcept { return *this; }
const char* MLRecurrentNetworkActivation::to_string(MLRecurrentNetworkActivation::Value value_) noexcept {
    switch (value_) {
        case RELU:
            return "relu";
        case SIGMOID:
            return "sigmoid";
        case TANH:
            return "tanh";
        default:
            return "relu"; // fallback to first value
    }
}

MLRecurrentNetworkDirection::Value MLRecurrentNetworkDirection::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "forward", strlen("forward"))) {
        return FORWARD;
    }
    else if (__builtin_strncmp(str, "backward", strlen("backward"))) {
        return BACKWARD;
    }
    else if (__builtin_strncmp(str, "both", strlen("both"))) {
        return BOTH;
    }
    else {
        // Default to first value for invalid input
        return FORWARD;
    }
}

MLRecurrentNetworkDirection::MLRecurrentNetworkDirection(Value v) noexcept : emlite::Val(MLRecurrentNetworkDirection::to_string(v)), value_(v) {}
MLRecurrentNetworkDirection::MLRecurrentNetworkDirection(Handle h) noexcept: emlite::Val(h) {
    value_ = MLRecurrentNetworkDirection::from_string(as<emlite::Uniq<char[]>>().get());
}

MLRecurrentNetworkDirection::MLRecurrentNetworkDirection(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = MLRecurrentNetworkDirection::from_string(as<emlite::Uniq<char[]>>().get());
}

MLRecurrentNetworkDirection MLRecurrentNetworkDirection::take_ownership(Handle h) noexcept { return MLRecurrentNetworkDirection(h); }
MLRecurrentNetworkDirection MLRecurrentNetworkDirection::clone() const noexcept { return *this; }
const char* MLRecurrentNetworkDirection::to_string(MLRecurrentNetworkDirection::Value value_) noexcept {
    switch (value_) {
        case FORWARD:
            return "forward";
        case BACKWARD:
            return "backward";
        case BOTH:
            return "both";
        default:
            return "forward"; // fallback to first value
    }
}

MLLstmWeightLayout::Value MLLstmWeightLayout::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "iofg", strlen("iofg"))) {
        return IOFG;
    }
    else if (__builtin_strncmp(str, "ifgo", strlen("ifgo"))) {
        return IFGO;
    }
    else {
        // Default to first value for invalid input
        return IOFG;
    }
}

MLLstmWeightLayout::MLLstmWeightLayout(Value v) noexcept : emlite::Val(MLLstmWeightLayout::to_string(v)), value_(v) {}
MLLstmWeightLayout::MLLstmWeightLayout(Handle h) noexcept: emlite::Val(h) {
    value_ = MLLstmWeightLayout::from_string(as<emlite::Uniq<char[]>>().get());
}

MLLstmWeightLayout::MLLstmWeightLayout(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = MLLstmWeightLayout::from_string(as<emlite::Uniq<char[]>>().get());
}

MLLstmWeightLayout MLLstmWeightLayout::take_ownership(Handle h) noexcept { return MLLstmWeightLayout(h); }
MLLstmWeightLayout MLLstmWeightLayout::clone() const noexcept { return *this; }
const char* MLLstmWeightLayout::to_string(MLLstmWeightLayout::Value value_) noexcept {
    switch (value_) {
        case IOFG:
            return "iofg";
        case IFGO:
            return "ifgo";
        default:
            return "iofg"; // fallback to first value
    }
}

MLPaddingMode::Value MLPaddingMode::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "constant", strlen("constant"))) {
        return CONSTANT;
    }
    else if (__builtin_strncmp(str, "edge", strlen("edge"))) {
        return EDGE;
    }
    else if (__builtin_strncmp(str, "reflection", strlen("reflection"))) {
        return REFLECTION;
    }
    else {
        // Default to first value for invalid input
        return CONSTANT;
    }
}

MLPaddingMode::MLPaddingMode(Value v) noexcept : emlite::Val(MLPaddingMode::to_string(v)), value_(v) {}
MLPaddingMode::MLPaddingMode(Handle h) noexcept: emlite::Val(h) {
    value_ = MLPaddingMode::from_string(as<emlite::Uniq<char[]>>().get());
}

MLPaddingMode::MLPaddingMode(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = MLPaddingMode::from_string(as<emlite::Uniq<char[]>>().get());
}

MLPaddingMode MLPaddingMode::take_ownership(Handle h) noexcept { return MLPaddingMode(h); }
MLPaddingMode MLPaddingMode::clone() const noexcept { return *this; }
const char* MLPaddingMode::to_string(MLPaddingMode::Value value_) noexcept {
    switch (value_) {
        case CONSTANT:
            return "constant";
        case EDGE:
            return "edge";
        case REFLECTION:
            return "reflection";
        default:
            return "constant"; // fallback to first value
    }
}

MLRoundingType::Value MLRoundingType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "floor", strlen("floor"))) {
        return FLOOR;
    }
    else if (__builtin_strncmp(str, "ceil", strlen("ceil"))) {
        return CEIL;
    }
    else {
        // Default to first value for invalid input
        return FLOOR;
    }
}

MLRoundingType::MLRoundingType(Value v) noexcept : emlite::Val(MLRoundingType::to_string(v)), value_(v) {}
MLRoundingType::MLRoundingType(Handle h) noexcept: emlite::Val(h) {
    value_ = MLRoundingType::from_string(as<emlite::Uniq<char[]>>().get());
}

MLRoundingType::MLRoundingType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = MLRoundingType::from_string(as<emlite::Uniq<char[]>>().get());
}

MLRoundingType MLRoundingType::take_ownership(Handle h) noexcept { return MLRoundingType(h); }
MLRoundingType MLRoundingType::clone() const noexcept { return *this; }
const char* MLRoundingType::to_string(MLRoundingType::Value value_) noexcept {
    switch (value_) {
        case FLOOR:
            return "floor";
        case CEIL:
            return "ceil";
        default:
            return "floor"; // fallback to first value
    }
}

MLInterpolationMode::Value MLInterpolationMode::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "nearest-neighbor", strlen("nearest-neighbor"))) {
        return NEAREST_NEIGHBOR;
    }
    else if (__builtin_strncmp(str, "linear", strlen("linear"))) {
        return LINEAR;
    }
    else {
        // Default to first value for invalid input
        return NEAREST_NEIGHBOR;
    }
}

MLInterpolationMode::MLInterpolationMode(Value v) noexcept : emlite::Val(MLInterpolationMode::to_string(v)), value_(v) {}
MLInterpolationMode::MLInterpolationMode(Handle h) noexcept: emlite::Val(h) {
    value_ = MLInterpolationMode::from_string(as<emlite::Uniq<char[]>>().get());
}

MLInterpolationMode::MLInterpolationMode(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = MLInterpolationMode::from_string(as<emlite::Uniq<char[]>>().get());
}

MLInterpolationMode MLInterpolationMode::take_ownership(Handle h) noexcept { return MLInterpolationMode(h); }
MLInterpolationMode MLInterpolationMode::clone() const noexcept { return *this; }
const char* MLInterpolationMode::to_string(MLInterpolationMode::Value value_) noexcept {
    switch (value_) {
        case NEAREST_NEIGHBOR:
            return "nearest-neighbor";
        case LINEAR:
            return "linear";
        default:
            return "nearest-neighbor"; // fallback to first value
    }
}

SFrameTransformRole::Value SFrameTransformRole::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "encrypt", strlen("encrypt"))) {
        return ENCRYPT;
    }
    else if (__builtin_strncmp(str, "decrypt", strlen("decrypt"))) {
        return DECRYPT;
    }
    else {
        // Default to first value for invalid input
        return ENCRYPT;
    }
}

SFrameTransformRole::SFrameTransformRole(Value v) noexcept : emlite::Val(SFrameTransformRole::to_string(v)), value_(v) {}
SFrameTransformRole::SFrameTransformRole(Handle h) noexcept: emlite::Val(h) {
    value_ = SFrameTransformRole::from_string(as<emlite::Uniq<char[]>>().get());
}

SFrameTransformRole::SFrameTransformRole(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = SFrameTransformRole::from_string(as<emlite::Uniq<char[]>>().get());
}

SFrameTransformRole SFrameTransformRole::take_ownership(Handle h) noexcept { return SFrameTransformRole(h); }
SFrameTransformRole SFrameTransformRole::clone() const noexcept { return *this; }
const char* SFrameTransformRole::to_string(SFrameTransformRole::Value value_) noexcept {
    switch (value_) {
        case ENCRYPT:
            return "encrypt";
        case DECRYPT:
            return "decrypt";
        default:
            return "encrypt"; // fallback to first value
    }
}

SFrameTransformErrorEventType::Value SFrameTransformErrorEventType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "authentication", strlen("authentication"))) {
        return AUTHENTICATION;
    }
    else if (__builtin_strncmp(str, "keyID", strlen("keyID"))) {
        return KEYID;
    }
    else if (__builtin_strncmp(str, "syntax", strlen("syntax"))) {
        return SYNTAX;
    }
    else {
        // Default to first value for invalid input
        return AUTHENTICATION;
    }
}

SFrameTransformErrorEventType::SFrameTransformErrorEventType(Value v) noexcept : emlite::Val(SFrameTransformErrorEventType::to_string(v)), value_(v) {}
SFrameTransformErrorEventType::SFrameTransformErrorEventType(Handle h) noexcept: emlite::Val(h) {
    value_ = SFrameTransformErrorEventType::from_string(as<emlite::Uniq<char[]>>().get());
}

SFrameTransformErrorEventType::SFrameTransformErrorEventType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = SFrameTransformErrorEventType::from_string(as<emlite::Uniq<char[]>>().get());
}

SFrameTransformErrorEventType SFrameTransformErrorEventType::take_ownership(Handle h) noexcept { return SFrameTransformErrorEventType(h); }
SFrameTransformErrorEventType SFrameTransformErrorEventType::clone() const noexcept { return *this; }
const char* SFrameTransformErrorEventType::to_string(SFrameTransformErrorEventType::Value value_) noexcept {
    switch (value_) {
        case AUTHENTICATION:
            return "authentication";
        case KEYID:
            return "keyID";
        case SYNTAX:
            return "syntax";
        default:
            return "authentication"; // fallback to first value
    }
}

RTCEncodedVideoFrameType::Value RTCEncodedVideoFrameType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "empty", strlen("empty"))) {
        return EMPTY;
    }
    else if (__builtin_strncmp(str, "key", strlen("key"))) {
        return KEY;
    }
    else if (__builtin_strncmp(str, "delta", strlen("delta"))) {
        return DELTA;
    }
    else {
        // Default to first value for invalid input
        return EMPTY;
    }
}

RTCEncodedVideoFrameType::RTCEncodedVideoFrameType(Value v) noexcept : emlite::Val(RTCEncodedVideoFrameType::to_string(v)), value_(v) {}
RTCEncodedVideoFrameType::RTCEncodedVideoFrameType(Handle h) noexcept: emlite::Val(h) {
    value_ = RTCEncodedVideoFrameType::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCEncodedVideoFrameType::RTCEncodedVideoFrameType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RTCEncodedVideoFrameType::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCEncodedVideoFrameType RTCEncodedVideoFrameType::take_ownership(Handle h) noexcept { return RTCEncodedVideoFrameType(h); }
RTCEncodedVideoFrameType RTCEncodedVideoFrameType::clone() const noexcept { return *this; }
const char* RTCEncodedVideoFrameType::to_string(RTCEncodedVideoFrameType::Value value_) noexcept {
    switch (value_) {
        case EMPTY:
            return "empty";
        case KEY:
            return "key";
        case DELTA:
            return "delta";
        default:
            return "empty"; // fallback to first value
    }
}

RTCErrorDetailTypeIdp::Value RTCErrorDetailTypeIdp::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "idp-bad-script-failure", strlen("idp-bad-script-failure"))) {
        return IDP_BAD_SCRIPT_FAILURE;
    }
    else if (__builtin_strncmp(str, "idp-execution-failure", strlen("idp-execution-failure"))) {
        return IDP_EXECUTION_FAILURE;
    }
    else if (__builtin_strncmp(str, "idp-load-failure", strlen("idp-load-failure"))) {
        return IDP_LOAD_FAILURE;
    }
    else if (__builtin_strncmp(str, "idp-need-login", strlen("idp-need-login"))) {
        return IDP_NEED_LOGIN;
    }
    else if (__builtin_strncmp(str, "idp-timeout", strlen("idp-timeout"))) {
        return IDP_TIMEOUT;
    }
    else if (__builtin_strncmp(str, "idp-tls-failure", strlen("idp-tls-failure"))) {
        return IDP_TLS_FAILURE;
    }
    else if (__builtin_strncmp(str, "idp-token-expired", strlen("idp-token-expired"))) {
        return IDP_TOKEN_EXPIRED;
    }
    else if (__builtin_strncmp(str, "idp-token-invalid", strlen("idp-token-invalid"))) {
        return IDP_TOKEN_INVALID;
    }
    else {
        // Default to first value for invalid input
        return IDP_BAD_SCRIPT_FAILURE;
    }
}

RTCErrorDetailTypeIdp::RTCErrorDetailTypeIdp(Value v) noexcept : emlite::Val(RTCErrorDetailTypeIdp::to_string(v)), value_(v) {}
RTCErrorDetailTypeIdp::RTCErrorDetailTypeIdp(Handle h) noexcept: emlite::Val(h) {
    value_ = RTCErrorDetailTypeIdp::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCErrorDetailTypeIdp::RTCErrorDetailTypeIdp(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RTCErrorDetailTypeIdp::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCErrorDetailTypeIdp RTCErrorDetailTypeIdp::take_ownership(Handle h) noexcept { return RTCErrorDetailTypeIdp(h); }
RTCErrorDetailTypeIdp RTCErrorDetailTypeIdp::clone() const noexcept { return *this; }
const char* RTCErrorDetailTypeIdp::to_string(RTCErrorDetailTypeIdp::Value value_) noexcept {
    switch (value_) {
        case IDP_BAD_SCRIPT_FAILURE:
            return "idp-bad-script-failure";
        case IDP_EXECUTION_FAILURE:
            return "idp-execution-failure";
        case IDP_LOAD_FAILURE:
            return "idp-load-failure";
        case IDP_NEED_LOGIN:
            return "idp-need-login";
        case IDP_TIMEOUT:
            return "idp-timeout";
        case IDP_TLS_FAILURE:
            return "idp-tls-failure";
        case IDP_TOKEN_EXPIRED:
            return "idp-token-expired";
        case IDP_TOKEN_INVALID:
            return "idp-token-invalid";
        default:
            return "idp-bad-script-failure"; // fallback to first value
    }
}

RTCPriorityType::Value RTCPriorityType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "very-low", strlen("very-low"))) {
        return VERY_LOW;
    }
    else if (__builtin_strncmp(str, "low", strlen("low"))) {
        return LOW;
    }
    else if (__builtin_strncmp(str, "medium", strlen("medium"))) {
        return MEDIUM;
    }
    else if (__builtin_strncmp(str, "high", strlen("high"))) {
        return HIGH;
    }
    else {
        // Default to first value for invalid input
        return VERY_LOW;
    }
}

RTCPriorityType::RTCPriorityType(Value v) noexcept : emlite::Val(RTCPriorityType::to_string(v)), value_(v) {}
RTCPriorityType::RTCPriorityType(Handle h) noexcept: emlite::Val(h) {
    value_ = RTCPriorityType::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCPriorityType::RTCPriorityType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RTCPriorityType::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCPriorityType RTCPriorityType::take_ownership(Handle h) noexcept { return RTCPriorityType(h); }
RTCPriorityType RTCPriorityType::clone() const noexcept { return *this; }
const char* RTCPriorityType::to_string(RTCPriorityType::Value value_) noexcept {
    switch (value_) {
        case VERY_LOW:
            return "very-low";
        case LOW:
            return "low";
        case MEDIUM:
            return "medium";
        case HIGH:
            return "high";
        default:
            return "very-low"; // fallback to first value
    }
}

RTCStatsType::Value RTCStatsType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "codec", strlen("codec"))) {
        return CODEC;
    }
    else if (__builtin_strncmp(str, "inbound-rtp", strlen("inbound-rtp"))) {
        return INBOUND_RTP;
    }
    else if (__builtin_strncmp(str, "outbound-rtp", strlen("outbound-rtp"))) {
        return OUTBOUND_RTP;
    }
    else if (__builtin_strncmp(str, "remote-inbound-rtp", strlen("remote-inbound-rtp"))) {
        return REMOTE_INBOUND_RTP;
    }
    else if (__builtin_strncmp(str, "remote-outbound-rtp", strlen("remote-outbound-rtp"))) {
        return REMOTE_OUTBOUND_RTP;
    }
    else if (__builtin_strncmp(str, "media-source", strlen("media-source"))) {
        return MEDIA_SOURCE;
    }
    else if (__builtin_strncmp(str, "media-playout", strlen("media-playout"))) {
        return MEDIA_PLAYOUT;
    }
    else if (__builtin_strncmp(str, "peer-connection", strlen("peer-connection"))) {
        return PEER_CONNECTION;
    }
    else if (__builtin_strncmp(str, "data-channel", strlen("data-channel"))) {
        return DATA_CHANNEL;
    }
    else if (__builtin_strncmp(str, "transport", strlen("transport"))) {
        return TRANSPORT;
    }
    else if (__builtin_strncmp(str, "candidate-pair", strlen("candidate-pair"))) {
        return CANDIDATE_PAIR;
    }
    else if (__builtin_strncmp(str, "local-candidate", strlen("local-candidate"))) {
        return LOCAL_CANDIDATE;
    }
    else if (__builtin_strncmp(str, "remote-candidate", strlen("remote-candidate"))) {
        return REMOTE_CANDIDATE;
    }
    else if (__builtin_strncmp(str, "certificate", strlen("certificate"))) {
        return CERTIFICATE;
    }
    else {
        // Default to first value for invalid input
        return CODEC;
    }
}

RTCStatsType::RTCStatsType(Value v) noexcept : emlite::Val(RTCStatsType::to_string(v)), value_(v) {}
RTCStatsType::RTCStatsType(Handle h) noexcept: emlite::Val(h) {
    value_ = RTCStatsType::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCStatsType::RTCStatsType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RTCStatsType::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCStatsType RTCStatsType::take_ownership(Handle h) noexcept { return RTCStatsType(h); }
RTCStatsType RTCStatsType::clone() const noexcept { return *this; }
const char* RTCStatsType::to_string(RTCStatsType::Value value_) noexcept {
    switch (value_) {
        case CODEC:
            return "codec";
        case INBOUND_RTP:
            return "inbound-rtp";
        case OUTBOUND_RTP:
            return "outbound-rtp";
        case REMOTE_INBOUND_RTP:
            return "remote-inbound-rtp";
        case REMOTE_OUTBOUND_RTP:
            return "remote-outbound-rtp";
        case MEDIA_SOURCE:
            return "media-source";
        case MEDIA_PLAYOUT:
            return "media-playout";
        case PEER_CONNECTION:
            return "peer-connection";
        case DATA_CHANNEL:
            return "data-channel";
        case TRANSPORT:
            return "transport";
        case CANDIDATE_PAIR:
            return "candidate-pair";
        case LOCAL_CANDIDATE:
            return "local-candidate";
        case REMOTE_CANDIDATE:
            return "remote-candidate";
        case CERTIFICATE:
            return "certificate";
        default:
            return "codec"; // fallback to first value
    }
}

RTCQualityLimitationReason::Value RTCQualityLimitationReason::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "none", strlen("none"))) {
        return NONE;
    }
    else if (__builtin_strncmp(str, "cpu", strlen("cpu"))) {
        return CPU;
    }
    else if (__builtin_strncmp(str, "bandwidth", strlen("bandwidth"))) {
        return BANDWIDTH;
    }
    else if (__builtin_strncmp(str, "other", strlen("other"))) {
        return OTHER;
    }
    else {
        // Default to first value for invalid input
        return NONE;
    }
}

RTCQualityLimitationReason::RTCQualityLimitationReason(Value v) noexcept : emlite::Val(RTCQualityLimitationReason::to_string(v)), value_(v) {}
RTCQualityLimitationReason::RTCQualityLimitationReason(Handle h) noexcept: emlite::Val(h) {
    value_ = RTCQualityLimitationReason::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCQualityLimitationReason::RTCQualityLimitationReason(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RTCQualityLimitationReason::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCQualityLimitationReason RTCQualityLimitationReason::take_ownership(Handle h) noexcept { return RTCQualityLimitationReason(h); }
RTCQualityLimitationReason RTCQualityLimitationReason::clone() const noexcept { return *this; }
const char* RTCQualityLimitationReason::to_string(RTCQualityLimitationReason::Value value_) noexcept {
    switch (value_) {
        case NONE:
            return "none";
        case CPU:
            return "cpu";
        case BANDWIDTH:
            return "bandwidth";
        case OTHER:
            return "other";
        default:
            return "none"; // fallback to first value
    }
}

RTCDtlsRole::Value RTCDtlsRole::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "client", strlen("client"))) {
        return CLIENT;
    }
    else if (__builtin_strncmp(str, "server", strlen("server"))) {
        return SERVER;
    }
    else if (__builtin_strncmp(str, "unknown", strlen("unknown"))) {
        return UNKNOWN;
    }
    else {
        // Default to first value for invalid input
        return CLIENT;
    }
}

RTCDtlsRole::RTCDtlsRole(Value v) noexcept : emlite::Val(RTCDtlsRole::to_string(v)), value_(v) {}
RTCDtlsRole::RTCDtlsRole(Handle h) noexcept: emlite::Val(h) {
    value_ = RTCDtlsRole::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCDtlsRole::RTCDtlsRole(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RTCDtlsRole::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCDtlsRole RTCDtlsRole::take_ownership(Handle h) noexcept { return RTCDtlsRole(h); }
RTCDtlsRole RTCDtlsRole::clone() const noexcept { return *this; }
const char* RTCDtlsRole::to_string(RTCDtlsRole::Value value_) noexcept {
    switch (value_) {
        case CLIENT:
            return "client";
        case SERVER:
            return "server";
        case UNKNOWN:
            return "unknown";
        default:
            return "client"; // fallback to first value
    }
}

RTCStatsIceCandidatePairState::Value RTCStatsIceCandidatePairState::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "frozen", strlen("frozen"))) {
        return FROZEN;
    }
    else if (__builtin_strncmp(str, "waiting", strlen("waiting"))) {
        return WAITING;
    }
    else if (__builtin_strncmp(str, "in-progress", strlen("in-progress"))) {
        return IN_PROGRESS;
    }
    else if (__builtin_strncmp(str, "failed", strlen("failed"))) {
        return FAILED;
    }
    else if (__builtin_strncmp(str, "succeeded", strlen("succeeded"))) {
        return SUCCEEDED;
    }
    else {
        // Default to first value for invalid input
        return FROZEN;
    }
}

RTCStatsIceCandidatePairState::RTCStatsIceCandidatePairState(Value v) noexcept : emlite::Val(RTCStatsIceCandidatePairState::to_string(v)), value_(v) {}
RTCStatsIceCandidatePairState::RTCStatsIceCandidatePairState(Handle h) noexcept: emlite::Val(h) {
    value_ = RTCStatsIceCandidatePairState::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCStatsIceCandidatePairState::RTCStatsIceCandidatePairState(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RTCStatsIceCandidatePairState::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCStatsIceCandidatePairState RTCStatsIceCandidatePairState::take_ownership(Handle h) noexcept { return RTCStatsIceCandidatePairState(h); }
RTCStatsIceCandidatePairState RTCStatsIceCandidatePairState::clone() const noexcept { return *this; }
const char* RTCStatsIceCandidatePairState::to_string(RTCStatsIceCandidatePairState::Value value_) noexcept {
    switch (value_) {
        case FROZEN:
            return "frozen";
        case WAITING:
            return "waiting";
        case IN_PROGRESS:
            return "in-progress";
        case FAILED:
            return "failed";
        case SUCCEEDED:
            return "succeeded";
        default:
            return "frozen"; // fallback to first value
    }
}

RTCIceTransportPolicy::Value RTCIceTransportPolicy::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "relay", strlen("relay"))) {
        return RELAY;
    }
    else if (__builtin_strncmp(str, "all", strlen("all"))) {
        return ALL;
    }
    else {
        // Default to first value for invalid input
        return RELAY;
    }
}

RTCIceTransportPolicy::RTCIceTransportPolicy(Value v) noexcept : emlite::Val(RTCIceTransportPolicy::to_string(v)), value_(v) {}
RTCIceTransportPolicy::RTCIceTransportPolicy(Handle h) noexcept: emlite::Val(h) {
    value_ = RTCIceTransportPolicy::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCIceTransportPolicy::RTCIceTransportPolicy(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RTCIceTransportPolicy::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCIceTransportPolicy RTCIceTransportPolicy::take_ownership(Handle h) noexcept { return RTCIceTransportPolicy(h); }
RTCIceTransportPolicy RTCIceTransportPolicy::clone() const noexcept { return *this; }
const char* RTCIceTransportPolicy::to_string(RTCIceTransportPolicy::Value value_) noexcept {
    switch (value_) {
        case RELAY:
            return "relay";
        case ALL:
            return "all";
        default:
            return "relay"; // fallback to first value
    }
}

RTCBundlePolicy::Value RTCBundlePolicy::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "balanced", strlen("balanced"))) {
        return BALANCED;
    }
    else if (__builtin_strncmp(str, "max-compat", strlen("max-compat"))) {
        return MAX_COMPAT;
    }
    else if (__builtin_strncmp(str, "max-bundle", strlen("max-bundle"))) {
        return MAX_BUNDLE;
    }
    else {
        // Default to first value for invalid input
        return BALANCED;
    }
}

RTCBundlePolicy::RTCBundlePolicy(Value v) noexcept : emlite::Val(RTCBundlePolicy::to_string(v)), value_(v) {}
RTCBundlePolicy::RTCBundlePolicy(Handle h) noexcept: emlite::Val(h) {
    value_ = RTCBundlePolicy::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCBundlePolicy::RTCBundlePolicy(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RTCBundlePolicy::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCBundlePolicy RTCBundlePolicy::take_ownership(Handle h) noexcept { return RTCBundlePolicy(h); }
RTCBundlePolicy RTCBundlePolicy::clone() const noexcept { return *this; }
const char* RTCBundlePolicy::to_string(RTCBundlePolicy::Value value_) noexcept {
    switch (value_) {
        case BALANCED:
            return "balanced";
        case MAX_COMPAT:
            return "max-compat";
        case MAX_BUNDLE:
            return "max-bundle";
        default:
            return "balanced"; // fallback to first value
    }
}

RTCRtcpMuxPolicy::Value RTCRtcpMuxPolicy::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "require", strlen("require"))) {
        return REQUIRE;
    }
    else {
        // Default to first value for invalid input
        return REQUIRE;
    }
}

RTCRtcpMuxPolicy::RTCRtcpMuxPolicy(Value v) noexcept : emlite::Val(RTCRtcpMuxPolicy::to_string(v)), value_(v) {}
RTCRtcpMuxPolicy::RTCRtcpMuxPolicy(Handle h) noexcept: emlite::Val(h) {
    value_ = RTCRtcpMuxPolicy::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCRtcpMuxPolicy::RTCRtcpMuxPolicy(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RTCRtcpMuxPolicy::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCRtcpMuxPolicy RTCRtcpMuxPolicy::take_ownership(Handle h) noexcept { return RTCRtcpMuxPolicy(h); }
RTCRtcpMuxPolicy RTCRtcpMuxPolicy::clone() const noexcept { return *this; }
const char* RTCRtcpMuxPolicy::to_string(RTCRtcpMuxPolicy::Value value_) noexcept {
    switch (value_) {
        case REQUIRE:
            return "require";
        default:
            return "require"; // fallback to first value
    }
}

RTCSignalingState::Value RTCSignalingState::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "stable", strlen("stable"))) {
        return STABLE;
    }
    else if (__builtin_strncmp(str, "have-local-offer", strlen("have-local-offer"))) {
        return HAVE_LOCAL_OFFER;
    }
    else if (__builtin_strncmp(str, "have-remote-offer", strlen("have-remote-offer"))) {
        return HAVE_REMOTE_OFFER;
    }
    else if (__builtin_strncmp(str, "have-local-pranswer", strlen("have-local-pranswer"))) {
        return HAVE_LOCAL_PRANSWER;
    }
    else if (__builtin_strncmp(str, "have-remote-pranswer", strlen("have-remote-pranswer"))) {
        return HAVE_REMOTE_PRANSWER;
    }
    else if (__builtin_strncmp(str, "closed", strlen("closed"))) {
        return CLOSED;
    }
    else {
        // Default to first value for invalid input
        return STABLE;
    }
}

RTCSignalingState::RTCSignalingState(Value v) noexcept : emlite::Val(RTCSignalingState::to_string(v)), value_(v) {}
RTCSignalingState::RTCSignalingState(Handle h) noexcept: emlite::Val(h) {
    value_ = RTCSignalingState::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCSignalingState::RTCSignalingState(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RTCSignalingState::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCSignalingState RTCSignalingState::take_ownership(Handle h) noexcept { return RTCSignalingState(h); }
RTCSignalingState RTCSignalingState::clone() const noexcept { return *this; }
const char* RTCSignalingState::to_string(RTCSignalingState::Value value_) noexcept {
    switch (value_) {
        case STABLE:
            return "stable";
        case HAVE_LOCAL_OFFER:
            return "have-local-offer";
        case HAVE_REMOTE_OFFER:
            return "have-remote-offer";
        case HAVE_LOCAL_PRANSWER:
            return "have-local-pranswer";
        case HAVE_REMOTE_PRANSWER:
            return "have-remote-pranswer";
        case CLOSED:
            return "closed";
        default:
            return "stable"; // fallback to first value
    }
}

RTCIceGatheringState::Value RTCIceGatheringState::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "new", strlen("new"))) {
        return NEW_;
    }
    else if (__builtin_strncmp(str, "gathering", strlen("gathering"))) {
        return GATHERING;
    }
    else if (__builtin_strncmp(str, "complete", strlen("complete"))) {
        return COMPLETE;
    }
    else {
        // Default to first value for invalid input
        return NEW_;
    }
}

RTCIceGatheringState::RTCIceGatheringState(Value v) noexcept : emlite::Val(RTCIceGatheringState::to_string(v)), value_(v) {}
RTCIceGatheringState::RTCIceGatheringState(Handle h) noexcept: emlite::Val(h) {
    value_ = RTCIceGatheringState::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCIceGatheringState::RTCIceGatheringState(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RTCIceGatheringState::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCIceGatheringState RTCIceGatheringState::take_ownership(Handle h) noexcept { return RTCIceGatheringState(h); }
RTCIceGatheringState RTCIceGatheringState::clone() const noexcept { return *this; }
const char* RTCIceGatheringState::to_string(RTCIceGatheringState::Value value_) noexcept {
    switch (value_) {
        case NEW_:
            return "new";
        case GATHERING:
            return "gathering";
        case COMPLETE:
            return "complete";
        default:
            return "new"; // fallback to first value
    }
}

RTCPeerConnectionState::Value RTCPeerConnectionState::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "closed", strlen("closed"))) {
        return CLOSED;
    }
    else if (__builtin_strncmp(str, "failed", strlen("failed"))) {
        return FAILED;
    }
    else if (__builtin_strncmp(str, "disconnected", strlen("disconnected"))) {
        return DISCONNECTED;
    }
    else if (__builtin_strncmp(str, "new", strlen("new"))) {
        return NEW_;
    }
    else if (__builtin_strncmp(str, "connecting", strlen("connecting"))) {
        return CONNECTING;
    }
    else if (__builtin_strncmp(str, "connected", strlen("connected"))) {
        return CONNECTED;
    }
    else {
        // Default to first value for invalid input
        return CLOSED;
    }
}

RTCPeerConnectionState::RTCPeerConnectionState(Value v) noexcept : emlite::Val(RTCPeerConnectionState::to_string(v)), value_(v) {}
RTCPeerConnectionState::RTCPeerConnectionState(Handle h) noexcept: emlite::Val(h) {
    value_ = RTCPeerConnectionState::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCPeerConnectionState::RTCPeerConnectionState(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RTCPeerConnectionState::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCPeerConnectionState RTCPeerConnectionState::take_ownership(Handle h) noexcept { return RTCPeerConnectionState(h); }
RTCPeerConnectionState RTCPeerConnectionState::clone() const noexcept { return *this; }
const char* RTCPeerConnectionState::to_string(RTCPeerConnectionState::Value value_) noexcept {
    switch (value_) {
        case CLOSED:
            return "closed";
        case FAILED:
            return "failed";
        case DISCONNECTED:
            return "disconnected";
        case NEW_:
            return "new";
        case CONNECTING:
            return "connecting";
        case CONNECTED:
            return "connected";
        default:
            return "closed"; // fallback to first value
    }
}

RTCIceConnectionState::Value RTCIceConnectionState::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "closed", strlen("closed"))) {
        return CLOSED;
    }
    else if (__builtin_strncmp(str, "failed", strlen("failed"))) {
        return FAILED;
    }
    else if (__builtin_strncmp(str, "disconnected", strlen("disconnected"))) {
        return DISCONNECTED;
    }
    else if (__builtin_strncmp(str, "new", strlen("new"))) {
        return NEW_;
    }
    else if (__builtin_strncmp(str, "checking", strlen("checking"))) {
        return CHECKING;
    }
    else if (__builtin_strncmp(str, "completed", strlen("completed"))) {
        return COMPLETED;
    }
    else if (__builtin_strncmp(str, "connected", strlen("connected"))) {
        return CONNECTED;
    }
    else {
        // Default to first value for invalid input
        return CLOSED;
    }
}

RTCIceConnectionState::RTCIceConnectionState(Value v) noexcept : emlite::Val(RTCIceConnectionState::to_string(v)), value_(v) {}
RTCIceConnectionState::RTCIceConnectionState(Handle h) noexcept: emlite::Val(h) {
    value_ = RTCIceConnectionState::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCIceConnectionState::RTCIceConnectionState(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RTCIceConnectionState::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCIceConnectionState RTCIceConnectionState::take_ownership(Handle h) noexcept { return RTCIceConnectionState(h); }
RTCIceConnectionState RTCIceConnectionState::clone() const noexcept { return *this; }
const char* RTCIceConnectionState::to_string(RTCIceConnectionState::Value value_) noexcept {
    switch (value_) {
        case CLOSED:
            return "closed";
        case FAILED:
            return "failed";
        case DISCONNECTED:
            return "disconnected";
        case NEW_:
            return "new";
        case CHECKING:
            return "checking";
        case COMPLETED:
            return "completed";
        case CONNECTED:
            return "connected";
        default:
            return "closed"; // fallback to first value
    }
}

RTCSdpType::Value RTCSdpType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "offer", strlen("offer"))) {
        return OFFER;
    }
    else if (__builtin_strncmp(str, "pranswer", strlen("pranswer"))) {
        return PRANSWER;
    }
    else if (__builtin_strncmp(str, "answer", strlen("answer"))) {
        return ANSWER;
    }
    else if (__builtin_strncmp(str, "rollback", strlen("rollback"))) {
        return ROLLBACK;
    }
    else {
        // Default to first value for invalid input
        return OFFER;
    }
}

RTCSdpType::RTCSdpType(Value v) noexcept : emlite::Val(RTCSdpType::to_string(v)), value_(v) {}
RTCSdpType::RTCSdpType(Handle h) noexcept: emlite::Val(h) {
    value_ = RTCSdpType::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCSdpType::RTCSdpType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RTCSdpType::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCSdpType RTCSdpType::take_ownership(Handle h) noexcept { return RTCSdpType(h); }
RTCSdpType RTCSdpType::clone() const noexcept { return *this; }
const char* RTCSdpType::to_string(RTCSdpType::Value value_) noexcept {
    switch (value_) {
        case OFFER:
            return "offer";
        case PRANSWER:
            return "pranswer";
        case ANSWER:
            return "answer";
        case ROLLBACK:
            return "rollback";
        default:
            return "offer"; // fallback to first value
    }
}

RTCIceProtocol::Value RTCIceProtocol::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "udp", strlen("udp"))) {
        return UDP;
    }
    else if (__builtin_strncmp(str, "tcp", strlen("tcp"))) {
        return TCP;
    }
    else {
        // Default to first value for invalid input
        return UDP;
    }
}

RTCIceProtocol::RTCIceProtocol(Value v) noexcept : emlite::Val(RTCIceProtocol::to_string(v)), value_(v) {}
RTCIceProtocol::RTCIceProtocol(Handle h) noexcept: emlite::Val(h) {
    value_ = RTCIceProtocol::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCIceProtocol::RTCIceProtocol(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RTCIceProtocol::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCIceProtocol RTCIceProtocol::take_ownership(Handle h) noexcept { return RTCIceProtocol(h); }
RTCIceProtocol RTCIceProtocol::clone() const noexcept { return *this; }
const char* RTCIceProtocol::to_string(RTCIceProtocol::Value value_) noexcept {
    switch (value_) {
        case UDP:
            return "udp";
        case TCP:
            return "tcp";
        default:
            return "udp"; // fallback to first value
    }
}

RTCIceTcpCandidateType::Value RTCIceTcpCandidateType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "active", strlen("active"))) {
        return ACTIVE;
    }
    else if (__builtin_strncmp(str, "passive", strlen("passive"))) {
        return PASSIVE;
    }
    else if (__builtin_strncmp(str, "so", strlen("so"))) {
        return SO;
    }
    else {
        // Default to first value for invalid input
        return ACTIVE;
    }
}

RTCIceTcpCandidateType::RTCIceTcpCandidateType(Value v) noexcept : emlite::Val(RTCIceTcpCandidateType::to_string(v)), value_(v) {}
RTCIceTcpCandidateType::RTCIceTcpCandidateType(Handle h) noexcept: emlite::Val(h) {
    value_ = RTCIceTcpCandidateType::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCIceTcpCandidateType::RTCIceTcpCandidateType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RTCIceTcpCandidateType::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCIceTcpCandidateType RTCIceTcpCandidateType::take_ownership(Handle h) noexcept { return RTCIceTcpCandidateType(h); }
RTCIceTcpCandidateType RTCIceTcpCandidateType::clone() const noexcept { return *this; }
const char* RTCIceTcpCandidateType::to_string(RTCIceTcpCandidateType::Value value_) noexcept {
    switch (value_) {
        case ACTIVE:
            return "active";
        case PASSIVE:
            return "passive";
        case SO:
            return "so";
        default:
            return "active"; // fallback to first value
    }
}

RTCIceCandidateType::Value RTCIceCandidateType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "host", strlen("host"))) {
        return HOST;
    }
    else if (__builtin_strncmp(str, "srflx", strlen("srflx"))) {
        return SRFLX;
    }
    else if (__builtin_strncmp(str, "prflx", strlen("prflx"))) {
        return PRFLX;
    }
    else if (__builtin_strncmp(str, "relay", strlen("relay"))) {
        return RELAY;
    }
    else {
        // Default to first value for invalid input
        return HOST;
    }
}

RTCIceCandidateType::RTCIceCandidateType(Value v) noexcept : emlite::Val(RTCIceCandidateType::to_string(v)), value_(v) {}
RTCIceCandidateType::RTCIceCandidateType(Handle h) noexcept: emlite::Val(h) {
    value_ = RTCIceCandidateType::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCIceCandidateType::RTCIceCandidateType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RTCIceCandidateType::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCIceCandidateType RTCIceCandidateType::take_ownership(Handle h) noexcept { return RTCIceCandidateType(h); }
RTCIceCandidateType RTCIceCandidateType::clone() const noexcept { return *this; }
const char* RTCIceCandidateType::to_string(RTCIceCandidateType::Value value_) noexcept {
    switch (value_) {
        case HOST:
            return "host";
        case SRFLX:
            return "srflx";
        case PRFLX:
            return "prflx";
        case RELAY:
            return "relay";
        default:
            return "host"; // fallback to first value
    }
}

RTCIceServerTransportProtocol::Value RTCIceServerTransportProtocol::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "udp", strlen("udp"))) {
        return UDP;
    }
    else if (__builtin_strncmp(str, "tcp", strlen("tcp"))) {
        return TCP;
    }
    else if (__builtin_strncmp(str, "tls", strlen("tls"))) {
        return TLS;
    }
    else {
        // Default to first value for invalid input
        return UDP;
    }
}

RTCIceServerTransportProtocol::RTCIceServerTransportProtocol(Value v) noexcept : emlite::Val(RTCIceServerTransportProtocol::to_string(v)), value_(v) {}
RTCIceServerTransportProtocol::RTCIceServerTransportProtocol(Handle h) noexcept: emlite::Val(h) {
    value_ = RTCIceServerTransportProtocol::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCIceServerTransportProtocol::RTCIceServerTransportProtocol(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RTCIceServerTransportProtocol::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCIceServerTransportProtocol RTCIceServerTransportProtocol::take_ownership(Handle h) noexcept { return RTCIceServerTransportProtocol(h); }
RTCIceServerTransportProtocol RTCIceServerTransportProtocol::clone() const noexcept { return *this; }
const char* RTCIceServerTransportProtocol::to_string(RTCIceServerTransportProtocol::Value value_) noexcept {
    switch (value_) {
        case UDP:
            return "udp";
        case TCP:
            return "tcp";
        case TLS:
            return "tls";
        default:
            return "udp"; // fallback to first value
    }
}

RTCRtpTransceiverDirection::Value RTCRtpTransceiverDirection::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "sendrecv", strlen("sendrecv"))) {
        return SENDRECV;
    }
    else if (__builtin_strncmp(str, "sendonly", strlen("sendonly"))) {
        return SENDONLY;
    }
    else if (__builtin_strncmp(str, "recvonly", strlen("recvonly"))) {
        return RECVONLY;
    }
    else if (__builtin_strncmp(str, "inactive", strlen("inactive"))) {
        return INACTIVE;
    }
    else if (__builtin_strncmp(str, "stopped", strlen("stopped"))) {
        return STOPPED;
    }
    else {
        // Default to first value for invalid input
        return SENDRECV;
    }
}

RTCRtpTransceiverDirection::RTCRtpTransceiverDirection(Value v) noexcept : emlite::Val(RTCRtpTransceiverDirection::to_string(v)), value_(v) {}
RTCRtpTransceiverDirection::RTCRtpTransceiverDirection(Handle h) noexcept: emlite::Val(h) {
    value_ = RTCRtpTransceiverDirection::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCRtpTransceiverDirection::RTCRtpTransceiverDirection(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RTCRtpTransceiverDirection::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCRtpTransceiverDirection RTCRtpTransceiverDirection::take_ownership(Handle h) noexcept { return RTCRtpTransceiverDirection(h); }
RTCRtpTransceiverDirection RTCRtpTransceiverDirection::clone() const noexcept { return *this; }
const char* RTCRtpTransceiverDirection::to_string(RTCRtpTransceiverDirection::Value value_) noexcept {
    switch (value_) {
        case SENDRECV:
            return "sendrecv";
        case SENDONLY:
            return "sendonly";
        case RECVONLY:
            return "recvonly";
        case INACTIVE:
            return "inactive";
        case STOPPED:
            return "stopped";
        default:
            return "sendrecv"; // fallback to first value
    }
}

RTCDtlsTransportState::Value RTCDtlsTransportState::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "new", strlen("new"))) {
        return NEW_;
    }
    else if (__builtin_strncmp(str, "connecting", strlen("connecting"))) {
        return CONNECTING;
    }
    else if (__builtin_strncmp(str, "connected", strlen("connected"))) {
        return CONNECTED;
    }
    else if (__builtin_strncmp(str, "closed", strlen("closed"))) {
        return CLOSED;
    }
    else if (__builtin_strncmp(str, "failed", strlen("failed"))) {
        return FAILED;
    }
    else {
        // Default to first value for invalid input
        return NEW_;
    }
}

RTCDtlsTransportState::RTCDtlsTransportState(Value v) noexcept : emlite::Val(RTCDtlsTransportState::to_string(v)), value_(v) {}
RTCDtlsTransportState::RTCDtlsTransportState(Handle h) noexcept: emlite::Val(h) {
    value_ = RTCDtlsTransportState::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCDtlsTransportState::RTCDtlsTransportState(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RTCDtlsTransportState::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCDtlsTransportState RTCDtlsTransportState::take_ownership(Handle h) noexcept { return RTCDtlsTransportState(h); }
RTCDtlsTransportState RTCDtlsTransportState::clone() const noexcept { return *this; }
const char* RTCDtlsTransportState::to_string(RTCDtlsTransportState::Value value_) noexcept {
    switch (value_) {
        case NEW_:
            return "new";
        case CONNECTING:
            return "connecting";
        case CONNECTED:
            return "connected";
        case CLOSED:
            return "closed";
        case FAILED:
            return "failed";
        default:
            return "new"; // fallback to first value
    }
}

RTCIceGathererState::Value RTCIceGathererState::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "new", strlen("new"))) {
        return NEW_;
    }
    else if (__builtin_strncmp(str, "gathering", strlen("gathering"))) {
        return GATHERING;
    }
    else if (__builtin_strncmp(str, "complete", strlen("complete"))) {
        return COMPLETE;
    }
    else {
        // Default to first value for invalid input
        return NEW_;
    }
}

RTCIceGathererState::RTCIceGathererState(Value v) noexcept : emlite::Val(RTCIceGathererState::to_string(v)), value_(v) {}
RTCIceGathererState::RTCIceGathererState(Handle h) noexcept: emlite::Val(h) {
    value_ = RTCIceGathererState::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCIceGathererState::RTCIceGathererState(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RTCIceGathererState::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCIceGathererState RTCIceGathererState::take_ownership(Handle h) noexcept { return RTCIceGathererState(h); }
RTCIceGathererState RTCIceGathererState::clone() const noexcept { return *this; }
const char* RTCIceGathererState::to_string(RTCIceGathererState::Value value_) noexcept {
    switch (value_) {
        case NEW_:
            return "new";
        case GATHERING:
            return "gathering";
        case COMPLETE:
            return "complete";
        default:
            return "new"; // fallback to first value
    }
}

RTCIceTransportState::Value RTCIceTransportState::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "closed", strlen("closed"))) {
        return CLOSED;
    }
    else if (__builtin_strncmp(str, "failed", strlen("failed"))) {
        return FAILED;
    }
    else if (__builtin_strncmp(str, "disconnected", strlen("disconnected"))) {
        return DISCONNECTED;
    }
    else if (__builtin_strncmp(str, "new", strlen("new"))) {
        return NEW_;
    }
    else if (__builtin_strncmp(str, "checking", strlen("checking"))) {
        return CHECKING;
    }
    else if (__builtin_strncmp(str, "completed", strlen("completed"))) {
        return COMPLETED;
    }
    else if (__builtin_strncmp(str, "connected", strlen("connected"))) {
        return CONNECTED;
    }
    else {
        // Default to first value for invalid input
        return CLOSED;
    }
}

RTCIceTransportState::RTCIceTransportState(Value v) noexcept : emlite::Val(RTCIceTransportState::to_string(v)), value_(v) {}
RTCIceTransportState::RTCIceTransportState(Handle h) noexcept: emlite::Val(h) {
    value_ = RTCIceTransportState::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCIceTransportState::RTCIceTransportState(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RTCIceTransportState::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCIceTransportState RTCIceTransportState::take_ownership(Handle h) noexcept { return RTCIceTransportState(h); }
RTCIceTransportState RTCIceTransportState::clone() const noexcept { return *this; }
const char* RTCIceTransportState::to_string(RTCIceTransportState::Value value_) noexcept {
    switch (value_) {
        case CLOSED:
            return "closed";
        case FAILED:
            return "failed";
        case DISCONNECTED:
            return "disconnected";
        case NEW_:
            return "new";
        case CHECKING:
            return "checking";
        case COMPLETED:
            return "completed";
        case CONNECTED:
            return "connected";
        default:
            return "closed"; // fallback to first value
    }
}

RTCIceRole::Value RTCIceRole::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "unknown", strlen("unknown"))) {
        return UNKNOWN;
    }
    else if (__builtin_strncmp(str, "controlling", strlen("controlling"))) {
        return CONTROLLING;
    }
    else if (__builtin_strncmp(str, "controlled", strlen("controlled"))) {
        return CONTROLLED;
    }
    else {
        // Default to first value for invalid input
        return UNKNOWN;
    }
}

RTCIceRole::RTCIceRole(Value v) noexcept : emlite::Val(RTCIceRole::to_string(v)), value_(v) {}
RTCIceRole::RTCIceRole(Handle h) noexcept: emlite::Val(h) {
    value_ = RTCIceRole::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCIceRole::RTCIceRole(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RTCIceRole::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCIceRole RTCIceRole::take_ownership(Handle h) noexcept { return RTCIceRole(h); }
RTCIceRole RTCIceRole::clone() const noexcept { return *this; }
const char* RTCIceRole::to_string(RTCIceRole::Value value_) noexcept {
    switch (value_) {
        case UNKNOWN:
            return "unknown";
        case CONTROLLING:
            return "controlling";
        case CONTROLLED:
            return "controlled";
        default:
            return "unknown"; // fallback to first value
    }
}

RTCIceComponent::Value RTCIceComponent::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "rtp", strlen("rtp"))) {
        return RTP;
    }
    else if (__builtin_strncmp(str, "rtcp", strlen("rtcp"))) {
        return RTCP;
    }
    else {
        // Default to first value for invalid input
        return RTP;
    }
}

RTCIceComponent::RTCIceComponent(Value v) noexcept : emlite::Val(RTCIceComponent::to_string(v)), value_(v) {}
RTCIceComponent::RTCIceComponent(Handle h) noexcept: emlite::Val(h) {
    value_ = RTCIceComponent::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCIceComponent::RTCIceComponent(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RTCIceComponent::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCIceComponent RTCIceComponent::take_ownership(Handle h) noexcept { return RTCIceComponent(h); }
RTCIceComponent RTCIceComponent::clone() const noexcept { return *this; }
const char* RTCIceComponent::to_string(RTCIceComponent::Value value_) noexcept {
    switch (value_) {
        case RTP:
            return "rtp";
        case RTCP:
            return "rtcp";
        default:
            return "rtp"; // fallback to first value
    }
}

RTCSctpTransportState::Value RTCSctpTransportState::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "connecting", strlen("connecting"))) {
        return CONNECTING;
    }
    else if (__builtin_strncmp(str, "connected", strlen("connected"))) {
        return CONNECTED;
    }
    else if (__builtin_strncmp(str, "closed", strlen("closed"))) {
        return CLOSED;
    }
    else {
        // Default to first value for invalid input
        return CONNECTING;
    }
}

RTCSctpTransportState::RTCSctpTransportState(Value v) noexcept : emlite::Val(RTCSctpTransportState::to_string(v)), value_(v) {}
RTCSctpTransportState::RTCSctpTransportState(Handle h) noexcept: emlite::Val(h) {
    value_ = RTCSctpTransportState::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCSctpTransportState::RTCSctpTransportState(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RTCSctpTransportState::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCSctpTransportState RTCSctpTransportState::take_ownership(Handle h) noexcept { return RTCSctpTransportState(h); }
RTCSctpTransportState RTCSctpTransportState::clone() const noexcept { return *this; }
const char* RTCSctpTransportState::to_string(RTCSctpTransportState::Value value_) noexcept {
    switch (value_) {
        case CONNECTING:
            return "connecting";
        case CONNECTED:
            return "connected";
        case CLOSED:
            return "closed";
        default:
            return "connecting"; // fallback to first value
    }
}

RTCDataChannelState::Value RTCDataChannelState::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "connecting", strlen("connecting"))) {
        return CONNECTING;
    }
    else if (__builtin_strncmp(str, "open", strlen("open"))) {
        return OPEN;
    }
    else if (__builtin_strncmp(str, "closing", strlen("closing"))) {
        return CLOSING;
    }
    else if (__builtin_strncmp(str, "closed", strlen("closed"))) {
        return CLOSED;
    }
    else {
        // Default to first value for invalid input
        return CONNECTING;
    }
}

RTCDataChannelState::RTCDataChannelState(Value v) noexcept : emlite::Val(RTCDataChannelState::to_string(v)), value_(v) {}
RTCDataChannelState::RTCDataChannelState(Handle h) noexcept: emlite::Val(h) {
    value_ = RTCDataChannelState::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCDataChannelState::RTCDataChannelState(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RTCDataChannelState::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCDataChannelState RTCDataChannelState::take_ownership(Handle h) noexcept { return RTCDataChannelState(h); }
RTCDataChannelState RTCDataChannelState::clone() const noexcept { return *this; }
const char* RTCDataChannelState::to_string(RTCDataChannelState::Value value_) noexcept {
    switch (value_) {
        case CONNECTING:
            return "connecting";
        case OPEN:
            return "open";
        case CLOSING:
            return "closing";
        case CLOSED:
            return "closed";
        default:
            return "connecting"; // fallback to first value
    }
}

RTCErrorDetailType::Value RTCErrorDetailType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "data-channel-failure", strlen("data-channel-failure"))) {
        return DATA_CHANNEL_FAILURE;
    }
    else if (__builtin_strncmp(str, "dtls-failure", strlen("dtls-failure"))) {
        return DTLS_FAILURE;
    }
    else if (__builtin_strncmp(str, "fingerprint-failure", strlen("fingerprint-failure"))) {
        return FINGERPRINT_FAILURE;
    }
    else if (__builtin_strncmp(str, "sctp-failure", strlen("sctp-failure"))) {
        return SCTP_FAILURE;
    }
    else if (__builtin_strncmp(str, "sdp-syntax-error", strlen("sdp-syntax-error"))) {
        return SDP_SYNTAX_ERROR;
    }
    else if (__builtin_strncmp(str, "hardware-encoder-not-available", strlen("hardware-encoder-not-available"))) {
        return HARDWARE_ENCODER_NOT_AVAILABLE;
    }
    else if (__builtin_strncmp(str, "hardware-encoder-error", strlen("hardware-encoder-error"))) {
        return HARDWARE_ENCODER_ERROR;
    }
    else {
        // Default to first value for invalid input
        return DATA_CHANNEL_FAILURE;
    }
}

RTCErrorDetailType::RTCErrorDetailType(Value v) noexcept : emlite::Val(RTCErrorDetailType::to_string(v)), value_(v) {}
RTCErrorDetailType::RTCErrorDetailType(Handle h) noexcept: emlite::Val(h) {
    value_ = RTCErrorDetailType::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCErrorDetailType::RTCErrorDetailType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RTCErrorDetailType::from_string(as<emlite::Uniq<char[]>>().get());
}

RTCErrorDetailType RTCErrorDetailType::take_ownership(Handle h) noexcept { return RTCErrorDetailType(h); }
RTCErrorDetailType RTCErrorDetailType::clone() const noexcept { return *this; }
const char* RTCErrorDetailType::to_string(RTCErrorDetailType::Value value_) noexcept {
    switch (value_) {
        case DATA_CHANNEL_FAILURE:
            return "data-channel-failure";
        case DTLS_FAILURE:
            return "dtls-failure";
        case FINGERPRINT_FAILURE:
            return "fingerprint-failure";
        case SCTP_FAILURE:
            return "sctp-failure";
        case SDP_SYNTAX_ERROR:
            return "sdp-syntax-error";
        case HARDWARE_ENCODER_NOT_AVAILABLE:
            return "hardware-encoder-not-available";
        case HARDWARE_ENCODER_ERROR:
            return "hardware-encoder-error";
        default:
            return "data-channel-failure"; // fallback to first value
    }
}

BinaryType::Value BinaryType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "blob", strlen("blob"))) {
        return BLOB;
    }
    else if (__builtin_strncmp(str, "arraybuffer", strlen("arraybuffer"))) {
        return ARRAYBUFFER;
    }
    else {
        // Default to first value for invalid input
        return BLOB;
    }
}

BinaryType::BinaryType(Value v) noexcept : emlite::Val(BinaryType::to_string(v)), value_(v) {}
BinaryType::BinaryType(Handle h) noexcept: emlite::Val(h) {
    value_ = BinaryType::from_string(as<emlite::Uniq<char[]>>().get());
}

BinaryType::BinaryType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = BinaryType::from_string(as<emlite::Uniq<char[]>>().get());
}

BinaryType BinaryType::take_ownership(Handle h) noexcept { return BinaryType(h); }
BinaryType BinaryType::clone() const noexcept { return *this; }
const char* BinaryType::to_string(BinaryType::Value value_) noexcept {
    switch (value_) {
        case BLOB:
            return "blob";
        case ARRAYBUFFER:
            return "arraybuffer";
        default:
            return "blob"; // fallback to first value
    }
}

WebTransportReliabilityMode::Value WebTransportReliabilityMode::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "pending", strlen("pending"))) {
        return PENDING;
    }
    else if (__builtin_strncmp(str, "reliable-only", strlen("reliable-only"))) {
        return RELIABLE_ONLY;
    }
    else if (__builtin_strncmp(str, "supports-unreliable", strlen("supports-unreliable"))) {
        return SUPPORTS_UNRELIABLE;
    }
    else {
        // Default to first value for invalid input
        return PENDING;
    }
}

WebTransportReliabilityMode::WebTransportReliabilityMode(Value v) noexcept : emlite::Val(WebTransportReliabilityMode::to_string(v)), value_(v) {}
WebTransportReliabilityMode::WebTransportReliabilityMode(Handle h) noexcept: emlite::Val(h) {
    value_ = WebTransportReliabilityMode::from_string(as<emlite::Uniq<char[]>>().get());
}

WebTransportReliabilityMode::WebTransportReliabilityMode(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = WebTransportReliabilityMode::from_string(as<emlite::Uniq<char[]>>().get());
}

WebTransportReliabilityMode WebTransportReliabilityMode::take_ownership(Handle h) noexcept { return WebTransportReliabilityMode(h); }
WebTransportReliabilityMode WebTransportReliabilityMode::clone() const noexcept { return *this; }
const char* WebTransportReliabilityMode::to_string(WebTransportReliabilityMode::Value value_) noexcept {
    switch (value_) {
        case PENDING:
            return "pending";
        case RELIABLE_ONLY:
            return "reliable-only";
        case SUPPORTS_UNRELIABLE:
            return "supports-unreliable";
        default:
            return "pending"; // fallback to first value
    }
}

WebTransportCongestionControl::Value WebTransportCongestionControl::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "default", strlen("default"))) {
        return DEFAULT_;
    }
    else if (__builtin_strncmp(str, "throughput", strlen("throughput"))) {
        return THROUGHPUT;
    }
    else if (__builtin_strncmp(str, "low-latency", strlen("low-latency"))) {
        return LOW_LATENCY;
    }
    else {
        // Default to first value for invalid input
        return DEFAULT_;
    }
}

WebTransportCongestionControl::WebTransportCongestionControl(Value v) noexcept : emlite::Val(WebTransportCongestionControl::to_string(v)), value_(v) {}
WebTransportCongestionControl::WebTransportCongestionControl(Handle h) noexcept: emlite::Val(h) {
    value_ = WebTransportCongestionControl::from_string(as<emlite::Uniq<char[]>>().get());
}

WebTransportCongestionControl::WebTransportCongestionControl(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = WebTransportCongestionControl::from_string(as<emlite::Uniq<char[]>>().get());
}

WebTransportCongestionControl WebTransportCongestionControl::take_ownership(Handle h) noexcept { return WebTransportCongestionControl(h); }
WebTransportCongestionControl WebTransportCongestionControl::clone() const noexcept { return *this; }
const char* WebTransportCongestionControl::to_string(WebTransportCongestionControl::Value value_) noexcept {
    switch (value_) {
        case DEFAULT_:
            return "default";
        case THROUGHPUT:
            return "throughput";
        case LOW_LATENCY:
            return "low-latency";
        default:
            return "default"; // fallback to first value
    }
}

WebTransportErrorSource::Value WebTransportErrorSource::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "stream", strlen("stream"))) {
        return STREAM;
    }
    else if (__builtin_strncmp(str, "session", strlen("session"))) {
        return SESSION;
    }
    else {
        // Default to first value for invalid input
        return STREAM;
    }
}

WebTransportErrorSource::WebTransportErrorSource(Value v) noexcept : emlite::Val(WebTransportErrorSource::to_string(v)), value_(v) {}
WebTransportErrorSource::WebTransportErrorSource(Handle h) noexcept: emlite::Val(h) {
    value_ = WebTransportErrorSource::from_string(as<emlite::Uniq<char[]>>().get());
}

WebTransportErrorSource::WebTransportErrorSource(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = WebTransportErrorSource::from_string(as<emlite::Uniq<char[]>>().get());
}

WebTransportErrorSource WebTransportErrorSource::take_ownership(Handle h) noexcept { return WebTransportErrorSource(h); }
WebTransportErrorSource WebTransportErrorSource::clone() const noexcept { return *this; }
const char* WebTransportErrorSource::to_string(WebTransportErrorSource::Value value_) noexcept {
    switch (value_) {
        case STREAM:
            return "stream";
        case SESSION:
            return "session";
        default:
            return "stream"; // fallback to first value
    }
}

USBTransferStatus::Value USBTransferStatus::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "ok", strlen("ok"))) {
        return OK;
    }
    else if (__builtin_strncmp(str, "stall", strlen("stall"))) {
        return STALL;
    }
    else if (__builtin_strncmp(str, "babble", strlen("babble"))) {
        return BABBLE;
    }
    else {
        // Default to first value for invalid input
        return OK;
    }
}

USBTransferStatus::USBTransferStatus(Value v) noexcept : emlite::Val(USBTransferStatus::to_string(v)), value_(v) {}
USBTransferStatus::USBTransferStatus(Handle h) noexcept: emlite::Val(h) {
    value_ = USBTransferStatus::from_string(as<emlite::Uniq<char[]>>().get());
}

USBTransferStatus::USBTransferStatus(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = USBTransferStatus::from_string(as<emlite::Uniq<char[]>>().get());
}

USBTransferStatus USBTransferStatus::take_ownership(Handle h) noexcept { return USBTransferStatus(h); }
USBTransferStatus USBTransferStatus::clone() const noexcept { return *this; }
const char* USBTransferStatus::to_string(USBTransferStatus::Value value_) noexcept {
    switch (value_) {
        case OK:
            return "ok";
        case STALL:
            return "stall";
        case BABBLE:
            return "babble";
        default:
            return "ok"; // fallback to first value
    }
}

USBRequestType::Value USBRequestType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "standard", strlen("standard"))) {
        return STANDARD;
    }
    else if (__builtin_strncmp(str, "class", strlen("class"))) {
        return CLASS_;
    }
    else if (__builtin_strncmp(str, "vendor", strlen("vendor"))) {
        return VENDOR;
    }
    else {
        // Default to first value for invalid input
        return STANDARD;
    }
}

USBRequestType::USBRequestType(Value v) noexcept : emlite::Val(USBRequestType::to_string(v)), value_(v) {}
USBRequestType::USBRequestType(Handle h) noexcept: emlite::Val(h) {
    value_ = USBRequestType::from_string(as<emlite::Uniq<char[]>>().get());
}

USBRequestType::USBRequestType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = USBRequestType::from_string(as<emlite::Uniq<char[]>>().get());
}

USBRequestType USBRequestType::take_ownership(Handle h) noexcept { return USBRequestType(h); }
USBRequestType USBRequestType::clone() const noexcept { return *this; }
const char* USBRequestType::to_string(USBRequestType::Value value_) noexcept {
    switch (value_) {
        case STANDARD:
            return "standard";
        case CLASS_:
            return "class";
        case VENDOR:
            return "vendor";
        default:
            return "standard"; // fallback to first value
    }
}

USBRecipient::Value USBRecipient::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "device", strlen("device"))) {
        return DEVICE;
    }
    else if (__builtin_strncmp(str, "interface", strlen("interface"))) {
        return INTERFACE;
    }
    else if (__builtin_strncmp(str, "endpoint", strlen("endpoint"))) {
        return ENDPOINT;
    }
    else if (__builtin_strncmp(str, "other", strlen("other"))) {
        return OTHER;
    }
    else {
        // Default to first value for invalid input
        return DEVICE;
    }
}

USBRecipient::USBRecipient(Value v) noexcept : emlite::Val(USBRecipient::to_string(v)), value_(v) {}
USBRecipient::USBRecipient(Handle h) noexcept: emlite::Val(h) {
    value_ = USBRecipient::from_string(as<emlite::Uniq<char[]>>().get());
}

USBRecipient::USBRecipient(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = USBRecipient::from_string(as<emlite::Uniq<char[]>>().get());
}

USBRecipient USBRecipient::take_ownership(Handle h) noexcept { return USBRecipient(h); }
USBRecipient USBRecipient::clone() const noexcept { return *this; }
const char* USBRecipient::to_string(USBRecipient::Value value_) noexcept {
    switch (value_) {
        case DEVICE:
            return "device";
        case INTERFACE:
            return "interface";
        case ENDPOINT:
            return "endpoint";
        case OTHER:
            return "other";
        default:
            return "device"; // fallback to first value
    }
}

USBDirection::Value USBDirection::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "in", strlen("in"))) {
        return IN;
    }
    else if (__builtin_strncmp(str, "out", strlen("out"))) {
        return OUT;
    }
    else {
        // Default to first value for invalid input
        return IN;
    }
}

USBDirection::USBDirection(Value v) noexcept : emlite::Val(USBDirection::to_string(v)), value_(v) {}
USBDirection::USBDirection(Handle h) noexcept: emlite::Val(h) {
    value_ = USBDirection::from_string(as<emlite::Uniq<char[]>>().get());
}

USBDirection::USBDirection(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = USBDirection::from_string(as<emlite::Uniq<char[]>>().get());
}

USBDirection USBDirection::take_ownership(Handle h) noexcept { return USBDirection(h); }
USBDirection USBDirection::clone() const noexcept { return *this; }
const char* USBDirection::to_string(USBDirection::Value value_) noexcept {
    switch (value_) {
        case IN:
            return "in";
        case OUT:
            return "out";
        default:
            return "in"; // fallback to first value
    }
}

USBEndpointType::Value USBEndpointType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "bulk", strlen("bulk"))) {
        return BULK;
    }
    else if (__builtin_strncmp(str, "interrupt", strlen("interrupt"))) {
        return INTERRUPT;
    }
    else if (__builtin_strncmp(str, "isochronous", strlen("isochronous"))) {
        return ISOCHRONOUS;
    }
    else {
        // Default to first value for invalid input
        return BULK;
    }
}

USBEndpointType::USBEndpointType(Value v) noexcept : emlite::Val(USBEndpointType::to_string(v)), value_(v) {}
USBEndpointType::USBEndpointType(Handle h) noexcept: emlite::Val(h) {
    value_ = USBEndpointType::from_string(as<emlite::Uniq<char[]>>().get());
}

USBEndpointType::USBEndpointType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = USBEndpointType::from_string(as<emlite::Uniq<char[]>>().get());
}

USBEndpointType USBEndpointType::take_ownership(Handle h) noexcept { return USBEndpointType(h); }
USBEndpointType USBEndpointType::clone() const noexcept { return *this; }
const char* USBEndpointType::to_string(USBEndpointType::Value value_) noexcept {
    switch (value_) {
        case BULK:
            return "bulk";
        case INTERRUPT:
            return "interrupt";
        case ISOCHRONOUS:
            return "isochronous";
        default:
            return "bulk"; // fallback to first value
    }
}

AutoKeyword::Value AutoKeyword::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "auto", strlen("auto"))) {
        return AUTO_;
    }
    else {
        // Default to first value for invalid input
        return AUTO_;
    }
}

AutoKeyword::AutoKeyword(Value v) noexcept : emlite::Val(AutoKeyword::to_string(v)), value_(v) {}
AutoKeyword::AutoKeyword(Handle h) noexcept: emlite::Val(h) {
    value_ = AutoKeyword::from_string(as<emlite::Uniq<char[]>>().get());
}

AutoKeyword::AutoKeyword(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = AutoKeyword::from_string(as<emlite::Uniq<char[]>>().get());
}

AutoKeyword AutoKeyword::take_ownership(Handle h) noexcept { return AutoKeyword(h); }
AutoKeyword AutoKeyword::clone() const noexcept { return *this; }
const char* AutoKeyword::to_string(AutoKeyword::Value value_) noexcept {
    switch (value_) {
        case AUTO_:
            return "auto";
        default:
            return "auto"; // fallback to first value
    }
}

DirectionSetting::Value DirectionSetting::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "", strlen(""))) {
        return NONE;
    }
    else if (__builtin_strncmp(str, "rl", strlen("rl"))) {
        return RL;
    }
    else if (__builtin_strncmp(str, "lr", strlen("lr"))) {
        return LR;
    }
    else {
        // Default to first value for invalid input
        return NONE;
    }
}

DirectionSetting::DirectionSetting(Value v) noexcept : emlite::Val(DirectionSetting::to_string(v)), value_(v) {}
DirectionSetting::DirectionSetting(Handle h) noexcept: emlite::Val(h) {
    value_ = DirectionSetting::from_string(as<emlite::Uniq<char[]>>().get());
}

DirectionSetting::DirectionSetting(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = DirectionSetting::from_string(as<emlite::Uniq<char[]>>().get());
}

DirectionSetting DirectionSetting::take_ownership(Handle h) noexcept { return DirectionSetting(h); }
DirectionSetting DirectionSetting::clone() const noexcept { return *this; }
const char* DirectionSetting::to_string(DirectionSetting::Value value_) noexcept {
    switch (value_) {
        case NONE:
            return "";
        case RL:
            return "rl";
        case LR:
            return "lr";
        default:
            return ""; // fallback to first value
    }
}

LineAlignSetting::Value LineAlignSetting::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "start", strlen("start"))) {
        return START;
    }
    else if (__builtin_strncmp(str, "center", strlen("center"))) {
        return CENTER;
    }
    else if (__builtin_strncmp(str, "end", strlen("end"))) {
        return END;
    }
    else {
        // Default to first value for invalid input
        return START;
    }
}

LineAlignSetting::LineAlignSetting(Value v) noexcept : emlite::Val(LineAlignSetting::to_string(v)), value_(v) {}
LineAlignSetting::LineAlignSetting(Handle h) noexcept: emlite::Val(h) {
    value_ = LineAlignSetting::from_string(as<emlite::Uniq<char[]>>().get());
}

LineAlignSetting::LineAlignSetting(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = LineAlignSetting::from_string(as<emlite::Uniq<char[]>>().get());
}

LineAlignSetting LineAlignSetting::take_ownership(Handle h) noexcept { return LineAlignSetting(h); }
LineAlignSetting LineAlignSetting::clone() const noexcept { return *this; }
const char* LineAlignSetting::to_string(LineAlignSetting::Value value_) noexcept {
    switch (value_) {
        case START:
            return "start";
        case CENTER:
            return "center";
        case END:
            return "end";
        default:
            return "start"; // fallback to first value
    }
}

PositionAlignSetting::Value PositionAlignSetting::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "line-left", strlen("line-left"))) {
        return LINE_LEFT;
    }
    else if (__builtin_strncmp(str, "center", strlen("center"))) {
        return CENTER;
    }
    else if (__builtin_strncmp(str, "line-right", strlen("line-right"))) {
        return LINE_RIGHT;
    }
    else if (__builtin_strncmp(str, "auto", strlen("auto"))) {
        return AUTO_;
    }
    else {
        // Default to first value for invalid input
        return LINE_LEFT;
    }
}

PositionAlignSetting::PositionAlignSetting(Value v) noexcept : emlite::Val(PositionAlignSetting::to_string(v)), value_(v) {}
PositionAlignSetting::PositionAlignSetting(Handle h) noexcept: emlite::Val(h) {
    value_ = PositionAlignSetting::from_string(as<emlite::Uniq<char[]>>().get());
}

PositionAlignSetting::PositionAlignSetting(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = PositionAlignSetting::from_string(as<emlite::Uniq<char[]>>().get());
}

PositionAlignSetting PositionAlignSetting::take_ownership(Handle h) noexcept { return PositionAlignSetting(h); }
PositionAlignSetting PositionAlignSetting::clone() const noexcept { return *this; }
const char* PositionAlignSetting::to_string(PositionAlignSetting::Value value_) noexcept {
    switch (value_) {
        case LINE_LEFT:
            return "line-left";
        case CENTER:
            return "center";
        case LINE_RIGHT:
            return "line-right";
        case AUTO_:
            return "auto";
        default:
            return "line-left"; // fallback to first value
    }
}

AlignSetting::Value AlignSetting::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "start", strlen("start"))) {
        return START;
    }
    else if (__builtin_strncmp(str, "center", strlen("center"))) {
        return CENTER;
    }
    else if (__builtin_strncmp(str, "end", strlen("end"))) {
        return END;
    }
    else if (__builtin_strncmp(str, "left", strlen("left"))) {
        return LEFT;
    }
    else if (__builtin_strncmp(str, "right", strlen("right"))) {
        return RIGHT;
    }
    else {
        // Default to first value for invalid input
        return START;
    }
}

AlignSetting::AlignSetting(Value v) noexcept : emlite::Val(AlignSetting::to_string(v)), value_(v) {}
AlignSetting::AlignSetting(Handle h) noexcept: emlite::Val(h) {
    value_ = AlignSetting::from_string(as<emlite::Uniq<char[]>>().get());
}

AlignSetting::AlignSetting(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = AlignSetting::from_string(as<emlite::Uniq<char[]>>().get());
}

AlignSetting AlignSetting::take_ownership(Handle h) noexcept { return AlignSetting(h); }
AlignSetting AlignSetting::clone() const noexcept { return *this; }
const char* AlignSetting::to_string(AlignSetting::Value value_) noexcept {
    switch (value_) {
        case START:
            return "start";
        case CENTER:
            return "center";
        case END:
            return "end";
        case LEFT:
            return "left";
        case RIGHT:
            return "right";
        default:
            return "start"; // fallback to first value
    }
}

ScrollSetting::Value ScrollSetting::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "", strlen(""))) {
        return NONE;
    }
    else if (__builtin_strncmp(str, "up", strlen("up"))) {
        return UP;
    }
    else {
        // Default to first value for invalid input
        return NONE;
    }
}

ScrollSetting::ScrollSetting(Value v) noexcept : emlite::Val(ScrollSetting::to_string(v)), value_(v) {}
ScrollSetting::ScrollSetting(Handle h) noexcept: emlite::Val(h) {
    value_ = ScrollSetting::from_string(as<emlite::Uniq<char[]>>().get());
}

ScrollSetting::ScrollSetting(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = ScrollSetting::from_string(as<emlite::Uniq<char[]>>().get());
}

ScrollSetting ScrollSetting::take_ownership(Handle h) noexcept { return ScrollSetting(h); }
ScrollSetting ScrollSetting::clone() const noexcept { return *this; }
const char* ScrollSetting::to_string(ScrollSetting::Value value_) noexcept {
    switch (value_) {
        case NONE:
            return "";
        case UP:
            return "up";
        default:
            return ""; // fallback to first value
    }
}

XREnvironmentBlendMode::Value XREnvironmentBlendMode::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "opaque", strlen("opaque"))) {
        return OPAQUE;
    }
    else if (__builtin_strncmp(str, "alpha-blend", strlen("alpha-blend"))) {
        return ALPHA_BLEND;
    }
    else if (__builtin_strncmp(str, "additive", strlen("additive"))) {
        return ADDITIVE;
    }
    else {
        // Default to first value for invalid input
        return OPAQUE;
    }
}

XREnvironmentBlendMode::XREnvironmentBlendMode(Value v) noexcept : emlite::Val(XREnvironmentBlendMode::to_string(v)), value_(v) {}
XREnvironmentBlendMode::XREnvironmentBlendMode(Handle h) noexcept: emlite::Val(h) {
    value_ = XREnvironmentBlendMode::from_string(as<emlite::Uniq<char[]>>().get());
}

XREnvironmentBlendMode::XREnvironmentBlendMode(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = XREnvironmentBlendMode::from_string(as<emlite::Uniq<char[]>>().get());
}

XREnvironmentBlendMode XREnvironmentBlendMode::take_ownership(Handle h) noexcept { return XREnvironmentBlendMode(h); }
XREnvironmentBlendMode XREnvironmentBlendMode::clone() const noexcept { return *this; }
const char* XREnvironmentBlendMode::to_string(XREnvironmentBlendMode::Value value_) noexcept {
    switch (value_) {
        case OPAQUE:
            return "opaque";
        case ALPHA_BLEND:
            return "alpha-blend";
        case ADDITIVE:
            return "additive";
        default:
            return "opaque"; // fallback to first value
    }
}

XRInteractionMode::Value XRInteractionMode::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "screen-space", strlen("screen-space"))) {
        return SCREEN_SPACE;
    }
    else if (__builtin_strncmp(str, "world-space", strlen("world-space"))) {
        return WORLD_SPACE;
    }
    else {
        // Default to first value for invalid input
        return SCREEN_SPACE;
    }
}

XRInteractionMode::XRInteractionMode(Value v) noexcept : emlite::Val(XRInteractionMode::to_string(v)), value_(v) {}
XRInteractionMode::XRInteractionMode(Handle h) noexcept: emlite::Val(h) {
    value_ = XRInteractionMode::from_string(as<emlite::Uniq<char[]>>().get());
}

XRInteractionMode::XRInteractionMode(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = XRInteractionMode::from_string(as<emlite::Uniq<char[]>>().get());
}

XRInteractionMode XRInteractionMode::take_ownership(Handle h) noexcept { return XRInteractionMode(h); }
XRInteractionMode XRInteractionMode::clone() const noexcept { return *this; }
const char* XRInteractionMode::to_string(XRInteractionMode::Value value_) noexcept {
    switch (value_) {
        case SCREEN_SPACE:
            return "screen-space";
        case WORLD_SPACE:
            return "world-space";
        default:
            return "screen-space"; // fallback to first value
    }
}

XRDepthType::Value XRDepthType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "raw", strlen("raw"))) {
        return RAW;
    }
    else if (__builtin_strncmp(str, "smooth", strlen("smooth"))) {
        return SMOOTH;
    }
    else {
        // Default to first value for invalid input
        return RAW;
    }
}

XRDepthType::XRDepthType(Value v) noexcept : emlite::Val(XRDepthType::to_string(v)), value_(v) {}
XRDepthType::XRDepthType(Handle h) noexcept: emlite::Val(h) {
    value_ = XRDepthType::from_string(as<emlite::Uniq<char[]>>().get());
}

XRDepthType::XRDepthType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = XRDepthType::from_string(as<emlite::Uniq<char[]>>().get());
}

XRDepthType XRDepthType::take_ownership(Handle h) noexcept { return XRDepthType(h); }
XRDepthType XRDepthType::clone() const noexcept { return *this; }
const char* XRDepthType::to_string(XRDepthType::Value value_) noexcept {
    switch (value_) {
        case RAW:
            return "raw";
        case SMOOTH:
            return "smooth";
        default:
            return "raw"; // fallback to first value
    }
}

XRDepthUsage::Value XRDepthUsage::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "cpu-optimized", strlen("cpu-optimized"))) {
        return CPU_OPTIMIZED;
    }
    else if (__builtin_strncmp(str, "gpu-optimized", strlen("gpu-optimized"))) {
        return GPU_OPTIMIZED;
    }
    else {
        // Default to first value for invalid input
        return CPU_OPTIMIZED;
    }
}

XRDepthUsage::XRDepthUsage(Value v) noexcept : emlite::Val(XRDepthUsage::to_string(v)), value_(v) {}
XRDepthUsage::XRDepthUsage(Handle h) noexcept: emlite::Val(h) {
    value_ = XRDepthUsage::from_string(as<emlite::Uniq<char[]>>().get());
}

XRDepthUsage::XRDepthUsage(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = XRDepthUsage::from_string(as<emlite::Uniq<char[]>>().get());
}

XRDepthUsage XRDepthUsage::take_ownership(Handle h) noexcept { return XRDepthUsage(h); }
XRDepthUsage XRDepthUsage::clone() const noexcept { return *this; }
const char* XRDepthUsage::to_string(XRDepthUsage::Value value_) noexcept {
    switch (value_) {
        case CPU_OPTIMIZED:
            return "cpu-optimized";
        case GPU_OPTIMIZED:
            return "gpu-optimized";
        default:
            return "cpu-optimized"; // fallback to first value
    }
}

XRDepthDataFormat::Value XRDepthDataFormat::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "luminance-alpha", strlen("luminance-alpha"))) {
        return LUMINANCE_ALPHA;
    }
    else if (__builtin_strncmp(str, "float32", strlen("float32"))) {
        return FLOAT32;
    }
    else if (__builtin_strncmp(str, "unsigned-short", strlen("unsigned-short"))) {
        return UNSIGNED_SHORT;
    }
    else {
        // Default to first value for invalid input
        return LUMINANCE_ALPHA;
    }
}

XRDepthDataFormat::XRDepthDataFormat(Value v) noexcept : emlite::Val(XRDepthDataFormat::to_string(v)), value_(v) {}
XRDepthDataFormat::XRDepthDataFormat(Handle h) noexcept: emlite::Val(h) {
    value_ = XRDepthDataFormat::from_string(as<emlite::Uniq<char[]>>().get());
}

XRDepthDataFormat::XRDepthDataFormat(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = XRDepthDataFormat::from_string(as<emlite::Uniq<char[]>>().get());
}

XRDepthDataFormat XRDepthDataFormat::take_ownership(Handle h) noexcept { return XRDepthDataFormat(h); }
XRDepthDataFormat XRDepthDataFormat::clone() const noexcept { return *this; }
const char* XRDepthDataFormat::to_string(XRDepthDataFormat::Value value_) noexcept {
    switch (value_) {
        case LUMINANCE_ALPHA:
            return "luminance-alpha";
        case FLOAT32:
            return "float32";
        case UNSIGNED_SHORT:
            return "unsigned-short";
        default:
            return "luminance-alpha"; // fallback to first value
    }
}

XRDOMOverlayType::Value XRDOMOverlayType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "screen", strlen("screen"))) {
        return SCREEN;
    }
    else if (__builtin_strncmp(str, "floating", strlen("floating"))) {
        return FLOATING;
    }
    else if (__builtin_strncmp(str, "head-locked", strlen("head-locked"))) {
        return HEAD_LOCKED;
    }
    else {
        // Default to first value for invalid input
        return SCREEN;
    }
}

XRDOMOverlayType::XRDOMOverlayType(Value v) noexcept : emlite::Val(XRDOMOverlayType::to_string(v)), value_(v) {}
XRDOMOverlayType::XRDOMOverlayType(Handle h) noexcept: emlite::Val(h) {
    value_ = XRDOMOverlayType::from_string(as<emlite::Uniq<char[]>>().get());
}

XRDOMOverlayType::XRDOMOverlayType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = XRDOMOverlayType::from_string(as<emlite::Uniq<char[]>>().get());
}

XRDOMOverlayType XRDOMOverlayType::take_ownership(Handle h) noexcept { return XRDOMOverlayType(h); }
XRDOMOverlayType XRDOMOverlayType::clone() const noexcept { return *this; }
const char* XRDOMOverlayType::to_string(XRDOMOverlayType::Value value_) noexcept {
    switch (value_) {
        case SCREEN:
            return "screen";
        case FLOATING:
            return "floating";
        case HEAD_LOCKED:
            return "head-locked";
        default:
            return "screen"; // fallback to first value
    }
}

XRHandJoint::Value XRHandJoint::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "wrist", strlen("wrist"))) {
        return WRIST;
    }
    else if (__builtin_strncmp(str, "thumb-metacarpal", strlen("thumb-metacarpal"))) {
        return THUMB_METACARPAL;
    }
    else if (__builtin_strncmp(str, "thumb-phalanx-proximal", strlen("thumb-phalanx-proximal"))) {
        return THUMB_PHALANX_PROXIMAL;
    }
    else if (__builtin_strncmp(str, "thumb-phalanx-distal", strlen("thumb-phalanx-distal"))) {
        return THUMB_PHALANX_DISTAL;
    }
    else if (__builtin_strncmp(str, "thumb-tip", strlen("thumb-tip"))) {
        return THUMB_TIP;
    }
    else if (__builtin_strncmp(str, "index-finger-metacarpal", strlen("index-finger-metacarpal"))) {
        return INDEX_FINGER_METACARPAL;
    }
    else if (__builtin_strncmp(str, "index-finger-phalanx-proximal", strlen("index-finger-phalanx-proximal"))) {
        return INDEX_FINGER_PHALANX_PROXIMAL;
    }
    else if (__builtin_strncmp(str, "index-finger-phalanx-intermediate", strlen("index-finger-phalanx-intermediate"))) {
        return INDEX_FINGER_PHALANX_INTERMEDIATE;
    }
    else if (__builtin_strncmp(str, "index-finger-phalanx-distal", strlen("index-finger-phalanx-distal"))) {
        return INDEX_FINGER_PHALANX_DISTAL;
    }
    else if (__builtin_strncmp(str, "index-finger-tip", strlen("index-finger-tip"))) {
        return INDEX_FINGER_TIP;
    }
    else if (__builtin_strncmp(str, "middle-finger-metacarpal", strlen("middle-finger-metacarpal"))) {
        return MIDDLE_FINGER_METACARPAL;
    }
    else if (__builtin_strncmp(str, "middle-finger-phalanx-proximal", strlen("middle-finger-phalanx-proximal"))) {
        return MIDDLE_FINGER_PHALANX_PROXIMAL;
    }
    else if (__builtin_strncmp(str, "middle-finger-phalanx-intermediate", strlen("middle-finger-phalanx-intermediate"))) {
        return MIDDLE_FINGER_PHALANX_INTERMEDIATE;
    }
    else if (__builtin_strncmp(str, "middle-finger-phalanx-distal", strlen("middle-finger-phalanx-distal"))) {
        return MIDDLE_FINGER_PHALANX_DISTAL;
    }
    else if (__builtin_strncmp(str, "middle-finger-tip", strlen("middle-finger-tip"))) {
        return MIDDLE_FINGER_TIP;
    }
    else if (__builtin_strncmp(str, "ring-finger-metacarpal", strlen("ring-finger-metacarpal"))) {
        return RING_FINGER_METACARPAL;
    }
    else if (__builtin_strncmp(str, "ring-finger-phalanx-proximal", strlen("ring-finger-phalanx-proximal"))) {
        return RING_FINGER_PHALANX_PROXIMAL;
    }
    else if (__builtin_strncmp(str, "ring-finger-phalanx-intermediate", strlen("ring-finger-phalanx-intermediate"))) {
        return RING_FINGER_PHALANX_INTERMEDIATE;
    }
    else if (__builtin_strncmp(str, "ring-finger-phalanx-distal", strlen("ring-finger-phalanx-distal"))) {
        return RING_FINGER_PHALANX_DISTAL;
    }
    else if (__builtin_strncmp(str, "ring-finger-tip", strlen("ring-finger-tip"))) {
        return RING_FINGER_TIP;
    }
    else if (__builtin_strncmp(str, "pinky-finger-metacarpal", strlen("pinky-finger-metacarpal"))) {
        return PINKY_FINGER_METACARPAL;
    }
    else if (__builtin_strncmp(str, "pinky-finger-phalanx-proximal", strlen("pinky-finger-phalanx-proximal"))) {
        return PINKY_FINGER_PHALANX_PROXIMAL;
    }
    else if (__builtin_strncmp(str, "pinky-finger-phalanx-intermediate", strlen("pinky-finger-phalanx-intermediate"))) {
        return PINKY_FINGER_PHALANX_INTERMEDIATE;
    }
    else if (__builtin_strncmp(str, "pinky-finger-phalanx-distal", strlen("pinky-finger-phalanx-distal"))) {
        return PINKY_FINGER_PHALANX_DISTAL;
    }
    else if (__builtin_strncmp(str, "pinky-finger-tip", strlen("pinky-finger-tip"))) {
        return PINKY_FINGER_TIP;
    }
    else {
        // Default to first value for invalid input
        return WRIST;
    }
}

XRHandJoint::XRHandJoint(Value v) noexcept : emlite::Val(XRHandJoint::to_string(v)), value_(v) {}
XRHandJoint::XRHandJoint(Handle h) noexcept: emlite::Val(h) {
    value_ = XRHandJoint::from_string(as<emlite::Uniq<char[]>>().get());
}

XRHandJoint::XRHandJoint(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = XRHandJoint::from_string(as<emlite::Uniq<char[]>>().get());
}

XRHandJoint XRHandJoint::take_ownership(Handle h) noexcept { return XRHandJoint(h); }
XRHandJoint XRHandJoint::clone() const noexcept { return *this; }
const char* XRHandJoint::to_string(XRHandJoint::Value value_) noexcept {
    switch (value_) {
        case WRIST:
            return "wrist";
        case THUMB_METACARPAL:
            return "thumb-metacarpal";
        case THUMB_PHALANX_PROXIMAL:
            return "thumb-phalanx-proximal";
        case THUMB_PHALANX_DISTAL:
            return "thumb-phalanx-distal";
        case THUMB_TIP:
            return "thumb-tip";
        case INDEX_FINGER_METACARPAL:
            return "index-finger-metacarpal";
        case INDEX_FINGER_PHALANX_PROXIMAL:
            return "index-finger-phalanx-proximal";
        case INDEX_FINGER_PHALANX_INTERMEDIATE:
            return "index-finger-phalanx-intermediate";
        case INDEX_FINGER_PHALANX_DISTAL:
            return "index-finger-phalanx-distal";
        case INDEX_FINGER_TIP:
            return "index-finger-tip";
        case MIDDLE_FINGER_METACARPAL:
            return "middle-finger-metacarpal";
        case MIDDLE_FINGER_PHALANX_PROXIMAL:
            return "middle-finger-phalanx-proximal";
        case MIDDLE_FINGER_PHALANX_INTERMEDIATE:
            return "middle-finger-phalanx-intermediate";
        case MIDDLE_FINGER_PHALANX_DISTAL:
            return "middle-finger-phalanx-distal";
        case MIDDLE_FINGER_TIP:
            return "middle-finger-tip";
        case RING_FINGER_METACARPAL:
            return "ring-finger-metacarpal";
        case RING_FINGER_PHALANX_PROXIMAL:
            return "ring-finger-phalanx-proximal";
        case RING_FINGER_PHALANX_INTERMEDIATE:
            return "ring-finger-phalanx-intermediate";
        case RING_FINGER_PHALANX_DISTAL:
            return "ring-finger-phalanx-distal";
        case RING_FINGER_TIP:
            return "ring-finger-tip";
        case PINKY_FINGER_METACARPAL:
            return "pinky-finger-metacarpal";
        case PINKY_FINGER_PHALANX_PROXIMAL:
            return "pinky-finger-phalanx-proximal";
        case PINKY_FINGER_PHALANX_INTERMEDIATE:
            return "pinky-finger-phalanx-intermediate";
        case PINKY_FINGER_PHALANX_DISTAL:
            return "pinky-finger-phalanx-distal";
        case PINKY_FINGER_TIP:
            return "pinky-finger-tip";
        default:
            return "wrist"; // fallback to first value
    }
}

XRHitTestTrackableType::Value XRHitTestTrackableType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "point", strlen("point"))) {
        return POINT;
    }
    else if (__builtin_strncmp(str, "plane", strlen("plane"))) {
        return PLANE;
    }
    else if (__builtin_strncmp(str, "mesh", strlen("mesh"))) {
        return MESH;
    }
    else {
        // Default to first value for invalid input
        return POINT;
    }
}

XRHitTestTrackableType::XRHitTestTrackableType(Value v) noexcept : emlite::Val(XRHitTestTrackableType::to_string(v)), value_(v) {}
XRHitTestTrackableType::XRHitTestTrackableType(Handle h) noexcept: emlite::Val(h) {
    value_ = XRHitTestTrackableType::from_string(as<emlite::Uniq<char[]>>().get());
}

XRHitTestTrackableType::XRHitTestTrackableType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = XRHitTestTrackableType::from_string(as<emlite::Uniq<char[]>>().get());
}

XRHitTestTrackableType XRHitTestTrackableType::take_ownership(Handle h) noexcept { return XRHitTestTrackableType(h); }
XRHitTestTrackableType XRHitTestTrackableType::clone() const noexcept { return *this; }
const char* XRHitTestTrackableType::to_string(XRHitTestTrackableType::Value value_) noexcept {
    switch (value_) {
        case POINT:
            return "point";
        case PLANE:
            return "plane";
        case MESH:
            return "mesh";
        default:
            return "point"; // fallback to first value
    }
}

XRReflectionFormat::Value XRReflectionFormat::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "srgba8", strlen("srgba8"))) {
        return SRGBA8;
    }
    else if (__builtin_strncmp(str, "rgba16f", strlen("rgba16f"))) {
        return RGBA16F;
    }
    else {
        // Default to first value for invalid input
        return SRGBA8;
    }
}

XRReflectionFormat::XRReflectionFormat(Value v) noexcept : emlite::Val(XRReflectionFormat::to_string(v)), value_(v) {}
XRReflectionFormat::XRReflectionFormat(Handle h) noexcept: emlite::Val(h) {
    value_ = XRReflectionFormat::from_string(as<emlite::Uniq<char[]>>().get());
}

XRReflectionFormat::XRReflectionFormat(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = XRReflectionFormat::from_string(as<emlite::Uniq<char[]>>().get());
}

XRReflectionFormat XRReflectionFormat::take_ownership(Handle h) noexcept { return XRReflectionFormat(h); }
XRReflectionFormat XRReflectionFormat::clone() const noexcept { return *this; }
const char* XRReflectionFormat::to_string(XRReflectionFormat::Value value_) noexcept {
    switch (value_) {
        case SRGBA8:
            return "srgba8";
        case RGBA16F:
            return "rgba16f";
        default:
            return "srgba8"; // fallback to first value
    }
}

XRPlaneOrientation::Value XRPlaneOrientation::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "horizontal", strlen("horizontal"))) {
        return HORIZONTAL;
    }
    else if (__builtin_strncmp(str, "vertical", strlen("vertical"))) {
        return VERTICAL;
    }
    else {
        // Default to first value for invalid input
        return HORIZONTAL;
    }
}

XRPlaneOrientation::XRPlaneOrientation(Value v) noexcept : emlite::Val(XRPlaneOrientation::to_string(v)), value_(v) {}
XRPlaneOrientation::XRPlaneOrientation(Handle h) noexcept: emlite::Val(h) {
    value_ = XRPlaneOrientation::from_string(as<emlite::Uniq<char[]>>().get());
}

XRPlaneOrientation::XRPlaneOrientation(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = XRPlaneOrientation::from_string(as<emlite::Uniq<char[]>>().get());
}

XRPlaneOrientation XRPlaneOrientation::take_ownership(Handle h) noexcept { return XRPlaneOrientation(h); }
XRPlaneOrientation XRPlaneOrientation::clone() const noexcept { return *this; }
const char* XRPlaneOrientation::to_string(XRPlaneOrientation::Value value_) noexcept {
    switch (value_) {
        case HORIZONTAL:
            return "horizontal";
        case VERTICAL:
            return "vertical";
        default:
            return "horizontal"; // fallback to first value
    }
}

XRSessionMode::Value XRSessionMode::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "inline", strlen("inline"))) {
        return INLINE_;
    }
    else if (__builtin_strncmp(str, "immersive-vr", strlen("immersive-vr"))) {
        return IMMERSIVE_VR;
    }
    else if (__builtin_strncmp(str, "immersive-ar", strlen("immersive-ar"))) {
        return IMMERSIVE_AR;
    }
    else {
        // Default to first value for invalid input
        return INLINE_;
    }
}

XRSessionMode::XRSessionMode(Value v) noexcept : emlite::Val(XRSessionMode::to_string(v)), value_(v) {}
XRSessionMode::XRSessionMode(Handle h) noexcept: emlite::Val(h) {
    value_ = XRSessionMode::from_string(as<emlite::Uniq<char[]>>().get());
}

XRSessionMode::XRSessionMode(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = XRSessionMode::from_string(as<emlite::Uniq<char[]>>().get());
}

XRSessionMode XRSessionMode::take_ownership(Handle h) noexcept { return XRSessionMode(h); }
XRSessionMode XRSessionMode::clone() const noexcept { return *this; }
const char* XRSessionMode::to_string(XRSessionMode::Value value_) noexcept {
    switch (value_) {
        case INLINE_:
            return "inline";
        case IMMERSIVE_VR:
            return "immersive-vr";
        case IMMERSIVE_AR:
            return "immersive-ar";
        default:
            return "inline"; // fallback to first value
    }
}

XRVisibilityState::Value XRVisibilityState::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "visible", strlen("visible"))) {
        return VISIBLE;
    }
    else if (__builtin_strncmp(str, "visible-blurred", strlen("visible-blurred"))) {
        return VISIBLE_BLURRED;
    }
    else if (__builtin_strncmp(str, "hidden", strlen("hidden"))) {
        return HIDDEN;
    }
    else {
        // Default to first value for invalid input
        return VISIBLE;
    }
}

XRVisibilityState::XRVisibilityState(Value v) noexcept : emlite::Val(XRVisibilityState::to_string(v)), value_(v) {}
XRVisibilityState::XRVisibilityState(Handle h) noexcept: emlite::Val(h) {
    value_ = XRVisibilityState::from_string(as<emlite::Uniq<char[]>>().get());
}

XRVisibilityState::XRVisibilityState(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = XRVisibilityState::from_string(as<emlite::Uniq<char[]>>().get());
}

XRVisibilityState XRVisibilityState::take_ownership(Handle h) noexcept { return XRVisibilityState(h); }
XRVisibilityState XRVisibilityState::clone() const noexcept { return *this; }
const char* XRVisibilityState::to_string(XRVisibilityState::Value value_) noexcept {
    switch (value_) {
        case VISIBLE:
            return "visible";
        case VISIBLE_BLURRED:
            return "visible-blurred";
        case HIDDEN:
            return "hidden";
        default:
            return "visible"; // fallback to first value
    }
}

XRReferenceSpaceType::Value XRReferenceSpaceType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "viewer", strlen("viewer"))) {
        return VIEWER;
    }
    else if (__builtin_strncmp(str, "local", strlen("local"))) {
        return LOCAL;
    }
    else if (__builtin_strncmp(str, "local-floor", strlen("local-floor"))) {
        return LOCAL_FLOOR;
    }
    else if (__builtin_strncmp(str, "bounded-floor", strlen("bounded-floor"))) {
        return BOUNDED_FLOOR;
    }
    else if (__builtin_strncmp(str, "unbounded", strlen("unbounded"))) {
        return UNBOUNDED;
    }
    else {
        // Default to first value for invalid input
        return VIEWER;
    }
}

XRReferenceSpaceType::XRReferenceSpaceType(Value v) noexcept : emlite::Val(XRReferenceSpaceType::to_string(v)), value_(v) {}
XRReferenceSpaceType::XRReferenceSpaceType(Handle h) noexcept: emlite::Val(h) {
    value_ = XRReferenceSpaceType::from_string(as<emlite::Uniq<char[]>>().get());
}

XRReferenceSpaceType::XRReferenceSpaceType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = XRReferenceSpaceType::from_string(as<emlite::Uniq<char[]>>().get());
}

XRReferenceSpaceType XRReferenceSpaceType::take_ownership(Handle h) noexcept { return XRReferenceSpaceType(h); }
XRReferenceSpaceType XRReferenceSpaceType::clone() const noexcept { return *this; }
const char* XRReferenceSpaceType::to_string(XRReferenceSpaceType::Value value_) noexcept {
    switch (value_) {
        case VIEWER:
            return "viewer";
        case LOCAL:
            return "local";
        case LOCAL_FLOOR:
            return "local-floor";
        case BOUNDED_FLOOR:
            return "bounded-floor";
        case UNBOUNDED:
            return "unbounded";
        default:
            return "viewer"; // fallback to first value
    }
}

XREye::Value XREye::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "none", strlen("none"))) {
        return NONE;
    }
    else if (__builtin_strncmp(str, "left", strlen("left"))) {
        return LEFT;
    }
    else if (__builtin_strncmp(str, "right", strlen("right"))) {
        return RIGHT;
    }
    else {
        // Default to first value for invalid input
        return NONE;
    }
}

XREye::XREye(Value v) noexcept : emlite::Val(XREye::to_string(v)), value_(v) {}
XREye::XREye(Handle h) noexcept: emlite::Val(h) {
    value_ = XREye::from_string(as<emlite::Uniq<char[]>>().get());
}

XREye::XREye(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = XREye::from_string(as<emlite::Uniq<char[]>>().get());
}

XREye XREye::take_ownership(Handle h) noexcept { return XREye(h); }
XREye XREye::clone() const noexcept { return *this; }
const char* XREye::to_string(XREye::Value value_) noexcept {
    switch (value_) {
        case NONE:
            return "none";
        case LEFT:
            return "left";
        case RIGHT:
            return "right";
        default:
            return "none"; // fallback to first value
    }
}

XRHandedness::Value XRHandedness::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "none", strlen("none"))) {
        return NONE;
    }
    else if (__builtin_strncmp(str, "left", strlen("left"))) {
        return LEFT;
    }
    else if (__builtin_strncmp(str, "right", strlen("right"))) {
        return RIGHT;
    }
    else {
        // Default to first value for invalid input
        return NONE;
    }
}

XRHandedness::XRHandedness(Value v) noexcept : emlite::Val(XRHandedness::to_string(v)), value_(v) {}
XRHandedness::XRHandedness(Handle h) noexcept: emlite::Val(h) {
    value_ = XRHandedness::from_string(as<emlite::Uniq<char[]>>().get());
}

XRHandedness::XRHandedness(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = XRHandedness::from_string(as<emlite::Uniq<char[]>>().get());
}

XRHandedness XRHandedness::take_ownership(Handle h) noexcept { return XRHandedness(h); }
XRHandedness XRHandedness::clone() const noexcept { return *this; }
const char* XRHandedness::to_string(XRHandedness::Value value_) noexcept {
    switch (value_) {
        case NONE:
            return "none";
        case LEFT:
            return "left";
        case RIGHT:
            return "right";
        default:
            return "none"; // fallback to first value
    }
}

XRTargetRayMode::Value XRTargetRayMode::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "gaze", strlen("gaze"))) {
        return GAZE;
    }
    else if (__builtin_strncmp(str, "tracked-pointer", strlen("tracked-pointer"))) {
        return TRACKED_POINTER;
    }
    else if (__builtin_strncmp(str, "screen", strlen("screen"))) {
        return SCREEN;
    }
    else if (__builtin_strncmp(str, "transient-pointer", strlen("transient-pointer"))) {
        return TRANSIENT_POINTER;
    }
    else {
        // Default to first value for invalid input
        return GAZE;
    }
}

XRTargetRayMode::XRTargetRayMode(Value v) noexcept : emlite::Val(XRTargetRayMode::to_string(v)), value_(v) {}
XRTargetRayMode::XRTargetRayMode(Handle h) noexcept: emlite::Val(h) {
    value_ = XRTargetRayMode::from_string(as<emlite::Uniq<char[]>>().get());
}

XRTargetRayMode::XRTargetRayMode(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = XRTargetRayMode::from_string(as<emlite::Uniq<char[]>>().get());
}

XRTargetRayMode XRTargetRayMode::take_ownership(Handle h) noexcept { return XRTargetRayMode(h); }
XRTargetRayMode XRTargetRayMode::clone() const noexcept { return *this; }
const char* XRTargetRayMode::to_string(XRTargetRayMode::Value value_) noexcept {
    switch (value_) {
        case GAZE:
            return "gaze";
        case TRACKED_POINTER:
            return "tracked-pointer";
        case SCREEN:
            return "screen";
        case TRANSIENT_POINTER:
            return "transient-pointer";
        default:
            return "gaze"; // fallback to first value
    }
}

XRLayerLayout::Value XRLayerLayout::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "default", strlen("default"))) {
        return DEFAULT_;
    }
    else if (__builtin_strncmp(str, "mono", strlen("mono"))) {
        return MONO;
    }
    else if (__builtin_strncmp(str, "stereo", strlen("stereo"))) {
        return STEREO;
    }
    else if (__builtin_strncmp(str, "stereo-left-right", strlen("stereo-left-right"))) {
        return STEREO_LEFT_RIGHT;
    }
    else if (__builtin_strncmp(str, "stereo-top-bottom", strlen("stereo-top-bottom"))) {
        return STEREO_TOP_BOTTOM;
    }
    else {
        // Default to first value for invalid input
        return DEFAULT_;
    }
}

XRLayerLayout::XRLayerLayout(Value v) noexcept : emlite::Val(XRLayerLayout::to_string(v)), value_(v) {}
XRLayerLayout::XRLayerLayout(Handle h) noexcept: emlite::Val(h) {
    value_ = XRLayerLayout::from_string(as<emlite::Uniq<char[]>>().get());
}

XRLayerLayout::XRLayerLayout(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = XRLayerLayout::from_string(as<emlite::Uniq<char[]>>().get());
}

XRLayerLayout XRLayerLayout::take_ownership(Handle h) noexcept { return XRLayerLayout(h); }
XRLayerLayout XRLayerLayout::clone() const noexcept { return *this; }
const char* XRLayerLayout::to_string(XRLayerLayout::Value value_) noexcept {
    switch (value_) {
        case DEFAULT_:
            return "default";
        case MONO:
            return "mono";
        case STEREO:
            return "stereo";
        case STEREO_LEFT_RIGHT:
            return "stereo-left-right";
        case STEREO_TOP_BOTTOM:
            return "stereo-top-bottom";
        default:
            return "default"; // fallback to first value
    }
}

XRLayerQuality::Value XRLayerQuality::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "default", strlen("default"))) {
        return DEFAULT_;
    }
    else if (__builtin_strncmp(str, "text-optimized", strlen("text-optimized"))) {
        return TEXT_OPTIMIZED;
    }
    else if (__builtin_strncmp(str, "graphics-optimized", strlen("graphics-optimized"))) {
        return GRAPHICS_OPTIMIZED;
    }
    else {
        // Default to first value for invalid input
        return DEFAULT_;
    }
}

XRLayerQuality::XRLayerQuality(Value v) noexcept : emlite::Val(XRLayerQuality::to_string(v)), value_(v) {}
XRLayerQuality::XRLayerQuality(Handle h) noexcept: emlite::Val(h) {
    value_ = XRLayerQuality::from_string(as<emlite::Uniq<char[]>>().get());
}

XRLayerQuality::XRLayerQuality(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = XRLayerQuality::from_string(as<emlite::Uniq<char[]>>().get());
}

XRLayerQuality XRLayerQuality::take_ownership(Handle h) noexcept { return XRLayerQuality(h); }
XRLayerQuality XRLayerQuality::clone() const noexcept { return *this; }
const char* XRLayerQuality::to_string(XRLayerQuality::Value value_) noexcept {
    switch (value_) {
        case DEFAULT_:
            return "default";
        case TEXT_OPTIMIZED:
            return "text-optimized";
        case GRAPHICS_OPTIMIZED:
            return "graphics-optimized";
        default:
            return "default"; // fallback to first value
    }
}

XRTextureType::Value XRTextureType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "texture", strlen("texture"))) {
        return TEXTURE;
    }
    else if (__builtin_strncmp(str, "texture-array", strlen("texture-array"))) {
        return TEXTURE_ARRAY;
    }
    else {
        // Default to first value for invalid input
        return TEXTURE;
    }
}

XRTextureType::XRTextureType(Value v) noexcept : emlite::Val(XRTextureType::to_string(v)), value_(v) {}
XRTextureType::XRTextureType(Handle h) noexcept: emlite::Val(h) {
    value_ = XRTextureType::from_string(as<emlite::Uniq<char[]>>().get());
}

XRTextureType::XRTextureType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = XRTextureType::from_string(as<emlite::Uniq<char[]>>().get());
}

XRTextureType XRTextureType::take_ownership(Handle h) noexcept { return XRTextureType(h); }
XRTextureType XRTextureType::clone() const noexcept { return *this; }
const char* XRTextureType::to_string(XRTextureType::Value value_) noexcept {
    switch (value_) {
        case TEXTURE:
            return "texture";
        case TEXTURE_ARRAY:
            return "texture-array";
        default:
            return "texture"; // fallback to first value
    }
}

SummarizerType::Value SummarizerType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "tldr", strlen("tldr"))) {
        return TLDR;
    }
    else if (__builtin_strncmp(str, "teaser", strlen("teaser"))) {
        return TEASER;
    }
    else if (__builtin_strncmp(str, "key-points", strlen("key-points"))) {
        return KEY_POINTS;
    }
    else if (__builtin_strncmp(str, "headline", strlen("headline"))) {
        return HEADLINE;
    }
    else {
        // Default to first value for invalid input
        return TLDR;
    }
}

SummarizerType::SummarizerType(Value v) noexcept : emlite::Val(SummarizerType::to_string(v)), value_(v) {}
SummarizerType::SummarizerType(Handle h) noexcept: emlite::Val(h) {
    value_ = SummarizerType::from_string(as<emlite::Uniq<char[]>>().get());
}

SummarizerType::SummarizerType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = SummarizerType::from_string(as<emlite::Uniq<char[]>>().get());
}

SummarizerType SummarizerType::take_ownership(Handle h) noexcept { return SummarizerType(h); }
SummarizerType SummarizerType::clone() const noexcept { return *this; }
const char* SummarizerType::to_string(SummarizerType::Value value_) noexcept {
    switch (value_) {
        case TLDR:
            return "tldr";
        case TEASER:
            return "teaser";
        case KEY_POINTS:
            return "key-points";
        case HEADLINE:
            return "headline";
        default:
            return "tldr"; // fallback to first value
    }
}

SummarizerFormat::Value SummarizerFormat::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "plain-text", strlen("plain-text"))) {
        return PLAIN_TEXT;
    }
    else if (__builtin_strncmp(str, "markdown", strlen("markdown"))) {
        return MARKDOWN;
    }
    else {
        // Default to first value for invalid input
        return PLAIN_TEXT;
    }
}

SummarizerFormat::SummarizerFormat(Value v) noexcept : emlite::Val(SummarizerFormat::to_string(v)), value_(v) {}
SummarizerFormat::SummarizerFormat(Handle h) noexcept: emlite::Val(h) {
    value_ = SummarizerFormat::from_string(as<emlite::Uniq<char[]>>().get());
}

SummarizerFormat::SummarizerFormat(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = SummarizerFormat::from_string(as<emlite::Uniq<char[]>>().get());
}

SummarizerFormat SummarizerFormat::take_ownership(Handle h) noexcept { return SummarizerFormat(h); }
SummarizerFormat SummarizerFormat::clone() const noexcept { return *this; }
const char* SummarizerFormat::to_string(SummarizerFormat::Value value_) noexcept {
    switch (value_) {
        case PLAIN_TEXT:
            return "plain-text";
        case MARKDOWN:
            return "markdown";
        default:
            return "plain-text"; // fallback to first value
    }
}

SummarizerLength::Value SummarizerLength::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "short", strlen("short"))) {
        return SHORT_;
    }
    else if (__builtin_strncmp(str, "medium", strlen("medium"))) {
        return MEDIUM;
    }
    else if (__builtin_strncmp(str, "long", strlen("long"))) {
        return LONG_;
    }
    else {
        // Default to first value for invalid input
        return SHORT_;
    }
}

SummarizerLength::SummarizerLength(Value v) noexcept : emlite::Val(SummarizerLength::to_string(v)), value_(v) {}
SummarizerLength::SummarizerLength(Handle h) noexcept: emlite::Val(h) {
    value_ = SummarizerLength::from_string(as<emlite::Uniq<char[]>>().get());
}

SummarizerLength::SummarizerLength(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = SummarizerLength::from_string(as<emlite::Uniq<char[]>>().get());
}

SummarizerLength SummarizerLength::take_ownership(Handle h) noexcept { return SummarizerLength(h); }
SummarizerLength SummarizerLength::clone() const noexcept { return *this; }
const char* SummarizerLength::to_string(SummarizerLength::Value value_) noexcept {
    switch (value_) {
        case SHORT_:
            return "short";
        case MEDIUM:
            return "medium";
        case LONG_:
            return "long";
        default:
            return "short"; // fallback to first value
    }
}

WriterTone::Value WriterTone::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "formal", strlen("formal"))) {
        return FORMAL;
    }
    else if (__builtin_strncmp(str, "neutral", strlen("neutral"))) {
        return NEUTRAL;
    }
    else if (__builtin_strncmp(str, "casual", strlen("casual"))) {
        return CASUAL;
    }
    else {
        // Default to first value for invalid input
        return FORMAL;
    }
}

WriterTone::WriterTone(Value v) noexcept : emlite::Val(WriterTone::to_string(v)), value_(v) {}
WriterTone::WriterTone(Handle h) noexcept: emlite::Val(h) {
    value_ = WriterTone::from_string(as<emlite::Uniq<char[]>>().get());
}

WriterTone::WriterTone(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = WriterTone::from_string(as<emlite::Uniq<char[]>>().get());
}

WriterTone WriterTone::take_ownership(Handle h) noexcept { return WriterTone(h); }
WriterTone WriterTone::clone() const noexcept { return *this; }
const char* WriterTone::to_string(WriterTone::Value value_) noexcept {
    switch (value_) {
        case FORMAL:
            return "formal";
        case NEUTRAL:
            return "neutral";
        case CASUAL:
            return "casual";
        default:
            return "formal"; // fallback to first value
    }
}

WriterFormat::Value WriterFormat::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "plain-text", strlen("plain-text"))) {
        return PLAIN_TEXT;
    }
    else if (__builtin_strncmp(str, "markdown", strlen("markdown"))) {
        return MARKDOWN;
    }
    else {
        // Default to first value for invalid input
        return PLAIN_TEXT;
    }
}

WriterFormat::WriterFormat(Value v) noexcept : emlite::Val(WriterFormat::to_string(v)), value_(v) {}
WriterFormat::WriterFormat(Handle h) noexcept: emlite::Val(h) {
    value_ = WriterFormat::from_string(as<emlite::Uniq<char[]>>().get());
}

WriterFormat::WriterFormat(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = WriterFormat::from_string(as<emlite::Uniq<char[]>>().get());
}

WriterFormat WriterFormat::take_ownership(Handle h) noexcept { return WriterFormat(h); }
WriterFormat WriterFormat::clone() const noexcept { return *this; }
const char* WriterFormat::to_string(WriterFormat::Value value_) noexcept {
    switch (value_) {
        case PLAIN_TEXT:
            return "plain-text";
        case MARKDOWN:
            return "markdown";
        default:
            return "plain-text"; // fallback to first value
    }
}

WriterLength::Value WriterLength::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "short", strlen("short"))) {
        return SHORT_;
    }
    else if (__builtin_strncmp(str, "medium", strlen("medium"))) {
        return MEDIUM;
    }
    else if (__builtin_strncmp(str, "long", strlen("long"))) {
        return LONG_;
    }
    else {
        // Default to first value for invalid input
        return SHORT_;
    }
}

WriterLength::WriterLength(Value v) noexcept : emlite::Val(WriterLength::to_string(v)), value_(v) {}
WriterLength::WriterLength(Handle h) noexcept: emlite::Val(h) {
    value_ = WriterLength::from_string(as<emlite::Uniq<char[]>>().get());
}

WriterLength::WriterLength(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = WriterLength::from_string(as<emlite::Uniq<char[]>>().get());
}

WriterLength WriterLength::take_ownership(Handle h) noexcept { return WriterLength(h); }
WriterLength WriterLength::clone() const noexcept { return *this; }
const char* WriterLength::to_string(WriterLength::Value value_) noexcept {
    switch (value_) {
        case SHORT_:
            return "short";
        case MEDIUM:
            return "medium";
        case LONG_:
            return "long";
        default:
            return "short"; // fallback to first value
    }
}

RewriterTone::Value RewriterTone::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "as-is", strlen("as-is"))) {
        return AS_IS;
    }
    else if (__builtin_strncmp(str, "more-formal", strlen("more-formal"))) {
        return MORE_FORMAL;
    }
    else if (__builtin_strncmp(str, "more-casual", strlen("more-casual"))) {
        return MORE_CASUAL;
    }
    else {
        // Default to first value for invalid input
        return AS_IS;
    }
}

RewriterTone::RewriterTone(Value v) noexcept : emlite::Val(RewriterTone::to_string(v)), value_(v) {}
RewriterTone::RewriterTone(Handle h) noexcept: emlite::Val(h) {
    value_ = RewriterTone::from_string(as<emlite::Uniq<char[]>>().get());
}

RewriterTone::RewriterTone(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RewriterTone::from_string(as<emlite::Uniq<char[]>>().get());
}

RewriterTone RewriterTone::take_ownership(Handle h) noexcept { return RewriterTone(h); }
RewriterTone RewriterTone::clone() const noexcept { return *this; }
const char* RewriterTone::to_string(RewriterTone::Value value_) noexcept {
    switch (value_) {
        case AS_IS:
            return "as-is";
        case MORE_FORMAL:
            return "more-formal";
        case MORE_CASUAL:
            return "more-casual";
        default:
            return "as-is"; // fallback to first value
    }
}

RewriterFormat::Value RewriterFormat::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "as-is", strlen("as-is"))) {
        return AS_IS;
    }
    else if (__builtin_strncmp(str, "plain-text", strlen("plain-text"))) {
        return PLAIN_TEXT;
    }
    else if (__builtin_strncmp(str, "markdown", strlen("markdown"))) {
        return MARKDOWN;
    }
    else {
        // Default to first value for invalid input
        return AS_IS;
    }
}

RewriterFormat::RewriterFormat(Value v) noexcept : emlite::Val(RewriterFormat::to_string(v)), value_(v) {}
RewriterFormat::RewriterFormat(Handle h) noexcept: emlite::Val(h) {
    value_ = RewriterFormat::from_string(as<emlite::Uniq<char[]>>().get());
}

RewriterFormat::RewriterFormat(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RewriterFormat::from_string(as<emlite::Uniq<char[]>>().get());
}

RewriterFormat RewriterFormat::take_ownership(Handle h) noexcept { return RewriterFormat(h); }
RewriterFormat RewriterFormat::clone() const noexcept { return *this; }
const char* RewriterFormat::to_string(RewriterFormat::Value value_) noexcept {
    switch (value_) {
        case AS_IS:
            return "as-is";
        case PLAIN_TEXT:
            return "plain-text";
        case MARKDOWN:
            return "markdown";
        default:
            return "as-is"; // fallback to first value
    }
}

RewriterLength::Value RewriterLength::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "as-is", strlen("as-is"))) {
        return AS_IS;
    }
    else if (__builtin_strncmp(str, "shorter", strlen("shorter"))) {
        return SHORTER;
    }
    else if (__builtin_strncmp(str, "longer", strlen("longer"))) {
        return LONGER;
    }
    else {
        // Default to first value for invalid input
        return AS_IS;
    }
}

RewriterLength::RewriterLength(Value v) noexcept : emlite::Val(RewriterLength::to_string(v)), value_(v) {}
RewriterLength::RewriterLength(Handle h) noexcept: emlite::Val(h) {
    value_ = RewriterLength::from_string(as<emlite::Uniq<char[]>>().get());
}

RewriterLength::RewriterLength(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = RewriterLength::from_string(as<emlite::Uniq<char[]>>().get());
}

RewriterLength RewriterLength::take_ownership(Handle h) noexcept { return RewriterLength(h); }
RewriterLength RewriterLength::clone() const noexcept { return *this; }
const char* RewriterLength::to_string(RewriterLength::Value value_) noexcept {
    switch (value_) {
        case AS_IS:
            return "as-is";
        case SHORTER:
            return "shorter";
        case LONGER:
            return "longer";
        default:
            return "as-is"; // fallback to first value
    }
}

Availability::Value Availability::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "unavailable", strlen("unavailable"))) {
        return UNAVAILABLE;
    }
    else if (__builtin_strncmp(str, "downloadable", strlen("downloadable"))) {
        return DOWNLOADABLE;
    }
    else if (__builtin_strncmp(str, "downloading", strlen("downloading"))) {
        return DOWNLOADING;
    }
    else if (__builtin_strncmp(str, "available", strlen("available"))) {
        return AVAILABLE;
    }
    else {
        // Default to first value for invalid input
        return UNAVAILABLE;
    }
}

Availability::Availability(Value v) noexcept : emlite::Val(Availability::to_string(v)), value_(v) {}
Availability::Availability(Handle h) noexcept: emlite::Val(h) {
    value_ = Availability::from_string(as<emlite::Uniq<char[]>>().get());
}

Availability::Availability(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = Availability::from_string(as<emlite::Uniq<char[]>>().get());
}

Availability Availability::take_ownership(Handle h) noexcept { return Availability(h); }
Availability Availability::clone() const noexcept { return *this; }
const char* Availability::to_string(Availability::Value value_) noexcept {
    switch (value_) {
        case UNAVAILABLE:
            return "unavailable";
        case DOWNLOADABLE:
            return "downloadable";
        case DOWNLOADING:
            return "downloading";
        case AVAILABLE:
            return "available";
        default:
            return "unavailable"; // fallback to first value
    }
}

XMLHttpRequestResponseType::Value XMLHttpRequestResponseType::from_string(const char* str) noexcept {
    if (__builtin_strncmp(str, "", strlen(""))) {
        return NONE;
    }
    else if (__builtin_strncmp(str, "arraybuffer", strlen("arraybuffer"))) {
        return ARRAYBUFFER;
    }
    else if (__builtin_strncmp(str, "blob", strlen("blob"))) {
        return BLOB;
    }
    else if (__builtin_strncmp(str, "document", strlen("document"))) {
        return DOCUMENT;
    }
    else if (__builtin_strncmp(str, "json", strlen("json"))) {
        return JSON;
    }
    else if (__builtin_strncmp(str, "text", strlen("text"))) {
        return TEXT;
    }
    else {
        // Default to first value for invalid input
        return NONE;
    }
}

XMLHttpRequestResponseType::XMLHttpRequestResponseType(Value v) noexcept : emlite::Val(XMLHttpRequestResponseType::to_string(v)), value_(v) {}
XMLHttpRequestResponseType::XMLHttpRequestResponseType(Handle h) noexcept: emlite::Val(h) {
    value_ = XMLHttpRequestResponseType::from_string(as<emlite::Uniq<char[]>>().get());
}

XMLHttpRequestResponseType::XMLHttpRequestResponseType(const emlite::Val& val) noexcept: emlite::Val(val) {
    value_ = XMLHttpRequestResponseType::from_string(as<emlite::Uniq<char[]>>().get());
}

XMLHttpRequestResponseType XMLHttpRequestResponseType::take_ownership(Handle h) noexcept { return XMLHttpRequestResponseType(h); }
XMLHttpRequestResponseType XMLHttpRequestResponseType::clone() const noexcept { return *this; }
const char* XMLHttpRequestResponseType::to_string(XMLHttpRequestResponseType::Value value_) noexcept {
    switch (value_) {
        case NONE:
            return "";
        case ARRAYBUFFER:
            return "arraybuffer";
        case BLOB:
            return "blob";
        case DOCUMENT:
            return "document";
        case JSON:
            return "json";
        case TEXT:
            return "text";
        default:
            return ""; // fallback to first value
    }
}

} // namespace webbind