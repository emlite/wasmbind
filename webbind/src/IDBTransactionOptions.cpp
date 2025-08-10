#include "webbind/IDBTransactionOptions.hpp"

using emlite::Val;
namespace webbind {

IDBTransactionOptions::IDBTransactionOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IDBTransactionOptions IDBTransactionOptions::take_ownership(Handle h) noexcept {
        return IDBTransactionOptions(h);
    }
IDBTransactionOptions::IDBTransactionOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
IDBTransactionOptions::IDBTransactionOptions() noexcept: emlite::Val(emlite::Val::object()) {}
IDBTransactionOptions IDBTransactionOptions::clone() const noexcept { return *this; }

IDBTransactionDurability IDBTransactionOptions::durability() const {
    return emlite::Val::get("durability").as<IDBTransactionDurability>();
}

void IDBTransactionOptions::durability(const IDBTransactionDurability& value) {
    emlite::Val::set("durability", value);
}


} // namespace webbind