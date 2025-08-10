#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "TranslatorCreateOptions.hpp"
#include "TranslatorCreateCoreOptions.hpp"
#include "TranslatorTranslateOptions.hpp"
#include "enums.hpp"

namespace webbind {

class Translator;
class ReadableStream;

/// Interface Translator
/// [`Translator`](https://developer.mozilla.org/en-US/docs/Web/API/Translator)
class Translator : public emlite::Val {
    explicit Translator(Handle h) noexcept;
public:
    explicit Translator(const emlite::Val &val) noexcept;
    static Translator take_ownership(Handle h) noexcept;
    [[nodiscard]] Translator clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The create method.
    /// [`Translator.create`](https://developer.mozilla.org/en-US/docs/Web/API/Translator/create)
    static jsbind::Promise<Translator> create(const TranslatorCreateOptions& options);
    /// The availability method.
    /// [`Translator.availability`](https://developer.mozilla.org/en-US/docs/Web/API/Translator/availability)
    static jsbind::Promise<Availability> availability(const TranslatorCreateCoreOptions& options);
    /// The translate method.
    /// [`Translator.translate`](https://developer.mozilla.org/en-US/docs/Web/API/Translator/translate)
    jsbind::Promise<jsbind::String> translate(const jsbind::String& input);
    /// The translate method.
    /// [`Translator.translate`](https://developer.mozilla.org/en-US/docs/Web/API/Translator/translate)
    jsbind::Promise<jsbind::String> translate(const jsbind::String& input, const TranslatorTranslateOptions& options);
    /// The translateStreaming method.
    /// [`Translator.translateStreaming`](https://developer.mozilla.org/en-US/docs/Web/API/Translator/translateStreaming)
    ReadableStream translateStreaming(const jsbind::String& input);
    /// The translateStreaming method.
    /// [`Translator.translateStreaming`](https://developer.mozilla.org/en-US/docs/Web/API/Translator/translateStreaming)
    ReadableStream translateStreaming(const jsbind::String& input, const TranslatorTranslateOptions& options);
    /// Getter of the `sourceLanguage` attribute.
    /// [`Translator.sourceLanguage`](https://developer.mozilla.org/en-US/docs/Web/API/Translator/sourceLanguage)
    [[nodiscard]] jsbind::String sourceLanguage() const;
    /// Getter of the `targetLanguage` attribute.
    /// [`Translator.targetLanguage`](https://developer.mozilla.org/en-US/docs/Web/API/Translator/targetLanguage)
    [[nodiscard]] jsbind::String targetLanguage() const;
    /// The measureInputUsage method.
    /// [`Translator.measureInputUsage`](https://developer.mozilla.org/en-US/docs/Web/API/Translator/measureInputUsage)
    jsbind::Promise<double> measureInputUsage(const jsbind::String& input);
    /// The measureInputUsage method.
    /// [`Translator.measureInputUsage`](https://developer.mozilla.org/en-US/docs/Web/API/Translator/measureInputUsage)
    jsbind::Promise<double> measureInputUsage(const jsbind::String& input, const TranslatorTranslateOptions& options);
    /// Getter of the `inputQuota` attribute.
    /// [`Translator.inputQuota`](https://developer.mozilla.org/en-US/docs/Web/API/Translator/inputQuota)
    [[nodiscard]] double inputQuota() const;
    /// The destroy method.
    /// [`Translator.destroy`](https://developer.mozilla.org/en-US/docs/Web/API/Translator/destroy)
    jsbind::Undefined destroy();
};

} // namespace webbind