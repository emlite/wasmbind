#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "WriterCreateOptions.hpp"
#include "WriterCreateCoreOptions.hpp"
#include "WriterWriteOptions.hpp"
#include "enums.hpp"

namespace webbind {

class Writer;
class ReadableStream;

/// Interface Writer
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
    /// [`Writer.sharedContext`](https://developer.mozilla.org/en-US/docs/Web/API/Writer/sharedContext)
    /// [`Writer.sharedContext`](https://developer.mozilla.org/en-US/docs/Web/API/Writer/sharedContext)
    [[nodiscard]] jsbind::String sharedContext() const;
    /// [`Writer.tone`](https://developer.mozilla.org/en-US/docs/Web/API/Writer/tone)
    /// [`Writer.tone`](https://developer.mozilla.org/en-US/docs/Web/API/Writer/tone)
    [[nodiscard]] WriterTone tone() const;
    /// [`Writer.format`](https://developer.mozilla.org/en-US/docs/Web/API/Writer/format)
    /// [`Writer.format`](https://developer.mozilla.org/en-US/docs/Web/API/Writer/format)
    [[nodiscard]] WriterFormat format() const;
    /// [`Writer.length`](https://developer.mozilla.org/en-US/docs/Web/API/Writer/length)
    /// [`Writer.length`](https://developer.mozilla.org/en-US/docs/Web/API/Writer/length)
    [[nodiscard]] WriterLength length() const;
    /// [`Writer.expectedInputLanguages`](https://developer.mozilla.org/en-US/docs/Web/API/Writer/expectedInputLanguages)
    /// [`Writer.expectedInputLanguages`](https://developer.mozilla.org/en-US/docs/Web/API/Writer/expectedInputLanguages)
    [[nodiscard]] jsbind::TypedArray<jsbind::String> expectedInputLanguages() const;
    /// [`Writer.expectedContextLanguages`](https://developer.mozilla.org/en-US/docs/Web/API/Writer/expectedContextLanguages)
    /// [`Writer.expectedContextLanguages`](https://developer.mozilla.org/en-US/docs/Web/API/Writer/expectedContextLanguages)
    [[nodiscard]] jsbind::TypedArray<jsbind::String> expectedContextLanguages() const;
    /// [`Writer.outputLanguage`](https://developer.mozilla.org/en-US/docs/Web/API/Writer/outputLanguage)
    /// [`Writer.outputLanguage`](https://developer.mozilla.org/en-US/docs/Web/API/Writer/outputLanguage)
    [[nodiscard]] jsbind::String outputLanguage() const;
    /// The measureInputUsage method.
    /// [`Writer.measureInputUsage`](https://developer.mozilla.org/en-US/docs/Web/API/Writer/measureInputUsage)
    jsbind::Promise<double> measureInputUsage(const jsbind::String& input);
    /// The measureInputUsage method.
    /// [`Writer.measureInputUsage`](https://developer.mozilla.org/en-US/docs/Web/API/Writer/measureInputUsage)
    jsbind::Promise<double> measureInputUsage(const jsbind::String& input, const WriterWriteOptions& options);
    /// [`Writer.inputQuota`](https://developer.mozilla.org/en-US/docs/Web/API/Writer/inputQuota)
    /// [`Writer.inputQuota`](https://developer.mozilla.org/en-US/docs/Web/API/Writer/inputQuota)
    [[nodiscard]] double inputQuota() const;
    /// The destroy method.
    /// [`Writer.destroy`](https://developer.mozilla.org/en-US/docs/Web/API/Writer/destroy)
    jsbind::Undefined destroy();
};

} // namespace webbind