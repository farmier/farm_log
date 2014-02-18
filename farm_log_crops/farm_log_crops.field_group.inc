<?php
/**
 * @file
 * farm_log_crops.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function farm_log_crops_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_farm_crops_fields|log|farm_fertilize|form';
  $field_group->group_name = 'group_farm_crops_fields';
  $field_group->entity_type = 'log';
  $field_group->bundle = 'farm_fertilize';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Crops + Fields',
    'weight' => '1',
    'children' => array(
      0 => 'field_farm_crops',
      1 => 'field_farm_areas',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Crops + Fields',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-farm-crops-fields field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_farm_crops_fields|log|farm_fertilize|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_farm_crops_fields|log|farm_harvest|form';
  $field_group->group_name = 'group_farm_crops_fields';
  $field_group->entity_type = 'log';
  $field_group->bundle = 'farm_harvest';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Crops + Fields',
    'weight' => '1',
    'children' => array(
      0 => 'field_farm_crops',
      1 => 'field_farm_areas',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Crops + Fields',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-farm-crops-fields field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_farm_crops_fields|log|farm_harvest|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_farm_crops_fields|log|farm_planting|form';
  $field_group->group_name = 'group_farm_crops_fields';
  $field_group->entity_type = 'log';
  $field_group->bundle = 'farm_planting';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Crops + Fields',
    'weight' => '1',
    'children' => array(
      0 => 'field_farm_crops',
      1 => 'field_farm_areas',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Crops + Fields',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-farm-crops-fields field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_farm_crops_fields|log|farm_planting|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_farm_details|log|farm_fertilize|form';
  $field_group->group_name = 'group_farm_details';
  $field_group->entity_type = 'log';
  $field_group->bundle = 'farm_fertilize';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Fertilizing Details',
    'weight' => '2',
    'children' => array(
      0 => 'field_farm_notes',
      1 => 'field_farm_fertilizers',
      2 => 'field_farm_quantity_value',
      3 => 'field_farm_quantity_units',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Fertilizing Details',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-farm-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_farm_details|log|farm_fertilize|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_farm_details|log|farm_harvest|form';
  $field_group->group_name = 'group_farm_details';
  $field_group->entity_type = 'log';
  $field_group->bundle = 'farm_harvest';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Harvest Details',
    'weight' => '2',
    'children' => array(
      0 => 'field_farm_notes',
      1 => 'field_farm_quantity_value',
      2 => 'field_farm_quantity_units',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Harvest Details',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-farm-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_farm_details|log|farm_harvest|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_farm_details|log|farm_planting|form';
  $field_group->group_name = 'group_farm_details';
  $field_group->entity_type = 'log';
  $field_group->bundle = 'farm_planting';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Planting Details',
    'weight' => '2',
    'children' => array(
      0 => 'field_farm_notes',
      1 => 'field_farm_planting_type',
      2 => 'field_farm_quantity_value',
      3 => 'field_farm_quantity_units',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Planting Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-farm-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_farm_details|log|farm_planting|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_farm_files|log|farm_fertilize|form';
  $field_group->group_name = 'group_farm_files';
  $field_group->entity_type = 'log';
  $field_group->bundle = 'farm_fertilize';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Attach Files',
    'weight' => '7',
    'children' => array(
      0 => 'field_farm_images',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Attach Files',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-farm-files field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_farm_files|log|farm_fertilize|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_farm_files|log|farm_harvest|form';
  $field_group->group_name = 'group_farm_files';
  $field_group->entity_type = 'log';
  $field_group->bundle = 'farm_harvest';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Attach Files',
    'weight' => '6',
    'children' => array(
      0 => 'field_farm_images',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Attach Files',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-farm-files field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_farm_files|log|farm_harvest|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_farm_files|log|farm_planting|form';
  $field_group->group_name = 'group_farm_files';
  $field_group->entity_type = 'log';
  $field_group->bundle = 'farm_planting';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Attach Files',
    'weight' => '10',
    'children' => array(
      0 => 'field_farm_images',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Attach Files',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-farm-files field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_farm_files|log|farm_planting|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_farm_related_logs|log|farm_fertilize|form';
  $field_group->group_name = 'group_farm_related_logs';
  $field_group->entity_type = 'log';
  $field_group->bundle = 'farm_fertilize';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related Logs',
    'weight' => '8',
    'children' => array(
      0 => 'field_farm_fertilizings',
      1 => 'field_farm_plantings',
      2 => 'field_farm_issues',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Related Logs',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-farm-related-logs field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_farm_related_logs|log|farm_fertilize|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_farm_related_logs|log|farm_harvest|form';
  $field_group->group_name = 'group_farm_related_logs';
  $field_group->entity_type = 'log';
  $field_group->bundle = 'farm_harvest';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related Logs',
    'weight' => '7',
    'children' => array(
      0 => 'field_farm_harvests',
      1 => 'field_farm_plantings',
      2 => 'field_farm_issues',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Related Logs',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-farm-related-logs field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_farm_related_logs|log|farm_harvest|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_farm_related_logs|log|farm_planting|form';
  $field_group->group_name = 'group_farm_related_logs';
  $field_group->entity_type = 'log';
  $field_group->bundle = 'farm_planting';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related Logs',
    'weight' => '11',
    'children' => array(
      0 => 'field_farm_plantings',
      1 => 'field_farm_issues',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Related Logs',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-farm-related-logs field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_farm_related_logs|log|farm_planting|form'] = $field_group;

  return $export;
}