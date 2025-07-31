#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Rewriter;
class RewriterCreateOptions;
class RewriterCreateCoreOptions;
class RewriterRewriteOptions;
class ReadableStream;
class AbortSignal;


class RewriterCreateOptions : public emlite::Val {
  explicit RewriterCreateOptions(Handle h) noexcept;
public:
    static RewriterCreateOptions take_ownership(Handle h) noexcept;
    explicit RewriterCreateOptions(const emlite::Val &val) noexcept;
    RewriterCreateOptions() noexcept;
    [[nodiscard]] RewriterCreateOptions clone() const noexcept;
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
    [[nodiscard]] jsbind::Function monitor() const;
    void monitor(const jsbind::Function& value);
    [[nodiscard]] jsbind::String sharedContext() const;
    void sharedContext(const jsbind::String& value);
};

class RewriterCreateCoreOptions : public emlite::Val {
  explicit RewriterCreateCoreOptions(Handle h) noexcept;
public:
    static RewriterCreateCoreOptions take_ownership(Handle h) noexcept;
    explicit RewriterCreateCoreOptions(const emlite::Val &val) noexcept;
    RewriterCreateCoreOptions() noexcept;
    [[nodiscard]] RewriterCreateCoreOptions clone() const noexcept;
    [[nodiscard]] RewriterTone tone() const;
    void tone(const RewriterTone& value);
    [[nodiscard]] RewriterFormat format() const;
    void format(const RewriterFormat& value);
    [[nodiscard]] RewriterLength length() const;
    void length(const RewriterLength& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> expectedInputLanguages() const;
    void expectedInputLanguages(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> expectedContextLanguages() const;
    void expectedContextLanguages(const jsbind::TypedArray<jsbind::String>& value);
    [[nodiscard]] jsbind::String outputLanguage() const;
    void outputLanguage(const jsbind::String& value);
};

class RewriterRewriteOptions : public emlite::Val {
  explicit RewriterRewriteOptions(Handle h) noexcept;
public:
    static RewriterRewriteOptions take_ownership(Handle h) noexcept;
    explicit RewriterRewriteOptions(const emlite::Val &val) noexcept;
    RewriterRewriteOptions() noexcept;
    [[nodiscard]] RewriterRewriteOptions clone() const noexcept;
    [[nodiscard]] jsbind::String context() const;
    void context(const jsbind::String& value);
    [[nodiscard]] AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

/// The Rewriter class.
/// [`Rewriter`](https://developer.mozilla.org/en-US/docs/Web/API/Rewriter)
class Rewriter : public emlite::Val {
    explicit Rewriter(Handle h) noexcept;

public:
    explicit Rewriter(const emlite::Val &val) noexcept;
    static Rewriter take_ownership(Handle h) noexcept;

    [[nodiscard]] Rewriter clone() const noexcept;
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
    /// Getter of the `sharedContext` attribute.
    /// [`Rewriter.sharedContext`](https://developer.mozilla.org/en-US/docs/Web/API/Rewriter/sharedContext)
    [[nodiscard]] jsbind::String sharedContext() const;
    /// Getter of the `tone` attribute.
    /// [`Rewriter.tone`](https://developer.mozilla.org/en-US/docs/Web/API/Rewriter/tone)
    [[nodiscard]] RewriterTone tone() const;
    /// Getter of the `format` attribute.
    /// [`Rewriter.format`](https://developer.mozilla.org/en-US/docs/Web/API/Rewriter/format)
    [[nodiscard]] RewriterFormat format() const;
    /// Getter of the `length` attribute.
    /// [`Rewriter.length`](https://developer.mozilla.org/en-US/docs/Web/API/Rewriter/length)
    [[nodiscard]] RewriterLength length() const;
    /// Getter of the `expectedInputLanguages` attribute.
    /// [`Rewriter.expectedInputLanguages`](https://developer.mozilla.org/en-US/docs/Web/API/Rewriter/expectedInputLanguages)
    [[nodiscard]] jsbind::TypedArray<jsbind::String> expectedInputLanguages() const;
    /// Getter of the `expectedContextLanguages` attribute.
    /// [`Rewriter.expectedContextLanguages`](https://developer.mozilla.org/en-US/docs/Web/API/Rewriter/expectedContextLanguages)
    [[nodiscard]] jsbind::TypedArray<jsbind::String> expectedContextLanguages() const;
    /// Getter of the `outputLanguage` attribute.
    /// [`Rewriter.outputLanguage`](https://developer.mozilla.org/en-US/docs/Web/API/Rewriter/outputLanguage)
    [[nodiscard]] jsbind::String outputLanguage() const;
    /// The measureInputUsage method.
    /// [`Rewriter.measureInputUsage`](https://developer.mozilla.org/en-US/docs/Web/API/Rewriter/measureInputUsage)
    jsbind::Promise<double> measureInputUsage(const jsbind::String& input);
    /// The measureInputUsage method.
    /// [`Rewriter.measureInputUsage`](https://developer.mozilla.org/en-US/docs/Web/API/Rewriter/measureInputUsage)
    jsbind::Promise<double> measureInputUsage(const jsbind::String& input, const RewriterRewriteOptions& options);
    /// Getter of the `inputQuota` attribute.
    /// [`Rewriter.inputQuota`](https://developer.mozilla.org/en-US/docs/Web/API/Rewriter/inputQuota)
    [[nodiscard]] double inputQuota() const;
    /// The destroy method.
    /// [`Rewriter.destroy`](https://developer.mozilla.org/en-US/docs/Web/API/Rewriter/destroy)
    jsbind::Undefined destroy();
};

