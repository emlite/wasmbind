#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type SummarizerSummarizeOptions
class SummarizerSummarizeOptions : public emlite::Val {
  explicit SummarizerSummarizeOptions(Handle h) noexcept;
public:
    static SummarizerSummarizeOptions take_ownership(Handle h) noexcept;
    explicit SummarizerSummarizeOptions(const emlite::Val &val) noexcept;
    SummarizerSummarizeOptions() noexcept;
    [[nodiscard]] SummarizerSummarizeOptions clone() const noexcept;
    /// Getter of the `signal` attribute.
    [[nodiscard]] AbortSignal signal() const;
    /// Setter of the `signal` attribute.
    void signal(const AbortSignal& value);
    /// Getter of the `context` attribute.
    [[nodiscard]] jsbind::String context() const;
    /// Setter of the `context` attribute.
    void context(const jsbind::String& value);
};

} // namespace webbind