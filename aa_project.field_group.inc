<?php
/**
 * @file
 * aa_project.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function aa_project_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|project|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_roles',
      2 => 'field_years',
      3 => 'field_type',
      4 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_content|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_images|node|project|form';
  $field_group->group_name = 'group_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '1',
    'children' => array(
      0 => 'field_images',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-images field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_images|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location|node|project|form';
  $field_group->group_name = 'group_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '3',
    'children' => array(
      0 => 'field_location',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-location field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_location|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_preview|node|project|form';
  $field_group->group_name = 'group_preview';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Preview',
    'weight' => '4',
    'children' => array(
      0 => 'field_preview_enable',
      1 => 'field_preview_title',
      2 => 'field_preview_caption',
      3 => 'field_preview_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-preview field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_preview|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_upcoming|node|project|form';
  $field_group->group_name = 'group_upcoming';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Upcoming',
    'weight' => '5',
    'children' => array(
      0 => 'field_upcoming_enable',
      1 => 'field_upcoming_title',
      2 => 'field_upcoming_caption',
      3 => 'field_upcoming_link',
      4 => 'field_upcoming_date',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Upcoming',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-upcoming field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_upcoming|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_videos|node|project|form';
  $field_group->group_name = 'group_videos';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Videos',
    'weight' => '2',
    'children' => array(
      0 => 'field_videos',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-videos field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_videos|node|project|form'] = $field_group;

  return $export;
}
