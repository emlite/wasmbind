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
    [[nodiscard]] LanguageDetectorCreateOptions clone() const noexcept;
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
    [[nodiscard]] jsbind::Function monitor() const;
    void monitor(const jsbind::Function& value);
};

class LanguageDetectorCreateCoreOptions : public emlite::Val {
  explicit LanguageDetectorCreateCoreOptions(Handle h) noexcept;
public:
    static LanguageDetectorCreateCoreOptions take_ownership(Handle h) noexcept;
    explicit LanguageDetectorCreateCoreOptions(const emlite::Val &val) noexcept;
    LanguageDetectorCreateCoreOptions() noexcept;
    [[nodiscard]] LanguageDetectorCreateCoreOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<jsbind::String> expectedInputLanguages() const;
    void expectedInputLanguages(const jsbind::TypedArray<jsbind::String>& value);
};

class LanguageDetectionResult : public emlite::Val {
  explicit LanguageDetectionResult(Handle h) noexcept;
public:
    static LanguageDetectionResult take_ownership(Handle h) noexcept;
    explicit LanguageDetectionResult(const emlite::Val &val) noexcept;
    LanguageDetectionResult() noexcept;
    [[nodiscard]] LanguageDetectionResult clone() const noexcept;
    [[nodiscard]] jsbind::String detectedLanguage() const;
    void detectedLanguage(const jsbind::String& value);
    [[nodiscard]] double confidence() const;
    void confidence(double value);
};

class LanguageDetectorDetectOptions : public emlite::Val {
  explicit LanguageDetectorDetectOptions(Handle h) noexcept;
public:
    static LanguageDetectorDetectOptions take_ownership(Handle h) noexcept;
    explicit LanguageDetectorDetectOptions(const emlite::Val &val) noexcept;
    LanguageDetectorDetectOptions() noexcept;
    [[nodiscard]] LanguageDetectorDetectOptions clone() const noexcept;
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

/// The LanguageDetector class.
/// [`LanguageDetector`](https://developer.mozilla.org/en-US/docs/Web/API/LanguageDetector)
class LanguageDetector : public emlite::Val {
    explicit LanguageDetector(Handle h) noexcept;

public:
    explicit LanguageDetector(const emlite::Val &val) noexcept;
    static LanguageDetector take_ownership(Handle h) noexcept;

    [[nodiscard]] LanguageDetector clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The create method.
    /// [`LanguageDetector.create`](https://developer.mozilla.org/en-US/docs/Web/API/LanguageDetector/create)
    static jsbind::Promise<LanguageDetector> create();
    /// The create method.
    /// [`LanguageDetector.create`](https://developer.mozilla.org/en-US/docs/Web/API/LanguageDetector/create)
    static jsbind::Promise<LanguageDetector> create(const LanguageDetectorCreateOptions& options);
    /// The availability method.
    /// [`LanguageDetector.availability`](https://developer.mozilla.org/en-US/docs/Web/API/LanguageDetector/availability)
    static jsbind::Promise<Availability> availability();
    /// The availability method.
    /// [`LanguageDetector.availability`](https://developer.mozilla.org/en-US/docs/Web/API/LanguageDetector/availability)
    static jsbind::Promise<Availability> availability(const LanguageDetectorCreateCoreOptions& options);
    /// The detect method.
    /// [`LanguageDetector.detect`](https://developer.mozilla.org/en-US/docs/Web/API/LanguageDetector/detect)
    jsbind::Promise<jsbind::TypedArray<LanguageDetectionResult>> detect(const jsbind::String& input);
    /// The detect method.
    /// [`LanguageDetector.detect`](https://developer.mozilla.org/en-US/docs/Web/API/LanguageDetector/detect)
    jsbind::Promise<jsbind::TypedArray<LanguageDetectionResult>> detect(const jsbind::String& input, const LanguageDetectorDetectOptions& options);
    /// Getter of the `expectedInputLanguages` attribute.
    /// [`LanguageDetector.expectedInputLanguages`](https://developer.mozilla.org/en-US/docs/Web/API/LanguageDetector/expectedInputLanguages)
    [[nodiscard]] jsbind::TypedArray<jsbind::String> expectedInputLanguages() const;
    /// The measureInputUsage method.
    /// [`LanguageDetector.measureInputUsage`](https://developer.mozilla.org/en-US/docs/Web/API/LanguageDetector/measureInputUsage)
    jsbind::Promise<double> measureInputUsage(const jsbind::String& input);
    /// The measureInputUsage method.
    /// [`LanguageDetector.measureInputUsage`](https://developer.mozilla.org/en-US/docs/Web/API/LanguageDetector/measureInputUsage)
    jsbind::Promise<double> measureInputUsage(const jsbind::String& input, const LanguageDetectorDetectOptions& options);
    /// Getter of the `inputQuota` attribute.
    /// [`LanguageDetector.inputQuota`](https://developer.mozilla.org/en-US/docs/Web/API/LanguageDetector/inputQuota)
    [[nodiscard]] double inputQuota() const;
    /// The destroy method.
    /// [`LanguageDetector.destroy`](https://developer.mozilla.org/en-US/docs/Web/API/LanguageDetector/destroy)
    jsbind::Undefined destroy();
};

