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
    TranslatorCreateOptions clone() const noexcept;
    AbortSignal signal() const;
    void signal(const AbortSignal& value);
    jsbind::Function monitor() const;
    void monitor(const jsbind::Function& value);
};

class TranslatorCreateCoreOptions : public emlite::Val {
  explicit TranslatorCreateCoreOptions(Handle h) noexcept;
public:
    static TranslatorCreateCoreOptions take_ownership(Handle h) noexcept;
    explicit TranslatorCreateCoreOptions(const emlite::Val &val) noexcept;
    TranslatorCreateCoreOptions() noexcept;
    TranslatorCreateCoreOptions clone() const noexcept;
    jsbind::DOMString sourceLanguage() const;
    void sourceLanguage(const jsbind::DOMString& value);
    jsbind::DOMString targetLanguage() const;
    void targetLanguage(const jsbind::DOMString& value);
};

class TranslatorTranslateOptions : public emlite::Val {
  explicit TranslatorTranslateOptions(Handle h) noexcept;
public:
    static TranslatorTranslateOptions take_ownership(Handle h) noexcept;
    explicit TranslatorTranslateOptions(const emlite::Val &val) noexcept;
    TranslatorTranslateOptions() noexcept;
    TranslatorTranslateOptions clone() const noexcept;
    AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

class Translator : public emlite::Val {
    explicit Translator(Handle h) noexcept;

public:
    explicit Translator(const emlite::Val &val) noexcept;
    static Translator take_ownership(Handle h) noexcept;

    Translator clone() const noexcept;
    static jsbind::Promise create(const TranslatorCreateOptions& options);
    static jsbind::Promise availability(const TranslatorCreateCoreOptions& options);
    jsbind::Promise translate(const jsbind::DOMString& input, const TranslatorTranslateOptions& options);
    ReadableStream translateStreaming(const jsbind::DOMString& input, const TranslatorTranslateOptions& options);
    jsbind::DOMString sourceLanguage() const;
    jsbind::DOMString targetLanguage() const;
    jsbind::Promise measureInputUsage(const jsbind::DOMString& input, const TranslatorTranslateOptions& options);
    double inputQuota() const;
    jsbind::Undefined destroy();
};

