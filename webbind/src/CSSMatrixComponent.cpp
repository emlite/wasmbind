#include <webbind/CSSMatrixComponent.hpp>
#include <webbind/DOMMatrix.hpp>
#include <webbind/DOMMatrixReadOnly.hpp>


CSSMatrixComponent CSSMatrixComponent::take_ownership(Handle h) noexcept {
        return CSSMatrixComponent(h);
    }
CSSMatrixComponent CSSMatrixComponent::clone() const noexcept { return *this; }
emlite::Val CSSMatrixComponent::instance() noexcept { return emlite::Val::global("CSSMatrixComponent"); }
CSSMatrixComponent::CSSMatrixComponent(Handle h) noexcept : CSSTransformComponent(emlite::Val::take_ownership(h)) {}
CSSMatrixComponent::CSSMatrixComponent(const emlite::Val &val) noexcept: CSSTransformComponent(val) {}


CSSMatrixComponent::CSSMatrixComponent(const DOMMatrixReadOnly& matrix) : CSSTransformComponent(emlite::Val::global("CSSMatrixComponent").new_(matrix)) {}

CSSMatrixComponent::CSSMatrixComponent(const DOMMatrixReadOnly& matrix, const jsbind::Any& options) : CSSTransformComponent(emlite::Val::global("CSSMatrixComponent").new_(matrix, options)) {}

DOMMatrix CSSMatrixComponent::matrix() const {
    return CSSTransformComponent::get("matrix").as<DOMMatrix>();
}

void CSSMatrixComponent::matrix(const DOMMatrix& value) {
    CSSTransformComponent::set("matrix", value);
}

