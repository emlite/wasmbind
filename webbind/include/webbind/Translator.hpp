#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Translator;
class TranslatorCreateOptions;
class TranslatorCreateCoreOptions;
class TranslatorTranslateOptions;
class ReadableStream;
class AbortSignal;


class TranslatorCreateOptions : public emlite::Val {
  explicit TranslatorCreateOptions(Handle h) noexcept;
public:
    static TranslatorCreateOptions take_ownership(Handle h) noexcept;
    explicit TranslatorCreateOptions(const emlite::Val &val) noexcept;
    TranslatorCreateOptions() noexcept;
    [[nodiscard]] TranslatorCreateOptions clone() const noexcept;
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
    [[nodiscard]] jsbind::Function monitor() const;
    void monitor(const jsbind::Function& value);
};

class TranslatorCreateCoreOptions : public emlite::Val {
  explicit TranslatorCreateCoreOptions(Handle h) noexcept;
public:
    static TranslatorCreateCoreOptions take_ownership(Handle h) noexcept;
    explicit TranslatorCreateCoreOptions(const emlite::Val &val) noexcept;
    TranslatorCreateCoreOptions() noexcept;
    [[nodiscard]] TranslatorCreateCoreOptions clone() const noexcept;
    [[nodiscard]] jsbind::String sourceLanguage() const;
    void sourceLanguage(const jsbind::String& value);
    [[nodiscard]] jsbind::String targetLanguage() const;
    void targetLanguage(const jsbind::String& value);
};

class TranslatorTranslateOptions : public emlite::Val {
  explicit TranslatorTranslateOptions(Handle h) noexcept;
public:
    static TranslatorTranslateOptions take_ownership(Handle h) noexcept;
    explicit TranslatorTranslateOptions(const emlite::Val &val) noexcept;
    TranslatorTranslateOptions() noexcept;
    [[nodiscard]] TranslatorTranslateOptions clone() const noexcept;
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

/// The Translator class.
/// [`Translator`](https://developer.mozilla.org/en-US/docs/Web/API/Translator)
class Translator : public emlite::Val {
    explicit Translator(Handle h) noexcept;

public:
    explicit Translator(const emlite::Val &val) noexcept;
    static Translator take_ownership(Handle h) noexcept;

    [[nodiscard]] Translator clone() const noexcept;
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

