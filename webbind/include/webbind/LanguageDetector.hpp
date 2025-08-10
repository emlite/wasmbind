#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "LanguageDetectorCreateOptions.hpp"
#include "LanguageDetectorCreateCoreOptions.hpp"
#include "LanguageDetectionResult.hpp"
#include "LanguageDetectorDetectOptions.hpp"
#include "enums.hpp"

namespace webbind {

class LanguageDetector;

/// Interface LanguageDetector
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

} // namespace webbind