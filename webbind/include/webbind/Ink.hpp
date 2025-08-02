#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class DelegatedInkTrailPresenter;
class InkPresenterParam;
class Element;


class InkPresenterParam : public emlite::Val {
  explicit InkPresenterParam(Handle h) noexcept;
public:
    static InkPresenterParam take_ownership(Handle h) noexcept;
    explicit InkPresenterParam(const emlite::Val &val) noexcept;
    InkPresenterParam() noexcept;
    [[nodiscard]] InkPresenterParam clone() const noexcept;
    [[nodiscard]] Element presentationArea() const;
    void presentationArea(const Element& value);
};

/// The Ink class.
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

