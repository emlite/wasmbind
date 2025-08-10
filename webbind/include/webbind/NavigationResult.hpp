#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class NavigationHistoryEntry;

/// Dictionary type NavigationResult
class NavigationResult : public emlite::Val {
  explicit NavigationResult(Handle h) noexcept;
public:
    static NavigationResult take_ownership(Handle h) noexcept;
    explicit NavigationResult(const emlite::Val &val) noexcept;
    NavigationResult() noexcept;
    [[nodiscard]] NavigationResult clone() const noexcept;
    /// Getter of the `committed` attribute.
    [[nodiscard]] jsbind::Promise<NavigationHistoryEntry> committed() const;
    /// Setter of the `committed` attribute.
    void committed(const jsbind::Promise<NavigationHistoryEntry>& value);
    /// Getter of the `finished` attribute.
    [[nodiscard]] jsbind::Promise<NavigationHistoryEntry> finished() const;
    /// Setter of the `finished` attribute.
    void finished(const jsbind::Promise<NavigationHistoryEntry>& value);
};

} // namespace webbind