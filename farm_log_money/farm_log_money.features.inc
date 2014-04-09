<?php
/**
 * @file
 * farm_log_money.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function farm_log_money_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function farm_log_money_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_default_log_type().
 */
function farm_log_money_default_log_type() {
  $items = array();
  $items['farm_loss'] = entity_import('log_type', '{
    "type" : "farm_loss",
    "label" : "Loss",
    "weight" : 0,
    "name_pattern" : "Lose [log:field_farm_quantity_value] [log:field-farm-quantity-units]",
    "rdf_mapping" : []
  }');
  $items['farm_purchase'] = entity_import('log_type', '{
    "type" : "farm_purchase",
    "label" : "Purchase",
    "weight" : 0,
    "name_pattern" : "Purchase [log:field_farm_quantity_value] [log:field-farm-quantity-units]",
    "rdf_mapping" : []
  }');
  $items['farm_sale'] = entity_import('log_type', '{
    "type" : "farm_sale",
    "label" : "Sale",
    "weight" : 0,
    "name_pattern" : "Sell [log:field_farm_quantity_value] [log:field-farm-quantity-units]",
    "rdf_mapping" : []
  }');
  return $items;
}