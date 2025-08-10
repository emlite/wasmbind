#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "InkPresenterParam.hpp"

namespace webbind {

class DelegatedInkTrailPresenter;

/// Interface Ink
/// [`Ink`](https://developer.mozilla.org/en-US/docs/Web/API/Ink)
class Ink : public emlite::Val {
    explicit Ink(Handle h) noexcept;
public:
    explicit Ink(const emlite::Val &val) noexcept;
    static Ink take_ownership(Handle h) noexcept;
    [[nodiscard]] Ink clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The requestPresenter method.
    /// [`Ink.requestPresenter`](https://developer.mozilla.org/en-US/docs/Web/API/Ink/requestPresenter)
    jsbind::Promise<DelegatedInkTrailPresenter> requestPresenter();
    /// The requestPresenter method.
    /// [`Ink.requestPresenter`](https://developer.mozilla.org/en-US/docs/Web/API/Ink/requestPresenter)
    jsbind::Promise<DelegatedInkTrailPresenter> requestPresenter(const InkPresenterParam& param);
};

} // namespace webbind