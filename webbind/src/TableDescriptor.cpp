#include <webbind/TableDescriptor.hpp>

namespace webbind {

TableDescriptor::TableDescriptor(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
TableDescriptor TableDescriptor::take_ownership(Handle h) noexcept {
    return TableDescriptor(h);
}

TableDescriptor::TableDescriptor(const emlite::Val &val) noexcept: emlite::Val(val) {}

TableDescriptor::TableDescriptor() noexcept: emlite::Val(emlite::Val::object()) {}

TableDescriptor TableDescriptor::clone() const noexcept { return *this; }

TableKind TableDescriptor::element() const {
    return emlite::Val::get("element").as<TableKind>();
}

void TableDescriptor::element(const TableKind& value) {
    emlite::Val::set("element", value);
}

unsigned long TableDescriptor::initial() const {
    return emlite::Val::get("initial").as<unsigned long>();
}

void TableDescriptor::initial(unsigned long value) {
    emlite::Val::set("initial", value);
}

unsigned long TableDescriptor::maximum() const {
    return emlite::Val::get("maximum").as<unsigned long>();
}

void TableDescriptor::maximum(unsigned long value) {
    emlite::Val::set("maximum", value);
}


} // namespace webbind