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
    jsbind::String sourceLanguage() const;
    void sourceLanguage(const jsbind::String& value);
    jsbind::String targetLanguage() const;
    void targetLanguage(const jsbind::String& value);
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
    static jsbind::Promise<Translator> create(const TranslatorCreateOptions& options);
    static jsbind::Promise<Availability> availability(const TranslatorCreateCoreOptions& options);
    jsbind::Promise<jsbind::String> translate(const jsbind::String& input);
    jsbind::Promise<jsbind::String> translate(const jsbind::String& input, const TranslatorTranslateOptions& options);
    ReadableStream translateStreaming(const jsbind::String& input);
    ReadableStream translateStreaming(const jsbind::String& input, const TranslatorTranslateOptions& options);
    jsbind::String sourceLanguage() const;
    jsbind::String targetLanguage() const;
    jsbind::Promise<double> measureInputUsage(const jsbind::String& input);
    jsbind::Promise<double> measureInputUsage(const jsbind::String& input, const TranslatorTranslateOptions& options);
    double inputQuota() const;
    jsbind::Undefined destroy();
};

