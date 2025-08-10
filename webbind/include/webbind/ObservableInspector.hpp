#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ObservableInspector
/// [`ObservableInspector`](https://developer.mozilla.org/en-US/docs/Web/API/ObservableInspector)
class ObservableInspector : public emlite::Val {
  explicit ObservableInspector(Handle h) noexcept;
public:
    static ObservableInspector take_ownership(Handle h) noexcept;
    explicit ObservableInspector(const emlite::Val &val) noexcept;
    ObservableInspector() noexcept;
    [[nodiscard]] ObservableInspector clone() const noexcept;
    [[nodiscard]] jsbind::Function next() const;
    void next(const jsbind::Function& value);
    [[nodiscard]] jsbind::Function error() const;
    void error(const jsbind::Function& value);
    [[nodiscard]] jsbind::Function complete() const;
    void complete(const jsbind::Function& value);
    [[nodiscard]] jsbind::Function subscribe() const;
    void subscribe(const jsbind::Function& value);
    [[nodiscard]] jsbind::Function abort() const;
    void abort(const jsbind::Function& value);
};

} // namespace webbind