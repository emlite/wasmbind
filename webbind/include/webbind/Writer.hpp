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
    jsbind::String sharedContext() const;
    void sharedContext(const jsbind::String& value);
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
    jsbind::TypedArray<jsbind::String> expectedInputLanguages() const;
    void expectedInputLanguages(const jsbind::TypedArray<jsbind::String>& value);
    jsbind::TypedArray<jsbind::String> expectedContextLanguages() const;
    void expectedContextLanguages(const jsbind::TypedArray<jsbind::String>& value);
    jsbind::String outputLanguage() const;
    void outputLanguage(const jsbind::String& value);
};

class WriterWriteOptions : public emlite::Val {
  explicit WriterWriteOptions(Handle h) noexcept;
public:
    static WriterWriteOptions take_ownership(Handle h) noexcept;
    explicit WriterWriteOptions(const emlite::Val &val) noexcept;
    WriterWriteOptions() noexcept;
    WriterWriteOptions clone() const noexcept;
    jsbind::String context() const;
    void context(const jsbind::String& value);
    AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

class Writer : public emlite::Val {
    explicit Writer(Handle h) noexcept;

public:
    explicit Writer(const emlite::Val &val) noexcept;
    static Writer take_ownership(Handle h) noexcept;

    Writer clone() const noexcept;
    static jsbind::Promise<Writer> create();
    static jsbind::Promise<Writer> create(const WriterCreateOptions& options);
    static jsbind::Promise<Availability> availability();
    static jsbind::Promise<Availability> availability(const WriterCreateCoreOptions& options);
    jsbind::Promise<jsbind::String> write(const jsbind::String& input);
    jsbind::Promise<jsbind::String> write(const jsbind::String& input, const WriterWriteOptions& options);
    ReadableStream writeStreaming(const jsbind::String& input);
    ReadableStream writeStreaming(const jsbind::String& input, const WriterWriteOptions& options);
    jsbind::String sharedContext() const;
    WriterTone tone() const;
    WriterFormat format() const;
    WriterLength length() const;
    jsbind::TypedArray<jsbind::String> expectedInputLanguages() const;
    jsbind::TypedArray<jsbind::String> expectedContextLanguages() const;
    jsbind::String outputLanguage() const;
    jsbind::Promise<double> measureInputUsage(const jsbind::String& input);
    jsbind::Promise<double> measureInputUsage(const jsbind::String& input, const WriterWriteOptions& options);
    double inputQuota() const;
    jsbind::Undefined destroy();
};

