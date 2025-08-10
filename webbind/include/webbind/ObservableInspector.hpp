#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ObservableInspector
class ObservableInspector : public emlite::Val {
  explicit ObservableInspector(Handle h) noexcept;
public:
    static ObservableInspector take_ownership(Handle h) noexcept;
    explicit ObservableInspector(const emlite::Val &val) noexcept;
    ObservableInspector() noexcept;
    [[nodiscard]] ObservableInspector clone() const noexcept;
    /// Getter of the `next` attribute.
    [[nodiscard]] jsbind::Function next() const;
    /// Setter of the `next` attribute.
    void next(const jsbind::Function& value);
    /// Getter of the `error` attribute.
    [[nodiscard]] jsbind::Function error() const;
    /// Setter of the `error` attribute.
    void error(const jsbind::Function& value);
    /// Getter of the `complete` attribute.
    [[nodiscard]] jsbind::Function complete() const;
    /// Setter of the `complete` attribute.
    void complete(const jsbind::Function& value);
    /// Getter of the `subscribe` attribute.
    [[nodiscard]] jsbind::Function subscribe() const;
    /// Setter of the `subscribe` attribute.
    void subscribe(const jsbind::Function& value);
    /// Getter of the `abort` attribute.
    [[nodiscard]] jsbind::Function abort() const;
    /// Setter of the `abort` attribute.
    void abort(const jsbind::Function& value);
};

} // namespace webbind