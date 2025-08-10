#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type RewriterRewriteOptions
class RewriterRewriteOptions : public emlite::Val {
  explicit RewriterRewriteOptions(Handle h) noexcept;
public:
    static RewriterRewriteOptions take_ownership(Handle h) noexcept;
    explicit RewriterRewriteOptions(const emlite::Val &val) noexcept;
    RewriterRewriteOptions() noexcept;
    [[nodiscard]] RewriterRewriteOptions clone() const noexcept;
    /// Getter of the `context` attribute.
    [[nodiscard]] jsbind::String context() const;
    /// Setter of the `context` attribute.
    void context(const jsbind::String& value);
    /// Getter of the `signal` attribute.
    [[nodiscard]] AbortSignal signal() const;
    /// Setter of the `signal` attribute.
    void signal(const AbortSignal& value);
};

} // namespace webbind