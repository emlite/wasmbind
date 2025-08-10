#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class AbortSignal;

/// Dictionary type RewriterRewriteOptions
/// [`RewriterRewriteOptions`](https://developer.mozilla.org/en-US/docs/Web/API/RewriterRewriteOptions)
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

} // namespace webbind