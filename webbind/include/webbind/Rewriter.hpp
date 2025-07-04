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
    jsbind::DOMString sharedContext() const;
    void sharedContext(const jsbind::DOMString& value);
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
    jsbind::Sequence<jsbind::DOMString> expectedInputLanguages() const;
    void expectedInputLanguages(const jsbind::Sequence<jsbind::DOMString>& value);
    jsbind::Sequence<jsbind::DOMString> expectedContextLanguages() const;
    void expectedContextLanguages(const jsbind::Sequence<jsbind::DOMString>& value);
    jsbind::DOMString outputLanguage() const;
    void outputLanguage(const jsbind::DOMString& value);
};

class RewriterRewriteOptions : public emlite::Val {
  explicit RewriterRewriteOptions(Handle h) noexcept;
public:
    static RewriterRewriteOptions take_ownership(Handle h) noexcept;
    explicit RewriterRewriteOptions(const emlite::Val &val) noexcept;
    RewriterRewriteOptions() noexcept;
    RewriterRewriteOptions clone() const noexcept;
    jsbind::DOMString context() const;
    void context(const jsbind::DOMString& value);
    AbortSignal signal() const;
    void signal(const AbortSignal& value);
};

class Rewriter : public emlite::Val {
    explicit Rewriter(Handle h) noexcept;

public:
    explicit Rewriter(const emlite::Val &val) noexcept;
    static Rewriter take_ownership(Handle h) noexcept;

    Rewriter clone() const noexcept;
    static jsbind::Promise create(const RewriterCreateOptions& options);
    static jsbind::Promise availability(const RewriterCreateCoreOptions& options);
    jsbind::Promise rewrite(const jsbind::DOMString& input, const RewriterRewriteOptions& options);
    ReadableStream rewriteStreaming(const jsbind::DOMString& input, const RewriterRewriteOptions& options);
    jsbind::DOMString sharedContext() const;
    RewriterTone tone() const;
    RewriterFormat format() const;
    RewriterLength length() const;
    jsbind::FrozenArray<jsbind::DOMString> expectedInputLanguages() const;
    jsbind::FrozenArray<jsbind::DOMString> expectedContextLanguages() const;
    jsbind::DOMString outputLanguage() const;
    jsbind::Promise measureInputUsage(const jsbind::DOMString& input, const RewriterRewriteOptions& options);
    double inputQuota() const;
    jsbind::Undefined destroy();
};

