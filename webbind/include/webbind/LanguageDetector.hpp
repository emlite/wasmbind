#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class LanguageDetector;
class LanguageDetectorCreateOptions;
class LanguageDetectorCreateCoreOptions;
class LanguageDetectionResult;
class LanguageDetectorDetectOptions;
class AbortSignal;


class LanguageDetectorCreateOptions : public emlite::Val {
  explicit LanguageDetectorCreateOptions(Handle h) noexcept;
public:
    static LanguageDetectorCreateOptions take_ownership(Handle h) noexcept;
    explicit LanguageDetectorCreateOptions(const emlite::Val &val) noexcept;
    LanguageDetectorCreateOptions() noexcept;
    LanguageDetectorCreateOptions clone() const noexcept;
    AbortSignal signal() const;
    void signal(const AbortSignal& value);
    jsbind::Function monitor() const;
    void monitor(const jsbind::Function& value);
};

class LanguageDetectorCreateCoreOptions : public emlite::Val {
  explicit LanguageDetectorCreateCoreOptions(Handle h) noexcept;
public:
    static LanguageDetectorCreateCoreOptions take_ownership(Handle h) noexcept;
    explicit LanguageDetectorCreateCoreOptions(const emlite::Val &val) noexcept;
    LanguageDetectorCreateCoreOptions() noexcept;
    LanguageDetectorCreateCoreOptions clone() const noexcept;
    jsbind::TypedArray<jsbind::String> expectedInputLanguages() const;
    void expectedInputLanguages(const jsbind::TypedArray<jsbind::String>& value);
};

class LanguageDetectionResult : public emlite::Val {
  explicit LanguageDetectionResult(Handle h) noexcept;
public:
    static LanguageDetectionResult take_ownership(Handle h) noexcept;
    explicit LanguageDetectionResult(const emlite::Val &val) noexcept;
    LanguageDetectionResult() noexcept;
    LanguageDetectionResult clone() const noexcept;
    jsbind::String detectedLanguage() const;
    void detectedLanguage(const jsbind::String& value);
    double confidence() const;
    void confidence(double value);
};

class LanguageDetectorDetectOptions : public emlite::Val {
  explicit LanguageDetectorDetectOptions(Handle h) noexcept;
public:
    static LanguageDetectorDetectOptions take_ownership(Handle h) noexcept;
    explicit LanguageDetectorDetectOptions(const emlite::Val &val) noexcept;
    LanguageDetectorDetectOptions() noexcept;
    LanguageDetectorDetectOptions clone() const noexcept;
    AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

class LanguageDetector : public emlite::Val {
    explicit LanguageDetector(Handle h) noexcept;

public:
    explicit LanguageDetector(const emlite::Val &val) noexcept;
    static LanguageDetector take_ownership(Handle h) noexcept;

    LanguageDetector clone() const noexcept;
    static jsbind::Promise<LanguageDetector> create();
    static jsbind::Promise<LanguageDetector> create(const LanguageDetectorCreateOptions& options);
    static jsbind::Promise<Availability> availability();
    static jsbind::Promise<Availability> availability(const LanguageDetectorCreateCoreOptions& options);
    jsbind::Promise<jsbind::TypedArray<LanguageDetectionResult>> detect(const jsbind::String& input);
    jsbind::Promise<jsbind::TypedArray<LanguageDetectionResult>> detect(const jsbind::String& input, const LanguageDetectorDetectOptions& options);
    jsbind::TypedArray<jsbind::String> expectedInputLanguages() const;
    jsbind::Promise<double> measureInputUsage(const jsbind::String& input);
    jsbind::Promise<double> measureInputUsage(const jsbind::String& input, const LanguageDetectorDetectOptions& options);
    double inputQuota() const;
    jsbind::Undefined destroy();
};

