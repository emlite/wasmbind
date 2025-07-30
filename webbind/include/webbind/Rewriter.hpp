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
    RewriterCreateOptions clone() const noexcept;
    AbortSignal signal() const;
    void signal(const AbortSignal& value);
    jsbind::Function monitor() const;
    void monitor(const jsbind::Function& value);
    jsbind::String sharedContext() const;
    void sharedContext(const jsbind::String& value);
};

class RewriterCreateCoreOptions : public emlite::Val {
  explicit RewriterCreateCoreOptions(Handle h) noexcept;
public:
    static RewriterCreateCoreOptions take_ownership(Handle h) noexcept;
    explicit RewriterCreateCoreOptions(const emlite::Val &val) noexcept;
    RewriterCreateCoreOptions() noexcept;
    RewriterCreateCoreOptions clone() const noexcept;
    RewriterTone tone() const;
    void tone(const RewriterTone& value);
    RewriterFormat format() const;
    void format(const RewriterFormat& value);
    RewriterLength length() const;
    void length(const RewriterLength& value);
    jsbind::TypedArray<jsbind::String> expectedInputLanguages() const;
    void expectedInputLanguages(const jsbind::TypedArray<jsbind::String>& value);
    jsbind::TypedArray<jsbind::String> expectedContextLanguages() const;
    void expectedContextLanguages(const jsbind::TypedArray<jsbind::String>& value);
    jsbind::String outputLanguage() const;
    void outputLanguage(const jsbind::String& value);
};

class RewriterRewriteOptions : public emlite::Val {
  explicit RewriterRewriteOptions(Handle h) noexcept;
public:
    static RewriterRewriteOptions take_ownership(Handle h) noexcept;
    explicit RewriterRewriteOptions(const emlite::Val &val) noexcept;
    RewriterRewriteOptions() noexcept;
    RewriterRewriteOptions clone() const noexcept;
    jsbind::String context() const;
    void context(const jsbind::String& value);
    AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

class Rewriter : public emlite::Val {
    explicit Rewriter(Handle h) noexcept;

public:
    explicit Rewriter(const emlite::Val &val) noexcept;
    static Rewriter take_ownership(Handle h) noexcept;

    Rewriter clone() const noexcept;
    static jsbind::Promise<Rewriter> create();
    static jsbind::Promise<Rewriter> create(const RewriterCreateOptions& options);
    static jsbind::Promise<Availability> availability();
    static jsbind::Promise<Availability> availability(const RewriterCreateCoreOptions& options);
    jsbind::Promise<jsbind::String> rewrite(const jsbind::String& input);
    jsbind::Promise<jsbind::String> rewrite(const jsbind::String& input, const RewriterRewriteOptions& options);
    ReadableStream rewriteStreaming(const jsbind::String& input);
    ReadableStream rewriteStreaming(const jsbind::String& input, const RewriterRewriteOptions& options);
    jsbind::String sharedContext() const;
    RewriterTone tone() const;
    RewriterFormat format() const;
    RewriterLength length() const;
    jsbind::TypedArray<jsbind::String> expectedInputLanguages() const;
    jsbind::TypedArray<jsbind::String> expectedContextLanguages() const;
    jsbind::String outputLanguage() const;
    jsbind::Promise<double> measureInputUsage(const jsbind::String& input);
    jsbind::Promise<double> measureInputUsage(const jsbind::String& input, const RewriterRewriteOptions& options);
    double inputQuota() const;
    jsbind::Undefined destroy();
};

