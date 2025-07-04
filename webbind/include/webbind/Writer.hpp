#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Writer;
class WriterCreateOptions;
class WriterCreateCoreOptions;
class WriterWriteOptions;
class ReadableStream;
class AbortSignal;


class WriterCreateOptions : public emlite::Val {
  explicit WriterCreateOptions(Handle h) noexcept;
public:
    static WriterCreateOptions take_ownership(Handle h) noexcept;
    explicit WriterCreateOptions(const emlite::Val &val) noexcept;
    WriterCreateOptions() noexcept;
    WriterCreateOptions clone() const noexcept;
    AbortSignal signal() const;
    void signal(const AbortSignal& value);
    jsbind::Function monitor() const;
    void monitor(const jsbind::Function& value);
    jsbind::DOMString sharedContext() const;
    void sharedContext(const jsbind::DOMString& value);
};

class WriterCreateCoreOptions : public emlite::Val {
  explicit WriterCreateCoreOptions(Handle h) noexcept;
public:
    static WriterCreateCoreOptions take_ownership(Handle h) noexcept;
    explicit WriterCreateCoreOptions(const emlite::Val &val) noexcept;
    WriterCreateCoreOptions() noexcept;
    WriterCreateCoreOptions clone() const noexcept;
    WriterTone tone() const;
    void tone(const WriterTone& value);
    WriterFormat format() const;
    void format(const WriterFormat& value);
    WriterLength length() const;
    void length(const WriterLength& value);
    jsbind::Sequence<jsbind::DOMString> expectedInputLanguages() const;
    void expectedInputLanguages(const jsbind::Sequence<jsbind::DOMString>& value);
    jsbind::Sequence<jsbind::DOMString> expectedContextLanguages() const;
    void expectedContextLanguages(const jsbind::Sequence<jsbind::DOMString>& value);
    jsbind::DOMString outputLanguage() const;
    void outputLanguage(const jsbind::DOMString& value);
};

class WriterWriteOptions : public emlite::Val {
  explicit WriterWriteOptions(Handle h) noexcept;
public:
    static WriterWriteOptions take_ownership(Handle h) noexcept;
    explicit WriterWriteOptions(const emlite::Val &val) noexcept;
    WriterWriteOptions() noexcept;
    WriterWriteOptions clone() const noexcept;
    jsbind::DOMString context() const;
    void context(const jsbind::DOMString& value);
    AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

class Writer : public emlite::Val {
    explicit Writer(Handle h) noexcept;

public:
    explicit Writer(const emlite::Val &val) noexcept;
    static Writer take_ownership(Handle h) noexcept;

    Writer clone() const noexcept;
    static jsbind::Promise create(const WriterCreateOptions& options);
    static jsbind::Promise availability(const WriterCreateCoreOptions& options);
    jsbind::Promise write(const jsbind::DOMString& input, const WriterWriteOptions& options);
    ReadableStream writeStreaming(const jsbind::DOMString& input, const WriterWriteOptions& options);
    jsbind::DOMString sharedContext() const;
    WriterTone tone() const;
    WriterFormat format() const;
    WriterLength length() const;
    jsbind::FrozenArray<jsbind::DOMString> expectedInputLanguages() const;
    jsbind::FrozenArray<jsbind::DOMString> expectedContextLanguages() const;
    jsbind::DOMString outputLanguage() const;
    jsbind::Promise measureInputUsage(const jsbind::DOMString& input, const WriterWriteOptions& options);
    double inputQuota() const;
    jsbind::Undefined destroy();
};

