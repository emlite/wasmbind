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
    InkPresenterParam clone() const noexcept;
    Element presentationArea() const;
    void presentationArea(const Element& value);
};

class Ink : public emlite::Val {
    explicit Ink(Handle h) noexcept;

public:
    explicit Ink(const emlite::Val &val) noexcept;
    static Ink take_ownership(Handle h) noexcept;

    Ink clone() const noexcept;
    jsbind::Promise requestPresenter(const InkPresenterParam& param);
};

