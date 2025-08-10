#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type SummarizerSummarizeOptions
/// [`SummarizerSummarizeOptions`](https://developer.mozilla.org/en-US/docs/Web/API/SummarizerSummarizeOptions)
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

} // namespace webbind