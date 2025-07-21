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
    SummarizerCreateOptions clone() const noexcept;
    AbortSignal signal() const;
    void signal(const AbortSignal& value);
    jsbind::Function monitor() const;
    void monitor(const jsbind::Function& value);
    jsbind::DOMString sharedContext() const;
    void sharedContext(const jsbind::DOMString& value);
};

class SummarizerCreateCoreOptions : public emlite::Val {
  explicit SummarizerCreateCoreOptions(Handle h) noexcept;
public:
    static SummarizerCreateCoreOptions take_ownership(Handle h) noexcept;
    explicit SummarizerCreateCoreOptions(const emlite::Val &val) noexcept;
    SummarizerCreateCoreOptions() noexcept;
    SummarizerCreateCoreOptions clone() const noexcept;
    SummarizerType type() const;
    void type(const SummarizerType& value);
    SummarizerFormat format() const;
    void format(const SummarizerFormat& value);
    SummarizerLength length() const;
    void length(const SummarizerLength& value);
    jsbind::Sequence<jsbind::DOMString> expectedInputLanguages() const;
    void expectedInputLanguages(const jsbind::Sequence<jsbind::DOMString>& value);
    jsbind::Sequence<jsbind::DOMString> expectedContextLanguages() const;
    void expectedContextLanguages(const jsbind::Sequence<jsbind::DOMString>& value);
    jsbind::DOMString outputLanguage() const;
    void outputLanguage(const jsbind::DOMString& value);
};

class SummarizerSummarizeOptions : public emlite::Val {
  explicit SummarizerSummarizeOptions(Handle h) noexcept;
public:
    static SummarizerSummarizeOptions take_ownership(Handle h) noexcept;
    explicit SummarizerSummarizeOptions(const emlite::Val &val) noexcept;
    SummarizerSummarizeOptions() noexcept;
    SummarizerSummarizeOptions clone() const noexcept;
    AbortSignal signal() const;
    void signal(const AbortSignal& value);
    jsbind::DOMString context() const;
    void context(const jsbind::DOMString& value);
};

class Summarizer : public emlite::Val {
    explicit Summarizer(Handle h) noexcept;

public:
    explicit Summarizer(const emlite::Val &val) noexcept;
    static Summarizer take_ownership(Handle h) noexcept;

    Summarizer clone() const noexcept;
    static jsbind::Promise<Summarizer> create();
    static jsbind::Promise<Summarizer> create(const SummarizerCreateOptions& options);
    static jsbind::Promise<Availability> availability();
    static jsbind::Promise<Availability> availability(const SummarizerCreateCoreOptions& options);
    jsbind::Promise<jsbind::DOMString> summarize(const jsbind::DOMString& input);
    jsbind::Promise<jsbind::DOMString> summarize(const jsbind::DOMString& input, const SummarizerSummarizeOptions& options);
    ReadableStream summarizeStreaming(const jsbind::DOMString& input);
    ReadableStream summarizeStreaming(const jsbind::DOMString& input, const SummarizerSummarizeOptions& options);
    jsbind::DOMString sharedContext() const;
    SummarizerType type() const;
    SummarizerFormat format() const;
    SummarizerLength length() const;
    jsbind::FrozenArray<jsbind::DOMString> expectedInputLanguages() const;
    jsbind::FrozenArray<jsbind::DOMString> expectedContextLanguages() const;
    jsbind::DOMString outputLanguage() const;
    jsbind::Promise<double> measureInputUsage(const jsbind::DOMString& input);
    jsbind::Promise<double> measureInputUsage(const jsbind::DOMString& input, const SummarizerSummarizeOptions& options);
    double inputQuota() const;
    jsbind::Undefined destroy();
};

