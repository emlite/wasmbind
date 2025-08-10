#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SummarizerCreateOptions.hpp"
#include "SummarizerCreateCoreOptions.hpp"
#include "SummarizerSummarizeOptions.hpp"
#include "enums.hpp"

namespace webbind {

class Summarizer;
class ReadableStream;

/// Interface Summarizer
/// [`Summarizer`](https://developer.mozilla.org/en-US/docs/Web/API/Summarizer)
class Summarizer : public emlite::Val {
    explicit Summarizer(Handle h) noexcept;
public:
    explicit Summarizer(const emlite::Val &val) noexcept;
    static Summarizer take_ownership(Handle h) noexcept;
    [[nodiscard]] Summarizer clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The create method.
    /// [`Summarizer.create`](https://developer.mozilla.org/en-US/docs/Web/API/Summarizer/create)
    static jsbind::Promise<Summarizer> create();
    /// The create method.
    /// [`Summarizer.create`](https://developer.mozilla.org/en-US/docs/Web/API/Summarizer/create)
    static jsbind::Promise<Summarizer> create(const SummarizerCreateOptions& options);
    /// The availability method.
    /// [`Summarizer.availability`](https://developer.mozilla.org/en-US/docs/Web/API/Summarizer/availability)
    static jsbind::Promise<Availability> availability();
    /// The availability method.
    /// [`Summarizer.availability`](https://developer.mozilla.org/en-US/docs/Web/API/Summarizer/availability)
    static jsbind::Promise<Availability> availability(const SummarizerCreateCoreOptions& options);
    /// The summarize method.
    /// [`Summarizer.summarize`](https://developer.mozilla.org/en-US/docs/Web/API/Summarizer/summarize)
    jsbind::Promise<jsbind::String> summarize(const jsbind::String& input);
    /// The summarize method.
    /// [`Summarizer.summarize`](https://developer.mozilla.org/en-US/docs/Web/API/Summarizer/summarize)
    jsbind::Promise<jsbind::String> summarize(const jsbind::String& input, const SummarizerSummarizeOptions& options);
    /// The summarizeStreaming method.
    /// [`Summarizer.summarizeStreaming`](https://developer.mozilla.org/en-US/docs/Web/API/Summarizer/summarizeStreaming)
    ReadableStream summarizeStreaming(const jsbind::String& input);
    /// The summarizeStreaming method.
    /// [`Summarizer.summarizeStreaming`](https://developer.mozilla.org/en-US/docs/Web/API/Summarizer/summarizeStreaming)
    ReadableStream summarizeStreaming(const jsbind::String& input, const SummarizerSummarizeOptions& options);
    /// [`Summarizer.sharedContext`](https://developer.mozilla.org/en-US/docs/Web/API/Summarizer/sharedContext)
    /// [`Summarizer.sharedContext`](https://developer.mozilla.org/en-US/docs/Web/API/Summarizer/sharedContext)
    [[nodiscard]] jsbind::String sharedContext() const;
    /// [`Summarizer.type`](https://developer.mozilla.org/en-US/docs/Web/API/Summarizer/type)
    /// [`Summarizer.type`](https://developer.mozilla.org/en-US/docs/Web/API/Summarizer/type)
    [[nodiscard]] SummarizerType type() const;
    /// [`Summarizer.format`](https://developer.mozilla.org/en-US/docs/Web/API/Summarizer/format)
    /// [`Summarizer.format`](https://developer.mozilla.org/en-US/docs/Web/API/Summarizer/format)
    [[nodiscard]] SummarizerFormat format() const;
    /// [`Summarizer.length`](https://developer.mozilla.org/en-US/docs/Web/API/Summarizer/length)
    /// [`Summarizer.length`](https://developer.mozilla.org/en-US/docs/Web/API/Summarizer/length)
    [[nodiscard]] SummarizerLength length() const;
    /// [`Summarizer.expectedInputLanguages`](https://developer.mozilla.org/en-US/docs/Web/API/Summarizer/expectedInputLanguages)
    /// [`Summarizer.expectedInputLanguages`](https://developer.mozilla.org/en-US/docs/Web/API/Summarizer/expectedInputLanguages)
    [[nodiscard]] jsbind::TypedArray<jsbind::String> expectedInputLanguages() const;
    /// [`Summarizer.expectedContextLanguages`](https://developer.mozilla.org/en-US/docs/Web/API/Summarizer/expectedContextLanguages)
    /// [`Summarizer.expectedContextLanguages`](https://developer.mozilla.org/en-US/docs/Web/API/Summarizer/expectedContextLanguages)
    [[nodiscard]] jsbind::TypedArray<jsbind::String> expectedContextLanguages() const;
    /// [`Summarizer.outputLanguage`](https://developer.mozilla.org/en-US/docs/Web/API/Summarizer/outputLanguage)
    /// [`Summarizer.outputLanguage`](https://developer.mozilla.org/en-US/docs/Web/API/Summarizer/outputLanguage)
    [[nodiscard]] jsbind::String outputLanguage() const;
    /// The measureInputUsage method.
    /// [`Summarizer.measureInputUsage`](https://developer.mozilla.org/en-US/docs/Web/API/Summarizer/measureInputUsage)
    jsbind::Promise<double> measureInputUsage(const jsbind::String& input);
    /// The measureInputUsage method.
    /// [`Summarizer.measureInputUsage`](https://developer.mozilla.org/en-US/docs/Web/API/Summarizer/measureInputUsage)
    jsbind::Promise<double> measureInputUsage(const jsbind::String& input, const SummarizerSummarizeOptions& options);
    /// [`Summarizer.inputQuota`](https://developer.mozilla.org/en-US/docs/Web/API/Summarizer/inputQuota)
    /// [`Summarizer.inputQuota`](https://developer.mozilla.org/en-US/docs/Web/API/Summarizer/inputQuota)
    [[nodiscard]] double inputQuota() const;
    /// The destroy method.
    /// [`Summarizer.destroy`](https://developer.mozilla.org/en-US/docs/Web/API/Summarizer/destroy)
    jsbind::Undefined destroy();
};

} // namespace webbind