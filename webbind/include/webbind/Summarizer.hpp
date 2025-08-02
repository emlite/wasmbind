#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Summarizer;
class SummarizerCreateOptions;
class SummarizerCreateCoreOptions;
class SummarizerSummarizeOptions;
class ReadableStream;
class AbortSignal;


class SummarizerCreateOptions : public emlite::Val {
  explicit SummarizerCreateOptions(Handle h) noexcept;
public:
    static SummarizerCreateOptions take_ownership(Handle h) noexcept;
    explicit SummarizerCreateOptions(const emlite::Val &val) noexcept;
    SummarizerCreateOptions() noexcept;
    [[nodiscard]] SummarizerCreateOptions clone() const noexcept;
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
    [[nodiscard]] jsbind::Function monitor() const;
    void monitor(const jsbind::Function& value);
    [[nodiscard]] jsbind::String sharedContext() const;
    void sharedContext(const jsbind::String& value);
};

class SummarizerCreateCoreOptions : public emlite::Val {
  explicit SummarizerCreateCoreOptions(Handle h) noexcept;
public:
    static SummarizerCreateCoreOptions take_ownership(Handle h) noexcept;
    explicit SummarizerCreateCoreOptions(const emlite::Val &val) noexcept;
    SummarizerCreateCoreOptions() noexcept;
    [[nodiscard]] SummarizerCreateCoreOptions clone() const noexcept;
    [[nodiscard]] SummarizerType type() const;
    void type(const SummarizerType& value);
    [[nodiscard]] SummarizerFormat format() const;
    void format(const SummarizerFormat& value);
    [[nodiscard]] SummarizerLength length() const;
    void length(const SummarizerLength& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> expectedInputLanguages() const;
    void expectedInputLanguages(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> expectedContextLanguages() const;
    void expectedContextLanguages(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::String outputLanguage() const;
    void outputLanguage(const jsbind::String& value);
};

class SummarizerSummarizeOptions : public emlite::Val {
  explicit SummarizerSummarizeOptions(Handle h) noexcept;
public:
    static SummarizerSummarizeOptions take_ownership(Handle h) noexcept;
    explicit SummarizerSummarizeOptions(const emlite::Val &val) noexcept;
    SummarizerSummarizeOptions() noexcept;
    [[nodiscard]] SummarizerSummarizeOptions clone() const noexcept;
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
    [[nodiscard]] jsbind::String context() const;
    void context(const jsbind::String& value);
};

/// The Summarizer class.
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
    /// Getter of the `sharedContext` attribute.
    /// [`Summarizer.sharedContext`](https://developer.mozilla.org/en-US/docs/Web/API/Summarizer/sharedContext)
    [[nodiscard]] jsbind::String sharedContext() const;
    /// Getter of the `type` attribute.
    /// [`Summarizer.type`](https://developer.mozilla.org/en-US/docs/Web/API/Summarizer/type)
    [[nodiscard]] SummarizerType type() const;
    /// Getter of the `format` attribute.
    /// [`Summarizer.format`](https://developer.mozilla.org/en-US/docs/Web/API/Summarizer/format)
    [[nodiscard]] SummarizerFormat format() const;
    /// Getter of the `length` attribute.
    /// [`Summarizer.length`](https://developer.mozilla.org/en-US/docs/Web/API/Summarizer/length)
    [[nodiscard]] SummarizerLength length() const;
    /// Getter of the `expectedInputLanguages` attribute.
    /// [`Summarizer.expectedInputLanguages`](https://developer.mozilla.org/en-US/docs/Web/API/Summarizer/expectedInputLanguages)
    [[nodiscard]] jsbind::TypedArray<jsbind::String> expectedInputLanguages() const;
    /// Getter of the `expectedContextLanguages` attribute.
    /// [`Summarizer.expectedContextLanguages`](https://developer.mozilla.org/en-US/docs/Web/API/Summarizer/expectedContextLanguages)
    [[nodiscard]] jsbind::TypedArray<jsbind::String> expectedContextLanguages() const;
    /// Getter of the `outputLanguage` attribute.
    /// [`Summarizer.outputLanguage`](https://developer.mozilla.org/en-US/docs/Web/API/Summarizer/outputLanguage)
    [[nodiscard]] jsbind::String outputLanguage() const;
    /// The measureInputUsage method.
    /// [`Summarizer.measureInputUsage`](https://developer.mozilla.org/en-US/docs/Web/API/Summarizer/measureInputUsage)
    jsbind::Promise<double> measureInputUsage(const jsbind::String& input);
    /// The measureInputUsage method.
    /// [`Summarizer.measureInputUsage`](https://developer.mozilla.org/en-US/docs/Web/API/Summarizer/measureInputUsage)
    jsbind::Promise<double> measureInputUsage(const jsbind::String& input, const SummarizerSummarizeOptions& options);
    /// Getter of the `inputQuota` attribute.
    /// [`Summarizer.inputQuota`](https://developer.mozilla.org/en-US/docs/Web/API/Summarizer/inputQuota)
    [[nodiscard]] double inputQuota() const;
    /// The destroy method.
    /// [`Summarizer.destroy`](https://developer.mozilla.org/en-US/docs/Web/API/Summarizer/destroy)
    jsbind::Undefined destroy();
};

