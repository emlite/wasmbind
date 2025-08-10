#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class NavigationHistoryEntry;

/// Dictionary type NavigationResult
/// [`NavigationResult`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationResult)
class NavigationResult : public emlite::Val {
  explicit NavigationResult(Handle h) noexcept;
public:
    static NavigationResult take_ownership(Handle h) noexcept;
    explicit NavigationResult(const emlite::Val &val) noexcept;
    NavigationResult() noexcept;
    [[nodiscard]] NavigationResult clone() const noexcept;
    [[nodiscard]] jsbind::Promise<NavigationHistoryEntry> committed() const;
    void committed(const jsbind::Promise<NavigationHistoryEntry>& value);
    [[nodiscard]] jsbind::Promise<NavigationHistoryEntry> finished() const;
    void finished(const jsbind::Promise<NavigationHistoryEntry>& value);
};

} // namespace webbind