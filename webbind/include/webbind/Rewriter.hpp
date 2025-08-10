#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RewriterCreateOptions.hpp"
#include "RewriterCreateCoreOptions.hpp"
#include "RewriterRewriteOptions.hpp"
#include "enums.hpp"

namespace webbind {

class Rewriter;
class ReadableStream;

/// Interface Rewriter
/// [`Rewriter`](https://developer.mozilla.org/en-US/docs/Web/API/Rewriter)
class Rewriter : public emlite::Val {
    explicit Rewriter(Handle h) noexcept;
public:
    explicit Rewriter(const emlite::Val &val) noexcept;
    static Rewriter take_ownership(Handle h) noexcept;
    [[nodiscard]] Rewriter clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The create method.
    /// [`Rewriter.create`](https://developer.mozilla.org/en-US/docs/Web/API/Rewriter/create)
    static jsbind::Promise<Rewriter> create();
    /// The create method.
    /// [`Rewriter.create`](https://developer.mozilla.org/en-US/docs/Web/API/Rewriter/create)
    static jsbind::Promise<Rewriter> create(const RewriterCreateOptions& options);
    /// The availability method.
    /// [`Rewriter.availability`](https://developer.mozilla.org/en-US/docs/Web/API/Rewriter/availability)
    static jsbind::Promise<Availability> availability();
    /// The availability method.
    /// [`Rewriter.availability`](https://developer.mozilla.org/en-US/docs/Web/API/Rewriter/availability)
    static jsbind::Promise<Availability> availability(const RewriterCreateCoreOptions& options);
    /// The rewrite method.
    /// [`Rewriter.rewrite`](https://developer.mozilla.org/en-US/docs/Web/API/Rewriter/rewrite)
    jsbind::Promise<jsbind::String> rewrite(const jsbind::String& input);
    /// The rewrite method.
    /// [`Rewriter.rewrite`](https://developer.mozilla.org/en-US/docs/Web/API/Rewriter/rewrite)
    jsbind::Promise<jsbind::String> rewrite(const jsbind::String& input, const RewriterRewriteOptions& options);
    /// The rewriteStreaming method.
    /// [`Rewriter.rewriteStreaming`](https://developer.mozilla.org/en-US/docs/Web/API/Rewriter/rewriteStreaming)
    ReadableStream rewriteStreaming(const jsbind::String& input);
    /// The rewriteStreaming method.
    /// [`Rewriter.rewriteStreaming`](https://developer.mozilla.org/en-US/docs/Web/API/Rewriter/rewriteStreaming)
    ReadableStream rewriteStreaming(const jsbind::String& input, const RewriterRewriteOptions& options);
    /// [`Rewriter.sharedContext`](https://developer.mozilla.org/en-US/docs/Web/API/Rewriter/sharedContext)
    /// [`Rewriter.sharedContext`](https://developer.mozilla.org/en-US/docs/Web/API/Rewriter/sharedContext)
    [[nodiscard]] jsbind::String sharedContext() const;
    /// [`Rewriter.tone`](https://developer.mozilla.org/en-US/docs/Web/API/Rewriter/tone)
    /// [`Rewriter.tone`](https://developer.mozilla.org/en-US/docs/Web/API/Rewriter/tone)
    [[nodiscard]] RewriterTone tone() const;
    /// [`Rewriter.format`](https://developer.mozilla.org/en-US/docs/Web/API/Rewriter/format)
    /// [`Rewriter.format`](https://developer.mozilla.org/en-US/docs/Web/API/Rewriter/format)
    [[nodiscard]] RewriterFormat format() const;
    /// [`Rewriter.length`](https://developer.mozilla.org/en-US/docs/Web/API/Rewriter/length)
    /// [`Rewriter.length`](https://developer.mozilla.org/en-US/docs/Web/API/Rewriter/length)
    [[nodiscard]] RewriterLength length() const;
    /// [`Rewriter.expectedInputLanguages`](https://developer.mozilla.org/en-US/docs/Web/API/Rewriter/expectedInputLanguages)
    /// [`Rewriter.expectedInputLanguages`](https://developer.mozilla.org/en-US/docs/Web/API/Rewriter/expectedInputLanguages)
    [[nodiscard]] jsbind::TypedArray<jsbind::String> expectedInputLanguages() const;
    /// [`Rewriter.expectedContextLanguages`](https://developer.mozilla.org/en-US/docs/Web/API/Rewriter/expectedContextLanguages)
    /// [`Rewriter.expectedContextLanguages`](https://developer.mozilla.org/en-US/docs/Web/API/Rewriter/expectedContextLanguages)
    [[nodiscard]] jsbind::TypedArray<jsbind::String> expectedContextLanguages() const;
    /// [`Rewriter.outputLanguage`](https://developer.mozilla.org/en-US/docs/Web/API/Rewriter/outputLanguage)
    /// [`Rewriter.outputLanguage`](https://developer.mozilla.org/en-US/docs/Web/API/Rewriter/outputLanguage)
    [[nodiscard]] jsbind::String outputLanguage() const;
    /// The measureInputUsage method.
    /// [`Rewriter.measureInputUsage`](https://developer.mozilla.org/en-US/docs/Web/API/Rewriter/measureInputUsage)
    jsbind::Promise<double> measureInputUsage(const jsbind::String& input);
    /// The measureInputUsage method.
    /// [`Rewriter.measureInputUsage`](https://developer.mozilla.org/en-US/docs/Web/API/Rewriter/measureInputUsage)
    jsbind::Promise<double> measureInputUsage(const jsbind::String& input, const RewriterRewriteOptions& options);
    /// [`Rewriter.inputQuota`](https://developer.mozilla.org/en-US/docs/Web/API/Rewriter/inputQuota)
    /// [`Rewriter.inputQuota`](https://developer.mozilla.org/en-US/docs/Web/API/Rewriter/inputQuota)
    [[nodiscard]] double inputQuota() const;
    /// The destroy method.
    /// [`Rewriter.destroy`](https://developer.mozilla.org/en-US/docs/Web/API/Rewriter/destroy)
    jsbind::Undefined destroy();
};

} // namespace webbind