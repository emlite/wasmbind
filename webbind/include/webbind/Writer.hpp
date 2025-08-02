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
    [[nodiscard]] WriterCreateOptions clone() const noexcept;
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
    [[nodiscard]] jsbind::Function monitor() const;
    void monitor(const jsbind::Function& value);
    [[nodiscard]] jsbind::String sharedContext() const;
    void sharedContext(const jsbind::String& value);
};

class WriterCreateCoreOptions : public emlite::Val {
  explicit WriterCreateCoreOptions(Handle h) noexcept;
public:
    static WriterCreateCoreOptions take_ownership(Handle h) noexcept;
    explicit WriterCreateCoreOptions(const emlite::Val &val) noexcept;
    WriterCreateCoreOptions() noexcept;
    [[nodiscard]] WriterCreateCoreOptions clone() const noexcept;
    [[nodiscard]] WriterTone tone() const;
    void tone(const WriterTone& value);
    [[nodiscard]] WriterFormat format() const;
    void format(const WriterFormat& value);
    [[nodiscard]] WriterLength length() const;
    void length(const WriterLength& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> expectedInputLanguages() const;
    void expectedInputLanguages(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> expectedContextLanguages() const;
    void expectedContextLanguages(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::String outputLanguage() const;
    void outputLanguage(const jsbind::String& value);
};

class WriterWriteOptions : public emlite::Val {
  explicit WriterWriteOptions(Handle h) noexcept;
public:
    static WriterWriteOptions take_ownership(Handle h) noexcept;
    explicit WriterWriteOptions(const emlite::Val &val) noexcept;
    WriterWriteOptions() noexcept;
    [[nodiscard]] WriterWriteOptions clone() const noexcept;
    [[nodiscard]] jsbind::String context() const;
    void context(const jsbind::String& value);
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

/// The Writer class.
/// [`Writer`](https://developer.mozilla.org/en-US/docs/Web/API/Writer)
class Writer : public emlite::Val {
    explicit Writer(Handle h) noexcept;

public:
    explicit Writer(const emlite::Val &val) noexcept;
    static Writer take_ownership(Handle h) noexcept;

    [[nodiscard]] Writer clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The create method.
    /// [`Writer.create`](https://developer.mozilla.org/en-US/docs/Web/API/Writer/create)
    static jsbind::Promise<Writer> create();
    /// The create method.
    /// [`Writer.create`](https://developer.mozilla.org/en-US/docs/Web/API/Writer/create)
    static jsbind::Promise<Writer> create(const WriterCreateOptions& options);
    /// The availability method.
    /// [`Writer.availability`](https://developer.mozilla.org/en-US/docs/Web/API/Writer/availability)
    static jsbind::Promise<Availability> availability();
    /// The availability method.
    /// [`Writer.availability`](https://developer.mozilla.org/en-US/docs/Web/API/Writer/availability)
    static jsbind::Promise<Availability> availability(const WriterCreateCoreOptions& options);
    /// The write method.
    /// [`Writer.write`](https://developer.mozilla.org/en-US/docs/Web/API/Writer/write)
    jsbind::Promise<jsbind::String> write(const jsbind::String& input);
    /// The write method.
    /// [`Writer.write`](https://developer.mozilla.org/en-US/docs/Web/API/Writer/write)
    jsbind::Promise<jsbind::String> write(const jsbind::String& input, const WriterWriteOptions& options);
    /// The writeStreaming method.
    /// [`Writer.writeStreaming`](https://developer.mozilla.org/en-US/docs/Web/API/Writer/writeStreaming)
    ReadableStream writeStreaming(const jsbind::String& input);
    /// The writeStreaming method.
    /// [`Writer.writeStreaming`](https://developer.mozilla.org/en-US/docs/Web/API/Writer/writeStreaming)
    ReadableStream writeStreaming(const jsbind::String& input, const WriterWriteOptions& options);
    /// Getter of the `sharedContext` attribute.
    /// [`Writer.sharedContext`](https://developer.mozilla.org/en-US/docs/Web/API/Writer/sharedContext)
    [[nodiscard]] jsbind::String sharedContext() const;
    /// Getter of the `tone` attribute.
    /// [`Writer.tone`](https://developer.mozilla.org/en-US/docs/Web/API/Writer/tone)
    [[nodiscard]] WriterTone tone() const;
    /// Getter of the `format` attribute.
    /// [`Writer.format`](https://developer.mozilla.org/en-US/docs/Web/API/Writer/format)
    [[nodiscard]] WriterFormat format() const;
    /// Getter of the `length` attribute.
    /// [`Writer.length`](https://developer.mozilla.org/en-US/docs/Web/API/Writer/length)
    [[nodiscard]] WriterLength length() const;
    /// Getter of the `expectedInputLanguages` attribute.
    /// [`Writer.expectedInputLanguages`](https://developer.mozilla.org/en-US/docs/Web/API/Writer/expectedInputLanguages)
    [[nodiscard]] jsbind::TypedArray<jsbind::String> expectedInputLanguages() const;
    /// Getter of the `expectedContextLanguages` attribute.
    /// [`Writer.expectedContextLanguages`](https://developer.mozilla.org/en-US/docs/Web/API/Writer/expectedContextLanguages)
    [[nodiscard]] jsbind::TypedArray<jsbind::String> expectedContextLanguages() const;
    /// Getter of the `outputLanguage` attribute.
    /// [`Writer.outputLanguage`](https://developer.mozilla.org/en-US/docs/Web/API/Writer/outputLanguage)
    [[nodiscard]] jsbind::String outputLanguage() const;
    /// The measureInputUsage method.
    /// [`Writer.measureInputUsage`](https://developer.mozilla.org/en-US/docs/Web/API/Writer/measureInputUsage)
    jsbind::Promise<double> measureInputUsage(const jsbind::String& input);
    /// The measureInputUsage method.
    /// [`Writer.measureInputUsage`](https://developer.mozilla.org/en-US/docs/Web/API/Writer/measureInputUsage)
    jsbind::Promise<double> measureInputUsage(const jsbind::String& input, const WriterWriteOptions& options);
    /// Getter of the `inputQuota` attribute.
    /// [`Writer.inputQuota`](https://developer.mozilla.org/en-US/docs/Web/API/Writer/inputQuota)
    [[nodiscard]] double inputQuota() const;
    /// The destroy method.
    /// [`Writer.destroy`](https://developer.mozilla.org/en-US/docs/Web/API/Writer/destroy)
    jsbind::Undefined destroy();
};

